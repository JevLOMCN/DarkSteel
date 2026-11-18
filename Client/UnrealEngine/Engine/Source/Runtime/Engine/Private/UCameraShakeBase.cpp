// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// StaticClass @ 147260d80

UClass * __cdecl UCameraShakeBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraShakeBase",
               &Z_Registration_Info_UClass_UCameraShakeBase.InnerSingleton,
               StaticRegisterNativesUCameraShakeBase,0xe0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraShakeBase>,
               InternalVTableHelperCtorCaller<UCameraShakeBase>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeBase.InnerSingleton;
}

// UCameraShakeBase @ 1476e80c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraShakeBase * __thiscall
UCameraShakeBase::UCameraShakeBase(UCameraShakeBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraShakeBase__6B_;
  (this->RootShakePattern).field0_0x0.DebugPtr = (UCameraShakePattern *)0x0;
  (this->CameraManager).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  return this;
}

// UCameraShakeBase @ 1476e8100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraShakeBase * __thiscall
UCameraShakeBase::UCameraShakeBase(UCameraShakeBase *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  UObject *pUVar3;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->bSingleInstance = false;
  *(undefined ***)this = &___7UCameraShakeBase__6B_;
  (this->RootShakePattern).field0_0x0.DebugPtr = (UCameraShakePattern *)0x0;
  (this->CameraManager).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  this->ShakeScale = 1.0;
  this->PlaySpace = CameraLocal;
  this->bIsActive = false;
  pUVar1 = UCameraShakePattern::StaticClass();
  pFVar2 = ::FName::FName(&local_res8,L"RootShakePattern");
  pUVar3 = FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,*pFVar2,pUVar1,(UClass *)0x0,false,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  (this->RootShakePattern).field0_0x0.DebugPtr = (UCameraShakePattern *)pUVar3;
  return this;
}

// ~UCameraShakeBase @ 1476e90d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraShakeBase::~UCameraShakeBase(UCameraShakeBase *this)

{
  *(undefined ***)this = &___7UCameraShakeBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyLimits @ 1476eebf0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UCameraShakeBase::ApplyLimits(FMinimalViewInfo *param_1,FCameraShakePatternUpdateResult *param_2)

{
  IXRTrackingSystem *pIVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  
  pIVar1 = (GEngine->XRSystem).Object;
  if ((pIVar1 == (IXRTrackingSystem *)0x0) ||
     (cVar6 = (**(code **)((longlong)*pIVar1 + 0x148))(), cVar6 == '\0')) {
    dVar3 = __real_4076800000000000;
    dVar10 = FGenericPlatformMath::Fmod((param_1->Rotation).Pitch,__real_4076800000000000);
    dVar2 = __real_4066800000000000;
    if (dVar10 < 0.0) {
      dVar10 = dVar10 + dVar3;
    }
    if (__real_4066800000000000 < dVar10) {
      dVar10 = dVar10 - dVar3;
    }
    dVar11 = FGenericPlatformMath::Fmod((param_2->Rotation).Pitch,dVar3);
    fVar5 = __real_43b40000;
    if (dVar11 < 0.0) {
      dVar11 = dVar11 + dVar3;
    }
    if (dVar2 < dVar11) {
      dVar11 = dVar11 - dVar3;
    }
    fVar12 = (float)dVar11 + (float)dVar10;
    fVar7 = FGenericPlatformMath::Fmod(__real_4333cccd,__real_43b40000);
    if (fVar7 < 0.0) {
      fVar7 = fVar7 + fVar5;
    }
    fVar7 = fVar7 * __real_3f000000;
    fVar8 = FGenericPlatformMath::Fmod(fVar7 - __real_42b3cccd,fVar5);
    if (fVar8 < 0.0) {
      fVar8 = fVar8 + fVar5;
    }
    fVar9 = FGenericPlatformMath::Fmod(fVar12 - fVar8,fVar5);
    fVar4 = __real_43340000;
    if (fVar9 < 0.0) {
      fVar9 = fVar9 + fVar5;
    }
    if (__real_43340000 < fVar9) {
      fVar9 = fVar9 - fVar5;
    }
    if (fVar9 <= fVar7) {
      if (fVar9 < (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000)) {
        fVar12 = fVar8 - fVar7;
      }
    }
    else {
      fVar12 = fVar8 + fVar7;
    }
    fVar7 = FGenericPlatformMath::Fmod(fVar12,fVar5);
    if (fVar7 < 0.0) {
      fVar7 = fVar7 + fVar5;
    }
    if (fVar4 < fVar7) {
      fVar7 = fVar7 - fVar5;
    }
    (param_2->Rotation).Pitch = (double)(fVar7 - (float)dVar10);
  }
  return;
}

// ApplyPlaySpace @ 1476eef00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakeBase::ApplyPlaySpace
          (UCameraShakeBase *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  TRotator<double> *pTVar1;
  TVector<double>_u_0 local_b8;
  double local_a0;
  double dStack_98;
  double local_90;
  TMatrix<double> local_88;
  
  local_88.M[0][0] = (this->UserPlaySpaceMatrix).M[0][0];
  local_88.M[0][1] = (this->UserPlaySpaceMatrix).M[0][1];
  local_88.M[0][2] = (this->UserPlaySpaceMatrix).M[0][2];
  local_88.M[0][3] = (this->UserPlaySpaceMatrix).M[0][3];
  local_88.M[1][0] = (this->UserPlaySpaceMatrix).M[1][0];
  local_88.M[1][1] = (this->UserPlaySpaceMatrix).M[1][1];
  local_88.M[1][2] = (this->UserPlaySpaceMatrix).M[1][2];
  local_88.M[1][3] = (this->UserPlaySpaceMatrix).M[1][3];
  local_88.M[2][0] = (this->UserPlaySpaceMatrix).M[2][0];
  local_88.M[2][1] = (this->UserPlaySpaceMatrix).M[2][1];
  local_88.M[2][2] = (this->UserPlaySpaceMatrix).M[2][2];
  local_88.M[2][3] = (this->UserPlaySpaceMatrix).M[2][3];
  local_88.M[3][0] = (this->UserPlaySpaceMatrix).M[3][0];
  local_88.M[3][1] = (this->UserPlaySpaceMatrix).M[3][1];
  local_88.M[3][2] = (this->UserPlaySpaceMatrix).M[3][2];
  local_88.M[3][3] = (this->UserPlaySpaceMatrix).M[3][3];
  local_b8._s_0.X = (param_2->Location).field0_0x0._s_0.X;
  local_b8._s_0.Y = (param_2->Location).field0_0x0._s_0.Y;
  pTVar1 = &param_2->Rotation;
  local_b8._s_0.Z = (param_2->Location).field0_0x0._s_0.Z;
  local_a0 = pTVar1->Pitch;
  dStack_98 = (param_2->Rotation).Yaw;
  local_90 = (param_2->Rotation).Roll;
  if (this->PlaySpace == CameraLocal) {
    FCameraAnimationHelper::ApplyOffset
              (&param_1->POV,(FCameraAnimationHelperOffset *)&local_b8._s_0,&param_2->Location,
               pTVar1);
  }
  else {
    FCameraAnimationHelper::ApplyOffset
              (&local_88,&param_1->POV,(FCameraAnimationHelperOffset *)&local_b8._s_0,
               &param_2->Location,pTVar1);
  }
  param_2->Flags = param_2->Flags | ApplyAsAbsolute;
  param_2->FOV = (param_1->POV).FOV + param_2->FOV;
  return;
}

// ApplyPlaySpace @ 1476ef000

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UCameraShakeBase::ApplyPlaySpace
          (ECameraShakePlaySpace param_1,TMatrix<double> *param_2,FMinimalViewInfo *param_3,
          FCameraShakePatternUpdateResult *param_4)

{
  TRotator<double> *pTVar1;
  TVector<double>_u_0 local_38;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_38._s_0.Z = (param_4->Location).field0_0x0._s_0.Z;
  pTVar1 = &param_4->Rotation;
  local_10 = (param_4->Rotation).Roll;
  local_38._s_0.X = (param_4->Location).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_4->Location).field0_0x0._s_0.Y;
  local_20 = pTVar1->Pitch;
  dStack_18 = (param_4->Rotation).Yaw;
  if (param_1 == CameraLocal) {
    FCameraAnimationHelper::ApplyOffset
              (param_3,(FCameraAnimationHelperOffset *)&local_38._s_0,&param_4->Location,pTVar1);
  }
  else {
    FCameraAnimationHelper::ApplyOffset
              (param_2,param_3,(FCameraAnimationHelperOffset *)&local_38._s_0,&param_4->Location,
               pTVar1);
  }
  param_4->Flags = param_4->Flags | ApplyAsAbsolute;
  param_4->FOV = param_3->FOV + param_4->FOV;
  return;
}

// ApplyResult @ 1476ef3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UCameraShakeBase::ApplyResult
          (FCameraShakeApplyResultParams *param_1,FCameraShakePatternUpdateResult *param_2,
          FMinimalViewInfo *param_3)

{
  code *pcVar1;
  double dVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  APlayerCameraManager *this;
  float fVar5;
  double dVar6;
  undefined1 auStackY_8c8 [32];
  TVector<double>_u_0 local_898;
  double local_880;
  double dStack_878;
  double local_870;
  TMatrix<double> local_868;
  undefined1 local_7e8 [24];
  undefined1 auStack_7d0 [16];
  double dStack_7c0;
  float local_7b8;
  FPostProcessSettings local_7a8;
  float local_38;
  ECameraShakePatternUpdateResultFlags local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  local_7e8._0_16_ = *(undefined1 (*) [16])&(param_2->Location).field0_0x0;
  unique0x1000078d = *(undefined1 (*) [16])((longlong)&(param_2->Location).field0_0x0 + 0x10);
  auStack_7d0._8_8_ = (param_2->Rotation).Yaw;
  dStack_7c0 = (param_2->Rotation).Roll;
  local_7b8 = param_2->FOV;
  FPostProcessSettings::FPostProcessSettings(&local_7a8,&param_2->PostProcessSettings);
  local_34 = param_2->Flags;
  local_38 = param_2->PostProcessBlendWeight;
  if ((local_34 & ApplyAsAbsolute) == Default) {
    if ((local_34 & SkipAutoScale) == Default) {
      fVar5 = param_1->Scale;
      dVar6 = (double)fVar5;
      dVar2 = (double)local_7e8._8_8_ * dVar6;
      local_7e8._8_4_ = SUB84(dVar2,0);
      local_7e8._0_8_ = (double)local_7e8._0_8_ * dVar6;
      local_7e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)auStack_7d0._0_8_ * dVar6;
      unique0x1000013f = SUB84(dVar2,0);
      local_7e8._16_8_ = (double)local_7e8._16_8_ * dVar6;
      unique0x10000143 = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = dStack_7c0 * dVar6;
      unique0x10000163 = SUB84(dVar2,0);
      auStack_7d0._8_8_ = (double)auStack_7d0._8_8_ * dVar6;
      unique0x10000167 = (int)((ulonglong)dVar2 >> 0x20);
      local_7b8 = local_7b8 * fVar5;
      local_38 = fVar5 * local_38;
    }
    ApplyLimits(param_3,(FCameraShakePatternUpdateResult *)local_7e8);
    if ((local_34 & SkipAutoPlaySpace) == Default) {
      local_868.M[0][0] = (param_1->UserPlaySpaceMatrix).M[0][0];
      local_868.M[0][1] = (param_1->UserPlaySpaceMatrix).M[0][1];
      local_868.M[0][2] = (param_1->UserPlaySpaceMatrix).M[0][2];
      local_868.M[0][3] = (param_1->UserPlaySpaceMatrix).M[0][3];
      local_868.M[1][0] = (param_1->UserPlaySpaceMatrix).M[1][0];
      local_868.M[1][1] = (param_1->UserPlaySpaceMatrix).M[1][1];
      local_868.M[1][2] = (param_1->UserPlaySpaceMatrix).M[1][2];
      local_868.M[1][3] = (param_1->UserPlaySpaceMatrix).M[1][3];
      local_868.M[2][0] = (param_1->UserPlaySpaceMatrix).M[2][0];
      local_868.M[2][1] = (param_1->UserPlaySpaceMatrix).M[2][1];
      local_868.M[2][2] = (param_1->UserPlaySpaceMatrix).M[2][2];
      local_868.M[2][3] = (param_1->UserPlaySpaceMatrix).M[2][3];
      local_868.M[3][0] = (param_1->UserPlaySpaceMatrix).M[3][0];
      local_868.M[3][1] = (param_1->UserPlaySpaceMatrix).M[3][1];
      local_868.M[3][2] = (param_1->UserPlaySpaceMatrix).M[3][2];
      local_868.M[3][3] = (param_1->UserPlaySpaceMatrix).M[3][3];
      local_898._s_0.X = (double)local_7e8._0_8_;
      local_898._s_0.Y = (double)local_7e8._8_8_;
      local_898._s_0.Z = (double)local_7e8._16_8_;
      local_880 = (double)auStack_7d0._0_8_;
      dStack_878 = (double)auStack_7d0._8_8_;
      local_870 = dStack_7c0;
      if (param_1->PlaySpace == CameraLocal) {
        FCameraAnimationHelper::ApplyOffset
                  (param_3,(FCameraAnimationHelperOffset *)&local_898._s_0,
                   (TVector<double> *)local_7e8,(TRotator<double> *)auStack_7d0);
      }
      else {
        FCameraAnimationHelper::ApplyOffset
                  (&local_868,param_3,(FCameraAnimationHelperOffset *)&local_898._s_0,
                   (TVector<double> *)local_7e8,(TRotator<double> *)auStack_7d0);
      }
      local_7b8 = local_7b8 + param_3->FOV;
      local_34 = local_34 | ApplyAsAbsolute;
    }
  }
  if ((local_34 & ApplyAsAbsolute) == Default) {
    dVar2 = (param_3->Location).field0_0x0._s_0.Y;
    (param_3->Location).field0_0x0._s_0.X =
         (double)local_7e8._0_8_ + (param_3->Location).field0_0x0._s_0.X;
    dVar6 = (param_3->Location).field0_0x0._s_0.Z;
    (param_3->Location).field0_0x0._s_0.Y = (double)local_7e8._8_8_ + dVar2;
    (param_3->Location).field0_0x0._s_0.Z = (double)local_7e8._16_8_ + dVar6;
    (param_3->Rotation).Pitch = (double)auStack_7d0._0_8_ + (param_3->Rotation).Pitch;
    (param_3->Rotation).Yaw = (double)auStack_7d0._8_8_ + (param_3->Rotation).Yaw;
    (param_3->Rotation).Roll = dStack_7c0 + (param_3->Rotation).Roll;
    fVar5 = local_7b8 + param_3->FOV;
  }
  else {
    (param_3->Location).field0_0x0._s_0.X = (double)local_7e8._0_8_;
    (param_3->Location).field0_0x0._s_0.Y = (double)local_7e8._8_8_;
    (param_3->Location).field0_0x0._s_0.Z = (double)local_7e8._16_8_;
    (param_3->Rotation).Pitch = (double)auStack_7d0._0_8_;
    (param_3->Rotation).Yaw = (double)auStack_7d0._8_8_;
    (param_3->Rotation).Roll = dStack_7c0;
    fVar5 = local_7b8;
  }
  param_3->FOV = fVar5;
  if (0.0 < local_38) {
    bVar4 = FWeakObjectPtr::IsValid(&(param_1->CameraManager).WeakPtr);
    pTVar3 = GCameraShakeLegacyPostProcessBlending.Ref;
    if (bVar4) {
      bVar4 = IsInParallelGameThread();
      if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar4 = pTVar3->ShadowedValue[0];
      this = (APlayerCameraManager *)FWeakObjectPtr::Get(&(param_1->CameraManager).WeakPtr);
      APlayerCameraManager::AddCachedPPBlend(this,&local_7a8,local_38,(uint)(bVar4 == false));
    }
    else {
      FPostProcessSettings::operator=(&param_3->PostProcessSettings,&local_7a8);
      param_3->PostProcessBlendWeight = local_38;
    }
  }
  if (local_7a8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// ApplyScale @ 1476efa50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UCameraShakeBase::ApplyScale
          (FCameraShakePatternUpdateParams *param_1,FCameraShakePatternUpdateResult *param_2)

{
  float fVar1;
  
  fVar1 = param_1->DynamicScale * param_1->ShakeScale;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FCameraShakePatternUpdateResult::ApplyScale(param_2,fVar1);
  return;
}

// ApplyScale @ 1476efa70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl UCameraShakeBase::ApplyScale(float param_1,FCameraShakePatternUpdateResult *param_2)

{
  FCameraShakePatternUpdateResult::ApplyScale(param_2,param_1);
  return;
}

// GetCameraShakeBlendTimes @ 147706df0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakeBase::GetCameraShakeBlendTimes(UCameraShakeBase *this,float *param_1,float *param_2)

{
  UCameraShakePattern *pUVar1;
  undefined4 local_18;
  undefined1 local_14;
  float local_10;
  float local_c;
  
  pUVar1 = (this->RootShakePattern).field0_0x0.DebugPtr;
  local_10 = 0.0;
  local_c = 0.0;
  local_18 = 0;
  local_14 = 0;
  if (pUVar1 != (UCameraShakePattern *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2b0))(pUVar1,&local_18);
    *param_1 = local_10;
    *param_2 = local_c;
    return;
  }
  *param_1 = 0.0;
  *param_2 = 0.0;
  return;
}

// GetCameraShakeDuration @ 147706e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeDuration __thiscall UCameraShakeBase::GetCameraShakeDuration(UCameraShakeBase *this)

{
  UCameraShakePattern *pUVar1;
  FCameraShakeDuration in_RDX;
  undefined4 local_18;
  uint uStack_14;
  undefined8 local_10;
  
  pUVar1 = (this->RootShakePattern).field0_0x0.DebugPtr;
  local_18 = 0;
  uStack_14 = uStack_14 & 0xffffff00;
  local_10 = 0;
  if (pUVar1 != (UCameraShakePattern *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2b0))(pUVar1,&local_18);
    *(longlong *)in_RDX = CONCAT44(uStack_14,local_18);
    return in_RDX;
  }
  *(ulonglong *)in_RDX = (ulonglong)uStack_14 << 0x20;
  return in_RDX;
}

// GetPrivateStaticClass @ 147709e50

UClass * __cdecl UCameraShakeBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraShakeBase",
               &Z_Registration_Info_UClass_UCameraShakeBase.InnerSingleton,
               StaticRegisterNativesUCameraShakeBase,0xe0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraShakeBase>,
               InternalVTableHelperCtorCaller<UCameraShakeBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeBase.InnerSingleton;
}

// GetShakeInfo @ 14770a950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraShakeBase::GetShakeInfo(UCameraShakeBase *this,FCameraShakeInfo *param_1)

{
  UCameraShakePattern *pUVar1;
  
  pUVar1 = (this->RootShakePattern).field0_0x0.DebugPtr;
  if (pUVar1 != (UCameraShakePattern *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014770a95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2b0))();
    return;
  }
  return;
}

// IsFinished @ 147714930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall UCameraShakeBase::IsFinished(UCameraShakeBase *this)

{
  UCameraShakePattern *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->RootShakePattern).field0_0x0.DebugPtr;
  if (pUVar1 != (UCameraShakePattern *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014771493c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)pUVar1 + 0x2d0))();
    return (bool)uVar2;
  }
  return true;
}

// ScrubAndApplyCameraShake @ 147725f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakeBase::ScrubAndApplyCameraShake
          (UCameraShakeBase *this,float param_1,float param_2,FMinimalViewInfo *param_3)

{
  int *piVar1;
  UCameraShakePattern *pUVar2;
  LARGE_INTEGER LVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UpdateShake> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  FNameEntryId FVar12;
  undefined1 auStackY_1268 [32];
  FStatMessage local_1208;
  undefined1 local_11f8 [8];
  LARGE_INTEGER local_11f0;
  FName local_11e8;
  byte local_11e0;
  FName local_11d8;
  FCameraShakeApplyResultParams local_11c8;
  TVector<double>_u_0 local_1128;
  double local_1110;
  double dStack_1108;
  double local_1100;
  undefined4 local_10f8;
  FPostProcessSettings local_10e8;
  undefined4 local_978;
  undefined1 local_974;
  float local_968;
  float local_964;
  float local_960;
  FMinimalViewInfo local_958;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1268;
  FVar12.Value = 0;
  FVar10 = StatPtr_STAT_UpdateShake;
  if (StatPtr_STAT_UpdateShake == (FThreadSafeStaticStat<FStat_STAT_UpdateShake>)0x0) {
    pFVar9 = ::FName::FName((FName *)&local_11f0.s,"STAT_UpdateShake");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_UpdateShake>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateShake,*pFVar9,
                        L"CameraShakeUpdateShake","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_11d8.ComparisonIndex.Value = 0;
  local_11d8.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value == 0) && (FVar11.Number == 0)) {
LAB_147726115:
    bVar5 = false;
    FVar11 = local_11d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1208.StatData.Pad = local_1208.StatData.Pad & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1208,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1208.StatData.Pad = (uchar  [8])FVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1208,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraShakeBase.cpp"
                   ,0x165);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147726115;
    local_1208.StatData.Pad = (uchar  [8])FVar11;
    local_11d8 = FVar11;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar5 = true;
    FVar12.Value = local_11d8.ComparisonIndex.Value;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_11e8,(UObjectBaseUtility *)this);
  if (this->bIsActive == false) {
    bVar7 = `UCameraShakeBase::ScrubAndApplyCameraShake'::__l3::<lambda_1>::operator()(local_11f8);
    if (!bVar7) goto LAB_147726337;
  }
  if ((this->RootShakePattern).field0_0x0.DebugPtr != (UCameraShakePattern *)0x0) {
    local_968 = 0.0;
    local_964 = 1.0;
    local_960 = 1.0;
    FMinimalViewInfo::FMinimalViewInfo(&local_958,param_3);
    local_10f8 = 0;
    local_964 = this->ShakeScale;
    local_1128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1110 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_1108 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_1100 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_968 = param_1;
    local_960 = param_2;
    FPostProcessSettings::FPostProcessSettings(&local_10e8);
    pUVar2 = (this->RootShakePattern).field0_0x0.DebugPtr;
    local_978 = 0;
    local_974 = 0;
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,&local_968);
    cVar8 = (**(code **)(*(longlong *)(this->RootShakePattern).field0_0x0.DebugPtr + 0x2d0))();
    if (cVar8 == '\0') {
      local_11c8.UserPlaySpaceMatrix.M[0][2] = (this->UserPlaySpaceMatrix).M[0][2];
      local_11c8.UserPlaySpaceMatrix.M[0][3] = (this->UserPlaySpaceMatrix).M[0][3];
      local_11c8.PlaySpace = this->PlaySpace;
      local_11c8.Scale = local_960 * local_964;
      if (local_11c8.Scale <= 0.0) {
        local_11c8.Scale = 0.0;
      }
      local_11c8.UserPlaySpaceMatrix.M[1][2] = (this->UserPlaySpaceMatrix).M[1][2];
      local_11c8.UserPlaySpaceMatrix.M[1][3] = (this->UserPlaySpaceMatrix).M[1][3];
      local_11c8.UserPlaySpaceMatrix.M[0][0] = (this->UserPlaySpaceMatrix).M[0][0];
      local_11c8.UserPlaySpaceMatrix.M[0][1] = (this->UserPlaySpaceMatrix).M[0][1];
      local_11c8.UserPlaySpaceMatrix.M[2][2] = (this->UserPlaySpaceMatrix).M[2][2];
      local_11c8.UserPlaySpaceMatrix.M[2][3] = (this->UserPlaySpaceMatrix).M[2][3];
      local_11c8.UserPlaySpaceMatrix.M[1][0] = (this->UserPlaySpaceMatrix).M[1][0];
      local_11c8.UserPlaySpaceMatrix.M[1][1] = (this->UserPlaySpaceMatrix).M[1][1];
      local_11c8.UserPlaySpaceMatrix.M[3][2] = (this->UserPlaySpaceMatrix).M[3][2];
      local_11c8.UserPlaySpaceMatrix.M[3][3] = (this->UserPlaySpaceMatrix).M[3][3];
      local_11c8.UserPlaySpaceMatrix.M[2][0] = (this->UserPlaySpaceMatrix).M[2][0];
      local_11c8.UserPlaySpaceMatrix.M[2][1] = (this->UserPlaySpaceMatrix).M[2][1];
      local_11c8.UserPlaySpaceMatrix.M[3][0] = (this->UserPlaySpaceMatrix).M[3][0];
      local_11c8.UserPlaySpaceMatrix.M[3][1] = (this->UserPlaySpaceMatrix).M[3][1];
      LVar3 = (LARGE_INTEGER)(this->CameraManager).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((APlayerCameraManager *)LVar3.QuadPart != (APlayerCameraManager *)0x0) {
          UE::GC::MarkAsReachable((UObject *)LVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((APlayerCameraManager *)LVar3.QuadPart != (APlayerCameraManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)LVar3);
        }
      }
      local_1208.StatData.Pad = (uchar  [8])0x0;
      local_11f0 = LVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((APlayerCameraManager *)LVar3.QuadPart != (APlayerCameraManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)LVar3);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1208,(FObjectPtr)&local_11f0);
      local_11c8.CameraManager.WeakPtr = (FWeakObjectPtr)local_1208.StatData.Pad;
      ApplyResult(&local_11c8,(FCameraShakePatternUpdateResult *)&local_1128._s_0,param_3);
    }
    if (local_10e8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_10e8.WeightedBlendables.Array.AllocatorInstance.Data);
    }
    if (local_958.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
LAB_147726337:
  if ((local_11e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_11e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_11e0 & 4) != 0) {
    FThreadStats::AddMessage(local_11e8,CycleScopeEnd);
  }
  local_11e0 = 0;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1208.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_1208.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_11f0);
      local_1208.StatData.Pad = (uchar  [8])(local_11f0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_1208);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SetRootShakePattern @ 1477294f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakeBase::SetRootShakePattern(UCameraShakeBase *this,UCameraShakePattern *param_1)

{
  bool bVar1;
  undefined1 local_res8 [8];
  
  if ((this->bIsActive != false) &&
     (bVar1 = `UCameraShakeBase::SetRootShakePattern'::__l3::<lambda_1>::operator()(local_res8),
     !bVar1)) {
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCameraShakePattern *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->RootShakePattern).field0_0x0.DebugPtr = param_1;
  return;
}

// StartShake @ 14772b8f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakeBase::StartShake(UCameraShakeBase *this,FCameraShakeBaseStartParams *param_1)

{
  int *piVar1;
  APlayerCameraManager *pAVar2;
  UCameraShakePattern *pUVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_StartShake> FVar15;
  TRotationMatrix<double> *pTVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  float fVar17;
  FName FVar18;
  FNameEntryId FVar19;
  LARGE_INTEGER local_158;
  undefined1 local_150 [8];
  FName local_148;
  FStatMessage local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TRotationMatrix<double> local_a8;
  
  FVar19.Value = 0;
  FVar15 = StatPtr_STAT_StartShake;
  if (StatPtr_STAT_StartShake == (FThreadSafeStaticStat<FStat_STAT_StartShake>)0x0) {
    pFVar14 = ::FName::FName((FName *)&local_138,"STAT_StartShake");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_StartShake>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StartShake,*pFVar14,
                        L"CameraShakeStartShake","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  uVar11 = local_158.s.LowPart._2_2_;
  uVar9 = local_158.s.LowPart._1_1_;
  uVar7 = local_158.s.LowPart._0_1_;
  FVar18 = *(FName *)FVar15;
  bVar4 = false;
  bVar6 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  fVar17 = (float)FVar18.Number;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (fVar17 == 0.0)) {
LAB_14772ba41:
    bVar5 = false;
    FVar18 = local_148;
  }
  else {
    local_158.s.LowPart._0_1_ = FVar18.ComparisonIndex.Value._0_1_;
    uVar8 = local_158.s.LowPart._0_1_;
    local_158.s.LowPart._1_1_ = FVar18.ComparisonIndex.Value._1_1_;
    uVar10 = local_158.s.LowPart._1_1_;
    local_158.s.LowPart._2_2_ = FVar18.ComparisonIndex.Value._2_2_;
    uVar12 = local_158.s.LowPart._2_2_;
    local_158.s.LowPart._0_1_ = uVar7;
    local_158.s.LowPart._1_1_ = uVar9;
    local_158.s.LowPart._2_2_ = uVar11;
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_158.s.LowPart._0_1_ = 0;
      local_158.s.LowPart._1_1_ = '\0';
      local_158.s.LowPart._2_2_ = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_158.s,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158.s.LowPart._0_1_ = uVar8;
        local_158.s.LowPart._1_1_ = uVar10;
        local_158.s.LowPart._2_2_ = uVar12;
        local_158.s.HighPart = (LONG)fVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_158.s,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraShakeBase.cpp"
                   ,0x11c);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14772ba41;
    local_158.s.LowPart._0_1_ = uVar8;
    local_158.s.LowPart._1_1_ = uVar10;
    local_158.s.LowPart._2_2_ = uVar12;
    local_158.s.HighPart = (LONG)fVar17;
    local_148 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
    FVar19.Value = local_148.ComparisonIndex.Value;
  }
  if ((this->bIsActive != false) && (this->bSingleInstance == false)) {
    bVar13 = `UCameraShakeBase::StartShake'::__l3::<lambda_1>::operator()(local_150);
    if (!bVar13) goto LAB_14772bbd1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar2 = (param_1->CameraManager).field0_0x0.DebugPtr, pAVar2 != (APlayerCameraManager *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  (this->CameraManager).field0_0x0 = (param_1->CameraManager).field0_0x0;
  this->ShakeScale = param_1->Scale;
  this->PlaySpace = param_1->PlaySpace;
  if (param_1->PlaySpace == UserDefined) {
    pTVar16 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
                        (&local_a8,&param_1->UserPlaySpaceRot);
    local_128 = *(double *)pTVar16;
    dStack_120 = *(double *)&pTVar16->field_0x8;
    local_118 = *(double *)&pTVar16->field_0x10;
    dStack_110 = *(double *)&pTVar16->field_0x18;
    local_108 = *(double *)&pTVar16->field_0x20;
    dStack_100 = *(double *)&pTVar16->field_0x28;
    local_f8 = *(double *)&pTVar16->field_0x30;
    dStack_f0 = *(double *)&pTVar16->field_0x38;
    local_e8 = *(double *)&pTVar16->field_0x40;
    dStack_e0 = *(double *)&pTVar16->field_0x48;
    local_d8 = *(double *)&pTVar16->field_0x50;
    dStack_d0 = *(double *)&pTVar16->field_0x58;
    local_c8 = *(undefined4 *)&pTVar16->field_0x60;
    uStack_c4 = *(undefined4 *)&pTVar16->field_0x64;
    uStack_c0 = *(undefined4 *)&pTVar16->field_0x68;
    uStack_bc = *(undefined4 *)&pTVar16->field_0x6c;
    local_b8 = *(undefined4 *)&pTVar16->field_0x70;
    uStack_b4 = *(undefined4 *)&pTVar16->field_0x74;
    uStack_b0 = *(undefined4 *)&pTVar16->field_0x78;
    uStack_ac = *(undefined4 *)&pTVar16->field_0x7c;
  }
  else {
    local_128 = UE::Math::TMatrix<double>::Identity.M[0][0];
    dStack_120 = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_118 = UE::Math::TMatrix<double>::Identity.M[0][2];
    dStack_110 = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_108 = UE::Math::TMatrix<double>::Identity.M[1][0];
    dStack_100 = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_f8 = UE::Math::TMatrix<double>::Identity.M[1][2];
    dStack_f0 = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_e8 = UE::Math::TMatrix<double>::Identity.M[2][0];
    dStack_e0 = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_d8 = UE::Math::TMatrix<double>::Identity.M[2][2];
    dStack_d0 = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_c8 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
    uStack_c4 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
    uStack_c0 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
    uStack_bc = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
    local_b8 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
    uStack_b4 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
    uStack_b0 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
    uStack_ac = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
  }
  pUVar3 = (this->RootShakePattern).field0_0x0.DebugPtr;
  (this->UserPlaySpaceMatrix).M[0][0] = local_128;
  (this->UserPlaySpaceMatrix).M[0][1] = dStack_120;
  (this->UserPlaySpaceMatrix).M[0][2] = local_118;
  (this->UserPlaySpaceMatrix).M[0][3] = dStack_110;
  (this->UserPlaySpaceMatrix).M[1][0] = local_108;
  (this->UserPlaySpaceMatrix).M[1][1] = dStack_100;
  (this->UserPlaySpaceMatrix).M[1][2] = local_f8;
  (this->UserPlaySpaceMatrix).M[1][3] = dStack_f0;
  (this->UserPlaySpaceMatrix).M[2][0] = local_e8;
  (this->UserPlaySpaceMatrix).M[2][1] = dStack_e0;
  (this->UserPlaySpaceMatrix).M[2][2] = local_d8;
  (this->UserPlaySpaceMatrix).M[2][3] = dStack_d0;
  bVar13 = this->bIsActive;
  this->bIsActive = true;
  (this->UserPlaySpaceMatrix).M[3][0] = (double)CONCAT44(uStack_c4,local_c8);
  (this->UserPlaySpaceMatrix).M[3][1] = (double)CONCAT44(uStack_bc,uStack_c0);
  *(undefined4 *)((this->UserPlaySpaceMatrix).M[3] + 2) = local_b8;
  *(undefined4 *)((longlong)(this->UserPlaySpaceMatrix).M[3] + 0x14) = uStack_b4;
  *(undefined4 *)((this->UserPlaySpaceMatrix).M[3] + 3) = uStack_b0;
  *(undefined4 *)((longlong)(this->UserPlaySpaceMatrix).M[3] + 0x1c) = uStack_ac;
  if (pUVar3 != (UCameraShakePattern *)0x0) {
    local_158.s.LowPart._1_1_ = (param_1->DurationOverride).bIsSet;
    if ((bool)local_158.s.LowPart._1_1_ == false) {
      local_158.s.HighPart = (LONG)0.0;
    }
    else {
      local_158.s.HighPart = (LONG)(param_1->DurationOverride).TypedValue;
    }
    local_158.s.LowPart._0_1_ = bVar13;
    (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,&local_158);
  }
LAB_14772bbd1:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_138.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      local_138.NameAndInfo.Index.Value = FVar19.Value;
      QueryPerformanceCounter(&local_158);
      local_138.StatData.Pad[1] = local_158.s.LowPart._1_1_;
      local_138.StatData.Pad[0] = local_158.s.LowPart._0_1_;
      local_138.StatData.Pad[2] = local_158.s.LowPart._2_1_;
      local_138.StatData.Pad[3] = local_158.s.LowPart._3_1_;
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      FThreadStats::AddStatMessage(this_00,&local_138);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// StartShake @ 14772bcc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakeBase::StartShake
          (UCameraShakeBase *this,APlayerCameraManager *param_1,float param_2,
          ECameraShakePlaySpace param_3,TRotator<double> *param_4)

{
  FCameraShakeBaseStartParams local_48;
  
  local_48.DurationOverride.bIsSet = false;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_48.UserPlaySpaceRot.Pitch = param_4->Pitch;
  local_48.UserPlaySpaceRot.Yaw = param_4->Yaw;
  local_48.UserPlaySpaceRot.Roll = param_4->Roll;
  local_48.CameraManager.field0_0x0 = (TObjectPtr<APlayerCameraManager>_u_0)param_1;
  local_48.Scale = param_2;
  local_48.PlaySpace = param_3;
  StartShake(this,&local_48);
  return;
}

// StaticRegisterNativesUCameraShakeBase @ 14772bdf0

void __cdecl UCameraShakeBase::StaticRegisterNativesUCameraShakeBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCameraShakeBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopShake @ 14772d0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraShakeBase::StopShake(UCameraShakeBase *this,bool param_1)

{
  UCameraShakePattern *pUVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  
  if ((this->bIsActive == false) &&
     (bVar2 = `UCameraShakeBase::StopShake'::__l3::<lambda_1>::operator()(local_res8), !bVar2)) {
    return;
  }
  pUVar1 = (this->RootShakePattern).field0_0x0.DebugPtr;
  if (pUVar1 != (UCameraShakePattern *)0x0) {
    local_res8[0] = param_1;
    (**(code **)(*(longlong *)pUVar1 + 0x2d8))(pUVar1,local_res8);
  }
  return;
}

// TeardownShake @ 14772dcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraShakeBase::TeardownShake(UCameraShakeBase *this)

{
  UCameraShakePattern *pUVar1;
  
  pUVar1 = (this->RootShakePattern).field0_0x0.DebugPtr;
  if (pUVar1 != (UCameraShakePattern *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2e0))();
  }
  this->bIsActive = false;
  return;
}

// UpdateAndApplyCameraShake @ 147731390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakeBase::UpdateAndApplyCameraShake
          (UCameraShakeBase *this,float param_1,float param_2,FMinimalViewInfo *param_3)

{
  int *piVar1;
  UCameraShakePattern *pUVar2;
  LARGE_INTEGER LVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UpdateShake> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  FNameEntryId FVar12;
  undefined1 auStackY_1268 [32];
  FStatMessage local_1208;
  undefined1 local_11f8 [8];
  LARGE_INTEGER local_11f0;
  FName local_11e8;
  byte local_11e0;
  FName local_11d8;
  FCameraShakeApplyResultParams local_11c8;
  TVector<double>_u_0 local_1128;
  double local_1110;
  double dStack_1108;
  double local_1100;
  undefined4 local_10f8;
  FPostProcessSettings local_10e8;
  undefined4 local_978;
  undefined1 local_974;
  float local_968;
  float local_964;
  float local_960;
  FMinimalViewInfo local_958;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1268;
  FVar12.Value = 0;
  FVar10 = StatPtr_STAT_UpdateShake;
  if (StatPtr_STAT_UpdateShake == (FThreadSafeStaticStat<FStat_STAT_UpdateShake>)0x0) {
    pFVar9 = ::FName::FName((FName *)&local_11f0.s,"STAT_UpdateShake");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_UpdateShake>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateShake,*pFVar9,
                        L"CameraShakeUpdateShake","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_11d8.ComparisonIndex.Value = 0;
  local_11d8.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value == 0) && (FVar11.Number == 0)) {
LAB_147731525:
    bVar5 = false;
    FVar11 = local_11d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1208.StatData.Pad = local_1208.StatData.Pad & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1208,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1208.StatData.Pad = (uchar  [8])FVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1208,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Camera\\CameraShakeBase.cpp"
                   ,0x13d);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147731525;
    local_1208.StatData.Pad = (uchar  [8])FVar11;
    local_11d8 = FVar11;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar5 = true;
    FVar12.Value = local_11d8.ComparisonIndex.Value;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_11e8,(UObjectBaseUtility *)this);
  if (this->bIsActive == false) {
    bVar7 = `UCameraShakeBase::UpdateAndApplyCameraShake'::__l3::<lambda_1>::operator()(local_11f8);
    if (!bVar7) goto LAB_147731747;
  }
  if ((this->RootShakePattern).field0_0x0.DebugPtr != (UCameraShakePattern *)0x0) {
    local_968 = 0.0;
    local_964 = 1.0;
    local_960 = 1.0;
    FMinimalViewInfo::FMinimalViewInfo(&local_958,param_3);
    local_10f8 = 0;
    local_964 = this->ShakeScale;
    local_1128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1110 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_1108 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_1100 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_968 = param_1;
    local_960 = param_2;
    FPostProcessSettings::FPostProcessSettings(&local_10e8);
    pUVar2 = (this->RootShakePattern).field0_0x0.DebugPtr;
    local_978 = 0;
    local_974 = 0;
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,&local_968);
    cVar8 = (**(code **)(*(longlong *)(this->RootShakePattern).field0_0x0.DebugPtr + 0x2d0))();
    if (cVar8 == '\0') {
      local_11c8.UserPlaySpaceMatrix.M[0][2] = (this->UserPlaySpaceMatrix).M[0][2];
      local_11c8.UserPlaySpaceMatrix.M[0][3] = (this->UserPlaySpaceMatrix).M[0][3];
      local_11c8.PlaySpace = this->PlaySpace;
      local_11c8.Scale = local_960 * local_964;
      if (local_11c8.Scale <= 0.0) {
        local_11c8.Scale = 0.0;
      }
      local_11c8.UserPlaySpaceMatrix.M[1][2] = (this->UserPlaySpaceMatrix).M[1][2];
      local_11c8.UserPlaySpaceMatrix.M[1][3] = (this->UserPlaySpaceMatrix).M[1][3];
      local_11c8.UserPlaySpaceMatrix.M[0][0] = (this->UserPlaySpaceMatrix).M[0][0];
      local_11c8.UserPlaySpaceMatrix.M[0][1] = (this->UserPlaySpaceMatrix).M[0][1];
      local_11c8.UserPlaySpaceMatrix.M[2][2] = (this->UserPlaySpaceMatrix).M[2][2];
      local_11c8.UserPlaySpaceMatrix.M[2][3] = (this->UserPlaySpaceMatrix).M[2][3];
      local_11c8.UserPlaySpaceMatrix.M[1][0] = (this->UserPlaySpaceMatrix).M[1][0];
      local_11c8.UserPlaySpaceMatrix.M[1][1] = (this->UserPlaySpaceMatrix).M[1][1];
      local_11c8.UserPlaySpaceMatrix.M[3][2] = (this->UserPlaySpaceMatrix).M[3][2];
      local_11c8.UserPlaySpaceMatrix.M[3][3] = (this->UserPlaySpaceMatrix).M[3][3];
      local_11c8.UserPlaySpaceMatrix.M[2][0] = (this->UserPlaySpaceMatrix).M[2][0];
      local_11c8.UserPlaySpaceMatrix.M[2][1] = (this->UserPlaySpaceMatrix).M[2][1];
      local_11c8.UserPlaySpaceMatrix.M[3][0] = (this->UserPlaySpaceMatrix).M[3][0];
      local_11c8.UserPlaySpaceMatrix.M[3][1] = (this->UserPlaySpaceMatrix).M[3][1];
      LVar3 = (LARGE_INTEGER)(this->CameraManager).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((APlayerCameraManager *)LVar3.QuadPart != (APlayerCameraManager *)0x0) {
          UE::GC::MarkAsReachable((UObject *)LVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((APlayerCameraManager *)LVar3.QuadPart != (APlayerCameraManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)LVar3);
        }
      }
      local_1208.StatData.Pad = (uchar  [8])0x0;
      local_11f0 = LVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((APlayerCameraManager *)LVar3.QuadPart != (APlayerCameraManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)LVar3);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1208,(FObjectPtr)&local_11f0);
      local_11c8.CameraManager.WeakPtr = (FWeakObjectPtr)local_1208.StatData.Pad;
      ApplyResult(&local_11c8,(FCameraShakePatternUpdateResult *)&local_1128._s_0,param_3);
    }
    if (local_10e8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_10e8.WeightedBlendables.Array.AllocatorInstance.Data);
    }
    if (local_958.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
LAB_147731747:
  if ((local_11e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_11e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_11e0 & 4) != 0) {
    FThreadStats::AddMessage(local_11e8,CycleScopeEnd);
  }
  local_11e0 = 0;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1208.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_1208.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_11f0);
      local_1208.StatData.Pad = (uchar  [8])(local_11f0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_1208);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// execGetRootShakePattern @ 1477368a0

void __cdecl
UCameraShakeBase::execGetRootShakePattern(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  return;
}

// execSetRootShakePattern @ 147738d70

void __cdecl
UCameraShakeBase::execSetRootShakePattern(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[5].field_0x8 != '\0') &&
     (bVar3 = `UCameraShakeBase::SetRootShakePattern'::__l3::<lambda_1>::operator()(local_res8),
     !bVar3)) {
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)&param_1[1].field_0x8 = pUVar2;
  return;
}

// operator() @ 15050fab0

bool __thiscall
`UCameraShakeBase::ScrubAndApplyCameraShake'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2790455576654511768>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2790455576654511768>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15050faf0

bool __thiscall `UCameraShakeBase::SetRootShakePattern'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2790455576654511870>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2790455576654511870>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15050fb30

bool __thiscall `UCameraShakeBase::StartShake'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2790455576654511840>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2790455576654511840>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15050fb70

bool __thiscall `UCameraShakeBase::StopShake'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2790455576654511720>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2790455576654511720>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15050fbb0

bool __thiscall
`UCameraShakeBase::UpdateAndApplyCameraShake'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2790455576654511808>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2790455576654511808>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

