// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// BuildComponentSpaceTransform @ 1473ee860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAnimationUtils::BuildComponentSpaceTransform
          (TTransform<double> *param_1,int param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FBoneData,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStackY_178 [32];
  longlong local_140;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((param_3->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_3->AllocatorInstance).Data;
  dVar5 = *(double *)(pFVar1 + 8);
  (param_1->Rotation).XY.m128d_f64[0] = *(double *)pFVar1;
  (param_1->Rotation).XY.m128d_f64[1] = dVar5;
  dVar5 = *(double *)(pFVar1 + 0x18);
  (param_1->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar1 + 0x10);
  (param_1->Rotation).ZW.m128d_f64[1] = dVar5;
  dVar5 = *(double *)(pFVar1 + 0x28);
  (param_1->Translation).XY.m128d_f64[0] = *(double *)(pFVar1 + 0x20);
  (param_1->Translation).XY.m128d_f64[1] = dVar5;
  dVar5 = *(double *)(pFVar1 + 0x38);
  (param_1->Translation).ZW.m128d_f64[0] = *(double *)(pFVar1 + 0x30);
  (param_1->Translation).ZW.m128d_f64[1] = dVar5;
  dVar5 = *(double *)(pFVar1 + 0x48);
  (param_1->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar1 + 0x40);
  (param_1->Scale3D).XY.m128d_f64[1] = dVar5;
  dVar5 = *(double *)(pFVar1 + 0x58);
  (param_1->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar1 + 0x50);
  (param_1->Scale3D).ZW.m128d_f64[1] = dVar5;
  if (0 < param_2) {
    uVar12 = 0;
    if (param_2 < param_4->ArrayNum) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_4->AllocatorInstance).Data;
    uVar12 = *(int *)(pFVar1 + (longlong)param_2 * 0x80 + 0x58) - 2;
    if (-1 < (int)uVar12) {
      local_140 = (longlong)(int)uVar12 * 4;
      do {
        uVar10 = 0;
        if ((int)uVar12 < *(int *)(pFVar1 + (longlong)param_2 * 0x80 + 0x58)) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar10 = *(uint *)(local_140 + *(longlong *)(pFVar1 + (longlong)param_2 * 0x80 + 0x50));
        if ((uVar10 == 0xffffffff) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7611891614381768503>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationUtils.cpp"
                               ,0xc9,"AncestorIndex != INDEX_NONE"), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = 0;
        if ((int)uVar10 < param_3->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_128.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_128.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_128.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_128.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_128.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_128.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_128,
                   (TTransform<double> *)
                   ((param_3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x60),param_1);
        (param_1->Rotation).XY.m128d_f64[0] = local_128.Rotation.XY.m128d_f64[0];
        (param_1->Rotation).XY.m128d_f64[1] = local_128.Rotation.XY.m128d_f64[1];
        local_140 = local_140 + -4;
        uVar12 = uVar12 - 1;
        (param_1->Rotation).ZW.m128d_f64[0] = local_128.Rotation.ZW.m128d_f64[0];
        (param_1->Rotation).ZW.m128d_f64[1] = local_128.Rotation.ZW.m128d_f64[1];
        (param_1->Translation).XY.m128d_f64[0] = local_128.Translation.XY.m128d_f64[0];
        (param_1->Translation).XY.m128d_f64[1] = local_128.Translation.XY.m128d_f64[1];
        (param_1->Translation).ZW.m128d_f64[0] = local_128.Translation.ZW.m128d_f64[0];
        (param_1->Translation).ZW.m128d_f64[1] = local_128.Translation.ZW.m128d_f64[1];
        (param_1->Scale3D).XY.m128d_f64[0] = local_128.Scale3D.XY.m128d_f64[0];
        (param_1->Scale3D).XY.m128d_f64[1] = local_128.Scale3D.XY.m128d_f64[1];
        (param_1->Scale3D).ZW.m128d_f64[0] = local_128.Scale3D.ZW.m128d_f64[0];
        (param_1->Scale3D).ZW.m128d_f64[1] = local_128.Scale3D.ZW.m128d_f64[1];
        dVar5 = (param_1->Rotation).XY.m128d_f64[0];
        dVar6 = (param_1->Rotation).XY.m128d_f64[1];
        dVar7 = (param_1->Rotation).ZW.m128d_f64[0];
        dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
        auVar22._0_8_ = dVar7 * dVar7 + dVar5 * dVar5;
        auVar22._8_8_ = dVar8 * dVar8 + dVar6 * dVar6;
        auVar17._8_4_ = SUB84(auVar22._8_8_,0);
        auVar17._0_8_ = auVar22._0_8_;
        auVar17._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
        auVar28._0_8_ = auVar17._8_8_ + auVar22._0_8_;
        auVar28._8_8_ = auVar22._0_8_ + auVar22._8_8_;
        auVar23 = sqrtpd(auVar22,auVar28);
        uVar13 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar28._0_8_);
        uVar15 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar28._8_8_);
        uVar14 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar28._0_8_);
        uVar16 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar28._8_8_);
        auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
        auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
        auVar23._0_8_ = (ulonglong)(auVar17._0_8_ * dVar5) & uVar14;
        uVar4 = uVar16 & (ulonglong)(auVar17._8_8_ * dVar6);
        auVar23._8_4_ = (undefined4)uVar4;
        auVar23._12_4_ = (undefined4)(uVar4 >> 0x20);
        auVar30._0_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar30._4_4_ =
             ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar30._8_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar30._12_4_ =
             ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar29._0_8_ = uVar13 & (ulonglong)(auVar28._0_8_ * dVar7);
        uVar4 = uVar15 & (ulonglong)(auVar28._8_8_ * dVar8);
        auVar29._8_4_ = (undefined4)uVar4;
        auVar29._12_4_ = (undefined4)(uVar4 >> 0x20);
        auVar26._0_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar26._4_4_ =
             ~(uint)(uVar13 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar26._8_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar26._12_4_ =
             ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar23 | auVar30;
        *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar29 | auVar26;
      } while (-1 < (int)uVar12);
    }
    uVar12 = 0;
    if (param_2 < param_3->ArrayNum) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    auVar27._8_8_ = GlobalVectorConstants::FloatZero.m128_u64[1];
    auVar27._0_8_ = auVar27._8_8_;
    local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply
              (&local_c8,
               (TTransform<double> *)((param_3->AllocatorInstance).Data + (longlong)param_2 * 0x60),
               param_1);
    (param_1->Rotation).XY.m128d_f64[0] = local_c8.Rotation.XY.m128d_f64[0];
    (param_1->Rotation).XY.m128d_f64[1] = local_c8.Rotation.XY.m128d_f64[1];
    (param_1->Rotation).ZW.m128d_f64[0] = local_c8.Rotation.ZW.m128d_f64[0];
    (param_1->Rotation).ZW.m128d_f64[1] = local_c8.Rotation.ZW.m128d_f64[1];
    (param_1->Translation).XY.m128d_f64[0] = local_c8.Translation.XY.m128d_f64[0];
    (param_1->Translation).XY.m128d_f64[1] = local_c8.Translation.XY.m128d_f64[1];
    (param_1->Translation).ZW.m128d_f64[0] = local_c8.Translation.ZW.m128d_f64[0];
    (param_1->Translation).ZW.m128d_f64[1] = local_c8.Translation.ZW.m128d_f64[1];
    (param_1->Scale3D).XY.m128d_f64[0] = local_c8.Scale3D.XY.m128d_f64[0];
    (param_1->Scale3D).XY.m128d_f64[1] = local_c8.Scale3D.XY.m128d_f64[1];
    (param_1->Scale3D).ZW.m128d_f64[0] = local_c8.Scale3D.ZW.m128d_f64[0];
    (param_1->Scale3D).ZW.m128d_f64[1] = local_c8.Scale3D.ZW.m128d_f64[1];
    dVar5 = (param_1->Rotation).XY.m128d_f64[0];
    dVar6 = (param_1->Rotation).XY.m128d_f64[1];
    dVar7 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar21 = dVar7 * dVar7 + dVar5 * dVar5;
    dVar25 = dVar8 * dVar8 + dVar6 * dVar6;
    auVar18._8_4_ = SUB84(dVar25,0);
    auVar18._0_8_ = dVar21;
    auVar18._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    auVar19._0_8_ = auVar18._8_8_ + dVar21;
    auVar19._8_8_ = dVar21 + dVar25;
    auVar28 = sqrtpd(auVar27,auVar19);
    uVar13 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar19._0_8_);
    uVar15 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar19._8_8_);
    uVar14 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar19._0_8_);
    uVar16 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar19._8_8_);
    auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
    auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
    auVar20._0_8_ = uVar14 & (ulonglong)(auVar17._0_8_ * dVar5);
    uVar4 = uVar16 & (ulonglong)(auVar17._8_8_ * dVar6);
    auVar20._8_4_ = (undefined4)uVar4;
    auVar20._12_4_ = (undefined4)(uVar4 >> 0x20);
    auVar31._0_8_ = uVar13 & (ulonglong)(auVar28._0_8_ * dVar7);
    uVar4 = uVar15 & (ulonglong)(auVar28._8_8_ * dVar8);
    auVar31._8_4_ = (undefined4)uVar4;
    auVar31._12_4_ = (undefined4)(uVar4 >> 0x20);
    auVar3._4_4_ = ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
    ;
    auVar3._0_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar3._8_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar3._12_4_ =
         ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar24._0_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar24._4_4_ =
         ~(uint)(uVar13 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar24._8_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar24._12_4_ =
         ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar20 | auVar3;
    *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar31 | auVar24;
  }
  return;
}

// BuildSkeletonMetaData @ 1473ef250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FAnimationUtils::BuildSkeletonMetaData
          (USkeleton *param_1,TArray<FBoneData,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  undefined1 auVar19 [16];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  UClass *pUVar26;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  size_t sVar27;
  FString *pFVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint uVar32;
  wchar_t *pwVar33;
  uint uVar34;
  longlong lVar35;
  wchar_t *pwVar36;
  uint uVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar45;
  double dVar44;
  longlong local_res10;
  longlong local_res20;
  int local_148;
  uint local_144;
  uint local_140 [2];
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  UObject *local_120;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_118;
  FString local_110;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f4;
  float local_ec;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_130 = 0;
  local_118 = USkeleton::GetRefLocalPoses(param_1,(FName)0x0);
  iVar22 = (param_1->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
  lVar35 = (longlong)iVar22;
  DestructItems<FBoneData,int>((FBoneData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  piVar2 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,&param_2->AllocatorInstance,0,piVar2);
  }
  iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x80,0x10,iVar22,&param_2->AllocatorInstance,&param_2->ArrayNum,piVar2);
  local_128 = lVar35;
  memset((param_2->AllocatorInstance).Data + (longlong)iVar22 * 0x80,0,lVar35 << 7);
  pUVar26 = UAnimationSettings::StaticClass();
  if ((pUVar26->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar26);
  }
  pUVar4 = (pUVar26->ClassDefaultObject).field0_0x0.DebugPtr;
  local_120 = pUVar4;
  if (pUVar4 == (UObject *)0x0) {
    pFVar28 = GetTypeName<UAnimationSettings>(&local_b8);
    if ((pFVar28->Data).ArrayNum == 0) {
      pwVar36 = L"";
    }
    else {
      pwVar36 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar36);
  }
  pUVar26 = UAnimationSettings::StaticClass();
  auVar19 = ___xmm_7ff00000000000007ff0000000000000;
  uVar18 = _UNK_15061cc8c;
  uVar25 = _UNK_15061cc88;
  uVar24 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar34 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar22 = (int)pUVar26->_padding_;
  if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar22) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
      &pUVar26->_padding_)) {
    pFVar28 = GetTypeName<UAnimationSettings>(&local_a8);
    pwVar36 = L"";
    if ((pFVar28->Data).ArrayNum == 0) {
      pwVar33 = L"";
    }
    else {
      pwVar33 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
    }
    pFVar28 = GetFullNameForCastLogError<UObject>(&local_98,pUVar4);
    if ((pFVar28->Data).ArrayNum != 0) {
      pwVar36 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar36,pwVar33);
  }
  uVar37 = 0;
  if (0 < lVar35) {
    local_res10 = 0;
    local_res20 = 0;
    local_138 = 0;
    do {
      uVar32 = ~uVar37 >> 0x1f;
      uVar30 = 0;
      if ((int)uVar37 < param_2->ArrayNum) {
        uVar30 = uVar32;
      }
      if ((uVar30 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar20 = local_118;
      pFVar5 = (param_2->AllocatorInstance).Data;
      iVar22 = local_118->ArrayNum;
      uVar30 = 0;
      if ((int)uVar37 < iVar22) {
        uVar30 = uVar32;
      }
      if (uVar30 == 0) {
        iVar22 = 0x506106c8;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar30 = (uint)CONCAT71(extraout_var,bVar21);
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar6 = (pTVar20->AllocatorInstance).Data;
      uVar41 = auVar19._0_4_;
      uVar42 = auVar19._4_4_;
      uVar43 = auVar19._8_4_;
      uVar45 = auVar19._12_4_;
      pFVar1 = pFVar6 + local_res10;
      pFVar3 = pFVar6 + local_res10 + 0x10;
      dVar40 = auVar19._0_8_;
      dVar44 = auVar19._8_8_;
      lVar35 = -(ulonglong)
                ((double)CONCAT44(uVar45 & *(uint *)(pFVar3 + 0xc),uVar43 & *(uint *)(pFVar3 + 8))
                == dVar44);
      lVar38 = -(ulonglong)
                ((double)CONCAT44(*(uint *)(pFVar1 + 0xc) & uVar45,*(uint *)(pFVar1 + 8) & uVar43)
                == dVar44);
      auVar9._8_4_ = (int)lVar35;
      auVar9._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar42 & *(uint *)(pFVar3 + 4),uVar41 & *(uint *)pFVar3) ==
                      dVar40);
      auVar9._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
      uVar29 = movmskpd(iVar22,auVar9);
      auVar13._8_4_ = (int)lVar38;
      auVar13._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(*(uint *)(pFVar1 + 4) & uVar42,*(uint *)pFVar1 & uVar41) == dVar40);
      auVar13._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      iVar22 = movmskpd(uVar30,auVar13);
      if ((uVar29 & 0x3fffffff) == 0 && iVar22 == 0) {
        lVar35 = -(ulonglong)
                  ((double)CONCAT44(uVar45 & *(uint *)(pFVar6 + local_res10 + 0x3c),
                                    uVar43 & *(uint *)(pFVar6 + local_res10 + 0x38)) == dVar44);
        auVar10._8_4_ = (int)lVar35;
        auVar10._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar42 & *(uint *)(pFVar6 + local_res10 + 0x34),
                                uVar41 & *(uint *)(pFVar6 + local_res10 + 0x30)) == dVar40);
        auVar10._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
        uVar30 = movmskpd(0,auVar10);
        lVar35 = -(ulonglong)
                  ((double)CONCAT44(uVar45 & *(uint *)(pFVar6 + local_res10 + 0x2c),
                                    uVar43 & *(uint *)(pFVar6 + local_res10 + 0x28)) == dVar44);
        auVar14._8_4_ = (int)lVar35;
        auVar14._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar42 & *(uint *)(pFVar6 + local_res10 + 0x24),
                                uVar41 & *(uint *)(pFVar6 + local_res10 + 0x20)) == dVar40);
        auVar14._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
        iVar22 = movmskpd(iVar22,auVar14);
        if ((uVar30 & 0x3fffffff) != 0 || iVar22 != 0) goto LAB_1473ef4d1;
        pFVar1 = pFVar6 + local_res10 + 0x50;
        pFVar3 = pFVar6 + local_res10 + 0x40;
        lVar35 = -(ulonglong)
                  ((double)CONCAT44(uVar45 & *(uint *)(pFVar1 + 0xc),uVar43 & *(uint *)(pFVar1 + 8))
                  == dVar44);
        auVar11._8_4_ = (int)lVar35;
        auVar11._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar42 & *(uint *)(pFVar1 + 4),uVar41 & *(uint *)pFVar1) == dVar40);
        auVar11._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
        uVar30 = movmskpd(0,auVar11);
        lVar35 = -(ulonglong)
                  ((double)CONCAT44(uVar45 & *(uint *)(pFVar3 + 0xc),uVar43 & *(uint *)(pFVar3 + 8))
                  == dVar44);
        auVar15._8_4_ = (int)lVar35;
        auVar15._0_8_ =
             -(ulonglong)
              ((double)CONCAT44(uVar42 & *(uint *)(pFVar3 + 4),uVar41 & *(uint *)pFVar3) == dVar40);
        auVar15._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
        iVar22 = movmskpd(iVar22,auVar15);
        uVar31 = 0;
        if ((uVar30 & 0x3fffffff) != 0 || iVar22 != 0) goto LAB_1473ef4d1;
      }
      else {
LAB_1473ef4d1:
        uVar31 = 0x551e9650;
        bVar21 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7611891614381768649>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationUtils.cpp"
                            ,0x37,"!SrcTransform.ContainsNaN()");
        iVar22 = (int)CONCAT71(extraout_var_00,bVar21);
        if (bVar21) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      dVar40 = *(double *)(pFVar6 + local_res10);
      dVar44 = *(double *)(pFVar6 + local_res10 + 8);
      dVar16 = *(double *)(pFVar6 + local_res10 + 0x10);
      dVar39 = *(double *)(pFVar6 + local_res10 + 0x10 + 8);
      dVar40 = dVar16 * dVar16 + dVar40 * dVar40;
      dVar44 = dVar39 * dVar39 + dVar44 * dVar44;
      dVar39 = dVar44 + dVar40;
      dVar40 = dVar40 + dVar44;
      dVar44 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar39;
      dVar16 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar40;
      dVar39 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar39;
      dVar40 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar40;
      auVar17._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
            (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar16 >> 0x20),uVar25 & SUB84(dVar16,0)));
      auVar17._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
            (double)CONCAT44(uVar24 & (uint)((ulonglong)dVar44 >> 0x20),uVar34 & SUB84(dVar44,0)));
      iVar22 = movmskpd(iVar22,auVar17);
      lVar35 = -(ulonglong)
                ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                (double)CONCAT44(uVar18 & (uint)((ulonglong)dVar40 >> 0x20),uVar25 & SUB84(dVar40,0)
                                ));
      auVar12._8_4_ = (int)lVar35;
      auVar12._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
            (double)CONCAT44(uVar24 & (uint)((ulonglong)dVar39 >> 0x20),uVar34 & SUB84(dVar39,0)));
      auVar12._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
      uVar30 = movmskpd(uVar31,auVar12);
      if (((uVar30 & 0x3fffffff) != 0 || iVar22 != 0) &&
         (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_7611891614381768648>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationUtils.cpp"
                              ,0x38,"SrcTransform.IsRotationNormalized()"), bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_88 = *(undefined8 *)(pFVar6 + local_res10);
      uStack_80 = *(undefined8 *)(pFVar6 + local_res10 + 8);
      local_78 = *(undefined8 *)(pFVar6 + local_res10 + 0x10);
      uStack_70 = *(undefined8 *)(pFVar6 + local_res10 + 0x10 + 8);
      *(undefined8 *)(pFVar5 + local_res20) = local_88;
      *(undefined8 *)(pFVar5 + local_res20 + 8) = uStack_80;
      *(undefined8 *)(pFVar5 + local_res20 + 0x10) = local_78;
      *(undefined8 *)(pFVar5 + local_res20 + 0x10 + 8) = uStack_70;
      local_e8 = *(double *)(pFVar6 + local_res10 + 0x20);
      dStack_e0 = *(double *)(pFVar6 + local_res10 + 0x28);
      local_d8 = *(double *)(pFVar6 + local_res10 + 0x30);
      *(ulonglong *)(pFVar5 + local_res20 + 0x20) = CONCAT44((float)dStack_e0,(float)local_e8);
      local_f8 = (float)local_d8;
      local_100 = CONCAT44((float)dStack_e0,(float)local_e8);
      *(float *)(pFVar5 + local_res20 + 0x28) = local_f8;
      local_d0 = *(double *)(pFVar6 + local_res10 + 0x40);
      dStack_c8 = *(double *)(pFVar6 + local_res10 + 0x40 + 8);
      local_c0 = *(double *)(pFVar6 + local_res10 + 0x50);
      local_ec = (float)local_c0;
      *(ulonglong *)(pFVar5 + local_res20 + 0x2c) = CONCAT44((float)dStack_c8,(float)local_d0);
      *(float *)(pFVar5 + local_res20 + 0x34) = local_ec;
      local_f4 = CONCAT44((float)dStack_c8,(float)local_d0);
      uVar30 = 0;
      if ((int)uVar37 < (param_1->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
        uVar30 = uVar32;
      }
      if ((uVar30 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined8 *)(pFVar5 + local_res20 + 0x38) =
           *(undefined8 *)
            ((param_1->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data + local_138);
      if (0 < (int)uVar37) {
        local_148 = FReferenceSkeleton::GetParentIndexInternal
                              (&param_1->ReferenceSkeleton,uVar37,
                               &(param_1->ReferenceSkeleton).FinalRefBoneInfo);
        if (((*(int **)(pFVar5 + local_res20 + 0x50) <= &local_148) &&
            (&local_148 <
             *(int **)(pFVar5 + local_res20 + 0x50) + *(int *)(pFVar5 + local_res20 + 0x5c))) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar22 = *(int *)(pFVar5 + local_res20 + 0x58);
        if (iVar22 == *(int *)(pFVar5 + local_res20 + 0x5c)) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(pFVar5 + local_res20 + 0x50),
                              (int *)(pFVar5 + local_res20 + 0x5c));
        }
        *(int *)(pFVar5 + local_res20 + 0x58) = iVar22 + 1;
        *(int *)(*(longlong *)(pFVar5 + local_res20 + 0x50) + (longlong)iVar22 * 4) = local_148;
        while (0 < local_148) {
          local_148 = FReferenceSkeleton::GetParentIndexInternal
                                (&param_1->ReferenceSkeleton,local_148,
                                 &(param_1->ReferenceSkeleton).FinalRefBoneInfo);
          if (((*(int **)(pFVar5 + local_res20 + 0x50) <= &local_148) &&
              (&local_148 <
               *(int **)(pFVar5 + local_res20 + 0x50) + *(int *)(pFVar5 + local_res20 + 0x5c))) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar22 = *(int *)(pFVar5 + local_res20 + 0x58);
          if (iVar22 == *(int *)(pFVar5 + local_res20 + 0x5c)) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)(pFVar5 + local_res20 + 0x50),
                                (int *)(pFVar5 + local_res20 + 0x5c));
          }
          *(int *)(pFVar5 + local_res20 + 0x58) = iVar22 + 1;
          *(int *)(*(longlong *)(pFVar5 + local_res20 + 0x50) + (longlong)iVar22 * 4) = local_148;
        }
      }
      uVar30 = 0;
      pFVar5[local_res20 + 0x70] = (FScriptContainerElement)0x0;
      if (0 < (param_1->Sockets).ArrayNum) {
        lVar35 = 0;
        do {
          uVar29 = 0;
          if ((int)uVar30 < (param_1->Sockets).ArrayNum) {
            uVar29 = ~uVar30 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar38 = *(longlong *)((param_1->Sockets).AllocatorInstance.Data + lVar35);
          if (lVar38 != 0) {
            uVar29 = 0;
            if ((int)uVar37 < (param_1->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
              uVar29 = uVar32;
            }
            if ((uVar29 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(longlong *)(lVar38 + 0x30) ==
                *(longlong *)
                 ((param_1->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data + local_138))
            {
              pFVar5[local_res20 + 0x70] = (FScriptContainerElement)0x1;
              break;
            }
          }
          uVar30 = uVar30 + 1;
          lVar35 = lVar35 + 8;
        } while ((int)uVar30 < (param_1->Sockets).ArrayNum);
      }
      local_res10 = local_res10 + 0x60;
      local_res20 = local_res20 + 0x80;
      local_138 = local_138 + 0xc;
      uVar37 = uVar37 + 1;
      local_128 = local_128 + -1;
    } while (local_128 != 0);
    local_128 = 0;
  }
  iVar22 = param_2->ArrayNum;
  local_140[0] = 1;
  if (1 < iVar22) {
    do {
      uVar34 = local_140[0];
      uVar24 = 0;
      if ((int)local_140[0] < iVar22) {
        uVar24 = ~local_140[0] >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      lVar35 = (longlong)(int)uVar34 * 0x80;
      if (*(int *)(pFVar5 + lVar35 + 0x58) != 0) {
        if ((*(int *)(pFVar5 + lVar35 + 0x58) < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar22 = **(int **)(pFVar5 + lVar35 + 0x50);
        if ((-1 < iVar22) && (iVar22 < param_2->ArrayNum)) {
          pFVar5 = (param_2->AllocatorInstance).Data;
          if ((*(uint **)(pFVar5 + (longlong)iVar22 * 0x80 + 0x40) <= local_140) &&
             ((local_140 <
               *(uint **)(pFVar5 + (longlong)iVar22 * 0x80 + 0x40) +
               *(int *)(pFVar5 + (longlong)iVar22 * 0x80 + 0x4c) &&
              (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar21)))) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar23 = *(int *)(pFVar5 + (longlong)iVar22 * 0x80 + 0x48);
          if (iVar23 == *(int *)(pFVar5 + (longlong)iVar22 * 0x80 + 0x4c)) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)(pFVar5 + (longlong)iVar22 * 0x80 + 0x40)
                                ,(int *)(pFVar5 + (longlong)iVar22 * 0x80 + 0x4c));
          }
          *(int *)(pFVar5 + (longlong)iVar22 * 0x80 + 0x48) = iVar23 + 1;
          *(uint *)(*(longlong *)(pFVar5 + (longlong)iVar22 * 0x80 + 0x40) + (longlong)iVar23 * 4) =
               local_140[0];
        }
      }
      iVar22 = param_2->ArrayNum;
      local_140[0] = local_140[0] + 1;
    } while ((int)local_140[0] < iVar22);
  }
  local_144 = 0;
  if (0 < iVar22) {
    do {
      uVar34 = local_144;
      uVar24 = 0;
      if ((int)local_144 < iVar22) {
        uVar24 = ~local_144 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      lVar35 = (longlong)(int)uVar34 * 0x80;
      if (*(int *)(pFVar5 + lVar35 + 0x48) == 0) {
        if (((*(uint **)(pFVar5 + lVar35 + 0x60) <= &local_144) &&
            (&local_144 < *(uint **)(pFVar5 + lVar35 + 0x60) + *(int *)(pFVar5 + lVar35 + 0x6c))) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar22 = *(int *)(pFVar5 + lVar35 + 0x68);
        if (iVar22 == *(int *)(pFVar5 + lVar35 + 0x6c)) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(pFVar5 + lVar35 + 0x60),
                              (int *)(pFVar5 + lVar35 + 0x6c));
        }
        *(int *)(pFVar5 + lVar35 + 0x68) = iVar22 + 1;
        uVar34 = 0;
        *(uint *)(*(longlong *)(pFVar5 + lVar35 + 0x60) + (longlong)iVar22 * 4) = local_144;
        if (0 < *(int *)(pFVar5 + lVar35 + 0x58)) {
          lVar38 = 0;
          do {
            uVar24 = 0;
            if ((int)uVar34 < *(int *)(pFVar5 + lVar35 + 0x58)) {
              uVar24 = ~uVar34 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar24 = *(uint *)(lVar38 + *(longlong *)(pFVar5 + lVar35 + 0x50));
            uVar25 = 0;
            if ((int)uVar24 < param_2->ArrayNum) {
              uVar25 = ~uVar24 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar1 = (param_2->AllocatorInstance).Data;
            if (((*(uint **)(pFVar1 + (longlong)(int)uVar24 * 0x80 + 0x60) <= &local_144) &&
                (&local_144 <
                 *(uint **)(pFVar1 + (longlong)(int)uVar24 * 0x80 + 0x60) +
                 *(int *)(pFVar1 + (longlong)(int)uVar24 * 0x80 + 0x6c))) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar22 = *(int *)(pFVar1 + (longlong)(int)uVar24 * 0x80 + 0x68);
            if (iVar22 == *(int *)(pFVar1 + (longlong)(int)uVar24 * 0x80 + 0x6c)) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)
                                        (pFVar1 + (longlong)(int)uVar24 * 0x80 + 0x60),
                                  (int *)(pFVar1 + (longlong)(int)uVar24 * 0x80 + 0x6c));
            }
            *(int *)(pFVar1 + (longlong)(int)uVar24 * 0x80 + 0x68) = iVar22 + 1;
            uVar34 = uVar34 + 1;
            lVar38 = lVar38 + 4;
            *(uint *)(*(longlong *)(pFVar1 + (longlong)(int)uVar24 * 0x80 + 0x60) +
                     (longlong)iVar22 * 4) = local_144;
          } while ((int)uVar34 < *(int *)(pFVar5 + lVar35 + 0x58));
        }
        uVar34 = 0;
        if (0 < *(int *)&local_120[1].field_0x20) {
          lVar38 = 0;
          do {
            pUVar4 = local_120;
            ::FName::ToString((FName *)(pFVar5 + lVar35 + 0x38),&local_110);
            uVar24 = 0;
            if ((int)uVar34 < *(int *)&pUVar4[1].field_0x20) {
              uVar24 = ~uVar34 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar7 = *(longlong *)&pUVar4[1].field_0x18;
            if (*(int *)(lVar38 + 8 + lVar7) == 0) {
              pwVar36 = L"";
LAB_1473efe26:
              sVar27 = wcslen(pwVar36);
              iVar22 = ::FString::Find(&local_110,pwVar36,(int)sVar27,IgnoreCase,FromStart,-1);
              if (iVar22 != -1) {
                pFVar5[lVar35 + 0x71] = (FScriptContainerElement)0x1;
                if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_110.Data.AllocatorInstance.Data);
                }
                break;
              }
            }
            else {
              pwVar36 = *(wchar_t **)(lVar38 + lVar7);
              if (pwVar36 != (wchar_t *)0x0) goto LAB_1473efe26;
            }
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            uVar34 = uVar34 + 1;
            lVar38 = lVar38 + 0x10;
          } while ((int)uVar34 < *(int *)&local_120[1].field_0x20);
        }
      }
      iVar22 = param_2->ArrayNum;
      local_144 = local_144 + 1;
    } while ((int)local_144 < iVar22);
  }
  return;
}

// EnsureAnimSequenceLoaded @ 1473f9bd0

void __cdecl FAnimationUtils::EnsureAnimSequenceLoaded(UAnimSequence *param_1)

{
  EnsureDependenciesAreLoaded((UObject *)param_1);
  EnsureDependenciesAreLoaded((UObject *)param_1->_padding_);
  EnsureDependenciesAreLoaded((UObject *)(param_1->BoneCompressionSettings).field0_0x0.DebugPtr);
  EnsureDependenciesAreLoaded((UObject *)(param_1->CurveCompressionSettings).field0_0x0.DebugPtr);
  EnsureDependenciesAreLoaded((UObject *)(param_1->RefPoseSeq).field0_0x0.DebugPtr);
  EnsureDependenciesAreLoaded
            ((UObject *)(param_1->VariableFrameStrippingSettings).field0_0x0.DebugPtr);
  return;
}

// ExtractTransformForFrameFromTrack @ 1473fb310

void __cdecl
FAnimationUtils::ExtractTransformForFrameFromTrack
          (FRawAnimSequenceTrack *param_1,int param_2,TTransform<double> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  uVar18 = DefaultScale3D.field0_0x0._s_0.Z;
  uVar17 = DefaultScale3D.field0_0x0._8_8_;
  uVar16 = DefaultScale3D.field0_0x0._s_0.X;
  iVar5 = (param_1->PosKeys).ArrayNum;
  iVar6 = (param_1->ScaleKeys).ArrayNum;
  uVar23 = iVar5 - 1;
  if (param_2 < (int)uVar23) {
    uVar23 = param_2;
  }
  uVar24 = (param_1->RotKeys).ArrayNum - 1;
  if (param_2 < (int)uVar24) {
    uVar24 = param_2;
  }
  if (iVar6 < 1) {
    uVar20 = 0;
    if ((int)uVar23 < iVar5) {
      uVar20 = ~uVar23 >> 0x1f;
    }
    if (uVar20 == 0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar21 = (longlong)(int)uVar23;
    pFVar7 = (param_1->PosKeys).AllocatorInstance.Data;
    fVar1 = *(float *)(pFVar7 + lVar21 * 0xc);
    fVar2 = *(float *)(pFVar7 + lVar21 * 0xc + 4);
    fVar3 = *(float *)(pFVar7 + lVar21 * 0xc + 8);
    uVar23 = 0;
    if ((int)uVar24 < (param_1->RotKeys).ArrayNum) {
      uVar23 = ~uVar24 >> 0x1f;
    }
    if (uVar23 == 0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = (param_1->RotKeys).AllocatorInstance.Data;
    lVar21 = (longlong)(int)uVar24;
    uVar4 = *(undefined8 *)(pFVar7 + lVar21 * 0x10 + 8);
    dVar14 = (double)(float)((ulonglong)uVar4 >> 0x20);
    auVar10._8_4_ = SUB84((double)*(float *)(pFVar7 + lVar21 * 0x10 + 4),0);
    auVar10._0_8_ = (double)*(float *)(pFVar7 + lVar21 * 0x10);
    auVar10._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar7 + lVar21 * 0x10 + 4) >> 0x20);
    *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar10;
    auVar13._8_4_ = SUB84(dVar14,0);
    auVar13._0_8_ = (double)(float)uVar4;
    auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar13;
  }
  else {
    uVar20 = iVar6 - 1U;
    if (param_2 < (int)(iVar6 - 1U)) {
      uVar20 = param_2;
    }
    uVar22 = 0;
    if ((int)uVar20 < iVar6) {
      uVar22 = ~uVar20 >> 0x1f;
    }
    if (uVar22 == 0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar21 = (longlong)(int)uVar20;
    pFVar7 = (param_1->ScaleKeys).AllocatorInstance.Data;
    uVar16 = (undefined8)*(float *)(pFVar7 + lVar21 * 0xc);
    uVar20 = 0;
    if ((int)uVar23 < (param_1->PosKeys).ArrayNum) {
      uVar20 = ~uVar23 >> 0x1f;
    }
    uVar17 = (undefined8)*(float *)(pFVar7 + lVar21 * 0xc + 4);
    uVar18 = (undefined8)*(float *)(pFVar7 + lVar21 * 0xc + 8);
    if (uVar20 == 0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar21 = (longlong)(int)uVar23;
    pFVar7 = (param_1->PosKeys).AllocatorInstance.Data;
    fVar1 = *(float *)(pFVar7 + lVar21 * 0xc);
    fVar2 = *(float *)(pFVar7 + lVar21 * 0xc + 4);
    fVar3 = *(float *)(pFVar7 + lVar21 * 0xc + 8);
    uVar23 = 0;
    if ((int)uVar24 < (param_1->RotKeys).ArrayNum) {
      uVar23 = ~uVar24 >> 0x1f;
    }
    if (uVar23 == 0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = (param_1->RotKeys).AllocatorInstance.Data;
    lVar21 = (longlong)(int)uVar24;
    uVar4 = *(undefined8 *)(pFVar7 + lVar21 * 0x10 + 8);
    dVar14 = (double)(float)((ulonglong)uVar4 >> 0x20);
    auVar9._8_4_ = SUB84((double)*(float *)(pFVar7 + lVar21 * 0x10 + 4),0);
    auVar9._0_8_ = (double)*(float *)(pFVar7 + lVar21 * 0x10);
    auVar9._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar7 + lVar21 * 0x10 + 4) >> 0x20);
    *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar9;
    auVar11._8_4_ = SUB84(dVar14,0);
    auVar11._0_8_ = (double)(float)uVar4;
    auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar11;
  }
  auVar15._8_4_ = SUB84((double)fVar2,0);
  auVar15._0_8_ = (double)fVar1;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(param_3->Translation).XY.m128d_f64 = auVar15;
  (param_3->Translation).ZW.m128d_f64[0] = (double)fVar3;
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  auVar12._8_4_ = (int)uVar17;
  auVar12._0_8_ = uVar16;
  auVar12._12_4_ = (int)((ulonglong)uVar17 >> 0x20);
  *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64 = auVar12;
  (param_3->Scale3D).ZW.m128d_f64[0] = (double)uVar18;
  (param_3->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// ExtractTransformForFrameFromTrackSafe @ 1473fb6a0

void __cdecl
FAnimationUtils::ExtractTransformForFrameFromTrackSafe
          (FRawAnimSequenceTrack *param_1,int param_2,TTransform<double> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  
  uVar24 = DefaultScale3D.field0_0x0._s_0.Z;
  uVar23 = DefaultScale3D.field0_0x0._8_8_;
  uVar22 = DefaultScale3D.field0_0x0._s_0.X;
  if (((param_1->PosKeys).ArrayNum != 0) && ((param_1->RotKeys).ArrayNum != 0)) {
    iVar5 = (param_1->PosKeys).ArrayNum;
    iVar6 = (param_1->ScaleKeys).ArrayNum;
    uVar29 = iVar5 - 1;
    if (param_2 < (int)uVar29) {
      uVar29 = param_2;
    }
    uVar30 = (param_1->RotKeys).ArrayNum - 1;
    if (param_2 < (int)uVar30) {
      uVar30 = param_2;
    }
    if (iVar6 < 1) {
      uVar26 = 0;
      if ((int)uVar29 < iVar5) {
        uVar26 = ~uVar29 >> 0x1f;
      }
      if (uVar26 == 0) {
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar25) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar27 = (longlong)(int)uVar29;
      pFVar7 = (param_1->PosKeys).AllocatorInstance.Data;
      fVar1 = *(float *)(pFVar7 + lVar27 * 0xc);
      fVar2 = *(float *)(pFVar7 + lVar27 * 0xc + 4);
      fVar3 = *(float *)(pFVar7 + lVar27 * 0xc + 8);
      uVar29 = 0;
      if ((int)uVar30 < (param_1->RotKeys).ArrayNum) {
        uVar29 = ~uVar30 >> 0x1f;
      }
      if (uVar29 == 0) {
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar25) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar7 = (param_1->RotKeys).AllocatorInstance.Data;
      lVar27 = (longlong)(int)uVar30;
      uVar4 = *(undefined8 *)(pFVar7 + lVar27 * 0x10 + 8);
      dVar20 = (double)(float)((ulonglong)uVar4 >> 0x20);
      auVar16._8_4_ = SUB84((double)*(float *)(pFVar7 + lVar27 * 0x10 + 4),0);
      auVar16._0_8_ = (double)*(float *)(pFVar7 + lVar27 * 0x10);
      auVar16._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar7 + lVar27 * 0x10 + 4) >> 0x20);
      *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar16;
      auVar19._8_4_ = SUB84(dVar20,0);
      auVar19._0_8_ = (double)(float)uVar4;
      auVar19._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar19;
    }
    else {
      uVar26 = iVar6 - 1U;
      if (param_2 < (int)(iVar6 - 1U)) {
        uVar26 = param_2;
      }
      uVar28 = 0;
      if ((int)uVar26 < iVar6) {
        uVar28 = ~uVar26 >> 0x1f;
      }
      if (uVar28 == 0) {
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar25) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar27 = (longlong)(int)uVar26;
      pFVar7 = (param_1->ScaleKeys).AllocatorInstance.Data;
      uVar22 = (undefined8)*(float *)(pFVar7 + lVar27 * 0xc);
      uVar26 = 0;
      if ((int)uVar29 < (param_1->PosKeys).ArrayNum) {
        uVar26 = ~uVar29 >> 0x1f;
      }
      uVar23 = (undefined8)*(float *)(pFVar7 + lVar27 * 0xc + 4);
      uVar24 = (undefined8)*(float *)(pFVar7 + lVar27 * 0xc + 8);
      if (uVar26 == 0) {
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar25) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar27 = (longlong)(int)uVar29;
      pFVar7 = (param_1->PosKeys).AllocatorInstance.Data;
      fVar1 = *(float *)(pFVar7 + lVar27 * 0xc);
      fVar2 = *(float *)(pFVar7 + lVar27 * 0xc + 4);
      fVar3 = *(float *)(pFVar7 + lVar27 * 0xc + 8);
      uVar29 = 0;
      if ((int)uVar30 < (param_1->RotKeys).ArrayNum) {
        uVar29 = ~uVar30 >> 0x1f;
      }
      if (uVar29 == 0) {
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar25) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar7 = (param_1->RotKeys).AllocatorInstance.Data;
      lVar27 = (longlong)(int)uVar30;
      uVar4 = *(undefined8 *)(pFVar7 + lVar27 * 0x10 + 8);
      dVar20 = (double)(float)((ulonglong)uVar4 >> 0x20);
      auVar15._8_4_ = SUB84((double)*(float *)(pFVar7 + lVar27 * 0x10 + 4),0);
      auVar15._0_8_ = (double)*(float *)(pFVar7 + lVar27 * 0x10);
      auVar15._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar7 + lVar27 * 0x10 + 4) >> 0x20);
      *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar15;
      auVar17._8_4_ = SUB84(dVar20,0);
      auVar17._0_8_ = (double)(float)uVar4;
      auVar17._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar17;
    }
    auVar21._8_4_ = SUB84((double)fVar2,0);
    auVar21._0_8_ = (double)fVar1;
    auVar21._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(param_3->Translation).XY.m128d_f64 = auVar21;
    (param_3->Translation).ZW.m128d_f64[0] = (double)fVar3;
    (param_3->Translation).ZW.m128d_f64[1] = 0.0;
    auVar18._8_4_ = (int)uVar23;
    auVar18._0_8_ = uVar22;
    auVar18._12_4_ = (int)((ulonglong)uVar23 >> 0x20);
    *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64 = auVar18;
    (param_3->Scale3D).ZW.m128d_f64[0] = (double)uVar24;
    (param_3->Scale3D).ZW.m128d_f64[1] = 0.0;
    return;
  }
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_3->Translation).XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(param_3->Translation).ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64 = auVar14;
  return;
}

// ExtractTransformFromTrack @ 1473fb710

void __cdecl
FAnimationUtils::ExtractTransformFromTrack
          (FRawAnimSequenceTrack *param_1,double param_2,int param_3,double param_4,
          EAnimInterpolationType param_5,TTransform<double> *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  __m128 _Var18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  TTransform<double> local_168;
  TTransform<double> local_108 [2];
  
  _Var18.m128_f32 = GlobalVectorConstants::Float0001.m128_f32;
  if (((param_1->PosKeys).ArrayNum == 0) || ((param_1->RotKeys).ArrayNum == 0)) {
    fVar56 = GlobalVectorConstants::Float0001.m128_f32[1];
    (param_6->Rotation).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (param_6->Rotation).XY.m128d_f64[1] = (double)fVar56;
    (param_6->Rotation).ZW.m128d_f64[0] = (double)_Var18.m128_f32[2];
    (param_6->Rotation).ZW.m128d_f64[1] = (double)_Var18.m128_f32[3];
    _Var18 = GlobalVectorConstants::FloatZero;
    fVar56 = GlobalVectorConstants::FloatZero.m128_f32[1];
    (param_6->Translation).XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    (param_6->Translation).XY.m128d_f64[1] = (double)fVar56;
    (param_6->Translation).ZW.m128d_f64[0] = (double)_Var18.m128_f32[2];
    (param_6->Translation).ZW.m128d_f64[1] = (double)_Var18.m128_f32[3];
    _Var18 = GlobalVectorConstants::Float1110;
    fVar56 = GlobalVectorConstants::Float1110.m128_f32[1];
    (param_6->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    (param_6->Scale3D).XY.m128d_f64[1] = (double)fVar56;
    (param_6->Scale3D).ZW.m128d_f64[0] = (double)_Var18.m128_f32[2];
    (param_6->Scale3D).ZW.m128d_f64[1] = (double)_Var18.m128_f32[3];
    return;
  }
  if ((param_2 <= 0.0) || (param_3 == 1)) {
    uVar23 = 0;
  }
  else {
    uVar23 = param_3 - 1;
    if (param_2 < param_4) {
      dVar48 = ((double)(int)uVar23 / param_4) * param_2;
      uVar20 = (uint)((longlong)ROUND((dVar48 + dVar48) - __real_3fe0000000000000) >> 1);
      uVar24 = uVar23;
      if ((int)uVar20 < (int)uVar23) {
        uVar24 = uVar20;
      }
      uVar23 = 0;
      if (0 < (int)uVar24) {
        uVar23 = uVar24;
      }
      uVar24 = uVar23 + 1;
      if (uVar23 + 1 == param_3) {
        uVar24 = uVar23;
      }
      fVar56 = (float)(dVar48 - (double)(int)uVar23);
      goto LAB_1473fb7ca;
    }
  }
  fVar56 = 0.0;
  uVar24 = 0;
LAB_1473fb7ca:
  uVar20 = uVar23;
  if (((param_5 == Step) || (fVar56 <= 0.0)) || (uVar20 = uVar24, __real_3f800000 <= fVar56)) {
    ExtractTransformForFrameFromTrack(param_1,uVar20,param_6);
  }
  else {
    iVar8 = (param_1->PosKeys).ArrayNum;
    iVar9 = (param_1->ScaleKeys).ArrayNum;
    uVar27 = iVar8 - 1;
    uVar20 = uVar27;
    if ((int)uVar23 < (int)uVar27) {
      uVar20 = uVar23;
    }
    uVar25 = (param_1->RotKeys).ArrayNum - 1;
    uVar13 = uVar25;
    if ((int)uVar23 < (int)uVar25) {
      uVar13 = uVar23;
    }
    if ((int)uVar24 < (int)uVar27) {
      uVar27 = uVar24;
    }
    if ((int)uVar24 < (int)uVar25) {
      uVar25 = uVar24;
    }
    if (iVar9 < 1) {
      uVar23 = 0;
      if ((int)uVar20 < iVar8) {
        uVar23 = ~uVar20 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar21 = (longlong)(int)uVar20;
      pFVar22 = (param_1->PosKeys).AllocatorInstance.Data;
      fVar1 = *(float *)(pFVar22 + lVar21 * 0xc);
      fVar2 = *(float *)(pFVar22 + lVar21 * 0xc + 4);
      fVar3 = *(float *)(pFVar22 + lVar21 * 0xc + 8);
      uVar23 = 0;
      if ((int)uVar13 < (param_1->RotKeys).ArrayNum) {
        uVar23 = ~uVar13 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar22 = (param_1->RotKeys).AllocatorInstance.Data;
      lVar21 = (longlong)(int)uVar13;
      uVar23 = 0;
      if ((int)uVar27 < (param_1->PosKeys).ArrayNum) {
        uVar23 = ~uVar27 >> 0x1f;
      }
      local_168.Rotation.ZW.m128d_f64[1] =
           (double)(float)((ulonglong)*(undefined8 *)(pFVar22 + lVar21 * 0x10 + 8) >> 0x20);
      local_168.Rotation.ZW.m128d_f64[0] =
           (double)(float)*(undefined8 *)(pFVar22 + lVar21 * 0x10 + 8);
      local_168.Scale3D.XY.m128d_f64[0] = DefaultScale3D.field0_0x0._s_0.X;
      local_168.Scale3D.XY.m128d_f64[1] = DefaultScale3D.field0_0x0._s_0.Y;
      local_168.Rotation.XY.m128d_f64[1] = (double)*(float *)(pFVar22 + lVar21 * 0x10 + 4);
      local_168.Rotation.XY.m128d_f64[0] = (double)*(float *)(pFVar22 + lVar21 * 0x10);
      local_168.Translation.ZW.m128d_f64[1] = 0.0;
      local_168.Scale3D.ZW.m128d_f64[0] = DefaultScale3D.field0_0x0._s_0.Z;
      local_168.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_168.Translation.XY.m128d_f64[0] = (double)fVar1;
      local_168.Translation.XY.m128d_f64[1] = (double)fVar2;
      local_168.Translation.ZW.m128d_f64[0] = (double)fVar3;
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar21 = (longlong)(int)uVar27;
      pFVar22 = (param_1->PosKeys).AllocatorInstance.Data;
      fVar1 = *(float *)(pFVar22 + lVar21 * 0xc);
      fVar2 = *(float *)(pFVar22 + lVar21 * 0xc + 4);
      fVar3 = *(float *)(pFVar22 + lVar21 * 0xc + 8);
      uVar23 = 0;
      if ((int)uVar25 < (param_1->RotKeys).ArrayNum) {
        uVar23 = ~uVar25 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar22 = (param_1->RotKeys).AllocatorInstance.Data;
      fVar4 = *(float *)(pFVar22 + (longlong)(int)uVar25 * 0x10);
      uVar16 = DefaultScale3D.field0_0x0._s_0.Z;
      local_108[0].Scale3D.XY.m128d_f64[0] = DefaultScale3D.field0_0x0._s_0.X;
      local_108[0].Scale3D.XY.m128d_f64[1] = DefaultScale3D.field0_0x0._s_0.Y;
    }
    else {
      uVar26 = iVar9 - 1;
      uVar14 = uVar26;
      if ((int)uVar23 < (int)uVar26) {
        uVar14 = uVar23;
      }
      if ((int)uVar24 < (int)uVar26) {
        uVar26 = uVar24;
      }
      uVar23 = 0;
      if ((int)uVar14 < iVar9) {
        uVar23 = ~uVar14 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar21 = (longlong)(int)uVar14;
      pFVar22 = (param_1->ScaleKeys).AllocatorInstance.Data;
      fVar1 = *(float *)(pFVar22 + lVar21 * 0xc);
      fVar2 = *(float *)(pFVar22 + lVar21 * 0xc + 4);
      fVar3 = *(float *)(pFVar22 + lVar21 * 0xc + 8);
      uVar23 = 0;
      if ((int)uVar20 < (param_1->PosKeys).ArrayNum) {
        uVar23 = ~uVar20 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar21 = (longlong)(int)uVar20;
      pFVar22 = (param_1->PosKeys).AllocatorInstance.Data;
      fVar4 = *(float *)(pFVar22 + lVar21 * 0xc);
      fVar5 = *(float *)(pFVar22 + lVar21 * 0xc + 4);
      fVar6 = *(float *)(pFVar22 + lVar21 * 0xc + 8);
      uVar23 = 0;
      if ((int)uVar13 < (param_1->RotKeys).ArrayNum) {
        uVar23 = ~uVar13 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar22 = (param_1->RotKeys).AllocatorInstance.Data;
      lVar21 = (longlong)(int)uVar13;
      uVar23 = 0;
      if ((int)uVar26 < (param_1->ScaleKeys).ArrayNum) {
        uVar23 = ~uVar26 >> 0x1f;
      }
      local_168.Rotation.ZW.m128d_f64[1] =
           (double)(float)((ulonglong)*(undefined8 *)(pFVar22 + lVar21 * 0x10 + 8) >> 0x20);
      local_168.Rotation.ZW.m128d_f64[0] =
           (double)(float)*(undefined8 *)(pFVar22 + lVar21 * 0x10 + 8);
      local_168.Rotation.XY.m128d_f64[1] = (double)*(float *)(pFVar22 + lVar21 * 0x10 + 4);
      local_168.Rotation.XY.m128d_f64[0] = (double)*(float *)(pFVar22 + lVar21 * 0x10);
      local_168.Translation.ZW.m128d_f64[1] = 0.0;
      local_168.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_168.Translation.XY.m128d_f64[0] = (double)fVar4;
      local_168.Translation.XY.m128d_f64[1] = (double)fVar5;
      local_168.Translation.ZW.m128d_f64[0] = (double)fVar6;
      local_168.Scale3D.XY.m128d_f64[0] = (double)fVar1;
      local_168.Scale3D.XY.m128d_f64[1] = (double)fVar2;
      local_168.Scale3D.ZW.m128d_f64[0] = (double)fVar3;
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar21 = (longlong)(int)uVar26;
      pFVar22 = (param_1->ScaleKeys).AllocatorInstance.Data;
      fVar5 = *(float *)(pFVar22 + lVar21 * 0xc);
      fVar6 = *(float *)(pFVar22 + lVar21 * 0xc + 4);
      fVar7 = *(float *)(pFVar22 + lVar21 * 0xc + 8);
      uVar23 = 0;
      if ((int)uVar27 < (param_1->PosKeys).ArrayNum) {
        uVar23 = ~uVar27 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar21 = (longlong)(int)uVar27;
      pFVar22 = (param_1->PosKeys).AllocatorInstance.Data;
      fVar1 = *(float *)(pFVar22 + lVar21 * 0xc);
      fVar2 = *(float *)(pFVar22 + lVar21 * 0xc + 4);
      fVar3 = *(float *)(pFVar22 + lVar21 * 0xc + 8);
      uVar23 = 0;
      if ((int)uVar25 < (param_1->RotKeys).ArrayNum) {
        uVar23 = ~uVar25 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar22 = (param_1->RotKeys).AllocatorInstance.Data;
      fVar4 = *(float *)(pFVar22 + (longlong)(int)uVar25 * 0x10);
      uVar16 = (double)fVar7;
      local_108[0].Scale3D.XY.m128d_f64[0] = (double)fVar5;
      local_108[0].Scale3D.XY.m128d_f64[1] = (double)fVar6;
    }
    local_108[0].Translation.ZW.m128d_f64[0] = (double)fVar3;
    local_108[0].Translation.XY.m128d_f64[1] = (double)fVar2;
    local_108[0].Translation.XY.m128d_f64[0] = (double)fVar1;
    local_108[0].Translation.ZW.m128d_f64[1] = 0.0;
    dVar15 = (double)fVar4;
    local_108[0].Scale3D.ZW.m128d_f64[1] = 0.0;
    local_108[0].Scale3D.ZW.m128d_f64[0] = (double)uVar16;
    dVar48 = (double)(float)*(undefined8 *)(pFVar22 + (longlong)(int)uVar25 * 0x10 + 8);
    dVar12 = (double)(float)((ulonglong)*(undefined8 *)(pFVar22 + (longlong)(int)uVar25 * 0x10 + 8)
                            >> 0x20);
    dVar50 = (double)*(float *)(pFVar22 + (longlong)(int)uVar25 * 0x10 + 4);
    dVar41 = local_168.Rotation.ZW.m128d_f64[0] * local_168.Rotation.ZW.m128d_f64[0] +
             local_168.Rotation.XY.m128d_f64[0] * local_168.Rotation.XY.m128d_f64[0];
    dVar47 = local_168.Rotation.ZW.m128d_f64[1] * local_168.Rotation.ZW.m128d_f64[1] +
             local_168.Rotation.XY.m128d_f64[1] * local_168.Rotation.XY.m128d_f64[1];
    auVar49._8_4_ = SUB84(dVar47,0);
    auVar49._0_8_ = dVar41;
    auVar49._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
    auVar32._0_8_ = auVar49._8_8_ + dVar41;
    auVar32._8_8_ = dVar41 + dVar47;
    uVar28 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar32._0_8_);
    uVar30 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar32._8_8_);
    auVar49 = sqrtpd((undefined1  [16])local_108[0].Scale3D.ZW.m128d_f64,auVar32);
    uVar29 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar32._0_8_);
    uVar31 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar32._8_8_);
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar49);
    auVar34._0_8_ = (ulonglong)(auVar33._0_8_ * local_168.Rotation.XY.m128d_f64[0]) & uVar28;
    uVar17 = uVar30 & (ulonglong)(auVar33._8_8_ * local_168.Rotation.XY.m128d_f64[1]);
    auVar34._8_4_ = (undefined4)uVar17;
    auVar34._12_4_ = (undefined4)(uVar17 >> 0x20);
    auVar42._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar42._4_4_ =
         ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar42._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar42._12_4_ =
         ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    local_168.Rotation.XY.m128d_f64 = (double  [2])(auVar34 | auVar42);
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar49);
    auVar35._8_4_ = SUB84(dVar12,0);
    auVar35._0_8_ = dVar48;
    auVar35._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar43._0_8_ = (ulonglong)(auVar33._0_8_ * local_168.Rotation.ZW.m128d_f64[0]) & uVar29;
    uVar17 = uVar31 & (ulonglong)(auVar33._8_8_ * local_168.Rotation.ZW.m128d_f64[1]);
    auVar43._8_4_ = (undefined4)uVar17;
    auVar43._12_4_ = (undefined4)(uVar17 >> 0x20);
    auVar51._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar51._4_4_ =
         ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar51._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar51._12_4_ =
         ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    local_168.Rotation.ZW.m128d_f64 = (double  [2])(auVar43 | auVar51);
    auVar44._8_4_ = SUB84(dVar50,0);
    auVar44._0_8_ = dVar15;
    auVar44._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    auVar45._0_8_ = dVar15 * dVar15 + dVar48 * dVar48;
    auVar45._8_8_ = auVar44._8_8_ * dVar50 + auVar35._8_8_ * dVar12;
    auVar36._8_4_ = SUB84(auVar45._8_8_,0);
    auVar36._0_8_ = auVar45._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
    auVar37._0_8_ = auVar36._8_8_ + auVar45._0_8_;
    auVar37._8_8_ = auVar45._0_8_ + auVar45._8_8_;
    auVar33 = sqrtpd(auVar45,auVar37);
    uVar28 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar37._0_8_);
    uVar30 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar37._8_8_);
    auVar54 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
    uVar29 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar37._0_8_);
    uVar31 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar37._8_8_);
    auVar55._0_8_ = uVar28 & (ulonglong)(auVar54._0_8_ * dVar15);
    uVar17 = uVar30 & (ulonglong)(auVar54._8_8_ * dVar50);
    auVar55._8_4_ = (undefined4)uVar17;
    auVar55._12_4_ = (undefined4)(uVar17 >> 0x20);
    auVar53._0_8_ = uVar29 & (ulonglong)(auVar33._0_8_ * dVar48);
    uVar17 = uVar31 & (ulonglong)(auVar33._8_8_ * dVar12);
    auVar53._8_4_ = (undefined4)uVar17;
    auVar53._12_4_ = (undefined4)(uVar17 >> 0x20);
    auVar54._4_4_ =
         ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar54._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar54._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar54._12_4_ =
         ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    local_108[0].Rotation.XY.m128d_f64 = (double  [2])(auVar55 | auVar54);
    auVar11._4_4_ =
         ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar11._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar11._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar11._12_4_ =
         ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    local_108[0].Rotation.ZW.m128d_f64 = (double  [2])(auVar53 | auVar11);
    UE::Math::TTransform<double>::Blend(param_6,&local_168,local_108,fVar56);
    dVar48 = (param_6->Rotation).ZW.m128d_f64[0];
    dVar12 = (param_6->Rotation).ZW.m128d_f64[1];
    dVar15 = (param_6->Rotation).XY.m128d_f64[0];
    dVar41 = (param_6->Rotation).XY.m128d_f64[1];
    dVar47 = dVar48 * dVar48 + dVar15 * dVar15;
    dVar50 = dVar12 * dVar12 + dVar41 * dVar41;
    auVar38._8_4_ = SUB84(dVar50,0);
    auVar38._0_8_ = dVar47;
    auVar38._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    auVar39._0_8_ = auVar38._8_8_ + dVar47;
    auVar39._8_8_ = dVar47 + dVar50;
    uVar28 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar39._0_8_);
    uVar30 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar39._8_8_);
    auVar54 = sqrtpd(auVar49,auVar39);
    uVar29 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar39._0_8_);
    uVar31 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar39._8_8_);
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar54);
    auVar54 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar54);
    auVar40._0_8_ = uVar28 & (ulonglong)(auVar33._0_8_ * dVar15);
    uVar17 = uVar30 & (ulonglong)(auVar33._8_8_ * dVar41);
    auVar40._8_4_ = (undefined4)uVar17;
    auVar40._12_4_ = (undefined4)(uVar17 >> 0x20);
    auVar52._0_8_ = uVar29 & (ulonglong)(auVar54._0_8_ * dVar48);
    uVar17 = uVar31 & (ulonglong)(auVar54._8_8_ * dVar12);
    auVar52._8_4_ = (undefined4)uVar17;
    auVar52._12_4_ = (undefined4)(uVar17 >> 0x20);
    auVar33._4_4_ =
         ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar33._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar33._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar33._12_4_ =
         ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar46._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar46._4_4_ =
         ~(uint)(uVar29 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar46._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar46._12_4_ =
         ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(param_6->Rotation).XY.m128d_f64 = auVar40 | auVar33;
    *(undefined1 (*) [16])(param_6->Rotation).ZW.m128d_f64 = auVar52 | auVar46;
  }
  return;
}

// ExtractTransformFromTrack @ 1473fc0c0

void __cdecl
FAnimationUtils::ExtractTransformFromTrack
          (float param_1,int param_2,float param_3,FRawAnimSequenceTrack *param_4,
          EAnimInterpolationType param_5,TTransform<double> *param_6)

{
  ExtractTransformFromTrack(param_4,(double)param_1,param_2,(double)param_3,param_5,param_6);
  return;
}

// GetAnimTrackIndexForSkeletonBone @ 1473ff640

int __cdecl
FAnimationUtils::GetAnimTrackIndexForSkeletonBone
          (int param_1,TArray<FTrackToSkeletonMap,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)param_2->ArrayNum * 4) {
      return -1;
    }
    if (*(int *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 4;
  }
  return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 2);
}

// GetAnimationCompressionFormatString @ 1473ff830

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FAnimationUtils::GetAnimationCompressionFormatString
          (FString *__return_storage_ptr__,AnimationCompressionFormat param_1)

{
  switch(param_1) {
  case ACF_None:
    ::FString::FString(__return_storage_ptr__,L"ACF_None");
    return __return_storage_ptr__;
  case ACF_Float96NoW:
    ::FString::FString(__return_storage_ptr__,L"ACF_Float96NoW");
    return __return_storage_ptr__;
  case ACF_Fixed48NoW:
    ::FString::FString(__return_storage_ptr__,L"ACF_Fixed48NoW");
    return __return_storage_ptr__;
  case ACF_IntervalFixed32NoW:
    ::FString::FString(__return_storage_ptr__,L"ACF_IntervalFixed32NoW");
    return __return_storage_ptr__;
  case ACF_Fixed32NoW:
    ::FString::FString(__return_storage_ptr__,L"ACF_Fixed32NoW");
    return __return_storage_ptr__;
  case ACF_Float32NoW:
    ::FString::FString(__return_storage_ptr__,L"ACF_Float32NoW");
    return __return_storage_ptr__;
  case ACF_Identity:
    ::FString::FString(__return_storage_ptr__,L"ACF_Identity");
    return __return_storage_ptr__;
  }
  if (2 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetAnimationKeyFormatString @ 1473ffa50

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FAnimationUtils::GetAnimationKeyFormatString
          (FString *__return_storage_ptr__,AnimationKeyFormat param_1)

{
  if (param_1 == AKF_ConstantKeyLerp) {
    ::FString::FString(__return_storage_ptr__,L"AKF_ConstantKeyLerp");
    return __return_storage_ptr__;
  }
  if (param_1 != AKF_VariableKeyLerp) {
    if (param_1 != AKF_PerTrackCompression) {
      if (2 < (byte)LogAnimationCompression._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
      }
      ::FString::FString(__return_storage_ptr__,L"Unknown");
      return __return_storage_ptr__;
    }
    ::FString::FString(__return_storage_ptr__,L"AKF_PerTrackCompression");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"AKF_VariableKeyLerp");
  return __return_storage_ptr__;
}

// GetDefaultAnimSequenceOuter @ 147401650

UObject * __cdecl FAnimationUtils::GetDefaultAnimSequenceOuter(UAnimSet *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UPackage *pUVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res18;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UAnimSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAnimSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationUtils.cpp"
                         ,0x1a5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if (!param_2) {
    return (UObject *)0x0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationUtils.cpp"
                     ,0x1b7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  pUVar4 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  UPackage::FullyLoad(pUVar4);
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  local_res18 = (FName)pUVar4->_padding_;
  ::FName::ToString(&local_res18,&local_28);
  ::FString::PrintfImpl(&local_38,L"%s.%s_Group");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  pUVar4 = CreatePackage((wchar_t *)FVar5.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return (UObject *)pUVar4;
}

// GetDefaultAnimationBoneCompressionSettings @ 1474017a0

UAnimBoneCompressionSettings * __cdecl
FAnimationUtils::GetDefaultAnimationBoneCompressionSettings(void)

{
  int iVar1;
  UAnimBoneCompressionSettings *pUVar2;
  UClass *pUVar3;
  
  if (DefaultBoneCompressionSettings == (UAnimBoneCompressionSettings *)0x0) {
    pUVar2 = (UAnimBoneCompressionSettings *)
             GetDefaultAnimationCompressionSettings(L"BoneCompressionSettings",false);
    if (pUVar2 != (UAnimBoneCompressionSettings *)0x0) {
      pUVar3 = UAnimBoneCompressionSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        DefaultBoneCompressionSettings = pUVar2;
        return pUVar2;
      }
    }
    DefaultBoneCompressionSettings = (UAnimBoneCompressionSettings *)0x0;
    pUVar2 = (UAnimBoneCompressionSettings *)
             GetDefaultAnimationCompressionSettings(L"BoneCompressionSettingsFallback",true);
    if (pUVar2 != (UAnimBoneCompressionSettings *)0x0) {
      pUVar3 = UAnimBoneCompressionSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        DefaultBoneCompressionSettings = pUVar2;
        return pUVar2;
      }
    }
    DefaultBoneCompressionSettings = (UAnimBoneCompressionSettings *)0x0;
  }
  return DefaultBoneCompressionSettings;
}

// GetDefaultAnimationCurveCompressionSettings @ 147401b30

UAnimCurveCompressionSettings * __cdecl
FAnimationUtils::GetDefaultAnimationCurveCompressionSettings(void)

{
  int iVar1;
  UAnimCurveCompressionSettings *pUVar2;
  UClass *pUVar3;
  
  if (DefaultCurveCompressionSettings == (UAnimCurveCompressionSettings *)0x0) {
    pUVar2 = (UAnimCurveCompressionSettings *)
             GetDefaultAnimationCompressionSettings(L"CurveCompressionSettings",false);
    if (pUVar2 != (UAnimCurveCompressionSettings *)0x0) {
      pUVar3 = Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        DefaultCurveCompressionSettings = pUVar2;
        return pUVar2;
      }
    }
    DefaultCurveCompressionSettings = (UAnimCurveCompressionSettings *)0x0;
    pUVar2 = (UAnimCurveCompressionSettings *)
             GetDefaultAnimationCompressionSettings(L"CurveCompressionSettingsFallback",true);
    if (pUVar2 != (UAnimCurveCompressionSettings *)0x0) {
      pUVar3 = Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        DefaultCurveCompressionSettings = pUVar2;
        return pUVar2;
      }
    }
    DefaultCurveCompressionSettings = (UAnimCurveCompressionSettings *)0x0;
  }
  return DefaultCurveCompressionSettings;
}

// GetDefaultAnimationRecorderBoneCompressionSettings @ 147401bf0

UAnimBoneCompressionSettings * __cdecl
FAnimationUtils::GetDefaultAnimationRecorderBoneCompressionSettings(void)

{
  int iVar1;
  UAnimBoneCompressionSettings *pUVar2;
  UClass *pUVar3;
  
  if (DefaultRecorderBoneCompressionSettings == (UAnimBoneCompressionSettings *)0x0) {
    pUVar2 = (UAnimBoneCompressionSettings *)
             GetDefaultAnimationCompressionSettings
                       (L"AnimationRecorderBoneCompressionSettings",false);
    if (pUVar2 != (UAnimBoneCompressionSettings *)0x0) {
      pUVar3 = UAnimBoneCompressionSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        DefaultRecorderBoneCompressionSettings = pUVar2;
        return pUVar2;
      }
    }
    DefaultRecorderBoneCompressionSettings = (UAnimBoneCompressionSettings *)0x0;
    pUVar2 = (UAnimBoneCompressionSettings *)
             GetDefaultAnimationCompressionSettings
                       (L"AnimationRecorderBoneCompressionSettingsFallback",true);
    if (pUVar2 != (UAnimBoneCompressionSettings *)0x0) {
      pUVar3 = UAnimBoneCompressionSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        DefaultRecorderBoneCompressionSettings = pUVar2;
        return pUVar2;
      }
    }
    DefaultRecorderBoneCompressionSettings = (UAnimBoneCompressionSettings *)0x0;
  }
  return DefaultRecorderBoneCompressionSettings;
}

// GetDefaultVariableFrameStrippingSettings @ 147401d00

UVariableFrameStrippingSettings * __cdecl
FAnimationUtils::GetDefaultVariableFrameStrippingSettings(void)

{
  int iVar1;
  UVariableFrameStrippingSettings *pUVar2;
  UClass *pUVar3;
  
  if (DefaultVariableFrameStrippingSettings == (UVariableFrameStrippingSettings *)0x0) {
    pUVar2 = (UVariableFrameStrippingSettings *)
             GetDefaultAnimationCompressionSettings(L"VariableFrameStrippingSettings",true);
    if (pUVar2 != (UVariableFrameStrippingSettings *)0x0) {
      pUVar3 = Z_Construct_UClass_UVariableFrameStrippingSettings_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        DefaultVariableFrameStrippingSettings = pUVar2;
        return pUVar2;
      }
    }
    DefaultVariableFrameStrippingSettings = (UVariableFrameStrippingSettings *)0x0;
  }
  return DefaultVariableFrameStrippingSettings;
}

// GetForcedRecompressionSetting @ 147401e30

bool __cdecl FAnimationUtils::GetForcedRecompressionSetting(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"AnimationCompression",L"ForceRecompression",local_res8,&GEngineIni);
  return local_res8[0];
}

// HasUniformKeySpacing @ 1474061d0

bool __cdecl
FAnimationUtils::HasUniformKeySpacing
          (int param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_38d1b717;
  iVar10 = param_2->ArrayNum;
  if ((iVar10 < 3) || (iVar10 == param_1)) {
    return true;
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  uVar11 = 2;
  lVar12 = 8;
  fVar1 = *(float *)(pFVar3 + 4);
  fVar2 = *(float *)pFVar3;
  while( true ) {
    uVar9 = 0;
    if ((int)uVar11 < iVar10) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    uVar9 = 0;
    if ((int)(uVar11 - 1) < param_2->ArrayNum) {
      uVar9 = -uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    if (fVar5 < (float)((uint)((*(float *)(pFVar3 + lVar12) -
                               *(float *)((param_2->AllocatorInstance).Data + lVar12 + -4)) -
                              (fVar1 - fVar2)) & uVar6)) {
      return false;
    }
    iVar10 = param_2->ArrayNum;
    uVar11 = uVar11 + 1;
    lVar12 = lVar12 + 4;
    if (iVar10 <= (int)uVar11) {
      return false;
    }
  }
  pcVar4 = (code *)swi(3);
  uVar8 = (*pcVar4)();
  return (bool)uVar8;
}

