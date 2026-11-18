// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 28

// StaticClass @ 1463eac40

UClass * __cdecl UKismetAnimationLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetAnimationLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"KismetAnimationLibrary",
               &Z_Registration_Info_UClass_UKismetAnimationLibrary.InnerSingleton,
               StaticRegisterNativesUKismetAnimationLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetAnimationLibrary>,
               InternalVTableHelperCtorCaller<UKismetAnimationLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetAnimationLibrary.InnerSingleton;
}

// UKismetAnimationLibrary @ 1464078c0

UKismetAnimationLibrary * __thiscall
UKismetAnimationLibrary::UKismetAnimationLibrary
          (UKismetAnimationLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetAnimationLibrary__6B_;
  return this;
}

// UKismetAnimationLibrary @ 1464078f0

UKismetAnimationLibrary * __thiscall
UKismetAnimationLibrary::UKismetAnimationLibrary
          (UKismetAnimationLibrary *this,FObjectInitializer *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FText local_38;
  FBlueprintWarningDeclaration local_28;
  
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetAnimationLibrary__6B_;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UKismetAnimationLibrary",L"AnimationLibraryWarning",
                      L"Animation Library Warning");
  local_28.WarningIdentifier = AnimationLibraryWarning;
  local_28.WarningDescription.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 8))
              (local_28.WarningDescription.TextData.Reference,local_res8);
  }
  local_28.WarningDescription.Flags = pFVar2->Flags;
  pIVar1 = (pFVar2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FBlueprintSupport::RegisterBlueprintWarning(&local_28);
  if (local_28.WarningDescription.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.WarningDescription.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UKismetAnimationLibrary @ 146409770

void __thiscall UKismetAnimationLibrary::~UKismetAnimationLibrary(UKismetAnimationLibrary *this)

{
  *(undefined ***)this = &___7UKismetAnimationLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CalculateDirection @ 14641d060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl
UKismetAnimationLibrary::CalculateDirection(TVector<double> *param_1,TRotator<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  float fVar6;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_e8 [48];
  double local_b8;
  double dStack_b0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_e8;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return 0.0;
  }
  dVar7 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
  dVar10 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
  __vdecl_sincos2();
  uVar13 = 0;
  uVar14 = 0;
  local_b8 = dVar7;
  dStack_b0 = dVar10;
  __vdecl_sincos2();
  dVar8 = dVar7 * dStack_b0;
  dVar10 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = extraout_XMM0_Qa_00 * extraout_XMM0_Qa * dStack_b0;
  uVar15 = SUB84(local_b8 * extraout_XMM0_Qa_00,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)(local_b8 * extraout_XMM0_Qa_00) >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  dVar9 = dVar1 * dVar1 + dVar10 * dVar10;
  if (dVar9 == __real_3ff0000000000000) {
    if ((param_1->field0_0x0)._s_0.Z == 0.0) {
      auVar3 = *(undefined1 (*) [16])&param_1->field0_0x0;
      dVar1 = auVar3._0_8_;
      uVar11 = auVar3._8_4_;
      uVar12 = auVar3._12_4_;
      uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
      uVar13 = (undefined4)uVar2;
      uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
      goto LAB_14641d221;
    }
  }
  else {
    if (dVar9 < __real_3e45798ee0000000) {
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar14 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      dVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      goto LAB_14641d221;
    }
    dVar1 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar9));
    dVar10 = dVar10 * (__real_3ff0000000000000 / SQRT(dVar9));
  }
  uVar11 = SUB84(dVar10,0);
  uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
LAB_14641d221:
  fVar6 = (float)(local_b8 * extraout_XMM0_Qb * (double)CONCAT44(uVar12,uVar11) +
                  dStack_b0 * local_b8 * dVar1 + extraout_XMM0_Qa * (double)CONCAT44(uVar14,uVar13))
  ;
  fVar5 = __real_bf800000;
  if ((__real_bf800000 <= fVar6) && (fVar5 = fVar6, __real_3f800000 <= fVar6)) {
    fVar5 = __real_3f800000;
  }
  fVar6 = acosf(fVar5);
  fVar5 = __real_42652ee0;
  if ((float)((extraout_XMM0_Qa_00 * extraout_XMM0_Qa * extraout_XMM0_Qb + dVar8) *
              (double)CONCAT44(uVar12,uVar11) + (dVar4 - dVar7 * extraout_XMM0_Qb) * dVar1 +
             (double)CONCAT44(uVar16,uVar15) * (double)CONCAT44(uVar14,uVar13)) < 0.0) {
    fVar5 = __real_c2652ee0;
  }
  return fVar6 * fVar5;
}

// GetPrivateStaticClass @ 14644d2a0

UClass * __cdecl UKismetAnimationLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetAnimationLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"KismetAnimationLibrary",
               &Z_Registration_Info_UClass_UKismetAnimationLibrary.InnerSingleton,
               StaticRegisterNativesUKismetAnimationLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetAnimationLibrary>,
               InternalVTableHelperCtorCaller<UKismetAnimationLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetAnimationLibrary.InnerSingleton;
}

// K2_CalculateVelocityFromPositionHistory @ 14645c1c0

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory
          (float param_1,TVector<double> *param_2,FPositionHistory *param_3,int param_4,
          float param_5,float param_6)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  float local_68;
  undefined4 local_64 [15];
  
  uVar10 = 2;
  if (2 < (uint)param_4) {
    uVar10 = param_4;
  }
  if (0.0 < param_1) {
    uVar9 = 0;
    uVar15 = 0;
    piVar1 = &(param_3->Positions).ArrayMax;
    if ((int)uVar10 < (param_3->Positions).ArrayNum) {
      (param_3->Positions).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)param_3,0,piVar1);
      }
      (param_3->Velocities).ArrayNum = 0;
      if ((param_3->Velocities).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(param_3->Velocities).AllocatorInstance,0,&(param_3->Velocities).ArrayMax)
        ;
      }
      param_3->LastIndex = 0;
    }
    piVar2 = &(param_3->Positions).ArrayNum;
    iVar7 = *piVar2;
    if (iVar7 == (param_3->Velocities).ArrayNum) {
      if (iVar7 == 0) {
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        if (*piVar1 < (int)uVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar10,(ForAnyElementType *)param_3,0,piVar1);
        }
        piVar16 = &(param_3->Positions).ArrayMax;
        piVar2 = &(param_3->Velocities).ArrayMax;
        if ((param_3->Velocities).ArrayMax < (int)uVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar10,&(param_3->Velocities).AllocatorInstance,
                     (param_3->Velocities).ArrayNum,piVar2);
        }
        pFVar3 = (param_3->Positions).AllocatorInstance.Data;
        if (((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)*piVar16 * 0x18)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar17 = (float)(*pcVar5)();
          return fVar17;
        }
        pTVar12 = &param_3->Velocities;
        iVar7 = (param_3->Positions).ArrayNum;
        if (iVar7 == *piVar16) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)param_3,piVar1);
        }
        dVar20 = (param_2->field0_0x0)._s_0.X;
        dVar21 = (param_2->field0_0x0)._s_0.Y;
        local_64[0] = 0;
        (param_3->Positions).ArrayNum = iVar7 + 1;
        pFVar4 = (param_3->Positions).AllocatorInstance.Data;
        pFVar3 = pFVar4 + (longlong)iVar7 * 0x18;
        *(double *)pFVar3 = dVar20;
        *(double *)(pFVar3 + 8) = dVar21;
        *(double *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
        pFVar3 = (pTVar12->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_64) &&
            ((FScriptContainerElement *)local_64 <
             pFVar3 + (longlong)(param_3->Velocities).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar17 = (float)(*pcVar5)();
          return fVar17;
        }
        iVar7 = (param_3->Velocities).ArrayNum;
        if (iVar7 == (param_3->Velocities).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar12->AllocatorInstance,piVar2);
          (param_3->Velocities).ArrayNum = iVar7;
        }
        (param_3->Velocities).ArrayNum = iVar7 + 1;
        *(undefined4 *)((pTVar12->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_64[0];
        param_3->LastIndex = 0;
        return 0.0;
      }
      uVar11 = param_3->LastIndex;
      lVar14 = (longlong)(int)uVar11;
      uVar8 = 0;
      if ((int)uVar11 < iVar7) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar17 = (float)(*pcVar5)();
        return fVar17;
      }
      pFVar3 = (param_3->Positions).AllocatorInstance.Data;
      uVar11 = *piVar2;
      dVar20 = __real_3ff0000000000000 / (double)param_1;
      dVar22 = ((param_2->field0_0x0)._s_0.Y - *(double *)(pFVar3 + lVar14 * 0x18 + 8)) * dVar20;
      dVar21 = ((param_2->field0_0x0)._s_0.X - *(double *)&pFVar3[lVar14 * 0x18].field_0x0) * dVar20
      ;
      dVar20 = ((param_2->field0_0x0)._s_0.Z - *(double *)(pFVar3 + lVar14 * 0x18 + 0x10)) * dVar20;
      auVar18._0_8_ = dVar20 * dVar20;
      auVar18._8_8_ = 0;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar22 * dVar22 + dVar21 * dVar21 + auVar18._0_8_;
      auVar19 = sqrtpd(auVar18,auVar19);
      local_68 = (float)auVar19._0_8_;
      if (uVar11 == uVar10) {
        dVar21 = (param_2->field0_0x0)._s_0.X;
        dVar22 = (param_2->field0_0x0)._s_0.Y;
        uVar8 = param_3->LastIndex + 1;
        dVar20 = (param_2->field0_0x0)._s_0.Z;
        uVar10 = uVar15;
        if (uVar8 != uVar11) {
          uVar10 = uVar8;
        }
        uVar8 = uVar15;
        if ((int)uVar10 < (int)uVar11) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar17 = (float)(*pcVar5)();
          return fVar17;
        }
        fVar17 = local_68;
        pFVar4 = (param_3->Positions).AllocatorInstance.Data;
        lVar14 = (longlong)(int)uVar10;
        pFVar3 = pFVar4 + lVar14 * 0x18;
        *(double *)pFVar3 = dVar21;
        *(double *)(pFVar3 + 8) = dVar22;
        *(double *)(pFVar4 + lVar14 * 0x18 + 0x10) = dVar20;
        uVar11 = uVar15;
        if ((int)uVar10 < (param_3->Velocities).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar17 = (float)(*pcVar5)();
          return fVar17;
        }
        *(float *)((param_3->Velocities).AllocatorInstance.Data + lVar14 * 4) = fVar17;
        param_3->LastIndex = uVar10;
      }
      else {
        param_3->LastIndex = uVar11;
        if (((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)*piVar1 * 0x18)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar17 = (float)(*pcVar5)();
          return fVar17;
        }
        iVar7 = (param_3->Positions).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)param_3,piVar1);
        }
        dVar20 = (param_2->field0_0x0)._s_0.X;
        dVar21 = (param_2->field0_0x0)._s_0.Y;
        *piVar2 = iVar7 + 1;
        pFVar4 = (param_3->Positions).AllocatorInstance.Data;
        pFVar3 = pFVar4 + (longlong)iVar7 * 0x18;
        *(double *)pFVar3 = dVar20;
        *(double *)(pFVar3 + 8) = dVar21;
        *(double *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
        pFVar3 = (param_3->Velocities).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar3 + (longlong)(param_3->Velocities).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar17 = (float)(*pcVar5)();
          return fVar17;
        }
        iVar7 = (param_3->Velocities).ArrayNum;
        if (iVar7 == (param_3->Velocities).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->Velocities).AllocatorInstance,
                             &(param_3->Velocities).ArrayMax);
        }
        (param_3->Velocities).ArrayNum = iVar7 + 1;
        *(float *)((param_3->Velocities).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_68;
      }
      piVar1 = &(param_3->Velocities).ArrayNum;
      iVar7 = *piVar1;
      fVar17 = 0.0;
      uVar13 = uVar9;
      if (0 < iVar7) {
        do {
          uVar11 = (uint)uVar13;
          uVar10 = uVar15;
          if ((int)uVar11 < *piVar1) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            fVar17 = (float)(*pcVar5)();
            return fVar17;
          }
          fVar17 = fVar17 + *(float *)((param_3->Velocities).AllocatorInstance.Data + uVar9);
          iVar7 = (param_3->Velocities).ArrayNum;
          uVar9 = uVar9 + 4;
          uVar13 = (ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < iVar7);
      }
      fVar17 = fVar17 / (float)iVar7;
      if (param_5 < 0.0) {
        return fVar17;
      }
      if (param_6 < 0.0) {
        return fVar17;
      }
      if (param_6 <= param_5) {
        return fVar17;
      }
      fVar17 = (fVar17 - param_5) / (param_6 - param_5);
      if (__real_3f800000 <= fVar17) {
        fVar17 = __real_3f800000;
      }
      if (0.0 < fVar17) {
        return fVar17;
      }
      return 0.0;
    }
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    }
  }
  return 0.0;
}

// K2_CalculateVelocityFromSockets @ 14645c860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl
UKismetAnimationLibrary::K2_CalculateVelocityFromSockets
          (float param_1,USkeletalMeshComponent *param_2,FName param_3,FName param_4,
          ERelativeTransformSpace param_5,TVector<double> *param_6,FPositionHistory *param_7,
          int param_8,float param_9,float param_10,EEasingFuncType param_11,
          FRuntimeFloatCurve *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TTransform<double> *pTVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStackY_228 [32];
  TVector<double>_u_0 local_1f8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_2 != (USkeletalMeshComponent *)0x0) && (param_3 != (FName)0x0)) {
    (**(code **)(param_2->_padding_ + 0x520))(param_2,&local_1d8,param_3,param_5);
    if (param_4 != (FName)0x0) {
      (**(code **)(param_2->_padding_ + 0x520))(param_2,&local_178,param_4,param_5);
      pTVar6 = UE::Math::TTransform<double>::GetRelativeTransform(&local_1d8,&local_118,&local_178);
      local_1d8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar6->Rotation).XY.m128d_f64;
      local_1d8.Rotation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Rotation).XY.m128d_f64 + 4);
      local_1d8.Rotation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar6->Rotation).XY.m128d_f64 + 1);
      local_1d8.Rotation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Rotation).XY.m128d_f64 + 0xc);
      local_1d8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar6->Rotation).ZW.m128d_f64;
      local_1d8.Rotation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Rotation).ZW.m128d_f64 + 4);
      local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar6->Rotation).ZW.m128d_f64 + 1);
      local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Rotation).ZW.m128d_f64 + 0xc);
      local_1d8.Translation.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(pTVar6->Translation).XY.m128d_f64;
      local_1d8.Translation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Translation).XY.m128d_f64 + 4);
      local_1d8.Translation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar6->Translation).XY.m128d_f64 + 1);
      local_1d8.Translation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Translation).XY.m128d_f64 + 0xc);
      local_1d8.Translation.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(pTVar6->Translation).ZW.m128d_f64;
      local_1d8.Translation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Translation).ZW.m128d_f64 + 4);
      local_1d8.Translation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar6->Translation).ZW.m128d_f64 + 1);
      local_1d8.Translation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Translation).ZW.m128d_f64 + 0xc);
      local_1d8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar6->Scale3D).XY.m128d_f64;
      local_1d8.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Scale3D).XY.m128d_f64 + 4);
      local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar6->Scale3D).XY.m128d_f64 + 1);
      local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Scale3D).XY.m128d_f64 + 0xc);
      local_1d8.Scale3D.ZW.m128d_f64[0] = (pTVar6->Scale3D).ZW.m128d_f64[0];
      local_1d8.Scale3D.ZW.m128d_f64[1] = (pTVar6->Scale3D).ZW.m128d_f64[1];
    }
    auVar15._4_4_ = local_1d8.Rotation.XY.m128d_f64[0]._4_4_;
    auVar15._0_4_ = local_1d8.Rotation.XY.m128d_f64[0]._0_4_;
    auVar15._8_4_ = local_1d8.Rotation.XY.m128d_f64[1]._0_4_;
    auVar15._12_4_ = local_1d8.Rotation.XY.m128d_f64[1]._4_4_;
    auVar16._4_4_ = local_1d8.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar16._0_4_ = local_1d8.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar16._8_4_ = local_1d8.Rotation.ZW.m128d_f64[1]._0_4_;
    auVar16._12_4_ = local_1d8.Rotation.ZW.m128d_f64[1]._4_4_;
    auVar16 = blendpd(auVar15,auVar16,2);
    dVar4 = (double)CONCAT44(local_1d8.Scale3D.XY.m128d_f64[0]._4_4_,
                             local_1d8.Scale3D.XY.m128d_f64[0]._0_4_) * (param_6->field0_0x0)._s_0.X
    ;
    dVar5 = (double)CONCAT44(local_1d8.Scale3D.XY.m128d_f64[1]._4_4_,
                             local_1d8.Scale3D.XY.m128d_f64[1]._0_4_) * (param_6->field0_0x0)._s_0.Y
    ;
    uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar2 = (param_6->field0_0x0)._s_0.Z * local_1d8.Scale3D.ZW.m128d_f64[0];
    dVar3 = local_1d8.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar18._8_4_ = SUB84(dVar5,0);
    auVar18._0_8_ = dVar4;
    auVar18._12_4_ = uVar17;
    auVar8._8_4_ = SUB84(dVar5,0);
    auVar8._0_8_ = dVar4;
    auVar8._12_4_ = uVar17;
    auVar19._0_8_ =
         auVar18._8_8_ *
         (double)CONCAT44(local_1d8.Rotation.XY.m128d_f64[0]._4_4_,
                          local_1d8.Rotation.XY.m128d_f64[0]._0_4_) -
         (double)CONCAT44(local_1d8.Rotation.XY.m128d_f64[1]._4_4_,
                          local_1d8.Rotation.XY.m128d_f64[1]._0_4_) * dVar4;
    auVar19._8_8_ =
         dVar2 * (double)CONCAT44(local_1d8.Rotation.XY.m128d_f64[1]._4_4_,
                                  local_1d8.Rotation.XY.m128d_f64[1]._0_4_) -
         (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[0]._4_4_,
                          local_1d8.Rotation.ZW.m128d_f64[0]._0_4_) * dVar5;
    auVar9._8_4_ = SUB84(dVar3,0);
    auVar9._0_8_ = dVar2;
    auVar9._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar9 = blendpd(auVar8,auVar9,2);
    auVar10._0_8_ =
         auVar9._0_8_ *
         (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[0]._4_4_,
                          local_1d8.Rotation.ZW.m128d_f64[0]._0_4_) - auVar16._0_8_ * dVar2;
    auVar10._8_8_ =
         auVar9._8_8_ *
         (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[1]._4_4_,
                          local_1d8.Rotation.ZW.m128d_f64[1]._0_4_) - auVar16._8_8_ * dVar3;
    auVar9 = blendpd(auVar19,auVar10,2);
    dVar3 = auVar19._8_8_ + auVar19._8_8_;
    dVar1 = auVar10._0_8_ + auVar10._0_8_;
    uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar20._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar20._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    auVar13._8_4_ = SUB84(dVar1,0);
    auVar13._0_8_ = dVar3;
    auVar13._12_4_ = uVar17;
    auVar11._8_4_ = SUB84(dVar1,0);
    auVar11._0_8_ = dVar3;
    auVar11._12_4_ = uVar17;
    auVar9 = blendpd(auVar11,auVar20,2);
    auVar14._0_8_ =
         auVar13._8_8_ *
         (double)CONCAT44(local_1d8.Rotation.XY.m128d_f64[0]._4_4_,
                          local_1d8.Rotation.XY.m128d_f64[0]._0_4_) -
         dVar3 * (double)CONCAT44(local_1d8.Rotation.XY.m128d_f64[1]._4_4_,
                                  local_1d8.Rotation.XY.m128d_f64[1]._0_4_);
    auVar14._8_8_ =
         auVar20._0_8_ *
         (double)CONCAT44(local_1d8.Rotation.XY.m128d_f64[1]._4_4_,
                          local_1d8.Rotation.XY.m128d_f64[1]._0_4_) -
         dVar1 * (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[0]._4_4_,
                                  local_1d8.Rotation.ZW.m128d_f64[0]._0_4_);
    auVar12._0_8_ =
         auVar9._0_8_ *
         (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[0]._4_4_,
                          local_1d8.Rotation.ZW.m128d_f64[0]._0_4_) - auVar20._0_8_ * auVar16._0_8_;
    auVar12._8_8_ =
         auVar9._8_8_ *
         (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[1]._4_4_,
                          local_1d8.Rotation.ZW.m128d_f64[1]._0_4_) - auVar20._8_8_ * auVar16._8_8_;
    auVar9 = blendpd(auVar14,auVar12,2);
    dVar1 = dVar1 * (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[1]._4_4_,
                                     local_1d8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar5 +
            auVar12._0_8_ +
            (double)CONCAT44(local_1d8.Translation.XY.m128d_f64[1]._4_4_,
                             local_1d8.Translation.XY.m128d_f64[1]._0_4_);
    local_1f8._s_0.Z =
         auVar20._0_8_ *
         (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[1]._4_4_,
                          local_1d8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar2 + auVar9._0_8_ +
         (double)CONCAT44(local_1d8.Translation.ZW.m128d_f64[0]._4_4_,
                          local_1d8.Translation.ZW.m128d_f64[0]._0_4_);
    local_1f8._8_4_ = SUB84(dVar1,0);
    local_1f8._0_8_ =
         dVar3 * (double)CONCAT44(local_1d8.Rotation.ZW.m128d_f64[1]._4_4_,
                                  local_1d8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar4 + auVar14._8_8_
         + (double)CONCAT44(local_1d8.Translation.XY.m128d_f64[0]._4_4_,
                            local_1d8.Translation.XY.m128d_f64[0]._0_4_);
    local_1f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    fVar7 = K2_CalculateVelocityFromPositionHistory
                      (param_1,(TVector<double> *)&local_1f8._s_0,param_7,param_8,param_9,param_10);
    param_9 = CommonAnimationLibrary::ScalarEasing(fVar7,param_12,param_11,false,__real_3f800000);
  }
  return param_9;
}

// K2_DirectionBetweenSockets @ 14645cb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __cdecl
UKismetAnimationLibrary::K2_DirectionBetweenSockets
          (TVector<double> *__return_storage_ptr__,USkeletalMeshComponent *param_1,FName param_2,
          FName param_3)

{
  undefined1 auStack_118 [64];
  undefined1 local_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (((param_1 == (USkeletalMeshComponent *)0x0) || (param_2 == (FName)0x0)) ||
     (param_3 == (FName)0x0)) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    (**(code **)(param_1->_padding_ + 0x520))(param_1,local_78,param_2,0);
    (**(code **)(param_1->_padding_ + 0x520))(param_1,local_d8,param_3,0);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_b8 - local_58;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_a8 - local_48;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_b0 - dStack_50;
  }
  return __return_storage_ptr__;
}

// K2_DistanceBetweenTwoSocketsAndMapRange @ 14645cc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl
UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange
          (USkeletalMeshComponent *param_1,FName param_2,ERelativeTransformSpace param_3,
          FName param_4,ERelativeTransformSpace param_5,bool param_6,float param_7,float param_8,
          float param_9,float param_10)

{
  float fVar1;
  undefined1 auStack_128 [32];
  TVector2<float>_u_0 local_108;
  TVector2<float>_u_0 local_100 [5];
  undefined1 local_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (((param_1 == (USkeletalMeshComponent *)0x0) || (param_2 == (FName)0x0)) ||
     (param_4 == (FName)0x0)) {
    fVar1 = 0.0;
  }
  else {
    (**(code **)(param_1->_padding_ + 0x520))(param_1,local_78,param_2,param_3);
    (**(code **)(param_1->_padding_ + 0x520))(param_1,local_d8,param_4,param_5);
    fVar1 = (float)SQRT((dStack_b0 - dStack_50) * (dStack_b0 - dStack_50) +
                        (local_b8 - local_58) * (local_b8 - local_58) +
                        (local_a8 - local_48) * (local_a8 - local_48));
    if (param_6) {
      local_108._s_0.X = param_9;
      local_108._s_0.Y = param_10;
      local_100[0]._s_0.X = param_7;
      local_100[0]._s_0.Y = param_8;
      fVar1 = FMath::GetMappedRangeValueClamped<float,float>
                        ((TVector2<float> *)&local_100[0]._s_0,(TVector2<float> *)&local_108._s_0,
                         fVar1);
    }
  }
  return fVar1;
}

// K2_EndProfilingTimer @ 14645cdd0

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UKismetAnimationLibrary::K2_EndProfilingTimer(bool param_1,FString *param_2)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  FTlsAutoCleanup *pFVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined1 local_res18 [8];
  LARGE_INTEGER local_res20;
  code *local_28;
  undefined1 *local_20;
  
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FProfilingTimerPerThread>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FProfilingTimerPerThread>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar4 + 3) == 0) {
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    }
    return 0.0;
  }
  if (*(int *)(pFVar4 + 3) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  iVar5 = *(int *)(pFVar4 + 3) + -1;
  dVar1 = *(double *)
           (*(FScriptContainerElement **)(pFVar4 + 2) +
           (longlong)*(int *)(pFVar4 + 3) * 0x10 + -0x10);
  *(int *)(pFVar4 + 3) = iVar5;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,(ForAnyElementType *)(pFVar4 + 2),iVar5,(int *)&pFVar4[3].field_0x4);
  QueryPerformanceCounter(&local_res20);
  dVar7 = ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) * __real_408f400000000000;
  if (param_1) {
    if ((param_2->Data).ArrayNum < 2) {
      if (2 < (byte)LogAnimation._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      }
    }
    else if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    }
  }
  return (float)(dVar7 - dVar1);
}

// K2_LookAt @ 14645cf70

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __cdecl
UKismetAnimationLibrary::K2_LookAt
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,bool param_4,TVector<double> *param_5,
          float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  __m128d _Var9;
  __m128d _Var10;
  FName FVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TQuat<double> local_118 [7];
  
  FVar11 = AnimationLibraryWarning;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  uVar13 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar13) &&
        (double)CONCAT44(uVar14,uVar13) != __real_3f1a36e2e0000000) ||
      (uVar12 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8),
      uVar13 = (uint)uVar12 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar14 = (uint)((ulonglong)uVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar13) &&
      (double)CONCAT44(uVar14,uVar13) != __real_3f1a36e2e0000000)) ||
     (uVar12 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10),
     uVar13 = (uint)uVar12 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar14 = (uint)((ulonglong)uVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar13) &&
     (double)CONCAT44(uVar14,uVar13) != __real_3f1a36e2e0000000)) {
    if (((param_4) &&
        (uVar13 = (uint)*(undefined8 *)&param_5->field0_0x0 &
                  (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar14 = (uint)((ulonglong)*(undefined8 *)&param_5->field0_0x0 >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar14,uVar13) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar14,uVar13) == __real_3f1a36e2e0000000)) &&
       ((uVar12 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8),
        uVar13 = (uint)uVar12 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar14 = (uint)((ulonglong)uVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar14,uVar13) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar14,uVar13) == __real_3f1a36e2e0000000 &&
        (uVar12 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 0x10),
        uVar13 = (uint)uVar12 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar14 = (uint)((ulonglong)uVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar14,uVar13) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar14,uVar13) == __real_3f1a36e2e0000000)))) {
      ::FString::PrintfImpl
                ((FString *)&local_148._s_0,
                 L"LookUpVector should not be zero. Please specify which direction.");
      uVar12 = L"";
      if (local_148._8_4_ != 0) {
        uVar12 = local_148._0_8_;
      }
      FFrame::KismetExecutionMessage((wchar_t *)uVar12,Warning,FVar11);
      if ((wchar_t *)local_148._s_0.X != (wchar_t *)0x0) {
        FMemory::Free((void *)local_148._s_0.X);
      }
      param_4 = false;
    }
    FVar11 = AnimationLibraryWarning;
    if ((param_6 < 0.0) || (__real_43340000 < param_6)) {
      ::FString::PrintfImpl
                ((FString *)&local_148._s_0,L"ClampConeInDegree should range from (0, 180). ");
      uVar12 = L"";
      if (local_148._8_4_ != 0) {
        uVar12 = local_148._0_8_;
      }
      FFrame::KismetExecutionMessage((wchar_t *)uVar12,Warning,FVar11);
      if ((wchar_t *)local_148._s_0.X != (wchar_t *)0x0) {
        FMemory::Free((void *)local_148._s_0.X);
      }
    }
    dVar2 = (param_5->field0_0x0)._s_0.X;
    dVar3 = (param_5->field0_0x0)._s_0.Y;
    dVar4 = (param_5->field0_0x0)._s_0.Z;
    dVar5 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
    if (dVar5 == __real_3ff0000000000000) {
      local_148._s_0.X = (param_5->field0_0x0)._s_0.X;
      local_148._s_0.Y = (param_5->field0_0x0)._s_0.Y;
      local_148._s_0.Z = (param_5->field0_0x0)._s_0.Z;
    }
    else if (__real_3e45798ee0000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000 / SQRT(dVar5);
      local_148._s_0.X = dVar2 * dVar5;
      local_148._s_0.Y = dVar3 * dVar5;
      local_148._s_0.Z = dVar4 * dVar5;
    }
    else {
      local_148._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_148._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_148._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    dVar3 = (param_3->field0_0x0)._s_0.Z;
    dVar4 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
    if (dVar4 == __real_3ff0000000000000) {
      local_130._s_0.X = (param_3->field0_0x0)._s_0.X;
      local_130._s_0.Y = (param_3->field0_0x0)._s_0.Y;
      local_130._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    }
    else if (__real_3e45798ee0000000 <= dVar4) {
      dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
      local_130._s_0.X = dVar1 * dVar4;
      local_130._s_0.Y = dVar2 * dVar4;
      local_130._s_0.Z = dVar3 * dVar4;
    }
    else {
      local_130._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_130._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_130._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    AnimationCore::SolveAim
              (local_118,param_1,param_2,(TVector<double> *)&local_130._s_0,param_4,
               (TVector<double> *)&local_148._s_0,param_6);
    dVar1 = (param_1->Translation).XY.m128d_f64[0];
    dVar2 = (param_1->Translation).XY.m128d_f64[1];
    dVar3 = (param_1->Translation).ZW.m128d_f64[0];
    dVar4 = (param_1->Translation).ZW.m128d_f64[1];
    dVar5 = (param_1->Scale3D).XY.m128d_f64[0];
    dVar6 = (param_1->Scale3D).XY.m128d_f64[1];
    dVar7 = (param_1->Scale3D).ZW.m128d_f64[0];
    dVar8 = (param_1->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_118[0].X;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_118[0].Y;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_118[0].Z;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_118[0].W;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar7;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar8;
  }
  else {
    ::FString::PrintfImpl
              ((FString *)&local_148._s_0,
               L"AimVector should not be zero. Please specify which direction.");
    uVar12 = L"";
    if (local_148._8_4_ != 0) {
      uVar12 = local_148._0_8_;
    }
    FFrame::KismetExecutionMessage((wchar_t *)uVar12,Warning,FVar11);
    if ((wchar_t *)local_148._s_0.X != (wchar_t *)0x0) {
      FMemory::Free((void *)local_148._s_0.X);
    }
    _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    _Var10 = UE::Math::TTransform<double>::Identity.Translation.XY;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var9.m128d_f64;
    _Var9 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var10.m128d_f64;
    _Var10 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var9.m128d_f64;
    _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var10.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var9.m128d_f64;
  }
  return __return_storage_ptr__;
}

// K2_MakePerlinNoiseAndRemap @ 14645d390

float __cdecl
UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = FMath::PerlinNoise1D(param_1);
  fVar1 = (fVar1 - __real_bf800000) * __real_3f000000;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1 * (param_3 - param_2) + param_2;
}

// K2_MakePerlinNoiseVectorAndRemap @ 14645d3f0

TVector<double> * __cdecl
UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap
          (TVector<double> *__return_storage_ptr__,float param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6,float param_7,float param_8,float param_9)

{
  float fVar1;
  
  fVar1 = FMath::PerlinNoise1D(param_1);
  fVar1 = (fVar1 - __real_bf800000) * __real_3f000000;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar1 * (param_5 - param_4) + param_4);
  fVar1 = FMath::PerlinNoise1D(param_2);
  fVar1 = (fVar1 - __real_bf800000) * __real_3f000000;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 * (param_7 - param_6) + param_6);
  fVar1 = FMath::PerlinNoise1D(param_3);
  fVar1 = (fVar1 - __real_bf800000) * __real_3f000000;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(fVar1 * (param_9 - param_8) + param_8);
  return __return_storage_ptr__;
}

// K2_StartProfilingTimer @ 14645d530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UKismetAnimationLibrary::K2_StartProfilingTimer(void)

{
  FScriptContainerElement *pFVar1;
  FTlsAutoCleanup FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 auStack_98 [32];
  double *local_78;
  FTlsAutoCleanup local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_48 [8];
  LARGE_INTEGER local_40;
  code *local_38;
  undefined1 *local_30;
  double local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  QueryPerformanceCounter(&local_40);
  local_30 = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FProfilingTimerPerThread>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_28 = ((double)local_40.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000) * __real_408f400000000000;
  uStack_20 = 0;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FProfilingTimerPerThread>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar2 = pFVar6[2];
  if (((ulonglong)FVar2 <= &local_28) &&
     (&local_28 < (double *)((longlong)*(int *)&pFVar6[3].field_0x4 * 0x10 + (longlong)FVar2))) {
    local_60 = (longlong)*(int *)(pFVar6 + 3);
    local_58 = 0x10;
    local_78 = &local_28;
    local_70 = FVar2;
    local_68 = (longlong)*(int *)&pFVar6[3].field_0x4;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(pFVar6 + 3);
  if (iVar5 == *(int *)&pFVar6[3].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pFVar6 + 2),(int *)&pFVar6[3].field_0x4);
  }
  *(int *)(pFVar6 + 3) = iVar5 + 1;
  pFVar1 = *(FScriptContainerElement **)(pFVar6 + 2) + (longlong)iVar5 * 0x10;
  *(double *)pFVar1 = local_28;
  *(undefined8 *)(pFVar1 + 8) = uStack_20;
  return;
}

// K2_TwoBoneIK @ 14645d680

void __cdecl
UKismetAnimationLibrary::K2_TwoBoneIK
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,bool param_8,float param_9,float param_10)

{
  AnimationCore::SolveTwoBoneIK
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(double)param_9,
             (double)param_10);
  return;
}

// StaticRegisterNativesUKismetAnimationLibrary @ 14646e690

void __cdecl UKismetAnimationLibrary::StaticRegisterNativesUKismetAnimationLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UKismetAnimationLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCalculateDirection @ 14647dd60

void __cdecl
UKismetAnimationLibrary::execCalculateDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector<double> *pTVar1;
  FProperty *pFVar2;
  TRotator<double> *pTVar3;
  TVector<double> *pTVar4;
  float fVar5;
  TVector<double> local_38;
  TRotator<double> local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_38;
  if (pTVar1 != (TVector<double> *)0x0) {
    pTVar4 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pTVar3 = &local_20;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    pTVar3 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar5 = CalculateDirection(pTVar4,pTVar3);
  *(float *)param_3 = fVar5;
  return;
}

// execK2_CalculateVelocityFromPositionHistory @ 146483830

void __cdecl
UKismetAnimationLibrary::execK2_CalculateVelocityFromPositionHistory
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPositionHistory *pFVar2;
  float fVar3;
  float local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  float local_98 [2];
  double local_90;
  double dStack_88;
  double local_80;
  TVector<double>_u_0 local_78;
  FPositionHistory local_58;
  
  local_98[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_58.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Positions.ArrayNum = 0;
  local_58.Positions.ArrayMax = 0;
  local_58.Range = 0.0;
  local_58.Velocities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Velocities.ArrayNum = 0;
  local_58.Velocities.ArrayMax = 0;
  local_58.LastIndex = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0;
  pFVar2 = &local_58;
  if ((FPositionHistory *)param_2->MostRecentPropertyAddress != (FPositionHistory *)0x0) {
    pFVar2 = (FPositionHistory *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  local_78._s_0.X = local_90;
  local_78._s_0.Y = dStack_88;
  local_78._s_0.Z = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = K2_CalculateVelocityFromPositionHistory
                    (local_98[0],(TVector<double> *)&local_78._s_0,pFVar2,local_res20[0],
                     local_res18[0],local_res10[0]);
  *(float *)param_3 = fVar3;
  if (local_58.Velocities.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Velocities.AllocatorInstance.Data);
  }
  if (local_58.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Positions.AllocatorInstance.Data);
  }
  return;
}

// execK2_CalculateVelocityFromSockets @ 146483a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetAnimationLibrary::execK2_CalculateVelocityFromSockets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  EEasingFuncType EVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  TTransform<double> *pTVar8;
  FRuntimeFloatCurve *pFVar9;
  FPositionHistory *pFVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStackY_368 [32];
  EEasingFuncType local_338;
  undefined1 local_337 [3];
  float local_334;
  float local_330;
  int local_32c;
  float local_328 [2];
  longlong local_320;
  longlong local_318;
  int local_310;
  float local_30c;
  longlong *local_308;
  FPositionHistory local_300;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  TVector<double>_u_0 local_2b8;
  TTransform<double> local_298;
  undefined1 local_238 [72];
  void *local_1f0;
  undefined4 local_1e8;
  void *local_1e0;
  ForAnyElementType local_1c8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_328[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_328,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_328);
  }
  local_308 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_308,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_308);
  }
  local_318 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_318,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_318);
  }
  local_320 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_320,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_320);
  }
  local_337[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_337,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_337);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2d0);
  }
  local_300.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.Positions.ArrayNum = 0;
  local_300.Positions.ArrayMax = 0;
  local_300.Range = 0.0;
  local_300.Velocities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_300.Velocities.ArrayNum = 0;
  local_300.Velocities.ArrayMax = 0;
  local_300.LastIndex = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_300,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_300);
  }
  local_32c = 0;
  pFVar10 = &local_300;
  if ((FPositionHistory *)param_2->MostRecentPropertyAddress != (FPositionHistory *)0x0) {
    pFVar10 = (FPositionHistory *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_32c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_32c);
  }
  local_330 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_330,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_330);
  }
  local_334 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_334,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_334);
  }
  local_338 = Linear;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_338,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_338);
  }
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_238);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_238,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_238);
  }
  plVar7 = local_308;
  lVar6 = local_320;
  fVar12 = local_330;
  fVar11 = local_334;
  uVar5 = local_337[0];
  EVar4 = local_338;
  pFVar9 = (FRuntimeFloatCurve *)local_238;
  if ((FRuntimeFloatCurve *)param_2->MostRecentPropertyAddress != (FRuntimeFloatCurve *)0x0) {
    pFVar9 = (FRuntimeFloatCurve *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30c = local_328[0];
  local_310 = local_32c;
  if ((local_308 != (longlong *)0x0) && (local_318 != 0)) {
    (**(code **)(*local_308 + 0x520))(local_308,&local_298,local_318,local_337[0]);
    if (lVar6 != 0) {
      (**(code **)(*plVar7 + 0x520))(plVar7,&local_1a8,lVar6,uVar5);
      pTVar8 = UE::Math::TTransform<double>::GetRelativeTransform(&local_298,&local_148,&local_1a8);
      local_298.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
      local_298.Rotation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
      local_298.Rotation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar8->Rotation).XY.m128d_f64 + 1);
      local_298.Rotation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
      local_298.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar8->Rotation).ZW.m128d_f64;
      local_298.Rotation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 4);
      local_298.Rotation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar8->Rotation).ZW.m128d_f64 + 1);
      local_298.Rotation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 0xc);
      local_298.Translation.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
      local_298.Translation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
      local_298.Translation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar8->Translation).XY.m128d_f64 + 1);
      local_298.Translation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
      local_298.Translation.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(pTVar8->Translation).ZW.m128d_f64;
      local_298.Translation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
      local_298.Translation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((pTVar8->Translation).ZW.m128d_f64 + 1);
      local_298.Translation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
      local_298.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
      local_298.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
      local_298.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
      local_298.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
      local_298.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
      local_298.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
    }
    local_2c0 = local_2c0 * local_298.Scale3D.ZW.m128d_f64[0];
    dVar3 = local_298.Scale3D.ZW.m128d_f64[1] * 0.0;
    local_2d0 = (double)CONCAT44(local_298.Scale3D.XY.m128d_f64[0]._4_4_,
                                 local_298.Scale3D.XY.m128d_f64[0]._0_4_) * local_2d0;
    dStack_2c8 = (double)CONCAT44(local_298.Scale3D.XY.m128d_f64[1]._4_4_,
                                  local_298.Scale3D.XY.m128d_f64[1]._0_4_) * dStack_2c8;
    uVar22 = (undefined4)((ulonglong)dStack_2c8 >> 0x20);
    auVar20._4_4_ = local_298.Rotation.XY.m128d_f64[0]._4_4_;
    auVar20._0_4_ = local_298.Rotation.XY.m128d_f64[0]._0_4_;
    auVar20._8_4_ = local_298.Rotation.XY.m128d_f64[1]._0_4_;
    auVar20._12_4_ = local_298.Rotation.XY.m128d_f64[1]._4_4_;
    auVar23._8_4_ = SUB84(dStack_2c8,0);
    auVar23._0_8_ = local_2d0;
    auVar23._12_4_ = uVar22;
    auVar21._4_4_ = local_298.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar21._0_4_ = local_298.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar21._8_4_ = local_298.Rotation.ZW.m128d_f64[1]._0_4_;
    auVar21._12_4_ = local_298.Rotation.ZW.m128d_f64[1]._4_4_;
    auVar21 = blendpd(auVar20,auVar21,2);
    auVar24._0_8_ =
         auVar23._8_8_ *
         (double)CONCAT44(local_298.Rotation.XY.m128d_f64[0]._4_4_,
                          local_298.Rotation.XY.m128d_f64[0]._0_4_) -
         (double)CONCAT44(local_298.Rotation.XY.m128d_f64[1]._4_4_,
                          local_298.Rotation.XY.m128d_f64[1]._0_4_) * local_2d0;
    auVar24._8_8_ =
         local_2c0 *
         (double)CONCAT44(local_298.Rotation.XY.m128d_f64[1]._4_4_,
                          local_298.Rotation.XY.m128d_f64[1]._0_4_) -
         (double)CONCAT44(local_298.Rotation.ZW.m128d_f64[0]._4_4_,
                          local_298.Rotation.ZW.m128d_f64[0]._0_4_) * dStack_2c8;
    auVar13._8_4_ = SUB84(dStack_2c8,0);
    auVar13._0_8_ = local_2d0;
    auVar13._12_4_ = uVar22;
    auVar14._8_4_ = SUB84(dVar3,0);
    auVar14._0_8_ = local_2c0;
    auVar14._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar14 = blendpd(auVar13,auVar14,2);
    auVar15._0_8_ =
         auVar14._0_8_ *
         (double)CONCAT44(local_298.Rotation.ZW.m128d_f64[0]._4_4_,
                          local_298.Rotation.ZW.m128d_f64[0]._0_4_) - auVar21._0_8_ * local_2c0;
    auVar15._8_8_ =
         auVar14._8_8_ *
         (double)CONCAT44(local_298.Rotation.ZW.m128d_f64[1]._4_4_,
                          local_298.Rotation.ZW.m128d_f64[1]._0_4_) - auVar21._8_8_ * dVar3;
    auVar14 = blendpd(auVar24,auVar15,2);
    dVar3 = auVar24._8_8_ + auVar24._8_8_;
    dVar2 = auVar15._0_8_ + auVar15._0_8_;
    uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar25._0_8_ = auVar14._0_8_ + auVar14._0_8_;
    auVar25._8_8_ = auVar14._8_8_ + auVar14._8_8_;
    auVar18._8_4_ = SUB84(dVar2,0);
    auVar18._0_8_ = dVar3;
    auVar18._12_4_ = uVar22;
    auVar16._8_4_ = SUB84(dVar2,0);
    auVar16._0_8_ = dVar3;
    auVar16._12_4_ = uVar22;
    auVar14 = blendpd(auVar16,auVar25,2);
    auVar19._0_8_ =
         auVar18._8_8_ *
         (double)CONCAT44(local_298.Rotation.XY.m128d_f64[0]._4_4_,
                          local_298.Rotation.XY.m128d_f64[0]._0_4_) -
         dVar3 * (double)CONCAT44(local_298.Rotation.XY.m128d_f64[1]._4_4_,
                                  local_298.Rotation.XY.m128d_f64[1]._0_4_);
    auVar19._8_8_ =
         auVar25._0_8_ *
         (double)CONCAT44(local_298.Rotation.XY.m128d_f64[1]._4_4_,
                          local_298.Rotation.XY.m128d_f64[1]._0_4_) -
         dVar2 * (double)CONCAT44(local_298.Rotation.ZW.m128d_f64[0]._4_4_,
                                  local_298.Rotation.ZW.m128d_f64[0]._0_4_);
    auVar17._0_8_ =
         auVar14._0_8_ *
         (double)CONCAT44(local_298.Rotation.ZW.m128d_f64[0]._4_4_,
                          local_298.Rotation.ZW.m128d_f64[0]._0_4_) - auVar25._0_8_ * auVar21._0_8_;
    auVar17._8_8_ =
         auVar14._8_8_ *
         (double)CONCAT44(local_298.Rotation.ZW.m128d_f64[1]._4_4_,
                          local_298.Rotation.ZW.m128d_f64[1]._0_4_) - auVar25._8_8_ * auVar21._8_8_;
    auVar14 = blendpd(auVar19,auVar17,2);
    dVar2 = dVar2 * (double)CONCAT44(local_298.Rotation.ZW.m128d_f64[1]._4_4_,
                                     local_298.Rotation.ZW.m128d_f64[1]._0_4_) + dStack_2c8 +
            auVar17._0_8_ +
            (double)CONCAT44(local_298.Translation.XY.m128d_f64[1]._4_4_,
                             local_298.Translation.XY.m128d_f64[1]._0_4_);
    local_2b8._s_0.Z =
         auVar25._0_8_ *
         (double)CONCAT44(local_298.Rotation.ZW.m128d_f64[1]._4_4_,
                          local_298.Rotation.ZW.m128d_f64[1]._0_4_) + local_2c0 + auVar14._0_8_ +
         (double)CONCAT44(local_298.Translation.ZW.m128d_f64[0]._4_4_,
                          local_298.Translation.ZW.m128d_f64[0]._0_4_);
    local_2b8._8_4_ = SUB84(dVar2,0);
    local_2b8._0_8_ =
         dVar3 * (double)CONCAT44(local_298.Rotation.ZW.m128d_f64[1]._4_4_,
                                  local_298.Rotation.ZW.m128d_f64[1]._0_4_) + local_2d0 +
         auVar19._8_8_ +
         (double)CONCAT44(local_298.Translation.XY.m128d_f64[0]._4_4_,
                          local_298.Translation.XY.m128d_f64[0]._0_4_);
    local_2b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    fVar11 = K2_CalculateVelocityFromPositionHistory
                       (local_30c,(TVector<double> *)&local_2b8._s_0,pFVar10,local_310,fVar12,fVar11
                       );
    fVar12 = CommonAnimationLibrary::ScalarEasing(fVar11,pFVar9,EVar4,false,__real_3f800000);
  }
  *(float *)param_3 = fVar12;
  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  local_238._0_8_ = &___7FIndexedCurve__6B_;
  if (local_1e0 != (void *)0x0) {
    FMemory::Free(local_1e0);
  }
  local_1e8 = 0;
  if (local_1f0 != (void *)0x0) {
    FMemory::Free(local_1f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_238 + 8));
  if (local_300.Velocities.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Velocities.AllocatorInstance.Data);
  }
  if (local_300.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Positions.AllocatorInstance.Data);
  }
  return;
}

// execK2_DirectionBetweenSockets @ 146484180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetAnimationLibrary::execK2_DirectionBetweenSockets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong *local_108 [3];
  double local_f0;
  undefined1 local_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
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
  local_110 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  plVar4 = local_108[0];
  lVar3 = local_118;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_108[0] == (longlong *)0x0) || (local_110 == 0)) || (local_118 == 0)) {
    local_c8 = 0.0;
    dStack_c0 = 0.0;
    local_f0 = 0.0;
  }
  else {
    (**(code **)(*local_108[0] + 0x520))(local_108[0],local_88,local_110,0);
    (**(code **)(*plVar4 + 0x520))(plVar4,local_e8,lVar3,0);
    local_c8 = local_c8 - local_68;
    local_f0 = local_b8 - local_58;
    dStack_c0 = dStack_c0 - dStack_60;
  }
  auVar2._8_4_ = SUB84(dStack_c0,0);
  auVar2._0_8_ = local_c8;
  auVar2._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = local_f0;
  return;
}

// execK2_DistanceBetweenTwoSocketsAndMapRange @ 146484340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetAnimationLibrary::execK2_DistanceBetweenTwoSocketsAndMapRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [3];
  int local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  longlong local_190;
  longlong local_188;
  longlong *local_180;
  TVector2<float>_u_0 local_178;
  TVector2<float>_u_0 local_170 [5];
  undefined1 local_148 [32];
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_180 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_188 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_1a7[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1a7,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1a7);
  }
  local_190 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_1a8 = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1a4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a4);
  }
  bVar8 = local_1a4 == 0;
  local_194 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_194,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_194);
  }
  local_198 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_19c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_19c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_19c);
  }
  local_1a0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  plVar7 = local_180;
  lVar6 = local_190;
  fVar5 = local_194;
  fVar4 = local_198;
  fVar3 = local_19c;
  fVar9 = local_1a0;
  uVar2 = local_1a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_180 == (longlong *)0x0) || (local_188 == 0)) || (local_190 == 0)) {
    *(undefined4 *)param_3 = 0;
  }
  else {
    (**(code **)(*local_180 + 0x520))(local_180,local_e8,local_188,local_1a7[0]);
    (**(code **)(*plVar7 + 0x520))(plVar7,local_148,lVar6,uVar2);
    fVar10 = (float)SQRT((dStack_120 - dStack_c0) * (dStack_120 - dStack_c0) +
                         (local_128 - local_c8) * (local_128 - local_c8) +
                         (local_118 - local_b8) * (local_118 - local_b8));
    if (bVar8) {
      *(float *)param_3 = fVar10;
    }
    else {
      local_178._s_0.X = fVar3;
      local_178._s_0.Y = fVar9;
      local_170[0]._s_0.X = fVar5;
      local_170[0]._s_0.Y = fVar4;
      fVar9 = FMath::GetMappedRangeValueClamped<float,float>
                        ((TVector2<float> *)&local_170[0]._s_0,(TVector2<float> *)&local_178._s_0,
                         fVar10);
      *(float *)param_3 = fVar9;
    }
  }
  return;
}

// execK2_EndProfilingTimer @ 146484760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetAnimationLibrary::execK2_EndProfilingTimer(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTlsAutoCleanup *pFVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  LARGE_INTEGER local_res20;
  void *local_58;
  undefined8 local_50;
  code *local_48;
  undefined1 *local_40;
  
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar7 = local_res18[0] != 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FProfilingTimerPerThread>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FProfilingTimerPerThread>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar5 + 3) == 0) {
    if (2 < (byte)LogAnimation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    }
    fVar8 = 0.0;
  }
  else {
    if (*(int *)(pFVar5 + 3) < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)(pFVar5 + 3) + -1;
    dVar1 = *(double *)
             (*(FScriptContainerElement **)(pFVar5 + 2) +
             (longlong)*(int *)(pFVar5 + 3) * 0x10 + -0x10);
    *(int *)(pFVar5 + 3) = iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(ForAnyElementType *)(pFVar5 + 2),iVar6,(int *)&pFVar5[3].field_0x4);
    QueryPerformanceCounter(&local_res20);
    fVar8 = (float)(((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                    __real_4170000000000000) * __real_408f400000000000 - dVar1);
    if (bVar7) {
      if ((int)local_50 < 2) {
        if (2 < (byte)LogAnimation._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        }
      }
      else if (2 < (byte)LogAnimation._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      }
    }
  }
  *(float *)param_3 = fVar8;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execK2_LookAt @ 1464849c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UKismetAnimationLibrary::execK2_LookAt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  TTransform<double> *pTVar15;
  TVector<double> *pTVar16;
  TTransform<double> *pTVar17;
  bool bVar18;
  undefined1 auStackY_1c8 [32];
  int local_188;
  float local_184;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  TVector<double> local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_98.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_98.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_98.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_98.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_98.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_98.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_98.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_98.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_98.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar17 = &local_98;
  if (pTVar15 != (TTransform<double> *)0x0) {
    pTVar17 = pTVar15;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  pTVar16 = &local_150;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar16 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_188 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  bVar18 = local_188 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_184 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_184,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_184);
  }
  local_138._s_0.X = local_180;
  local_138._s_0.Y = dStack_178;
  local_138._s_0.Z = local_170;
  local_118._s_0.X = local_168;
  local_118._s_0.Y = dStack_160;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_118._s_0.Z = local_158;
  pTVar15 = K2_LookAt(&local_f8,pTVar17,pTVar16,(TVector<double> *)&local_118._s_0,bVar18,
                      (TVector<double> *)&local_138._s_0,local_184);
  dVar14 = (pTVar15->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar15->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar14;
  dVar14 = (pTVar15->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar15->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar14;
  dVar14 = (pTVar15->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar15->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar14;
  dVar14 = (pTVar15->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar15->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar14;
  dVar14 = (pTVar15->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar15->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar14;
  dVar14 = (pTVar15->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar15->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar14;
  return;
}

// execK2_MakePerlinNoiseAndRemap @ 146484cb0

void __cdecl
UKismetAnimationLibrary::execK2_MakePerlinNoiseAndRemap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
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
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  fVar3 = local_res18[0];
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar4 = FMath::PerlinNoise1D(local_res20[0]);
  fVar4 = (fVar4 - __real_bf800000) * __real_3f000000;
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)param_3 = fVar4 * (fVar2 - fVar3) + fVar3;
  return;
}

// execK2_MakePerlinNoiseVectorAndRemap @ 146484e20

void __cdecl
UKismetAnimationLibrary::execK2_MakePerlinNoiseVectorAndRemap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  
  local_a4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_ac = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ac,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ac);
  }
  local_b0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  local_b8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
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
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  fVar8 = local_a8;
  fVar9 = local_ac;
  fVar6 = local_b0;
  fVar5 = local_b4;
  fVar4 = local_b8;
  fVar3 = local_res20[0];
  fVar2 = local_res10[0];
  local_a0 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar7 = FMath::PerlinNoise1D(local_a4);
  fVar7 = (fVar7 - __real_bf800000) * __real_3f000000;
  fVar8 = FMath::PerlinNoise1D(fVar8);
  fVar8 = (fVar8 - __real_bf800000) * __real_3f000000;
  fVar9 = FMath::PerlinNoise1D(fVar9);
  if (__real_3f800000 <= fVar7) {
    fVar7 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar9 = (fVar9 - __real_bf800000) * __real_3f000000;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (__real_3f800000 <= fVar9) {
    fVar9 = __real_3f800000;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  *(double *)param_3 = (double)(fVar7 * (fVar5 - fVar6) + fVar6);
  *(double *)((longlong)param_3 + 8) = (double)(fVar8 * (fVar3 - fVar4) + fVar4);
  *(double *)((longlong)param_3 + 0x10) = (double)(fVar9 * (fVar2 - local_a0) + local_a0);
  return;
}

// execK2_StartProfilingTimer @ 146485200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetAnimationLibrary::execK2_StartProfilingTimer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FTlsAutoCleanup FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 auStack_98 [32];
  double *local_78;
  FTlsAutoCleanup local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_48 [8];
  LARGE_INTEGER local_40;
  code *local_38;
  undefined1 *local_30;
  double local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  QueryPerformanceCounter(&local_40);
  local_30 = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FProfilingTimerPerThread>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_28 = ((double)local_40.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000) * __real_408f400000000000;
  uStack_20 = 0;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FProfilingTimerPerThread>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar2 = pFVar6[2];
  if (((ulonglong)FVar2 <= &local_28) &&
     (&local_28 < (double *)((longlong)*(int *)&pFVar6[3].field_0x4 * 0x10 + (longlong)FVar2))) {
    local_60 = (longlong)*(int *)(pFVar6 + 3);
    local_58 = 0x10;
    local_78 = &local_28;
    local_70 = FVar2;
    local_68 = (longlong)*(int *)&pFVar6[3].field_0x4;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(pFVar6 + 3);
  if (iVar5 == *(int *)&pFVar6[3].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pFVar6 + 2),(int *)&pFVar6[3].field_0x4);
  }
  *(int *)(pFVar6 + 3) = iVar5 + 1;
  pFVar1 = *(FScriptContainerElement **)(pFVar6 + 2) + (longlong)iVar5 * 0x10;
  *(double *)pFVar1 = local_28;
  *(undefined8 *)(pFVar1 + 8) = uStack_20;
  return;
}

// execK2_TwoBoneIK @ 146485360

void __cdecl
UKismetAnimationLibrary::execK2_TwoBoneIK(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  bool bVar6;
  int local_res10 [4];
  float local_res20 [2];
  float local_108 [2];
  TVector<double> *local_100;
  TVector<double> *local_f8;
  TVector<double> *local_f0;
  TVector<double> local_e8;
  TVector<double> local_d0;
  TVector<double> local_b8;
  TVector<double> local_a0;
  TVector<double> local_88;
  TVector<double> local_70;
  TVector<double> local_58;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_f0 = &local_e8;
  if (pTVar2 != (TVector<double> *)0x0) {
    local_f0 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_f8 = &local_d0;
  if (pTVar2 != (TVector<double> *)0x0) {
    local_f8 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_100 = &local_b8;
  if (pTVar2 != (TVector<double> *)0x0) {
    local_100 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_a0;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar4 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar3 = &local_88;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar3 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_70;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar5 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  pTVar2 = &local_58;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar6 = local_res10[0] != 0;
  local_108[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AnimationCore::SolveTwoBoneIK
            (local_f0,local_f8,local_100,pTVar4,pTVar3,pTVar5,pTVar2,bVar6,(double)local_108[0],
             (double)local_res20[0]);
  return;
}

