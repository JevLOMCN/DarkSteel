// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1475871b0

UClass * __cdecl UTransformTrajectoryBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TransformTrajectoryBlueprintLibrary",
               &Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUTransformTrajectoryBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformTrajectoryBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTransformTrajectoryBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.InnerSingleton;
}

// UTransformTrajectoryBlueprintLibrary @ 1475a8430

UTransformTrajectoryBlueprintLibrary * __thiscall
UTransformTrajectoryBlueprintLibrary::UTransformTrajectoryBlueprintLibrary
          (UTransformTrajectoryBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTransformTrajectoryBlueprintLibrary__6B_;
  return this;
}

// UTransformTrajectoryBlueprintLibrary @ 1475a8460

UTransformTrajectoryBlueprintLibrary * __thiscall
UTransformTrajectoryBlueprintLibrary::UTransformTrajectoryBlueprintLibrary
          (UTransformTrajectoryBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTransformTrajectoryBlueprintLibrary__6B_;
  return this;
}

// ~UTransformTrajectoryBlueprintLibrary @ 1475aaee0

void __thiscall
UTransformTrajectoryBlueprintLibrary::~UTransformTrajectoryBlueprintLibrary
          (UTransformTrajectoryBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UTransformTrajectoryBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// DebugDrawTrajectory @ 1475bd6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UTransformTrajectoryBlueprintLibrary::DebugDrawTrajectory
          (FTransformTrajectory *param_1,FAnimInstanceProxy *param_2,float param_3,float param_4,
          int param_5,int param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  FColor *pFVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar22;
  double dVar23;
  uint uVar24;
  float fVar25;
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1b0;
  longlong local_198;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TRotator<double> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  iVar20 = 0;
  dVar6 = (double)param_4;
  dVar7 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar8 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar6 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if ((param_5 != -1) || (param_6 != -1)) {
    iVar13 = (param_1->Samples).ArrayNum;
    uVar16 = 0;
    if (0 < iVar13) {
      lVar17 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < iVar13) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (0.0 < *(float *)((param_1->Samples).AllocatorInstance.Data + lVar17 + 0x38)) break;
        iVar13 = (param_1->Samples).ArrayNum;
        iVar20 = iVar20 + 1;
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0x40;
      } while ((int)uVar16 < iVar13);
    }
  }
  dVar10 = __real_4028000000000000;
  iVar14 = (param_1->Samples).ArrayNum;
  iVar13 = iVar14 + -1;
  if (param_5 < 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    if (0 < iVar20 - param_5) {
      uVar16 = iVar20 - param_5;
    }
  }
  iVar15 = iVar13;
  if (-1 < param_6) {
    if (iVar20 + param_6 + -1 < iVar13) {
      iVar14 = iVar20 + param_6;
    }
    iVar15 = iVar14 + -1;
  }
  if ((-1 < iVar13) && ((int)uVar16 <= iVar15)) {
    lVar19 = (longlong)(int)uVar16;
    local_198 = (longlong)iVar15;
    lVar17 = lVar19 << 6;
    fVar25 = __real_bf800000;
    while( true ) {
      fVar9 = __real_3f800000;
      uVar21 = ~uVar16 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar16 < (param_1->Samples).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Samples).AllocatorInstance.Data;
      local_1b0._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar17 + 0x30);
      local_1b0._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar17 + 0x28);
      local_1b0._s_0.X = dVar7 + *(double *)(pFVar1 + lVar17 + 0x20);
      uVar12 = 0;
      if ((int)uVar16 < (param_1->Samples).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Samples).AllocatorInstance.Data;
      local_190._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar17 + 0x30);
      local_190._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar17 + 0x28);
      local_190._s_0.X = dVar7 + *(double *)(pFVar1 + lVar17 + 0x20);
      FAnimInstanceProxy::AnimDrawDebugSphere
                (param_2,(TVector<double> *)&local_190._s_0,fVar9,4,&FColor::Black,false,fVar25,
                 param_3,SDPG_Foreground);
      uVar12 = 0;
      if ((int)uVar16 < (param_1->Samples).ArrayNum) {
        uVar12 = uVar21;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Math::TRotator<double>::TRotator<double>
                (&local_128,(TQuat<double> *)((param_1->Samples).AllocatorInstance.Data + lVar17));
      dVar22 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
      dVar23 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
      __vdecl_sincos2();
      local_108._8_4_ = SUB84(dVar23,0);
      local_108._0_8_ = dVar22;
      local_108._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      __vdecl_sincos2();
      local_f8._8_4_ = SUB84(dVar23,0);
      local_f8._0_8_ = dVar22;
      local_f8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      dVar23 = dVar22 * (double)local_108._8_8_;
      uVar12 = 0;
      if ((int)uVar16 < (param_1->Samples).ArrayNum) {
        uVar12 = uVar21;
      }
      dVar4 = (double)local_108._8_8_ * (double)local_108._0_8_;
      dVar3 = extraout_XMM0_Qa_00 * extraout_XMM0_Qa * (double)local_108._8_8_;
      dVar5 = (double)local_108._0_8_ * extraout_XMM0_Qb;
      uVar21 = SUB84((double)local_108._0_8_ * extraout_XMM0_Qa_00,0) ^
               (uint)__xmm_80000000000000008000000000000000;
      uVar24 = (uint)((ulonglong)((double)local_108._0_8_ * extraout_XMM0_Qa_00) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar25 = __real_bf800000;
      pFVar18 = &FColor::Blue;
      bVar11 = *(float *)((param_1->Samples).AllocatorInstance.Data + lVar17 + 0x38) <= 0.0;
      local_178._s_0.X = dVar4 * dVar10 + local_1b0._s_0.X;
      local_178._s_0.Z = extraout_XMM0_Qa * dVar10 + local_1b0._s_0.Z;
      if (bVar11) {
        pFVar18 = &FColor::Red;
      }
      local_178._s_0.Y = dVar5 * dVar10 + local_1b0._s_0.Y;
      FAnimInstanceProxy::AnimDrawDebugLine
                (param_2,(TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_178._s_0,
                 pFVar18,false,__real_bf800000,param_3,SDPG_Foreground);
      pFVar18 = &FColor::Turquoise;
      if (bVar11) {
        pFVar18 = &FColor::Orange;
      }
      local_160._s_0.X = (dVar3 - dVar22 * extraout_XMM0_Qb) * dVar10 + local_1b0._s_0.X;
      local_160._s_0.Y =
           (extraout_XMM0_Qa_00 * extraout_XMM0_Qa * extraout_XMM0_Qb + dVar23) * dVar10 +
           local_1b0._s_0.Y;
      local_160._s_0.Z = (double)CONCAT44(uVar24,uVar21) * dVar10 + local_1b0._s_0.Z;
      FAnimInstanceProxy::AnimDrawDebugLine
                (param_2,(TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_160._s_0,
                 pFVar18,false,fVar25,param_3,SDPG_Foreground);
      if (lVar19 == local_198) break;
      uVar16 = uVar16 + 1;
      uVar12 = 0;
      if ((int)uVar16 < (param_1->Samples).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Samples).AllocatorInstance.Data;
      local_148._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar17 + 0x70);
      local_148._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar17 + 0x68);
      local_148._s_0.X = dVar7 + *(double *)(pFVar1 + lVar17 + 0x60);
      FAnimInstanceProxy::AnimDrawDebugLine
                (param_2,(TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_148._s_0,
                 &FColor::Black,false,fVar25,param_3,SDPG_Foreground);
      lVar19 = lVar19 + 1;
      lVar17 = lVar17 + 0x40;
    }
  }
  return;
}

// DebugDrawTrajectory @ 1475bdd10

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
UTransformTrajectoryBlueprintLibrary::DebugDrawTrajectory
          (FTransformTrajectory *param_1,UObject *param_2,FLogCategoryBase *param_3,Type param_4,
          float param_5,float param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FColor *pFVar14;
  FName *pFVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar20;
  double dVar21;
  uint uVar22;
  undefined1 auStackY_238 [32];
  FVisualLogEntry *local_1f8;
  TVector<double>_u_0 local_1f0;
  UWorld *local_1d8;
  FName *local_1d0;
  longlong local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TRotator<double> local_130;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar15 = &param_3->CategoryName;
  local_1d8 = (UWorld *)0x0;
  local_1f8 = (FVisualLogEntry *)0x0;
  local_1d0 = pFVar15;
  bVar11 = FVisualLogger::CheckVisualLogInputInternal(param_2,pFVar15,param_4,&local_1d8,&local_1f8)
  ;
  dVar10 = __real_4028000000000000;
  if (bVar11) {
    iVar12 = (param_1->Samples).ArrayNum + -1;
    dVar6 = (double)param_6;
    dVar7 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    dVar8 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    dVar6 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    if (-1 < iVar12) {
      lVar16 = 0;
      uVar19 = 0;
      local_1c8 = (longlong)iVar12;
      lVar18 = 0;
      while( true ) {
        fVar9 = __real_3f800000;
        uVar17 = ~uVar19 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar19 < (param_1->Samples).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->Samples).AllocatorInstance.Data;
        local_1f0._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar18 + 0x30);
        local_1f0._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar18 + 0x28);
        local_1f0._s_0.X = dVar7 + *(double *)(pFVar1 + lVar18 + 0x20);
        ::FString::FString(&local_1c0,L"");
        FVisualLogEntry::AddSphere
                  (local_1f8,(TVector<double> *)&local_1f0._s_0,fVar9,pFVar15,param_4,&FColor::Black
                   ,&local_1c0,true);
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        uVar13 = 0;
        if ((int)uVar19 < (param_1->Samples).ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::Math::TRotator<double>::TRotator<double>
                  (&local_130,(TQuat<double> *)((param_1->Samples).AllocatorInstance.Data + lVar18))
        ;
        dVar20 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
        dVar21 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
        __vdecl_sincos2();
        local_118._8_4_ = SUB84(dVar21,0);
        local_118._0_8_ = dVar20;
        local_118._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        __vdecl_sincos2();
        local_108._8_4_ = SUB84(dVar21,0);
        local_108._0_8_ = dVar20;
        local_108._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        dVar21 = dVar20 * (double)local_118._8_8_;
        uVar13 = 0;
        if ((int)uVar19 < (param_1->Samples).ArrayNum) {
          uVar13 = uVar17;
        }
        dVar4 = (double)local_118._8_8_ * (double)local_118._0_8_;
        dVar5 = (double)local_118._0_8_ * extraout_XMM0_Qb;
        dVar3 = (double)local_118._8_8_ * extraout_XMM0_Qa_00 * extraout_XMM0_Qa;
        uVar17 = SUB84((double)local_118._0_8_ * extraout_XMM0_Qa_00,0) ^
                 (uint)__xmm_80000000000000008000000000000000;
        uVar22 = (uint)((ulonglong)((double)local_118._0_8_ * extraout_XMM0_Qa_00) >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar11 = *(float *)((param_1->Samples).AllocatorInstance.Data + lVar18 + 0x38) <= 0.0;
        ::FString::FString(&local_1b0,L"");
        pFVar15 = local_1d0;
        pFVar14 = &FColor::Blue;
        if (bVar11) {
          pFVar14 = &FColor::Red;
        }
        local_180._s_0.X = dVar4 * dVar10 + local_1f0._s_0.X;
        local_180._s_0.Y = dVar5 * dVar10 + local_1f0._s_0.Y;
        local_180._s_0.Z = extraout_XMM0_Qa * dVar10 + local_1f0._s_0.Z;
        FVisualLogEntry::AddSegment
                  (local_1f8,(TVector<double> *)&local_1f0._s_0,(TVector<double> *)&local_180._s_0,
                   local_1d0,param_4,pFVar14,&local_1b0,(ushort)(int)param_5);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_1a0,L"");
        pFVar14 = &FColor::Turquoise;
        if (bVar11) {
          pFVar14 = &FColor::Orange;
        }
        local_168._s_0.X = (dVar3 - dVar20 * extraout_XMM0_Qb) * dVar10 + local_1f0._s_0.X;
        local_168._s_0.Y =
             (dVar21 + extraout_XMM0_Qb * extraout_XMM0_Qa_00 * extraout_XMM0_Qa) * dVar10 +
             local_1f0._s_0.Y;
        local_168._s_0.Z = (double)CONCAT44(uVar22,uVar17) * dVar10 + local_1f0._s_0.Z;
        FVisualLogEntry::AddSegment
                  (local_1f8,(TVector<double> *)&local_1f0._s_0,(TVector<double> *)&local_168._s_0,
                   pFVar15,param_4,pFVar14,&local_1a0,(ushort)(int)param_5);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (lVar16 == local_1c8) break;
        uVar19 = uVar19 + 1;
        uVar13 = 0;
        if ((int)uVar19 < (param_1->Samples).ArrayNum) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->Samples).AllocatorInstance.Data;
        local_150._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar18 + 0x70);
        local_150._s_0.Y = dVar8 + *(double *)(pFVar1 + lVar18 + 0x68);
        local_150._s_0.X = dVar7 + *(double *)(pFVar1 + lVar18 + 0x60);
        ::FString::FString(&local_190,L"");
        FVisualLogEntry::AddSegment
                  (local_1f8,(TVector<double> *)&local_1f0._s_0,(TVector<double> *)&local_150._s_0,
                   pFVar15,param_4,&FColor::Black,&local_190,(ushort)(int)param_5);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        lVar16 = lVar16 + 1;
        lVar18 = lVar18 + 0x40;
      }
    }
  }
  return;
}

// DebugDrawTrajectory @ 1475be330

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
UTransformTrajectoryBlueprintLibrary::DebugDrawTrajectory
          (FTransformTrajectory *param_1,UWorld *param_2,float param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FColor *pFVar15;
  longlong lVar16;
  uint uVar17;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar18;
  double dVar19;
  uint uVar20;
  undefined1 auStackY_1f8 [32];
  TVector<double>_u_0 local_1a8;
  longlong local_190;
  double local_188;
  double local_180;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TRotator<double> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  dVar9 = __real_4028000000000000;
  fVar8 = __real_bf800000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  iVar11 = (param_1->Samples).ArrayNum + -1;
  dVar6 = (double)param_4;
  dVar18 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar19 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar6 = dVar6 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  if (-1 < iVar11) {
    lVar16 = 0;
    uVar17 = 0;
    local_190 = (longlong)iVar11;
    lVar14 = 0;
    local_188 = dVar19;
    local_180 = dVar18;
    while( true ) {
      fVar7 = __real_3f800000;
      uVar13 = ~uVar17 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar17 < (param_1->Samples).ArrayNum) {
        uVar12 = uVar13;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->Samples).AllocatorInstance.Data;
      local_1a8._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar14 + 0x30);
      local_1a8._s_0.Y = dVar19 + *(double *)(pFVar1 + lVar14 + 0x28);
      local_1a8._s_0.X = dVar18 + *(double *)(pFVar1 + lVar14 + 0x20);
      DrawDebugSphere(param_2,(TVector<double> *)&local_1a8._s_0,fVar7,4,&FColor::Black,false,fVar8,
                      '\x01',param_3);
      uVar12 = 0;
      if ((int)uVar17 < (param_1->Samples).ArrayNum) {
        uVar12 = uVar13;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Math::TRotator<double>::TRotator<double>
                (&local_128,(TQuat<double> *)((param_1->Samples).AllocatorInstance.Data + lVar14));
      dVar18 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
      dVar19 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
      __vdecl_sincos2();
      local_108._8_4_ = SUB84(dVar19,0);
      local_108._0_8_ = dVar18;
      local_108._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      __vdecl_sincos2();
      local_f8._8_4_ = SUB84(dVar19,0);
      local_f8._0_8_ = dVar18;
      local_f8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      dVar19 = dVar18 * (double)local_108._8_8_;
      uVar12 = 0;
      if ((int)uVar17 < (param_1->Samples).ArrayNum) {
        uVar12 = uVar13;
      }
      dVar4 = (double)local_108._8_8_ * (double)local_108._0_8_;
      dVar5 = (double)local_108._0_8_ * extraout_XMM0_Qb;
      dVar3 = (double)local_108._8_8_ * extraout_XMM0_Qa_00 * extraout_XMM0_Qa;
      uVar13 = SUB84((double)local_108._0_8_ * extraout_XMM0_Qa_00,0) ^
               (uint)__xmm_80000000000000008000000000000000;
      uVar20 = (uint)((ulonglong)((double)local_108._0_8_ * extraout_XMM0_Qa_00) >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = &FColor::Blue;
      bVar10 = *(float *)((param_1->Samples).AllocatorInstance.Data + lVar14 + 0x38) <= 0.0;
      local_178._s_0.X = dVar4 * dVar9 + local_1a8._s_0.X;
      local_178._s_0.Y = dVar5 * dVar9 + local_1a8._s_0.Y;
      if (bVar10) {
        pFVar15 = &FColor::Red;
      }
      local_178._s_0.Z = extraout_XMM0_Qa * dVar9 + local_1a8._s_0.Z;
      DrawDebugLine(param_2,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_178._s_0,
                    pFVar15,false,fVar8,'\x01',param_3);
      pFVar15 = &FColor::Turquoise;
      if (bVar10) {
        pFVar15 = &FColor::Orange;
      }
      local_160._s_0.X = (dVar3 - dVar18 * extraout_XMM0_Qb) * dVar9 + local_1a8._s_0.X;
      local_160._s_0.Y =
           (dVar19 + extraout_XMM0_Qb * extraout_XMM0_Qa_00 * extraout_XMM0_Qa) * dVar9 +
           local_1a8._s_0.Y;
      local_160._s_0.Z = (double)CONCAT44(uVar20,uVar13) * dVar9 + local_1a8._s_0.Z;
      DrawDebugLine(param_2,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_160._s_0,
                    pFVar15,false,fVar8,'\x01',param_3);
      if (lVar16 == local_190) break;
      uVar17 = uVar17 + 1;
      uVar12 = 0;
      if ((int)uVar17 < (param_1->Samples).ArrayNum) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      dVar18 = local_180;
      dVar19 = local_188;
      pFVar1 = (param_1->Samples).AllocatorInstance.Data;
      local_148._s_0.Z = dVar6 + *(double *)(pFVar1 + lVar14 + 0x70);
      local_148._s_0.Y = local_188 + *(double *)(pFVar1 + lVar14 + 0x68);
      local_148._s_0.X = local_180 + *(double *)(pFVar1 + lVar14 + 0x60);
      DrawDebugLine(param_2,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_148._s_0,
                    &FColor::Black,false,fVar8,'\x01',param_3);
      lVar16 = lVar16 + 1;
      lVar14 = lVar14 + 0x40;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1475dc0c0

UClass * __cdecl UTransformTrajectoryBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TransformTrajectoryBlueprintLibrary",
               &Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUTransformTrajectoryBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformTrajectoryBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTransformTrajectoryBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUTransformTrajectoryBlueprintLibrary @ 1475fee70

void __cdecl
UTransformTrajectoryBlueprintLibrary::StaticRegisterNativesUTransformTrajectoryBlueprintLibrary
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDebugDrawTrajectory @ 1476067b0

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
UTransformTrajectoryBlueprintLibrary::execDebugDrawTrajectory
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTransformTrajectory *pFVar2;
  float local_res10 [2];
  float local_res20 [2];
  UWorld *local_28;
  FTransformTrajectory local_20;
  
  local_20.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Samples.ArrayNum = 0;
  local_20.Samples.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28 = (UWorld *)0x0;
  pFVar2 = &local_20;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    pFVar2 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DebugDrawTrajectory(pFVar2,local_28,local_res20[0],local_res10[0]);
  if (local_20.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Samples.AllocatorInstance.Data);
  }
  return;
}

