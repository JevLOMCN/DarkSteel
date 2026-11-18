// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 16

// StaticClass @ 14a895750

UClass * __cdecl UPoseSearchAssetSamplerLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchAssetSamplerLibrary",
               &Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchAssetSamplerLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchAssetSamplerLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchAssetSamplerLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.InnerSingleton;
}

// Draw<FCSPose<FCompactHeapPose>_> @ 14a8a0200

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

void __cdecl
UPoseSearchAssetSamplerLibrary::Draw<FCSPose<FCompactHeapPose>_>
          (UWorld *param_1,FCSPose<FCompactHeapPose> *param_2,TTransform<double> *param_3,
          FColor param_4,float param_5,float param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  __m128d _Var8;
  __m128d _Var9;
  bool bVar10;
  TTransform<double> *pTVar11;
  FCompactPoseBoneIndex FVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  FColor_u_0 local_res20 [2];
  undefined1 auStackY_1d8 [32];
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  if (param_1 != (UWorld *)0x0) {
    local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
    local_res20[0] = param_4.field0_0x0;
    if (0.0 < param_5) {
      GetTransform<FCSPose<FCompactHeapPose>_>
                (&local_148,param_2,param_3,(FCompactPoseBoneIndex)0xffffffff,World);
      dVar6 = local_148.Scale3D.ZW.m128d_f64[0] * 0.0;
      dVar7 = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar32 = local_148.Rotation.XY.m128d_f64[1];
      dVar17 = local_148.Scale3D.XY.m128d_f64[0] * ___xmm_00000000000000003ff0000000000000;
      dVar5 = local_148.Scale3D.XY.m128d_f64[1] * _UNK_150689518;
      uVar13 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar34._8_4_ = SUB84(dVar5,0);
      auVar34._0_8_ = dVar17;
      auVar34._12_4_ = uVar13;
      auVar19._8_4_ = SUB84(dVar5,0);
      auVar19._0_8_ = dVar17;
      auVar19._12_4_ = uVar13;
      auVar20._8_4_ = SUB84(dVar7,0);
      auVar20._0_8_ = dVar6;
      auVar20._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar20 = blendpd(auVar19,auVar20,2);
      dVar2 = local_148.Rotation.ZW.m128d_f64[0];
      dVar3 = local_148.Rotation.ZW.m128d_f64[1];
      auVar33 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
      dVar18 = (double)param_5;
      auVar35._0_8_ = auVar34._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar32 * dVar17;
      auVar35._8_8_ = dVar6 * dVar32 - dVar2 * dVar5;
      auVar21._0_8_ = auVar20._0_8_ * dVar2 - auVar33._0_8_ * dVar6;
      auVar21._8_8_ = auVar20._8_8_ * dVar3 - auVar33._8_8_ * dVar7;
      auVar20 = blendpd(auVar35,auVar21,2);
      dVar7 = auVar35._8_8_ + auVar35._8_8_;
      dVar4 = auVar21._0_8_ + auVar21._0_8_;
      uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar36._0_8_ = auVar20._0_8_ + auVar20._0_8_;
      auVar36._8_8_ = auVar20._8_8_ + auVar20._8_8_;
      auVar28._8_4_ = SUB84(dVar4,0);
      auVar28._0_8_ = dVar7;
      auVar28._12_4_ = uVar13;
      auVar22._8_4_ = SUB84(dVar4,0);
      auVar22._0_8_ = dVar7;
      auVar22._12_4_ = uVar13;
      auVar20 = blendpd(auVar22,auVar36,2);
      auVar29._0_8_ = auVar28._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar7 * dVar32;
      auVar29._8_8_ = auVar36._0_8_ * dVar32 - dVar4 * dVar2;
      auVar23._0_8_ = auVar20._0_8_ * dVar2 - auVar36._0_8_ * auVar33._0_8_;
      auVar23._8_8_ = auVar20._8_8_ * dVar3 - auVar36._8_8_ * auVar33._8_8_;
      auVar20 = blendpd(auVar29,auVar23,2);
      local_180._s_0.X =
           (dVar7 * dVar3 + dVar17 + auVar29._8_8_) * dVar18 + local_148.Translation.XY.m128d_f64[0]
      ;
      local_180._s_0.Y =
           (dVar4 * dVar3 + dVar5 + auVar23._0_8_) * dVar18 + local_148.Translation.XY.m128d_f64[1];
      local_198._s_0.Z = local_148.Translation.ZW.m128d_f64[0];
      local_180._s_0.Z =
           (auVar36._0_8_ * dVar3 + dVar6 + auVar20._0_8_) * dVar18 +
           local_148.Translation.ZW.m128d_f64[0];
      local_168._s_0.Z = local_148.Translation.ZW.m128d_f64[0];
      local_168._s_0.X = local_148.Translation.XY.m128d_f64[0];
      local_168._s_0.Y = local_148.Translation.XY.m128d_f64[1];
      DrawDebugLine(param_1,(TVector<double> *)&local_168._s_0,(TVector<double> *)&local_180._s_0,
                    &FColor::Red,false,0.0,'\x01',0.0);
      dVar6 = local_148.Scale3D.ZW.m128d_f64[0] * 0.0;
      dVar7 = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar32 = local_148.Rotation.XY.m128d_f64[1];
      dVar17 = local_148.Scale3D.XY.m128d_f64[0] * ___xmm_3ff00000000000000000000000000000;
      dVar5 = local_148.Scale3D.XY.m128d_f64[1] * _UNK_15061cbc8;
      uVar13 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar37._8_4_ = SUB84(dVar5,0);
      auVar37._0_8_ = dVar17;
      auVar37._12_4_ = uVar13;
      dVar2 = local_148.Rotation.ZW.m128d_f64[0];
      auVar24._8_4_ = SUB84(dVar5,0);
      auVar24._0_8_ = dVar17;
      auVar24._12_4_ = uVar13;
      auVar33._8_4_ = SUB84(dVar7,0);
      auVar33._0_8_ = dVar6;
      auVar33._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar20 = blendpd(auVar24,auVar33,2);
      auVar38._0_8_ = auVar37._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar17 * dVar32;
      auVar38._8_8_ = dVar6 * dVar32 - dVar5 * dVar2;
      dVar3 = local_148.Rotation.ZW.m128d_f64[1];
      auVar33 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
      local_168._s_0.X = local_148.Translation.XY.m128d_f64[0];
      local_168._s_0.Y = local_148.Translation.XY.m128d_f64[1];
      auVar25._0_8_ = auVar20._0_8_ * dVar2 - dVar6 * auVar33._0_8_;
      auVar25._8_8_ = auVar20._8_8_ * dVar3 - dVar7 * auVar33._8_8_;
      auVar20 = blendpd(auVar38,auVar25,2);
      dVar7 = auVar38._8_8_ + auVar38._8_8_;
      dVar4 = auVar25._0_8_ + auVar25._0_8_;
      uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar39._0_8_ = auVar20._0_8_ + auVar20._0_8_;
      auVar39._8_8_ = auVar20._8_8_ + auVar20._8_8_;
      auVar30._8_4_ = SUB84(dVar4,0);
      auVar30._0_8_ = dVar7;
      auVar30._12_4_ = uVar13;
      auVar26._8_4_ = SUB84(dVar4,0);
      auVar26._0_8_ = dVar7;
      auVar26._12_4_ = uVar13;
      auVar20 = blendpd(auVar26,auVar39,2);
      auVar31._0_8_ = auVar30._8_8_ * local_148.Rotation.XY.m128d_f64[0] - dVar7 * dVar32;
      auVar31._8_8_ = auVar39._0_8_ * dVar32 - dVar4 * dVar2;
      auVar27._0_8_ = auVar20._0_8_ * dVar2 - auVar39._0_8_ * auVar33._0_8_;
      auVar27._8_8_ = auVar20._8_8_ * dVar3 - auVar39._8_8_ * auVar33._8_8_;
      auVar20 = blendpd(auVar31,auVar27,2);
      local_180._s_0.X =
           (dVar7 * dVar3 + dVar17 + auVar31._8_8_) * dVar18 + local_148.Translation.XY.m128d_f64[0]
      ;
      local_180._s_0.Y =
           (dVar4 * dVar3 + dVar5 + auVar27._0_8_) * dVar18 + local_148.Translation.XY.m128d_f64[1];
      local_198._s_0.Z = local_148.Translation.ZW.m128d_f64[0];
      local_180._s_0.Z =
           (auVar39._0_8_ * dVar3 + dVar6 + auVar20._0_8_) * dVar18 +
           local_148.Translation.ZW.m128d_f64[0];
      local_168._s_0.Z = local_148.Translation.ZW.m128d_f64[0];
      DrawDebugLine(param_1,(TVector<double> *)&local_168._s_0,(TVector<double> *)&local_180._s_0,
                    &FColor::Green,false,0.0,'\x01',0.0);
      _Var8.m128d_f64 = local_148.Translation.XY.m128d_f64;
      dVar3 = local_148.Translation.XY.m128d_f64[0];
      dVar7 = local_148.Translation.XY.m128d_f64[1];
      dVar4 = local_148.Translation.ZW.m128d_f64[0];
      local_168._s_0.X = 0.0;
      local_168._s_0.Y = 0.0;
      local_168._s_0.Z = __real_3ff0000000000000;
      UE::Math::TTransform<double>::TransformVector
                (&local_148,(TVector<double> *)&local_198._s_0,(TVector<double> *)&local_168._s_0);
      _Var9.m128d_f64 = local_148.Translation.XY.m128d_f64;
      dVar17 = local_198._s_0.Y * dVar18;
      dVar2 = local_198._s_0.X * dVar18;
      local_148.Translation.XY.m128d_f64[0] = _Var8.m128d_f64[0];
      local_148.Translation.XY.m128d_f64[1] = _Var8.m128d_f64[1];
      local_198._s_0.X = local_148.Translation.XY.m128d_f64[0];
      local_198._s_0.Y = local_148.Translation.XY.m128d_f64[1];
      local_180._s_0.X = dVar2 + dVar3;
      local_180._s_0.Y = dVar17 + dVar7;
      dVar18 = local_198._s_0.Z * dVar18;
      local_198._s_0.Z = dVar4;
      local_180._s_0.Z = dVar18 + dVar4;
      local_148.Translation.XY.m128d_f64 = _Var9.m128d_f64;
      DrawDebugLine(param_1,(TVector<double> *)&local_198._s_0,(TVector<double> *)&local_180._s_0,
                    &FColor::Blue,false,0.0,'\x01',0.0);
    }
    FVar12 = (FCompactPoseBoneIndex)0x0;
    if (0 < *(int *)&(param_2->Pose).field_0x8) {
      do {
        lVar1 = *(longlong *)&(param_2->Pose).field_0x10;
        if ((((lVar1 == 0) ||
             (bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x30)), !bVar10)) ||
            (*(longlong *)(lVar1 + 0x48) == 0)) || (*(int *)(lVar1 + 8) < 1)) {
          if (1 < (byte)LogPoseSearch._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_static_struct_UE::Math::TTransform<double>___cdecl_UPoseSearchAssetSamplerLibrary::GetTransform<FCSPose<FCompactHeapPose>_>(FCSPose<FCompactHeapPose>&___ptr64,UE::Math::TTransform<double>_const&___ptr64,FCompactPoseBoneIndex,EPoseSearchAssetSamplerSpace)'
                        ::__l6::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          }
LAB_14a8a07ee:
          local_148.Translation.ZW.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          local_148.Translation.ZW.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          local_148.Translation.ZW.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          local_148.Translation.ZW.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          local_148.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_148.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          uVar13 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar14 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar15 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar16 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          local_148.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_148.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
LAB_14a8a0820:
          local_148.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar14,uVar13);
          local_148.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar16,uVar15);
          uVar13 = local_148.Translation.ZW.m128d_f64[0]._0_4_;
          uVar14 = local_148.Translation.ZW.m128d_f64[0]._4_4_;
        }
        else {
          if (FVar12 == (FCompactPoseBoneIndex)0xffffffff) {
            local_148.Rotation.XY.m128d_f64 = *&(param_3->Rotation).XY.m128d_f64;
            local_148.Rotation.ZW.m128d_f64 = *&(param_3->Rotation).ZW.m128d_f64;
            local_148.Translation.ZW.m128d_f64[0]._0_4_ =
                 *(undefined4 *)(param_3->Translation).ZW.m128d_f64;
            local_148.Translation.ZW.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)(param_3->Translation).ZW.m128d_f64 + 4);
            local_148.Translation.ZW.m128d_f64[1]._0_4_ =
                 *(undefined4 *)((param_3->Translation).ZW.m128d_f64 + 1);
            local_148.Translation.ZW.m128d_f64[1]._4_4_ =
                 *(undefined4 *)((longlong)(param_3->Translation).ZW.m128d_f64 + 0xc);
            uVar13 = *(undefined4 *)(param_3->Scale3D).XY.m128d_f64;
            uVar14 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
            uVar15 = *(undefined4 *)((param_3->Scale3D).XY.m128d_f64 + 1);
            uVar16 = *(undefined4 *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
            local_148.Scale3D.ZW.m128d_f64 = *&(param_3->Scale3D).ZW.m128d_f64;
            local_148.Translation.XY.m128d_f64 = *&(param_3->Translation).XY.m128d_f64;
            goto LAB_14a8a0820;
          }
          if (((int)FVar12 < 0) || (*(int *)&(param_2->Pose).field_0x8 <= (int)FVar12)) {
            if (1 < (byte)LogPoseSearch._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_static_struct_UE::Math::TTransform<double>___cdecl_UPoseSearchAssetSamplerLibrary::GetTransform<FCSPose<FCompactHeapPose>_>(FCSPose<FCompactHeapPose>&___ptr64,UE::Math::TTransform<double>_const&___ptr64,FCompactPoseBoneIndex,EPoseSearchAssetSamplerSpace)'
                          ::__l33::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
            }
            goto LAB_14a8a07ee;
          }
          pTVar11 = FCSPose<FCompactHeapPose>::GetComponentSpaceTransform(param_2,FVar12);
          local_148.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_148.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_148.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_148.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_148.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_148.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_148.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_148,pTVar11,param_3);
          uVar13 = local_148.Translation.ZW.m128d_f64[0]._0_4_;
          uVar14 = local_148.Translation.ZW.m128d_f64[0]._4_4_;
        }
        local_198._s_0.Z = (double)CONCAT44(uVar14,uVar13);
        local_198._0_16_ = (undefined1  [16])local_148.Translation.XY.m128d_f64;
        DrawDebugPoint(param_1,(TVector<double> *)&local_198._s_0,param_6,
                       (FColor *)&local_res20[0]._s_0,false,0.0,'\x01');
        FVar12 = (FCompactPoseBoneIndex)((int)FVar12 + 1);
      } while ((int)FVar12 < *(int *)&(param_2->Pose).field_0x8);
    }
  }
  return;
}

// GetTransform<FCSPose<FCompactHeapPose>_> @ 14a8a5db0

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __cdecl
UPoseSearchAssetSamplerLibrary::GetTransform<FCSPose<FCompactHeapPose>_>
          (TTransform<double> *__return_storage_ptr__,FCSPose<FCompactHeapPose> *param_1,
          TTransform<double> *param_2,FCompactPoseBoneIndex param_3,
          EPoseSearchAssetSamplerSpace param_4)

{
  double *pdVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  bool bVar14;
  FText *pFVar15;
  TTransform<double> *pTVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  FText local_48;
  FText local_38;
  
  lVar3 = *(longlong *)&(param_1->Pose).field_0x10;
  if ((((lVar3 == 0) ||
       (bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar3 + 0x30)), !bVar14)) ||
      (*(longlong *)(lVar3 + 0x48) == 0)) || (*(int *)(lVar3 + 8) < 1)) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_static_struct_UE::Math::TTransform<double>___cdecl_UPoseSearchAssetSamplerLibrary::GetTransform<FCSPose<FCompactHeapPose>_>(FCSPose<FCompactHeapPose>&___ptr64,UE::Math::TTransform<double>_const&___ptr64,FCompactPoseBoneIndex,EPoseSearchAssetSamplerSpace)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    if (param_3 == (FCompactPoseBoneIndex)0xffffffff) {
      if ((param_4 != World) && (1 < (byte)LogPoseSearch._0_1_)) {
        pFVar15 = UEnum::GetDisplayValueAsText<enum_EPoseSearchAssetSamplerSpace>(&local_38,World);
        FText::ToString(pFVar15);
        pFVar15 = UEnum::GetDisplayValueAsText<enum_EPoseSearchAssetSamplerSpace>(&local_48,param_4)
        ;
        FText::ToString(pFVar15);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_static_struct_UE::Math::TTransform<double>___cdecl_UPoseSearchAssetSamplerLibrary::GetTransform<FCSPose<FCompactHeapPose>_>(FCSPose<FCompactHeapPose>&___ptr64,UE::Math::TTransform<double>_const&___ptr64,FCompactPoseBoneIndex,EPoseSearchAssetSamplerSpace)'
                    ::__l21::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
      }
      dVar13 = (param_2->Rotation).XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar13;
      dVar13 = (param_2->Rotation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar13;
      dVar13 = (param_2->Translation).XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar13;
      dVar13 = (param_2->Translation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar13;
      dVar13 = (param_2->Scale3D).XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar13;
      uVar18 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
      uVar19 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
      uVar20 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
      uVar21 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
      goto LAB_14a8a60c1;
    }
    if (((int)param_3 < 0) || (*(int *)&(param_1->Pose).field_0x8 <= (int)param_3)) {
      if (1 < (byte)LogPoseSearch._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_static_struct_UE::Math::TTransform<double>___cdecl_UPoseSearchAssetSamplerLibrary::GetTransform<FCSPose<FCompactHeapPose>_>(FCSPose<FCompactHeapPose>&___ptr64,UE::Math::TTransform<double>_const&___ptr64,FCompactPoseBoneIndex,EPoseSearchAssetSamplerSpace)'
                    ::__l33::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      }
    }
    else {
      if (param_4 == Local) {
        if (((int)param_3 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar4 = (code *)swi(3);
          pTVar16 = (TTransform<double> *)(*pcVar4)();
          return pTVar16;
        }
        lVar3 = *(longlong *)&param_1->Pose;
        lVar17 = (longlong)(int)param_3 * 0x60;
        dVar13 = ((double *)(lVar17 + lVar3))[1];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar17 + lVar3);
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar13;
        pdVar1 = (double *)(lVar17 + 0x10 + lVar3);
        dVar13 = pdVar1[1];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *pdVar1;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar13;
        pdVar1 = (double *)(lVar17 + 0x20 + lVar3);
        dVar13 = pdVar1[1];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *pdVar1;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar13;
        pdVar1 = (double *)(lVar17 + 0x30 + lVar3);
        dVar13 = pdVar1[1];
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *pdVar1;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar13;
        pdVar1 = (double *)(lVar17 + 0x40 + lVar3);
        dVar13 = pdVar1[1];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *pdVar1;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar13;
        puVar2 = (undefined4 *)(lVar17 + 0x50 + lVar3);
        uVar18 = *puVar2;
        uVar19 = puVar2[1];
        uVar20 = puVar2[2];
        uVar21 = puVar2[3];
        goto LAB_14a8a60c1;
      }
      if (param_4 == Component) {
        pTVar16 = FCSPose<FCompactHeapPose>::GetComponentSpaceTransform(param_1,param_3);
        dVar13 = (pTVar16->Rotation).XY.m128d_f64[1];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar16->Rotation).XY.m128d_f64[0];
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar13;
        dVar13 = (pTVar16->Rotation).ZW.m128d_f64[1];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar16->Rotation).ZW.m128d_f64[0];
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar13;
        dVar13 = (pTVar16->Translation).XY.m128d_f64[1];
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
             (pTVar16->Translation).XY.m128d_f64[0];
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar13;
        dVar13 = (pTVar16->Translation).ZW.m128d_f64[1];
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
             (pTVar16->Translation).ZW.m128d_f64[0];
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar13;
        dVar13 = (pTVar16->Scale3D).XY.m128d_f64[1];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar13;
        uVar18 = *(undefined4 *)(pTVar16->Scale3D).ZW.m128d_f64;
        uVar19 = *(undefined4 *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 4);
        uVar20 = *(undefined4 *)((pTVar16->Scale3D).ZW.m128d_f64 + 1);
        uVar21 = *(undefined4 *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 0xc);
        goto LAB_14a8a60c1;
      }
      if (param_4 == World) {
        pTVar16 = FCSPose<FCompactHeapPose>::GetComponentSpaceTransform(param_1,param_3);
        fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
        auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar7._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        auVar7._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar7;
        auVar8._8_4_ = SUB84((double)fVar6,0);
        auVar8._0_8_ = (double)fVar5;
        auVar8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar8;
        fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
        fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
        auVar9._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        auVar9._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        auVar9._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar9;
        auVar10._8_4_ = SUB84((double)fVar6,0);
        auVar10._0_8_ = (double)fVar5;
        auVar10._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar10;
        fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
        auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        auVar11._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        auVar11._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar11;
        auVar12._8_4_ = SUB84((double)fVar6,0);
        auVar12._0_8_ = (double)fVar5;
        auVar12._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
        *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar12;
        UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,pTVar16,param_2);
        return __return_storage_ptr__;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchAssetSamplerLibrary.h"
                          ,0x7b,L"");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TTransform<double> *)(*pcVar4)();
        return pTVar16;
      }
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  uVar18 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar19 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_14a8a60c1:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar18;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar19;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar20;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar21;
  return __return_storage_ptr__;
}

// UPoseSearchAssetSamplerLibrary @ 14a8acf80

UPoseSearchAssetSamplerLibrary * __thiscall
UPoseSearchAssetSamplerLibrary::UPoseSearchAssetSamplerLibrary
          (UPoseSearchAssetSamplerLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchAssetSamplerLibrary__6B_;
  return this;
}

// UPoseSearchAssetSamplerLibrary @ 14a8acfb0

UPoseSearchAssetSamplerLibrary * __thiscall
UPoseSearchAssetSamplerLibrary::UPoseSearchAssetSamplerLibrary
          (UPoseSearchAssetSamplerLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchAssetSamplerLibrary__6B_;
  return this;
}

// ~UPoseSearchAssetSamplerLibrary @ 14a8ae0d0

void __thiscall
UPoseSearchAssetSamplerLibrary::~UPoseSearchAssetSamplerLibrary
          (UPoseSearchAssetSamplerLibrary *this)

{
  *(undefined ***)this = &___7UPoseSearchAssetSamplerLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Draw @ 14a8b2870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPoseSearchAssetSamplerLibrary::Draw(UAnimInstance *param_1,FPoseSearchAssetSamplerPose *param_2)

{
  code *pcVar1;
  FColor FVar2;
  bool bVar3;
  UWorld *pUVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSamplerLibrary.cpp"
                       ,0x5f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2.field0_0x0 = FColor::Red.field0_0x0;
  if (param_1 != (UAnimInstance *)0x0) {
    pUVar4 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    Draw<FCSPose<FCompactHeapPose>_>
              (pUVar4,&param_2->ComponentSpacePose,&param_2->RootTransform,FVar2,__real_41a00000,
               __real_40c00000);
  }
  return;
}

// GetPrivateStaticClass @ 14a8bd140

UClass * __cdecl UPoseSearchAssetSamplerLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchAssetSamplerLibrary",
               &Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchAssetSamplerLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchAssetSamplerLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchAssetSamplerLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchAssetSamplerLibrary.InnerSingleton;
}

// GetTransform @ 14a8bf0b0

TTransform<double> * __cdecl
UPoseSearchAssetSamplerLibrary::GetTransform
          (TTransform<double> *__return_storage_ptr__,FPoseSearchAssetSamplerPose *param_1,
          FCompactPoseBoneIndex param_2,EPoseSearchAssetSamplerSpace param_3)

{
  GetTransform<FCSPose<FCompactHeapPose>_>
            (__return_storage_ptr__,&param_1->ComponentSpacePose,&param_1->RootTransform,param_2,
             param_3);
  return __return_storage_ptr__;
}

// GetTransformByName @ 14a8bf0f0

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __cdecl
UPoseSearchAssetSamplerLibrary::GetTransformByName
          (TTransform<double> *__return_storage_ptr__,FPoseSearchAssetSamplerPose *param_1,
          FName param_2,EPoseSearchAssetSamplerSpace param_3)

{
  FCompactPoseBoneIndex FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  USkeleton *pUVar6;
  TTransform<double> *pTVar7;
  uint uVar8;
  FName local_res10;
  FName local_res18;
  FName local_88;
  FBoneReference local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  lVar2 = *(longlong *)&(param_1->Pose).field_0x10;
  local_res18 = param_2;
  if ((((lVar2 == 0) || (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar2 + 0x30)), !bVar4))
      || (*(longlong *)(lVar2 + 0x48) == 0)) || (*(int *)(lVar2 + 8) < 1)) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    lVar2 = *(longlong *)&(param_1->Pose).field_0x10;
    pUVar6 = (USkeleton *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar2 + 0x40));
    local_80.BoneName = local_res18;
    local_80.bUseSkeletonIndex = 0;
    local_80.BoneIndex = -1;
    local_80.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    FBoneReference::Initialize(&local_80,pUVar6);
    uVar8 = local_80.BoneIndex;
    if (uVar8 == 0xffffffff) {
      if (1 < (byte)LogPoseSearch._0_1_) {
        if (pUVar6 == (USkeleton *)0x0) {
          ::FString::FString(&local_70,L"None");
        }
        else {
          local_res10 = (FName)pUVar6->_padding_;
          ::FName::ToString(&local_res10,&local_70);
        }
        ::FName::ToString(&local_res18,&local_50);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(lVar2 + 0x88))) {
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(lVar2 + 0x88)) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TTransform<double> *)(*pcVar3)();
          return pTVar7;
        }
        FVar1 = *(FCompactPoseBoneIndex *)(*(longlong *)(lVar2 + 0x80) + (longlong)(int)uVar8 * 4);
        if (FVar1 != (FCompactPoseBoneIndex)0xffffffff) {
          GetTransform<FCSPose<FCompactHeapPose>_>
                    (__return_storage_ptr__,&param_1->ComponentSpacePose,&param_1->RootTransform,
                     FVar1,param_3);
          return __return_storage_ptr__;
        }
      }
      if (1 < (byte)LogPoseSearch._0_1_) {
        if (pUVar6 == (USkeleton *)0x0) {
          ::FString::FString(&local_60,L"None");
        }
        else {
          local_88 = (FName)pUVar6->_padding_;
          ::FName::ToString(&local_88,&local_60);
        }
        ::FName::ToString(&local_res18,&local_40);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// SamplePose @ 14a8c6800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPoseSearchAssetSamplerPose * __cdecl
UPoseSearchAssetSamplerLibrary::SamplePose
          (FPoseSearchAssetSamplerPose *__return_storage_ptr__,UAnimInstance *param_1,
          FPoseSearchAssetSamplerInput *param_2)

{
  FCompactHeapPose *pFVar1;
  undefined1 *puVar2;
  float fVar3;
  int iVar4;
  UAnimationAsset *pUVar5;
  code *pcVar6;
  double dVar7;
  longlong _Src;
  int iVar8;
  bool bVar9;
  FBoneContainer *pFVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  TTransform<double> *pTVar13;
  FPoseSearchAssetSamplerPose *pFVar14;
  longlong lVar15;
  undefined1 auStackY_368 [32];
  undefined1 local_328 [8];
  FBaseCompactPose<TMemStackAllocator<0>_> local_320;
  FMemMark local_308;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2d8;
  undefined8 local_2d0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_2c8;
  undefined8 local_2c0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_2b8
  ;
  undefined8 local_2b0;
  void *local_2a8;
  undefined8 local_2a0;
  FName local_298 [2];
  FString local_288;
  FAnimExtractContext local_278;
  FBlendedCurve local_228;
  code *local_208;
  undefined1 *local_200;
  undefined1 local_1f8 [24];
  void *local_1e0;
  FAnimationPoseData local_1d0;
  FAnimationAssetSampler local_1b8;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  FPoseSearchAssetSamplerPose::FPoseSearchAssetSamplerPose(__return_storage_ptr__);
  pUVar5 = (param_2->Animation).field0_0x0.DebugPtr;
  if (pUVar5 == (UAnimationAsset *)0x0) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else if (param_1 == (UAnimInstance *)0x0) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else if ((param_2->bMirrored == false) ||
          ((param_2->MirrorDataTable).field0_0x0.DebugPtr != (UMirrorDataTable *)0x0)) {
    pFVar10 = UAnimInstance::GetRequiredBonesOnAnyThread(param_1);
    puVar11 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_200 = local_328;
    local_208 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar12 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_208,puVar11);
    local_308.Mem = (FMemStackBase *)(pFVar12 + 2);
    local_308.Top = (local_308.Mem)->Top;
    local_308.SavedChunk = *(FTaggedMemory **)(pFVar12 + 4);
    local_308.bPopped = false;
    local_308.NextTopmostMark = *(FMemMark **)(pFVar12 + 5);
    pFVar12[5] = (FTlsAutoCleanup)&local_308;
    *(int *)(pFVar12 + 6) = *(int *)(pFVar12 + 6) + 1;
    UE::PoseSearch::FAnimationAssetSampler::FAnimationAssetSampler
              (&local_1b8,(param_2->Animation).field0_0x0.DebugPtr,&param_2->RootTransformOrigin,
               &param_2->BlendParameters,param_2->RootTransformSamplingRate,true,true);
    local_228._0_8_ = 0;
    local_228._8_8_ = 0;
    local_228._16_1_ = 0;
    local_228._24_8_ = 0;
    local_320._padding_ = 0;
    local_320._padding_ = 0;
    local_320.BoneContainer = (FBoneContainer *)0x0;
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer(&local_320,pFVar10);
    fVar3 = param_2->AnimationTime;
    local_2d8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_2d0 = 0;
    local_2c8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
    local_2c0 = 0;
    local_2b8 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 *)0x0;
    local_2b0 = 0;
    local_2a8 = (void *)0x0;
    local_2a0 = 0;
    FBlendedCurve::InitFrom(&local_228,local_320.BoneContainer);
    FAnimationPoseData::FAnimationPoseData
              (&local_1d0,(FCompactPose *)&local_320,&local_228,
               (FStackAttributeContainer *)&local_2d8);
    local_278.bLooping = UE::PoseSearch::FAnimationAssetSampler::IsLoopable(&local_1b8);
    local_278.CurrentTime = (double)fVar3;
    local_278.DeltaTimeRecord._9_2_ = local_298[1].ComparisonIndex.Value._1_2_;
    local_278.bExtractRootMotion = false;
    local_278.DeltaTimeRecord.Delta = 0.0;
    local_278.DeltaTimeRecord.bPreviousIsValid = true;
    local_278.DeltaTimeRecord._11_1_ = local_298[1].ComparisonIndex.Value._3_1_;
    local_278.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.PoseCurves.ArrayNum = 0;
    local_278.PoseCurves.ArrayMax = 0;
    local_278.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.BonesRequired.ArrayNum = 0;
    local_278.BonesRequired.ArrayMax = 0;
    local_278.InterpolationOverride.bIsSet = false;
    local_278.DeltaTimeRecord.Previous = fVar3;
    UE::PoseSearch::FAnimationAssetSampler::ExtractPose(&local_1b8,&local_278,&local_1d0);
    if (local_278.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.BonesRequired.AllocatorInstance.Data);
    }
    if (local_278.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.PoseCurves.AllocatorInstance.Data);
    }
    if (local_2a8 != (void *)0x0) {
      FMemory::Free(local_2a8);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_2b8,(int)local_2b0);
    if (local_2b8 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_2b8);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (local_2c8,(int)local_2c0);
    if (local_2c8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_2c8);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_2d8,(int)local_2d0);
    if (local_2d8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_2d8);
    }
    pTVar13 = UE::PoseSearch::FAnimationAssetSampler::ExtractRootTransform
                        (&local_1b8,&local_108,param_2->AnimationTime);
    dVar7 = (pTVar13->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->RootTransform).Rotation.XY.m128d_f64[0] =
         (pTVar13->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->RootTransform).Rotation.XY.m128d_f64[1] = dVar7;
    dVar7 = (pTVar13->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->RootTransform).Rotation.ZW.m128d_f64[0] =
         (pTVar13->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->RootTransform).Rotation.ZW.m128d_f64[1] = dVar7;
    dVar7 = (pTVar13->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->RootTransform).Translation.XY.m128d_f64[0] =
         (pTVar13->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->RootTransform).Translation.XY.m128d_f64[1] = dVar7;
    dVar7 = (pTVar13->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->RootTransform).Translation.ZW.m128d_f64[0] =
         (pTVar13->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->RootTransform).Translation.ZW.m128d_f64[1] = dVar7;
    dVar7 = (pTVar13->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->RootTransform).Scale3D.XY.m128d_f64[0] =
         (pTVar13->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->RootTransform).Scale3D.XY.m128d_f64[1] = dVar7;
    dVar7 = (pTVar13->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->RootTransform).Scale3D.ZW.m128d_f64[0] =
         (pTVar13->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->RootTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
    if (param_2->bMirrored != false) {
      UE::PoseSearch::FMirrorDataCache::FMirrorDataCache
                ((FMirrorDataCache *)local_1f8,(param_2->MirrorDataTable).field0_0x0.DebugPtr,
                 pFVar10);
      UE::PoseSearch::FMirrorDataCache::MirrorPose
                ((FMirrorDataCache *)local_1f8,(FCompactPose *)&local_320);
      pTVar13 = UE::PoseSearch::FMirrorDataCache::MirrorTransform
                          ((FMirrorDataCache *)local_1f8,&local_a8,
                           &__return_storage_ptr__->RootTransform);
      dVar7 = (pTVar13->Rotation).XY.m128d_f64[1];
      (__return_storage_ptr__->RootTransform).Rotation.XY.m128d_f64[0] =
           (pTVar13->Rotation).XY.m128d_f64[0];
      (__return_storage_ptr__->RootTransform).Rotation.XY.m128d_f64[1] = dVar7;
      dVar7 = (pTVar13->Rotation).ZW.m128d_f64[1];
      (__return_storage_ptr__->RootTransform).Rotation.ZW.m128d_f64[0] =
           (pTVar13->Rotation).ZW.m128d_f64[0];
      (__return_storage_ptr__->RootTransform).Rotation.ZW.m128d_f64[1] = dVar7;
      dVar7 = (pTVar13->Translation).XY.m128d_f64[1];
      (__return_storage_ptr__->RootTransform).Translation.XY.m128d_f64[0] =
           (pTVar13->Translation).XY.m128d_f64[0];
      (__return_storage_ptr__->RootTransform).Translation.XY.m128d_f64[1] = dVar7;
      dVar7 = (pTVar13->Translation).ZW.m128d_f64[1];
      (__return_storage_ptr__->RootTransform).Translation.ZW.m128d_f64[0] =
           (pTVar13->Translation).ZW.m128d_f64[0];
      (__return_storage_ptr__->RootTransform).Translation.ZW.m128d_f64[1] = dVar7;
      dVar7 = (pTVar13->Scale3D).XY.m128d_f64[1];
      (__return_storage_ptr__->RootTransform).Scale3D.XY.m128d_f64[0] =
           (pTVar13->Scale3D).XY.m128d_f64[0];
      (__return_storage_ptr__->RootTransform).Scale3D.XY.m128d_f64[1] = dVar7;
      dVar7 = (pTVar13->Scale3D).ZW.m128d_f64[1];
      (__return_storage_ptr__->RootTransform).Scale3D.ZW.m128d_f64[0] =
           (pTVar13->Scale3D).ZW.m128d_f64[0];
      (__return_storage_ptr__->RootTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
      if (local_1e0 != (void *)0x0) {
        FMemory::Free(local_1e0);
      }
      if ((void *)local_1f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1f8._8_8_);
      }
    }
    _Src = local_320._padding_;
    iVar8 = (int)local_320._padding_;
    lVar15 = (longlong)(int)local_320._padding_;
    pFVar1 = &__return_storage_ptr__->Pose;
    iVar4 = *(int *)&(__return_storage_ptr__->Pose).field_0xc;
    puVar2 = &(__return_storage_ptr__->Pose).field_0xc;
    *(int *)&(__return_storage_ptr__->Pose).field_0x8 = (int)local_320._padding_;
    if (((int)local_320._padding_ == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,(int)local_320._padding_,iVar4,(ForAnyElementType *)pFVar1,
                 (int)local_320._padding_,(int *)puVar2);
      if (iVar8 != 0) {
        memcpy(*(void **)pFVar1,(void *)_Src,lVar15 * 0x60);
      }
    }
    *(FBoneContainer **)&(__return_storage_ptr__->Pose).field_0x10 = local_320.BoneContainer;
    FCSPose<FCompactHeapPose>::InitPose(&__return_storage_ptr__->ComponentSpacePose,pFVar1);
    if (local_1b8.AccumulatedRootTransform.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1b8.AccumulatedRootTransform.AllocatorInstance.Data);
    }
    if (local_308.bPopped == false) {
      if (((local_308.Mem)->TopMark != &local_308) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FPoseSearchAssetSamplerPose *)(*pcVar6)();
        return pFVar14;
      }
      local_308.bPopped = true;
      (local_308.Mem)->NumMarks = (local_308.Mem)->NumMarks + -1;
      if (local_308.SavedChunk != (local_308.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_308.Mem,local_308.SavedChunk);
      }
      (local_308.Mem)->Top = local_308.Top;
      (local_308.Mem)->TopMark = local_308.NextTopmostMark;
    }
  }
  else if (1 < (byte)LogPoseSearch._0_1_) {
    local_298[0] = (FName)pUVar5->_padding_;
    ::FName::ToString(local_298,&local_288);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPoseSearchAssetSamplerLibrary @ 14a8ce390

void __cdecl
UPoseSearchAssetSamplerLibrary::StaticRegisterNativesUPoseSearchAssetSamplerLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPoseSearchAssetSamplerLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VLogDraw @ 14a8cfe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPoseSearchAssetSamplerLibrary::VLogDraw
          (UObject *param_1,USkeletalMeshComponent *param_2,wchar_t *param_3,FColor param_4,
          float param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  USkinnedAsset *pUVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined4 uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  FColor_u_0 local_res20 [2];
  undefined1 auStackY_3b8 [32];
  FName local_378;
  FName local_370;
  FName local_368;
  wchar_t *local_360;
  FName local_358;
  TVector<double>_u_0 local_350;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  undefined1 local_258 [16];
  double local_248;
  undefined1 local_238 [16];
  double local_228;
  double local_218;
  double dStack_210;
  undefined8 local_208;
  undefined1 local_200 [16];
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_res20[0] = param_4.field0_0x0;
  local_360 = param_3;
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSamplerLibrary.cpp"
                          ,0x6f,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 != (USkeletalMeshComponent *)0x0) &&
     (pUVar12 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_2),
     pUVar12 != (USkinnedAsset *)0x0)) {
    uVar16 = 0;
    if ((0.0 < param_5) && (FVisualLogger::bIsRecording != 0)) {
      auVar31._0_8_ = param_2->_padding_;
      auVar31._8_8_ = param_2->_padding_;
      local_218 = ___xmm_00000000000000003ff0000000000000;
      dStack_210 = _UNK_150689518;
      dVar35 = (double)param_2->_padding_;
      dVar7 = (double)param_2->_padding_ * ___xmm_00000000000000003ff0000000000000;
      dVar8 = (double)param_2->_padding_ * _UNK_150689518;
      uVar34 = (undefined4)((ulonglong)dVar8 >> 0x20);
      local_258._0_8_ = param_2->_padding_;
      local_258._8_8_ = param_2->_padding_;
      auVar38._8_4_ = SUB84(dVar8,0);
      auVar38._0_8_ = dVar7;
      auVar38._12_4_ = uVar34;
      auVar23 = blendpd(local_258,auVar31,2);
      local_1e8 = (double)param_2->_padding_;
      dStack_1e0 = (double)param_2->_padding_;
      local_2f0._s_0.Z = (double)param_2->_padding_;
      auVar36._0_8_ = (double)param_2->_padding_ * 0.0;
      auVar36._8_8_ = (double)param_2->_padding_ * 0.0;
      dVar9 = (double)param_5;
      auVar39._0_8_ = auVar38._8_8_ * (double)local_258._0_8_ - (double)local_258._8_8_ * dVar7;
      auVar39._8_8_ = auVar36._0_8_ * (double)local_258._8_8_ - (double)auVar31._0_8_ * dVar8;
      auVar40._8_4_ = SUB84(dVar8,0);
      auVar40._0_8_ = dVar7;
      auVar40._12_4_ = uVar34;
      local_208 = 0;
      auVar19 = blendpd(auVar40,auVar36,2);
      auVar25._0_8_ = auVar19._0_8_ * (double)auVar31._0_8_ - auVar23._0_8_ * auVar36._0_8_;
      auVar25._8_8_ = auVar19._8_8_ * (double)auVar31._8_8_ - auVar23._8_8_ * auVar36._8_8_;
      auVar19._0_8_ = param_2->_padding_;
      auVar19._8_8_ = param_2->_padding_;
      auVar40 = blendpd(auVar39,auVar25,2);
      dVar4 = auVar39._8_8_ + auVar39._8_8_;
      dVar5 = auVar25._0_8_ + auVar25._0_8_;
      uVar34 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar41._0_8_ = auVar40._0_8_ + auVar40._0_8_;
      auVar41._8_8_ = auVar40._8_8_ + auVar40._8_8_;
      auVar29._8_4_ = SUB84(dVar5,0);
      auVar29._0_8_ = dVar4;
      auVar29._12_4_ = uVar34;
      auVar24._8_4_ = SUB84(dVar5,0);
      auVar24._0_8_ = dVar4;
      auVar24._12_4_ = uVar34;
      auVar25 = blendpd(auVar24,auVar41,2);
      auVar40 = blendpd(auVar19,auVar31,2);
      auVar30._0_8_ = auVar29._8_8_ * (double)auVar19._0_8_ - (double)auVar19._8_8_ * dVar4;
      auVar30._8_8_ = auVar41._0_8_ * (double)auVar19._8_8_ - (double)auVar31._0_8_ * dVar5;
      auVar26._0_8_ = auVar25._0_8_ * (double)auVar31._0_8_ - auVar40._0_8_ * auVar41._0_8_;
      auVar26._8_8_ = auVar25._8_8_ * (double)auVar31._8_8_ - auVar40._8_8_ * auVar41._8_8_;
      auVar23._8_4_ = SUB84(auVar30._8_8_,0);
      auVar23._0_8_ = auVar30._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
      dVar4 = dVar4 * dVar35 + dVar7 + auVar23._8_8_;
      dVar5 = dVar5 * dVar35 + dVar8 + auVar26._0_8_;
      local_350._s_0.X = dVar9 * dVar4 + local_1e8;
      local_200._8_4_ = SUB84(dVar5,0);
      local_200._0_8_ = dVar4;
      local_200._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar31 = blendpd(auVar30,auVar26,2);
      local_1f0 = auVar41._0_8_ * dVar35 + auVar36._0_8_ + auVar31._0_8_;
      local_350._s_0.Y = dVar9 * dVar5 + dStack_1e0;
      local_350._s_0.Z = dVar9 * local_1f0 + local_2f0._s_0.Z;
      local_2f0._s_0.X = (double)param_2->_padding_;
      local_2f0._s_0.Y = (double)param_2->_padding_;
      local_1d8 = local_2f0._s_0.Z;
      ::FName::FName(&local_378,param_3);
      FVisualLogger::SegmentLogfImpl
                (param_1,&local_378,Display,(TVector<double> *)&local_2f0._s_0,
                 (TVector<double> *)&local_350._s_0,&FColor::Red,0,L"");
      if (FVisualLogger::bIsRecording != 0) {
        auVar1._0_8_ = param_2->_padding_;
        auVar1._8_8_ = param_2->_padding_;
        local_238._0_8_ = param_2->_padding_;
        local_238._8_8_ = param_2->_padding_;
        dVar7 = (double)param_2->_padding_ * 0.0;
        dVar4 = (double)param_2->_padding_ * 0.0;
        local_258._0_8_ = param_2->_padding_;
        local_258._8_8_ = param_2->_padding_;
        local_2d8._s_0.Z = (double)param_2->_padding_;
        dVar8 = (double)param_2->_padding_;
        auVar19 = blendpd(local_238,auVar1,2);
        local_1d0 = ___xmm_3ff00000000000000000000000000000;
        dStack_1c8 = _UNK_15061cbc8;
        dVar35 = ___xmm_3ff00000000000000000000000000000 * (double)param_2->_padding_;
        dVar37 = _UNK_15061cbc8 * (double)param_2->_padding_;
        auVar42._8_4_ = SUB84(dVar37,0);
        auVar42._0_8_ = dVar35;
        uVar34 = (undefined4)((ulonglong)dVar37 >> 0x20);
        auVar42._12_4_ = uVar34;
        local_1c0 = 0;
        auVar43._0_8_ = auVar42._8_8_ * (double)local_238._0_8_ - (double)local_238._8_8_ * dVar35;
        auVar43._8_8_ = dVar7 * (double)local_238._8_8_ - (double)auVar1._0_8_ * dVar37;
        auVar20._8_4_ = SUB84(dVar37,0);
        auVar20._0_8_ = dVar35;
        auVar20._12_4_ = uVar34;
        auVar6._8_4_ = SUB84(dVar4,0);
        auVar6._0_8_ = dVar7;
        auVar6._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        auVar31 = blendpd(auVar20,auVar6,2);
        auVar21._0_8_ = auVar31._0_8_ * (double)auVar1._0_8_ - auVar19._0_8_ * dVar7;
        auVar21._8_8_ = auVar31._8_8_ * (double)auVar1._8_8_ - auVar19._8_8_ * dVar4;
        auVar2._0_8_ = param_2->_padding_;
        auVar2._8_8_ = param_2->_padding_;
        auVar31 = blendpd(auVar43,auVar21,2);
        dVar4 = auVar43._8_8_ + auVar43._8_8_;
        dVar5 = auVar21._0_8_ + auVar21._0_8_;
        uVar34 = (undefined4)((ulonglong)dVar5 >> 0x20);
        auVar44._0_8_ = auVar31._0_8_ + auVar31._0_8_;
        auVar44._8_8_ = auVar31._8_8_ + auVar31._8_8_;
        auVar32._8_4_ = SUB84(dVar5,0);
        auVar32._0_8_ = dVar4;
        auVar32._12_4_ = uVar34;
        auVar27._8_4_ = SUB84(dVar5,0);
        auVar27._0_8_ = dVar4;
        auVar27._12_4_ = uVar34;
        auVar19 = blendpd(auVar27,auVar44,2);
        auVar31 = blendpd(auVar2,auVar1,2);
        auVar33._0_8_ = auVar32._8_8_ * (double)auVar2._0_8_ - (double)auVar2._8_8_ * dVar4;
        auVar33._8_8_ = auVar44._0_8_ * (double)auVar2._8_8_ - (double)auVar1._0_8_ * dVar5;
        auVar28._0_8_ = auVar19._0_8_ * (double)auVar1._0_8_ - auVar31._0_8_ * auVar44._0_8_;
        auVar28._8_8_ = auVar19._8_8_ * (double)auVar1._8_8_ - auVar31._8_8_ * auVar44._8_8_;
        auVar22._8_4_ = SUB84(auVar33._8_8_,0);
        auVar22._0_8_ = auVar33._0_8_;
        auVar22._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
        dVar4 = dVar4 * dVar8 + dVar35 + auVar22._8_8_;
        dVar5 = dVar5 * dVar8 + dVar37 + auVar28._0_8_;
        local_338._s_0.X = dVar9 * dVar4 + (double)param_2->_padding_;
        auVar31 = blendpd(auVar33,auVar28,2);
        local_1a8 = auVar44._0_8_ * dVar8 + dVar7 + auVar31._0_8_;
        local_1b8._8_4_ = SUB84(dVar5,0);
        local_1b8._0_8_ = dVar4;
        local_1b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_338._s_0.Z = dVar9 * local_1a8 + local_2d8._s_0.Z;
        local_338._s_0.Y = dVar9 * dVar5 + (double)param_2->_padding_;
        local_2d8._s_0.X = (double)param_2->_padding_;
        local_2d8._s_0.Y = (double)param_2->_padding_;
        local_248 = local_2d8._s_0.Z;
        ::FName::FName(&local_370,param_3);
        FVisualLogger::SegmentLogfImpl
                  (param_1,&local_370,Display,(TVector<double> *)&local_2d8._s_0,
                   (TVector<double> *)&local_338._s_0,&FColor::Green,0,L"");
        if (FVisualLogger::bIsRecording != 0) {
          dVar4 = (double)param_2->_padding_;
          dVar5 = (double)param_2->_padding_;
          local_238._0_8_ = param_2->_padding_;
          local_238._8_8_ = param_2->_padding_;
          dVar7 = (double)param_2->_padding_;
          local_2c0._s_0.X = 0.0;
          local_2c0._s_0.Y = 0.0;
          local_2c0._s_0.Z = __real_3ff0000000000000;
          UE::Math::TTransform<double>::TransformVector
                    ((TTransform<double> *)&param_2->_padding_,(TVector<double> *)&local_320._s_0,
                     (TVector<double> *)&local_2c0._s_0);
          local_308._s_0.X = dVar9 * local_320._s_0.X + dVar4;
          local_308._s_0.Y = dVar9 * local_320._s_0.Y + dVar5;
          local_308._s_0.Z = dVar9 * local_320._s_0.Z + dVar7;
          local_2a8._s_0.X = (double)param_2->_padding_;
          local_2a8._s_0.Y = (double)param_2->_padding_;
          local_2a8._s_0.Z = dVar7;
          local_228 = dVar7;
          ::FName::FName(&local_368,param_3);
          FVisualLogger::SegmentLogfImpl
                    (param_1,&local_368,Display,(TVector<double> *)&local_2a8._s_0,
                     (TVector<double> *)&local_308._s_0,&FColor::Blue,0,L"");
        }
      }
    }
    iVar11 = USkinnedMeshComponent::GetNumBones((USkinnedMeshComponent *)param_2);
    lVar18 = (longlong)iVar11;
    uVar17 = uVar16;
    if (0 < iVar11) {
      do {
        lVar13 = (**(code **)(*(longlong *)pUVar12 + 0x318))();
        uVar15 = (uint)uVar16;
        uVar14 = 0;
        if ((int)uVar15 < *(int *)(lVar13 + 0x28)) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar11 = *(int *)(*(longlong *)(lVar13 + 0x20) + 8 + uVar17);
        if (iVar11 != -1) {
          USkinnedMeshComponent::GetBoneTransform
                    ((USkinnedMeshComponent *)param_2,&local_138,uVar15);
          USkinnedMeshComponent::GetBoneTransform
                    ((USkinnedMeshComponent *)param_2,&local_198,iVar11);
          if (FVisualLogger::bIsRecording != 0) {
            local_290._s_0.X = local_198.Translation.XY.m128d_f64[0];
            local_290._s_0.Y = local_198.Translation.XY.m128d_f64[1];
            local_290._s_0.Z = local_198.Translation.ZW.m128d_f64[0];
            local_278._s_0.X = local_138.Translation.XY.m128d_f64[0];
            local_278._s_0.Y = local_138.Translation.XY.m128d_f64[1];
            local_278._s_0.Z = local_138.Translation.ZW.m128d_f64[0];
            ::FName::FName(&local_358,local_360);
            FVisualLogger::SegmentLogfImpl
                      (param_1,&local_358,Display,(TVector<double> *)&local_278._s_0,
                       (TVector<double> *)&local_290._s_0,(FColor *)&local_res20[0]._s_0,0,L"");
          }
        }
        uVar16 = (ulonglong)(uVar15 + 1);
        lVar18 = lVar18 + -1;
        uVar17 = uVar17 + 0xc;
      } while (lVar18 != 0);
    }
  }
  return;
}

// execDraw @ 14a8d2d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPoseSearchAssetSamplerLibrary::execDraw(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FColor FVar3;
  longlong *plVar4;
  bool bVar5;
  UWorld *pUVar6;
  TTransform<double> *pTVar7;
  undefined1 auStackY_138 [32];
  longlong *local_108 [2];
  TTransform<double> local_f8;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_108[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_f8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_f8.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_f8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_f8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_f8.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_88 = 0;
  pvStack_80 = (void *)0x0;
  local_68 = 0;
  pvStack_60 = (void *)0x0;
  local_f8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  plVar4 = local_108[0];
  pTVar7 = &local_f8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar7 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAssetSamplerLibrary.cpp"
                       ,0x5f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar3.field0_0x0 = FColor::Red.field0_0x0;
  if (plVar4 != (longlong *)0x0) {
    pUVar6 = (UWorld *)(**(code **)(*plVar4 + 0x180))(plVar4);
    Draw<FCSPose<FCompactHeapPose>_>
              (pUVar6,(FCSPose<FCompactHeapPose> *)(pTVar7[1].Translation.ZW.m128d_f64 + 1),pTVar7,
               FVar3,__real_41a00000,__real_40c00000);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  if (pvStack_80 != (void *)0x0) {
    FMemory::Free(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execGetTransformByName @ 14a8d3730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseSearchAssetSamplerLibrary::execGetTransformByName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  FPoseSearchAssetSamplerPose *pFVar4;
  undefined1 auStack_198 [32];
  EPoseSearchAssetSamplerSpace local_178 [8];
  FName local_170;
  undefined1 local_168 [96];
  void *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_168._0_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_168._32_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_168._16_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
  ;
  local_168._64_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_168._48_16_ =
       (undefined1  [16])UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_f8 = 0;
  pvStack_f0 = (void *)0x0;
  local_d8 = 0;
  pvStack_d0 = (void *)0x0;
  local_168._80_16_ = (undefined1  [16])UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  pFVar4 = (FPoseSearchAssetSamplerPose *)local_168;
  if ((FPoseSearchAssetSamplerPose *)param_2->MostRecentPropertyAddress !=
      (FPoseSearchAssetSamplerPose *)0x0) {
    pFVar4 = (FPoseSearchAssetSamplerPose *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_178[0] = Local;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_178);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetTransformByName(&local_88,pFVar4,local_170,local_178[0]);
  dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar3->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar3->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar3->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar2;
  dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar3->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar2;
  dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar3->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar2;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (pvStack_d0 != (void *)0x0) {
    FMemory::Free(pvStack_d0);
  }
  if (pvStack_f0 != (void *)0x0) {
    FMemory::Free(pvStack_f0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  return;
}

// execSamplePose @ 14a8d3f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPoseSearchAssetSamplerLibrary::execSamplePose(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong _Src;
  int iVar3;
  UAnimationAsset *pUVar4;
  float fVar5;
  char cVar6;
  UMirrorDataTable *pUVar7;
  bool bVar8;
  FBoneContainer *pFVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  TTransform<double> *pTVar12;
  longlong lVar13;
  undefined1 auStackY_5a8 [32];
  undefined1 local_568 [8];
  UAnimInstance *local_560;
  FBaseCompactPose<TMemStackAllocator<0>_> local_558;
  FMemMark local_540;
  TArray<int,TSizedDefaultAllocator<32>_> *local_518;
  undefined8 local_510;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_508;
  undefined8 local_500;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_4f8
  ;
  undefined8 local_4f0;
  void *local_4e8;
  undefined8 local_4e0;
  FName local_4d8 [2];
  FString local_4c8;
  FAnimExtractContext local_4b8;
  FBlendedCurve local_468;
  code *local_448;
  undefined1 *local_440;
  undefined1 local_438 [24];
  void *local_420;
  UAnimationAsset *local_408;
  float local_400;
  TTransform<double> local_3f8;
  char local_398;
  UMirrorDataTable *local_390;
  TVector<double>_u_0 local_388;
  int local_370;
  FAnimationPoseData local_368;
  undefined1 local_348 [96];
  undefined1 local_2e8 [16];
  FBoneContainer *local_2d8;
  void *pvStack_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  undefined8 local_2b8;
  void *pvStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  void *local_298;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  UAnimationAsset *local_268;
  float local_260;
  double local_258 [2];
  double local_248 [2];
  double local_238 [2];
  double local_228 [2];
  double local_218 [2];
  double local_208 [2];
  char local_1f8;
  UMirrorDataTable *local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  int local_1d0;
  FAnimationAssetSampler local_1c8;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_560 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_560,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_560);
  }
  local_248[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_248[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_228[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_228[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_208[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_208[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_268 = (UAnimationAsset *)0x0;
  local_258[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_258[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_238[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_238[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_260 = 0.0;
  local_218[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_218[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_1f8 = '\0';
  local_1f0 = (UMirrorDataTable *)0x0;
  local_1d0 = 0x1e;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_268,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_268);
  }
  pUVar4 = local_268;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_408 = local_268;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_268 != (UAnimationAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_268);
  }
  pUVar7 = local_1f0;
  cVar6 = local_1f8;
  fVar5 = local_260;
  local_3f8.Rotation.XY.m128d_f64[0] = local_258[0];
  local_3f8.Rotation.XY.m128d_f64[1] = local_258[1];
  local_3f8.Rotation.ZW.m128d_f64[0] = local_248[0];
  local_3f8.Rotation.ZW.m128d_f64[1] = local_248[1];
  local_3f8.Translation.XY.m128d_f64[0] = local_238[0];
  local_3f8.Translation.XY.m128d_f64[1] = local_238[1];
  local_3f8.Translation.ZW.m128d_f64[0] = local_228[0];
  local_3f8.Translation.ZW.m128d_f64[1] = local_228[1];
  local_3f8.Scale3D.XY.m128d_f64[0] = local_218[0];
  local_3f8.Scale3D.XY.m128d_f64[1] = local_218[1];
  local_3f8.Scale3D.ZW.m128d_f64[0] = local_208[0];
  local_3f8.Scale3D.ZW.m128d_f64[1] = local_208[1];
  local_400 = local_260;
  local_398 = local_1f8;
  local_390 = local_1f0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f0 != (UMirrorDataTable *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_1f0);
  }
  iVar3 = local_1d0;
  local_388._s_0.X = local_1e8;
  local_388._s_0.Y = dStack_1e0;
  local_348._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_348._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_388._s_0.Z = local_1d8;
  local_348._32_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_348._40_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_348._16_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_348._24_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_348._64_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_348._72_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_348._48_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_348._56_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_2d8 = (FBoneContainer *)0x0;
  pvStack_2d0 = (void *)0x0;
  local_2b8 = 0;
  pvStack_2b0 = (void *)0x0;
  local_370 = local_1d0;
  local_348._80_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_348._88_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_2e8._0_8_ = (FScriptContainerElement *)0x0;
  local_2e8._8_8_ = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = (void *)0x0;
  local_290 = 0;
  local_288 = (void *)0x0;
  local_280 = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270._0_4_ = 0;
  local_270._4_4_ = 0;
  if (pUVar4 == (UAnimationAsset *)0x0) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else if (local_560 == (UAnimInstance *)0x0) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else if ((cVar6 == '\0') || (pUVar7 != (UMirrorDataTable *)0x0)) {
    pFVar9 = UAnimInstance::GetRequiredBonesOnAnyThread(local_560);
    puVar10 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_440 = local_568;
    local_448 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar11 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_448,puVar10);
    local_540.Mem = (FMemStackBase *)(pFVar11 + 2);
    local_540.Top = (local_540.Mem)->Top;
    local_540.SavedChunk = *(FTaggedMemory **)(pFVar11 + 4);
    local_540.bPopped = false;
    local_540.NextTopmostMark = *(FMemMark **)(pFVar11 + 5);
    pFVar11[5] = (FTlsAutoCleanup)&local_540;
    *(int *)(pFVar11 + 6) = *(int *)(pFVar11 + 6) + 1;
    UE::PoseSearch::FAnimationAssetSampler::FAnimationAssetSampler
              (&local_1c8,pUVar4,&local_3f8,(TVector<double> *)&local_388._s_0,iVar3,true,true);
    local_468._0_8_ = 0;
    local_468._8_8_ = 0;
    local_468._16_1_ = 0;
    local_468._24_8_ = 0;
    local_558._padding_ = 0;
    local_558._padding_ = 0;
    local_558.BoneContainer = (FBoneContainer *)0x0;
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer(&local_558,pFVar9);
    local_518 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_510 = 0;
    local_508 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
    local_500 = 0;
    local_4f8 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 *)0x0;
    local_4f0 = 0;
    local_4e8 = (void *)0x0;
    local_4e0 = 0;
    FBlendedCurve::InitFrom(&local_468,local_558.BoneContainer);
    FAnimationPoseData::FAnimationPoseData
              (&local_368,(FCompactPose *)&local_558,&local_468,
               (FStackAttributeContainer *)&local_518);
    local_4b8.bLooping = UE::PoseSearch::FAnimationAssetSampler::IsLoopable(&local_1c8);
    local_4b8.DeltaTimeRecord._9_2_ = local_4d8[1].ComparisonIndex.Value._1_2_;
    local_4b8.CurrentTime = (double)fVar5;
    local_4b8.DeltaTimeRecord._11_1_ = local_4d8[1].ComparisonIndex.Value._3_1_;
    local_4b8.bExtractRootMotion = false;
    local_4b8.DeltaTimeRecord.Delta = 0.0;
    local_4b8.DeltaTimeRecord.bPreviousIsValid = true;
    local_4b8.DeltaTimeRecord.Previous = fVar5;
    local_4b8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b8.PoseCurves.ArrayNum = 0;
    local_4b8.PoseCurves.ArrayMax = 0;
    local_4b8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4b8.BonesRequired.ArrayNum = 0;
    local_4b8.BonesRequired.ArrayMax = 0;
    local_4b8.InterpolationOverride.bIsSet = false;
    UE::PoseSearch::FAnimationAssetSampler::ExtractPose(&local_1c8,&local_4b8,&local_368);
    if (local_4b8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.BonesRequired.AllocatorInstance.Data);
    }
    if (local_4b8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.PoseCurves.AllocatorInstance.Data);
    }
    if (local_4e8 != (void *)0x0) {
      FMemory::Free(local_4e8);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_4f8,(int)local_4f0);
    if (local_4f8 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_4f8);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (local_508,(int)local_500);
    if (local_508 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_508);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_518,(int)local_510);
    if (local_518 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_518);
    }
    pTVar12 = UE::PoseSearch::FAnimationAssetSampler::ExtractRootTransform
                        (&local_1c8,&local_118,fVar5);
    local_348._0_16_ = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
    local_348._16_16_ = *(undefined1 (*) [16])(pTVar12->Rotation).ZW.m128d_f64;
    local_348._32_16_ = *(undefined1 (*) [16])(pTVar12->Translation).XY.m128d_f64;
    local_348._48_16_ = *(undefined1 (*) [16])(pTVar12->Translation).ZW.m128d_f64;
    local_348._64_16_ = *(undefined1 (*) [16])(pTVar12->Scale3D).XY.m128d_f64;
    local_348._80_16_ = *(undefined1 (*) [16])(pTVar12->Scale3D).ZW.m128d_f64;
    if (cVar6 != '\0') {
      UE::PoseSearch::FMirrorDataCache::FMirrorDataCache
                ((FMirrorDataCache *)local_438,pUVar7,pFVar9);
      UE::PoseSearch::FMirrorDataCache::MirrorPose
                ((FMirrorDataCache *)local_438,(FCompactPose *)&local_558);
      pTVar12 = UE::PoseSearch::FMirrorDataCache::MirrorTransform
                          ((FMirrorDataCache *)local_438,&local_b8,(TTransform<double> *)local_348);
      local_348._0_16_ = *(undefined1 (*) [16])(pTVar12->Rotation).XY.m128d_f64;
      local_348._16_16_ = *(undefined1 (*) [16])(pTVar12->Rotation).ZW.m128d_f64;
      local_348._32_16_ = *(undefined1 (*) [16])(pTVar12->Translation).XY.m128d_f64;
      local_348._48_16_ = *(undefined1 (*) [16])(pTVar12->Translation).ZW.m128d_f64;
      local_348._64_16_ = *(undefined1 (*) [16])(pTVar12->Scale3D).XY.m128d_f64;
      local_348._80_16_ = *(undefined1 (*) [16])(pTVar12->Scale3D).ZW.m128d_f64;
      if (local_420 != (void *)0x0) {
        FMemory::Free(local_420);
      }
      if ((void *)local_438._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_438._8_8_);
      }
    }
    _Src = local_558._padding_;
    iVar3 = (int)local_558._padding_;
    lVar13 = (longlong)(int)local_558._padding_;
    local_2e8._8_4_ = (int)local_558._padding_;
    if (((int)local_558._padding_ == 0) && (local_2e8._12_4_ == 0)) {
      local_2e8._8_8_ = local_558._padding_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,(int)local_558._padding_,local_2e8._12_4_,(ForAnyElementType *)local_2e8,
                 (int)local_558._padding_,(int *)(local_2e8 + 0xc));
      if (iVar3 != 0) {
        memcpy((void *)local_2e8._0_8_,(void *)_Src,lVar13 * 0x60);
      }
    }
    local_2d8 = local_558.BoneContainer;
    FCSPose<FCompactHeapPose>::InitPose
              ((FCSPose<FCompactHeapPose> *)&pvStack_2b0,(FCompactHeapPose *)local_2e8);
    if (local_1c8.AccumulatedRootTransform.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1c8.AccumulatedRootTransform.AllocatorInstance.Data);
    }
    if (local_540.bPopped == false) {
      if (((local_540.Mem)->TopMark != &local_540) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_540.bPopped = true;
      (local_540.Mem)->NumMarks = (local_540.Mem)->NumMarks + -1;
      if (local_540.SavedChunk != (local_540.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_540.Mem,local_540.SavedChunk);
      }
      (local_540.Mem)->Top = local_540.Top;
      (local_540.Mem)->TopMark = local_540.NextTopmostMark;
    }
  }
  else if (1 < (byte)LogPoseSearch._0_1_) {
    local_4d8[0] = (FName)pUVar4->_padding_;
    ::FName::ToString(local_4d8,&local_4c8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
  }
  FPoseSearchAssetSamplerPose::operator=(param_3,(FPoseSearchAssetSamplerPose *)local_348);
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  if (local_288 != (void *)0x0) {
    FMemory::Free(local_288);
  }
  if (local_298 != (void *)0x0) {
    FMemory::Free(local_298);
  }
  if (pvStack_2b0 != (void *)0x0) {
    FMemory::Free(pvStack_2b0);
  }
  if (pvStack_2d0 != (void *)0x0) {
    FMemory::Free(pvStack_2d0);
  }
  if ((FScriptContainerElement *)local_2e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2e8._0_8_);
  }
  return;
}

