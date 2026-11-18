// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 14

// StaticStruct @ 1463d5260

UScriptStruct * __cdecl FIKChain::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKChain.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FIKChain.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKChain,(UObject *)pUVar1,L"IKChain");
  }
  return Z_Registration_Info_UScriptStruct_FIKChain.OuterSingleton;
}

// FIKChain @ 146407000

FIKChain * __thiscall FIKChain::FIKChain(FIKChain *this,FIKChain *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  double dVar3;
  
  (this->Links).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Links).ArrayMax;
  iVar2 = (param_1->Links).ArrayNum;
  _Src = (param_1->Links).AllocatorInstance.Data;
  (this->Links).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Links).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x70);
  }
  this->MinRotationAngleRadians = param_1->MinRotationAngleRadians;
  this->MyAnimInstanceProxy = param_1->MyAnimInstanceProxy;
  this->TotalChainLength = param_1->TotalChainLength;
  this->NumLinks = param_1->NumLinks;
  dVar3 = (param_1->HingeRotationAxis).field0_0x0._s_0.Y;
  (this->HingeRotationAxis).field0_0x0._s_0.X = (param_1->HingeRotationAxis).field0_0x0._s_0.X;
  (this->HingeRotationAxis).field0_0x0._s_0.Y = dVar3;
  (this->HingeRotationAxis).field0_0x0._s_0.Z = (param_1->HingeRotationAxis).field0_0x0._s_0.Z;
  this->bEnableRotationLimit = param_1->bEnableRotationLimit;
  this->bInitialized = param_1->bInitialized;
  return this;
}

// operator= @ 14640d5f0

FIKChain * __thiscall FIKChain::operator=(FIKChain *this,FIKChain *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  if (this != param_1) {
    iVar2 = (this->Links).ArrayMax;
    piVar1 = &(this->Links).ArrayMax;
    _Src = (param_1->Links).AllocatorInstance.Data;
    iVar3 = (param_1->Links).ArrayNum;
    (this->Links).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Links).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x70);
      }
    }
  }
  this->MinRotationAngleRadians = param_1->MinRotationAngleRadians;
  this->MyAnimInstanceProxy = param_1->MyAnimInstanceProxy;
  this->TotalChainLength = param_1->TotalChainLength;
  this->NumLinks = param_1->NumLinks;
  dVar4 = (param_1->HingeRotationAxis).field0_0x0._s_0.Y;
  (this->HingeRotationAxis).field0_0x0._s_0.X = (param_1->HingeRotationAxis).field0_0x0._s_0.X;
  (this->HingeRotationAxis).field0_0x0._s_0.Y = dVar4;
  (this->HingeRotationAxis).field0_0x0._s_0.Z = (param_1->HingeRotationAxis).field0_0x0._s_0.Z;
  this->bEnableRotationLimit = param_1->bEnableRotationLimit;
  this->bInitialized = param_1->bInitialized;
  return this;
}

// ApplyTwistOffset @ 146415f70

void __thiscall FIKChain::ApplyTwistOffset(FIKChain *this,float param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  double extraout_XMM0_Qa;
  double dVar20;
  double dVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar22;
  
  if (((this->Links).ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = (this->Links).ArrayNum;
  pFVar4 = (this->Links).AllocatorInstance.Data;
  uVar17 = iVar3 - 1;
  uVar18 = 0;
  if ((int)uVar17 < iVar3) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar10 = __real_3ff0000000000000;
  pFVar5 = (this->Links).AllocatorInstance.Data;
  iVar3 = (this->Links).ArrayNum;
  uVar19 = (ulonglong)iVar3;
  lVar16 = uVar19 * 0x70;
  dVar7 = *(double *)(pFVar5 + lVar16 + -0x70) - *(double *)pFVar4;
  dVar20 = *(double *)(pFVar5 + lVar16 + -0x68) - *(double *)(pFVar4 + 8);
  dVar21 = *(double *)(pFVar5 + lVar16 + -0x60) - *(double *)(pFVar4 + 0x10);
  dVar22 = dVar20 * dVar20 + dVar7 * dVar7 + dVar21 * dVar21;
  uVar12 = dVar7;
  uVar13 = dVar20;
  uVar14 = dVar21;
  if ((dVar22 != __real_3ff0000000000000) &&
     (uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar22)) {
    dVar22 = __real_3ff0000000000000 / SQRT(dVar22);
    uVar12 = dVar7 * dVar22;
    uVar13 = dVar20 * dVar22;
    uVar14 = dVar21 * dVar22;
  }
  uVar18 = 1;
  if (1 < iVar3 + -1) {
    __libm_sse2_sincos_();
    dVar22 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    dVar10 = dVar10 - dVar22;
    lVar16 = 0x70;
    dVar20 = (double)uVar13 * (double)uVar12 * dVar10;
    dVar7 = (double)uVar14 * (double)uVar12 * dVar10;
    dVar21 = (double)uVar14 * (double)uVar13 * dVar10;
    do {
      uVar17 = 0;
      if ((int)uVar18 < (int)uVar19) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Links).AllocatorInstance.Data;
      dVar1 = *(double *)(pFVar4 + 8);
      dVar2 = *(double *)(pFVar4 + 0x10);
      uVar18 = uVar18 + 1;
      dVar9 = *(double *)(pFVar5 + lVar16) - *(double *)pFVar4;
      dVar11 = *(double *)(pFVar5 + lVar16 + 8) - dVar1;
      dVar8 = *(double *)(pFVar5 + lVar16 + 0x10) - dVar2;
      *(double *)(pFVar5 + lVar16) =
           (dVar20 - extraout_XMM0_Qa * (double)uVar14) * dVar11 +
           ((double)uVar12 * (double)uVar12 * dVar10 + dVar22) * dVar9 +
           (extraout_XMM0_Qa * (double)uVar13 + dVar7) * dVar8 + *(double *)pFVar4;
      *(double *)(pFVar5 + lVar16 + 8) =
           ((double)uVar13 * (double)uVar13 * dVar10 + dVar22) * dVar11 +
           (extraout_XMM0_Qa * (double)uVar14 + dVar20) * dVar9 +
           (dVar21 - extraout_XMM0_Qa * (double)uVar12) * dVar8 + dVar1;
      *(double *)(pFVar5 + lVar16 + 0x10) =
           dVar11 * (extraout_XMM0_Qa * (double)uVar12 + dVar21) +
           dVar9 * (dVar7 - extraout_XMM0_Qa * (double)uVar13) +
           dVar8 * ((double)uVar14 * (double)uVar14 * dVar10 + dVar22) + dVar2;
      lVar16 = lVar16 + 0x70;
      uVar17 = (this->Links).ArrayNum;
      uVar19 = (ulonglong)uVar17;
    } while ((int)uVar18 < (int)(uVar17 - 1));
  }
  return;
}

// DrawDebugIKChain @ 146425530

void __cdecl FIKChain::DrawDebugIKChain(FIKChain *param_1,FColor *param_2)

{
  FAnimInstanceProxy *pFVar1;
  FScriptContainerElement *pFVar2;
  FAnimInstanceProxy *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
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
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined1 local_b8 [16];
  
  fVar14 = __real_bf800000;
  fVar13 = __real_3f800000;
  if (((param_1->bInitialized != false) &&
      (param_1->MyAnimInstanceProxy != (FAnimInstanceProxy *)0x0)) &&
     (uVar17 = 0, 0 < param_1->NumLinks + -1)) {
    lVar18 = 0;
    do {
      pFVar1 = param_1->MyAnimInstanceProxy;
      uVar16 = 0;
      if ((int)uVar17 < (param_1->Links).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->Links).AllocatorInstance.Data;
      uVar17 = uVar17 + 1;
      auVar29 = *(undefined1 (*) [16])(pFVar1->ComponentTransform).Rotation.XY.m128d_f64;
      dVar7 = (pFVar1->ComponentTransform).Rotation.ZW.m128d_f64[1];
      local_d8 = *(double *)(pFVar2 + lVar18 + 0x10);
      dStack_e0 = *(double *)(pFVar2 + lVar18 + 8);
      dVar11 = local_d8 * (pFVar1->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      dVar12 = (pFVar1->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      local_e8 = *(double *)(pFVar2 + lVar18);
      uVar16 = 0;
      if ((int)uVar17 < (param_1->Links).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      local_b8 = *(undefined1 (*) [16])(pFVar1->ComponentTransform).Rotation.XY.m128d_f64;
      auVar32 = *(undefined1 (*) [16])(pFVar1->ComponentTransform).Rotation.ZW.m128d_f64;
      dVar8 = (pFVar1->ComponentTransform).Scale3D.XY.m128d_f64[0] * local_e8;
      dVar9 = (pFVar1->ComponentTransform).Scale3D.XY.m128d_f64[1] * dStack_e0;
      uVar35 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar36._8_4_ = SUB84(dVar9,0);
      auVar36._0_8_ = dVar8;
      auVar36._12_4_ = uVar35;
      dVar6 = auVar32._0_8_;
      auVar24 = blendpd(local_b8,auVar32,2);
      auVar37._0_8_ = auVar36._8_8_ * local_b8._0_8_ - local_b8._8_8_ * dVar8;
      auVar37._8_8_ = dVar11 * local_b8._8_8_ - dVar6 * dVar9;
      auVar28._8_4_ = SUB84(dVar9,0);
      auVar28._0_8_ = dVar8;
      auVar28._12_4_ = uVar35;
      auVar19._8_4_ = SUB84(dVar12,0);
      auVar19._0_8_ = dVar11;
      auVar19._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar19 = blendpd(auVar28,auVar19,2);
      auVar20._0_8_ = auVar19._0_8_ * dVar6 - auVar24._0_8_ * dVar11;
      auVar20._8_8_ = auVar19._8_8_ * auVar32._8_8_ - auVar24._8_8_ * dVar12;
      auVar19 = blendpd(auVar37,auVar20,2);
      dVar12 = auVar37._8_8_ + auVar37._8_8_;
      dVar5 = auVar20._0_8_ + auVar20._0_8_;
      uVar35 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar38._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar38._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      auVar30._8_4_ = SUB84(dVar5,0);
      auVar30._0_8_ = dVar12;
      auVar30._12_4_ = uVar35;
      auVar24._8_4_ = SUB84(dVar5,0);
      auVar24._0_8_ = dVar12;
      auVar24._12_4_ = uVar35;
      auVar19 = blendpd(auVar24,auVar38,2);
      auVar31._0_8_ = auVar30._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar12;
      auVar31._8_8_ = auVar38._0_8_ * auVar29._8_8_ - dVar6 * dVar5;
      auVar28 = blendpd(auVar29,auVar32,2);
      auVar29._8_4_ = SUB84(auVar31._8_8_,0);
      auVar29._0_8_ = auVar31._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
      auVar25._0_8_ = auVar19._0_8_ * dVar6 - auVar28._0_8_ * auVar38._0_8_;
      auVar25._8_8_ = auVar19._8_8_ * auVar32._8_8_ - auVar28._8_8_ * auVar38._8_8_;
      auVar32 = blendpd(auVar31,auVar25,2);
      dVar6 = dVar5 * dVar7 + dVar9 + auVar25._0_8_ +
              (pFVar1->ComponentTransform).Translation.XY.m128d_f64[1];
      pFVar3 = param_1->MyAnimInstanceProxy;
      local_100._s_0.Z =
           auVar38._0_8_ * dVar7 + dVar11 + auVar32._0_8_ +
           (pFVar1->ComponentTransform).Translation.ZW.m128d_f64[0];
      local_100._8_4_ = SUB84(dVar6,0);
      local_100._0_8_ =
           dVar12 * dVar7 + dVar8 + auVar29._8_8_ +
           (pFVar1->ComponentTransform).Translation.XY.m128d_f64[0];
      local_100._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->Links).AllocatorInstance.Data;
      auVar29 = *(undefined1 (*) [16])(pFVar3->ComponentTransform).Rotation.XY.m128d_f64;
      dVar9 = (pFVar3->ComponentTransform).Rotation.ZW.m128d_f64[1];
      local_c0 = *(double *)(pFVar2 + lVar18 + 0x80);
      dStack_c8 = *(double *)(pFVar2 + lVar18 + 0x78);
      dVar8 = local_c0 * (pFVar3->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      dVar12 = (pFVar3->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      local_d0 = *(double *)(pFVar2 + lVar18 + 0x70);
      local_b8 = *(undefined1 (*) [16])(pFVar3->ComponentTransform).Rotation.XY.m128d_f64;
      dVar6 = (pFVar3->ComponentTransform).Scale3D.XY.m128d_f64[0] * local_d0;
      dVar5 = (pFVar3->ComponentTransform).Scale3D.XY.m128d_f64[1] * dStack_c8;
      uVar35 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar32 = *(undefined1 (*) [16])(pFVar3->ComponentTransform).Rotation.ZW.m128d_f64;
      auVar39._8_4_ = SUB84(dVar5,0);
      auVar39._0_8_ = dVar6;
      auVar39._12_4_ = uVar35;
      dVar11 = auVar32._0_8_;
      auVar28 = blendpd(local_b8,auVar32,2);
      auVar40._0_8_ = auVar39._8_8_ * local_b8._0_8_ - local_b8._8_8_ * dVar6;
      auVar40._8_8_ = dVar8 * local_b8._8_8_ - dVar11 * dVar5;
      auVar21._8_4_ = SUB84(dVar5,0);
      auVar21._0_8_ = dVar6;
      auVar21._12_4_ = uVar35;
      auVar10._8_4_ = SUB84(dVar12,0);
      auVar10._0_8_ = dVar8;
      auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar19 = blendpd(auVar21,auVar10,2);
      auVar22._0_8_ = auVar19._0_8_ * dVar11 - auVar28._0_8_ * dVar8;
      auVar22._8_8_ = auVar19._8_8_ * auVar32._8_8_ - auVar28._8_8_ * dVar12;
      auVar19 = blendpd(auVar40,auVar22,2);
      dVar12 = auVar40._8_8_ + auVar40._8_8_;
      dVar7 = auVar22._0_8_ + auVar22._0_8_;
      uVar35 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar41._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar41._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      auVar33._8_4_ = SUB84(dVar7,0);
      auVar33._0_8_ = dVar12;
      auVar33._12_4_ = uVar35;
      auVar26._8_4_ = SUB84(dVar7,0);
      auVar26._0_8_ = dVar12;
      auVar26._12_4_ = uVar35;
      auVar19 = blendpd(auVar26,auVar41,2);
      auVar34._0_8_ = auVar33._8_8_ * auVar29._0_8_ - auVar29._8_8_ * dVar12;
      auVar34._8_8_ = auVar41._0_8_ * auVar29._8_8_ - dVar11 * dVar7;
      auVar29 = blendpd(auVar29,auVar32,2);
      auVar23._8_4_ = SUB84(auVar34._8_8_,0);
      auVar23._0_8_ = auVar34._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
      auVar27._0_8_ = auVar19._0_8_ * dVar11 - auVar29._0_8_ * auVar41._0_8_;
      auVar27._8_8_ = auVar19._8_8_ * auVar32._8_8_ - auVar29._8_8_ * auVar41._8_8_;
      auVar29 = blendpd(auVar34,auVar27,2);
      dVar11 = dVar7 * dVar9 + dVar5 + auVar27._0_8_ +
               (pFVar3->ComponentTransform).Translation.XY.m128d_f64[1];
      local_118._s_0.Z =
           auVar41._0_8_ * dVar9 + dVar8 + auVar29._0_8_ +
           (pFVar3->ComponentTransform).Translation.ZW.m128d_f64[0];
      local_118._8_4_ = SUB84(dVar11,0);
      local_118._0_8_ =
           dVar12 * dVar9 + dVar6 + auVar23._8_8_ +
           (pFVar3->ComponentTransform).Translation.XY.m128d_f64[0];
      local_118._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      FAnimInstanceProxy::AnimDrawDebugLine
                (param_1->MyAnimInstanceProxy,(TVector<double> *)&local_100._s_0,
                 (TVector<double> *)&local_118._s_0,param_2,false,fVar14,fVar13,SDPG_World);
      lVar18 = lVar18 + 0x70;
    } while ((int)uVar17 < param_1->NumLinks + -1);
  }
  return;
}

// FABRIK_ApplyLinkConstraints_Backward @ 14643f610

void __cdecl FIKChain::FABRIK_ApplyLinkConstraints_Backward(FIKChain *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  double dVar18;
  double dVar19;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0 [7];
  
  if ((0 < param_2) && (param_2 < param_1->NumLinks + -1)) {
    uVar12 = 0;
    if ((int)(param_2 - 1U) < (param_1->Links).ArrayNum) {
      uVar12 = ~(param_2 - 1U) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (param_1->Links).AllocatorInstance.Data;
    lVar15 = (longlong)param_2 * 0x70;
    uVar12 = 0;
    if (param_2 < (param_1->Links).ArrayNum) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar16 = (param_1->Links).AllocatorInstance.Data + (longlong)param_2 * 0x70;
    uVar14 = param_2 + 1;
    uVar12 = 0;
    if ((int)uVar14 < (param_1->Links).ArrayNum) {
      uVar12 = ~uVar14 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    dVar1 = *(double *)pFVar16;
    dVar2 = *(double *)(pFVar16 + 8);
    dVar3 = *(double *)(pFVar16 + 0x10);
    lVar13 = (longlong)(int)uVar14 * 0x70;
    pFVar5 = (param_1->Links).AllocatorInstance.Data;
    local_118._s_0.X = *(double *)(pFVar5 + lVar13) - dVar1;
    local_118._s_0.Y = *(double *)(pFVar5 + lVar13 + 8) - dVar2;
    local_118._s_0.Z = *(double *)(pFVar5 + lVar13 + 0x10) - dVar3;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_118._s_0,(TVector<double> *)&local_100._s_0,
               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    dVar10 = *(double *)(pFVar16 + 0x28) * local_100._s_0.Z -
             *(double *)(pFVar16 + 0x30) * local_100._s_0.Y;
    dVar9 = *(double *)(pFVar16 + 0x30) * local_100._s_0.X -
            *(double *)(pFVar16 + 0x20) * local_100._s_0.Z;
    local_e8._s_0.X = *(double *)(pFVar4 + lVar15 + -0x70) - dVar1;
    dVar8 = *(double *)(pFVar16 + 0x20) * local_100._s_0.Y -
            *(double *)(pFVar16 + 0x28) * local_100._s_0.X;
    local_e8._s_0.Y = *(double *)(pFVar4 + lVar15 + -0x68) - dVar2;
    local_e8._s_0.Z = *(double *)(pFVar4 + lVar15 + -0x60) - dVar3;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_d0[0]._s_0,
               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    dVar7 = (double)local_d0[0]._8_8_ * local_100._s_0.Y +
            (double)local_d0[0]._0_8_ * local_100._s_0.X +
            (double)local_d0[0]._16_8_ * local_100._s_0.Z;
    if ((0.0 < dVar9 * (double)local_d0[0]._8_8_ + dVar10 * (double)local_d0[0]._0_8_ +
               dVar8 * (double)local_d0[0]._16_8_) ||
       (fVar17 = cosf(param_1->MinRotationAngleRadians), (double)fVar17 < dVar7)) {
      if (dVar7 <= 0.0) {
        dVar7 = *(double *)(pFVar4 + lVar15 + -0x58);
        *(double *)(pFVar4 + lVar15 + -0x70) = dVar1 - dVar7 * local_100._s_0.X;
        *(double *)(pFVar4 + lVar15 + -0x68) = dVar2 - dVar7 * local_100._s_0.Y;
        *(double *)(pFVar4 + lVar15 + -0x60) = dVar3 - dVar7 * local_100._s_0.Z;
      }
      else {
        __libm_sse2_sincosf_();
        dVar18 = (double)(float)extraout_XMM0_Qa;
        dVar19 = (double)(float)((ulonglong)extraout_XMM0_Qa >> 0x20);
        dVar7 = *(double *)(pFVar4 + lVar15 + -0x58);
        *(double *)(pFVar4 + lVar15 + -0x70) =
             (dVar19 * local_100._s_0.X - dVar10 * dVar18) * dVar7 + dVar1;
        *(double *)(pFVar4 + lVar15 + -0x68) =
             (dVar19 * local_100._s_0.Y - dVar9 * dVar18) * dVar7 + dVar2;
        *(double *)(pFVar4 + lVar15 + -0x60) =
             (dVar19 * local_100._s_0.Z - dVar8 * dVar18) * dVar7 + dVar3;
      }
    }
  }
  return;
}

// FABRIK_ApplyLinkConstraints_Forward @ 14643fa70

void __cdecl FIKChain::FABRIK_ApplyLinkConstraints_Forward(FIKChain *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  double dVar18;
  double dVar19;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0 [7];
  
  if ((0 < param_2) && (param_2 < param_1->NumLinks + -1)) {
    uVar12 = 0;
    if ((int)(param_2 - 1U) < (param_1->Links).ArrayNum) {
      uVar12 = ~(param_2 - 1U) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (param_1->Links).AllocatorInstance.Data;
    lVar16 = (longlong)param_2 * 0x70;
    uVar12 = 0;
    if (param_2 < (param_1->Links).ArrayNum) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar15 = (param_1->Links).AllocatorInstance.Data + (longlong)param_2 * 0x70;
    uVar13 = param_2 + 1;
    uVar12 = 0;
    if ((int)uVar13 < (param_1->Links).ArrayNum) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    dVar1 = *(double *)pFVar15;
    dVar2 = *(double *)(pFVar15 + 8);
    local_118._s_0.X = *(double *)(pFVar4 + lVar16 + -0x70) - dVar1;
    dVar3 = *(double *)(pFVar15 + 0x10);
    pFVar5 = (param_1->Links).AllocatorInstance.Data;
    local_118._s_0.Y = *(double *)(pFVar4 + lVar16 + -0x68) - dVar2;
    lVar14 = (longlong)(int)uVar13 * 0x70;
    local_118._s_0.Z = *(double *)(pFVar4 + lVar16 + -0x60) - dVar3;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_118._s_0,(TVector<double> *)&local_100._s_0,
               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    dVar8 = *(double *)(pFVar15 + 0x28) * local_100._s_0.Z -
            *(double *)(pFVar15 + 0x30) * local_100._s_0.Y;
    dVar9 = *(double *)(pFVar15 + 0x30) * local_100._s_0.X -
            *(double *)(pFVar15 + 0x20) * local_100._s_0.Z;
    local_e8._s_0.X = *(double *)(pFVar5 + lVar14) - dVar1;
    dVar10 = *(double *)(pFVar15 + 0x20) * local_100._s_0.Y -
             *(double *)(pFVar15 + 0x28) * local_100._s_0.X;
    local_e8._s_0.Y = *(double *)(pFVar5 + lVar14 + 8) - dVar2;
    local_e8._s_0.Z = *(double *)(pFVar5 + lVar14 + 0x10) - dVar3;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_d0[0]._s_0,
               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    dVar7 = (double)local_d0[0]._8_8_ * local_100._s_0.Y +
            (double)local_d0[0]._0_8_ * local_100._s_0.X +
            (double)local_d0[0]._16_8_ * local_100._s_0.Z;
    if ((dVar9 * (double)local_d0[0]._8_8_ + dVar8 * (double)local_d0[0]._0_8_ +
         dVar10 * (double)local_d0[0]._16_8_ < 0.0) ||
       (fVar17 = cosf(param_1->MinRotationAngleRadians), (double)fVar17 < dVar7)) {
      if (dVar7 <= 0.0) {
        dVar7 = *(double *)(pFVar15 + 0x18);
        *(double *)(pFVar5 + lVar14) = dVar1 - dVar7 * local_100._s_0.X;
        *(double *)(pFVar5 + lVar14 + 8) = dVar2 - dVar7 * local_100._s_0.Y;
        *(double *)(pFVar5 + lVar14 + 0x10) = dVar3 - dVar7 * local_100._s_0.Z;
      }
      else {
        __libm_sse2_sincosf_();
        dVar7 = *(double *)(pFVar15 + 0x18);
        dVar19 = (double)(float)extraout_XMM0_Qa;
        dVar18 = (double)(float)((ulonglong)extraout_XMM0_Qa >> 0x20);
        *(double *)(pFVar5 + lVar14) = (dVar19 * dVar8 + dVar18 * local_100._s_0.X) * dVar7 + dVar1;
        *(double *)(pFVar5 + lVar14 + 8) =
             (dVar19 * dVar9 + dVar18 * local_100._s_0.Y) * dVar7 + dVar2;
        *(double *)(pFVar5 + lVar14 + 0x10) =
             (dVar19 * dVar10 + dVar18 * local_100._s_0.Z) * dVar7 + dVar3;
      }
    }
  }
  return;
}

// FABRIK_BackwardReach @ 14643fee0

void __cdecl FIKChain::FABRIK_BackwardReach(TVector<double> *param_1,FIKChain *param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  TConsoleVariableData<float> *pTVar10;
  bool bVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  float fVar23;
  double local_98;
  
  iVar15 = (param_2->Links).ArrayNum;
  uVar13 = iVar15 - 1;
  uVar16 = 0;
  if ((int)uVar13 < iVar15) {
    uVar16 = ~uVar13 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar10 = CVarAnimLegIKTargetReachStepPercent.Ref;
  lVar12 = (longlong)(param_2->Links).ArrayNum * 0x70;
  pFVar17 = (param_2->Links).AllocatorInstance.Data;
  dVar6 = (param_1->field0_0x0)._s_0.X - *(double *)(pFVar17 + lVar12 + -0x70);
  dVar7 = (param_1->field0_0x0)._s_0.Y - *(double *)(pFVar17 + lVar12 + -0x68);
  dVar8 = (param_1->field0_0x0)._s_0.Z - *(double *)(pFVar17 + lVar12 + -0x60);
  auVar18._0_8_ = dVar6 * dVar6;
  auVar18._8_8_ = 0;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar7 * dVar7 + auVar18._0_8_ + dVar8 * dVar8;
  auVar19 = sqrtpd(auVar18,auVar19);
  fVar23 = (float)auVar19._0_8_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_322bcc77 < fVar23) {
    dVar20 = (double)(__real_3f800000 / fVar23);
    uVar5 = dVar6 * dVar20;
    uVar22 = dVar7 * dVar20;
    uVar9 = dVar8 * dVar20;
  }
  bVar11 = IsInParallelGameThread();
  if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
    lVar12 = 0;
  }
  else {
    lVar12 = 4;
  }
  iVar15 = param_2->NumLinks + -2;
  dVar7 = (double)*(float *)((longlong)pTVar10->ShadowedValue + lVar12);
  dVar6 = (double)fVar23;
  if (__real_3fefae147ae147ae <= dVar7) {
    dVar7 = __real_3fefae147ae147ae;
  }
  if (dVar7 <= __real_3f847ae147ae147b) {
    dVar7 = __real_3f847ae147ae147b;
  }
  for (; -1 < iVar15; iVar15 = iVar15 + -1) {
    uVar13 = param_2->NumLinks - 2;
    uVar16 = 0;
    if ((int)uVar13 < (param_2->Links).ArrayNum) {
      uVar16 = ~uVar13 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (param_2->Links).ArrayNum;
    uVar14 = iVar2 - 1;
    pFVar17 = (param_2->Links).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x70;
    uVar16 = 0;
    if ((int)uVar14 < iVar2) {
      uVar16 = ~uVar14 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = (longlong)(param_2->Links).ArrayNum * 0x70;
    pFVar3 = (param_2->Links).AllocatorInstance.Data;
    dVar8 = (*(double *)(pFVar17 + 8) - *(double *)(pFVar3 + lVar12 + -0x68)) * (double)uVar22 +
            (*(double *)pFVar17 - *(double *)(pFVar3 + lVar12 + -0x70)) * (double)uVar5 +
            (*(double *)(pFVar17 + 0x10) - *(double *)(pFVar3 + lVar12 + -0x60)) * (double)uVar9;
    dVar20 = dVar6;
    if ((0.0 < dVar8) && (dVar20 = dVar8 * dVar7, dVar6 <= dVar20)) {
      dVar20 = dVar6;
    }
    dVar6 = dVar20;
  }
  iVar15 = (param_2->Links).ArrayNum;
  uVar13 = iVar15 - 1;
  uVar16 = 0;
  if ((int)uVar13 < iVar15) {
    uVar16 = ~uVar13 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar12 = (longlong)(param_2->Links).ArrayNum * 0x70;
  pFVar17 = (param_2->Links).AllocatorInstance.Data;
  *(double *)(pFVar17 + lVar12 + -0x70) =
       (double)uVar5 * dVar6 + *(double *)(pFVar17 + lVar12 + -0x70);
  *(double *)(pFVar17 + lVar12 + -0x68) =
       (double)uVar22 * dVar6 + *(double *)(pFVar17 + lVar12 + -0x68);
  *(double *)(pFVar17 + lVar12 + -0x60) =
       (double)uVar9 * dVar6 + *(double *)(pFVar17 + lVar12 + -0x60);
  dVar7 = __real_3e45798ee0000000;
  dVar6 = __real_3ff0000000000000;
  uVar16 = param_2->NumLinks - 1;
  if (0 < (int)uVar16) {
    iVar15 = param_2->NumLinks + -2;
    lVar12 = (longlong)(int)uVar16 * 0x70;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (param_2->Links).ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = (param_2->Links).AllocatorInstance.Data + lVar12;
      uVar13 = 0;
      if (iVar15 < (param_2->Links).ArrayNum) {
        uVar13 = -uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->Links).AllocatorInstance.Data;
      lVar1 = lVar12 + -0x70;
      dVar8 = *(double *)(pFVar17 + 8);
      dVar20 = *(double *)(pFVar17 + 0x10);
      uVar5 = *(double *)(pFVar3 + lVar1) - *(double *)pFVar17;
      uVar22 = *(double *)(pFVar3 + lVar12 + -0x68) - dVar8;
      local_98 = *(double *)(pFVar3 + lVar12 + -0x60) - dVar20;
      dVar21 = (double)uVar22 * (double)uVar22 + (double)uVar5 * (double)uVar5 + local_98 * local_98
      ;
      if (dVar21 != dVar6) {
        if (dVar7 <= dVar21) {
          dVar21 = dVar6 / SQRT(dVar21);
          uVar22 = (double)uVar22 * dVar21;
          local_98 = local_98 * dVar21;
          uVar5 = (double)uVar5 * dVar21;
        }
        else {
          local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      dVar21 = *(double *)(pFVar3 + lVar12 + -0x58);
      *(double *)(pFVar3 + lVar1) = (double)uVar5 * dVar21 + *(double *)pFVar17;
      *(double *)(pFVar3 + lVar12 + -0x68) = dVar21 * (double)uVar22 + dVar8;
      *(double *)(pFVar3 + lVar12 + -0x60) = dVar21 * local_98 + dVar20;
      if (param_2->bEnableRotationLimit != false) {
        FABRIK_ApplyLinkConstraints_Backward(param_2,uVar16);
      }
      uVar16 = uVar16 - 1;
      iVar15 = iVar15 + -1;
      lVar12 = lVar1;
    } while (0 < (int)uVar16);
  }
  return;
}

// FABRIK_ForwardReach @ 146440410

void __cdecl FIKChain::FABRIK_ForwardReach(TVector<double> *param_1,FIKChain *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  TConsoleVariableData<float> *pTVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar23 [16];
  double local_c8;
  
  if (((param_2->Links).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar11 = CVarAnimLegIKTargetReachStepPercent.Ref;
  dVar10 = __real_3e45798ee0000000;
  dVar9 = __real_3ff0000000000000;
  pFVar1 = (param_2->Links).AllocatorInstance.Data;
  dVar19 = (param_1->field0_0x0)._s_0.X - *(double *)pFVar1;
  dVar20 = (param_1->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 8);
  dVar5 = (param_1->field0_0x0)._s_0.Z - *(double *)(pFVar1 + 0x10);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar20 * dVar20 + dVar19 * dVar19 + dVar5 * dVar5;
  auVar23 = sqrtpd(unaff_XMM9,auVar4);
  dVar22 = auVar23._0_8_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_3e45798ee0000000 < dVar22) {
    dVar7 = __real_3ff0000000000000 / dVar22;
    uVar6 = dVar7 * dVar19;
    uVar21 = dVar7 * dVar20;
    uVar8 = dVar7 * dVar5;
  }
  bVar12 = IsInParallelGameThread();
  if (!bVar12) {
    bVar12 = IsInGameThread();
    lVar18 = 4;
    if (!bVar12) goto LAB_14644053f;
  }
  lVar18 = 0;
LAB_14644053f:
  lVar14 = 0x70;
  dVar5 = (double)*(float *)((longlong)pTVar11->ShadowedValue + lVar18);
  uVar16 = 1;
  uVar15 = 1;
  if (__real_3fefae147ae147ae <= dVar5) {
    dVar5 = __real_3fefae147ae147ae;
  }
  if (dVar5 <= __real_3f847ae147ae147b) {
    dVar5 = __real_3f847ae147ae147b;
  }
  uVar17 = 0;
  if (1 < param_2->NumLinks) {
    lVar18 = 0x70;
    do {
      uVar13 = uVar17;
      if ((int)uVar15 < (param_2->Links).ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_2->Links).AllocatorInstance.Data;
      if (((param_2->Links).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->Links).AllocatorInstance.Data;
      dVar19 = (*(double *)(pFVar1 + lVar18 + 8) - *(double *)(pFVar2 + 8)) * (double)uVar21 +
               (*(double *)(pFVar1 + lVar18) - *(double *)pFVar2) * (double)uVar6 +
               (*(double *)(pFVar1 + lVar18 + 0x10) - *(double *)(pFVar2 + 0x10)) * (double)uVar8;
      if (0.0 < dVar19) {
        dVar19 = dVar19 * dVar5;
        if (auVar23._0_8_ <= dVar19) {
          dVar19 = auVar23._0_8_;
        }
        auVar23._8_8_ = 0;
        auVar23._0_8_ = dVar19;
      }
      dVar22 = auVar23._0_8_;
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 0x70;
    } while ((int)uVar15 < param_2->NumLinks);
  }
  if (((param_2->Links).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_2->Links).AllocatorInstance.Data;
  *(double *)pFVar1 = (double)uVar6 * dVar22 + *(double *)pFVar1;
  *(double *)(pFVar1 + 8) = (double)uVar21 * dVar22 + *(double *)(pFVar1 + 8);
  *(double *)(pFVar1 + 0x10) = (double)uVar8 * dVar22 + *(double *)(pFVar1 + 0x10);
  if (1 < param_2->NumLinks) {
    do {
      uVar15 = uVar17;
      if ((int)(uVar16 - 1) < (param_2->Links).ArrayNum) {
        uVar15 = -uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_2->Links).AllocatorInstance.Data;
      uVar15 = uVar17;
      if ((int)uVar16 < (param_2->Links).ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->Links).AllocatorInstance.Data;
      dVar5 = *(double *)(pFVar1 + lVar14 + -0x68);
      dVar19 = *(double *)(pFVar1 + lVar14 + -0x60);
      uVar6 = *(double *)(pFVar2 + lVar14) - *(double *)(pFVar1 + lVar14 + -0x70);
      uVar21 = *(double *)(pFVar2 + lVar14 + 8) - dVar5;
      local_c8 = *(double *)(pFVar2 + lVar14 + 0x10) - dVar19;
      dVar20 = (double)uVar21 * (double)uVar21 + (double)uVar6 * (double)uVar6 + local_c8 * local_c8
      ;
      if (dVar20 != dVar9) {
        if (dVar10 <= dVar20) {
          dVar20 = dVar9 / SQRT(dVar20);
          uVar21 = (double)uVar21 * dVar20;
          local_c8 = local_c8 * dVar20;
          uVar6 = (double)uVar6 * dVar20;
        }
        else {
          local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      dVar20 = *(double *)(pFVar1 + lVar14 + -0x58);
      *(double *)(pFVar2 + lVar14) = (double)uVar6 * dVar20 + *(double *)(pFVar1 + lVar14 + -0x70);
      *(double *)(pFVar2 + lVar14 + 8) = (double)uVar21 * dVar20 + dVar5;
      *(double *)(pFVar2 + lVar14 + 0x10) = local_c8 * dVar20 + dVar19;
      if (param_2->bEnableRotationLimit != false) {
        FABRIK_ApplyLinkConstraints_Forward(param_2,uVar16);
      }
      uVar16 = uVar16 + 1;
      lVar14 = lVar14 + 0x70;
    } while ((int)uVar16 < param_2->NumLinks);
  }
  return;
}

// InitializeFromLegData @ 146458230

void __thiscall
FIKChain::InitializeFromLegData(FIKChain *this,FAnimLegIKData *param_1,FAnimInstanceProxy *param_2)

{
  int *piVar1;
  FAnimLegIKDefinition **ppFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  TVector<double>_u_0 *pTVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  longlong local_res8;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  TVector<double> local_78 [2];
  
  uVar20 = param_1->NumBones;
  uVar19 = 0;
  uVar24 = 0;
  if ((this->Links).ArrayNum != uVar20) {
    dStack_118 = 0.0;
    local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_c8 = 0.0;
    local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    piVar1 = &(this->Links).ArrayMax;
    (this->Links).ArrayNum = 0;
    if (*piVar1 != uVar20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,uVar20,(ForAnyElementType *)this,0,piVar1);
    }
    uVar22 = uVar19;
    if (0 < (int)uVar20) {
      do {
        pFVar4 = (this->Links).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_130) &&
            ((FScriptContainerElement *)&local_130 < pFVar4 + (longlong)*piVar1 * 0x70)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar16 = (this->Links).ArrayNum;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x870,(ForAnyElementType *)this,piVar1);
        }
        uVar21 = (int)uVar22 + 1;
        (this->Links).ArrayNum = iVar16 + 1;
        lVar18 = (longlong)iVar16 * 0x70;
        pFVar4 = (this->Links).AllocatorInstance.Data;
        *(double *)(pFVar4 + lVar18) = local_130;
        *(double *)(pFVar4 + lVar18 + 8) = dStack_128;
        *(double *)(pFVar4 + lVar18 + 0x10) = local_120;
        *(double *)(pFVar4 + lVar18 + 0x10 + 8) = dStack_118;
        *(double *)(pFVar4 + lVar18 + 0x20) = local_110;
        *(double *)(pFVar4 + lVar18 + 0x20 + 8) = dStack_108;
        *(double *)(pFVar4 + lVar18 + 0x30) = local_100;
        *(double *)(pFVar4 + lVar18 + 0x30 + 8) = dStack_f8;
        *(double *)(pFVar4 + lVar18 + 0x40) = dStack_f0;
        *(double *)(pFVar4 + lVar18 + 0x40 + 8) = dStack_e8;
        *(double *)(pFVar4 + lVar18 + 0x50) = local_e0;
        *(double *)(pFVar4 + lVar18 + 0x50 + 8) = dStack_d8;
        *(double *)(pFVar4 + lVar18 + 0x60) = local_d0;
        *(double *)(pFVar4 + lVar18 + 0x60 + 8) = dStack_c8;
        uVar22 = (ulonglong)uVar21;
      } while ((int)uVar21 < (int)uVar20);
    }
  }
  this->TotalChainLength = 0.0;
  if ((param_1->NumBones < 2) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InLegData.NumBones > 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_LegIK.cpp"
                          ,0xe3,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar16 = param_1->NumBones;
  if (0 < iVar16 + -1) {
    local_res8 = 0;
    uVar22 = uVar19;
    do {
      uVar21 = (uint)uVar19;
      uVar20 = uVar24;
      if ((int)uVar21 < (param_1->FKLegBoneTransforms).ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
      pFVar4 = pFVar5 + local_res8 + 0x20;
      dVar10 = *(double *)pFVar4;
      dVar11 = *(double *)(pFVar4 + 8);
      dVar12 = *(double *)(pFVar5 + local_res8 + 0x30);
      uVar23 = uVar21 + 1;
      uVar20 = uVar24;
      if ((int)uVar23 < (param_1->FKLegBoneTransforms).ArrayNum) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
      pFVar4 = pFVar5 + local_res8 + 0x80;
      local_a8 = *(double *)pFVar4;
      dStack_a0 = *(double *)(pFVar4 + 8);
      local_98 = *(double *)(pFVar5 + local_res8 + 0x90);
      dVar7 = local_a8 - dVar10;
      dVar9 = dStack_a0 - dVar11;
      dVar8 = local_98 - dVar12;
      uVar20 = uVar24;
      if ((int)uVar21 < (this->Links).ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      dVar7 = SQRT(dVar9 * dVar9 + dVar7 * dVar7 + dVar8 * dVar8);
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->Links).AllocatorInstance.Data;
      uVar19 = (ulonglong)uVar23;
      *(double *)(pFVar4 + uVar22) = dVar10;
      *(double *)(pFVar4 + uVar22 + 8) = dVar11;
      *(double *)(pFVar4 + uVar22 + 0x10) = dVar12;
      *(double *)(pFVar4 + uVar22 + 0x18) = dVar7;
      uVar22 = uVar22 + 0x70;
      this->TotalChainLength = dVar7 + this->TotalChainLength;
      iVar16 = param_1->NumBones;
      local_res8 = local_res8 + 0x60;
    } while ((int)uVar23 < iVar16 + -1);
  }
  uVar20 = iVar16 - 1;
  uVar23 = ~uVar20 >> 0x1f;
  uVar21 = 0;
  uVar24 = uVar21;
  if ((int)uVar20 < (param_1->FKLegBoneTransforms).ArrayNum) {
    uVar24 = uVar23;
  }
  if ((uVar24 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (param_1->FKLegBoneTransforms).AllocatorInstance.Data;
  lVar18 = (longlong)(int)uVar20 * 0x60;
  uVar3 = *(undefined8 *)(pFVar4 + lVar18 + 0x30);
  pFVar4 = pFVar4 + lVar18 + 0x20;
  uVar13 = *(undefined8 *)pFVar4;
  uVar14 = *(undefined8 *)(pFVar4 + 8);
  local_80 = uVar3;
  local_90 = uVar13;
  uStack_88 = uVar14;
  uVar24 = uVar21;
  if ((int)uVar20 < (this->Links).ArrayNum) {
    uVar24 = uVar23;
  }
  if ((uVar24 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (this->Links).AllocatorInstance.Data;
  lVar18 = (longlong)(int)uVar20 * 0x70;
  pFVar4 = pFVar5 + lVar18;
  *(undefined8 *)pFVar4 = uVar13;
  *(undefined8 *)(pFVar4 + 8) = uVar14;
  *(undefined8 *)(pFVar5 + lVar18 + 0x10) = uVar3;
  uVar24 = uVar21;
  if ((int)uVar20 < (this->Links).ArrayNum) {
    uVar24 = uVar23;
  }
  if ((uVar24 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(undefined8 *)((this->Links).AllocatorInstance.Data + lVar18 + 0x18) = 0;
  iVar16 = (this->Links).ArrayNum;
  this->NumLinks = iVar16;
  if ((iVar16 != param_1->NumBones) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumLinks == InLegData.NumBones",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_LegIK.cpp"
                          ,0xf7,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  ppFVar2 = &param_1->LegDefPtr;
  if (param_1->LegDefPtr != (FAnimLegIKDefinition *)0x0) {
    bVar15 = param_1->LegDefPtr->bEnableRotationLimit;
    this->bEnableRotationLimit = bVar15;
    if (bVar15 != false) {
      fVar25 = (*ppFVar2)->MinRotationAngle;
      if (__real_42b40000 <= (*ppFVar2)->MinRotationAngle) {
        fVar25 = __real_42b40000;
      }
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      this->MinRotationAngleRadians = fVar25 * __real_3c8efa35;
    }
    if (((*ppFVar2)->HingeRotationAxis).Value == '\0') {
      pTVar17 = &local_c0;
      local_c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      iVar16 = (param_1->FKLegBoneTransforms).ArrayNum;
      uVar20 = iVar16 - 1;
      if ((int)uVar20 < iVar16) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar17 = &UE::Math::TTransform<double>::GetUnitAxis
                           ((TTransform<double> *)
                            ((param_1->FKLegBoneTransforms).AllocatorInstance.Data +
                            (longlong)((param_1->FKLegBoneTransforms).ArrayNum + -1) * 0x60),
                            local_78,(uint)((*ppFVar2)->HingeRotationAxis).Value)->field0_0x0;
    }
    dVar10 = (pTVar17->_s_0).Y;
    (this->HingeRotationAxis).field0_0x0._s_0.X =
         (((TVector<double>_u_0 *)&(pTVar17->_s_0).X)->_s_0).X;
    (this->HingeRotationAxis).field0_0x0._s_0.Y = dVar10;
    (this->HingeRotationAxis).field0_0x0._s_0.Z = (pTVar17->_s_0).Z;
  }
  this->MyAnimInstanceProxy = param_2;
  this->bInitialized = true;
  return;
}

// OrientAllLinksToDirection @ 14645f1d0

void __thiscall FIKChain::OrientAllLinksToDirection(FIKChain *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  
  uVar5 = (this->Links).ArrayNum;
  uVar15 = uVar5 - 2;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 * 0x70;
    do {
      uVar5 = uVar5 - 1;
      uVar14 = 0;
      if ((int)uVar5 < (this->Links).ArrayNum) {
        uVar14 = ~uVar5 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->Links).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar15 < (this->Links).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->Links).AllocatorInstance.Data;
      dVar11 = (param_1->field0_0x0)._s_0.Y;
      dVar1 = *(double *)(pFVar7 + lVar16 + 0x18);
      dVar2 = *(double *)(pFVar7 + lVar16 + 0x18);
      dVar3 = (param_1->field0_0x0)._s_0.X;
      uVar14 = 0;
      if ((int)uVar15 < (this->Links).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      pFVar7 = pFVar6 + lVar16 + 0x78;
      dVar12 = *(double *)pFVar7;
      dVar4 = *(double *)(pFVar6 + lVar16 + 0x70);
      dVar10 = dVar1 * (param_1->field0_0x0)._s_0.Z + *(double *)(pFVar7 + 8);
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->Links).AllocatorInstance.Data;
      *(double *)(pFVar6 + lVar16) = dVar2 * dVar3 + dVar4;
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = dVar1 * dVar11 + dVar12;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(pFVar6 + lVar16 + 8) = auVar9;
      lVar16 = lVar16 + -0x70;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  return;
}

// ReachTarget @ 146462290

void __thiscall
FIKChain::ReachTarget
          (FIKChain *this,TVector<double> *param_1,double param_2,int param_3,float param_4,
          float param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  TVector<double> local_40 [2];
  
  if (this->bInitialized != false) {
    iVar2 = (this->Links).ArrayNum;
    lVar10 = 0;
    uVar8 = iVar2 - 1;
    uVar7 = 0;
    if ((int)uVar8 < iVar2) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar9 = (longlong)(this->Links).ArrayNum * 0x70;
    pFVar3 = (this->Links).AllocatorInstance.Data;
    pFVar1 = pFVar3 + lVar9 + -0x70;
    local_88._s_0.X = (double)*(undefined8 *)pFVar1;
    local_88._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
    local_88._s_0.Z = (double)*(undefined8 *)(pFVar3 + lVar9 + -0x60);
    local_70._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_70._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_70._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    if ((__real_3f800000 <= param_4) || (param_5 <= 0.0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      AnimationCore::SoftenIKEffectorPosition
                ((TVector<double> *)&local_88._s_0,(float)this->TotalChainLength,param_4,param_5,
                 (TVector<double> *)&local_70._s_0);
    }
    pTVar5 = CVarAnimLegIKTwoBone.Ref;
    local_58._s_0.X = (param_1->field0_0x0)._s_0.X - local_88._s_0.X;
    local_58._s_0.Y = (param_1->field0_0x0)._s_0.Y - local_88._s_0.Y;
    local_58._s_0.Z = (param_1->field0_0x0)._s_0.Z - local_88._s_0.Z;
    if ((this->NumLinks < 3) ||
       ((this->TotalChainLength * this->TotalChainLength <=
         local_58._s_0.Y * local_58._s_0.Y + local_58._s_0.X * local_58._s_0.X +
         local_58._s_0.Z * local_58._s_0.Z && (!bVar6)))) {
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_58._s_0,local_40,__real_3e45798ee0000000,
                 &UE::Math::TVector<double>::ZeroVector);
      OrientAllLinksToDirection(this,local_40);
    }
    else {
      if (this->NumLinks == 3) {
        bVar6 = IsInParallelGameThread();
        if ((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) {
          lVar10 = 4;
        }
        if (*(int *)((longlong)pTVar5->ShadowedValue + lVar10) == 1) {
          SolveTwoBoneIK(this,(TVector<double> *)&local_70._s_0);
          return;
        }
      }
      SolveFABRIK(this,(TVector<double> *)&local_70._s_0,param_2,param_3);
    }
  }
  return;
}

// SolveFABRIK @ 14646cbe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FIKChain::SolveFABRIK(FIKChain *this,TVector<double> *param_1,double param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TConsoleVariableData<int> *pTVar16;
  TConsoleVariableData<float> *pTVar17;
  ForAnyElementType FVar18;
  bool bVar19;
  bool bVar20;
  double *pdVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int local_res8;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  double local_1d8;
  double local_1d0;
  FIKChain local_1c8;
  FIKChain local_178;
  FString local_128;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  
  iVar29 = (this->Links).ArrayNum;
  if (param_2 <= __real_3f1a36e2eb1c432d) {
    param_2 = __real_3f1a36e2eb1c432d;
  }
  uVar28 = iVar29 - 1;
  uVar26 = 0;
  if ((int)uVar28 < iVar29) {
    uVar26 = ~uVar28 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar17 = CVarAnimLegIKPullDistribution.Ref;
  lVar23 = (longlong)(this->Links).ArrayNum * 0x70;
  pFVar4 = (this->Links).AllocatorInstance.Data;
  pFVar1 = pFVar4 + lVar23 + -0x70;
  local_1f0._s_0.X = (double)*(undefined8 *)pFVar1;
  local_1f0._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
  local_1f0._s_0.Z = (double)*(undefined8 *)(pFVar4 + lVar23 + -0x60);
  bVar19 = IsInParallelGameThread();
  if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
    lVar23 = 0;
  }
  else {
    lVar23 = 4;
  }
  uVar37 = SUB84(__real_3ff0000000000000,0);
  uVar38 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar35 = (double)*(float *)((longlong)pTVar17->ShadowedValue + lVar23);
  if (__real_3ff0000000000000 <= dVar35) {
    dVar35 = __real_3ff0000000000000;
  }
  if (dVar35 <= 0.0) {
    dVar35 = 0.0;
  }
  local_1d0 = dVar35;
  if (((this->Links).ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = (this->Links).AllocatorInstance.Data;
  dVar10 = (param_1->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 8);
  dVar30 = (param_1->field0_0x0)._s_0.X - *(double *)pFVar1;
  dVar6 = (param_1->field0_0x0)._s_0.Z - *(double *)(pFVar1 + 0x10);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = dVar10 * dVar10 + dVar30 * dVar30 + dVar6 * dVar6;
  auVar39 = sqrtpd(unaff_XMM14,auVar40);
  local_1d8 = auVar39._0_8_;
  if ((param_2 < local_1d8) || (this->bEnableRotationLimit != false)) {
    uVar26 = 1;
    local_res8 = 1;
    if ((this->bEnableRotationLimit != false) &&
       (FindPlaneNormal((TVector<double> *)&local_208._s_0,&this->Links,
                        (TVector<double> *)&local_1f0._s_0,param_1), dVar6 = __real_3e45798ee0000000
       , 1 < this->NumLinks + -1)) {
      lVar23 = 0xe0;
      iVar29 = 2;
      do {
        uVar28 = 0;
        if (iVar29 + -2 < (this->Links).ArrayNum) {
          uVar28 = -uVar26 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = (this->Links).AllocatorInstance.Data;
        uVar28 = 0;
        if ((int)uVar26 < (this->Links).ArrayNum) {
          uVar28 = ~uVar26 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->Links).AllocatorInstance.Data;
        uVar28 = 0;
        if ((int)(uVar26 + 1) < (this->Links).ArrayNum) {
          uVar28 = ~(uVar26 + 1) >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar32 = *(double *)(pFVar1 + lVar23 + -0xe0) - *(double *)(pFVar4 + lVar23 + -0x70);
        dVar10 = *(double *)(pFVar1 + lVar23 + -0xd8) - *(double *)(pFVar4 + lVar23 + -0x68);
        dVar30 = *(double *)(pFVar1 + lVar23 + -0xd0) - *(double *)(pFVar4 + lVar23 + -0x60);
        pFVar1 = (this->Links).AllocatorInstance.Data;
        dVar35 = dVar10 * dVar10 + dVar32 * dVar32 + dVar30 * dVar30;
        uVar33 = dVar32;
        uVar12 = dVar10;
        uVar13 = dVar30;
        if ((dVar35 != (double)CONCAT44(uVar38,uVar37)) &&
           (uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar6 <= dVar35)) {
          local_100 = (double)CONCAT44(uVar38,uVar37) / SQRT(dVar35);
          uVar33 = dVar32 * local_100;
          uVar12 = dVar10 * local_100;
          uVar13 = dVar30 * local_100;
        }
        dVar10 = *(double *)(pFVar1 + lVar23 + 8) - *(double *)(pFVar4 + lVar23 + -0x68);
        dVar30 = *(double *)(pFVar1 + lVar23 + 0x10) - *(double *)(pFVar4 + lVar23 + -0x60);
        dVar32 = *(double *)(pFVar1 + lVar23) - *(double *)(pFVar4 + lVar23 + -0x70);
        dVar35 = dVar10 * dVar10 + dVar32 * dVar32 + dVar30 * dVar30;
        uVar34 = dVar32;
        uVar14 = dVar30;
        uVar15 = dVar10;
        if ((dVar35 != __real_3ff0000000000000) &&
           (uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, dVar6 <= dVar35)) {
          local_f8 = __real_3ff0000000000000 / SQRT(dVar35);
          uVar34 = dVar32 * local_f8;
          uVar14 = dVar30 * local_f8;
          uVar15 = dVar10 * local_f8;
        }
        if ((local_208._s_0.Y * (double)uVar13 - local_208._s_0.Z * (double)uVar12) * (double)uVar34
            + (local_208._s_0.Z * (double)uVar33 - local_208._s_0.X * (double)uVar13) *
              (double)uVar15 +
            (local_208._s_0.X * (double)uVar12 - local_208._s_0.Y * (double)uVar33) * (double)uVar14
            <= __real_0000000000000000) {
          uVar28 = (uint)__xmm_80000000000000008000000000000000;
          uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          pdVar21 = &local_118;
          local_118 = (double)CONCAT44((uint)((ulonglong)local_208._0_8_ >> 0x20) ^ uVar27,
                                       SUB84(local_208._s_0.X,0) ^ uVar28);
          local_110 = CONCAT44((uint)((ulonglong)local_208._8_8_ >> 0x20) ^ uVar27,
                               SUB84(local_208._s_0.Y,0) ^ uVar28);
          local_108 = CONCAT44((uint)((ulonglong)local_208._16_8_ >> 0x20) ^ uVar27,
                               SUB84(local_208._s_0.Z,0) ^ uVar28);
        }
        else {
          local_f0 = local_208._s_0.X;
          dStack_e8 = local_208._s_0.Y;
          pdVar21 = &local_f0;
          local_e0 = local_208._s_0.Z;
        }
        dVar10 = pdVar21[1];
        uVar26 = uVar26 + 1;
        dVar35 = pdVar21[2];
        uVar37 = SUB84(__real_3ff0000000000000,0);
        uVar38 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        *(double *)(pFVar4 + lVar23 + -0x50) = *pdVar21;
        *(double *)(pFVar4 + lVar23 + -0x50 + 8) = dVar10;
        *(double *)(pFVar4 + lVar23 + -0x40) = dVar35;
        lVar23 = lVar23 + 0x70;
        iVar29 = iVar29 + 1;
      } while ((int)uVar26 < this->NumLinks + -1);
      auVar39._8_8_ = 0;
      auVar39._0_8_ = local_1d8;
      dVar35 = local_1d0;
    }
    pTVar16 = CVarAnimNodeLegIKDebug.Ref;
    bVar19 = IsInParallelGameThread();
    if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
      lVar23 = 0;
    }
    else {
      lVar23 = 4;
    }
    iVar29 = *(int *)((longlong)pTVar16->ShadowedValue + lVar23);
    if (iVar29 == 1) {
      DrawDebugIKChain(this,&FColor::Magenta);
    }
    if (((this->Links).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar1 = (this->Links).AllocatorInstance.Data;
    iVar24 = (this->Links).ArrayNum;
    dVar6 = (param_1->field0_0x0)._s_0.X;
    dVar10 = (param_1->field0_0x0)._s_0.Y;
    dVar30 = *(double *)pFVar1;
    dVar32 = *(double *)(pFVar1 + 8);
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    uVar28 = iVar24 - 1;
    dVar31 = *(double *)(pFVar1 + 0x10);
    uVar26 = 0;
    if ((int)uVar28 < iVar24) {
      uVar26 = ~uVar28 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar7 = (double)CONCAT44(uVar38,uVar37) - dVar35;
    uVar26 = 0;
    lVar23 = (longlong)(this->Links).ArrayNum * 0x70;
    pFVar1 = (this->Links).AllocatorInstance.Data;
    auVar36._0_8_ =
         (local_1f0._s_0.X - *(double *)(pFVar1 + lVar23 + -0x70)) * dVar7 +
         (dVar6 - dVar30) * dVar35;
    auVar36._8_8_ = 0;
    dVar6 = local_1f0._s_0.Y - *(double *)(pFVar1 + lVar23 + -0x68);
    dVar30 = local_1f0._s_0.Z - *(double *)(pFVar1 + lVar23 + -0x60);
    if (0 < this->NumLinks) {
      lVar23 = 0;
      do {
        uVar28 = 0;
        if ((int)uVar26 < (this->Links).ArrayNum) {
          uVar28 = ~uVar26 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = (this->Links).AllocatorInstance.Data;
        uVar26 = uVar26 + 1;
        *(double *)(pFVar1 + lVar23) = auVar36._0_8_ + *(double *)(pFVar1 + lVar23);
        *(double *)(pFVar1 + lVar23 + 8) =
             dVar6 * dVar7 + (dVar10 - dVar32) * dVar35 + *(double *)(pFVar1 + lVar23 + 8);
        *(double *)(pFVar1 + lVar23 + 0x10) =
             dVar30 * dVar7 + (dVar2 - dVar31) * dVar35 + *(double *)(pFVar1 + lVar23 + 0x10);
        lVar23 = lVar23 + 0x70;
      } while ((int)uVar26 < this->NumLinks);
    }
    dVar10 = _UNK_150689678;
    dVar6 = ___xmm_3fe00000000000003fe0000000000000;
    dVar35 = __real_3fe0000000000000;
    iVar24 = 1;
    if (1 < param_3) {
      iVar24 = param_3;
    }
    local_1d8 = (double)CONCAT44(local_1d8._4_4_,iVar24);
    do {
      uVar25 = 0;
      if ((iVar29 == 1) && (local_res8 == iVar24 + -1)) {
        bVar19 = true;
        DrawDebugIKChain(this,&FColor::Red);
      }
      else {
        bVar19 = false;
      }
      pTVar16 = CVarAnimLegIKAveragePull.Ref;
      dVar30 = auVar39._0_8_;
      if (this->NumLinks < 4) {
LAB_14646da2d:
        FABRIK_ForwardReach(param_1,this);
        if (bVar19) {
          DrawDebugIKChain(this,&FColor::Green);
          FABRIK_BackwardReach((TVector<double> *)&local_1f0._s_0,this);
          DrawDebugIKChain(this,&FColor::Blue);
        }
        else {
          FABRIK_BackwardReach((TVector<double> *)&local_1f0._s_0,this);
        }
      }
      else {
        bVar20 = IsInParallelGameThread();
        if (bVar20) {
LAB_14646d442:
          uVar22 = uVar25;
        }
        else {
          bVar20 = IsInGameThread();
          uVar22 = 4;
          if (bVar20) goto LAB_14646d442;
        }
        if ((*(int *)((longlong)pTVar16->ShadowedValue + uVar22) != 1) ||
           (dVar30 < (double)CONCAT44(uVar38,uVar37) || dVar30 == (double)CONCAT44(uVar38,uVar37)))
        goto LAB_14646da2d;
        local_178.Links.ArrayNum = (this->Links).ArrayNum;
        lVar23 = (longlong)local_178.Links.ArrayNum;
        pFVar1 = (this->Links).AllocatorInstance.Data;
        local_178.Links.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_178.Links.ArrayNum == 0) {
          local_178.Links.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,8,local_178.Links.ArrayNum,0,(ForAnyElementType *)&local_178,
                     local_178.Links.ArrayNum,&local_178.Links.ArrayMax);
          memcpy(local_178.Links.AllocatorInstance.Data,pFVar1,lVar23 * 0x70);
        }
        local_178.MinRotationAngleRadians = this->MinRotationAngleRadians;
        local_178.MyAnimInstanceProxy = this->MyAnimInstanceProxy;
        local_178.HingeRotationAxis.field0_0x0._s_0.Z = (this->HingeRotationAxis).field0_0x0._s_0.Z;
        local_178.NumLinks = this->NumLinks;
        local_178.TotalChainLength = this->TotalChainLength;
        local_178.bEnableRotationLimit = this->bEnableRotationLimit;
        local_178.HingeRotationAxis.field0_0x0._s_0.X = (this->HingeRotationAxis).field0_0x0._s_0.X;
        local_178.HingeRotationAxis.field0_0x0._s_0.Y = (this->HingeRotationAxis).field0_0x0._s_0.Y;
        local_178.bInitialized = this->bInitialized;
        FABRIK_ForwardReach(param_1,&local_178);
        local_1c8.Links.ArrayNum = (this->Links).ArrayNum;
        lVar23 = (longlong)local_1c8.Links.ArrayNum;
        pFVar1 = (this->Links).AllocatorInstance.Data;
        local_1c8.Links.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_1c8.Links.ArrayNum == 0) {
          local_1c8.Links.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,8,local_1c8.Links.ArrayNum,0,(ForAnyElementType *)&local_1c8,
                     local_1c8.Links.ArrayNum,&local_1c8.Links.ArrayMax);
          memcpy(local_1c8.Links.AllocatorInstance.Data,pFVar1,lVar23 * 0x70);
        }
        local_1c8.MinRotationAngleRadians = this->MinRotationAngleRadians;
        local_1c8.MyAnimInstanceProxy = this->MyAnimInstanceProxy;
        local_1c8.HingeRotationAxis.field0_0x0._s_0.Z = (this->HingeRotationAxis).field0_0x0._s_0.Z;
        local_1c8.NumLinks = this->NumLinks;
        local_1c8.TotalChainLength = this->TotalChainLength;
        local_1c8.bEnableRotationLimit = this->bEnableRotationLimit;
        local_1c8.HingeRotationAxis.field0_0x0._s_0.X = (this->HingeRotationAxis).field0_0x0._s_0.X;
        local_1c8.HingeRotationAxis.field0_0x0._s_0.Y = (this->HingeRotationAxis).field0_0x0._s_0.Y;
        local_1c8.bInitialized = this->bInitialized;
        FABRIK_BackwardReach((TVector<double> *)&local_1f0._s_0,&local_1c8);
        uVar22 = uVar25;
        if (0 < this->NumLinks) {
          do {
            uVar28 = (uint)uVar25;
            uVar27 = ~uVar28 >> 0x1f;
            uVar26 = 0;
            if ((int)uVar28 < local_178.Links.ArrayNum) {
              uVar26 = uVar27;
            }
            if ((uVar26 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar18.Data = local_178.Links.AllocatorInstance.Data;
            uVar26 = 0;
            if ((int)uVar28 < local_1c8.Links.ArrayNum) {
              uVar26 = uVar27;
            }
            if ((uVar26 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar1 = FVar18.Data + uVar22 + 8;
            dVar32 = *(double *)pFVar1;
            dVar2 = *(double *)(local_1c8.Links.AllocatorInstance.Data + uVar22 + 8);
            uVar26 = 0;
            if ((int)uVar28 < (this->Links).ArrayNum) {
              uVar26 = uVar27;
            }
            auVar36._0_8_ =
                 (*(double *)(FVar18.Data + uVar22) +
                 *(double *)(local_1c8.Links.AllocatorInstance.Data + uVar22)) * dVar35;
            auVar36._8_8_ = 0;
            dVar31 = (*(double *)(local_1c8.Links.AllocatorInstance.Data + uVar22 + 8 + 8) +
                     *(double *)(pFVar1 + 8)) * dVar10;
            if ((uVar26 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar1 = (this->Links).AllocatorInstance.Data;
            uVar25 = (ulonglong)(uVar28 + 1);
            *(double *)(pFVar1 + uVar22) = auVar36._0_8_;
            auVar11._8_4_ = SUB84(dVar31,0);
            auVar11._0_8_ = (dVar2 + dVar32) * dVar6;
            auVar11._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
            *(undefined1 (*) [16])(pFVar1 + uVar22 + 8) = auVar11;
            uVar22 = uVar22 + 0x70;
          } while ((int)(uVar28 + 1) < this->NumLinks);
        }
        if (bVar19) {
          DrawDebugIKChain(&local_178,&FColor::Green);
          DrawDebugIKChain(&local_1c8,&FColor::Blue);
        }
        if (local_1c8.Links.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Links.AllocatorInstance.Data);
        }
        if (local_178.Links.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Links.AllocatorInstance.Data);
        }
        iVar24 = local_1d8._0_4_;
      }
      if (((this->Links).ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = (this->Links).AllocatorInstance.Data;
      iVar3 = (this->Links).ArrayNum;
      dVar2 = (param_1->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 8);
      dVar31 = (param_1->field0_0x0)._s_0.X - *(double *)pFVar1;
      uVar28 = iVar3 - 1;
      dVar32 = (param_1->field0_0x0)._s_0.Z - *(double *)(pFVar1 + 0x10);
      uVar26 = 0;
      if ((int)uVar28 < iVar3) {
        uVar26 = ~uVar28 >> 0x1f;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar2 * dVar2 + dVar31 * dVar31 + dVar32 * dVar32;
      auVar36 = sqrtpd(auVar36,auVar8);
      if ((uVar26 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = (this->Links).AllocatorInstance.Data;
      iVar3 = (this->Links).ArrayNum;
      lVar23 = (longlong)iVar3 * 0x70;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (local_1f0._s_0.Y - *(double *)(pFVar1 + lVar23 + -0x68)) *
                     (local_1f0._s_0.Y - *(double *)(pFVar1 + lVar23 + -0x68)) +
                     (local_1f0._s_0.X - *(double *)(pFVar1 + lVar23 + -0x70)) *
                     (local_1f0._s_0.X - *(double *)(pFVar1 + lVar23 + -0x70)) +
                     (local_1f0._s_0.Z - *(double *)(pFVar1 + lVar23 + -0x60)) *
                     (local_1f0._s_0.Z - *(double *)(pFVar1 + lVar23 + -0x60));
      auVar40 = sqrtpd(auVar39,auVar9);
      auVar39._8_8_ = auVar40._8_8_;
      auVar39._0_8_ = auVar40._0_8_ + auVar36._0_8_;
    } while (((auVar39._0_8_ <= dVar30) && (param_2 < auVar39._0_8_)) &&
            (local_res8 = local_res8 + 1, local_res8 < iVar24));
    uVar26 = 0;
    if ((int)(iVar3 - 1U) < iVar3) {
      uVar26 = ~(iVar3 - 1U) >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar23 = (longlong)(this->Links).ArrayNum * 0x70;
    pFVar1 = (this->Links).AllocatorInstance.Data;
    uVar26 = SUB84(*(double *)(pFVar1 + lVar23 + -0x70) - local_1f0._s_0.X,0) &
             (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar28 = (uint)((ulonglong)(*(double *)(pFVar1 + lVar23 + -0x70) - local_1f0._s_0.X) >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar28,uVar26) &&
          (double)CONCAT44(uVar28,uVar26) != __real_3f1a36e2e0000000) ||
        (uVar26 = SUB84(*(double *)(pFVar1 + lVar23 + -0x68) - local_1f0._s_0.Y,0) &
                  (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar28 = (uint)((ulonglong)(*(double *)(pFVar1 + lVar23 + -0x68) - local_1f0._s_0.Y) >> 0x20
                       ) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar28,uVar26) &&
        (double)CONCAT44(uVar28,uVar26) != __real_3f1a36e2e0000000)) ||
       (uVar26 = SUB84(*(double *)(pFVar1 + lVar23 + -0x60) - local_1f0._s_0.Z,0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar28 = (uint)((ulonglong)(*(double *)(pFVar1 + lVar23 + -0x60) - local_1f0._s_0.Z) >> 0x20)
                & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar28,uVar26) &&
       (double)CONCAT44(uVar28,uVar26) != __real_3f1a36e2e0000000)) {
      FABRIK_BackwardReach((TVector<double> *)&local_1f0._s_0,this);
    }
    if (auVar39._0_8_ <= param_2) {
      dVar35 = (param_1->field0_0x0)._s_0.Z;
      dVar6 = (param_1->field0_0x0)._s_0.X;
      dVar10 = (param_1->field0_0x0)._s_0.Y;
      if (((this->Links).ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = (this->Links).AllocatorInstance.Data;
      *(double *)pFVar1 = dVar6;
      *(double *)(pFVar1 + 8) = dVar10;
      *(double *)(pFVar1 + 0x10) = dVar35;
    }
    if (iVar29 == 1) {
      DrawDebugIKChain(this,&FColor::Yellow);
      ::FString::PrintfImpl(&local_128,L"FABRIK IterationCount: [%d]/[%d], Slop: [%f]/[%f]");
      FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
                (this->MyAnimInstanceProxy,&local_128,&FColor::Red,
                 &UE::Math::TVector2<double>::UnitVector,SDPG_World);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SolveTwoBoneIK @ 14646da90

void __thiscall FIKChain::SolveTwoBoneIK(FIKChain *this,TVector<double> *param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  double local_168;
  double local_158;
  TVector<double>_u_0 local_138 [2];
  double local_108;
  TQuat<double> local_f8;
  double local_d8;
  
  if (((this->Links).ArrayNum != 3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Links.Num() == 3",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_LegIK.cpp"
                          ,0x150,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->Links).ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->Links).AllocatorInstance.Data;
  if (((this->Links).ArrayNum < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (this->Links).AllocatorInstance.Data;
  if (((this->Links).ArrayNum < 3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (this->Links).AllocatorInstance.Data;
  dVar9 = (param_1->field0_0x0)._s_0.Y;
  *(double *)pFVar2 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar9;
  *(double *)(pFVar2 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  dVar9 = *(double *)pFVar2 - *(double *)(pFVar4 + 0xe0);
  dVar18 = *(double *)(pFVar2 + 8) - *(double *)(pFVar4 + 0xe8);
  dVar19 = *(double *)(pFVar2 + 0x10) - *(double *)(pFVar4 + 0xf0);
  if (((this->Links).ArrayNum < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar1 = *(double *)((this->Links).AllocatorInstance.Data + 0x88);
  dVar7 = dVar9 * dVar9 + dVar18 * dVar18 + dVar19 * dVar19;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar7;
  auVar23 = sqrtpd(unaff_XMM10,auVar23);
  if (((this->Links).ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar22 = __real_3e45798ee2308c3a;
  dVar17 = __real_3ff0000000000000;
  dVar20 = *(double *)((this->Links).AllocatorInstance.Data + 0x18);
  dVar21 = auVar23._0_8_;
  dVar16 = (dVar1 + dVar1) * dVar21;
  uVar14 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar15,uVar14) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar15,uVar14) == __real_3e45798ee2308c3a) {
    dVar16 = 0.0;
  }
  else {
    dVar16 = ((dVar1 * dVar1 + dVar7) - dVar20 * dVar20) / dVar16;
    dVar7 = __real_bff0000000000000;
    if (dVar16 < __real_bff0000000000000) goto LAB_14646dd34;
  }
  dVar7 = dVar16;
  if (__real_3ff0000000000000 <= dVar16) {
    dVar7 = __real_3ff0000000000000;
  }
LAB_14646dd34:
  dVar7 = acos(dVar7);
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (dVar22 < dVar21) {
    dVar17 = dVar17 / dVar21;
    uVar10 = dVar9 * dVar17;
    uVar11 = dVar18 * dVar17;
    uVar12 = dVar19 * dVar17;
  }
  dVar9 = *(double *)(pFVar3 + 0x78) - *(double *)(pFVar4 + 0xe8);
  dVar19 = *(double *)(pFVar3 + 0x80) - *(double *)(pFVar4 + 0xf0);
  dVar18 = *(double *)(pFVar3 + 0x70) - *(double *)(pFVar4 + 0xe0);
  dVar20 = dVar9 * (double)uVar11 + dVar18 * (double)uVar10 + dVar19 * (double)uVar12;
  local_158 = *(double *)(pFVar3 + 0x70) - (dVar20 * (double)uVar10 + *(double *)(pFVar4 + 0xe0));
  local_168 = *(double *)(pFVar3 + 0x78) - (dVar20 * (double)uVar11 + *(double *)(pFVar4 + 0xe8));
  uVar24 = *(double *)(pFVar3 + 0x80) - (dVar20 * (double)uVar12 + *(double *)(pFVar4 + 0xf0));
  dVar20 = local_168 * local_168 + local_158 * local_158 + (double)uVar24 * (double)uVar24;
  if (dVar20 != __real_3ff0000000000000) {
    if (__real_3f1a36e2e0000000 <= dVar20) {
      local_d8 = __real_3ff0000000000000 / SQRT(dVar20);
      local_158 = local_158 * local_d8;
      local_168 = local_168 * local_d8;
      uVar24 = (double)uVar24 * local_d8;
    }
    else {
      local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  local_108 = (double)uVar24;
  if ((((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X !=
         (this->HingeRotationAxis).field0_0x0._s_0.X) ||
       (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y !=
        (this->HingeRotationAxis).field0_0x0._s_0.Y)) ||
      (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z !=
       (this->HingeRotationAxis).field0_0x0._s_0.Z)) &&
     (((((double)uVar10 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X ||
        ((double)uVar11 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
       ((double)uVar12 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) &&
      (uVar14 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar15 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3e45798ee2308c3a <= (double)CONCAT44(uVar15,uVar14) &&
      (double)CONCAT44(uVar15,uVar14) != __real_3e45798ee2308c3a)))) {
    dVar20 = __real_3ff0000000000000 / dVar1;
    if (((this->Links).ArrayNum < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = (this->Links).AllocatorInstance.Data;
    if (((this->Links).ArrayNum < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->Links).AllocatorInstance.Data;
    if ((((local_158 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) &&
         (local_168 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) &&
        ((double)uVar24 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) ||
       (__real_3fefae147ae147ae <=
        dVar9 * dVar20 * (double)uVar11 + dVar18 * dVar20 * (double)uVar10 +
        dVar19 * dVar20 * (double)uVar12)) {
      if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X != *(double *)(pFVar2 + 0xa8))
          || (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y != *(double *)(pFVar2 + 0xb0))
          ) || (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z !=
                *(double *)(pFVar2 + 0xb8))) {
        dVar9 = (this->HingeRotationAxis).field0_0x0._s_0.Z;
        dVar18 = (this->HingeRotationAxis).field0_0x0._s_0.Y;
        dVar19 = (this->HingeRotationAxis).field0_0x0._s_0.X;
        local_138[0]._0_8_ = dVar18 * (double)uVar12 - dVar9 * (double)uVar11;
        local_138[0]._8_8_ = dVar9 * (double)uVar10 - dVar19 * (double)uVar12;
        local_138[0]._16_8_ = dVar19 * (double)uVar11 - dVar18 * (double)uVar10;
        UE::Math::TQuat<double>::FindBetweenNormals
                  (&local_f8,(TVector<double> *)(pFVar5 + 0xc0),
                   (TVector<double> *)&local_138[0]._s_0);
        dVar19 = *(double *)(pFVar2 + 0xa8);
        dVar20 = *(double *)(pFVar2 + 0xb0);
        dVar9 = *(double *)(pFVar2 + 0xb8);
        dVar22 = dVar9 * local_f8.Y - dVar20 * local_f8.Z;
        dVar22 = dVar22 + dVar22;
        dVar17 = dVar19 * local_f8.Z - dVar9 * local_f8.X;
        dVar17 = dVar17 + dVar17;
        dVar18 = dVar20 * local_f8.X - dVar19 * local_f8.Y;
        dVar18 = dVar18 + dVar18;
        local_158 = (dVar18 * local_f8.Y - dVar17 * local_f8.Z) + dVar22 * local_f8.W + dVar19;
        uVar24 = (dVar17 * local_f8.X - dVar22 * local_f8.Y) + dVar18 * local_f8.W + dVar9;
        local_168 = (dVar22 * local_f8.Z - dVar18 * local_f8.X) + dVar17 * local_f8.W + dVar20;
      }
    }
    else {
      auVar8._8_4_ = SUB84(local_168,0);
      auVar8._0_8_ = local_158;
      auVar8._12_4_ = (int)((ulonglong)local_168 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + 0xa8) = auVar8;
      *(double *)(pFVar2 + 0xb8) = local_108;
      dVar9 = (this->HingeRotationAxis).field0_0x0._s_0.Z;
      dVar18 = (this->HingeRotationAxis).field0_0x0._s_0.Y;
      dVar19 = (this->HingeRotationAxis).field0_0x0._s_0.X;
      *(double *)&pFVar5[0xc0].field_0x0 = dVar18 * (double)uVar12 - dVar9 * (double)uVar11;
      *(double *)(pFVar5 + 200) = dVar9 * (double)uVar10 - dVar19 * (double)uVar12;
      *(double *)(pFVar5 + 0xd0) = dVar19 * (double)uVar11 - dVar18 * (double)uVar10;
    }
  }
  dVar19 = sin(dVar7);
  dVar9 = *(double *)(pFVar4 + 0xe8);
  dVar18 = *(double *)(pFVar4 + 0xf0);
  *(double *)(pFVar3 + 0x70) =
       ((double)uVar10 * dVar16 + dVar19 * local_158) * dVar1 + *(double *)(pFVar4 + 0xe0);
  *(double *)(pFVar3 + 0x78) = ((double)uVar11 * dVar16 + dVar19 * local_168) * dVar1 + dVar9;
  *(double *)(pFVar3 + 0x80) = ((double)uVar12 * dVar16 + dVar19 * (double)uVar24) * dVar1 + dVar18;
  return;
}

