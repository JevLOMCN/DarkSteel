// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a478290

UScriptStruct * __cdecl FSphericalPoseReaderDebugSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSphericalPoseReaderDebugSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FSphericalPoseReaderDebugSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings,
                         (UObject *)pUVar1,L"SphericalPoseReaderDebugSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSphericalPoseReaderDebugSettings.OuterSingleton;
}

// DrawDebug @ 14a5214b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSphericalPoseReaderDebugSettings::DrawDebug
          (FSphericalPoseReaderDebugSettings *this,TTransform<double> *param_1,
          FRigVMDrawInterface *param_2,FSphericalRegion *param_3,FSphericalRegion *param_4,
          TVector<double> *param_5,TVector<double> *param_6,float param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar15;
  TVector<double>_u_0 *pTVar16;
  uint uVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  float fVar46;
  undefined4 uVar47;
  undefined1 auStackY_388 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_348;
  undefined1 local_338 [8];
  float fStack_330;
  float fStack_32c;
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_318;
  TTransform<double> *local_308;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_300;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2f0;
  FLinearColor_u_0 local_2d8;
  FRigVMDrawInterface *local_2c8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_2c0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_2b0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_2a0;
  TArrayView<UE::Math::TVector<double>_const_,int> local_290;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  TVector<double>_u_0 local_1b8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  fVar46 = __real_bf800000;
  dVar28 = __real_3ff0000000000000;
  if (param_2 == (FRigVMDrawInterface *)0x0) {
    return;
  }
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  if (this->bDrawDebug == false) {
    return;
  }
  local_308 = param_1;
  local_2c8 = param_2;
  if (this->bDrawLocalAxes != false) {
    local_158.Rotation.ZW.m128d_f64 = *&(param_1->Rotation).ZW.m128d_f64;
    local_158.Rotation.XY.m128d_f64 = *&(param_1->Rotation).XY.m128d_f64;
    local_158.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    local_158.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
    local_158.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    local_158.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    dVar27 = local_158.Rotation.XY.m128d_f64[1];
    auVar23._8_8_ = 0;
    auVar23._0_8_ = __real_3ff0000000000000;
    auVar23 = blendpd(ZEXT816(0),auVar23,2);
    dVar4 = local_158.Rotation.ZW.m128d_f64[0];
    dVar3 = local_158.Rotation.ZW.m128d_f64[1];
    auVar19._8_4_ = local_158.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar19._0_8_ = dVar27;
    auVar19._12_4_ = local_158.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar33 = blendpd((undefined1  [16])local_158.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_158.Rotation.ZW.m128d_f64,2);
    auVar43._0_8_ = local_158.Rotation.XY.m128d_f64[0] * 0.0 - dVar27 * 0.0;
    auVar43._8_8_ = __real_3ff0000000000000 * dVar27 - auVar19._8_8_ * 0.0;
    local_190 = __real_3ff0000000000000;
    auVar37._8_4_ = SUB84(auVar43._8_8_,0);
    auVar37._0_8_ = auVar43._0_8_;
    auVar37._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
    auVar24._0_8_ = auVar23._0_8_ * dVar4 - auVar33._0_8_ * __real_3ff0000000000000;
    auVar24._8_8_ = auVar23._8_8_ * dVar3 - auVar33._8_8_ * 0.0;
    auVar23 = blendpd(auVar43,auVar24,2);
    dVar36 = auVar37._8_8_ + auVar37._8_8_;
    dVar38 = auVar24._0_8_ + auVar24._0_8_;
    auVar44._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar44._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    uVar34 = SUB84(dVar38,0);
    auVar29._8_4_ = uVar34;
    auVar29._0_8_ = dVar36;
    uVar35 = (undefined4)((ulonglong)dVar38 >> 0x20);
    auVar29._12_4_ = uVar35;
    auVar20._8_4_ = uVar34;
    auVar20._0_8_ = dVar36;
    auVar20._12_4_ = uVar35;
    auVar25._8_4_ = uVar34;
    auVar25._0_8_ = dVar36;
    auVar25._12_4_ = uVar35;
    auVar23 = blendpd(auVar25,auVar44,2);
    auVar30._0_8_ = auVar29._8_8_ * local_158.Rotation.XY.m128d_f64[0] - dVar36 * dVar27;
    auVar30._8_8_ = auVar44._0_8_ * dVar27 - auVar20._8_8_ * dVar4;
    auVar21._8_4_ = SUB84(auVar44._8_8_,0);
    auVar21._0_8_ = auVar44._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
    auVar26._0_8_ = auVar23._0_8_ * dVar4 - auVar44._0_8_ * auVar33._0_8_;
    auVar26._8_8_ = auVar23._8_8_ * dVar3 - auVar21._8_8_ * auVar33._8_8_;
    auVar33._8_4_ = SUB84(auVar30._8_8_,0);
    auVar33._0_8_ = auVar30._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
    local_188 = dVar36 * dVar3 + auVar33._8_8_;
    dStack_180 = dVar38 * dVar3 + auVar26._0_8_;
    auVar23 = blendpd(auVar30,auVar26,2);
    local_160 = (double)this->DebugScale;
    local_170 = local_188 * local_160;
    local_178 = auVar44._0_8_ * dVar3 + __real_3ff0000000000000 + auVar23._0_8_;
    dStack_168 = dStack_180 * local_160;
    local_160 = local_178 * local_160;
    dVar4 = (param_1->Translation).XY.m128d_f64[1] + dStack_168;
    local_158.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
    local_158.Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0] + local_170;
    local_158.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_158.Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0] + local_160;
    local_158.Translation.ZW.m128d_f64[1] = (param_1->Translation).ZW.m128d_f64[1] + 0.0;
    local_1a0 = 0;
    uStack_198 = 0;
    FRigVMDrawInterface::DrawAxes
              (param_2,&local_158,&UE::Math::TTransform<double>::Identity,
               this->DebugScale * __real_3f000000,this->DebugThickness,SDPG_Foreground,
               __real_bf800000);
  }
  _local_338 = FLinearColor::Yellow.field0_0x0;
  _local_328 = FLinearColor::Green.field0_0x0;
  fVar39 = FLinearColor::Yellow.field0_0x0._0_4_ * __real_3ecccccd;
  fVar31 = FLinearColor::Yellow.field0_0x0._4_4_ * __real_3ecccccd;
  fVar32 = FLinearColor::Yellow.field0_0x0._8_4_ * __real_3ecccccd;
  fVar22 = FLinearColor::Yellow.field0_0x0._12_4_ * __real_3ecccccd;
  local_2d8 = FLinearColor::Blue.field0_0x0;
  if (__real_322bcc77 <= param_7) {
    if (__real_3f7d70a4 <= param_7) {
      local_338._4_4_ = fVar31;
      local_338._0_4_ = fVar39;
      fStack_330 = fVar32;
      fStack_32c = fVar22;
      goto LAB_14a5217e6;
    }
  }
  else {
    local_2d8 = FLinearColor::Red.field0_0x0;
    local_338._4_4_ = fVar31;
    local_338._0_4_ = fVar39;
    fStack_330 = fVar32;
    fStack_32c = fVar22;
  }
  local_328 = FLinearColor::Green.field0_0x0._0_8_;
  fStack_320 = FLinearColor::Green.field0_0x0._8_4_ * __real_3e4ccccd;
  fStack_31c = FLinearColor::Green.field0_0x0._12_4_ * __real_3e4ccccd;
  local_328._4_4_ = FLinearColor::Green.field0_0x0._4_4_ * __real_3e4ccccd;
  local_328._0_4_ = FLinearColor::Green.field0_0x0._0_4_ * __real_3e4ccccd;
LAB_14a5217e6:
  local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.ArrayNum = 0;
  local_348.ArrayMax = 0;
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 0;
  DrawManifold(this,&local_348,&local_2f0,param_3);
  fVar22 = this->DebugThickness;
  if (this->bDraw2D == false) {
    iVar11 = local_348.ArrayNum;
    local_2b0.DataPtr = (TVector<double> *)local_348.AllocatorInstance.Data;
    if ((local_348.ArrayNum < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_2b0.ArrayNum = iVar11;
    pTVar15 = &local_2b0;
  }
  else {
    iVar11 = local_2f0.ArrayNum;
    local_2c0.DataPtr = (TVector<double> *)local_2f0.AllocatorInstance.Data;
    if ((local_2f0.ArrayNum < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_2c0.ArrayNum = iVar11;
    pTVar15 = &local_2c0;
  }
  FRigVMDrawInterface::DrawLineStrip
            (param_2,param_1,pTVar15,(FLinearColor *)local_328,fVar22,SDPG_Foreground,fVar46);
  local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.ArrayNum = 0;
  local_318.ArrayMax = 0;
  local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.ArrayNum = 0;
  local_300.ArrayMax = 0;
  DrawManifold(this,&local_318,&local_300,param_4);
  fVar22 = this->DebugThickness;
  if (this->bDraw2D == false) {
    iVar11 = local_318.ArrayNum;
    local_290.DataPtr = (TVector<double> *)local_318.AllocatorInstance.Data;
    if ((local_318.ArrayNum < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_290.ArrayNum = iVar11;
    pTVar15 = &local_290;
  }
  else {
    iVar11 = local_300.ArrayNum;
    local_2a0.DataPtr = (TVector<double> *)local_300.AllocatorInstance.Data;
    if ((local_300.ArrayNum < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_2a0.ArrayNum = iVar11;
    pTVar15 = &local_2a0;
  }
  FRigVMDrawInterface::DrawLineStrip
            (param_2,param_1,pTVar15,(FLinearColor *)local_338,fVar22,SDPG_Foreground,fVar46);
  dVar4 = __real_3e45798ee0000000;
  if (this->bDraw2D == false) {
    uVar17 = 0;
    fVar22 = __real_3f800000;
    if (0 < local_348.ArrayNum) {
      lVar13 = 0;
      do {
        iVar11 = this->DebugSegments;
        iVar18 = 0;
        if (0 < iVar11) {
          uVar14 = ~uVar17 >> 0x1f;
          do {
            uVar12 = 0;
            if ((int)uVar17 < local_318.ArrayNum) {
              uVar12 = uVar14;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FVar9.Data = local_318.AllocatorInstance.Data;
            uVar12 = 0;
            if ((int)uVar17 < local_348.ArrayNum) {
              uVar12 = uVar14;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            auVar7._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            auVar7._0_8_ = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            auVar7._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            dVar27 = (double)((float)iVar18 * (fVar22 / (float)iVar11));
            dVar3 = (*(double *)(FVar9.Data + lVar13) -
                    *(double *)(local_348.AllocatorInstance.Data + lVar13)) * dVar27 +
                    *(double *)(local_348.AllocatorInstance.Data + lVar13);
            uVar2 = (*(double *)(FVar9.Data + lVar13 + 0x10) -
                    *(double *)(local_348.AllocatorInstance.Data + lVar13 + 0x10)) * dVar27 +
                    *(double *)(local_348.AllocatorInstance.Data + lVar13 + 0x10);
            dVar36 = (*(double *)(FVar9.Data + lVar13 + 8) -
                     *(double *)(local_348.AllocatorInstance.Data + lVar13 + 8)) * dVar27 +
                     *(double *)(local_348.AllocatorInstance.Data + lVar13 + 8);
            dVar27 = dVar36 * dVar36 + dVar3 * dVar3 + (double)uVar2 * (double)uVar2;
            if (dVar27 != dVar28) {
              if (dVar4 <= dVar27) {
                local_1d8 = dVar28 / SQRT(dVar27);
                dVar3 = dVar3 * local_1d8;
                dVar36 = dVar36 * local_1d8;
                uVar2 = (double)uVar2 * local_1d8;
              }
              else {
                local_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                dVar36 = auVar7._8_8_;
                dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
            }
            uVar12 = 0;
            if ((int)uVar17 < local_318.ArrayNum) {
              uVar12 = uVar14;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FVar9.Data = local_318.AllocatorInstance.Data;
            uVar12 = 0;
            if ((int)uVar17 < local_348.ArrayNum) {
              uVar12 = uVar14;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            param_2 = local_2c8;
            dVar27 = (double)((float)(iVar18 + 1) * (fVar22 / (float)iVar11));
            dVar38 = (*(double *)(FVar9.Data + lVar13 + 8) -
                     *(double *)(local_348.AllocatorInstance.Data + lVar13 + 8)) * dVar27 +
                     *(double *)(local_348.AllocatorInstance.Data + lVar13 + 8);
            local_280._s_0.Z =
                 (*(double *)(FVar9.Data + lVar13 + 0x10) -
                 *(double *)(local_348.AllocatorInstance.Data + lVar13 + 0x10)) * dVar27 +
                 *(double *)(local_348.AllocatorInstance.Data + lVar13 + 0x10);
            dVar40 = (*(double *)(FVar9.Data + lVar13) -
                     *(double *)(local_348.AllocatorInstance.Data + lVar13)) * dVar27 +
                     *(double *)(local_348.AllocatorInstance.Data + lVar13);
            dVar27 = dVar38 * dVar38 + dVar40 * dVar40 + local_280._s_0.Z * local_280._s_0.Z;
            if (dVar27 != dVar28) {
              if (dVar4 <= dVar27) {
                local_1d0 = dVar28 / SQRT(dVar27);
                dVar40 = dVar40 * local_1d0;
                dVar38 = dVar38 * local_1d0;
                local_280._s_0.Z = local_280._s_0.Z * local_1d0;
              }
              else {
                auVar5._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                auVar5._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                auVar5._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                dVar38 = auVar5._4_8_;
                dVar40 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                local_280._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                local_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
            }
            dVar27 = (double)this->DebugScale;
            local_280._s_0.X = dVar40 * dVar27;
            local_280._s_0.Y = dVar38 * dVar27;
            local_280._s_0.Z = local_280._s_0.Z * dVar27;
            local_268._s_0.X = dVar3 * dVar27;
            local_268._s_0.Y = dVar36 * dVar27;
            local_268._s_0.Z = (double)uVar2 * dVar27;
            FRigVMDrawInterface::DrawLine
                      (local_2c8,local_308,(TVector<double> *)&local_268._s_0,
                       (TVector<double> *)&local_280._s_0,(FLinearColor *)local_338,
                       this->DebugThickness,SDPG_Foreground,fVar46);
            iVar11 = this->DebugSegments;
            iVar18 = iVar18 + 1;
            fVar22 = __real_3f800000;
          } while (iVar18 < iVar11);
        }
        uVar17 = uVar17 + 1;
        lVar13 = lVar13 + 0x18;
      } while ((int)uVar17 < local_348.ArrayNum);
    }
    uVar17 = 0;
    param_1 = local_308;
    if (0 < local_348.ArrayNum) {
      lVar13 = 0;
      do {
        iVar11 = this->DebugSegments;
        iVar18 = 0;
        if (0 < iVar11) {
          do {
            uVar14 = 0;
            if ((int)uVar17 < local_348.ArrayNum) {
              uVar14 = ~uVar17 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar34 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
            uVar35 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20);
            uVar45 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar47 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            auVar8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            auVar8._0_8_ = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            auVar8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            dVar27 = (double)((float)iVar18 * (fVar22 / (float)iVar11));
            dVar36 = (double)this->DebugScale;
            dVar38 = (*(double *)(local_348.AllocatorInstance.Data + lVar13 + 8) -
                     dVar36 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) * dVar27 +
                     dVar36 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
            dVar3 = (*(double *)(local_348.AllocatorInstance.Data + lVar13) -
                    dVar36 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) * dVar27 +
                    dVar36 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
            uVar2 = (*(double *)(local_348.AllocatorInstance.Data + lVar13 + 0x10) -
                    dVar36 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) * dVar27 +
                    dVar36 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
            dVar27 = dVar38 * dVar38 + dVar3 * dVar3 + (double)uVar2 * (double)uVar2;
            if (dVar27 != dVar28) {
              if (dVar4 <= dVar27) {
                local_1c8 = dVar28 / SQRT(dVar27);
                dVar3 = dVar3 * local_1c8;
                dVar38 = dVar38 * local_1c8;
                uVar2 = (double)uVar2 * local_1c8;
              }
              else {
                local_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                dVar38 = auVar8._8_8_;
                dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
            }
            uVar14 = 0;
            if ((int)uVar17 < local_348.ArrayNum) {
              uVar14 = ~uVar17 >> 0x1f;
            }
            if (uVar14 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar34 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y,0);
              uVar35 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._8_8_ >> 0x20);
              uVar45 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar47 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            }
            fVar46 = __real_bf800000;
            dVar27 = (double)((float)(iVar18 + 1) * (fVar22 / (float)iVar11));
            dVar42 = (double)this->DebugScale;
            dVar36 = dVar42 * (double)CONCAT44(uVar35,uVar34);
            dVar36 = (*(double *)(local_348.AllocatorInstance.Data + lVar13 + 8) - dVar36) * dVar27
                     + dVar36;
            dVar41 = (*(double *)(local_348.AllocatorInstance.Data + lVar13) -
                     dVar42 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) * dVar27 +
                     dVar42 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
            dVar27 = (*(double *)(local_348.AllocatorInstance.Data + lVar13 + 0x10) -
                     dVar42 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) * dVar27 +
                     dVar42 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
            dVar40 = dVar36 * dVar36 + dVar41 * dVar41 + dVar27 * dVar27;
            if (dVar40 != dVar28) {
              if (dVar4 <= dVar40) {
                local_1c0 = dVar28 / SQRT(dVar40);
                dVar41 = dVar41 * local_1c0;
                dVar36 = dVar36 * local_1c0;
                dVar27 = dVar27 * local_1c0;
              }
              else {
                local_1e0 = (double)CONCAT44(uVar47,uVar45);
                auVar6._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                auVar6._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                auVar6._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                dVar27 = (double)CONCAT44(uVar47,uVar45);
                dVar36 = auVar6._4_8_;
                dVar41 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
              }
            }
            local_250._s_0.X = dVar41 * dVar42;
            local_250._s_0.Y = dVar36 * dVar42;
            local_250._s_0.Z = dVar27 * dVar42;
            local_238._s_0.X = dVar3 * dVar42;
            local_238._s_0.Y = dVar38 * dVar42;
            local_238._s_0.Z = (double)uVar2 * dVar42;
            FRigVMDrawInterface::DrawLine
                      (param_2,local_308,(TVector<double> *)&local_238._s_0,
                       (TVector<double> *)&local_250._s_0,(FLinearColor *)local_328,
                       this->DebugThickness,SDPG_Foreground,__real_bf800000);
            iVar11 = this->DebugSegments;
            iVar18 = iVar18 + 1;
            fVar22 = __real_3f800000;
          } while (iVar18 < iVar11);
        }
        uVar17 = uVar17 + 1;
        lVar13 = lVar13 + 0x18;
        param_1 = local_308;
        fVar22 = __real_3f800000;
      } while ((int)uVar17 < local_348.ArrayNum);
    }
  }
  fVar22 = this->DebugThickness;
  dVar28 = (double)this->DebugScale;
  if (this->bDraw2D == false) {
    dVar4 = (param_5->field0_0x0)._s_0.X;
    dVar3 = (param_5->field0_0x0)._s_0.Y;
    dVar27 = (param_5->field0_0x0)._s_0.Z;
    local_220._s_0.X = dVar4 * dVar28;
    local_220._s_0.Y = dVar3 * dVar28;
    local_220._s_0.Z = dVar27 * dVar28;
    FRigVMDrawInterface::DrawLine
              (param_2,param_1,&UE::Math::TVector<double>::ZeroVector,
               (TVector<double> *)&local_220._s_0,(FLinearColor *)&local_2d8._s_0,fVar22 + fVar22,
               SDPG_Foreground,fVar46);
    pTVar16 = &local_208;
    fVar22 = this->DebugThickness;
    dVar28 = (double)this->DebugScale;
    local_208._s_0.X = dVar4 * dVar28;
    local_208._s_0.Y = dVar3 * dVar28;
    local_208._s_0.Z = dVar27 * dVar28;
  }
  else {
    pTVar16 = &local_1b8;
    local_1b8._s_0.Z = dVar28 * (param_6->field0_0x0)._s_0.Z;
    local_1b8._s_0.X = dVar28 * (param_6->field0_0x0)._s_0.X;
    local_1b8._s_0.Y = dVar28 * (param_6->field0_0x0)._s_0.Y;
  }
  FRigVMDrawInterface::DrawPoint
            (param_2,param_1,(TVector<double> *)&pTVar16->_s_0,fVar22 * __real_40a00000,
             (FLinearColor *)&local_2d8._s_0,SDPG_Foreground,fVar46);
  if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.AllocatorInstance.Data);
  }
  if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.AllocatorInstance.Data);
  }
  if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.AllocatorInstance.Data);
  }
  if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.AllocatorInstance.Data);
  }
  return;
}

// DrawManifold @ 14a522ad0

void __thiscall
FSphericalPoseReaderDebugSettings::DrawManifold
          (FSphericalPoseReaderDebugSettings *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          FSphericalRegion *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FSphericalRegion *pFVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  undefined8 local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8 [8];
  
  iVar16 = 0;
  if (0 < this->DebugSegments) {
    uVar20 = (uint)__xmm_80000000000000008000000000000000;
    uVar9 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    do {
      uVar12 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      uVar11 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      __libm_sse2_sincos_();
      dVar7 = (double)uVar10 * extraout_XMM0_Qa;
      dVar19 = (double)uVar11 * extraout_XMM0_Qa;
      dVar6 = (double)uVar12 * extraout_XMM0_Qa;
      dVar5 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z * dVar19 -
              UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y * dVar6;
      dVar4 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X * dVar6 -
              UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z * dVar7;
      dVar5 = dVar5 + dVar5;
      dVar18 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y * dVar7 -
               UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X * dVar19;
      dVar4 = dVar4 + dVar4;
      dVar17 = (double)(param_3->RegionAngleRadians * __real_3ea2f983);
      dVar18 = dVar18 + dVar18;
      dVar19 = ((dVar18 * dVar19 - dVar4 * dVar6) +
               dVar5 * extraout_XMM0_Qb + UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X)
               * dVar17;
      dVar17 = ((dVar5 * dVar6 - dVar18 * dVar7) +
               dVar4 * extraout_XMM0_Qb + UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y)
               * dVar17;
      pFVar8 = param_3;
      if (dVar19 <= 0.0) {
        pFVar8 = (FSphericalRegion *)&param_3->ScaleFactors;
      }
      lVar15 = 0x10;
      if (0.0 < dVar17) {
        lVar15 = 0xc;
      }
      dVar19 = (double)(pFVar8->ScaleFactors).PositiveWidth * dVar19;
      dVar17 = (double)*(float *)((longlong)&param_3->RegionAngleRadians + lVar15) * dVar17;
      local_108._s_0.Z = 0.0;
      local_108._s_0.X = dVar19;
      local_108._s_0.Y = dVar17;
      SphericalCoordinatesToNormal
                ((TVector<double> *)&local_e8[0]._s_0,(TVector<double> *)&local_108._s_0);
      local_128 = (double)this->DebugScale;
      local_138 = (double)local_e8[0]._0_8_ * local_128;
      dStack_130 = (double)local_e8[0]._8_8_ * local_128;
      local_128 = local_128 * (double)local_e8[0]._16_8_;
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)param_1->ArrayMax * 0x18)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar14 = param_1->ArrayNum;
      if (iVar14 == param_1->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar14 + 1;
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + (longlong)iVar14 * 0x18;
      *(double *)pFVar1 = local_138;
      *(double *)(pFVar1 + 8) = dStack_130;
      *(double *)(pFVar2 + (longlong)iVar14 * 0x18 + 0x10) = local_128;
      pFVar1 = (param_2->AllocatorInstance).Data;
      dStack_118 = (double)this->DebugScale;
      local_120 = dStack_118 * dVar19;
      local_110 = CONCAT44((uint)((ulonglong)dStack_118 >> 0x20) ^ (uint)uVar9,
                           SUB84(dStack_118,0) ^ uVar20);
      dStack_118 = dStack_118 * dVar17;
      if (((pFVar1 <= (FScriptContainerElement *)&local_120) &&
          ((FScriptContainerElement *)&local_120 < pFVar1 + (longlong)param_2->ArrayMax * 0x18)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar14 = param_2->ArrayNum;
      if (iVar14 == param_2->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      iVar16 = iVar16 + 1;
      param_2->ArrayNum = iVar14 + 1;
      pFVar2 = (param_2->AllocatorInstance).Data;
      pFVar1 = pFVar2 + (longlong)iVar14 * 0x18;
      *(double *)pFVar1 = local_120;
      *(double *)(pFVar1 + 8) = dStack_118;
      *(undefined8 *)(pFVar2 + (longlong)iVar14 * 0x18 + 0x10) = local_110;
    } while (iVar16 < this->DebugSegments);
  }
  return;
}

// SphericalCoordinatesToNormal @ 14a55d710

TVector<double> * __cdecl
FSphericalPoseReaderDebugSettings::SphericalCoordinatesToNormal
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  float _X;
  double dVar11;
  double dVar12;
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8 [6];
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar11 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar11 == __real_3ff0000000000000) {
    local_e8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    uVar6 = (param_1->field0_0x0)._s_0.Y;
    uVar5 = local_e8._s_0.Z;
    uVar4 = (param_1->field0_0x0)._s_0.X;
  }
  else if (__real_3e45798ee0000000 <= dVar11) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar11);
    uVar6 = dVar3 * dVar12;
    uVar5 = dVar2 * dVar12;
    uVar4 = dVar1 * dVar12;
  }
  else {
    local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  fVar9 = (float)((double)uVar4 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X +
                  (double)uVar6 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y +
                 (double)uVar5 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z);
  _X = __real_bf800000;
  if ((__real_bf800000 <= fVar9) && (_X = fVar9, __real_3f800000 <= fVar9)) {
    _X = __real_3f800000;
  }
  acosf(_X);
  __libm_sse2_sincos_();
  uVar6 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
  dVar7 = extraout_XMM0_Qa * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  dVar3 = extraout_XMM0_Qa * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  dVar8 = extraout_XMM0_Qa * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  dVar2 = dVar7 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z -
          dVar3 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
  dVar2 = dVar2 + dVar2;
  dVar12 = dVar3 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X -
           dVar8 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
  dVar12 = dVar12 + dVar12;
  dVar1 = dVar8 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y -
          dVar7 * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar11;
  sqrtpd(auVar10,auVar10);
  dVar1 = dVar1 + dVar1;
  __libm_sse2_sincos_();
  local_c8[0].X =
       ((dVar1 * dVar7 - dVar12 * dVar3) + dVar2 * extraout_XMM0_Qb + (double)uVar4) *
       extraout_XMM0_Qa_00;
  local_e8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_e8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_e8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  local_c8[0].Y =
       ((dVar2 * dVar3 - dVar1 * dVar8) + dVar12 * extraout_XMM0_Qb + (double)uVar5) *
       extraout_XMM0_Qa_00;
  local_c8[0].Z =
       ((dVar12 * dVar8 - dVar2 * dVar7) + dVar1 * extraout_XMM0_Qb + (double)uVar6) *
       extraout_XMM0_Qa_00;
  UE::Math::TQuat<double>::RotateVector
            (local_c8,__return_storage_ptr__,(TVector<double> *)&local_e8._s_0);
  return __return_storage_ptr__;
}

