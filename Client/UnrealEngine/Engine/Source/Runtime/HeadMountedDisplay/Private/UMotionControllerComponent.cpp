// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 38

// StaticClass @ 14594ba50

UClass * __cdecl UMotionControllerComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionControllerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HeadMountedDisplay",L"MotionControllerComponent",
               &Z_Registration_Info_UClass_UMotionControllerComponent.InnerSingleton,
               StaticRegisterNativesUMotionControllerComponent,0x690,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionControllerComponent>,
               InternalVTableHelperCtorCaller<UMotionControllerComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionControllerComponent.InnerSingleton;
}

// UMotionControllerComponent @ 14594e430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMotionControllerComponent * __thiscall
UMotionControllerComponent::UMotionControllerComponent
          (UMotionControllerComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->MotionSource).ComparisonIndex = 0;
  (this->MotionSource).Number = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PolledMotionControllerMutex,4000)
  ;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RenderThreadRelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RenderThreadRelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RenderThreadRelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RenderThreadRelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RenderThreadRelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RenderThreadRelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RenderThreadRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RenderThreadRelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RenderThreadRelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RenderThreadRelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->ViewExtension).Object = (FViewExtension *)0x0;
  (this->ViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMotionControllerComponent @ 14594e530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMotionControllerComponent * __thiscall
UMotionControllerComponent::UMotionControllerComponent
          (UMotionControllerComponent *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName FVar4;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->MotionSource).ComparisonIndex = 0;
  (this->MotionSource).Number = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PolledMotionControllerMutex,4000)
  ;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RenderThreadRelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RenderThreadRelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RenderThreadRelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RenderThreadRelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RenderThreadRelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RenderThreadRelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RenderThreadRelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RenderThreadRelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RenderThreadRelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RenderThreadRelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->RenderThreadComponentScale).field0_0x0._s_0.X = 1.0;
  (this->RenderThreadComponentScale).field0_0x0._s_0.Y = 1.0;
  (this->RenderThreadComponentScale).field0_0x0._s_0.Z = 1.0;
  (this->ViewExtension).Object = (FViewExtension *)0x0;
  (this->ViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->field_0x42 = this->field_0x42 | 7;
  this->field_0x40 = 0;
  this->PlayerIndex = 0;
  FVar4 = IMotionController::LeftHandSourceId;
  this->bDisableLowLatencyUpdate = 0;
  this->field_0x9a = this->field_0x9a | 8;
  this->field_0x9b = this->field_0x9b | 1;
  this->MotionSource = FVar4;
  this->bHasAuthority = false;
  return this;
}

// ~UMotionControllerComponent @ 14594eae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UMotionControllerComponent::~UMotionControllerComponent(UMotionControllerComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewExtension).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PolledMotionControllerMutex);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// BeginDestroy @ 145950350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UMotionControllerComponent::BeginDestroy(UMotionControllerComponent *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<UMotionControllerComponent::FViewExtension,1> *pTVar3;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  UPrimitiveComponent::BeginDestroy((UPrimitiveComponent *)this);
  pTVar3 = &this->ViewExtension;
  if (pTVar3->Object == (FViewExtension *)0x0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&CritSect);
  if (pTVar3->Object == (FViewExtension *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3->Object->MotionControllerComponent = (UMotionControllerComponent *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&CritSect);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TSharedPtr<UMotionControllerComponent::FViewExtension,1> *)&local_18) {
    pTVar3->Object = (FViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewExtension).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// CreateRenderState_Concurrent @ 145951b00

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
UMotionControllerComponent::CreateRenderState_Concurrent
          (UMotionControllerComponent *this,FRegisterComponentContext *param_1)

{
  double dVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UPrimitiveComponent::CreateRenderState_Concurrent((UPrimitiveComponent *)this,param_1);
  pTVar3 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_78);
  dVar1 = (pTVar3->Rotation).XY.m128d_f64[1];
  (this->RenderThreadRelativeTransform).Rotation.XY.m128d_f64[0] =
       (pTVar3->Rotation).XY.m128d_f64[0];
  (this->RenderThreadRelativeTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Rotation).ZW.m128d_f64[1];
  (this->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[0] =
       (pTVar3->Rotation).ZW.m128d_f64[0];
  (this->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Translation).XY.m128d_f64[1];
  (this->RenderThreadRelativeTransform).Translation.XY.m128d_f64[0] =
       (pTVar3->Translation).XY.m128d_f64[0];
  (this->RenderThreadRelativeTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Translation).ZW.m128d_f64[1];
  (this->RenderThreadRelativeTransform).Translation.ZW.m128d_f64[0] =
       (pTVar3->Translation).ZW.m128d_f64[0];
  (this->RenderThreadRelativeTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Scale3D).XY.m128d_f64[1];
  (this->RenderThreadRelativeTransform).Scale3D.XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
  (this->RenderThreadRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  (this->RenderThreadRelativeTransform).Scale3D.ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
  (this->RenderThreadRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar2 = *(double *)&this->field_0x238;
  dVar1 = *(double *)&this->field_0x240;
  (this->RenderThreadComponentScale).field0_0x0._s_0.X = *(double *)&this->field_0x230;
  (this->RenderThreadComponentScale).field0_0x0._s_0.Y = dVar2;
  (this->RenderThreadComponentScale).field0_0x0._s_0.Z = dVar1;
  return;
}

// GetAngularVelocity @ 145952b10

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

bool __thiscall
UMotionControllerComponent::GetAngularVelocity
          (UMotionControllerComponent *this,TRotator<double> *param_1)

{
  IXRTrackingSystem *pIVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 (*pauVar10) [16];
  TRotator<double> *pTVar11;
  double dVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_198 [32];
  TQuat<double> local_178;
  TRotator<double> local_158 [5];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_198;
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 == (IXRTrackingSystem *)0x0) {
    pauVar10 = (undefined1 (*) [16])local_d8;
    local_d8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_c8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_b8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_a8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_98 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_88 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    pauVar10 = (undefined1 (*) [16])(**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,local_d8);
  }
  auVar15 = pauVar10[1];
  auVar18 = *pauVar10;
  dVar23 = auVar18._8_8_;
  dVar12 = (this->AngularVelocityAsAxisAndLength).field0_0x0._s_0.X * *(double *)pauVar10[4];
  dVar4 = (this->AngularVelocityAsAxisAndLength).field0_0x0._s_0.Y * *(double *)(pauVar10[4] + 8);
  uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar5 = (this->AngularVelocityAsAxisAndLength).field0_0x0._s_0.Z * *(double *)pauVar10[5];
  dVar6 = *(double *)(pauVar10[5] + 8) * 0.0;
  dVar25 = auVar15._8_8_;
  auVar27._8_4_ = SUB84(dVar4,0);
  auVar27._0_8_ = dVar12;
  auVar27._12_4_ = uVar26;
  auVar24 = blendpd(auVar18,auVar15,2);
  dVar7 = auVar15._0_8_;
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar12;
  auVar14._12_4_ = uVar26;
  auVar15._8_4_ = SUB84(dVar6,0);
  auVar15._0_8_ = dVar5;
  auVar15._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar15 = blendpd(auVar14,auVar15,2);
  auVar28._0_8_ = auVar27._8_8_ * auVar18._0_8_ - dVar23 * dVar12;
  auVar28._8_8_ = dVar5 * dVar23 - dVar7 * dVar4;
  dVar2 = auVar24._8_8_;
  auVar16._0_8_ = auVar15._0_8_ * dVar7 - auVar24._0_8_ * dVar5;
  auVar16._8_8_ = auVar15._8_8_ * dVar25 - dVar2 * dVar6;
  auVar15 = blendpd(auVar28,auVar16,2);
  dVar6 = auVar28._8_8_ + auVar28._8_8_;
  dVar8 = auVar16._0_8_ + auVar16._0_8_;
  uVar26 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar29._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar29._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  auVar20._8_4_ = SUB84(dVar8,0);
  auVar20._0_8_ = dVar6;
  auVar20._12_4_ = uVar26;
  auVar17._8_4_ = SUB84(dVar8,0);
  auVar17._0_8_ = dVar6;
  auVar17._12_4_ = uVar26;
  auVar15 = blendpd(auVar17,auVar29,2);
  auVar21._0_8_ = auVar20._8_8_ * auVar18._0_8_ - dVar6 * dVar23;
  auVar21._8_8_ = auVar29._0_8_ * dVar23 - dVar8 * dVar7;
  auVar18._0_8_ = auVar15._0_8_ * dVar7 - auVar29._0_8_ * auVar24._0_8_;
  auVar18._8_8_ = auVar15._8_8_ * dVar25 - auVar29._8_8_ * dVar2;
  dVar7 = dVar6 * dVar25 + dVar12 + auVar21._8_8_;
  dVar12 = dVar8 * dVar25 + dVar4 + auVar18._0_8_;
  auVar15 = blendpd(auVar21,auVar18,2);
  auVar9._4_8_ = dVar2;
  auVar9._0_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar24._0_8_ = auVar9._0_8_ << 0x20;
  auVar24._8_4_ = SUB84(dVar12,0);
  auVar24._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  local_158[0].Roll = auVar29._0_8_ * dVar25 + dVar5 + auVar15._0_8_;
  dVar25 = auVar24._8_8_;
  dVar2 = SQRT(dVar7 * dVar7 + dVar25 * dVar25 + local_158[0].Roll * local_158[0].Roll);
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (__real_3e45798ee0000000 < dVar2) {
    dVar12 = __real_3ff0000000000000 / dVar2;
    uVar22 = dVar12 * dVar25;
    uVar13 = dVar12 * local_158[0].Roll;
    uVar19 = dVar12 * dVar7;
  }
  local_178.X = (double)uVar19 * __real_3fdeaee8744b05f0;
  local_178.Y = (double)uVar22 * __real_3fdeaee8744b05f0;
  local_178.Z = (double)uVar13 * __real_3fdeaee8744b05f0;
  local_178.W = __real_3fec1528065b7d50;
  pTVar11 = UE::Math::TQuat<double>::Rotator(&local_178,local_158);
  dVar7 = dVar2 * pTVar11->Yaw;
  dVar25 = dVar2 * pTVar11->Roll;
  param_1->Pitch = dVar2 * pTVar11->Pitch;
  auVar3._8_4_ = SUB84(dVar25,0);
  auVar3._0_8_ = dVar7;
  auVar3._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  param_1->Yaw = dVar7;
  param_1->Roll = (double)auVar3._8_8_;
  return this->bProvidedAngularVelocity;
}

// GetHandJointPosition @ 145953700

TVector<double> * __thiscall
UMotionControllerComponent::GetHandJointPosition
          (UMotionControllerComponent *this,TVector<double> *__return_storage_ptr__,int param_1,
          bool *param_2)

{
  IMotionController *pIVar1;
  undefined8 uVar2;
  char cVar3;
  double local_28;
  double dStack_20;
  double local_18;
  
  pIVar1 = this->InUseMotionController;
  if (pIVar1 != (IMotionController *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,this->MotionSource,param_1,&local_28);
    if (cVar3 != '\0') {
      *param_2 = true;
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
      return __return_storage_ptr__;
    }
  }
  *param_2 = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetLinearAcceleration @ 145953820

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

bool __thiscall
UMotionControllerComponent::GetLinearAcceleration
          (UMotionControllerComponent *this,TVector<double> *param_1)

{
  IXRTrackingSystem *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 (*pauVar9) [16];
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_148 [128];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_148;
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 == (IXRTrackingSystem *)0x0) {
    pauVar9 = (undefined1 (*) [16])local_c8;
    local_c8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_b8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_a8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_98 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_88 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_78 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    pauVar9 = (undefined1 (*) [16])(**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,local_c8);
  }
  auVar15 = pauVar9[1];
  auVar16 = *pauVar9;
  dVar4 = (this->LinearAcceleration).field0_0x0._s_0.X * *(double *)pauVar9[4];
  dVar5 = (this->LinearAcceleration).field0_0x0._s_0.Y * *(double *)(pauVar9[4] + 8);
  uVar10 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar6 = (this->LinearAcceleration).field0_0x0._s_0.Z * *(double *)pauVar9[5];
  dVar7 = *(double *)(pauVar9[5] + 8) * 0.0;
  dVar3 = auVar15._0_8_;
  dVar17 = auVar16._8_8_;
  auVar20._8_4_ = SUB84(dVar5,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = uVar10;
  dVar8 = auVar15._8_8_;
  auVar21._0_8_ = auVar20._8_8_ * auVar16._0_8_ - dVar17 * dVar4;
  auVar21._8_8_ = dVar6 * dVar17 - dVar3 * dVar5;
  auVar20 = blendpd(auVar16,auVar15,2);
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar4;
  auVar11._12_4_ = uVar10;
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = dVar6;
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar12 = blendpd(auVar11,auVar12,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar3 - auVar20._0_8_ * dVar6;
  auVar13._8_8_ = auVar12._8_8_ * dVar8 - auVar20._8_8_ * dVar7;
  dVar7 = auVar21._8_8_ + auVar21._8_8_;
  dVar2 = auVar13._0_8_ + auVar13._0_8_;
  uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar12 = blendpd(auVar21,auVar13,2);
  auVar22._0_8_ = auVar12._0_8_ + auVar12._0_8_;
  auVar22._8_8_ = auVar12._8_8_ + auVar12._8_8_;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._0_8_ = dVar8;
  auVar14._12_4_ = auVar15._12_4_;
  auVar18._8_4_ = SUB84(dVar2,0);
  auVar18._0_8_ = dVar7;
  auVar18._12_4_ = uVar10;
  auVar19._0_8_ = auVar18._8_8_ * auVar16._0_8_ - dVar17 * dVar7;
  auVar19._8_8_ = auVar22._0_8_ * dVar17 - dVar3 * dVar2;
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ = dVar7;
  auVar15._12_4_ = uVar10;
  auVar15 = blendpd(auVar15,auVar22,2);
  auVar16._0_8_ = auVar15._0_8_ * dVar3 - auVar20._0_8_ * auVar22._0_8_;
  auVar16._8_8_ = auVar15._8_8_ * dVar8 - auVar20._8_8_ * auVar22._8_8_;
  auVar15 = blendpd(auVar19,auVar16,2);
  (param_1->field0_0x0)._s_0.X = dVar8 * dVar7 + dVar4 + auVar19._8_8_;
  (param_1->field0_0x0)._s_0.Y = auVar14._8_8_ * dVar2 + dVar5 + auVar16._0_8_;
  (param_1->field0_0x0)._s_0.Z = dVar8 * auVar22._0_8_ + dVar6 + auVar15._0_8_;
  return this->bProvidedLinearAcceleration;
}

// GetLinearVelocity @ 145953a20

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

bool __thiscall
UMotionControllerComponent::GetLinearVelocity
          (UMotionControllerComponent *this,TVector<double> *param_1)

{
  IXRTrackingSystem *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 (*pauVar9) [16];
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_148 [128];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_148;
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 == (IXRTrackingSystem *)0x0) {
    pauVar9 = (undefined1 (*) [16])local_c8;
    local_c8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_b8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_a8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_98 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_88 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_78 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    pauVar9 = (undefined1 (*) [16])(**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,local_c8);
  }
  auVar15 = pauVar9[1];
  auVar16 = *pauVar9;
  dVar4 = (this->LinearVelocity).field0_0x0._s_0.X * *(double *)pauVar9[4];
  dVar5 = (this->LinearVelocity).field0_0x0._s_0.Y * *(double *)(pauVar9[4] + 8);
  uVar10 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar6 = (this->LinearVelocity).field0_0x0._s_0.Z * *(double *)pauVar9[5];
  dVar7 = *(double *)(pauVar9[5] + 8) * 0.0;
  dVar3 = auVar15._0_8_;
  dVar17 = auVar16._8_8_;
  auVar20._8_4_ = SUB84(dVar5,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = uVar10;
  dVar8 = auVar15._8_8_;
  auVar21._0_8_ = auVar20._8_8_ * auVar16._0_8_ - dVar17 * dVar4;
  auVar21._8_8_ = dVar6 * dVar17 - dVar3 * dVar5;
  auVar20 = blendpd(auVar16,auVar15,2);
  auVar11._8_4_ = SUB84(dVar5,0);
  auVar11._0_8_ = dVar4;
  auVar11._12_4_ = uVar10;
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = dVar6;
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar12 = blendpd(auVar11,auVar12,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar3 - auVar20._0_8_ * dVar6;
  auVar13._8_8_ = auVar12._8_8_ * dVar8 - auVar20._8_8_ * dVar7;
  dVar7 = auVar21._8_8_ + auVar21._8_8_;
  dVar2 = auVar13._0_8_ + auVar13._0_8_;
  uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar12 = blendpd(auVar21,auVar13,2);
  auVar22._0_8_ = auVar12._0_8_ + auVar12._0_8_;
  auVar22._8_8_ = auVar12._8_8_ + auVar12._8_8_;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._0_8_ = dVar8;
  auVar14._12_4_ = auVar15._12_4_;
  auVar18._8_4_ = SUB84(dVar2,0);
  auVar18._0_8_ = dVar7;
  auVar18._12_4_ = uVar10;
  auVar19._0_8_ = auVar18._8_8_ * auVar16._0_8_ - dVar17 * dVar7;
  auVar19._8_8_ = auVar22._0_8_ * dVar17 - dVar3 * dVar2;
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ = dVar7;
  auVar15._12_4_ = uVar10;
  auVar15 = blendpd(auVar15,auVar22,2);
  auVar16._0_8_ = auVar15._0_8_ * dVar3 - auVar20._0_8_ * auVar22._0_8_;
  auVar16._8_8_ = auVar15._8_8_ * dVar8 - auVar20._8_8_ * auVar22._8_8_;
  auVar15 = blendpd(auVar19,auVar16,2);
  (param_1->field0_0x0)._s_0.X = dVar8 * dVar7 + dVar4 + auVar19._8_8_;
  (param_1->field0_0x0)._s_0.Y = auVar14._8_8_ * dVar2 + dVar5 + auVar16._0_8_;
  (param_1->field0_0x0)._s_0.Z = dVar8 * auVar22._0_8_ + dVar6 + auVar15._0_8_;
  return this->bProvidedLinearVelocity;
}

// GetParameterValue @ 145953c20

float __thiscall
UMotionControllerComponent::GetParameterValue
          (UMotionControllerComponent *this,FName param_1,bool *param_2)

{
  IMotionController *pIVar1;
  float fVar2;
  
  pIVar1 = this->InUseMotionController;
  if (pIVar1 != (IMotionController *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145953c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)((longlong)*pIVar1 + 0x38))
                             (pIVar1,this->MotionSource,param_1,param_2);
    return fVar2;
  }
  *param_2 = false;
  return 0.0;
}

// GetPrivateStaticClass @ 145953d90

UClass * __cdecl UMotionControllerComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionControllerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HeadMountedDisplay",L"MotionControllerComponent",
               &Z_Registration_Info_UClass_UMotionControllerComponent.InnerSingleton,
               StaticRegisterNativesUMotionControllerComponent,0x690,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionControllerComponent>,
               InternalVTableHelperCtorCaller<UMotionControllerComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionControllerComponent.InnerSingleton;
}

// GetTrackingMotionSource @ 145953f00

FName __thiscall
UMotionControllerComponent::GetTrackingMotionSource(UMotionControllerComponent *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->MotionSource;
  return in_RDX;
}

// GetTrackingSource @ 145953f20

EControllerHand __thiscall
UMotionControllerComponent::GetTrackingSource(UMotionControllerComponent *this)

{
  EControllerHand local_res8 [32];
  
  local_res8[0] = Left;
  IMotionController::GetHandEnumForSourceName(this->MotionSource,local_res8);
  return local_res8[0];
}

// InitializeComponent @ 145954030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMotionControllerComponent::InitializeComponent(UMotionControllerComponent *this)

{
  bool bVar1;
  UWorld *this_00;
  
  UActorComponent::InitializeComponent((UActorComponent *)this);
  this_00 = *(UWorld **)&this->field_0xb0;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 == (UWorld *)0x0)) {
    return;
  }
  bVar1 = UWorld::IsGameWorld(this_00);
  if (!bVar1) {
    return;
  }
  FMotionDelayService::RegisterDelayTarget
            ((USceneComponent *)this,this->PlayerIndex,this->MotionSource);
  return;
}

// OnModularFeatureUnregistered @ 145954270

void __thiscall
UMotionControllerComponent::OnModularFeatureUnregistered
          (UMotionControllerComponent *this,FName *param_1,IModularFeature *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IMotionController *pIVar1;
  
  lpCriticalSection = &this->PolledMotionControllerMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = this->PolledMotionController_GameThread + 1;
    if (this->PolledMotionController_GameThread == (IMotionController *)0x0) {
      pIVar1 = (IMotionController *)0x0;
    }
    if ((IMotionController *)param_2 == pIVar1) {
      this->PolledMotionController_GameThread = (IMotionController *)0x0;
    }
    pIVar1 = this->PolledMotionController_RenderThread + 1;
    if (this->PolledMotionController_RenderThread == (IMotionController *)0x0) {
      pIVar1 = (IMotionController *)0x0;
    }
    if ((IMotionController *)param_2 == pIVar1) {
      this->PolledMotionController_RenderThread = (IMotionController *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001459542eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnMotionControllerUpdated @ 145954300

void __thiscall
UMotionControllerComponent::OnMotionControllerUpdated(UMotionControllerComponent *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UMotionControllerComponent_OnMotionControllerUpdated);
                    /* WARNING: Could not recover jumptable at 0x00014595432d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// PollControllerState @ 145954340

bool __thiscall
UMotionControllerComponent::PollControllerState
          (UMotionControllerComponent *this,TVector<double> *param_1,TRotator<double> *param_2,
          float param_3)

{
  bool bVar1;
  bool local_68;
  bool local_67;
  bool local_66 [6];
  TVector<double> local_60;
  TVector<double> local_48;
  TVector<double> local_30;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    bVar1 = PollControllerState_GameThread
                      (this,param_1,param_2,local_66,&local_30,&local_67,&local_48,&local_68,
                       &local_60,param_3);
  }
  else {
    bVar1 = PollControllerState_RenderThread(this,param_1,param_2,param_3);
  }
  return bVar1;
}

// PollControllerState_GameThread @ 1459543f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMotionControllerComponent::PollControllerState_GameThread
          (UMotionControllerComponent *this,TVector<double> *param_1,TRotator<double> *param_2,
          bool *param_3,TVector<double> *param_4,bool *param_5,TVector<double> *param_6,
          bool *param_7,TVector<double> *param_8,float param_9)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IMotionController *pIVar1;
  IXRTrackingSystem *pIVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  ETrackingStatus EVar9;
  char cVar10;
  IModularFeatures *this_00;
  TArray<IMotionController_*,TSizedDefaultAllocator<32>_> *pTVar11;
  UFunction *pUVar12;
  TRotator<double> *pTVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  TArray<IMotionController_*,TSizedDefaultAllocator<32>_> local_98;
  TArray<IMotionController_*,TSizedDefaultAllocator<32>_> local_88;
  TRotator<double> local_78;
  TQuat<double> local_58;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Private\\MotionControllerComponent.cpp"
                         ,0x127,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  bVar7 = (bool)(**(code **)(**(longlong **)&this->field_0xa8 + 0x2c8))();
  this->bHasAuthority = bVar7;
  if (bVar7 != false) {
    lpCriticalSection = &this->PolledMotionControllerMutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar15 = (FScriptContainerElement *)0x0;
    this->PolledMotionController_GameThread = (IMotionController *)0x0;
    this->bPolledHMD_GameThread = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->MotionSource == IMotionController::HMDSourceId) ||
       (this->MotionSource == IMotionController::HeadSourceId)) {
      pIVar2 = (GEngine->XRSystem).Object;
      if ((pIVar2 != (IXRTrackingSystem *)0x0) &&
         (cVar10 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,0,&local_58,param_1),
         cVar10 != '\0')) {
        pTVar13 = UE::Math::TQuat<double>::Rotator(&local_58,&local_78);
        uVar4 = *(undefined4 *)((longlong)&pTVar13->Pitch + 4);
        uVar5 = *(undefined4 *)&pTVar13->Yaw;
        uVar6 = *(undefined4 *)((longlong)&pTVar13->Yaw + 4);
        *(undefined4 *)&param_2->Pitch = *(undefined4 *)&pTVar13->Pitch;
        *(undefined4 *)((longlong)&param_2->Pitch + 4) = uVar4;
        *(undefined4 *)&param_2->Yaw = uVar5;
        *(undefined4 *)((longlong)&param_2->Yaw + 4) = uVar6;
        param_2->Roll = pTVar13->Roll;
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        this->bPolledHMD_GameThread = true;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return true;
      }
    }
    else {
      iVar16 = 0;
      this_00 = IModularFeatures::Get();
      pTVar11 = IModularFeatures::GetModularFeatureImplementations<IMotionController>
                          (this_00,&local_98,IMotionController::FeatureName);
      if (&local_88 != pTVar11) {
        pFVar15 = (pTVar11->AllocatorInstance).Data;
        (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar16 = pTVar11->ArrayNum;
        pTVar11->ArrayNum = 0;
        pTVar11->ArrayMax = 0;
      }
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      for (pFVar14 = pFVar15; pFVar14 != pFVar15 + (longlong)iVar16 * 8; pFVar14 = pFVar14 + 8) {
        pIVar1 = *(IMotionController **)pFVar14;
        if (pIVar1 != (IMotionController *)0x0) {
          EVar9 = (**(code **)((longlong)*pIVar1 + 0x28))
                            (pIVar1,this->PlayerIndex,this->MotionSource);
          this->CurrentTrackingStatus = EVar9;
          cVar10 = (**(code **)((longlong)*pIVar1 + 0x10))
                             (pIVar1,this->PlayerIndex,this->MotionSource,param_2,param_1,param_3,
                              param_4,param_5,param_6,param_7,param_8,param_9);
          if (cVar10 != '\0') {
            this->InUseMotionController = pIVar1;
            pUVar12 = UObject::FindFunctionChecked
                                ((UObject *)this,
                                 NAME_UMotionControllerComponent_OnMotionControllerUpdated);
            (**(code **)(*(longlong *)this + 0x260))(this,pUVar12,0);
            this->InUseMotionController = (IMotionController *)0x0;
            EnterCriticalSection((LPCRITICAL_SECTION)&this->PolledMotionControllerMutex);
            this->PolledMotionController_GameThread = pIVar1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&this->PolledMotionControllerMutex);
            if (pFVar15 == (FScriptContainerElement *)0x0) {
              return true;
            }
            FMemory::Free(pFVar15);
            return true;
          }
        }
      }
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
    }
  }
  return false;
}

// PollControllerState_RenderThread @ 145954720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMotionControllerComponent::PollControllerState_RenderThread
          (UMotionControllerComponent *this,TVector<double> *param_1,TRotator<double> *param_2,
          float param_3)

{
  IMotionController *pIVar1;
  IXRTrackingSystem *pIVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  ETrackingStatus EVar7;
  char cVar8;
  TRotator<double> *pTVar9;
  TRotator<double> local_58;
  TQuat<double> local_38;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Private\\MotionControllerComponent.cpp"
                       ,0x166,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  pIVar1 = this->PolledMotionController_RenderThread;
  if (pIVar1 == (IMotionController *)0x0) {
LAB_1459547c3:
    if ((this->bPolledHMD_RenderThread != false) &&
       (pIVar2 = (GEngine->XRSystem).Object, pIVar2 != (IXRTrackingSystem *)0x0)) {
      cVar8 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,0,&local_38,param_1);
      if (cVar8 != '\0') {
        pTVar9 = UE::Math::TQuat<double>::Rotator(&local_38,&local_58);
        dVar4 = pTVar9->Yaw;
        param_2->Pitch = pTVar9->Pitch;
        param_2->Yaw = dVar4;
        param_2->Roll = pTVar9->Roll;
        goto LAB_145954812;
      }
    }
    bVar5 = false;
  }
  else {
    EVar7 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,this->PlayerIndex,this->MotionSource);
    this->CurrentTrackingStatus = EVar7;
    cVar8 = (**(code **)((longlong)*this->PolledMotionController_RenderThread + 0x18))
                      (this->PolledMotionController_RenderThread,this->PlayerIndex,
                       this->MotionSource,param_2,param_1,param_3);
    if (cVar8 == '\0') goto LAB_1459547c3;
LAB_145954812:
    bVar5 = true;
  }
  return bVar5;
}

// SendRenderTransform_Concurrent @ 145957340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMotionControllerComponent::SendRenderTransform_Concurrent(UMotionControllerComponent *this)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  bool bVar16;
  TTransform<double> *pTVar17;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar18;
  code **ppcVar19;
  ulonglong uVar20;
  undefined1 auStack_2b8 [32];
  code *local_298;
  code *pcStack_290;
  code *local_288;
  code *local_278;
  code *pcStack_270;
  code *local_268;
  code *pcStack_260;
  code *local_258;
  code *pcStack_250;
  code *local_248;
  code *pcStack_240;
  code *local_238;
  code *pcStack_230;
  code *local_228;
  code *pcStack_220;
  code *local_218;
  code *pcStack_210;
  code *local_208;
  code *pcStack_200;
  code *local_1f8;
  code *pcStack_1f0;
  code *local_1e8;
  code *pcStack_1e0;
  code *local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  code *pcStack_1c0;
  code *local_1b8;
  code *pcStack_1b0;
  code *local_1a8;
  code *pcStack_1a0;
  code *local_198;
  code *pcStack_190;
  code *local_188;
  code *pcStack_180;
  UMotionControllerComponent *local_178;
  code *pcStack_170;
  code *local_168 [2];
  code *local_158 [3];
  code **local_140;
  undefined1 local_138 [40];
  code **local_110;
  byte local_108;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  pTVar17 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_f8);
  pcVar2 = *(code **)&this->field_0x230;
  pcVar3 = *(code **)&this->field_0x238;
  pcVar1 = *(code **)&this->field_0x240;
  pcVar4 = (code *)(pTVar17->Rotation).XY.m128d_f64[0];
  pcVar5 = (code *)(pTVar17->Rotation).XY.m128d_f64[1];
  pcVar6 = (code *)(pTVar17->Rotation).ZW.m128d_f64[0];
  pcVar7 = (code *)(pTVar17->Rotation).ZW.m128d_f64[1];
  pcVar8 = (code *)(pTVar17->Translation).XY.m128d_f64[0];
  pcVar9 = (code *)(pTVar17->Translation).XY.m128d_f64[1];
  pcVar10 = (code *)(pTVar17->Translation).ZW.m128d_f64[0];
  pcVar11 = (code *)(pTVar17->Translation).ZW.m128d_f64[1];
  pcVar12 = (code *)(pTVar17->Scale3D).XY.m128d_f64[0];
  pcVar13 = (code *)(pTVar17->Scale3D).XY.m128d_f64[1];
  pcVar14 = (code *)(pTVar17->Scale3D).ZW.m128d_f64[0];
  pcVar15 = (code *)(pTVar17->Scale3D).ZW.m128d_f64[1];
  pcStack_180 = pcStack_200;
  local_168[0] = (code *)0x0;
  local_298 = pcVar2;
  pcStack_290 = pcVar3;
  local_288 = pcVar1;
  local_278 = pcVar4;
  pcStack_270 = pcVar5;
  local_268 = pcVar6;
  pcStack_260 = pcVar7;
  local_258 = pcVar8;
  pcStack_250 = pcVar9;
  local_248 = pcVar10;
  pcStack_240 = pcVar11;
  local_238 = pcVar12;
  pcStack_230 = pcVar13;
  local_228 = pcVar14;
  pcStack_220 = pcVar15;
  local_218 = pcVar2;
  pcStack_210 = pcVar3;
  local_208 = pcVar1;
  local_1f8 = pcVar4;
  pcStack_1f0 = pcVar5;
  local_1e8 = pcVar6;
  pcStack_1e0 = pcVar7;
  local_1d8 = pcVar8;
  pcStack_1d0 = pcVar9;
  local_1c8 = pcVar10;
  pcStack_1c0 = pcVar11;
  local_1b8 = pcVar12;
  pcStack_1b0 = pcVar13;
  local_1a8 = pcVar14;
  pcStack_1a0 = pcVar15;
  local_198 = pcVar2;
  pcStack_190 = pcVar3;
  local_188 = pcVar1;
  local_178 = this;
  local_140 = FMemory::Malloc(0xa0,0x10);
  local_140[2] = pcVar4;
  local_140[3] = pcVar5;
  *local_140 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UMotionControllerComponent::SendRenderTransform_Concurrent'::`2'::<lambda_1>,1,1>
                        ::_vftable_;
  local_140[4] = pcVar6;
  local_140[5] = pcVar7;
  local_140[6] = pcVar8;
  local_140[7] = pcVar9;
  local_140[8] = pcVar10;
  local_140[9] = pcVar11;
  local_140[10] = pcVar12;
  local_140[0xb] = pcVar13;
  local_140[0xc] = pcVar14;
  local_140[0xd] = pcVar15;
  local_140[0xe] = pcVar2;
  local_140[0xf] = pcVar3;
  local_140[0x10] = pcVar1;
  local_140[0x11] = pcStack_200;
  local_140[0x12] = (code *)local_178;
  local_140[0x13] = pcStack_170;
  if (local_140 != (code **)0xfffffffffffffff0) {
    local_168[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UMotionControllerComponent::SendRenderTransform_Concurrent'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UMotionControllerComponent::SendRenderTransform_Concurrent_::__l2::TSTR_UpdateRTRelativeTransformCommand152>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_168);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_138._0_8_ = local_168[0];
    local_110 = local_140;
    local_140 = (code **)0x0;
    local_138._16_8_ = local_158[0];
    local_138._24_8_ = local_158[1];
    local_138._32_8_ = local_158[2];
    local_168[0] = (code *)0x0;
    local_108 = 2;
    pFVar18 = (FRenderCommandTag *)
              TRenderCommandTag<`UMotionControllerComponent::SendRenderTransform_Concurrent'::__l2::TSTR_UpdateRTRelativeTransformCommand152>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_138,pFVar18);
    uVar20 = (ulonglong)local_108;
    if (2 < uVar20) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar16) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar20] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_138._0_8_ != (code *)0x0) {
        ppcVar19 = (code **)(local_138 + 0x10);
        if (local_110 != (code **)0x0) {
          ppcVar19 = local_110;
        }
        (**(code **)(*ppcVar19 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar20])(local_138);
    }
  }
  if (local_168[0] != (code *)0x0) {
    ppcVar19 = local_168 + 2;
    if (local_140 != (code **)0x0) {
      ppcVar19 = local_140;
    }
    (**(code **)(*ppcVar19 + 0x10))();
  }
  UPrimitiveComponent::SendRenderTransform_Concurrent((UPrimitiveComponent *)this);
  return;
}

// Serialize @ 145957640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UMotionControllerComponent::Serialize(UMotionControllerComponent *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FVRObjectVersion::GUID);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  return;
}

// Serialize @ 145957680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UMotionControllerComponent::Serialize
          (UMotionControllerComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FVRObjectVersion::GUID);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,pFVar1);
  return;
}

// SetAssociatedPlayerIndex @ 1459576e0

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
UMotionControllerComponent::SetAssociatedPlayerIndex(UMotionControllerComponent *this,int param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  this_00 = *(UWorld **)&this->field_0xb0;
  this->PlayerIndex = param_1;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 == (UWorld *)0x0)) {
    return;
  }
  bVar1 = UWorld::IsGameWorld(this_00);
  if ((bVar1) && ((this->field_0x9b & 8) != 0)) {
    FMotionDelayService::RegisterDelayTarget((USceneComponent *)this,param_1,this->MotionSource);
  }
  return;
}

// SetTrackingMotionSource @ 145957790

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
UMotionControllerComponent::SetTrackingMotionSource(UMotionControllerComponent *this,FName param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  this_00 = *(UWorld **)&this->field_0xb0;
  this->MotionSource = param_1;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 == (UWorld *)0x0)) {
    return;
  }
  bVar1 = UWorld::IsGameWorld(this_00);
  if ((bVar1) && ((this->field_0x9b & 8) != 0)) {
    FMotionDelayService::RegisterDelayTarget((USceneComponent *)this,this->PlayerIndex,param_1);
  }
  return;
}

// SetTrackingSource @ 145957800

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
UMotionControllerComponent::SetTrackingSource
          (UMotionControllerComponent *this,EControllerHand param_1)

{
  bool bVar1;
  UEnum *this_00;
  UWorld *this_01;
  FName local_res18 [2];
  FString local_18;
  
  this_00 = StaticEnum<enum_EControllerHand>();
  if (this_00 != (UEnum *)0x0) {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_1);
    if (local_18.Data.ArrayNum < 2) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FName::FName(local_res18,(wchar_t *)local_18.Data.AllocatorInstance.Data);
      this->MotionSource = local_res18[0];
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      this_01 = *(UWorld **)&this->field_0xb0;
      if ((this_01 == (UWorld *)0x0) &&
         (this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         this_01 == (UWorld *)0x0)) {
        return;
      }
      bVar1 = UWorld::IsGameWorld(this_01);
      if ((bVar1) && ((this->field_0x9b & 8) != 0)) {
        FMotionDelayService::RegisterDelayTarget
                  ((USceneComponent *)this,this->PlayerIndex,this->MotionSource);
        return;
      }
    }
  }
  return;
}

// StaticRegisterNativesUMotionControllerComponent @ 145957df0

void __cdecl UMotionControllerComponent::StaticRegisterNativesUMotionControllerComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UMotionControllerComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 145958820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UMotionControllerComponent::TickComponent
          (UMotionControllerComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  TSharedPtr<UMotionControllerComponent::FViewExtension,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  UWorld *pUVar9;
  AWorldSettings *pAVar10;
  FViewExtension *this_00;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStackY_248 [32];
  FAutoRegister local_1f8 [8];
  FViewExtension *local_1f0;
  FSharedReferencer<1> local_1e8 [2];
  TSharedRef<UMotionControllerComponent::FViewExtension,1> local_1d8;
  TRawPtrProxy<UMotionControllerComponent::FViewExtension> local_1c8;
  TVector<double>_u_0 local_1c0;
  TSharedRef<ISceneViewExtension,1> local_1a8;
  TRotator<double> local_198;
  FDestructionSentinel local_180;
  TRotator<double> local_168;
  TVector<double>_u_0 local_148;
  TQuat<double> local_128;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if ((this->field_0x9a & 0x10) != 0) {
    pTVar8 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_108);
    local_1c0._s_0.X = (pTVar8->Translation).XY.m128d_f64[0];
    local_1c0._s_0.Y = (pTVar8->Translation).XY.m128d_f64[1];
    local_1c0._s_0.Z = (pTVar8->Translation).ZW.m128d_f64[0];
    pTVar8 = USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_a8);
    local_128.X = (pTVar8->Rotation).XY.m128d_f64[0];
    local_128.Y = (pTVar8->Rotation).XY.m128d_f64[1];
    local_128.Z = (pTVar8->Rotation).ZW.m128d_f64[0];
    local_128.W = (pTVar8->Rotation).ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_128,&local_198);
    if ((*(longlong *)&this->field_0xb0 != 0) ||
       (pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       fVar13 = __real_42c80000, pUVar9 != (UWorld *)0x0)) {
      pUVar9 = *(UWorld **)&this->field_0xb0;
      if (pUVar9 == (UWorld *)0x0) {
        pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      pAVar10 = UWorld::GetWorldSettings(pUVar9,false,true);
      fVar13 = pAVar10->WorldToMeters;
    }
    bVar4 = PollControllerState_GameThread
                      (this,(TVector<double> *)&local_1c0._s_0,&local_198,
                       &this->bProvidedLinearVelocity,&this->LinearVelocity,
                       &this->bProvidedAngularVelocity,&this->AngularVelocityAsAxisAndLength,
                       &this->bProvidedLinearAcceleration,&this->LinearAcceleration,fVar13);
    if (bVar4) {
      local_168.Pitch = local_198.Pitch;
      local_168.Yaw = local_198.Yaw;
      local_168.Roll = local_198.Roll;
      local_148._s_0.X = local_1c0._s_0.X;
      local_148._s_0.Y = local_1c0._s_0.Y;
      local_148._s_0.Z = local_1c0._s_0.Z;
      USceneComponent::SetRelativeLocationAndRotation
                ((USceneComponent *)this,(TVector<double> *)&local_148._s_0,&local_168,false,
                 (FHitResult *)0x0,None);
    }
    if ((this->bTracked == false) && (bVar4)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &OnActivateVisualizationComponent,(FWriteAccessScope *)&local_180);
      bVar3 = false;
      OnActivateVisualizationComponent._28_4_ = OnActivateVisualizationComponent._28_4_ + 1;
      uVar11 = OnActivateVisualizationComponent._16_4_ - 1;
      if (-1 < (int)uVar11) {
        lVar12 = (longlong)(int)uVar11 << 4;
        bVar3 = false;
        do {
          uVar7 = 0;
          if ((int)uVar11 < (int)OnActivateVisualizationComponent._16_4_) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((*(int *)(lVar12 + 8 + OnActivateVisualizationComponent._8_8_) == 0) ||
              (*(longlong **)(lVar12 + OnActivateVisualizationComponent._8_8_) == (longlong *)0x0))
             || (cVar6 = (**(code **)(**(longlong **)
                                        (lVar12 + OnActivateVisualizationComponent._8_8_) + 0x68))()
                , cVar6 == '\0')) {
            bVar3 = true;
          }
          lVar12 = lVar12 + -0x10;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      OnActivateVisualizationComponent._28_4_ = OnActivateVisualizationComponent._28_4_ + -1;
      if (bVar3) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &OnActivateVisualizationComponent,false);
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
    }
    pTVar1 = &this->ViewExtension;
    this->bTracked = bVar4;
    if ((pTVar1->Object == (FViewExtension *)0x0) && (GEngine != (UEngine *)0x0)) {
      this_00 = ::operator_new(0x1c0);
      if (this_00 == (FViewExtension *)0x0) {
        this_00 = (FViewExtension *)0x0;
      }
      else {
        FSceneViewExtensionBase::FSceneViewExtensionBase
                  ((FSceneViewExtensionBase *)this_00,local_1f8);
        this_00->MotionControllerComponent = this;
        this_00->_padding_ = (longlong)&___7FViewExtension_UMotionControllerComponent__6B_;
        FLateUpdateManager::FLateUpdateManager(&this_00->LateUpdate);
        if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
           ((0 < *(int *)(this_00->_padding_ + 8) &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("!InObject || !InObject->DoesSharedInstanceExist()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x7a5,L"Trying to share an already-shared object"), bVar4)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_1c8.Object = this_00;
      TSharedRef<UMotionControllerComponent::FViewExtension,1>::
      TSharedRef<UMotionControllerComponent::FViewExtension,1><UMotionControllerComponent::FViewExtension>
                (&local_1d8,&local_1c8);
      local_1a8.Object = (ISceneViewExtension *)local_1d8.Object;
      local_1a8.SharedReferenceCount.ReferenceController =
           local_1d8.SharedReferenceCount.ReferenceController;
      if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSceneViewExtensions::RegisterExtension(&local_1a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      local_1f0 = local_1d8.Object;
      local_1e8[0].ReferenceController = local_1d8.SharedReferenceCount.ReferenceController;
      if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<UMotionControllerComponent::FViewExtension,1> *)&local_1f0) {
        pTVar1->Object = local_1d8.Object;
        local_1f0 = (FViewExtension *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ViewExtension).SharedReferenceCount,local_1e8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8[0].ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// execGetAngularVelocity @ 145959940

void __cdecl
UMotionControllerComponent::execGetAngularVelocity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TRotator<double> *pTVar3;
  TRotator<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    pTVar3 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetAngularVelocity((UMotionControllerComponent *)param_1,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetHandJointPosition @ 1459599f0

void __cdecl
UMotionControllerComponent::execGetHandJointPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  char cVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x22].field_0x10;
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 0x40))
                      (plVar2,*(undefined8 *)&param_1[0x21].field_0x24,local_res10[0],&local_38);
    if (cVar3 != '\0') {
      *puVar4 = '\x01';
      goto LAB_145959af8;
    }
  }
  *puVar4 = '\0';
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_2c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_145959af8:
  *(undefined4 *)param_3 = local_38;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_34;
  *(undefined4 *)((longlong)param_3 + 8) = uStack_30;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_2c;
  *(double *)((longlong)param_3 + 0x10) = local_28;
  return;
}

// execGetLinearAcceleration @ 145959b20

void __cdecl
UMotionControllerComponent::execGetLinearAcceleration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetLinearAcceleration((UMotionControllerComponent *)param_1,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetLinearVelocity @ 145959bd0

void __cdecl
UMotionControllerComponent::execGetLinearVelocity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetLinearVelocity((UMotionControllerComponent *)param_1,pTVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetParameterValue @ 145959c80

void __cdecl
UMotionControllerComponent::execGetParameterValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  uchar *puVar3;
  undefined4 uVar4;
  uchar local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x22].field_0x10;
  if (plVar2 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0x38))
                      (plVar2,*(undefined8 *)&param_1[0x21].field_0x24,local_res10,puVar3);
    *(undefined4 *)param_3 = uVar4;
    return;
  }
  *puVar3 = '\0';
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetTrackingSource @ 145959d90

void __cdecl
UMotionControllerComponent::execGetTrackingSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  EControllerHand local_res8 [32];
  
  local_res8[0] = Left;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  IMotionController::GetHandEnumForSourceName(*(FName *)&param_1[0x21].field_0x24,local_res8);
  *(EControllerHand *)param_3 = local_res8[0];
  return;
}

// execIsTracked @ 145959de0

void __cdecl
UMotionControllerComponent::execIsTracked(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x22].field_0x18;
  return;
}

// execSetAssociatedPlayerIndex @ 145959e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMotionControllerComponent::execSetAssociatedPlayerIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool bVar3;
  UWorld *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UWorld **)&param_1[4].field_0x10;
  *(int *)&param_1[0x21].field_0x20 = local_res8[0];
  if ((this == (UWorld *)0x0) &&
     (this = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1), this == (UWorld *)0x0))
  {
    return;
  }
  bVar3 = UWorld::IsGameWorld(this);
  if ((bVar3) && ((param_1[3].field_0x23 & 8) != 0)) {
    FMotionDelayService::RegisterDelayTarget
              ((USceneComponent *)param_1,iVar2,*(FName *)&param_1[0x21].field_0x24);
  }
  return;
}

// execSetTrackingMotionSource @ 145959ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMotionControllerComponent::execSetTrackingMotionSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  bool bVar3;
  UWorld *this;
  FName local_res8;
  
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
  FVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UWorld **)&param_1[4].field_0x10;
  *(FName *)&param_1[0x21].field_0x24 = local_res8;
  if ((this == (UWorld *)0x0) &&
     (this = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1), this == (UWorld *)0x0))
  {
    return;
  }
  bVar3 = UWorld::IsGameWorld(this);
  if ((bVar3) && ((param_1[3].field_0x23 & 8) != 0)) {
    FMotionDelayService::RegisterDelayTarget
              ((USceneComponent *)param_1,*(int *)&param_1[0x21].field_0x20,FVar2);
  }
  return;
}

// execSetTrackingSource @ 145959fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UMotionControllerComponent::execSetTrackingSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  bool bVar3;
  UEnum *this;
  UWorld *this_00;
  byte local_res10 [16];
  FName local_res20;
  FString local_18;
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = StaticEnum<enum_EControllerHand>();
  if (this != (UEnum *)0x0) {
    UEnum::GetNameStringByValue(this,&local_18,(ulonglong)bVar2);
    if (local_18.Data.ArrayNum < 2) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FName::FName(&local_res20,(wchar_t *)local_18.Data.AllocatorInstance.Data);
      *(FName *)&param_1[0x21].field_0x24 = local_res20;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      this_00 = *(UWorld **)&param_1[4].field_0x10;
      if ((this_00 == (UWorld *)0x0) &&
         (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
         this_00 == (UWorld *)0x0)) {
        return;
      }
      bVar3 = UWorld::IsGameWorld(this_00);
      if ((bVar3) && ((param_1[3].field_0x23 & 8) != 0)) {
        FMotionDelayService::RegisterDelayTarget
                  ((USceneComponent *)param_1,*(int *)&param_1[0x21].field_0x20,
                   *(FName *)&param_1[0x21].field_0x24);
        return;
      }
    }
  }
  return;
}

