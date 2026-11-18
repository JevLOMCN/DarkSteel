// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 15

// StaticClass @ 14cf2e3f0

UClass * __cdecl UARPlaneGeometry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPlaneGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPlaneGeometry",
               &Z_Registration_Info_UClass_UARPlaneGeometry.InnerSingleton,
               StaticRegisterNativesUARPlaneGeometry,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARPlaneGeometry>,
               InternalVTableHelperCtorCaller<UARPlaneGeometry>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPlaneGeometry.InnerSingleton;
}

// UARPlaneGeometry @ 14cf42250

UARPlaneGeometry * __thiscall
UARPlaneGeometry::UARPlaneGeometry(UARPlaneGeometry *this,FVTableHelper *param_1)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  *(undefined ***)this = &___7UARPlaneGeometry__6B_;
  (this->BoundaryPolygon).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundaryPolygon).ArrayNum = 0;
  (this->BoundaryPolygon).ArrayMax = 0;
  (this->SubsumedBy).field0_0x0.DebugPtr = (UARPlaneGeometry *)0x0;
  return this;
}

// UARPlaneGeometry @ 14cf42290

UARPlaneGeometry * __thiscall UARPlaneGeometry::UARPlaneGeometry(UARPlaneGeometry *this)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  *(undefined ***)this = &___7UARPlaneGeometry__6B_;
  (this->BoundaryPolygon).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundaryPolygon).ArrayNum = 0;
  (this->BoundaryPolygon).ArrayMax = 0;
  (this->SubsumedBy).field0_0x0.DebugPtr = (UARPlaneGeometry *)0x0;
  return this;
}

// ~UARPlaneGeometry @ 14cf44640

void __thiscall UARPlaneGeometry::~UARPlaneGeometry(UARPlaneGeometry *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UARPlaneGeometry__6B_;
  pFVar1 = (this->BoundaryPolygon).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// DebugDraw @ 14cf4ced0

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

void __thiscall
UARPlaneGeometry::DebugDraw
          (UARPlaneGeometry *this,UWorld *param_1,FLinearColor *param_2,float param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar48 [16];
  double dVar50;
  undefined1 auVar49 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStackY_228 [32];
  FColor_u_0 local_1d8;
  FName local_1d4;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  FString local_198;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  undefined1 local_158 [32];
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_138);
  fVar14 = (param_2->field0_0x0)._s_0.B;
  fVar17 = (param_2->field0_0x0)._s_0.R;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  fVar15 = (param_2->field0_0x0)._s_0.G;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  local_1d8._s_0.B = (uchar)(int)(fVar14 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar15) {
    fVar15 = __real_3f800000;
  }
  fVar14 = (param_2->field0_0x0)._s_0.A;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  local_1d8._s_0.G = (uchar)(int)(fVar15 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  local_1d8._s_0.R = (uchar)(int)(fVar17 * __real_437f0000 + __real_3f000000);
  local_1d8._s_0.A = (uchar)(int)(fVar14 * __real_437f0000 + __real_3f000000);
  if (2 < (this->BoundaryPolygon).ArrayNum) {
    dVar51 = local_138.Rotation.ZW.m128d_f64[0];
    uVar12 = 1;
    pFVar1 = (this->BoundaryPolygon).AllocatorInstance.Data;
    lVar13 = 0x18;
    dVar46 = *(double *)(pFVar1 + 0x10) * local_138.Scale3D.ZW.m128d_f64[0];
    dVar47 = local_138.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar5 = local_138.Scale3D.XY.m128d_f64[0] * *(double *)pFVar1;
    dVar42 = local_138.Scale3D.XY.m128d_f64[1] * *(double *)(pFVar1 + 8);
    uVar16 = (undefined4)((ulonglong)dVar42 >> 0x20);
    dVar52 = (double)CONCAT44(local_138.Rotation.XY.m128d_f64[0]._4_4_,
                              local_138.Rotation.XY.m128d_f64[0]._0_4_);
    auVar53._8_4_ = local_138.Rotation.XY.m128d_f64[1]._0_4_;
    auVar53._0_8_ = dVar52;
    auVar53._12_4_ = local_138.Rotation.XY.m128d_f64[1]._4_4_;
    auVar63._8_4_ = SUB84(dVar42,0);
    auVar63._0_8_ = dVar5;
    auVar63._12_4_ = uVar16;
    dVar66 = auVar53._8_8_;
    dVar59 = local_138.Rotation.ZW.m128d_f64[1];
    auVar53 = blendpd(auVar53,(undefined1  [16])local_138.Rotation.ZW.m128d_f64,2);
    auVar18._8_4_ = SUB84(dVar42,0);
    auVar18._0_8_ = dVar5;
    auVar18._12_4_ = uVar16;
    auVar64._0_8_ = auVar63._8_8_ * dVar52 - dVar66 * dVar5;
    auVar64._8_8_ = dVar46 * dVar66 - dVar51 * dVar42;
    auVar19._8_4_ = SUB84(dVar47,0);
    auVar19._0_8_ = dVar46;
    auVar19._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
    auVar19 = blendpd(auVar18,auVar19,2);
    auVar48._8_4_ = SUB84(auVar64._8_8_,0);
    auVar48._0_8_ = auVar64._0_8_;
    auVar48._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
    auVar20._0_8_ = auVar19._0_8_ * dVar51 - auVar53._0_8_ * dVar46;
    auVar20._8_8_ = auVar19._8_8_ * dVar59 - auVar53._8_8_ * dVar47;
    auVar19 = blendpd(auVar64,auVar20,2);
    dVar47 = auVar48._8_8_ + auVar48._8_8_;
    dVar50 = auVar20._0_8_ + auVar20._0_8_;
    auVar65._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar65._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar34._8_4_ = SUB84(dVar50,0);
    auVar34._0_8_ = dVar47;
    uVar16 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar34._12_4_ = uVar16;
    auVar21._8_4_ = SUB84(dVar50,0);
    auVar21._0_8_ = dVar47;
    auVar21._12_4_ = uVar16;
    auVar19 = blendpd(auVar21,auVar65,2);
    auVar35._0_8_ = auVar34._8_8_ * dVar52 - dVar47 * dVar66;
    auVar35._8_8_ = auVar65._0_8_ * dVar66 - dVar50 * dVar51;
    auVar22._0_8_ = auVar19._0_8_ * dVar51 - auVar65._0_8_ * auVar53._0_8_;
    auVar22._8_8_ = auVar19._8_8_ * dVar59 - auVar65._8_8_ * auVar53._8_8_;
    auVar19 = blendpd(auVar35,auVar22,2);
    local_1c8._s_0.X =
         dVar47 * dVar59 + dVar5 + auVar35._8_8_ + local_138.Translation.XY.m128d_f64[0];
    local_1c8._s_0.Y =
         dVar50 * dVar59 + dVar42 + auVar22._0_8_ + local_138.Translation.XY.m128d_f64[1];
    local_1c8._s_0.Z =
         auVar65._0_8_ * dVar59 + dVar46 + auVar19._0_8_ + local_138.Translation.ZW.m128d_f64[0];
    do {
      uVar11 = 0;
      if ((int)uVar12 < (this->BoundaryPolygon).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->BoundaryPolygon).AllocatorInstance.Data;
      auVar49._4_4_ = local_138.Rotation.XY.m128d_f64[0]._4_4_;
      auVar49._0_4_ = local_138.Rotation.XY.m128d_f64[0]._0_4_;
      auVar49._8_4_ = local_138.Rotation.XY.m128d_f64[1]._0_4_;
      auVar49._12_4_ = local_138.Rotation.XY.m128d_f64[1]._4_4_;
      dVar52 = local_138.Rotation.ZW.m128d_f64[0];
      dVar50 = local_138.Rotation.ZW.m128d_f64[1];
      auVar54._4_4_ = local_138.Rotation.XY.m128d_f64[0]._4_4_;
      auVar54._0_4_ = local_138.Rotation.XY.m128d_f64[0]._0_4_;
      auVar54._8_4_ = local_138.Rotation.XY.m128d_f64[1]._0_4_;
      auVar54._12_4_ = local_138.Rotation.XY.m128d_f64[1]._4_4_;
      pFVar1 = pFVar2 + lVar13;
      dVar47 = *(double *)pFVar1 * local_138.Scale3D.XY.m128d_f64[0];
      dVar66 = *(double *)(pFVar1 + 8) * local_138.Scale3D.XY.m128d_f64[1];
      dVar5 = *(double *)(pFVar2 + lVar13 + 0x10) * local_138.Scale3D.ZW.m128d_f64[0];
      dVar42 = local_138.Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar53 = blendpd(auVar54,(undefined1  [16])local_138.Rotation.ZW.m128d_f64,2);
      auVar60._8_4_ = SUB84(dVar66,0);
      auVar60._0_8_ = dVar47;
      uVar16 = (undefined4)((ulonglong)dVar66 >> 0x20);
      auVar60._12_4_ = uVar16;
      auVar23._8_4_ = SUB84(dVar66,0);
      auVar23._0_8_ = dVar47;
      auVar23._12_4_ = uVar16;
      auVar61._0_8_ =
           auVar60._8_8_ *
           (double)CONCAT44(local_138.Rotation.XY.m128d_f64[0]._4_4_,
                            local_138.Rotation.XY.m128d_f64[0]._0_4_) - dVar47 * auVar49._8_8_;
      auVar61._8_8_ =
           dVar5 * (double)CONCAT44(local_138.Rotation.XY.m128d_f64[1]._4_4_,
                                    local_138.Rotation.XY.m128d_f64[1]._0_4_) - dVar66 * dVar52;
      auVar6._8_4_ = SUB84(dVar42,0);
      auVar6._0_8_ = dVar5;
      auVar6._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      auVar19 = blendpd(auVar23,auVar6,2);
      auVar43._8_4_ = SUB84(auVar61._8_8_,0);
      auVar43._0_8_ = auVar61._0_8_;
      auVar43._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
      auVar24._0_8_ = auVar19._0_8_ * dVar52 - dVar5 * auVar53._0_8_;
      auVar24._8_8_ = auVar19._8_8_ * dVar50 - dVar42 * auVar53._8_8_;
      auVar19 = blendpd(auVar61,auVar24,2);
      dVar42 = auVar43._8_8_ + auVar43._8_8_;
      dVar46 = auVar24._0_8_ + auVar24._0_8_;
      auVar62._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar62._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      auVar36._8_4_ = SUB84(dVar46,0);
      auVar36._0_8_ = dVar42;
      uVar16 = (undefined4)((ulonglong)dVar46 >> 0x20);
      auVar36._12_4_ = uVar16;
      auVar25._8_4_ = SUB84(dVar46,0);
      auVar25._0_8_ = dVar42;
      auVar25._12_4_ = uVar16;
      auVar19 = blendpd(auVar25,auVar62,2);
      auVar37._0_8_ =
           auVar36._8_8_ *
           (double)CONCAT44(local_138.Rotation.XY.m128d_f64[0]._4_4_,
                            local_138.Rotation.XY.m128d_f64[0]._0_4_) - dVar42 * auVar49._8_8_;
      auVar37._8_8_ =
           auVar62._0_8_ *
           (double)CONCAT44(local_138.Rotation.XY.m128d_f64[1]._4_4_,
                            local_138.Rotation.XY.m128d_f64[1]._0_4_) - dVar46 * dVar52;
      auVar26._0_8_ = auVar19._0_8_ * dVar52 - auVar62._0_8_ * auVar53._0_8_;
      auVar26._8_8_ = auVar19._8_8_ * dVar50 - auVar62._8_8_ * auVar53._8_8_;
      auVar19 = blendpd(auVar37,auVar26,2);
      local_1b0._s_0.X =
           dVar42 * dVar50 + dVar47 + auVar37._8_8_ + local_138.Translation.XY.m128d_f64[0];
      local_1b0._s_0.Y =
           dVar46 * dVar50 + dVar66 + auVar26._0_8_ + local_138.Translation.XY.m128d_f64[1];
      local_1b0._s_0.Z =
           auVar62._0_8_ * dVar50 + dVar5 + auVar19._0_8_ + local_138.Translation.ZW.m128d_f64[0];
      DrawDebugLine(param_1,(TVector<double> *)&local_1c8._s_0,(TVector<double> *)&local_1b0._s_0,
                    (FColor *)&local_1d8._s_0,0.0 < param_4,param_4,'\0',param_3);
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x18;
      local_1c8._s_0.X = local_1b0._s_0.X;
      local_1c8._s_0.Y = local_1b0._s_0.Y;
      local_1c8._s_0.Z = local_1b0._s_0.Z;
    } while ((int)uVar12 < (this->BoundaryPolygon).ArrayNum);
    if (((this->BoundaryPolygon).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar50 = (double)CONCAT44(local_138.Rotation.XY.m128d_f64[0]._4_4_,
                              local_138.Rotation.XY.m128d_f64[0]._0_4_);
    auVar8._8_4_ = local_138.Rotation.XY.m128d_f64[1]._0_4_;
    auVar8._0_8_ = dVar50;
    auVar8._12_4_ = local_138.Rotation.XY.m128d_f64[1]._4_4_;
    pFVar1 = (this->BoundaryPolygon).AllocatorInstance.Data;
    dVar5 = local_138.Rotation.ZW.m128d_f64[0];
    dVar51 = auVar8._8_8_;
    auVar53 = blendpd(auVar8,(undefined1  [16])local_138.Rotation.ZW.m128d_f64,2);
    dVar46 = *(double *)pFVar1 * local_138.Scale3D.XY.m128d_f64[0];
    dVar47 = *(double *)(pFVar1 + 8) * local_138.Scale3D.XY.m128d_f64[1];
    uVar16 = (undefined4)((ulonglong)dVar47 >> 0x20);
    dVar66 = *(double *)(pFVar1 + 0x10) * local_138.Scale3D.ZW.m128d_f64[0];
    dVar52 = local_138.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar67._8_4_ = SUB84(dVar47,0);
    auVar67._0_8_ = dVar46;
    auVar67._12_4_ = uVar16;
    dVar42 = local_138.Rotation.ZW.m128d_f64[1];
    auVar27._8_4_ = SUB84(dVar47,0);
    auVar27._0_8_ = dVar46;
    auVar27._12_4_ = uVar16;
    auVar68._0_8_ = auVar67._8_8_ * dVar50 - dVar46 * dVar51;
    auVar68._8_8_ = dVar66 * dVar51 - dVar47 * dVar5;
    auVar7._8_4_ = SUB84(dVar52,0);
    auVar7._0_8_ = dVar66;
    auVar7._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
    auVar19 = blendpd(auVar27,auVar7,2);
    auVar55._8_4_ = SUB84(auVar68._8_8_,0);
    auVar55._0_8_ = auVar68._0_8_;
    auVar55._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
    auVar28._0_8_ = auVar19._0_8_ * dVar5 - dVar66 * auVar53._0_8_;
    auVar28._8_8_ = auVar19._8_8_ * dVar42 - dVar52 * auVar53._8_8_;
    auVar19 = blendpd(auVar68,auVar28,2);
    dVar52 = auVar55._8_8_ + auVar55._8_8_;
    dVar59 = auVar28._0_8_ + auVar28._0_8_;
    auVar69._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar69._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar38._8_4_ = SUB84(dVar59,0);
    auVar38._0_8_ = dVar52;
    uVar16 = (undefined4)((ulonglong)dVar59 >> 0x20);
    auVar38._12_4_ = uVar16;
    auVar29._8_4_ = SUB84(dVar59,0);
    auVar29._0_8_ = dVar52;
    auVar29._12_4_ = uVar16;
    auVar19 = blendpd(auVar29,auVar69,2);
    auVar39._0_8_ = auVar38._8_8_ * dVar50 - dVar52 * dVar51;
    auVar39._8_8_ = auVar69._0_8_ * dVar51 - dVar59 * dVar5;
    auVar30._0_8_ = auVar19._0_8_ * dVar5 - auVar69._0_8_ * auVar53._0_8_;
    auVar30._8_8_ = auVar19._8_8_ * dVar42 - auVar69._8_8_ * auVar53._8_8_;
    auVar19 = blendpd(auVar39,auVar30,2);
    local_170._s_0.X =
         dVar52 * dVar42 + dVar46 + auVar39._8_8_ + local_138.Translation.XY.m128d_f64[0];
    local_170._s_0.Y =
         dVar59 * dVar42 + dVar47 + auVar30._0_8_ + local_138.Translation.XY.m128d_f64[1];
    local_170._s_0.Z =
         auVar69._0_8_ * dVar42 + dVar66 + auVar19._0_8_ + local_138.Translation.ZW.m128d_f64[0];
    DrawDebugLine(param_1,(TVector<double> *)&local_1c8._s_0,(TVector<double> *)&local_170._s_0,
                  (FColor *)&local_1d8._s_0,0.0 < param_4,param_4,'\0',param_3);
  }
  dVar46 = (double)CONCAT44(local_138.Rotation.XY.m128d_f64[0]._4_4_,
                            local_138.Rotation.XY.m128d_f64[0]._0_4_);
  auVar9._8_4_ = local_138.Rotation.XY.m128d_f64[1]._0_4_;
  auVar9._0_8_ = dVar46;
  auVar9._12_4_ = local_138.Rotation.XY.m128d_f64[1]._4_4_;
  local_138.Scale3D.ZW.m128d_f64[0] =
       (this->Center).field0_0x0._s_0.Z * local_138.Scale3D.ZW.m128d_f64[0];
  local_138.Scale3D.ZW.m128d_f64[1] = local_138.Scale3D.ZW.m128d_f64[1] * 0.0;
  local_138.Scale3D.XY.m128d_f64[0] =
       local_138.Scale3D.XY.m128d_f64[0] * (this->Center).field0_0x0._s_0.X;
  local_138.Scale3D.XY.m128d_f64[1] =
       local_138.Scale3D.XY.m128d_f64[1] * (this->Center).field0_0x0._s_0.Y;
  dVar66 = local_138.Rotation.ZW.m128d_f64[0];
  dVar52 = local_138.Rotation.ZW.m128d_f64[1];
  dVar47 = auVar9._8_8_;
  auVar53 = blendpd(auVar9,(undefined1  [16])local_138.Rotation.ZW.m128d_f64,2);
  auVar56._8_4_ = SUB84(local_138.Scale3D.XY.m128d_f64[1],0);
  auVar56._0_8_ = local_138.Scale3D.XY.m128d_f64[0];
  uVar16 = (undefined4)((ulonglong)local_138.Scale3D.XY.m128d_f64[1] >> 0x20);
  auVar56._12_4_ = uVar16;
  local_158._16_8_ = local_138.Rotation.ZW.m128d_f64[0];
  local_158._24_8_ = local_138.Rotation.ZW.m128d_f64[1];
  auVar31._8_4_ = SUB84(local_138.Scale3D.XY.m128d_f64[1],0);
  auVar31._0_8_ = local_138.Scale3D.XY.m128d_f64[0];
  auVar31._12_4_ = uVar16;
  auVar4._8_4_ = SUB84(local_138.Scale3D.ZW.m128d_f64[1],0);
  auVar4._0_8_ = local_138.Scale3D.ZW.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)local_138.Scale3D.ZW.m128d_f64[1] >> 0x20);
  auVar19 = blendpd(auVar31,auVar4,2);
  auVar57._0_8_ = auVar56._8_8_ * dVar46 - dVar47 * local_138.Scale3D.XY.m128d_f64[0];
  auVar57._8_8_ =
       local_138.Scale3D.ZW.m128d_f64[0] * dVar47 - dVar66 * local_138.Scale3D.XY.m128d_f64[1];
  auVar32._0_8_ = auVar19._0_8_ * dVar66 - auVar53._0_8_ * local_138.Scale3D.ZW.m128d_f64[0];
  auVar32._8_8_ = auVar19._8_8_ * dVar52 - auVar53._8_8_ * local_138.Scale3D.ZW.m128d_f64[1];
  dVar5 = auVar57._8_8_ + auVar57._8_8_;
  dVar42 = auVar32._0_8_ + auVar32._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar42 >> 0x20);
  auVar19 = blendpd(auVar57,auVar32,2);
  auVar44._8_4_ = SUB84(dVar42,0);
  auVar44._0_8_ = dVar5;
  auVar44._12_4_ = uVar16;
  auVar33._8_4_ = local_138.Rotation.ZW.m128d_f64[1]._0_4_;
  auVar33._0_8_ = dVar52;
  auVar33._12_4_ = local_138.Rotation.ZW.m128d_f64[1]._4_4_;
  auVar58._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar58._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar45._0_8_ = auVar44._8_8_ * dVar46 - dVar47 * dVar5;
  auVar45._8_8_ = auVar58._0_8_ * dVar47 - dVar66 * dVar42;
  auVar40._8_4_ = SUB84(dVar42,0);
  auVar40._0_8_ = dVar5;
  auVar40._12_4_ = uVar16;
  auVar19 = blendpd(auVar40,auVar58,2);
  auVar41._0_8_ = auVar19._0_8_ * dVar66 - auVar53._0_8_ * auVar58._0_8_;
  auVar41._8_8_ = auVar19._8_8_ * dVar52 - auVar53._8_8_ * auVar58._8_8_;
  auVar19 = blendpd(auVar45,auVar41,2);
  local_188._s_0.X =
       dVar52 * dVar5 + local_138.Scale3D.XY.m128d_f64[0] + auVar45._8_8_ +
       local_138.Translation.XY.m128d_f64[0];
  local_188._s_0.Y =
       auVar33._8_8_ * dVar42 + local_138.Scale3D.XY.m128d_f64[1] + auVar41._0_8_ +
       local_138.Translation.XY.m128d_f64[1];
  local_188._s_0.Z =
       dVar52 * auVar58._0_8_ + local_138.Scale3D.ZW.m128d_f64[0] + auVar19._0_8_ +
       local_138.Translation.ZW.m128d_f64[0];
  DrawDebugBox(param_1,(TVector<double> *)&local_188._s_0,&this->Extent,(TQuat<double> *)local_158,
               (FColor *)&local_1d8._s_0,false,param_4,'\0',param_3 * __real_3dcccccd);
  local_1d4.ComparisonIndex.Value = *(uint *)&this->field_0x140;
  local_1d4.Number = *(uint *)&this->field_0x144;
  ::FName::ToString(&local_1d4,&local_198);
  ARDebugHelpers::DrawDebugString
            (param_1,(TVector<double> *)&local_188._s_0,&local_198,param_3 * __real_3e800000,
             (FColor *)&local_1d8._s_0,param_4,true);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNetworkPayload @ 14cf52a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARPlaneGeometry::GetNetworkPayload(UARPlaneGeometry *this,FARPlaneUpdatePayload *param_1)

{
  double dVar1;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_78);
  (param_1->WorldTransform).Rotation.XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
  (param_1->WorldTransform).Rotation.XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
  (param_1->WorldTransform).Translation.XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
  (param_1->WorldTransform).Translation.XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
  dVar1 = (this->Center).field0_0x0._s_0.Y;
  (param_1->Center).field0_0x0._s_0.X = (this->Center).field0_0x0._s_0.X;
  (param_1->Center).field0_0x0._s_0.Y = dVar1;
  (param_1->Center).field0_0x0._s_0.Z = (this->Center).field0_0x0._s_0.Z;
  dVar1 = (this->Extent).field0_0x0._s_0.Y;
  (param_1->Extents).field0_0x0._s_0.X = (this->Extent).field0_0x0._s_0.X;
  (param_1->Extents).field0_0x0._s_0.Y = dVar1;
  (param_1->Extents).field0_0x0._s_0.Z = (this->Extent).field0_0x0._s_0.Z;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->BoundaryVertices,&this->BoundaryPolygon);
  param_1->ObjectClassification = this->field_0x118;
  UARTrackedGeometry::UpdateSessionPayload((UARTrackedGeometry *)this,&param_1->SessionPayload);
  return;
}

// GetPrivateStaticClass @ 14cf54ea0

UClass * __cdecl UARPlaneGeometry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPlaneGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPlaneGeometry",
               &Z_Registration_Info_UClass_UARPlaneGeometry.InnerSingleton,
               StaticRegisterNativesUARPlaneGeometry,0x1b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARPlaneGeometry>,
               InternalVTableHelperCtorCaller<UARPlaneGeometry>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPlaneGeometry.InnerSingleton;
}

// StaticRegisterNativesUARPlaneGeometry @ 14cf61340

void __cdecl UARPlaneGeometry::StaticRegisterNativesUARPlaneGeometry(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UARPlaneGeometry_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateTrackedGeometry @ 14cf66e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UARPlaneGeometry::UpdateTrackedGeometry
          (UARPlaneGeometry *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5,
          TVector<double> *param_6,TVector<double> *param_7)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  double local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  double local_58;
  double dStack_50;
  undefined8 local_48;
  undefined8 local_40;
  double dStack_38;
  undefined8 local_30;
  
  UARTrackedGeometry::UpdateTrackedGeometry
            ((UARTrackedGeometry *)this,param_1,param_2,param_3,param_4,param_5);
  pTVar2 = &this->BoundaryPolygon;
  piVar1 = &(this->BoundaryPolygon).ArrayMax;
  dVar8 = (param_6->field0_0x0)._s_0.Y;
  dVar3 = (param_6->field0_0x0)._s_0.Z;
  (this->Center).field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar8;
  (this->Center).field0_0x0._s_0.Z = dVar3;
  dVar8 = (param_7->field0_0x0)._s_0.Y;
  dVar3 = (param_7->field0_0x0)._s_0.Z;
  (this->Extent).field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
  (this->Extent).field0_0x0._s_0.Y = dVar8;
  (this->Extent).field0_0x0._s_0.Z = dVar3;
  (this->BoundaryPolygon).ArrayNum = 0;
  if (*piVar1 != 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,4,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar10 = __xmm_80000000000000008000000000000000._4_4_;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  local_78 = 0;
  local_88 = *(uint *)&(this->Extent).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  uStack_84 = *(uint *)((longlong)&(this->Extent).field0_0x0 + 4) ^
              __xmm_80000000000000008000000000000000._4_4_;
  uStack_80 = *(uint *)((longlong)&(this->Extent).field0_0x0 + 8) ^ _UNK_15066df78;
  uStack_7c = *(uint *)((longlong)&(this->Extent).field0_0x0 + 0xc) ^ _UNK_15066df7c;
  if ((pFVar5 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 < pFVar5 + (longlong)*piVar1 * 0x18)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar12 = (this->BoundaryPolygon).ArrayNum;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  local_60 = 0;
  (this->BoundaryPolygon).ArrayNum = iVar12 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pFVar5 = pFVar6 + (longlong)iVar12 * 0x18;
  *(ulonglong *)pFVar5 = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18 + 0x10) = local_78;
  uVar4 = *(undefined8 *)((longlong)&(this->Extent).field0_0x0 + 8);
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  uStack_68 = CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar10,(uint)uVar4 ^ uVar9);
  local_70 = (this->Extent).field0_0x0._s_0.X;
  if ((pFVar5 <= (FScriptContainerElement *)&local_70) &&
     ((FScriptContainerElement *)&local_70 < pFVar5 + (longlong)*piVar1 * 0x18)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar12 = (this->BoundaryPolygon).ArrayNum;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  local_48 = 0;
  (this->BoundaryPolygon).ArrayNum = iVar12 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pFVar5 = pFVar6 + (longlong)iVar12 * 0x18;
  *(double *)pFVar5 = local_70;
  *(undefined8 *)(pFVar5 + 8) = uStack_68;
  *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18 + 0x10) = local_60;
  local_58 = (this->Extent).field0_0x0._s_0.X;
  dStack_50 = (this->Extent).field0_0x0._s_0.Y;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 0x18)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar12 = (this->BoundaryPolygon).ArrayNum;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  local_30 = 0;
  (this->BoundaryPolygon).ArrayNum = iVar12 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pFVar5 = pFVar6 + (longlong)iVar12 * 0x18;
  *(double *)pFVar5 = local_58;
  *(double *)(pFVar5 + 8) = dStack_50;
  *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18 + 0x10) = local_48;
  uVar4 = *(undefined8 *)&(this->Extent).field0_0x0;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  local_40 = CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar10,(uint)uVar4 ^ uVar9);
  dStack_38 = (this->Extent).field0_0x0._s_0.Y;
  if ((pFVar5 <= (FScriptContainerElement *)&local_40) &&
     ((FScriptContainerElement *)&local_40 < pFVar5 + (longlong)*piVar1 * 0x18)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar12 = (this->BoundaryPolygon).ArrayNum;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->BoundaryPolygon).ArrayNum = iVar12 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pFVar5 = pFVar6 + (longlong)iVar12 * 0x18;
  *(undefined8 *)pFVar5 = local_40;
  *(double *)(pFVar5 + 8) = dStack_38;
  *(undefined8 *)(pFVar6 + (longlong)iVar12 * 0x18 + 0x10) = local_30;
  (this->SubsumedBy).field0_0x0.DebugPtr = (UARPlaneGeometry *)0x0;
  return;
}

// UpdateTrackedGeometry @ 14cf67200

void __thiscall
UARPlaneGeometry::UpdateTrackedGeometry
          (UARPlaneGeometry *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5,
          TVector<double> *param_6,TVector<double> *param_7,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_8,
          UARPlaneGeometry *param_9)

{
  double dVar1;
  double dVar2;
  
  UARTrackedGeometry::UpdateTrackedGeometry
            ((UARTrackedGeometry *)this,param_1,param_2,param_3,param_4,param_5);
  dVar2 = (param_6->field0_0x0)._s_0.Y;
  dVar1 = (param_6->field0_0x0)._s_0.Z;
  (this->Center).field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar2;
  (this->Center).field0_0x0._s_0.Z = dVar1;
  dVar2 = (param_7->field0_0x0)._s_0.Y;
  dVar1 = (param_7->field0_0x0)._s_0.Z;
  (this->Extent).field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
  (this->Extent).field0_0x0._s_0.Y = dVar2;
  (this->Extent).field0_0x0._s_0.Z = dVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoundaryPolygon,param_8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_9 != (UARPlaneGeometry *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_9);
    }
    (this->SubsumedBy).field0_0x0.DebugPtr = param_9;
    return;
  }
  (this->SubsumedBy).field0_0x0.DebugPtr = param_9;
  return;
}

// execGetBoundaryPolygonInLocalSpace @ 14cf6d780

void __cdecl
UARPlaneGeometry::execGetBoundaryPolygonInLocalSpace(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[10].field_0x8;
  _Src = *(void **)(param_1 + 10);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 0x18);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetCenter @ 14cf6dc30

void __cdecl UARPlaneGeometry::execGetCenter(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)(param_1 + 9);
  uVar1 = *(undefined8 *)&param_1[9].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[8].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetExtent @ 14cf6e0c0

void __cdecl UARPlaneGeometry::execGetExtent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[9].field_0x18;
  uVar1 = *(undefined8 *)&param_1[9].field_0x20;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[9].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetOrientation @ 14cf6f360

void __cdecl UARPlaneGeometry::execGetOrientation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[8].field_0x18;
  return;
}

// execGetSubsumedBy @ 14cf6f6a0

void __cdecl UARPlaneGeometry::execGetSubsumedBy(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[10].field_0x10;
  return;
}

