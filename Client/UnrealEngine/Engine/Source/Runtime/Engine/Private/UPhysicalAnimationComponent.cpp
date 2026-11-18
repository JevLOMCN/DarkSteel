// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// StaticClass @ 1482cd130

UClass * __cdecl UPhysicalAnimationComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicalAnimationComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicalAnimationComponent",
               &Z_Registration_Info_UClass_UPhysicalAnimationComponent.InnerSingleton,
               StaticRegisterNativesUPhysicalAnimationComponent,0x100,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPhysicalAnimationComponent>,
               InternalVTableHelperCtorCaller<UPhysicalAnimationComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicalAnimationComponent.InnerSingleton;
}

// UPhysicalAnimationComponent @ 1482db5c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicalAnimationComponent * __thiscall
UPhysicalAnimationComponent::UPhysicalAnimationComponent
          (UPhysicalAnimationComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SkeletalMeshComponent).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->RuntimeInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeInstanceData).ArrayNum = 0;
  (this->RuntimeInstanceData).ArrayMax = 0;
  (this->DriveData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DriveData).ArrayNum = 0;
  (this->DriveData).ArrayMax = 0;
  (this->OnTeleportDelegateHandle).ID = 0;
  return this;
}

// UPhysicalAnimationComponent @ 1482db630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicalAnimationComponent * __thiscall
UPhysicalAnimationComponent::UPhysicalAnimationComponent
          (UPhysicalAnimationComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 3;
  (this->SkeletalMeshComponent).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->RuntimeInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeInstanceData).ArrayNum = 0;
  (this->RuntimeInstanceData).ArrayMax = 0;
  (this->DriveData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DriveData).ArrayNum = 0;
  (this->DriveData).ArrayMax = 0;
  (this->OnTeleportDelegateHandle).ID = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->bPhysicsEngineNeedsUpdating = false;
  this->StrengthMultiplyer = 1.0;
  return this;
}

// ~UPhysicalAnimationComponent @ 1482ddf80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPhysicalAnimationComponent::~UPhysicalAnimationComponent(UPhysicalAnimationComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->DriveData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeInstanceData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// operator() @ 1482e0870

void __thiscall
`UPhysicalAnimationComponent::ApplyPhysicalAnimationProfileBelow'::__l5::<lambda_1>::operator()
          (void *this,FBodyInstance *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FPhysicalAnimationData *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  FPhysicalAnimationData local_38;
  
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar8 != (UObject *)0x0) {
    pUVar9 = Z_Construct_UClass_USkeletalBodySetup_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar9->_padding_)) {
      uVar3 = param_1->InstanceBodyIndex;
      lVar4 = *(longlong *)((longlong)this + 0x10);
      uVar7 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x50)) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar11 = *(longlong **)&pUVar8[0x14].field_0x20;
      plVar12 = (longlong *)((longlong)*(int *)(pUVar8 + 0x15) * 0x2c + (longlong)plVar11);
      for (; plVar11 != plVar12; plVar11 = (longlong *)((longlong)plVar11 + 0x2c)) {
        if (*(longlong *)((longlong)this + 4) == *plVar11) {
          if (plVar11 != (longlong *)0x0) {
            pFVar10 = (FPhysicalAnimationData *)(plVar11 + 1);
            goto LAB_1482e097e;
          }
          break;
        }
      }
      if (*(char *)this != '\0') {
        local_38._8_1_ = local_38._8_1_ | 1;
        pFVar10 = &local_38;
        local_38.BodyName.ComparisonIndex.Value = 0;
        local_38.BodyName.Number = 0;
        local_38.OrientationStrength = 0.0;
        local_38.AngularVelocityStrength = 0.0;
        local_38.PositionStrength = 0.0;
        local_38.VelocityStrength = 0.0;
        local_38.MaxLinearForce = 0.0;
        local_38.MaxAngularForce = 0.0;
LAB_1482e097e:
        bVar1 = **(byte **)((longlong)this + 0x20);
        bVar6 = UpdatePhysicalAnimationSettings
                          (*(FName *)(*(longlong *)
                                       (*(longlong *)(lVar4 + 0x48) + (longlong)(int)uVar3 * 8) +
                                     0x28),pFVar10,
                           *(TArray<FPhysicalAnimationData,TSizedDefaultAllocator<32>_> **)
                            ((longlong)this + 0x18),*(UPhysicsAsset **)((longlong)this + 0x10));
        **(byte **)((longlong)this + 0x20) = bVar6 | bVar1;
      }
    }
  }
  return;
}

// operator() @ 1482e09c0

void __thiscall
`UPhysicalAnimationComponent::ApplyPhysicalAnimationSettingsBelow'::__l5::<lambda_1>::operator()
          (void *this,FBodyInstance *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = param_1->InstanceBodyIndex;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar1 = **(byte **)((longlong)this + 0x38);
  bVar5 = UpdatePhysicalAnimationSettings
                    (*(FName *)(*(longlong *)
                                 (*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 8) + 0x28),
                     (FPhysicalAnimationData *)((longlong)this + 0x10),
                     *(TArray<FPhysicalAnimationData,TSizedDefaultAllocator<32>_> **)
                      ((longlong)this + 8),*(UPhysicsAsset **)this);
  **(byte **)((longlong)this + 0x38) = bVar5 | bVar1;
  return;
}

// operator() @ 1482e0a60

void __thiscall
`UPhysicalAnimationComponent::SetStrengthMultiplyer'::__l5::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FConstraintInstance *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)this;
  uVar6 = 0;
  if (0 < *(int *)(lVar7 + 0xe8)) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < *(int *)(lVar7 + 0xe8)) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar7 = *(longlong *)(lVar7 + 0xe0);
      lVar1 = *(longlong *)this;
      if ((int)uVar6 < *(int *)(lVar1 + 0xd8)) {
        if (((int)uVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FConstraintInstance **)(lVar8 + *(longlong *)(lVar1 + 0xd0));
        if (pFVar2 != (FConstraintInstance *)0x0) {
          SetMotorStrength(pFVar2,(FPhysicalAnimationData *)(lVar7 + (longlong)(int)uVar6 * 0x24),
                           *(float *)(*(longlong *)this + 0xc0));
        }
      }
      lVar7 = *(longlong *)this;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar6 < *(int *)(lVar7 + 0xe8));
  }
  return;
}

// operator() @ 1482e1260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UPhysicalAnimationComponent::UpdatePhysicsEngineImp'::__l5::<lambda_1>::operator()(void *this)

{
  FBodyInstance *this_00;
  code *pcVar1;
  undefined8 uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  TEnumAsByte<EAngularConstraintMotion> TVar8;
  undefined3 uVar9;
  float fVar10;
  FSingleParticlePhysicsProxy *pFVar11;
  TRefCountPtr<Chaos::FImplicitObject> TVar12;
  FConstraintProfileProperties *pFVar13;
  FConstraintProfileProperties *pFVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  FConstraintInstance *this_01;
  FConstraintInstance *pFVar18;
  FConstraintProfileProperties *pFVar19;
  uint *puVar20;
  FSingleParticlePhysicsProxy *pFVar21;
  FPhysScene_Chaos *pFVar22;
  FImplicitObject *this_02;
  FConstraintProfileProperties *pFVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  FPhysicalAnimationData *pFVar27;
  longlong *plVar28;
  uint uVar29;
  undefined1 auStackY_208 [32];
  FSingleParticlePhysicsProxy *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> local_1b0;
  FPhysicalAnimationData *local_1a0;
  TRefCountPtr<Chaos::FImplicitObject> local_198;
  longlong local_190;
  FPhysScene_Chaos *local_188;
  FSingleParticlePhysicsProxy *local_178;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_170;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_158;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_140;
  TTransform<double> local_128;
  FActorCreationParams local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1c0 = this;
  USkeletalMeshComponent::GetBoneSpaceTransforms
            (*(USkeletalMeshComponent **)(*(longlong *)this + 200),&local_140);
  fVar10 = __real_3f800000;
  lVar25 = *(longlong *)this;
  uVar29 = 0;
  if (0 < *(int *)(lVar25 + 0xe8)) {
    lVar26 = 0;
    local_190 = 0;
    local_1b8 = 0;
    do {
      lVar24 = local_190;
      uVar16 = 0;
      if ((int)uVar29 < *(int *)(lVar25 + 0xe8)) {
        uVar16 = ~uVar29 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar27 = (FPhysicalAnimationData *)(lVar24 + *(longlong *)(lVar25 + 0xe0));
      lVar25 = *(longlong *)this;
      uVar16 = 0;
      if ((int)uVar29 < *(int *)(lVar25 + 0xd8)) {
        uVar16 = ~uVar29 >> 0x1f;
      }
      local_1a0 = pFVar27;
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar25 = *(longlong *)(lVar25 + 0xd0);
      if (*(longlong *)(lVar25 + lVar26) == 0) {
        this_01 = ::operator_new(0x2a0);
        pFVar18 = (FConstraintInstance *)0x0;
        if (this_01 != (FConstraintInstance *)0x0) {
          pFVar18 = FConstraintInstance::FConstraintInstance(this_01);
        }
        *(FConstraintInstance **)(lVar25 + lVar26) = pFVar18;
        lVar24 = 2;
        pFVar13 = &pFVar18->ProfileInstance;
        pFVar14 = &UPhysicalAnimationComponent::PhysicalAnimationProfile;
        do {
          pFVar23 = pFVar14;
          pFVar19 = pFVar13;
          fVar4 = pFVar23->ProjectionAngularTolerance;
          fVar5 = pFVar23->ProjectionLinearAlpha;
          fVar6 = pFVar23->ProjectionAngularAlpha;
          pFVar19->ProjectionLinearTolerance = pFVar23->ProjectionLinearTolerance;
          pFVar19->ProjectionAngularTolerance = fVar4;
          pFVar19->ProjectionLinearAlpha = fVar5;
          pFVar19->ProjectionAngularAlpha = fVar6;
          fVar4 = pFVar23->LinearBreakThreshold;
          fVar5 = pFVar23->LinearPlasticityThreshold;
          fVar6 = pFVar23->AngularBreakThreshold;
          pFVar19->ShockPropagationAlpha = pFVar23->ShockPropagationAlpha;
          pFVar19->LinearBreakThreshold = fVar4;
          pFVar19->LinearPlasticityThreshold = fVar5;
          pFVar19->AngularBreakThreshold = fVar6;
          fVar4 = pFVar23->ContactTransferScale;
          uVar2 = *(undefined8 *)&pFVar23->LinearLimit;
          pFVar19->AngularPlasticityThreshold = pFVar23->AngularPlasticityThreshold;
          pFVar19->ContactTransferScale = fVar4;
          *(undefined8 *)&pFVar19->LinearLimit = uVar2;
          uVar7 = *(undefined4 *)&(pFVar23->LinearLimit).field_0x10;
          fVar4 = (pFVar23->LinearLimit).Limit;
          *(undefined8 *)&(pFVar19->LinearLimit).field_0x8 =
               *(undefined8 *)&(pFVar23->LinearLimit).field_0x8;
          *(undefined4 *)&(pFVar19->LinearLimit).field_0x10 = uVar7;
          (pFVar19->LinearLimit).Limit = fVar4;
          uVar2 = *(undefined8 *)((longlong)&(pFVar23->ConeLimit)._padding_ + 4);
          *(undefined8 *)&(pFVar19->LinearLimit).XMotion =
               *(undefined8 *)&(pFVar23->LinearLimit).XMotion;
          *(undefined8 *)((longlong)&(pFVar19->ConeLimit)._padding_ + 4) = uVar2;
          fVar4 = (pFVar23->ConeLimit).Swing1LimitDegrees;
          fVar5 = (pFVar23->ConeLimit).Swing2LimitDegrees;
          *(undefined8 *)((longlong)&(pFVar19->ConeLimit)._padding_ + 4) =
               *(undefined8 *)((longlong)&(pFVar23->ConeLimit)._padding_ + 4);
          (pFVar19->ConeLimit).Swing1LimitDegrees = fVar4;
          (pFVar19->ConeLimit).Swing2LimitDegrees = fVar5;
          uVar2 = *(undefined8 *)&(pFVar23->TwistLimit).field_0x4;
          *(undefined8 *)&(pFVar19->ConeLimit).Swing1Motion =
               *(undefined8 *)&(pFVar23->ConeLimit).Swing1Motion;
          *(undefined8 *)&(pFVar19->TwistLimit).field_0x4 = uVar2;
          fVar4 = (pFVar23->TwistLimit).TwistLimitDegrees;
          TVar8.Value = (pFVar23->TwistLimit).TwistMotion.Value;
          uVar9 = *(undefined3 *)&(pFVar23->TwistLimit).field_0x19;
          *(undefined8 *)&(pFVar19->TwistLimit).field_0xc =
               *(undefined8 *)&(pFVar23->TwistLimit).field_0xc;
          (pFVar19->TwistLimit).TwistLimitDegrees = fVar4;
          (pFVar19->TwistLimit).TwistMotion = (TEnumAsByte<EAngularConstraintMotion>)TVar8.Value;
          *(undefined3 *)&(pFVar19->TwistLimit).field_0x19 = uVar9;
          lVar24 = lVar24 + -1;
          pFVar13 = (FConstraintProfileProperties *)&pFVar19->field_0x80;
          pFVar14 = (FConstraintProfileProperties *)&pFVar23->field_0x80;
        } while (lVar24 != 0);
        dVar3 = (pFVar23->LinearDrive).PositionTarget.field0_0x0._s_0.X;
        *(undefined8 *)&pFVar19->field_0x80 = *(undefined8 *)&pFVar23->field_0x80;
        (pFVar19->LinearDrive).PositionTarget.field0_0x0._s_0.X = dVar3;
        dVar3 = (pFVar23->LinearDrive).PositionTarget.field0_0x0._s_0.Z;
        (pFVar19->LinearDrive).PositionTarget.field0_0x0._s_0.Y =
             (pFVar23->LinearDrive).PositionTarget.field0_0x0._s_0.Y;
        (pFVar19->LinearDrive).PositionTarget.field0_0x0._s_0.Z = dVar3;
        dVar3 = (pFVar23->LinearDrive).VelocityTarget.field0_0x0._s_0.Y;
        (pFVar19->LinearDrive).VelocityTarget.field0_0x0._s_0.X =
             (pFVar23->LinearDrive).VelocityTarget.field0_0x0._s_0.X;
        (pFVar19->LinearDrive).VelocityTarget.field0_0x0._s_0.Y = dVar3;
        fVar4 = (pFVar23->LinearDrive).XDrive.Stiffness;
        fVar5 = (pFVar23->LinearDrive).XDrive.Damping;
        (pFVar19->LinearDrive).VelocityTarget.field0_0x0._s_0.Z =
             (pFVar23->LinearDrive).VelocityTarget.field0_0x0._s_0.Z;
        (pFVar19->LinearDrive).XDrive.Stiffness = fVar4;
        (pFVar19->LinearDrive).XDrive.Damping = fVar5;
        uVar7 = *(undefined4 *)&(pFVar23->LinearDrive).XDrive.field_0xc;
        fVar4 = (pFVar23->LinearDrive).YDrive.Stiffness;
        fVar5 = (pFVar23->LinearDrive).YDrive.Damping;
        (pFVar19->LinearDrive).XDrive.MaxForce = (pFVar23->LinearDrive).XDrive.MaxForce;
        *(undefined4 *)&(pFVar19->LinearDrive).XDrive.field_0xc = uVar7;
        (pFVar19->LinearDrive).YDrive.Stiffness = fVar4;
        (pFVar19->LinearDrive).YDrive.Damping = fVar5;
        uVar7 = *(undefined4 *)&(pFVar23->LinearDrive).YDrive.field_0xc;
        fVar4 = (pFVar23->LinearDrive).ZDrive.Stiffness;
        fVar5 = (pFVar23->LinearDrive).ZDrive.Damping;
        (pFVar19->LinearDrive).YDrive.MaxForce = (pFVar23->LinearDrive).YDrive.MaxForce;
        *(undefined4 *)&(pFVar19->LinearDrive).YDrive.field_0xc = uVar7;
        (pFVar19->LinearDrive).ZDrive.Stiffness = fVar4;
        (pFVar19->LinearDrive).ZDrive.Damping = fVar5;
        SetMotorStrength(*(FConstraintInstance **)(lVar25 + lVar26),pFVar27,
                         *(float *)(*(longlong *)this + 0xc0));
        puVar20 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                  *)(**(longlong **)((longlong)this + 8) + 0xa0),pFVar27->BodyName);
        if (puVar20 != (uint *)0x0) {
          uVar16 = *puVar20;
          if (uVar16 != 0xffffffff) {
            lVar24 = *(longlong *)(*(longlong *)this + 200);
            uVar17 = 0;
            if ((int)uVar16 < *(int *)(lVar24 + 0xbf8)) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            this_00 = *(FBodyInstance **)(*(longlong *)(lVar24 + 0xbf0) + (longlong)(int)uVar16 * 8)
            ;
            if ((this_00 != (FBodyInstance *)0x0) &&
               (pFVar21 = FBodyInstance::GetPhysicsActor(this_00),
               pFVar21 != (FSingleParticlePhysicsProxy *)0x0)) {
              pFVar22 = FBodyInstance::GetPhysicsScene(this_00);
              local_188 = pFVar22;
              FConstraintInstance::SetRefFrame
                        (*(FConstraintInstance **)(lVar25 + lVar26),Frame1,
                         &UE::Math::TTransform<double>::Identity);
              FConstraintInstance::SetRefFrame
                        (*(FConstraintInstance **)(lVar25 + lVar26),Frame2,
                         &UE::Math::TTransform<double>::Identity);
              ComputeTargetTM(&local_128,local_1a0,
                              *(USkeletalMeshComponent **)(*(longlong *)this + 200),
                              (UPhysicsAsset *)**(undefined8 **)((longlong)this + 8),&local_140,
                              *(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> **)
                               ((longlong)this + 0x10),(int)this_00->InstanceBoneIndex);
              local_c8.InitialTM.Rotation.XY.m128d_f64[0] = local_128.Rotation.XY.m128d_f64[0];
              local_c8.InitialTM.Rotation.XY.m128d_f64[1] = local_128.Rotation.XY.m128d_f64[1];
              local_c8.InitialTM.Rotation.ZW.m128d_f64[0] = local_128.Rotation.ZW.m128d_f64[0];
              local_c8.InitialTM.Rotation.ZW.m128d_f64[1] = local_128.Rotation.ZW.m128d_f64[1];
              local_c8.InitialTM.Translation.XY.m128d_f64[0] = local_128.Translation.XY.m128d_f64[0]
              ;
              local_c8.InitialTM.Translation.XY.m128d_f64[1] = local_128.Translation.XY.m128d_f64[1]
              ;
              local_c8.InitialTM.Translation.ZW.m128d_f64[0] = local_128.Translation.ZW.m128d_f64[0]
              ;
              local_c8.InitialTM.Translation.ZW.m128d_f64[1] = local_128.Translation.ZW.m128d_f64[1]
              ;
              local_c8.InitialTM.Scale3D.XY.m128d_f64[0] = local_128.Scale3D.XY.m128d_f64[0];
              local_c8.InitialTM.Scale3D.XY.m128d_f64[1] = local_128.Scale3D.XY.m128d_f64[1];
              local_c8.InitialTM.Scale3D.ZW.m128d_f64[0] = local_128.Scale3D.ZW.m128d_f64[0];
              local_c8.InitialTM.Scale3D.ZW.m128d_f64[1] = local_128.Scale3D.ZW.m128d_f64[1];
              local_c8.bQueryOnly = false;
              local_c8.bEnableGravity = false;
              local_c8.bSimulatePhysics = false;
              local_c8.bStartAwake = true;
              local_c8.DebugName = (char *)0x0;
              local_c8.bUpdateKinematicFromSimulation = false;
              local_c8.bStatic = false;
              local_c8.Scene = (FChaosScene *)pFVar22;
              FChaosEngineInterface::CreateActor(&local_c8,&local_1c8,(UObject *)0x0);
              this_02 = ::operator_new(0x30);
              if (this_02 == (FImplicitObject *)0x0) {
                local_198.Reference = (FImplicitObject *)0x0;
                plVar28 = (longlong *)&DAT_00000008;
              }
              else {
                Chaos::FImplicitObject::FImplicitObject(this_02,3,'\0');
                this_02->Margin = 0.0;
                this_02->_padding_ = (longlong)&___7__TSphere_N_02_Chaos__6B_;
                this_02[1]._padding_ = 0;
                *(undefined4 *)&this_02[1]._padding_ = 0;
                plVar28 = &this_02->_padding_;
                LOCK();
                *(int *)plVar28 = (int)*plVar28 + 1;
                UNLOCK();
                local_198.Reference = this_02;
              }
              TVar12.Reference = local_198.Reference;
              Chaos::FRigidBodyHandle_External::SetGeometry
                        ((FRigidBodyHandle_External *)local_1c8,&local_198);
              pFVar21 = local_1c8;
              Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                        ((TThreadedSingleParticlePhysicsProxyBase<1> *)local_1c8);
              pFVar11 = local_1c8;
              ((pFVar21->Particle).Ptr)->MUserData = (void *)0x0;
              local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b0.ArrayNum = 1;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,1,0,&local_1b0.AllocatorInstance,1,&local_1b0.ArrayMax);
              *(FSingleParticlePhysicsProxy **)local_1b0.AllocatorInstance.Data = pFVar11;
              FChaosScene::AddActorsToScene_AssumesLocked((FChaosScene *)local_188,&local_1b0,false)
              ;
              *(FSingleParticlePhysicsProxy **)(lVar25 + 8 + lVar26) = local_1c8;
              pFVar18 = *(FConstraintInstance **)(lVar25 + lVar26);
              local_170._16_8_ = 0;
              local_170._0_8_ = 0;
              local_170._8_8_ = 0;
              local_158._16_8_ = 0;
              local_158._0_8_ = 0;
              local_158._8_8_ = 0;
              local_178 = FBodyInstance::GetPhysicsActor(this_00);
              FConstraintInstance::InitConstraint_AssumesLocked
                        (pFVar18,&local_178,(FSingleParticlePhysicsProxy **)(lVar26 + 8 + lVar25),
                         fVar10,&local_158,&local_170);
              if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b0.AllocatorInstance.Data);
              }
              this = local_1c0;
              if (TVar12.Reference != (FImplicitObject *)0x0) {
                LOCK();
                lVar25 = *plVar28;
                *(int *)plVar28 = (int)*plVar28 + -1;
                UNLOCK();
                if (((int)lVar25 == 1) &&
                   (*(int *)((longlong)&(TVar12.Reference)->_padding_ + 4) == 0)) {
                  (**(code **)(TVar12.Reference)->_padding_)(TVar12.Reference,1);
                  this = local_1c0;
                }
              }
            }
          }
        }
      }
      else {
        SetMotorStrength(*(FConstraintInstance **)(lVar25 + lVar26),pFVar27,
                         *(float *)(*(longlong *)this + 0xc0));
      }
      uVar29 = uVar29 + 1;
      local_1b8 = local_1b8 + 1;
      lVar25 = *(longlong *)this;
      local_190 = local_190 + 0x24;
      lVar26 = lVar26 + 0x10;
    } while ((int)uVar29 < *(int *)(lVar25 + 0xe8));
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1482e1840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UPhysicalAnimationComponent::UpdateTargetActors'::__l5::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  FPhysicalAnimationData *pFVar11;
  undefined1 auStackY_f8 [32];
  FSingleParticlePhysicsProxy *local_b8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_b0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  USkeletalMeshComponent::GetBoneSpaceTransforms
            (*(USkeletalMeshComponent **)(*(longlong *)this + 200),&local_b0);
  lVar9 = *(longlong *)this;
  uVar7 = 0;
  if (0 < *(int *)(lVar9 + 0xe8)) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar9 + 0xe8)) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)this;
      pFVar11 = (FPhysicalAnimationData *)(*(longlong *)(lVar9 + 0xe0) + lVar10);
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar1 + 0xd8)) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_b8 = *(FSingleParticlePhysicsProxy **)(*(longlong *)(lVar1 + 0xd0) + 8 + lVar8);
      if (local_b8 != (FSingleParticlePhysicsProxy *)0x0) {
        FVar2 = pFVar11->BodyName;
        if (((FVar2 != (FName)0x0) &&
            (piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              *)(*(longlong *)((longlong)this + 8) + 0x90),FVar2),
            piVar6 != (int *)0x0)) && (*piVar6 != -1)) {
          ComputeTargetTM(&local_98,pFVar11,*(USkeletalMeshComponent **)(*(longlong *)this + 200),
                          (UPhysicsAsset *)**(undefined8 **)((longlong)this + 0x10),&local_b0,
                          *(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> **)
                           ((longlong)this + 0x18),*piVar6);
          FChaosEngineInterface::SetKinematicTarget_AssumesLocked(&local_b8,&local_98);
          if (**(char **)((longlong)this + 0x20) == '\x01') {
            FChaosEngineInterface::SetGlobalPose_AssumesLocked(&local_b8,&local_98,true);
          }
        }
      }
      lVar9 = *(longlong *)this;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0x24;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < *(int *)(lVar9 + 0xe8));
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  return;
}

// ApplyPhysicalAnimationProfileBelow @ 1482e7800

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicalAnimationComponent::ApplyPhysicalAnimationProfileBelow
          (UPhysicalAnimationComponent *this,FName param_1,FName param_2,bool param_3,bool param_4)

{
  USkeletalMeshComponent *pUVar1;
  char local_res8 [8];
  code *local_48;
  bool *local_40;
  bool local_38 [4];
  FName local_34;
  UPhysicsAsset *local_28;
  TArray<FPhysicalAnimationData,TSizedDefaultAllocator<32>_> *local_20;
  char *local_18;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    local_28 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar1);
    if ((local_28 != (UPhysicsAsset *)0x0) &&
       (pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr,
       pUVar1 != (USkeletalMeshComponent *)0x0)) {
      local_20 = &this->DriveData;
      local_38[0] = param_4;
      local_18 = local_res8;
      local_res8[0] = '\0';
      local_40 = local_38;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPhysicalAnimationComponent::ApplyPhysicalAnimationProfileBelow'::__l5::<lambda_1>,void,FBodyInstance_*>
                 ::Call;
      local_34 = param_2;
      USkeletalMeshComponent::ForEachBodyBelow
                (pUVar1,param_1,param_3,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_48);
      if (local_res8[0] != '\0') {
        pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
        if (pUVar1 != (USkeletalMeshComponent *)0x0) {
          (**(code **)(pUVar1->_padding_ + 0x910))();
        }
        this->bPhysicsEngineNeedsUpdating = true;
      }
    }
  }
  return;
}

// ApplyPhysicalAnimationSettings @ 1482e7900

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicalAnimationComponent::ApplyPhysicalAnimationSettings
          (UPhysicalAnimationComponent *this,FName param_1,FPhysicalAnimationData *param_2)

{
  USkeletalMeshComponent *pUVar1;
  bool bVar2;
  UPhysicsAsset *pUVar3;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    pUVar3 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar1);
    if (pUVar3 != (UPhysicsAsset *)0x0) {
      bVar2 = UpdatePhysicalAnimationSettings(param_1,param_2,&this->DriveData,pUVar3);
      if (bVar2) {
        pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
        if (pUVar1 != (USkeletalMeshComponent *)0x0) {
          (**(code **)(pUVar1->_padding_ + 0x910))();
        }
        this->bPhysicsEngineNeedsUpdating = true;
      }
    }
  }
  return;
}

// ApplyPhysicalAnimationSettingsBelow @ 1482e7980

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicalAnimationComponent::ApplyPhysicalAnimationSettingsBelow
          (UPhysicalAnimationComponent *this,FName param_1,FPhysicalAnimationData *param_2,
          bool param_3)

{
  USkeletalMeshComponent *pUVar1;
  char local_res8 [8];
  code *local_58;
  UPhysicsAsset **local_50;
  UPhysicsAsset *local_48;
  TArray<FPhysicalAnimationData,TSizedDefaultAllocator<32>_> *local_40;
  FName local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  char *local_10;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    local_48 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar1);
    if ((local_48 != (UPhysicsAsset *)0x0) &&
       (pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr,
       pUVar1 != (USkeletalMeshComponent *)0x0)) {
      local_38 = param_2->BodyName;
      uStack_30 = *(undefined8 *)&param_2->field_0x8;
      local_40 = &this->DriveData;
      local_28._0_4_ = param_2->AngularVelocityStrength;
      local_28._4_4_ = param_2->PositionStrength;
      uStack_20._0_4_ = param_2->VelocityStrength;
      uStack_20._4_4_ = param_2->MaxLinearForce;
      local_18 = param_2->MaxAngularForce;
      local_10 = local_res8;
      local_res8[0] = '\0';
      local_50 = &local_48;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPhysicalAnimationComponent::ApplyPhysicalAnimationSettingsBelow'::__l5::<lambda_1>,void,FBodyInstance_*>
                 ::Call;
      USkeletalMeshComponent::ForEachBodyBelow
                (pUVar1,param_1,param_3,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_58);
      if (local_res8[0] != '\0') {
        pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
        if (pUVar1 != (USkeletalMeshComponent *)0x0) {
          (**(code **)(pUVar1->_padding_ + 0x910))();
        }
        this->bPhysicsEngineNeedsUpdating = true;
      }
    }
  }
  return;
}

// BeginDestroy @ 1482e9db0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicalAnimationComponent::BeginDestroy(UPhysicalAnimationComponent *this)

{
  USkeletalMeshComponent *this_00;
  
  this_00 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if ((this_00 != (USkeletalMeshComponent *)0x0) && ((this->OnTeleportDelegateHandle).ID != 0)) {
    USkeletalMeshComponent::UnregisterOnTeleportDelegate(this_00,&this->OnTeleportDelegateHandle);
  }
  ReleasePhysicsEngine(this);
  UActorComponent::BeginDestroy((UActorComponent *)this);
  return;
}

// GetBodyTargetTransform @ 148307120

/* WARNING: Type propagation algorithm not settling */
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

TTransform<double> * __thiscall
UPhysicalAnimationComponent::GetBodyTargetTransform
          (UPhysicalAnimationComponent *this,TTransform<double> *__return_storage_ptr__,
          FName param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  USkeletalMeshComponent *this_00;
  USkeletalMeshComponent *pUVar3;
  TThreadedSingleParticlePhysicsProxyBase<1> *this_01;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  __m128 _Var12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TTransform<double> *pTVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  
  if ((this->SkeletalMeshComponent).field0_0x0.DebugPtr != (USkeletalMeshComponent *)0x0) {
    uVar17 = 0;
    if (0 < (this->DriveData).ArrayNum) {
      lVar18 = 0;
      lVar19 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar17 < (this->DriveData).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          pTVar16 = (TTransform<double> *)(*pcVar4)();
          return pTVar16;
        }
        pFVar2 = (this->DriveData).AllocatorInstance.Data;
        uVar14 = 0;
        if ((int)uVar17 < (this->RuntimeInstanceData).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          pTVar16 = (TTransform<double> *)(*pcVar4)();
          return pTVar16;
        }
        if (param_1 == *(FName *)(pFVar2 + lVar19)) {
          this_01 = *(TThreadedSingleParticlePhysicsProxyBase<1> **)
                     ((this->RuntimeInstanceData).AllocatorInstance.Data + lVar18 * 0x10 + 8);
          if (this_01 != (TThreadedSingleParticlePhysicsProxyBase<1> *)0x0) {
            Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_01);
            lVar18 = *(longlong *)&this_01->field_0x40;
            Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_01);
            lVar19 = *(longlong *)&this_01->field_0x40;
            uVar1 = *(undefined8 *)(lVar19 + 0x48);
            dVar9 = (double)(float)((ulonglong)uVar1 >> 0x20);
            auVar10._8_4_ = SUB84((double)*(float *)(lVar19 + 0x44),0);
            auVar10._0_8_ = (double)*(float *)(lVar19 + 0x40);
            auVar10._12_4_ = (int)((ulonglong)(double)*(float *)(lVar19 + 0x44) >> 0x20);
            *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar10;
            auVar8._8_4_ = SUB84(dVar9,0);
            auVar8._0_8_ = (double)(float)uVar1;
            auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar8;
            dVar11 = *(double *)(lVar18 + 0x28);
            dVar9 = *(double *)(lVar18 + 0x30);
            (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(lVar18 + 0x20);
            (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
            (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar9;
            (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
            dVar9 = _UNK_150689688;
            (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
                 ___xmm_3ff00000000000003ff0000000000000;
            (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
            dVar9 = _UNK_150689518;
            (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
                 ___xmm_00000000000000003ff0000000000000;
            (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar9;
            return __return_storage_ptr__;
          }
          break;
        }
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 1;
        lVar19 = lVar19 + 0x24;
      } while ((int)uVar17 < (this->DriveData).ArrayNum);
    }
    this_00 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
    lVar18 = (longlong)(int)this_00->_padding_;
    iVar15 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this_00,param_1);
    if ((-1 < iVar15) && (iVar15 < (int)(&this_00->_padding_)[lVar18 * 2])) {
      if ((iVar15 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TTransform<double> *)(*pcVar4)();
        return pTVar16;
      }
      _Var12 = GlobalVectorConstants::Float0001;
      pUVar3 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
      fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
      pFVar2 = ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               &this_00->_padding_)[lVar18].AllocatorInstance.Data;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar5;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)_Var12.m128_f32[2];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)_Var12.m128_f32[3];
      fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar5;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar6;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar7;
      _Var12 = GlobalVectorConstants::Float1110;
      fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar5;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)_Var12.m128_f32[2];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)_Var12.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (__return_storage_ptr__,(TTransform<double> *)(pFVar2 + (longlong)iVar15 * 0x60),
                 (TTransform<double> *)&pUVar3->_padding_);
      return __return_storage_ptr__;
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

// GetPrivateStaticClass @ 14830c200

UClass * __cdecl UPhysicalAnimationComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicalAnimationComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicalAnimationComponent",
               &Z_Registration_Info_UClass_UPhysicalAnimationComponent.InnerSingleton,
               StaticRegisterNativesUPhysicalAnimationComponent,0x100,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPhysicalAnimationComponent>,
               InternalVTableHelperCtorCaller<UPhysicalAnimationComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicalAnimationComponent.InnerSingleton;
}

// InitComponent @ 14830ee00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPhysicalAnimationComponent::InitComponent(UPhysicalAnimationComponent *this)

{
  USkeletalMeshComponent *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDelegateHandle FVar4;
  UPhysicalAnimationComponent *local_res8 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    local_88 = OnTeleport;
    uStack_80 = 0;
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUPhysicalAnimationComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_res8);
      puVar2[4] = local_88;
      puVar2[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    FVar4 = USkeletalMeshComponent::RegisterOnTeleportDelegate
                      (pUVar1,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                              (local_res8 + 1));
                    /* WARNING: Load size is inaccurate */
    (this->OnTeleportDelegateHandle).ID = *FVar4.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
    pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&this->_padding_,(UObject *)pUVar1,
               (FTickFunction *)&pUVar1->_padding_);
    pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
    if (pUVar1 != (USkeletalMeshComponent *)0x0) {
      (**(code **)(pUVar1->_padding_ + 0x910))();
    }
    this->bPhysicsEngineNeedsUpdating = true;
  }
  return;
}

// InitializeComponent @ 1483102a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPhysicalAnimationComponent::InitializeComponent(UPhysicalAnimationComponent *this)

{
  UActorComponent::InitializeComponent((UActorComponent *)this);
  InitComponent(this);
  return;
}

// OnTeleport @ 148315680

void __thiscall UPhysicalAnimationComponent::OnTeleport(UPhysicalAnimationComponent *this)

{
  if (this->bPhysicsEngineNeedsUpdating != false) {
    UpdatePhysicsEngineImp(this);
  }
  UpdateTargetActors(this,TeleportPhysics);
  return;
}

// ReleasePhysicsEngine @ 14831c570

void __thiscall UPhysicalAnimationComponent::ReleasePhysicsEngine(UPhysicalAnimationComponent *this)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FChaosScene *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->RuntimeInstanceData).AllocatorInstance.Data;
  pFVar8 = pFVar6 + 8;
  iVar1 = (this->RuntimeInstanceData).ArrayNum;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RuntimeInstanceData).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UPhysicalAnimationComponent::FPhysicalAnimationInstanceData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if (*(FConstraintInstance **)pFVar6 != (FConstraintInstance *)0x0) {
      FConstraintInstance::TermConstraint(*(FConstraintInstance **)pFVar6);
      pvVar2 = *(void **)pFVar6;
      if (pvVar2 != (void *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar2 + 0x48));
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar2 + 0x30));
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar2 + 0x18));
        ::operator_delete(pvVar2,0x2a0);
      }
      *(undefined8 *)pFVar6 = 0;
    }
    if (*(longlong *)pFVar8 != 0) {
      pFVar5 = FChaosEngineInterface::GetCurrentScene((FSingleParticlePhysicsProxy **)pFVar8);
      if (pFVar5 == (FChaosScene *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3130217520179446247>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicalAnimationComponent.cpp"
                           ,0x1e7,"PhysScene");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        FChaosEngineInterface::ReleaseActor((FSingleParticlePhysicsProxy **)pFVar8,pFVar5,false);
      }
      *(undefined8 *)pFVar8 = 0;
    }
    pFVar6 = pFVar6 + 0x10;
    pFVar8 = pFVar8 + 0x10;
  }
  (this->RuntimeInstanceData).ArrayNum = 0;
  if ((this->RuntimeInstanceData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->RuntimeInstanceData).AllocatorInstance,0,
               &(this->RuntimeInstanceData).ArrayMax);
  }
  return;
}

// SetSkeletalMeshComponent @ 148322950

void __thiscall
UPhysicalAnimationComponent::SetSkeletalMeshComponent
          (UPhysicalAnimationComponent *this,USkeletalMeshComponent *param_1)

{
  int *piVar1;
  USkeletalMeshComponent *this_00;
  
  this_00 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if ((this_00 != (USkeletalMeshComponent *)0x0) && ((this->OnTeleportDelegateHandle).ID != 0)) {
    USkeletalMeshComponent::UnregisterOnTeleportDelegate(this_00,&this->OnTeleportDelegateHandle);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SkeletalMeshComponent).field0_0x0.DebugPtr = param_1;
  piVar1 = &(this->DriveData).ArrayMax;
  (this->DriveData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,&(this->DriveData).AllocatorInstance,0,piVar1);
  }
  ReleasePhysicsEngine(this);
  InitComponent(this);
  return;
}

// SetStrengthMultiplyer @ 1483229f0

void __thiscall
UPhysicalAnimationComponent::SetStrengthMultiplyer(UPhysicalAnimationComponent *this,float param_1)

{
  UPhysicalAnimationComponent *local_res18 [2];
  code *local_18;
  UPhysicalAnimationComponent **local_10;
  
  if (0.0 <= param_1) {
    local_10 = local_res18;
    this->StrengthMultiplyer = param_1;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPhysicalAnimationComponent::SetStrengthMultiplyer'::__l5::<lambda_1>,void>
               ::Call;
    local_res18[0] = this;
    FPhysInterface_Chaos::ExecuteWrite
              ((this->SkeletalMeshComponent).field0_0x0.DebugPtr,
               (TFunctionRef<void___cdecl(void)> *)&local_18);
  }
  return;
}

// StaticRegisterNativesUPhysicalAnimationComponent @ 148323aa0

void __cdecl UPhysicalAnimationComponent::StaticRegisterNativesUPhysicalAnimationComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UPhysicalAnimationComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 1483243a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPhysicalAnimationComponent::TickComponent
          (UPhysicalAnimationComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  if (this->bPhysicsEngineNeedsUpdating != false) {
    UpdatePhysicsEngineImp(this);
  }
  UpdateTargetActors(this,None);
  return;
}

// UpdatePhysicsEngine @ 148329180

void __thiscall UPhysicalAnimationComponent::UpdatePhysicsEngine(UPhysicalAnimationComponent *this)

{
  USkeletalMeshComponent *pUVar1;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x910))();
  }
  this->bPhysicsEngineNeedsUpdating = true;
  return;
}

// UpdatePhysicsEngineImp @ 1483291c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicalAnimationComponent::UpdatePhysicsEngineImp(UPhysicalAnimationComponent *this)

{
  int *piVar1;
  USkeletalMeshComponent *pUVar2;
  int iVar3;
  USkeletalMesh *pUVar4;
  int iVar5;
  UPhysicsAsset *local_res8;
  code *local_38;
  UPhysicalAnimationComponent **local_30;
  UPhysicalAnimationComponent *local_28;
  UPhysicsAsset **local_20;
  longlong *local_18;
  
  this->bPhysicsEngineNeedsUpdating = false;
  pUVar2 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if (((pUVar2 != (USkeletalMeshComponent *)0x0) &&
      (local_res8 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar2),
      local_res8 != (UPhysicsAsset *)0x0)) &&
     (pUVar4 = USkeletalMeshComponent::GetSkeletalMeshAsset
                         ((this->SkeletalMeshComponent).field0_0x0.DebugPtr),
     pUVar4 != (USkeletalMesh *)0x0)) {
    piVar1 = &(this->RuntimeInstanceData).ArrayNum;
    iVar5 = (this->DriveData).ArrayNum - *piVar1;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar5,&(this->RuntimeInstanceData).AllocatorInstance,piVar1,
                       &(this->RuntimeInstanceData).ArrayMax);
    memset((this->RuntimeInstanceData).AllocatorInstance.Data + (longlong)iVar3 * 0x10,0,
           (longlong)iVar5 << 4);
    pUVar2 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
    iVar3 = *(int *)((longlong)&pUVar2->_padding_ + 4);
    pUVar4 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar2);
    (**(code **)(pUVar4->_padding_ + 800))(pUVar4);
    local_20 = &local_res8;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPhysicalAnimationComponent::UpdatePhysicsEngineImp'::__l5::<lambda_1>,void>
               ::Call;
    local_28 = this;
    local_18 = &pUVar2->_padding_ + (longlong)iVar3 * 2;
    FPhysInterface_Chaos::ExecuteWrite
              ((this->SkeletalMeshComponent).field0_0x0.DebugPtr,
               (TFunctionRef<void___cdecl(void)> *)&local_38);
    return;
  }
  return;
}

// UpdateTargetActors @ 14832a390

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicalAnimationComponent::UpdateTargetActors
          (UPhysicalAnimationComponent *this,ETeleportType param_1)

{
  USkeletalMeshComponent *pUVar1;
  USkeletalMesh *pUVar2;
  UPhysicsAsset *local_res8;
  ETeleportType local_res10 [24];
  code *local_48;
  UPhysicalAnimationComponent **local_40;
  UPhysicalAnimationComponent *local_38;
  undefined8 local_30;
  UPhysicsAsset **local_28;
  longlong *local_20;
  ETeleportType *local_18;
  
  pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
  if (((pUVar1 != (USkeletalMeshComponent *)0x0) &&
      (local_res10[0] = param_1,
      local_res8 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar1),
      local_res8 != (UPhysicsAsset *)0x0)) &&
     (pUVar2 = USkeletalMeshComponent::GetSkeletalMeshAsset
                         ((this->SkeletalMeshComponent).field0_0x0.DebugPtr),
     pUVar2 != (USkeletalMesh *)0x0)) {
    pUVar2 = USkeletalMeshComponent::GetSkeletalMeshAsset
                       ((this->SkeletalMeshComponent).field0_0x0.DebugPtr);
    local_30 = (**(code **)(pUVar2->_padding_ + 800))(pUVar2);
    pUVar1 = (this->SkeletalMeshComponent).field0_0x0.DebugPtr;
    local_28 = &local_res8;
    local_20 = &pUVar1->_padding_ + (longlong)*(int *)((longlong)&pUVar1->_padding_ + 4) * 2;
    local_18 = local_res10;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPhysicalAnimationComponent::UpdateTargetActors'::__l5::<lambda_1>,void>
               ::Call;
    local_38 = this;
    FPhysInterface_Chaos::ExecuteWrite(pUVar1,(TFunctionRef<void___cdecl(void)> *)&local_48);
    return;
  }
  return;
}

// execApplyPhysicalAnimationProfileBelow @ 14832c570

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
UPhysicalAnimationComponent::execApplyPhysicalAnimationProfileBelow
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [8];
  FName FVar4;
  bool bVar5;
  bool bVar6;
  char local_res8 [8];
  int local_res10 [4];
  int local_res20 [2];
  undefined1 local_88 [8];
  FName local_80;
  code *local_78;
  undefined1 *local_70;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  UPhysicsAsset *local_58;
  undefined1 *local_50;
  char *local_48;
  
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_88 = (undefined1  [8])0x0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FVar4 = local_80;
  auVar3 = local_88;
  bVar6 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = (code *)local_88;
  if (*(USkinnedMeshComponent **)(param_1 + 5) != (USkinnedMeshComponent *)0x0) {
    local_58 = USkinnedMeshComponent::GetPhysicsAsset(*(USkinnedMeshComponent **)(param_1 + 5));
    if ((local_58 != (UPhysicsAsset *)0x0) &&
       (*(USkeletalMeshComponent **)(param_1 + 5) != (USkeletalMeshComponent *)0x0)) {
      local_50 = &param_1[5].field_0x18;
      local_60 = local_78._4_4_;
      local_48 = local_res8;
      local_res8[0] = '\0';
      local_70 = local_68;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPhysicalAnimationComponent::ApplyPhysicalAnimationProfileBelow'::__l5::<lambda_1>,void,FBodyInstance_*>
                 ::Call;
      local_64 = auVar3._0_4_;
      local_68[0] = bVar6;
      USkeletalMeshComponent::ForEachBodyBelow
                (*(USkeletalMeshComponent **)(param_1 + 5),FVar4,bVar5,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_78);
      if (local_res8[0] != '\0') {
        if (*(longlong **)(param_1 + 5) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 5) + 0x910))();
        }
        param_1[6].field_0x8 = 1;
      }
    }
  }
  return;
}

// execApplyPhysicalAnimationSettings @ 14832c750

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
UPhysicalAnimationComponent::execApplyPhysicalAnimationSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  bool bVar3;
  UPhysicsAsset *pUVar4;
  FPhysicalAnimationData *pFVar5;
  FName local_res8;
  FPhysicalAnimationData local_48;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_48.bIsLocalSimulation = '\x01';
  local_48.BodyName.ComparisonIndex.Value = 0;
  local_48.BodyName.Number = 0;
  local_48.OrientationStrength = 0.0;
  local_48.AngularVelocityStrength = 0.0;
  local_48.PositionStrength = 0.0;
  local_48.VelocityStrength = 0.0;
  local_48.MaxLinearForce = 0.0;
  local_48.MaxAngularForce = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FVar2 = local_res8;
  pFVar5 = &local_48;
  if ((FPhysicalAnimationData *)param_2->MostRecentPropertyAddress != (FPhysicalAnimationData *)0x0)
  {
    pFVar5 = (FPhysicalAnimationData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(USkinnedMeshComponent **)(param_1 + 5) != (USkinnedMeshComponent *)0x0) {
    pUVar4 = USkinnedMeshComponent::GetPhysicsAsset(*(USkinnedMeshComponent **)(param_1 + 5));
    if (pUVar4 != (UPhysicsAsset *)0x0) {
      bVar3 = UpdatePhysicalAnimationSettings
                        (FVar2,pFVar5,
                         (TArray<FPhysicalAnimationData,TSizedDefaultAllocator<32>_> *)
                         &param_1[5].field_0x18,pUVar4);
      if (bVar3) {
        if (*(longlong **)(param_1 + 5) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 5) + 0x910))();
        }
        param_1[6].field_0x8 = 1;
      }
    }
  }
  return;
}

// execApplyPhysicalAnimationSettingsBelow @ 14832c890

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
UPhysicalAnimationComponent::execApplyPhysicalAnimationSettingsBelow
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  uchar *puVar4;
  bool bVar5;
  char local_res8 [8];
  int local_res10 [4];
  FName local_res20;
  code *local_b8;
  UPhysicsAsset **local_b0;
  uchar local_a8 [8];
  byte local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  UPhysicsAsset *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  char *local_48;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_a0 = local_a0 | 1;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_9c = 0;
  uStack_94 = 0;
  local_8c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_res10[0] = 0;
  puVar4 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar3 = local_res20;
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(USkinnedMeshComponent **)(param_1 + 5) != (USkinnedMeshComponent *)0x0) {
    local_80 = USkinnedMeshComponent::GetPhysicsAsset(*(USkinnedMeshComponent **)(param_1 + 5));
    if ((local_80 != (UPhysicsAsset *)0x0) &&
       (*(USkeletalMeshComponent **)(param_1 + 5) != (USkeletalMeshComponent *)0x0)) {
      local_70 = *(undefined8 *)puVar4;
      uStack_68 = *(undefined8 *)(puVar4 + 8);
      local_60 = *(undefined8 *)(puVar4 + 0x10);
      uStack_58 = *(undefined8 *)(puVar4 + 0x18);
      local_78 = &param_1[5].field_0x18;
      local_50 = *(undefined4 *)(puVar4 + 0x20);
      local_48 = local_res8;
      local_res8[0] = '\0';
      local_b0 = &local_80;
      local_b8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPhysicalAnimationComponent::ApplyPhysicalAnimationSettingsBelow'::__l5::<lambda_1>,void,FBodyInstance_*>
                 ::Call;
      USkeletalMeshComponent::ForEachBodyBelow
                (*(USkeletalMeshComponent **)(param_1 + 5),FVar3,bVar5,false,
                 (TFunctionRef<void___cdecl(FBodyInstance_*)> *)&local_b8);
      if (local_res8[0] != '\0') {
        if (*(longlong **)(param_1 + 5) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 5) + 0x910))();
        }
        param_1[6].field_0x8 = 1;
      }
    }
  }
  return;
}

// execGetBodyTargetTransform @ 14832d0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPhysicalAnimationComponent::execGetBodyTargetTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_b8 [32];
  FName local_98 [2];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98[0].ComparisonIndex.Value = 0;
  local_98[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetBodyTargetTransform((UPhysicalAnimationComponent *)param_1,&local_88,local_98[0]);
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
  return;
}

// execSetSkeletalMeshComponent @ 1483314c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPhysicalAnimationComponent::execSetSkeletalMeshComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMeshComponent *this;
  UObject *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDelegateHandle FVar5;
  UObject *local_res8;
  UObject *local_res10;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(USkeletalMeshComponent **)(param_1 + 5) != (USkeletalMeshComponent *)0x0) &&
     (*(ulong64 *)(param_1 + 6) != 0)) {
    USkeletalMeshComponent::UnregisterOnTeleportDelegate
              (*(USkeletalMeshComponent **)(param_1 + 5),(FDelegateHandle *)(param_1 + 6));
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)(param_1 + 5) = pUVar2;
  *(undefined4 *)&param_1[5].field_0x20 = 0;
  if (*(int *)&param_1[5].field_0x24 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)&param_1[5].field_0x18,0,(int *)&param_1[5].field_0x24)
    ;
  }
  ReleasePhysicsEngine((UPhysicalAnimationComponent *)param_1);
  this = *(USkeletalMeshComponent **)(param_1 + 5);
  if (this != (USkeletalMeshComponent *)0x0) {
    uStack_80 = 0;
    local_88 = OnTeleport;
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUPhysicalAnimationComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar3[3] = 0;
      local_res10 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
      puVar3[4] = local_88;
      puVar3[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    FVar5 = USkeletalMeshComponent::RegisterOnTeleportDelegate
                      (this,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                            &stack0x00000020);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)FVar5.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&param_1[1].field_0x10,*(UObject **)(param_1 + 5),
               (FTickFunction *)&(*(UObject **)(param_1 + 5))[1].field_0x10);
    if (*(longlong **)(param_1 + 5) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 5) + 0x910))();
    }
    param_1[6].field_0x8 = 1;
  }
  return;
}

// execSetStrengthMultiplyer @ 148331750

void __cdecl
UPhysicalAnimationComponent::execSetStrengthMultiplyer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMeshComponent *pUVar2;
  float local_res10 [4];
  UObject *local_res20;
  code *local_28;
  UObject **local_20;
  
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
  if (0.0 <= local_res10[0]) {
    pUVar2 = *(USkeletalMeshComponent **)(param_1 + 5);
    local_20 = &local_res20;
    *(float *)&param_1[4].field_0x20 = local_res10[0];
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPhysicalAnimationComponent::SetStrengthMultiplyer'::__l5::<lambda_1>,void>
               ::Call;
    local_res20 = param_1;
    FPhysInterface_Chaos::ExecuteWrite(pUVar2,(TFunctionRef<void___cdecl(void)> *)&local_28);
  }
  return;
}

