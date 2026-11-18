// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 15

// DebugDraw @ 14a8eebb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FArchivedPoseHistory::DebugDraw
          (FArchivedPoseHistory *this,UWorld *param_1,FColor param_2)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double adVar6 [2];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FTransformTrajectorySample *pFVar17;
  TTransform<double> *pTVar18;
  ForElementType<UE::Math::TTransform<double>_> FVar19;
  int iVar20;
  uint uVar21;
  FPoseHistoryEntry *this_00;
  uint uVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined4 uVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar47;
  FColor_u_0 local_res18 [2];
  undefined1 auStackY_3438 [32];
  uint local_33f8;
  longlong local_33e0;
  TVector<double>_u_0 local_33d8;
  TVector<double>_u_0 local_33c0;
  TVector<double>_u_0 local_33a8;
  TVector<double>_u_0 local_3390;
  TVector<double>_u_0 local_3378;
  TVector<double>_u_0 local_3360;
  TVector<double>_u_0 local_3348;
  TVector<double>_u_0 local_3330;
  TVector<double>_u_0 local_3318;
  double local_3300 [2];
  undefined8 local_32f0;
  undefined1 local_32e8 [16];
  double local_32d8;
  double local_32d0;
  double dStack_32c8;
  double local_32c0;
  double local_32b8 [2];
  undefined8 local_32a8;
  undefined1 local_32a0 [16];
  double local_3290;
  double local_3288;
  double dStack_3280;
  double local_3278;
  FTransformTrajectorySample local_3268;
  TTransform<double> local_3228;
  TTransform<double> local_31c8;
  TTransform<double> local_3168;
  TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  local_3108;
  ulonglong local_e8;
  
  adVar6 = ___xmm_00000000000000003ff0000000000000;
  fVar5 = __real_bf800000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3438;
  if ((param_2.field0_0x0._3_1_ != '\0') && ((this->Trajectory).Samples.ArrayNum != 0)) {
    local_3108.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TTransform<double>_>)0x0;
    local_3108.ArrayNum = 0;
    local_3108.ArrayMax = 0x80;
    local_33f8 = 0;
    local_res18[0] = param_2.field0_0x0;
    if (0 < (this->Entries).ArrayNum) {
      local_33e0 = 0;
      fVar38 = __real_40c00000;
      fVar47 = __real_322bcc77;
      uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      dVar39 = ___xmm_3ff00000000000003ff0000000000000;
      dVar40 = _UNK_150689688;
      do {
        uVar21 = 0;
        if ((int)local_33f8 < (this->Entries).ArrayNum) {
          uVar21 = ~local_33f8 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar12 = local_3108.ArrayNum;
        this_00 = (FPoseHistoryEntry *)((this->Entries).AllocatorInstance.Data + local_33e0);
        uVar21 = (this_00->ComponentSpaceRotations).ArrayNum;
        if ((int)uVar21 < local_3108.ArrayNum) {
          uVar21 = local_3108.ArrayNum;
        }
        if (local_3108.ArrayNum < (int)uVar21) {
          iVar20 = uVar21 - local_3108.ArrayNum;
          iVar15 = Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
                             (0x60,0x10,iVar20,&local_3108.AllocatorInstance,&local_3108.ArrayNum,
                              &local_3108.ArrayMax);
          FVar19 = (ForElementType<UE::Math::TTransform<double>_>)&local_3108;
          if (local_3108.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Math::TTransform<double>_>)0x0) {
            FVar19 = local_3108.AllocatorInstance.SecondaryData;
          }
          DefaultConstructItems<UE::Math::TTransform<double>,int>
                    ((void *)((longlong)iVar15 * 0x60 + (longlong)FVar19),iVar20);
        }
        else {
          if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
          }
          if ((int)uVar21 < local_3108.ArrayNum) {
            uVar22 = local_3108.ArrayNum - uVar21;
            if (((int)(uVar21 | uVar22) < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar13)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (uVar22 != 0) {
              TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
              ::RemoveAtImpl(&local_3108,uVar21,uVar22);
            }
          }
        }
        bVar13 = fVar47 < (float)((uint)this_00->AccumulatedSeconds & uVar16);
        uVar21 = 0;
        if (0 < (this_00->ComponentSpaceRotations).ArrayNum) {
          lVar23 = 0;
          do {
            pFVar17 = FTransformTrajectory::GetSampleAtTime
                                (&this->Trajectory,&local_3268,this_00->AccumulatedSeconds,false);
            local_31c8.Rotation.ZW.m128d_f64[0] = (pFVar17->Facing).Z;
            local_31c8.Rotation.ZW.m128d_f64[1] = (pFVar17->Facing).W;
            local_31c8.Rotation.XY.m128d_f64[0] = (pFVar17->Facing).X;
            local_31c8.Rotation.XY.m128d_f64[1] = (pFVar17->Facing).Y;
            local_31c8.Translation.ZW.m128d_f64[0] = (pFVar17->Position).field0_0x0._s_0.Z;
            local_31c8.Translation.XY.m128d_f64[0] = (pFVar17->Position).field0_0x0._s_0.X;
            local_31c8.Translation.XY.m128d_f64[1] = (pFVar17->Position).field0_0x0._s_0.Y;
            local_31c8.Translation.ZW.m128d_f64[1] = 0.0;
            local_31c8.Scale3D.ZW.m128d_f64 = adVar6;
            local_31c8.Scale3D.XY.m128d_f64[0] = dVar39;
            local_31c8.Scale3D.XY.m128d_f64[1] = dVar40;
            pTVar18 = FPoseHistoryEntry::GetComponentSpaceTransform(this_00,&local_3168,uVar21);
            local_3228.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_3228.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_3228.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_3228.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_3228.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_3228.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_3228.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_3228.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_3228.Scale3D.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_3228.Scale3D.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float1110.m128_f32[1];
            local_3228.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_3228.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_3228.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_3228.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_3228.Scale3D.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_3228.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_3228,pTVar18,&local_31c8);
            if ((int)uVar21 < iVar12) {
              local_33a8._s_0.Z = local_3228.Translation.ZW.m128d_f64[0];
              local_33a8._s_0.X = local_3228.Translation.XY.m128d_f64[0];
              local_33a8._s_0.Y = local_3228.Translation.XY.m128d_f64[1];
              uVar16 = 0;
              if ((int)uVar21 < local_3108.ArrayNum) {
                uVar16 = ~uVar21 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar19 = (ForElementType<UE::Math::TTransform<double>_>)&local_3108;
              if (local_3108.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Math::TTransform<double>_>)0x0) {
                FVar19 = local_3108.AllocatorInstance.SecondaryData;
              }
              pdVar1 = (double *)(lVar23 + 0x20 + (longlong)FVar19);
              local_3390._s_0.X = *pdVar1;
              local_3390._s_0.Y = pdVar1[1];
              local_3390._s_0.Z = *(double *)(lVar23 + 0x30 + (longlong)FVar19);
              DrawDebugLine(param_1,(TVector<double> *)&local_3390._s_0,
                            (TVector<double> *)&local_33a8._s_0,(FColor *)&local_res18[0]._s_0,false
                            ,fVar5,'\x01',0.0);
            }
            if (bVar13) {
              if (uVar21 == 0) goto LAB_14a8ef383;
            }
            else {
              local_3378._s_0.X = local_3228.Translation.XY.m128d_f64[0];
              local_3378._s_0.Y = local_3228.Translation.XY.m128d_f64[1];
              local_3378._s_0.Z = local_3228.Translation.ZW.m128d_f64[0];
              DrawDebugPoint(param_1,(TVector<double> *)&local_3378._s_0,fVar38,
                             (FColor *)&local_res18[0]._s_0,false,fVar5,'\x01');
              if (uVar21 == 0) {
                auVar36._8_8_ = local_31c8.Rotation.ZW.m128d_f64[1];
                auVar36._0_8_ = local_31c8.Rotation.ZW.m128d_f64[0];
                auVar24._8_8_ = local_31c8.Rotation.XY.m128d_f64[1];
                auVar24._0_8_ = local_31c8.Rotation.XY.m128d_f64[0];
                local_32f0 = 0;
                dVar41 = adVar6[0];
                dVar46 = adVar6[1];
                auVar42._0_8_ =
                     dVar46 * local_31c8.Rotation.XY.m128d_f64[0] -
                     local_31c8.Rotation.XY.m128d_f64[1] * dVar41;
                auVar42._8_8_ =
                     local_31c8.Rotation.XY.m128d_f64[1] * 0.0 -
                     local_31c8.Rotation.ZW.m128d_f64[0] * dVar46;
                auVar36 = blendpd(auVar24,auVar36,2);
                local_32c0 = local_3228.Translation.ZW.m128d_f64[0];
                local_3360._s_0.Z = local_3228.Translation.ZW.m128d_f64[0];
                auVar24 = blendpd((undefined1  [16])adVar6,ZEXT816(0),2);
                auVar25._0_8_ =
                     auVar24._0_8_ * local_31c8.Rotation.ZW.m128d_f64[0] - auVar36._0_8_ * 0.0;
                auVar25._8_8_ =
                     auVar24._8_8_ * local_31c8.Rotation.ZW.m128d_f64[1] - auVar36._8_8_ * 0.0;
                local_32d0 = local_3228.Translation.XY.m128d_f64[0];
                dStack_32c8 = local_3228.Translation.XY.m128d_f64[1];
                auVar24 = blendpd(auVar42,auVar25,2);
                dVar39 = auVar42._8_8_ + auVar42._8_8_;
                dVar40 = auVar25._0_8_ + auVar25._0_8_;
                uVar37 = (undefined4)((ulonglong)dVar40 >> 0x20);
                auVar43._0_8_ = auVar24._0_8_ + auVar24._0_8_;
                auVar43._8_8_ = auVar24._8_8_ + auVar24._8_8_;
                auVar31._8_4_ = SUB84(dVar40,0);
                auVar31._0_8_ = dVar39;
                auVar31._12_4_ = uVar37;
                auVar26._8_4_ = SUB84(dVar40,0);
                auVar26._0_8_ = dVar39;
                auVar26._12_4_ = uVar37;
                auVar24 = blendpd(auVar26,auVar43,2);
                auVar32._0_8_ =
                     auVar31._8_8_ * local_31c8.Rotation.XY.m128d_f64[0] -
                     dVar39 * local_31c8.Rotation.XY.m128d_f64[1];
                auVar32._8_8_ =
                     auVar43._0_8_ * local_31c8.Rotation.XY.m128d_f64[1] -
                     dVar40 * local_31c8.Rotation.ZW.m128d_f64[0];
                auVar27._0_8_ =
                     auVar24._0_8_ * local_31c8.Rotation.ZW.m128d_f64[0] -
                     auVar43._0_8_ * auVar36._0_8_;
                auVar27._8_8_ =
                     auVar24._8_8_ * local_31c8.Rotation.ZW.m128d_f64[1] -
                     auVar43._8_8_ * auVar36._8_8_;
                dVar39 = dVar39 * local_31c8.Rotation.ZW.m128d_f64[1] + dVar41 + auVar32._8_8_;
                dVar40 = dVar40 * local_31c8.Rotation.ZW.m128d_f64[1] + dVar46 + auVar27._0_8_;
                auVar24 = blendpd(auVar32,auVar27,2);
                local_32d8 = auVar43._0_8_ * local_31c8.Rotation.ZW.m128d_f64[1] + 0.0 +
                             auVar24._0_8_;
                local_33d8._s_0.X =
                     dVar39 * __real_4039000000000000 + local_3228.Translation.XY.m128d_f64[0];
                local_32e8._8_4_ = SUB84(dVar40,0);
                local_32e8._0_8_ = dVar39;
                local_32e8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                local_33d8._s_0.Y =
                     dVar40 * __real_4039000000000000 + local_3228.Translation.XY.m128d_f64[1];
                local_3300 = adVar6;
                local_33d8._s_0.Z =
                     local_32d8 * __real_4039000000000000 + local_3228.Translation.ZW.m128d_f64[0];
                local_3360._s_0.X = local_3228.Translation.XY.m128d_f64[0];
                local_3360._s_0.Y = local_3228.Translation.XY.m128d_f64[1];
                DrawDebugLine(param_1,(TVector<double> *)&local_3360._s_0,
                              (TVector<double> *)&local_33d8._s_0,&FColor::Black,false,fVar5,'\x01',
                              0.0);
                dVar35 = local_3228.Rotation.XY.m128d_f64[1];
                local_32a8 = 0;
                dVar3 = local_3228.Rotation.ZW.m128d_f64[0];
                auVar24 = blendpd((undefined1  [16])adVar6,ZEXT816(0),2);
                dVar4 = local_3228.Rotation.ZW.m128d_f64[1];
                auVar36 = blendpd((undefined1  [16])local_3228.Rotation.XY.m128d_f64,
                                  (undefined1  [16])local_3228.Rotation.ZW.m128d_f64,2);
                auVar44._0_8_ = dVar46 * local_3228.Rotation.XY.m128d_f64[0] - dVar35 * dVar41;
                auVar44._8_8_ = dVar35 * 0.0 - dVar3 * dVar46;
                local_3278 = local_3228.Translation.ZW.m128d_f64[0];
                auVar28._0_8_ = auVar24._0_8_ * dVar3 - auVar36._0_8_ * 0.0;
                auVar28._8_8_ = auVar24._8_8_ * dVar4 - auVar36._8_8_ * 0.0;
                local_3288 = local_3228.Translation.XY.m128d_f64[0];
                dStack_3280 = local_3228.Translation.XY.m128d_f64[1];
                auVar24 = blendpd(auVar44,auVar28,2);
                dVar39 = auVar44._8_8_ + auVar44._8_8_;
                dVar40 = auVar28._0_8_ + auVar28._0_8_;
                uVar37 = (undefined4)((ulonglong)dVar40 >> 0x20);
                auVar45._0_8_ = auVar24._0_8_ + auVar24._0_8_;
                auVar45._8_8_ = auVar24._8_8_ + auVar24._8_8_;
                auVar33._8_4_ = SUB84(dVar40,0);
                auVar33._0_8_ = dVar39;
                auVar33._12_4_ = uVar37;
                local_3348._s_0.Z = local_3228.Translation.ZW.m128d_f64[0];
                auVar29._8_4_ = SUB84(dVar40,0);
                auVar29._0_8_ = dVar39;
                auVar29._12_4_ = uVar37;
                auVar24 = blendpd(auVar29,auVar45,2);
                auVar34._0_8_ =
                     auVar33._8_8_ * local_3228.Rotation.XY.m128d_f64[0] - dVar39 * dVar35;
                auVar34._8_8_ = auVar45._0_8_ * dVar35 - dVar40 * dVar3;
                auVar30._0_8_ = auVar24._0_8_ * dVar3 - auVar45._0_8_ * auVar36._0_8_;
                auVar30._8_8_ = auVar24._8_8_ * dVar4 - auVar45._8_8_ * auVar36._8_8_;
                dVar39 = dVar39 * dVar4 + dVar41 + auVar34._8_8_;
                dVar40 = dVar40 * dVar4 + dVar46 + auVar30._0_8_;
                auVar24 = blendpd(auVar34,auVar30,2);
                local_3290 = auVar45._0_8_ * dVar4 + 0.0 + auVar24._0_8_;
                local_33c0._s_0.X =
                     dVar39 * __real_4034000000000000 + local_3228.Translation.XY.m128d_f64[0];
                local_32a0._8_4_ = SUB84(dVar40,0);
                local_32a0._0_8_ = dVar39;
                local_32a0._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                local_33c0._s_0.Y =
                     dVar40 * __real_4034000000000000 + local_3228.Translation.XY.m128d_f64[1];
                local_32b8 = adVar6;
                local_33c0._s_0.Z =
                     local_3290 * __real_4034000000000000 + local_3228.Translation.ZW.m128d_f64[0];
                local_3348._s_0.X = local_3228.Translation.XY.m128d_f64[0];
                local_3348._s_0.Y = local_3228.Translation.XY.m128d_f64[1];
                DrawDebugLine(param_1,(TVector<double> *)&local_3348._s_0,
                              (TVector<double> *)&local_33c0._s_0,&FColor::White,false,fVar5,'\x01',
                              0.0);
LAB_14a8ef383:
                local_3330._s_0.X = local_31c8.Translation.XY.m128d_f64[0];
                local_3330._s_0.Y = local_31c8.Translation.XY.m128d_f64[1];
                local_3330._s_0.Z = local_31c8.Translation.ZW.m128d_f64[0];
                local_3318._s_0.X = local_3228.Translation.XY.m128d_f64[0];
                local_3318._s_0.Y = local_3228.Translation.XY.m128d_f64[1];
                local_3318._s_0.Z = local_3228.Translation.ZW.m128d_f64[0];
                DrawDebugLine(param_1,(TVector<double> *)&local_3318._s_0,
                              (TVector<double> *)&local_3330._s_0,&FColor::Purple,false,fVar5,'\x01'
                              ,0.0);
              }
            }
            dVar9 = local_3228.Scale3D.XY.m128d_f64[1];
            dVar8 = local_3228.Scale3D.XY.m128d_f64[0];
            dVar41 = local_3228.Translation.XY.m128d_f64[1];
            dVar35 = local_3228.Translation.XY.m128d_f64[0];
            dVar39 = local_3228.Rotation.XY.m128d_f64[0];
            dVar40 = local_3228.Rotation.XY.m128d_f64[1];
            dVar3 = local_3228.Rotation.ZW.m128d_f64[0];
            dVar4 = local_3228.Rotation.ZW.m128d_f64[1];
            dVar46 = local_3228.Translation.ZW.m128d_f64[0];
            dVar7 = local_3228.Translation.ZW.m128d_f64[1];
            dVar10 = local_3228.Scale3D.ZW.m128d_f64[0];
            dVar11 = local_3228.Scale3D.ZW.m128d_f64[1];
            uVar16 = 0;
            if ((int)uVar21 < local_3108.ArrayNum) {
              uVar16 = ~uVar21 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar19 = (ForElementType<UE::Math::TTransform<double>_>)&local_3108;
            if (local_3108.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Math::TTransform<double>_>)0x0) {
              FVar19 = local_3108.AllocatorInstance.SecondaryData;
            }
            uVar21 = uVar21 + 1;
            *(double *)(lVar23 + (longlong)FVar19) = dVar39;
            ((double *)(lVar23 + (longlong)FVar19))[1] = dVar40;
            pdVar1 = (double *)(lVar23 + 0x10 + (longlong)FVar19);
            *pdVar1 = dVar3;
            pdVar1[1] = dVar4;
            pdVar1 = (double *)(lVar23 + 0x20 + (longlong)FVar19);
            *pdVar1 = dVar35;
            pdVar1[1] = dVar41;
            pdVar1 = (double *)(lVar23 + 0x30 + (longlong)FVar19);
            *pdVar1 = dVar46;
            pdVar1[1] = dVar7;
            pdVar1 = (double *)(lVar23 + 0x40 + (longlong)FVar19);
            *pdVar1 = dVar8;
            pdVar1[1] = dVar9;
            pdVar1 = (double *)(lVar23 + 0x50 + (longlong)FVar19);
            *pdVar1 = dVar10;
            pdVar1[1] = dVar11;
            lVar23 = lVar23 + 0x60;
            fVar38 = __real_40c00000;
            fVar47 = __real_322bcc77;
            uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            dVar39 = ___xmm_3ff00000000000003ff0000000000000;
            dVar40 = _UNK_150689688;
          } while ((int)uVar21 < (this_00->ComponentSpaceRotations).ArrayNum);
        }
        local_33f8 = local_33f8 + 1;
        local_33e0 = local_33e0 + 0x48;
      } while ((int)local_33f8 < (this->Entries).ArrayNum);
    }
    if (local_3108.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TTransform<double>_>)0x0) {
      FMemory::Free((void *)local_3108.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetCurveValueAtTime @ 14a8f9c40

bool __thiscall
UE::PoseSearch::FArchivedPoseHistory::GetCurveValueAtTime
          (FArchivedPoseHistory *this,float param_1,FName *param_2,float *param_3,bool param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TArrayView<FName_const_,int> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_38 [32];
  
  uVar9 = (this->Entries).ArrayNum;
  if ((int)uVar9 < 1) {
    *param_3 = 0.0;
    bVar5 = false;
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    if (1 < (int)uVar9) {
      uVar11 = 0;
      uVar10 = uVar9;
      do {
        iVar1 = (uVar10 >> 1) + uVar11;
        pFVar2 = (this->Entries).AllocatorInstance.Data + (longlong)iVar1 * 0x48 + 0x40;
        if (*(float *)pFVar2 <= param_1 && param_1 != *(float *)pFVar2) {
          uVar11 = iVar1 + (uVar10 & 1);
        }
        uVar8 = uVar10 >> 1;
        uVar10 = uVar10 >> 1;
      } while (uVar8 != 0);
      uVar10 = uVar9 - 1;
      if ((int)uVar11 < (int)(uVar9 - 1)) {
        uVar10 = uVar11;
      }
      uVar11 = 1;
      if (1 < (int)uVar10) {
        uVar11 = uVar10;
      }
      uVar10 = uVar11 - 1;
    }
    uVar8 = 0;
    if ((int)uVar10 < (int)uVar9) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar2 = (this->Entries).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar11 < (this->Entries).ArrayNum) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar3 = (this->Entries).AllocatorInstance.Data;
    pTVar7 = (TArrayView<FName_const_,int> *)(**(code **)(this->_padding_ + 0x48))(this,local_38);
    bVar5 = LerpEntries(param_1,param_4,(FPoseHistoryEntry *)(pFVar2 + (longlong)(int)uVar10 * 0x48)
                        ,(FPoseHistoryEntry *)(pFVar3 + (longlong)(int)uVar11 * 0x48),param_2,pTVar7
                        ,param_3);
  }
  return bVar5;
}

// GetTransformAtTime @ 14a8fe990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::PoseSearch::FArchivedPoseHistory::GetTransformAtTime
          (FArchivedPoseHistory *this,float param_1,TTransform<double> *param_2,USkeleton *param_3,
          ushort param_4,ushort param_5,bool param_6)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  FTransformTrajectorySample *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStackY_1f8 [32];
  TTransform<double> local_1a8;
  FTransformTrajectorySample local_148;
  FTransformTrajectorySample local_108;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (param_4 == param_5) {
    uVar9 = 1;
    *&(param_2->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_2->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_2->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_2->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else if (param_5 == 0xfffe) {
    if (param_4 == 0xffff) {
      pFVar13 = FTransformTrajectory::GetSampleAtTime(&this->Trajectory,&local_148,param_1,param_6);
      dVar4 = (pFVar13->Facing).Y;
      dVar2 = (pFVar13->Position).field0_0x0._s_0.Z;
      dVar5 = (pFVar13->Position).field0_0x0._s_0.X;
      dVar6 = (pFVar13->Position).field0_0x0._s_0.Y;
      dVar7 = (pFVar13->Facing).Z;
      dVar8 = (pFVar13->Facing).W;
      uVar9 = 1;
      (param_2->Rotation).XY.m128d_f64[0] = (pFVar13->Facing).X;
      (param_2->Rotation).XY.m128d_f64[1] = dVar4;
      (param_2->Rotation).ZW.m128d_f64[0] = dVar7;
      (param_2->Rotation).ZW.m128d_f64[1] = dVar8;
      (param_2->Translation).XY.m128d_f64[0] = dVar5;
      (param_2->Translation).XY.m128d_f64[1] = dVar6;
      (param_2->Translation).ZW.m128d_f64[0] = dVar2;
      (param_2->Translation).ZW.m128d_f64[1] = 0.0;
      dVar2 = _UNK_150689688;
      (param_2->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      (param_2->Scale3D).XY.m128d_f64[1] = dVar2;
      dVar2 = _UNK_150689518;
      (param_2->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      (param_2->Scale3D).ZW.m128d_f64[1] = dVar2;
    }
    else {
      uVar9 = (**(code **)(this->_padding_ + 8))(this);
      pFVar13 = FTransformTrajectory::GetSampleAtTime(&this->Trajectory,&local_108,param_1,param_6);
      local_c8.Rotation.ZW.m128d_f64[0] = (pFVar13->Facing).Z;
      local_c8.Rotation.ZW.m128d_f64[1] = (pFVar13->Facing).W;
      local_c8.Rotation.XY.m128d_f64[0] = (pFVar13->Facing).X;
      local_c8.Rotation.XY.m128d_f64[1] = (pFVar13->Facing).Y;
      local_c8.Translation.XY.m128d_f64[0] = (pFVar13->Position).field0_0x0._s_0.X;
      local_c8.Translation.XY.m128d_f64[1] = (pFVar13->Position).field0_0x0._s_0.Y;
      local_c8.Translation.ZW.m128d_f64[0] = (pFVar13->Position).field0_0x0._s_0.Z;
      local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      UE::Math::TTransform<double>::Multiply(param_2,param_2,&local_c8);
    }
  }
  else if (param_4 < 0xfffe) {
    uVar15 = (this->Entries).ArrayNum;
    if ((int)uVar15 < 1) {
      uVar9 = 0;
      *&(param_2->Rotation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *&(param_2->Rotation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *&(param_2->Translation).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *&(param_2->Translation).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *&(param_2->Scale3D).XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *&(param_2->Scale3D).ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      uVar17 = 0;
      uVar16 = 0;
      if (1 < (int)uVar15) {
        uVar17 = 0;
        uVar16 = uVar15;
        do {
          iVar12 = (uVar16 >> 1) + uVar17;
          pFVar1 = (this->Entries).AllocatorInstance.Data + (longlong)iVar12 * 0x48 + 0x40;
          if (*(float *)pFVar1 <= param_1 && param_1 != *(float *)pFVar1) {
            uVar17 = iVar12 + (uVar16 & 1);
          }
          uVar14 = uVar16 >> 1;
          uVar16 = uVar16 >> 1;
        } while (uVar14 != 0);
        uVar16 = uVar15 - 1;
        if ((int)uVar17 < (int)(uVar15 - 1)) {
          uVar16 = uVar17;
        }
        uVar17 = 1;
        if (1 < (int)uVar16) {
          uVar17 = uVar16;
        }
        uVar16 = uVar17 - 1;
      }
      uVar14 = 0;
      if ((int)uVar16 < (int)uVar15) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar1 = (this->Entries).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar17 < (this->Entries).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      uVar9 = LerpEntries(param_1,param_6,
                          (FPoseHistoryEntry *)(pFVar1 + (longlong)(int)uVar16 * 0x48),
                          (FPoseHistoryEntry *)
                          ((this->Entries).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x48),
                          param_3,(USkeleton *)0x0,&this->BoneToTransformMap,param_4,param_5,param_2
                         );
    }
  }
  else {
    uVar11 = (**(code **)(this->_padding_ + 8))();
    uVar9 = (undefined1)uVar11;
    auVar20._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(param_2->Scale3D).XY.m128d_f64);
    auVar20._8_4_ = _UNK_15061cc88 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
    auVar20._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
    auVar19._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
          (double)CONCAT44(_UNK_15061cc8c &
                           *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc),
                           _UNK_15061cc88 & *(uint *)((param_2->Scale3D).ZW.m128d_f64 + 1)));
    auVar19._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                           *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4),
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                           *(uint *)(param_2->Scale3D).ZW.m128d_f64));
    uVar15 = movmskpd((int)this,auVar19);
    auVar18._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar20._8_8_);
    auVar18._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar20._0_8_);
    iVar12 = movmskpd(uVar11,auVar18);
    if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
      local_1a8.Rotation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      local_1a8.Rotation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      local_1a8.Translation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      local_1a8.Translation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      local_1a8.Translation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      local_1a8.Translation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      local_1a8.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      local_1a8.Scale3D.XY = UE::Math::TTransform<double>::Identity.Scale3D.XY;
      local_1a8.Rotation.ZW = UE::Math::TTransform<double>::Identity.Rotation.ZW;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(param_2,&local_1a8);
    }
    *(undefined4 *)(param_2->Rotation).XY.m128d_f64 = local_1a8.Rotation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4) =
         local_1a8.Rotation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1) = local_1a8.Rotation.XY.m128d_f64[1]._0_4_
    ;
    *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc) =
         local_1a8.Rotation.XY.m128d_f64[1]._4_4_;
    *&(param_2->Rotation).ZW.m128d_f64 = local_1a8.Rotation.ZW.m128d_f64;
    *(undefined4 *)(param_2->Translation).XY.m128d_f64 = local_1a8.Translation.XY.m128d_f64[0]._0_4_
    ;
    *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4) =
         local_1a8.Translation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1) =
         local_1a8.Translation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc) =
         local_1a8.Translation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(param_2->Translation).ZW.m128d_f64 = local_1a8.Translation.ZW.m128d_f64[0]._0_4_
    ;
    *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4) =
         local_1a8.Translation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1) =
         local_1a8.Translation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc) =
         local_1a8.Translation.ZW.m128d_f64[1]._4_4_;
    *&(param_2->Scale3D).XY.m128d_f64 = local_1a8.Scale3D.XY.m128d_f64;
    *&(param_2->Scale3D).ZW.m128d_f64 = local_1a8.Scale3D.ZW.m128d_f64;
  }
  return (bool)uVar9;
}

// InitFrom @ 14a900310

void __thiscall
UE::PoseSearch::FArchivedPoseHistory::InitFrom(FArchivedPoseHistory *this,IPoseHistory *param_1)

{
  TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  int iVar2;
  FPoseHistoryEntry *pFVar3;
  void *_Src;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FTransformTrajectory *pFVar11;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar12;
  TArrayView<FName_const_,int> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong local_res8;
  int *local_res20;
  undefined1 local_60 [32];
  
  if ((param_1 == (IPoseHistory *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                         ,0x1e2,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar18 = 0;
  piVar1 = &(this->Trajectory).Samples.ArrayMax;
  iVar2 = *piVar1;
  (this->Trajectory).Samples.ArrayNum = 0;
  if (iVar2 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,(ForAnyElementType *)&this->Trajectory,0,piVar1);
  }
  TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
           *)&this->BoneToTransformMap);
  pFVar3 = (FPoseHistoryEntry *)(this->Entries).AllocatorInstance.Data;
  this_00 = &this->Entries;
  piVar1 = &(this->Entries).ArrayMax;
  iVar2 = (this->Entries).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>(pFVar3,iVar2);
    (this->Entries).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>(pFVar3,iVar2);
    (this->Entries).ArrayNum = 0;
  }
  pFVar11 = (FTransformTrajectory *)(**(code **)(*(longlong *)param_1 + 0x18))(param_1);
  FTransformTrajectory::operator=(&this->Trajectory,pFVar11);
  pTVar12 = (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
             *)(**(code **)(*(longlong *)param_1 + 0x40))(param_1);
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  ::operator=(&this->BoneToTransformMap,pTVar12);
  pTVar13 = (TArrayView<FName_const_,int> *)
            (**(code **)(*(longlong *)param_1 + 0x48))(param_1,local_60);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=<FName_const_,int>
            (&this->CollectedCurves,pTVar13);
  uVar9 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  iVar2 = (this->Entries).ArrayNum;
  if (iVar2 < (int)uVar9) {
    iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x48,8,uVar9 - iVar2,&this_00->AllocatorInstance,&(this->Entries).ArrayNum,
                        piVar1);
    DefaultConstructItems<UE::PoseSearch::FPoseHistoryEntry,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x48,uVar9 - iVar2);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar2) {
      uVar15 = iVar2 - uVar9;
      if (((int)(uVar15 | uVar9) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar15 != 0) {
        TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar9,uVar15);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&this_00->AllocatorInstance,(this->Entries).ArrayNum,piVar1);
      }
    }
  }
  if (0 < (int)uVar9) {
    local_res8 = 0;
    uVar19 = uVar18;
    do {
      local_res20 = &(this->Entries).ArrayNum;
      uVar17 = (uint)uVar18;
      pFVar14 = (FScriptContainerElement *)
                (**(code **)(*(longlong *)param_1 + 0x58))(param_1,uVar18);
      uVar15 = 0;
      if ((int)uVar17 < (this->Entries).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar16 = (this_00->AllocatorInstance).Data + uVar19;
      if (pFVar16 != pFVar14) {
        iVar2 = *(int *)&pFVar14[8].field_0x0;
        pFVar6 = pFVar16 + 0xc;
        _Src = *(void **)&pFVar14->field_0x0;
        iVar10 = *(int *)pFVar6;
        *(int *)&pFVar16[8].field_0x0 = iVar2;
        if ((iVar2 == 0) && (iVar10 == 0)) {
          *(int *)pFVar6 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,iVar2,iVar10,(ForAnyElementType *)pFVar16,iVar2,(int *)pFVar6);
          if (iVar2 != 0) {
            memcpy(*(void **)&pFVar16->field_0x0,_Src,(longlong)iVar2 << 4);
          }
        }
      }
      pFVar6 = pFVar16 + 0x10;
      if (pFVar6 != pFVar14 + 0x10) {
        iVar2 = *(int *)&pFVar14[0x18].field_0x0;
        pFVar7 = pFVar16 + 0x1c;
        pFVar4 = *(FScriptContainerElement **)&pFVar14[0x10].field_0x0;
        iVar10 = *(int *)pFVar7;
        *(int *)&pFVar16[0x18].field_0x0 = iVar2;
        if ((iVar2 == 0) && (iVar10 == 0)) {
          *(int *)pFVar7 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar2,iVar10,(ForAnyElementType *)pFVar6,iVar2,(int *)pFVar7);
          if (iVar2 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar6->field_0x0,pFVar4,(longlong)iVar2 * 0x18);
          }
        }
      }
      pFVar6 = pFVar16 + 0x20;
      if (pFVar6 != pFVar14 + 0x20) {
        iVar2 = *(int *)&pFVar14[0x28].field_0x0;
        pFVar7 = pFVar16 + 0x2c;
        pFVar4 = *(FScriptContainerElement **)&pFVar14[0x20].field_0x0;
        iVar10 = *(int *)pFVar7;
        *(int *)&pFVar16[0x28].field_0x0 = iVar2;
        if ((iVar2 == 0) && (iVar10 == 0)) {
          *(int *)pFVar7 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar2,iVar10,(ForAnyElementType *)pFVar6,iVar2,(int *)pFVar7);
          if (iVar2 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar6->field_0x0,pFVar4,(longlong)iVar2 * 0xc);
          }
        }
      }
      pFVar6 = pFVar16 + 0x30;
      if (pFVar6 != pFVar14 + 0x30) {
        iVar2 = *(int *)&pFVar14[0x38].field_0x0;
        pFVar7 = pFVar16 + 0x3c;
        pFVar4 = *(FScriptContainerElement **)&pFVar14[0x30].field_0x0;
        iVar10 = *(int *)pFVar7;
        *(int *)&pFVar16[0x38].field_0x0 = iVar2;
        if ((iVar2 == 0) && (iVar10 == 0)) {
          *(int *)pFVar7 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar2,iVar10,(ForAnyElementType *)pFVar6,iVar2,(int *)pFVar7);
          if (iVar2 != 0) {
            memcpy(*(FScriptContainerElement **)&pFVar6->field_0x0,pFVar4,(longlong)iVar2 << 2);
          }
        }
      }
      *(undefined4 *)&pFVar16[0x40].field_0x0 = *(undefined4 *)&pFVar14[0x40].field_0x0;
      if (uVar17 != 0) {
        uVar15 = 0;
        if ((int)uVar17 < *local_res20) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar14 = (this_00->AllocatorInstance).Data;
        uVar15 = 0;
        if ((int)(uVar17 - 1) < *local_res20) {
          uVar15 = -uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(float *)(pFVar14 + uVar19 + 0x40) <
             *(float *)((this_00->AllocatorInstance).Data + (uVar19 - 8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("EntryIndex == 0 || (Entries[EntryIndex - 1].AccumulatedSeconds <= Entries[EntryIndex].AccumulatedSeconds)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                               ,0x1f2,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar18 = (ulonglong)(uVar17 + 1);
      local_res8 = local_res8 + 1;
      uVar19 = uVar19 + 0x48;
    } while (local_res8 < (int)uVar9);
  }
  return;
}

// ~FArchivedPoseHistory @ 14a91aaf0

void __thiscall
UE::PoseSearch::FArchivedPoseHistory::~FArchivedPoseHistory(FArchivedPoseHistory *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  pFVar3 = (this->Trajectory).Samples.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>
            ((FPoseHistoryEntry *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum);
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CollectedCurves).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->BoneToTransformMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->BoneToTransformMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneToTransformMap);
  this->_padding_ = (longlong)&___7IPoseHistory_PoseSearch_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// DebugDraw @ 14a925910

void __thiscall
UE::PoseSearch::FArchivedPoseHistory::DebugDraw
          (FArchivedPoseHistory *this,FAnimInstanceProxy *param_1,FColor param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchHistory.h"
                     ,0xa7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GenerateTrajectory @ 14a92abe0

void __thiscall
UE::PoseSearch::FArchivedPoseHistory::GenerateTrajectory
          (FArchivedPoseHistory *this,UObject *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchHistory.h"
                     ,0x9d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetBoneToTransformMap @ 14a92b030

TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
* __thiscall UE::PoseSearch::FArchivedPoseHistory::GetBoneToTransformMap(FArchivedPoseHistory *this)

{
  return &this->BoneToTransformMap;
}

// GetCollectedCurves @ 14a92b270

TArrayView<FName_const_,int> * __thiscall
UE::PoseSearch::FArchivedPoseHistory::GetCollectedCurves
          (FArchivedPoseHistory *this,TArrayView<FName_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FName_const_,int> *pTVar4;
  
  iVar1 = (this->CollectedCurves).ArrayNum;
  __return_storage_ptr__->DataPtr = (FName *)(this->CollectedCurves).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FName_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetEntry @ 14a92b980

FPoseHistoryEntry * __thiscall
UE::PoseSearch::FArchivedPoseHistory::GetEntry(FArchivedPoseHistory *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPoseHistoryEntry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Entries).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPoseHistoryEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPoseHistoryEntry *)((this->Entries).AllocatorInstance.Data + (longlong)param_1 * 0x48);
}

// GetNumEntries @ 14a92bd80

int __thiscall UE::PoseSearch::FArchivedPoseHistory::GetNumEntries(FArchivedPoseHistory *this)

{
  return (this->Entries).ArrayNum;
}

// GetTrajectory @ 14a92cc50

FTransformTrajectory * __thiscall
UE::PoseSearch::FArchivedPoseHistory::GetTrajectory(FArchivedPoseHistory *this)

{
  return &this->Trajectory;
}

// GetTrajectorySpeedMultiplier @ 14a92cd60

float __thiscall
UE::PoseSearch::FArchivedPoseHistory::GetTrajectorySpeedMultiplier(FArchivedPoseHistory *this)

{
  return __real_3f800000;
}

// IsEmpty @ 14a92f700

bool __thiscall UE::PoseSearch::FArchivedPoseHistory::IsEmpty(FArchivedPoseHistory *this)

{
  return (this->Entries).ArrayNum == 0;
}

// SetTrajectory @ 14a93ddb0

void __thiscall
UE::PoseSearch::FArchivedPoseHistory::SetTrajectory
          (FArchivedPoseHistory *this,FTransformTrajectory *param_1,float param_2)

{
  FTransformTrajectory::operator=(&this->Trajectory,param_1);
  return;
}

