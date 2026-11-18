// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1474a20c0

UScriptStruct * __cdecl FInertializationPoseDiff::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInertializationPoseDiff.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInertializationPoseDiff.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInertializationPoseDiff,(UObject *)pUVar1,
                         L"InertializationPoseDiff");
  }
  return Z_Registration_Info_UScriptStruct_FInertializationPoseDiff.OuterSingleton;
}

// ApplyTo @ 1474c0170

void __thiscall
FInertializationPoseDiff::ApplyTo
          (FInertializationPoseDiff *this,FCompactPose *param_1,FBlendedCurve *param_2,float param_3
          ,float param_4,TArrayView<float_const_,int> *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  bool bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  float fVar33;
  undefined4 extraout_XMM0_Da;
  float fVar34;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar35;
  undefined4 uVar36;
  longlong local_res10;
  float local_res20 [2];
  double dStack_150;
  <lambda_1> local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  double local_e8;
  
  lVar5 = *(longlong *)&param_1->field_0x10;
  uVar29 = 0;
  uVar4 = *(uint *)&param_1->field_0x8;
  local_res20[0] = param_3;
  if (uVar4 != 0) {
    lVar32 = 0;
    local_res10 = 0;
    do {
      uVar30 = ~uVar29 >> 0x1f;
      uVar27 = 0;
      if ((int)uVar29 < *(int *)(lVar5 + 0x78)) {
        uVar27 = uVar30;
      }
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar27 = *(uint *)(*(longlong *)(lVar5 + 0x70) + local_res10 * 4);
      if (uVar27 != 0xffffffff) {
        uVar28 = 0;
        if ((int)uVar27 < (this->BoneDiffs).ArrayNum) {
          uVar28 = ~uVar27 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar31 = (this->BoneDiffs).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x60;
        uVar28 = 0;
        if ((int)uVar27 < param_5->ArrayNum) {
          uVar28 = ~uVar27 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar34 = param_5->DataPtr[(int)uVar27];
        fVar33 = UE::Anim::Inertialization::Private::CalcInertialFloat
                           (*(float *)(pFVar31 + 0x48),*(float *)(pFVar31 + 0x4c),local_res20[0],
                            fVar34);
        dVar21 = *(double *)pFVar31;
        dVar16 = (double)fVar33;
        uVar27 = 0;
        if ((int)uVar29 < *(int *)&param_1->field_0x8) {
          uVar27 = uVar30;
        }
        dVar3 = *(double *)(pFVar31 + 0x10);
        auVar11._8_4_ = SUB84(*(double *)(pFVar31 + 8) * dVar16,0);
        auVar11._0_8_ = dVar21 * dVar16;
        auVar11._12_4_ = (int)((ulonglong)(*(double *)(pFVar31 + 8) * dVar16) >> 0x20);
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)param_1;
        dStack_150 = auVar11._8_8_;
        pdVar1 = (double *)(lVar6 + 0x20 + lVar32);
        pdVar2 = (double *)(lVar6 + 0x30 + lVar32);
        dVar13 = pdVar2[1] + 0.0;
        dStack_150 = pdVar1[1] + dStack_150;
        auVar14._8_4_ = SUB84(dStack_150,0);
        auVar14._0_8_ = *pdVar1 + dVar21 * dVar16;
        auVar14._12_4_ = (int)((ulonglong)dStack_150 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + 0x20 + lVar32) = auVar14;
        auVar12._8_4_ = SUB84(dVar13,0);
        auVar12._0_8_ = dVar16 * dVar3 + *pdVar2;
        auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + 0x30 + lVar32) = auVar12;
        UE::Anim::Inertialization::Private::CalcInertialFloat
                  (*(float *)(pFVar31 + 0x50),*(float *)(pFVar31 + 0x54),local_res20[0],fVar34);
        dVar3 = *(double *)(pFVar31 + 0x18);
        dVar21 = *(double *)(pFVar31 + 0x20);
        dVar16 = *(double *)(pFVar31 + 0x28);
        __libm_sse2_sincos_();
        dVar3 = dVar3 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        uVar27 = 0;
        if ((int)uVar29 < *(int *)&param_1->field_0x8) {
          uVar27 = uVar30;
        }
        dVar21 = dVar21 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        dVar20 = dVar16 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        dVar13 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
        local_e8 = dVar16;
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)param_1;
        uVar27 = 0;
        if ((int)uVar29 < *(int *)&param_1->field_0x8) {
          uVar27 = uVar30;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pdVar1 = (double *)(*(longlong *)param_1 + lVar32);
        dVar22 = *pdVar1;
        dVar23 = pdVar1[1];
        pdVar1 = (double *)(*(longlong *)param_1 + 0x10 + lVar32);
        dVar24 = *pdVar1;
        dVar25 = pdVar1[1];
        dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar17 = dVar3 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar25 * dVar13 +
                 dVar23 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar24 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        dVar19 = dVar24 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar23 * dVar13 +
                 dVar25 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar20 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar18._8_4_ = SUB84(dVar19,0);
        auVar18._0_8_ =
             dVar25 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar22 * dVar13 +
             dVar24 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar20 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        auVar18._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        *(undefined1 (*) [16])(lVar32 + lVar6) = auVar18;
        auVar15._8_4_ = SUB84(dVar17,0);
        auVar15._0_8_ =
             dVar3 * dVar23 * dVar16 + dVar24 * dVar13 + dVar22 * dVar21 * dVar9 +
             dVar25 * dVar20 * dVar8;
        auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined1 (*) [16])(lVar32 + 0x10 + lVar6) = auVar15;
        fVar34 = UE::Anim::Inertialization::Private::CalcInertialFloat
                           (*(float *)(pFVar31 + 0x58),*(float *)(pFVar31 + 0x5c),local_res20[0],
                            fVar34);
        dVar16 = (double)fVar34;
        uVar27 = 0;
        if ((int)uVar29 < *(int *)&param_1->field_0x8) {
          uVar27 = uVar30;
        }
        dVar21 = *(double *)(pFVar31 + 0x30);
        dVar3 = *(double *)(pFVar31 + 0x38);
        dVar13 = *(double *)(pFVar31 + 0x40);
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)param_1;
        uVar27 = 0;
        if ((int)uVar29 < *(int *)&param_1->field_0x8) {
          uVar27 = uVar30;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pdVar1 = (double *)(*(longlong *)param_1 + 0x40 + lVar32);
        local_128 = *pdVar1;
        dStack_120 = pdVar1[1];
        local_118 = *(double *)(*(longlong *)param_1 + 0x50 + lVar32);
        dVar21 = local_128 + dVar16 * dVar21;
        local_100 = local_118 + dVar16 * dVar13;
        dVar16 = dStack_120 + dVar16 * dVar3;
        uVar35 = SUB84(dVar16,0);
        uVar36 = (undefined4)((ulonglong)dVar16 >> 0x20);
        local_110._8_4_ = uVar35;
        local_110._0_8_ = dVar21;
        local_110._12_4_ = uVar36;
        auVar10._8_4_ = uVar35;
        auVar10._0_8_ = dVar21;
        auVar10._12_4_ = uVar36;
        *(undefined1 (*) [16])(lVar32 + 0x40 + lVar6) = auVar10;
        pdVar1 = (double *)(lVar32 + 0x50 + lVar6);
        *pdVar1 = local_100;
        pdVar1[1] = 0.0;
      }
      local_res10 = local_res10 + 1;
      uVar29 = uVar29 + 1;
      lVar32 = lVar32 + 0x60;
    } while (uVar29 != uVar4);
  }
  FCompactPose::NormalizeRotations(param_1);
  local_138.InertializationElapsedTime = local_res20;
  local_138.InertializationDuration = &param_4;
  UE::Anim::FNamedValueArrayUtils::
  Union<_FInertializationPoseDiff::ApplyTo_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>
            ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2,
             (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)
             &this->CurveDiffs,&local_138);
  return;
}

// InitFrom @ 1474e5ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FInertializationPoseDiff::InitFrom
          (FInertializationPoseDiff *this,FCompactPose *param_1,FBlendedCurve *param_2,
          TTransform<double> *param_3,FName *param_4,FInertializationPose *param_5,
          FInertializationPose *param_6,FCurveFilter *param_7)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  FScriptContainerElement *pFVar3;
  undefined4 *puVar4;
  double *pdVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
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
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined8 uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  FCompactPose *pFVar31;
  FCompactPose *pFVar32;
  FBlendedCurve *pFVar33;
  bool bVar34;
  int iVar35;
  uint uVar36;
  FCompactPoseBoneIndex FVar37;
  uint uVar38;
  UObject *pUVar39;
  TTransform<double> *pTVar40;
  longlong lVar41;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar42;
  uint uVar43;
  longlong lVar44;
  uint uVar45;
  FBoneContainer *this_00;
  longlong lVar46;
  FInertializationPoseDiff *pFVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  undefined1 auVar56 [16];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  double dVar71;
  double dVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  double dVar75;
  double dVar84;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar76;
  double dVar77;
  undefined8 uVar85;
  double dVar86;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar87;
  undefined8 uVar89;
  undefined1 auVar88 [16];
  double dVar90;
  float fVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  float fVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  float fVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined1 auStackY_6e8 [32];
  FScriptContainerElement local_6b8;
  FCompactPoseBoneIndex local_6b4;
  uint local_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  uint local_698;
  longlong local_690;
  FInertializationPoseDiff *local_688;
  uint local_680;
  uint local_67c;
  FCompactPose *local_678;
  double local_668;
  double dStack_660;
  TVector<double>_u_0 local_658;
  TTransform<double> *local_640;
  FBoneContainer *local_638;
  longlong local_630;
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [12];
  undefined4 uStack_5fc;
  FCompactPoseBoneIndex local_5f8 [2];
  longlong local_5f0;
  FBlendedCurve *local_5e8;
  FCurveFilter *local_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  undefined1 local_5b8 [16];
  FCompactPoseBoneIndex local_5a8 [2];
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  double local_590;
  double local_588;
  double dStack_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  double local_568;
  double dStack_560;
  undefined1 local_558 [16];
  double local_548;
  undefined1 local_538 [32];
  undefined1 local_518 [16];
  double local_508;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  double local_4f0;
  undefined1 local_4e8 [16];
  double local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  double local_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  double local_490;
  undefined1 local_488 [16];
  double local_478;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  double local_460;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  dVar72 = (param_3->Rotation).ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar14 = (param_3->Rotation).ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  this_00 = *(FBoneContainer **)&param_1->field_0x10;
  local_5e0 = param_7;
  auVar70._0_8_ =
       (param_3->Rotation).XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  auVar70._8_8_ =
       (param_3->Rotation).XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  this->InertializationSpace = Default;
  FVar6 = *param_4;
  local_628._8_4_ = SUB84(dVar14,0);
  local_628._0_8_ = dVar72;
  local_628._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  if ((FVar6 == param_5->AttachParentName) && (FVar6 == param_6->AttachParentName)) {
    if (FVar6 == (FName)0x0) {
      dVar71 = (param_5->ComponentTransform).Rotation.XY.m128d_f64[0] * auVar70._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               (param_5->ComponentTransform).Rotation.ZW.m128d_f64[1] * dVar14 +
               (param_5->ComponentTransform).Rotation.XY.m128d_f64[1] * auVar70._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               (param_5->ComponentTransform).Rotation.ZW.m128d_f64[0] * dVar72 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar14 = (double)local_628._8_8_;
      if (((double)CONCAT44((uint)((ulonglong)dVar71 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar71,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
           __real_3feff7cee0000000) ||
         (dVar72 = (param_6->ComponentTransform).Rotation.XY.m128d_f64[0] * auVar70._0_8_ *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   (param_6->ComponentTransform).Rotation.ZW.m128d_f64[1] * (double)local_628._8_8_
                   + (param_6->ComponentTransform).Rotation.XY.m128d_f64[1] * auVar70._8_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   (param_6->ComponentTransform).Rotation.ZW.m128d_f64[0] * dVar72 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1],
         (double)CONCAT44((uint)((ulonglong)dVar72 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar72,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
         __real_3feff7cee0000000)) {
        this->InertializationSpace = WorldRotation;
      }
    }
  }
  else {
    this->InertializationSpace = WorldSpace;
  }
  local_688 = this;
  local_678 = param_1;
  local_640 = param_3;
  local_638 = this_00;
  local_618 = auVar70;
  local_5e8 = param_2;
  pUVar39 = FWeakObjectPtr::Get(&(this_00->AssetSkeleton).WeakPtr);
  if ((pUVar39 == (UObject *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SkeletonAsset",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                          ,0x57,L""), bVar34)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar45 = *(uint *)&pUVar39[2].field_0x20;
  if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
  }
  piVar1 = &(this->BoneDiffs).ArrayMax;
  (this->BoneDiffs).ArrayNum = 0;
  if (*piVar1 != uVar45) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,uVar45,(ForAnyElementType *)this,0,piVar1);
  }
  iVar35 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,8,uVar45,(ForAnyElementType *)this,&(this->BoneDiffs).ArrayNum,piVar1);
  memset((this->BoneDiffs).AllocatorInstance.Data + (longlong)iVar35 * 0x60,0,
         (longlong)(int)uVar45 * 0x60);
  uVar45 = *(uint *)&param_1->field_0x8;
  uVar43 = 0;
  fVar103 = __real_38d1b717;
  local_67c = uVar45;
  if (uVar45 != 0) {
    local_630 = 0;
    do {
      lVar44 = local_630;
      uVar38 = 0;
      if ((int)uVar43 < (this_00->CompactPoseToSkeletonIndex).ArrayNum) {
        uVar38 = ~uVar43 >> 0x1f;
      }
      local_698 = uVar43;
      if ((uVar38 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_680 = *(uint *)((this_00->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar44);
      lVar44 = (longlong)(int)local_680;
      if (local_680 != 0xffffffff) {
        local_6b0 = ~local_680 >> 0x1f;
        uVar38 = 0;
        if ((int)local_680 < (param_5->BoneStates).ArrayNum) {
          uVar38 = local_6b0;
        }
        if ((uVar38 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_690 = lVar44;
        if ((param_5->BoneStates).AllocatorInstance.Data[lVar44] == (FScriptContainerElement)0x1) {
          lVar44 = (longlong)(int)local_698;
          uVar38 = 0;
          if ((int)local_698 < *(int *)&param_1->field_0x8) {
            uVar38 = ~local_698 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar38 = local_680;
          lVar41 = *(longlong *)param_1;
          lVar46 = (longlong)(int)local_680;
          lVar44 = lVar44 * 0x60;
          pauVar2 = (undefined1 (*) [16])(lVar44 + lVar41);
          uVar92 = *(undefined4 *)*pauVar2;
          uVar93 = *(undefined4 *)(*pauVar2 + 4);
          uVar104 = *(undefined4 *)(*pauVar2 + 8);
          uVar105 = *(undefined4 *)(*pauVar2 + 0xc);
          _local_608 = *pauVar2;
          local_5b8 = *(undefined1 (*) [16])(lVar44 + 0x10 + lVar41);
          puVar4 = (undefined4 *)(lVar44 + 0x20 + lVar41);
          uVar95 = *puVar4;
          uVar96 = puVar4[1];
          uVar97 = puVar4[2];
          uVar98 = puVar4[3];
          pdVar5 = (double *)(lVar44 + 0x30 + lVar41);
          dVar72 = *pdVar5;
          dStack_580 = pdVar5[1];
          puVar4 = (undefined4 *)(lVar44 + 0x40 + lVar41);
          uVar99 = *puVar4;
          uVar100 = puVar4[1];
          uVar101 = puVar4[2];
          uVar102 = puVar4[3];
          pdVar5 = (double *)(lVar44 + 0x50 + lVar41);
          local_568 = *pdVar5;
          dStack_560 = pdVar5[1];
          uVar42 = 0;
          if ((int)local_680 < (param_5->BoneTransforms).ArrayNum) {
            uVar42 = local_6b0;
          }
          local_5a0 = uVar99;
          uStack_59c = uVar100;
          uStack_598 = uVar101;
          uStack_594 = uVar102;
          local_588 = dVar72;
          local_578 = uVar95;
          uStack_574 = uVar96;
          uStack_570 = uVar97;
          uStack_56c = uVar98;
          if ((uVar42 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (param_5->BoneTransforms).AllocatorInstance.Data;
          lVar44 = lVar46 * 0x60;
          pFVar3 = pFVar7 + lVar44;
          local_668 = *(double *)&pFVar3->field_0x0;
          dStack_660 = *(double *)(pFVar3 + 8);
          local_458.Rotation.XY.m128d_f64 = *(double (*) [2])pFVar3;
          local_6a8 = *(double *)(pFVar7 + lVar44 + 0x10);
          uStack_6a0 = *(double *)(pFVar7 + lVar44 + 0x10 + 8);
          local_458.Translation.XY.m128d_f64[0] = *(double *)(pFVar7 + lVar44 + 0x20);
          local_458.Translation.XY.m128d_f64[1] = *(double *)(pFVar7 + lVar44 + 0x20 + 8);
          local_458.Translation.ZW.m128d_f64[0] = *(double *)(pFVar7 + lVar44 + 0x30);
          local_458.Translation.ZW.m128d_f64[1] = *(double *)(pFVar7 + lVar44 + 0x30 + 8);
          local_458.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar7 + lVar44 + 0x40);
          local_458.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar7 + lVar44 + 0x40 + 8);
          local_458.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar7 + lVar44 + 0x50);
          local_458.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar7 + lVar44 + 0x50 + 8);
          uVar42 = 0;
          if ((int)uVar38 < (param_6->BoneTransforms).ArrayNum) {
            uVar42 = local_6b0;
          }
          local_5f0 = lVar44;
          local_458.Rotation.ZW.m128d_f64[0] = local_6a8;
          local_458.Rotation.ZW.m128d_f64[1] = uStack_6a0;
          if (uVar42 == 0) {
            bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar34) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_668 = local_458.Rotation.XY.m128d_f64[0];
            dStack_660 = local_458.Rotation.XY.m128d_f64[1];
          }
          pFVar7 = (param_6->BoneTransforms).AllocatorInstance.Data;
          pFVar3 = pFVar7 + lVar44;
          local_5c8 = *(double *)&pFVar3->field_0x0;
          dStack_5c0 = *(double *)(pFVar3 + 8);
          local_3f8.Rotation.XY.m128d_f64 = *(double (*) [2])pFVar3;
          local_5d8 = *(double *)(pFVar7 + lVar44 + 0x10);
          dStack_5d0 = *(double *)(pFVar7 + lVar44 + 0x10 + 8);
          local_3f8.Translation.XY.m128d_f64[0] = *(double *)(pFVar7 + lVar44 + 0x20);
          local_3f8.Translation.XY.m128d_f64[1] = *(double *)(pFVar7 + lVar44 + 0x20 + 8);
          local_3f8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar7 + lVar44 + 0x30);
          local_3f8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar7 + lVar44 + 0x30 + 8);
          local_3f8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar7 + lVar44 + 0x40);
          local_3f8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar7 + lVar44 + 0x40 + 8);
          local_3f8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar7 + lVar44 + 0x50);
          local_3f8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar7 + lVar44 + 0x50 + 8);
          uVar42 = 0;
          if ((int)uVar38 < (param_6->BoneStates).ArrayNum) {
            uVar42 = local_6b0;
          }
          local_3f8.Rotation.ZW.m128d_f64[0] = local_5d8;
          local_3f8.Rotation.ZW.m128d_f64[1] = dStack_5d0;
          if (uVar42 == 0) {
            local_6a8 = local_458.Rotation.ZW.m128d_f64[0];
            uStack_6a0 = local_458.Rotation.ZW.m128d_f64[1];
            bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar34) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_668 = local_458.Rotation.XY.m128d_f64[0];
            dStack_660 = local_458.Rotation.XY.m128d_f64[1];
            local_5c8 = local_3f8.Rotation.XY.m128d_f64[0];
            dStack_5c0 = local_3f8.Rotation.XY.m128d_f64[1];
            uVar73 = local_458.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar74 = local_458.Rotation.ZW.m128d_f64[1]._4_4_;
          }
          else {
            local_6a8._0_4_ = SUB84(local_458.Rotation.ZW.m128d_f64[0],0);
            local_6a8._4_4_ = (undefined4)((ulonglong)local_458.Rotation.ZW.m128d_f64[0] >> 0x20);
            uStack_6a0._0_4_ = SUB84(local_458.Rotation.ZW.m128d_f64[1],0);
            uStack_6a0._4_4_ = (undefined4)((ulonglong)local_458.Rotation.ZW.m128d_f64[1] >> 0x20);
            local_458.Rotation.ZW.m128d_f64[0]._0_4_ = (uint)local_6a8;
            uVar73 = local_6a8._4_4_;
            local_458.Rotation.ZW.m128d_f64[1]._0_4_ = (undefined4)uStack_6a0;
            uVar74 = uStack_6a0._4_4_;
          }
          pFVar47 = local_688;
          local_6b8 = (param_6->BoneStates).AllocatorInstance.Data[lVar46];
          local_6a8 = local_458.Rotation.ZW.m128d_f64[0];
          uStack_6a0 = local_458.Rotation.ZW.m128d_f64[1];
          local_5d8 = local_3f8.Rotation.ZW.m128d_f64[0];
          dStack_5d0 = local_3f8.Rotation.ZW.m128d_f64[1];
          if (local_698 == 0) {
            if (local_688->InertializationSpace == WorldSpace) {
              pTVar40 = UE::Math::TTransform<double>::GetRelativeTransform
                                  (&param_5->ComponentTransform,&local_278,local_640);
              UE::Math::TTransform<double>::Multiply(&local_458,&local_458,pTVar40);
              pTVar40 = UE::Math::TTransform<double>::GetRelativeTransform
                                  (&param_6->ComponentTransform,&local_218,local_640);
              UE::Math::TTransform<double>::Multiply(&local_3f8,&local_3f8,pTVar40);
            }
            else if (local_688->InertializationSpace == WorldRotation) {
              dVar12 = (param_5->ComponentTransform).Rotation.ZW.m128d_f64[0];
              dVar13 = (param_5->ComponentTransform).Rotation.ZW.m128d_f64[1];
              dVar86 = (param_5->ComponentTransform).Rotation.XY.m128d_f64[0];
              dVar90 = (param_5->ComponentTransform).Rotation.XY.m128d_f64[1];
              dVar75 = auVar70._0_8_;
              dVar84 = auVar70._8_8_;
              uVar92 = auVar70._8_4_;
              uVar93 = auVar70._12_4_;
              dVar72 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
              dVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
              auVar80._8_4_ = uVar92;
              auVar80._0_8_ = dVar84;
              auVar80._12_4_ = uVar93;
              dVar71 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
              dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
              dVar67 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              dVar21 = dVar13 * dVar75 * dVar72 + dVar14 * dVar86 + dVar84 * dVar12 * dVar71 +
                       dVar90 * (double)local_628._0_8_ * dVar67;
              dVar22 = dVar12 * dVar75 * dVar58 + dVar14 * dVar90 + auVar80._8_8_ * dVar13 * dVar9 +
                       dVar86 * (double)local_628._0_8_ * dVar10;
              dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
              dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
              auVar52._8_4_ = uVar92;
              auVar52._0_8_ = dVar84;
              auVar52._12_4_ = uVar93;
              dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
              dVar18 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
              auVar68._4_4_ = uVar73;
              auVar68._0_4_ = local_458.Rotation.ZW.m128d_f64[0]._0_4_;
              auVar68._8_4_ = local_458.Rotation.ZW.m128d_f64[1]._0_4_;
              auVar68._12_4_ = uVar74;
              dVar77 = dVar90 * dVar75 * dVar19 + dVar14 * dVar12 + dVar84 * dVar86 * dVar17 +
                       dVar13 * (double)local_628._0_8_ * dVar15;
              dVar51 = dVar86 * dVar75 * dVar20 + dVar14 * dVar13 + auVar52._8_8_ * dVar90 * dVar18
                       + dVar12 * (double)local_628._0_8_ * dVar16;
              dVar12 = (double)CONCAT44(uVar73,local_458.Rotation.ZW.m128d_f64[0]._0_4_);
              auVar78._8_4_ = SUB84(dVar51,0);
              auVar78._0_8_ = dVar77;
              auVar78._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
              auVar59._8_4_ = SUB84(dVar21,0);
              auVar59._0_8_ = dVar21;
              auVar59._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
              dVar13 = dVar21 * dVar12 * dVar58 + dStack_660 * dVar51 +
                       local_458.Rotation.ZW.m128d_f64[1] * dVar22 * dVar9 +
                       dVar77 * local_668 * dVar10;
              local_458.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
              local_458.Rotation.XY.m128d_f64[0] =
                   dVar21 * auVar68._8_8_ * dVar72 + local_668 * auVar78._8_8_ +
                   local_458.Rotation.ZW.m128d_f64[0] * dVar22 * dVar71 +
                   dVar77 * dStack_660 * dVar67;
              local_458.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
              dVar57 = (param_6->ComponentTransform).Rotation.XY.m128d_f64[0];
              dVar28 = (param_6->ComponentTransform).Rotation.XY.m128d_f64[1];
              auVar53._8_4_ = uVar92;
              auVar53._0_8_ = dVar84;
              auVar53._12_4_ = uVar93;
              dVar29 = (param_6->ComponentTransform).Rotation.ZW.m128d_f64[0];
              dVar30 = (param_6->ComponentTransform).Rotation.ZW.m128d_f64[1];
              dVar13 = dVar30 * dVar75 * dVar72 + dVar14 * dVar57 + dVar84 * dVar29 * dVar71 +
                       dVar28 * (double)local_628._0_8_ * dVar67;
              dVar86 = dVar29 * dVar75 * dVar58 + dVar14 * dVar28 + auVar53._8_8_ * dVar30 * dVar9 +
                       dVar57 * (double)local_628._0_8_ * dVar10;
              dVar90 = dVar28 * dVar75 * dVar19 + dVar29 * dVar14 + dVar84 * dVar57 * dVar17 +
                       dVar30 * (double)local_628._0_8_ * dVar15;
              dVar57 = dVar57 * dVar75 * dVar20 + dVar30 * dVar14 + dVar84 * dVar28 * dVar18 +
                       dVar29 * (double)local_628._0_8_ * dVar16;
              auVar60._8_4_ = SUB84(dVar13,0);
              auVar60._0_8_ = dVar13;
              auVar60._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
              auVar79._8_4_ = SUB84(dVar57,0);
              auVar79._0_8_ = dVar90;
              auVar79._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
              dVar14 = dVar90 * local_3f8.Rotation.ZW.m128d_f64[0];
              dVar58 = dVar13 * local_3f8.Rotation.ZW.m128d_f64[0] * dVar58 + dStack_5c0 * dVar57 +
                       local_3f8.Rotation.ZW.m128d_f64[1] * dVar86 * dVar9 +
                       dVar90 * local_5c8 * dVar10;
              local_3f8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar58,0);
              local_3f8.Rotation.XY.m128d_f64[0] =
                   dVar13 * local_3f8.Rotation.ZW.m128d_f64[1] * dVar72 + local_5c8 * auVar79._8_8_
                   + local_3f8.Rotation.ZW.m128d_f64[0] * dVar86 * dVar71 +
                   dVar90 * dStack_5c0 * dVar67;
              local_3f8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar58 >> 0x20);
              uVar95 = local_578;
              uVar96 = uStack_574;
              uVar97 = uStack_570;
              uVar98 = uStack_56c;
              uVar99 = local_5a0;
              uVar100 = uStack_59c;
              uVar101 = uStack_598;
              uVar102 = uStack_594;
              fVar103 = __real_38d1b717;
              uVar92 = local_608._0_4_;
              uVar93 = local_608._4_4_;
              uVar104 = local_608._8_4_;
              uVar105 = uStack_5fc;
              dVar72 = local_588;
              local_458.Rotation.ZW.m128d_f64[0] =
                   dVar21 * dStack_660 * dVar19 + local_458.Rotation.ZW.m128d_f64[0] * auVar78._8_8_
                   + local_668 * dVar22 * dVar17 + dVar77 * auVar68._8_8_ * dVar15;
              local_458.Rotation.ZW.m128d_f64[1] =
                   auVar59._8_8_ * local_668 * dVar20 + local_458.Rotation.ZW.m128d_f64[1] * dVar51
                   + dStack_660 * dVar22 * dVar18 + dVar77 * dVar12 * dVar16;
              local_3f8.Rotation.ZW.m128d_f64[0] =
                   dVar13 * dStack_5c0 * dVar19 + local_3f8.Rotation.ZW.m128d_f64[0] * auVar79._8_8_
                   + local_5c8 * dVar86 * dVar17 +
                   dVar90 * local_3f8.Rotation.ZW.m128d_f64[1] * dVar15;
              local_3f8.Rotation.ZW.m128d_f64[1] =
                   auVar60._8_8_ * local_5c8 * dVar20 + local_3f8.Rotation.ZW.m128d_f64[1] * dVar57
                   + dStack_5c0 * dVar86 * dVar18 + dVar14 * dVar16;
            }
          }
          else {
            FBoneContainer::GetParentBoneIndex(this_00,&local_6b4);
            lVar41 = (longlong)(int)local_6b4;
            if (local_6b4 == (FCompactPoseBoneIndex)0xffffffff) {
              uVar38 = 0xffffffff;
            }
            else {
              uVar38 = 0;
              if ((int)local_6b4 < (this_00->CompactPoseToSkeletonIndex).ArrayNum) {
                uVar38 = ~(uint)local_6b4 >> 0x1f;
              }
              if ((uVar38 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar38 = *(uint *)((this_00->CompactPoseToSkeletonIndex).AllocatorInstance.Data +
                                lVar41 * 4);
            }
            pFVar47 = local_688;
            if ((local_6b4 != (FCompactPoseBoneIndex)0xffffffff) && (uVar38 != 0xffffffff)) {
              uVar42 = ~uVar38 >> 0x1f;
              local_6a8 = (double)CONCAT44(local_6a8._4_4_,uVar42);
              uVar36 = 0;
              if ((int)uVar38 < (param_5->BoneStates).ArrayNum) {
                uVar36 = uVar42;
              }
              if (uVar36 == 0) {
                bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar34) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar42 = (uint)local_6a8;
              }
              if ((param_5->BoneStates).AllocatorInstance.Data[(int)uVar38] !=
                  (FScriptContainerElement)0x2) {
                uVar36 = 0;
                if ((int)uVar38 < (param_6->BoneStates).ArrayNum) {
                  uVar36 = uVar42;
                }
                if (uVar36 == 0) {
                  bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar34) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar42 = (uint)local_6a8;
                }
                pFVar47 = local_688;
                if ((param_6->BoneStates).AllocatorInstance.Data[(int)uVar38] !=
                    (FScriptContainerElement)0x2) goto LAB_1474e6e6e;
              }
              uVar36 = 0;
              if ((int)uVar38 < (param_5->BoneTransforms).ArrayNum) {
                uVar36 = uVar42;
              }
              if (uVar36 == 0) {
                bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar34) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar42 = (uint)local_6a8;
              }
              pFVar3 = (param_5->BoneTransforms).AllocatorInstance.Data;
              lVar44 = (longlong)(int)uVar38 * 0x60;
              local_338.Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar44);
              local_338.Rotation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 8);
              local_338.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x10);
              local_338.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x10 + 8);
              local_338.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x20);
              local_338.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x20 + 8);
              local_338.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x30);
              local_338.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x30 + 8);
              local_338.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x40);
              local_338.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x40 + 8);
              local_338.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x50);
              local_338.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x50 + 8);
              uVar36 = 0;
              if ((int)uVar38 < (param_6->BoneTransforms).ArrayNum) {
                uVar36 = uVar42;
              }
              if ((uVar36 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar3 = (param_6->BoneTransforms).AllocatorInstance.Data;
              local_2d8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar44);
              local_2d8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 8);
              local_2d8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x10);
              local_2d8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x10 + 8);
              local_2d8.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x20);
              local_2d8.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x20 + 8);
              local_2d8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x30);
              local_2d8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x30 + 8);
              local_2d8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x40);
              local_2d8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x40 + 8);
              local_2d8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar44 + 0x50);
              local_2d8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar44 + 0x50 + 8);
              pTVar40 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
                                  ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                                   local_678,&local_6b4);
              local_398.Rotation.XY.m128d_f64[0] = (pTVar40->Rotation).XY.m128d_f64[0];
              local_398.Rotation.XY.m128d_f64[1] = (pTVar40->Rotation).XY.m128d_f64[1];
              local_398.Rotation.ZW.m128d_f64[0] = (pTVar40->Rotation).ZW.m128d_f64[0];
              local_398.Rotation.ZW.m128d_f64[1] = (pTVar40->Rotation).ZW.m128d_f64[1];
              local_398.Translation.XY.m128d_f64[0] = (pTVar40->Translation).XY.m128d_f64[0];
              local_398.Translation.XY.m128d_f64[1] = (pTVar40->Translation).XY.m128d_f64[1];
              local_398.Translation.ZW.m128d_f64[0] = (pTVar40->Translation).ZW.m128d_f64[0];
              local_398.Translation.ZW.m128d_f64[1] = (pTVar40->Translation).ZW.m128d_f64[1];
              local_398.Scale3D.XY.m128d_f64[0] = (pTVar40->Scale3D).XY.m128d_f64[0];
              local_398.Scale3D.XY.m128d_f64[1] = (pTVar40->Scale3D).XY.m128d_f64[1];
              local_398.Scale3D.ZW.m128d_f64[0] = (pTVar40->Scale3D).ZW.m128d_f64[0];
              local_398.Scale3D.ZW.m128d_f64[1] = (pTVar40->Scale3D).ZW.m128d_f64[1];
              FVar37 = FBoneContainer::GetParentBoneIndex(this_00,local_5a8);
              local_6b4 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar37);
              if (local_6b4 == (FCompactPoseBoneIndex)0xffffffff) {
                uVar38 = 0xffffffff;
                pFVar31 = local_678;
              }
              else {
                uVar38 = FBoneContainer::GetSkeletonIndex(this_00,&local_6b4);
                pFVar31 = local_678;
              }
              while ((pFVar32 = local_678, local_678 = pFVar31,
                     local_6b4 != (FCompactPoseBoneIndex)0xffffffff &&
                     (uVar45 = local_67c, uVar38 != 0xffffffff))) {
                uVar42 = ~uVar38 >> 0x1f;
                uVar45 = 0;
                if ((int)uVar38 < (param_5->BoneStates).ArrayNum) {
                  uVar45 = uVar42;
                }
                if ((uVar45 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar44 = (longlong)(int)uVar38;
                if ((param_5->BoneStates).AllocatorInstance.Data[lVar44] !=
                    (FScriptContainerElement)0x2) {
                  uVar45 = 0;
                  if ((int)uVar38 < (param_6->BoneStates).ArrayNum) {
                    uVar45 = uVar42;
                  }
                  if ((uVar45 == 0) &&
                     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar34)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  this_00 = local_638;
                  uVar45 = local_67c;
                  if ((param_6->BoneStates).AllocatorInstance.Data[lVar44] !=
                      (FScriptContainerElement)0x2) break;
                }
                uVar45 = 0;
                if ((int)uVar38 < (param_5->BoneTransforms).ArrayNum) {
                  uVar45 = uVar42;
                }
                if ((uVar45 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_6a8 = (double)(lVar44 * 0x60);
                UE::Math::TTransform<double>::Multiply
                          (&local_338,&local_338,
                           (TTransform<double> *)
                           ((param_5->BoneTransforms).AllocatorInstance.Data + (longlong)local_6a8))
                ;
                uVar45 = 0;
                if ((int)uVar38 < (param_6->BoneTransforms).ArrayNum) {
                  uVar45 = uVar42;
                }
                if ((uVar45 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                UE::Math::TTransform<double>::Multiply
                          (&local_2d8,&local_2d8,
                           (TTransform<double> *)
                           ((param_6->BoneTransforms).AllocatorInstance.Data + (longlong)local_6a8))
                ;
                lVar44 = (longlong)(int)local_6b4;
                uVar45 = 0;
                if ((int)local_6b4 < *(int *)&pFVar32->field_0x8) {
                  uVar45 = ~(uint)local_6b4 >> 0x1f;
                }
                if ((uVar45 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                UE::Math::TTransform<double>::Multiply
                          (&local_398,&local_398,
                           (TTransform<double> *)(lVar44 * 0x60 + *(longlong *)pFVar32));
                this_00 = local_638;
                FVar37 = FBoneContainer::GetParentBoneIndex(local_638,local_5f8);
                local_6b4 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var_00,FVar37);
                lVar44 = (longlong)(int)local_6b4;
                if (local_6b4 == (FCompactPoseBoneIndex)0xffffffff) {
                  uVar38 = 0xffffffff;
                  uVar45 = local_67c;
                  pFVar31 = local_678;
                  local_678 = pFVar32;
                }
                else {
                  uVar45 = 0;
                  if ((int)local_6b4 < (this_00->CompactPoseToSkeletonIndex).ArrayNum) {
                    uVar45 = ~(uint)local_6b4 >> 0x1f;
                  }
                  if ((uVar45 == 0) &&
                     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar34)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar38 = *(uint *)((this_00->CompactPoseToSkeletonIndex).AllocatorInstance.Data +
                                    lVar44 * 4);
                  uVar45 = local_67c;
                  pFVar31 = local_678;
                  local_678 = pFVar32;
                }
              }
              pTVar40 = UE::Math::TTransform<double>::GetRelativeTransform
                                  (&local_338,&local_1b8,&local_398);
              UE::Math::TTransform<double>::Multiply(&local_458,&local_458,pTVar40);
              pTVar40 = UE::Math::TTransform<double>::GetRelativeTransform
                                  (&local_2d8,&local_158,&local_398);
              UE::Math::TTransform<double>::Multiply(&local_3f8,&local_3f8,pTVar40);
              lVar44 = local_5f0;
              pFVar47 = local_688;
            }
          }
LAB_1474e6e6e:
          uVar38 = 0;
          if ((int)local_680 < (pFVar47->BoneDiffs).ArrayNum) {
            uVar38 = local_6b0;
          }
          if ((uVar38 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar3 = (pFVar47->BoneDiffs).AllocatorInstance.Data;
          local_518._8_8_ = local_458.Translation.XY.m128d_f64[1];
          local_518._0_8_ = local_458.Translation.XY.m128d_f64[0];
          dVar14 = local_458.Translation.XY.m128d_f64[0] - (double)CONCAT44(uVar96,uVar95);
          dVar67 = local_458.Translation.XY.m128d_f64[1] - (double)CONCAT44(uVar98,uVar97);
          local_508 = local_458.Translation.ZW.m128d_f64[0];
          dVar71 = local_458.Translation.ZW.m128d_f64[0] - dVar72;
          auVar61._8_4_ = SUB84(local_458.Translation.XY.m128d_f64[1],0);
          auVar61._0_8_ = dVar67;
          auVar61._12_4_ = (int)((ulonglong)local_458.Translation.XY.m128d_f64[1] >> 0x20);
          fVar91 = (float)SQRT(dVar67 * dVar67 + dVar14 * dVar14 + dVar71 * dVar71);
          uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar89 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar76 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar85 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          if (fVar103 < fVar91) {
            dVar58 = __real_3ff0000000000000 / (double)fVar91;
            uVar26 = dVar58 * dVar71;
            uVar89 = 0.0;
            uVar76 = dVar58 * dVar14;
            uVar85 = dVar58 * dVar67;
          }
          fVar87 = 0.0;
          if (((local_6b8 == (FScriptContainerElement)0x1) &&
              (fVar87 = 0.0, fVar103 < param_5->DeltaTime)) && (fVar103 < fVar91)) {
            local_4e8._8_8_ = local_3f8.Translation.XY.m128d_f64[1];
            local_4e8._0_8_ = local_3f8.Translation.XY.m128d_f64[0];
            auVar23._4_8_ = auVar61._8_8_;
            auVar23._0_4_ = (int)((ulonglong)local_3f8.Translation.XY.m128d_f64[0] >> 0x20);
            auVar62._0_8_ = auVar23._0_8_ << 0x20;
            auVar62._8_4_ = SUB84(local_3f8.Translation.XY.m128d_f64[1],0);
            auVar62._12_4_ = (int)((ulonglong)local_3f8.Translation.XY.m128d_f64[1] >> 0x20);
            local_4d8 = local_3f8.Translation.ZW.m128d_f64[0];
            local_4c0 = local_588;
            fVar87 = (fVar91 - (float)((auVar62._8_8_ - (double)CONCAT44(uVar98,uVar97)) *
                                       (double)uVar85 +
                                       (local_3f8.Translation.XY.m128d_f64[0] -
                                       (double)CONCAT44(uVar96,uVar95)) * (double)uVar76 +
                                      (local_3f8.Translation.ZW.m128d_f64[0] - local_588) *
                                      (double)uVar26)) / param_5->DeltaTime;
            local_4d0 = uVar95;
            uStack_4cc = uVar96;
            uStack_4c8 = uVar97;
            uStack_4c4 = uVar98;
          }
          *(undefined8 *)(pFVar3 + lVar44) = uVar76;
          *(undefined8 *)(pFVar3 + lVar44 + 8) = uVar85;
          *(undefined8 *)(pFVar3 + lVar44 + 0x10) = uVar26;
          fVar94 = 0.0;
          *(float *)(pFVar3 + lVar44 + 0x48) = fVar91;
          *(float *)(pFVar3 + lVar44 + 0x4c) = fVar87;
          dVar21 = (double)CONCAT44(uVar93,uVar92) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar22 = (double)CONCAT44(uVar105,uVar104) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar58 = local_458.Rotation.XY.m128d_f64[0];
          dVar14 = (double)local_5b8._0_8_ *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar71 = (double)local_5b8._8_8_ *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          dVar67 = local_458.Rotation.XY.m128d_f64[1];
          auVar54._8_4_ = local_458.Rotation.XY.m128d_f64[1]._0_4_;
          auVar54._0_8_ = dVar67;
          auVar54._12_4_ = local_458.Rotation.XY.m128d_f64[1]._4_4_;
          local_608._8_4_ = SUB84(dVar22,0);
          local_608._0_8_ = dVar21;
          uStack_5fc = (int)((ulonglong)dVar22 >> 0x20);
          dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
          dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
          auVar69._0_8_ = local_458.Rotation.ZW.m128d_f64[1] * dVar14;
          auVar69._8_8_ = local_458.Rotation.ZW.m128d_f64[1] * dVar71;
          local_5b8._8_4_ = SUB84(dVar71,0);
          local_5b8._0_8_ = dVar14;
          local_5b8._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
          dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
          dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
          dVar77 = dVar58 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                   + auVar69._0_8_ +
                   dVar67 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                   + local_458.Rotation.ZW.m128d_f64[0] * dVar71 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar86 = dVar58 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + auVar69._8_8_ +
                   dVar67 * stack0xfffffffffffffa00 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   local_458.Rotation.ZW.m128d_f64[0] * dVar14 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar24._4_8_ = uVar89;
          auVar24._0_4_ = (int)((ulonglong)dVar77 >> 0x20);
          auVar88._0_8_ = auVar24._0_8_ << 0x20;
          auVar88._8_4_ = SUB84(dVar86,0);
          auVar88._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
          dVar67 = dVar58 * dVar71 * dVar9 + local_458.Rotation.ZW.m128d_f64[1] * dVar21 +
                   dVar67 * dVar14 * dVar12 +
                   local_458.Rotation.ZW.m128d_f64[0] * dVar22 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar58 = dVar58 * dVar14 * dVar10 + local_458.Rotation.ZW.m128d_f64[1] * dVar22 +
                   auVar54._8_8_ * dVar71 * dVar13 +
                   local_458.Rotation.ZW.m128d_f64[0] * dVar21 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar90 = auVar88._8_8_;
          dVar86 = __real_bff0000000000000;
          if ((__real_bff0000000000000 <= dVar90) &&
             (dVar86 = dVar90, __real_3ff0000000000000 <= dVar90)) {
            dVar86 = __real_3ff0000000000000;
          }
          auVar55._8_4_ = SUB84(dVar58,0);
          auVar55._0_8_ = dVar67;
          auVar55._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          dVar51 = dVar67 * dVar67 + dVar77 * dVar77;
          dVar57 = auVar55._8_8_ * dVar58 + 0.0;
          dVar90 = dVar57 + dVar51;
          dVar51 = dVar51 + dVar57;
          auVar11._8_4_ = SUB84(dVar51,0);
          auVar11._0_8_ = dVar90;
          auVar11._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          auVar70 = sqrtpd(auVar69,auVar11);
          uVar48 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar90);
          uVar50 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar51);
          auVar80 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar70);
          uVar49 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar90);
          auVar81._0_8_ = uVar48 & (ulonglong)(auVar80._0_8_ * dVar67);
          uVar27 = uVar50 & (ulonglong)(auVar80._8_8_ * dVar58);
          auVar81._8_4_ = (undefined4)uVar27;
          auVar81._12_4_ = (undefined4)(uVar27 >> 0x20);
          auVar63._0_4_ =
               ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
          auVar63._4_4_ =
               ~(uint)(uVar48 >> 0x20) &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
          auVar63._8_4_ =
               ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
          auVar63._12_4_ =
               ~(uint)(uVar50 >> 0x20) &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
          auVar81 = auVar81 | auVar63;
          auVar70 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar70);
          local_658._s_0.Z =
               (double)(CONCAT44(~(uint)(uVar49 >> 0x20) &
                                 (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float1000.m128_f32[2] >> 0x20
                                       ),~(uint)uVar49 &
                                         SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],
                                               0)) | uVar49 & (ulonglong)(auVar70._0_8_ * dVar77));
          local_658._0_16_ = auVar81;
          local_558 = auVar81;
          local_548 = local_658._s_0.Z;
          local_500 = uVar95;
          uStack_4fc = uVar96;
          uStack_4f8 = uVar97;
          uStack_4f4 = uVar98;
          local_4f0 = dVar72;
          dVar72 = acos(dVar86);
          for (fVar91 = (float)(dVar72 + dVar72); __real_40490fdb < fVar91;
              fVar91 = fVar91 + __real_c0c90fdb) {
          }
          for (; fVar91 < __real_c0490fdb; fVar91 = fVar91 + __real_40c90fdb) {
          }
          auVar82 = auVar81;
          if (fVar91 < __real_00000000) {
            uVar38 = (uint)__xmm_80000000000000008000000000000000;
            uVar42 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
            auVar82._4_4_ = auVar81._4_4_ ^ uVar42;
            auVar82._0_4_ = auVar81._0_4_ ^ uVar38;
            fVar91 = (float)((uint)fVar91 ^ __xmm_80000000800000008000000080000000);
            auVar82._12_4_ = auVar81._12_4_ ^ uVar42;
            auVar82._8_4_ = auVar81._8_4_ ^ uVar38;
            local_658._s_0.Z =
                 (double)CONCAT44((uint)((ulonglong)local_548 >> 0x20) ^ uVar42,
                                  SUB84(local_548,0) ^ uVar38);
            local_658._0_16_ = auVar82;
          }
          if (((local_6b8 == (FScriptContainerElement)0x1) && (fVar103 < param_5->DeltaTime)) &&
             (fVar103 < fVar91)) {
            auVar64._8_4_ = SUB84(dVar14,0);
            auVar64._0_8_ = dVar71;
            auVar64._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
            dVar67 = local_3f8.Rotation.XY.m128d_f64[0];
            dVar58 = local_3f8.Rotation.XY.m128d_f64[1];
            auVar56._8_4_ = local_3f8.Rotation.XY.m128d_f64[1]._0_4_;
            auVar56._0_8_ = dVar58;
            auVar56._12_4_ = local_3f8.Rotation.XY.m128d_f64[1]._4_4_;
            dVar72 = dVar67 * dVar21 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     local_3f8.Rotation.ZW.m128d_f64[1] * (double)local_5b8._8_8_ +
                     dVar58 * stack0xfffffffffffffa00 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar14 * local_3f8.Rotation.ZW.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            local_538._0_8_ =
                 dVar71 * dVar67 * dVar9 +
                 local_3f8.Rotation.ZW.m128d_f64[1] * (double)local_608._0_8_ +
                 dVar58 * (double)local_5b8._0_8_ * dVar12 +
                 local_3f8.Rotation.ZW.m128d_f64[0] * dVar22 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            local_538._8_8_ =
                 auVar64._8_8_ * dVar67 * dVar10 +
                 local_3f8.Rotation.ZW.m128d_f64[1] * stack0xfffffffffffffa00 +
                 auVar56._8_8_ * (double)local_5b8._8_8_ * dVar13 +
                 local_3f8.Rotation.ZW.m128d_f64[0] * dVar21 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            local_538._24_4_ = SUB84(dVar72,0);
            local_538._16_8_ =
                 dVar67 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 local_3f8.Rotation.ZW.m128d_f64[1] * (double)local_5b8._0_8_ +
                 dVar58 * (double)local_608._0_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar71 * local_3f8.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_538._28_4_ = (int)((ulonglong)dVar72 >> 0x20);
            dVar72 = UE::Math::TQuat<double>::GetTwistAngle
                               ((TQuat<double> *)local_538,(TVector<double> *)&local_658._s_0);
            fVar94 = FMath::UnwindRadians<float>(fVar91 - (float)dVar72);
            fVar94 = fVar94 / param_5->DeltaTime;
            auVar82 = local_658._0_16_;
          }
          *(undefined1 (*) [16])(pFVar3 + lVar44 + 0x18) = auVar82;
          *(double *)(pFVar3 + lVar44 + 0x28) = local_658._s_0.Z;
          *(float *)(pFVar3 + lVar44 + 0x50) = fVar91;
          fVar91 = 0.0;
          *(float *)(pFVar3 + lVar44 + 0x54) = fVar94;
          local_4b8._8_8_ = local_458.Scale3D.XY.m128d_f64[1];
          local_4b8._0_8_ = local_458.Scale3D.XY.m128d_f64[0];
          dVar72 = local_458.Scale3D.XY.m128d_f64[0] - (double)CONCAT44(uVar100,uVar99);
          auVar83._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          auVar83._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dVar71 = local_458.Scale3D.XY.m128d_f64[1] - (double)CONCAT44(uVar102,uVar101);
          local_4a8 = local_458.Scale3D.ZW.m128d_f64[0];
          dVar14 = local_458.Scale3D.ZW.m128d_f64[0] - local_568;
          local_490 = local_568;
          auVar65._8_4_ = SUB84(local_458.Scale3D.XY.m128d_f64[1],0);
          auVar65._0_8_ = dVar71;
          auVar65._12_4_ = (int)((ulonglong)local_458.Scale3D.XY.m128d_f64[1] >> 0x20);
          fVar87 = (float)SQRT(dVar71 * dVar71 + dVar72 * dVar72 + dVar14 * dVar14);
          uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_590 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar89 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          if (fVar103 < fVar87) {
            dVar67 = __real_3ff0000000000000 / (double)fVar87;
            auVar83._8_8_ = dVar67 * dVar71;
            auVar83._0_8_ = dVar67 * dVar72;
            uVar26 = dVar67 * dVar71;
            local_590 = dVar67 * dVar14;
            uVar89 = dVar67 * dVar72;
          }
          if (((local_6b8 == (FScriptContainerElement)0x1) && (fVar103 < param_5->DeltaTime)) &&
             (fVar103 < fVar87)) {
            local_488._8_8_ = local_3f8.Scale3D.XY.m128d_f64[1];
            local_488._0_8_ = local_3f8.Scale3D.XY.m128d_f64[0];
            auVar25._4_8_ = auVar65._8_8_;
            auVar25._0_4_ = (int)((ulonglong)local_3f8.Scale3D.XY.m128d_f64[0] >> 0x20);
            auVar66._0_8_ = auVar25._0_8_ << 0x20;
            auVar66._8_4_ = SUB84(local_3f8.Scale3D.XY.m128d_f64[1],0);
            auVar66._12_4_ = (int)((ulonglong)local_3f8.Scale3D.XY.m128d_f64[1] >> 0x20);
            local_478 = local_3f8.Scale3D.ZW.m128d_f64[0];
            local_460 = local_568;
            fVar91 = (fVar87 - (float)((auVar66._8_8_ - (double)CONCAT44(uVar102,uVar101)) *
                                       (double)uVar26 +
                                       (local_3f8.Scale3D.XY.m128d_f64[0] -
                                       (double)CONCAT44(uVar100,uVar99)) * (double)uVar89 +
                                      (local_3f8.Scale3D.ZW.m128d_f64[0] - local_568) * local_590))
                     / param_5->DeltaTime;
            local_470 = uVar99;
            uStack_46c = uVar100;
            uStack_468 = uVar101;
            uStack_464 = uVar102;
          }
          *(undefined1 (*) [16])(pFVar3 + lVar44 + 0x30) = auVar83;
          *(double *)(pFVar3 + lVar44 + 0x40) = local_590;
          *(float *)(pFVar3 + lVar44 + 0x58) = fVar87;
          *(float *)(pFVar3 + lVar44 + 0x5c) = fVar91;
          param_1 = local_678;
          local_4a0 = uVar99;
          uStack_49c = uVar100;
          uStack_498 = uVar101;
          uStack_494 = uVar102;
        }
      }
      uVar43 = uVar43 + 1;
      local_630 = local_630 + 4;
      this = local_688;
      auVar70 = local_618;
      dVar14 = (double)local_628._8_8_;
    } while (uVar43 != uVar45);
  }
  iVar35 = *(int *)((longlong)&(this->CurveDiffs)._padding_ + 4);
  *(undefined4 *)&(this->CurveDiffs)._padding_ = 0;
  if (iVar35 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&this->CurveDiffs,0,
               (int *)((longlong)&(this->CurveDiffs)._padding_ + 4));
  }
  pFVar33 = local_5e8;
  UE::Anim::FNamedValueArrayUtils::
  Union<_TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l3::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
            ((TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)
             &this->CurveDiffs,
             (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_5e8,
             (<lambda_1>)local_6b8);
  *(undefined1 *)&(this->CurveDiffs)._padding_ = pFVar33->field_0x10;
  UE::Anim::FNamedValueArrayUtils::
  Union<_FInertializationPoseDiff::InitFrom_::__l2::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
            ((TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)
             &this->CurveDiffs,
             (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
             &param_5->Curves,(<lambda_1>)local_6b8);
  if (fVar103 < param_5->DeltaTime) {
    UE::Anim::FNamedValueArrayUtils::
    Union<_FInertializationPoseDiff::InitFrom_::__l60::<lambda_2>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)
               &this->CurveDiffs,
               (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
               &param_6->Curves,(<lambda_2>)param_5->DeltaTime);
  }
  if (0 < (int)local_5e0->_padding_) {
    UE::Anim::FCurveUtils::Filter<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>
              (&this->CurveDiffs,local_5e0);
  }
  return;
}

