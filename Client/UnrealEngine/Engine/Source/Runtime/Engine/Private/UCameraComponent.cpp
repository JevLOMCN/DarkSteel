// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 44

// UCameraComponent @ 147688ab0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCameraComponent * __thiscall
UCameraComponent::UCameraComponent(UCameraComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AspectRatioAxisConstraint).Value = '\x01';
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->AsymmetricOverscan).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->AsymmetricOverscan).field0_0x0 + 8) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->AdditiveOffset).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->AdditiveOffset).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->AdditiveOffset).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->AdditiveOffset).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->AdditiveOffset).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->AdditiveOffset).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->AdditiveOffset).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->AdditiveOffset).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->AdditiveOffset).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->AdditiveOffset).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->AdditiveOffset).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->AdditiveOffset).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->ExtraPostProcessBlends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtraPostProcessBlends).ArrayNum = 0;
  (this->ExtraPostProcessBlends).ArrayMax = 0;
  (this->ExtraPostProcessBlendWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtraPostProcessBlendWeights).ArrayNum = 0;
  (this->ExtraPostProcessBlendWeights).ArrayMax = 0;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  return this;
}

// UCameraComponent @ 147688b90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCameraComponent * __thiscall
UCameraComponent::UCameraComponent(UCameraComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AspectRatioAxisConstraint).Value = '\x01';
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->AsymmetricOverscan).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->AsymmetricOverscan).field0_0x0 + 8) = 0;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->AdditiveOffset).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->AdditiveOffset).Rotation.XY.m128d_f64[1] = (double)fVar5;
  (this->AdditiveOffset).Rotation.ZW.m128d_f64[0] = (double)fVar6;
  (this->AdditiveOffset).Rotation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->AdditiveOffset).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->AdditiveOffset).Translation.XY.m128d_f64[1] = (double)fVar5;
  (this->AdditiveOffset).Translation.ZW.m128d_f64[0] = (double)fVar6;
  (this->AdditiveOffset).Translation.ZW.m128d_f64[1] = (double)fVar7;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->AdditiveOffset).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->AdditiveOffset).Scale3D.XY.m128d_f64[1] = (double)fVar5;
  (this->AdditiveOffset).Scale3D.ZW.m128d_f64[0] = (double)fVar6;
  (this->AdditiveOffset).Scale3D.ZW.m128d_f64[1] = (double)fVar7;
  (this->ExtraPostProcessBlends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtraPostProcessBlends).ArrayNum = 0;
  (this->ExtraPostProcessBlends).ArrayMax = 0;
  (this->ExtraPostProcessBlendWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExtraPostProcessBlendWeights).ArrayNum = 0;
  (this->ExtraPostProcessBlendWeights).ArrayMax = 0;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  this->bConstrainAspectRatio = '\0';
  this->bOverrideAspectRatioAxisConstraint = '\0';
  this->bUseFieldOfViewForLOD = '\x01';
  pbVar3 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar3 = *pbVar3 | 8;
  this->FieldOfView = 90.0;
  puVar2 = &this->field_0x292;
  this->bLockToHmd = '\x01';
  this->bEnableFirstPersonScale = '\0';
  this->bEnableFirstPersonFieldOfView = '\0';
  this->bUsePawnControlRotation = '\0';
  this->FirstPersonFieldOfView = 90.0;
  this->FirstPersonScale = 1.0;
  this->AspectRatio = 1.777778;
  this->OrthoWidth = 1536.0;
  this->bAutoCalculateOrthoPlanes = true;
  this->AutoPlaneShift = 0.0;
  this->bUpdateOrthoPlanes = true;
  this->bUseCameraHeightAsViewTarget = true;
  this->OrthoNearClipPlane = -768.0;
  this->OrthoFarClipPlane = 2097152.0;
  this->Overscan = 0.0;
  this->PostProcessBlendWeight = 1.0;
  return this;
}

// ~UCameraComponent @ 14768aa10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCameraComponent::~UCameraComponent(UCameraComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExtraPostProcessBlendWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPostProcessSettings,int>
            ((FPostProcessSettings *)(this->ExtraPostProcessBlends).AllocatorInstance.Data,
             (this->ExtraPostProcessBlends).ArrayNum);
  pFVar1 = (this->ExtraPostProcessBlends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// AddAdditiveOffset @ 14768fb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraComponent::AddAdditiveOffset
          (UCameraComponent *this,TTransform<double> *param_1,float param_2)

{
  float fVar1;
  undefined1 auStack_a8 [32];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->bUseAdditiveOffset = '\x01';
  local_88.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_88,&this->AdditiveOffset,param_1);
  fVar1 = this->AdditiveFOVOffset;
  (this->AdditiveOffset).Rotation.XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
  (this->AdditiveOffset).Rotation.XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
  (this->AdditiveOffset).Rotation.ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
  (this->AdditiveOffset).Rotation.ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
  (this->AdditiveOffset).Translation.XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
  (this->AdditiveOffset).Translation.XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
  (this->AdditiveOffset).Translation.ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
  (this->AdditiveOffset).Translation.ZW.m128d_f64[1] = local_88.Translation.ZW.m128d_f64[1];
  (this->AdditiveOffset).Scale3D.XY.m128d_f64[0] = local_88.Scale3D.XY.m128d_f64[0];
  (this->AdditiveOffset).Scale3D.XY.m128d_f64[1] = local_88.Scale3D.XY.m128d_f64[1];
  (this->AdditiveOffset).Scale3D.ZW.m128d_f64[0] = local_88.Scale3D.ZW.m128d_f64[0];
  (this->AdditiveOffset).Scale3D.ZW.m128d_f64[1] = local_88.Scale3D.ZW.m128d_f64[1];
  this->AdditiveFOVOffset = param_2 + fVar1;
  return;
}

// AddExtraPostProcessBlend @ 147690cc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraComponent::AddExtraPostProcessBlend
          (UCameraComponent *this,FPostProcessSettings *param_1,float param_2)

{
  int *piVar1;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  FPostProcessSettings *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  float local_res18 [4];
  
  pTVar2 = &this->ExtraPostProcessBlends;
  pFVar4 = (FPostProcessSettings *)(pTVar2->AllocatorInstance).Data;
  local_res18[0] = param_2;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->ExtraPostProcessBlends).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->ExtraPostProcessBlends).ArrayNum;
  piVar1 = &(this->ExtraPostProcessBlends).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x770,0x10,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ExtraPostProcessBlends).ArrayNum = iVar8 + 1;
  FPostProcessSettings::FPostProcessSettings
            ((FPostProcessSettings *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x770),
             param_1);
  pTVar3 = &this->ExtraPostProcessBlendWeights;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar5 + (longlong)(this->ExtraPostProcessBlendWeights).ArrayMax * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->ExtraPostProcessBlendWeights).ArrayNum;
  piVar1 = &(this->ExtraPostProcessBlendWeights).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ExtraPostProcessBlendWeights).ArrayNum = iVar8 + 1;
  *(float *)((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_res18[0];
  return;
}

// ClearAdditiveOffset @ 147698520

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraComponent::ClearAdditiveOffset(UCameraComponent *this)

{
  this->bUseAdditiveOffset = '\0';
  *&(this->AdditiveOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->AdditiveOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->AdditiveOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->AdditiveOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->AdditiveOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->AdditiveOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->AdditiveFOVOffset = 0.0;
  return;
}

// ClearExtraPostProcessBlends @ 147698740

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraComponent::ClearExtraPostProcessBlends(UCameraComponent *this)

{
  int *piVar1;
  
  DestructItems<FPostProcessSettings,int>
            ((FPostProcessSettings *)(this->ExtraPostProcessBlends).AllocatorInstance.Data,
             (this->ExtraPostProcessBlends).ArrayNum);
  piVar1 = &(this->ExtraPostProcessBlends).ArrayMax;
  (this->ExtraPostProcessBlends).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x770,0x10,0,&(this->ExtraPostProcessBlends).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ExtraPostProcessBlendWeights).ArrayMax;
  (this->ExtraPostProcessBlendWeights).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ExtraPostProcessBlendWeights).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetAdditiveOffset @ 1476ad750

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraComponent::GetAdditiveOffset
          (UCameraComponent *this,TTransform<double> *param_1,float *param_2)

{
  double dVar1;
  
  dVar1 = (this->AdditiveOffset).Rotation.XY.m128d_f64[1];
  (param_1->Rotation).XY.m128d_f64[0] = (this->AdditiveOffset).Rotation.XY.m128d_f64[0];
  (param_1->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->AdditiveOffset).Rotation.ZW.m128d_f64[1];
  (param_1->Rotation).ZW.m128d_f64[0] = (this->AdditiveOffset).Rotation.ZW.m128d_f64[0];
  (param_1->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->AdditiveOffset).Translation.XY.m128d_f64[1];
  (param_1->Translation).XY.m128d_f64[0] = (this->AdditiveOffset).Translation.XY.m128d_f64[0];
  (param_1->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->AdditiveOffset).Translation.ZW.m128d_f64[1];
  (param_1->Translation).ZW.m128d_f64[0] = (this->AdditiveOffset).Translation.ZW.m128d_f64[0];
  (param_1->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (this->AdditiveOffset).Scale3D.XY.m128d_f64[1];
  (param_1->Scale3D).XY.m128d_f64[0] = (this->AdditiveOffset).Scale3D.XY.m128d_f64[0];
  (param_1->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->AdditiveOffset).Scale3D.ZW.m128d_f64[1];
  (param_1->Scale3D).ZW.m128d_f64[0] = (this->AdditiveOffset).Scale3D.ZW.m128d_f64[0];
  (param_1->Scale3D).ZW.m128d_f64[1] = dVar1;
  *param_2 = this->AdditiveFOVOffset;
  return;
}

// GetCameraView @ 1476aeea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UCameraComponent::GetCameraView(UCameraComponent *this,float param_1,FMinimalViewInfo *param_2)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  char cVar15;
  int iVar16;
  UWorld *pUVar17;
  UClass *pUVar18;
  TRotator<double> *pTVar19;
  FMotionVectorSimulation *this_00;
  TOptional<UE::Math::TTransform<double>_> *pTVar20;
  uint uVar21;
  UCameraComponent *pUVar22;
  TQuat<double> *pTVar23;
  UObject *pUVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar40;
  undefined1 auVar35 [16];
  double dVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_register_00001244 [12];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_248 [32];
  TQuat<double> local_218;
  TQuat<double> local_1f8;
  uint local_1d8 [4];
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TOptional<UE::Math::TTransform<double>_> local_108;
  ulonglong local_98;
  
  auVar42._4_12_ = in_register_00001244;
  auVar42._0_4_ = param_1;
  local_98 = __security_cookie.value ^ (ulonglong)auStack_248;
  auVar32._4_4_ = in_register_00001244._0_4_;
  auVar32._8_4_ = in_register_00001244._4_4_;
  auVar32._12_4_ = in_register_00001244._8_4_;
  if (((GEngine != (UEngine *)0x0) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0)) &&
     ((this->_padding_ != 0 ||
      (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar17 != (UWorld *)0x0)))) {
    pUVar17 = (UWorld *)this->_padding_;
    if (pUVar17 == (UWorld *)0x0) {
      pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if ((pUVar17->WorldType).Value != '\x02') {
      pIVar1 = (GEngine->XRSystem).Object;
      (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,&local_1f8);
      if (local_1f8.X != 0.0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x150);
        pUVar17 = (UWorld *)this->_padding_;
        if (pUVar17 == (UWorld *)0x0) {
          pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        cVar15 = (*pcVar2)(pIVar1,pUVar17);
        if (cVar15 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_1f8.Y);
          auVar32._0_4_ = param_1;
          (**(code **)(this->_padding_ + 0x658))(this);
          auVar42 = auVar32;
          goto LAB_1476aefc5;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1f8.Y);
    }
  }
LAB_1476aefc5:
  pUVar24 = (UObject *)this->_padding_;
  if (this->bUsePawnControlRotation == '\0') {
    if (pUVar24 == (UObject *)0x0) {
LAB_1476af1f5:
      pUVar24 = (UObject *)0x0;
    }
    else {
      pUVar18 = Z_Construct_UClass_ACineCameraActor_NoRegister();
      iVar16 = (int)pUVar18->_padding_;
      if ((*(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38) < iVar16) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
          &pUVar18->_padding_)) goto LAB_1476af1f5;
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar24 == (UObject *)0x0) goto LAB_1476af254;
    }
    else {
      if (pUVar24 == (UObject *)0x0) goto LAB_1476af254;
      UE::GC::MarkAsReachable(pUVar24);
    }
    if (*(uint *)&pUVar24[0x43].field_0x8 != GFrameNumber) goto LAB_1476af254;
    local_218.X = *(double *)&pUVar24[0x42].field_0x18;
    local_218.Y = *(double *)&pUVar24[0x42].field_0x20;
    pTVar23 = &local_218;
    local_218.Z = *(double *)(pUVar24 + 0x43);
  }
  else {
    if (pUVar24 == (UObject *)0x0) goto LAB_1476af254;
    pUVar18 = Z_Construct_UClass_APawn_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((((*(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38) < iVar16) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
          &pUVar18->_padding_)) ||
        (plVar3 = *(longlong **)&pUVar24[0x12].field_0x20, plVar3 == (longlong *)0x0)) ||
       (((*(byte *)(plVar3 + 0x6d) & 2) == 0 ||
        (cVar15 = (**(code **)(*plVar3 + 0x7f0))(), cVar15 == '\0')))) goto LAB_1476af254;
    (**(code **)(*(longlong *)pUVar24 + 0x830))(pUVar24,&local_218);
    dVar14 = __real_3f1a36e2e0000000;
    pUVar22 = this;
    pTVar19 = USceneComponent::GetComponentRotation
                        ((USceneComponent *)this,(TRotator<double> *)&local_1f8);
    dVar41 = local_218.X - pTVar19->Pitch;
    dVar6 = local_218.Y - pTVar19->Yaw;
    dVar7 = local_218.Z - pTVar19->Roll;
    auVar31._8_4_ = SUB84(dVar6,0);
    auVar31._0_8_ = dVar41;
    auVar31._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_1f8.X = dVar14;
    auVar32 = divpd(auVar31,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar42 = roundpd(auVar42,auVar32,3);
    dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar43._0_8_ = auVar42._0_8_ * dVar9;
    dVar10 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar43._8_8_ = auVar42._8_8_ * dVar10;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = dVar7;
    auVar42 = divpd(auVar33,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar41 = dVar41 - auVar43._0_8_;
    dVar6 = dVar6 - auVar43._8_8_;
    auVar42 = roundpd(auVar43,auVar42,3);
    dVar11 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    dVar12 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar34._8_4_ = SUB84(dVar6,0);
    auVar34._0_8_ = dVar41;
    auVar34._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dVar40 = auVar34._8_8_ + dVar10;
    dVar7 = dVar7 - auVar42._0_8_ * dVar11;
    dVar8 = 0.0 - auVar42._8_8_ * dVar12;
    uVar25 = -(ulonglong)(0.0 <= dVar41);
    uVar26 = -(ulonglong)(0.0 <= dVar6);
    auVar44._0_8_ = uVar25 & (ulonglong)dVar41;
    auVar44._8_4_ = (undefined4)(uVar26 & (ulonglong)dVar6);
    auVar44._12_4_ = (undefined4)((uVar26 & (ulonglong)dVar6) >> 0x20);
    auVar52._0_4_ = ~(uint)uVar25 & SUB84(dVar41 + dVar9,0);
    auVar52._4_4_ = ~(uint)(uVar25 >> 0x20) & (uint)((ulonglong)(dVar41 + dVar9) >> 0x20);
    auVar52._8_4_ = ~(uint)uVar26 & SUB84(dVar40,0);
    auVar52._12_4_ = ~(uint)(uVar26 >> 0x20) & (uint)((ulonglong)dVar40 >> 0x20);
    auVar52 = auVar52 | auVar44;
    auVar35._8_4_ = SUB84(dVar8,0);
    auVar35._0_8_ = dVar7;
    auVar35._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dVar41 = auVar35._8_8_ + dVar12;
    uVar26 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar52._0_8_);
    uVar27 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar52._8_8_);
    uVar25 = -(ulonglong)(0.0 <= dVar7);
    uVar28 = -(ulonglong)(0.0 <= dVar8);
    auVar53._0_4_ = ~(uint)uVar25 & SUB84(dVar7 + dVar11,0);
    auVar53._4_4_ = ~(uint)(uVar25 >> 0x20) & (uint)((ulonglong)(dVar7 + dVar11) >> 0x20);
    auVar53._8_4_ = ~(uint)uVar28 & SUB84(dVar41,0);
    auVar53._12_4_ = ~(uint)(uVar28 >> 0x20) & (uint)((ulonglong)dVar41 >> 0x20);
    auVar4._8_4_ = (int)((ulonglong)dVar8 & uVar28);
    auVar4._0_8_ = (ulonglong)dVar7 & uVar25;
    auVar4._12_4_ = (int)(((ulonglong)dVar8 & uVar28) >> 0x20);
    auVar53 = auVar53 | auVar4;
    auVar36._0_8_ = (ulonglong)(auVar52._0_8_ - dVar9) & uVar26;
    uVar25 = uVar27 & (ulonglong)(auVar52._8_8_ - dVar10);
    auVar36._8_4_ = (undefined4)uVar25;
    auVar36._12_4_ = (undefined4)(uVar25 >> 0x20);
    auVar45._0_4_ = ~(uint)uVar26 & auVar52._0_4_;
    auVar45._4_4_ = ~(uint)(uVar26 >> 0x20) & auVar52._4_4_;
    auVar45._8_4_ = ~(uint)uVar27 & auVar52._8_4_;
    auVar45._12_4_ = ~(uint)(uVar27 >> 0x20) & auVar52._12_4_;
    auVar36 = auVar36 | auVar45;
    auVar46._8_4_ = SUB84(dVar14,0);
    auVar46._0_8_ = dVar14;
    auVar46._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    auVar37._0_8_ =
         (double)CONCAT44(auVar36._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar36._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar37._8_4_ = auVar36._8_4_ & _UNK_15061cc88;
    auVar37._12_4_ = auVar36._12_4_ & _UNK_15061cc8c;
    auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < auVar37._8_8_);
    auVar47._0_8_ = -(ulonglong)(dVar14 < auVar37._0_8_);
    uVar26 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar53._0_8_);
    uVar27 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar53._8_8_);
    iVar16 = movmskpd((int)pTVar19,auVar47);
    auVar38._0_8_ = uVar26 & (ulonglong)(auVar53._0_8_ - dVar11);
    uVar25 = uVar27 & (ulonglong)(auVar53._8_8_ - dVar12);
    auVar38._8_4_ = (undefined4)uVar25;
    auVar38._12_4_ = (undefined4)(uVar25 >> 0x20);
    auVar5._4_4_ = ~(uint)(uVar26 >> 0x20) & auVar53._4_4_;
    auVar5._0_4_ = ~(uint)uVar26 & auVar53._0_4_;
    auVar5._8_4_ = ~(uint)uVar27 & auVar53._8_4_;
    auVar5._12_4_ = ~(uint)(uVar27 >> 0x20) & auVar53._12_4_;
    auVar38 = auVar38 | auVar5;
    auVar39._0_8_ =
         (double)CONCAT44(auVar38._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar38._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar39._8_4_ = auVar38._8_4_ & _UNK_15061cc88;
    auVar39._12_4_ = auVar38._12_4_ & _UNK_15061cc8c;
    lVar29 = -(ulonglong)(dVar14 < auVar39._8_8_);
    auVar13._8_4_ = (int)lVar29;
    auVar13._0_8_ = -(ulonglong)(dVar14 < auVar39._0_8_);
    auVar13._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
    uVar21 = movmskpd((int)pUVar22,auVar13);
    if ((uVar21 & 0x3fffffff) == 0 && iVar16 == 0) goto LAB_1476af254;
    local_1f8.X = local_218.X;
    local_1f8.Y = local_218.Y;
    pTVar23 = &local_1f8;
    local_1f8.Z = local_218.Z;
  }
  USceneComponent::SetWorldRotation
            ((USceneComponent *)this,(TRotator<double> *)pTVar23,false,(FHitResult *)0x0,None);
LAB_1476af254:
  if (this->bUseAdditiveOffset == '\0') {
    dVar6 = (double)this->_padding_;
    dVar41 = (double)this->_padding_;
    (param_2->Location).field0_0x0._s_0.X = (double)this->_padding_;
    (param_2->Location).field0_0x0._s_0.Y = dVar6;
    (param_2->Location).field0_0x0._s_0.Z = dVar41;
    pTVar19 = USceneComponent::GetComponentRotation
                        ((USceneComponent *)this,(TRotator<double> *)&local_218);
    dVar41 = pTVar19->Yaw;
    (param_2->Rotation).Pitch = pTVar19->Pitch;
    (param_2->Rotation).Yaw = dVar41;
    dVar41 = pTVar19->Roll;
  }
  else {
    local_108.TypedValue.Rotation.XY.m128d_f64[0] = (this->AdditiveOffset).Rotation.XY.m128d_f64[0];
    local_108.TypedValue.Rotation.XY.m128d_f64[1] = (this->AdditiveOffset).Rotation.XY.m128d_f64[1];
    local_108.TypedValue.Rotation.ZW.m128d_f64[0] = (this->AdditiveOffset).Rotation.ZW.m128d_f64[0];
    local_108.TypedValue.Rotation.ZW.m128d_f64[1] = (this->AdditiveOffset).Rotation.ZW.m128d_f64[1];
    local_108.TypedValue.Translation.XY.m128d_f64[0] =
         (this->AdditiveOffset).Translation.XY.m128d_f64[0];
    local_108.TypedValue.Translation.XY.m128d_f64[1] =
         (this->AdditiveOffset).Translation.XY.m128d_f64[1];
    local_108.TypedValue.Translation.ZW.m128d_f64[0] =
         (this->AdditiveOffset).Translation.ZW.m128d_f64[0];
    local_108.TypedValue.Translation.ZW.m128d_f64[1] =
         (this->AdditiveOffset).Translation.ZW.m128d_f64[1];
    local_108.TypedValue.Scale3D.XY.m128d_f64[0] = (this->AdditiveOffset).Scale3D.XY.m128d_f64[0];
    local_108.TypedValue.Scale3D.XY.m128d_f64[1] = (this->AdditiveOffset).Scale3D.XY.m128d_f64[1];
    local_108.TypedValue.Scale3D.ZW.m128d_f64[0] = (this->AdditiveOffset).Scale3D.ZW.m128d_f64[0];
    local_108.TypedValue.Scale3D.ZW.m128d_f64[1] = (this->AdditiveOffset).Scale3D.ZW.m128d_f64[1];
    local_168.Rotation.XY.m128d_f64[0] = (double)this->_padding_;
    local_168.Rotation.XY.m128d_f64[1] = (double)this->_padding_;
    local_168.Translation.XY.m128d_f64[0] = (double)this->_padding_;
    local_168.Translation.XY.m128d_f64[1] = (double)this->_padding_;
    local_168.Scale3D.XY.m128d_f64[0] = (double)this->_padding_;
    local_168.Scale3D.XY.m128d_f64[1] = (double)this->_padding_;
    local_168.Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
    local_168.Rotation.ZW.m128d_f64[1] = (double)this->_padding_;
    local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_168.Translation.ZW.m128d_f64[0] = (double)this->_padding_;
    local_168.Translation.ZW.m128d_f64[1] = (double)this->_padding_;
    local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_168.Scale3D.ZW.m128d_f64[0] = (double)this->_padding_;
    local_168.Scale3D.ZW.m128d_f64[1] = (double)this->_padding_;
    local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_1c8,&local_108.TypedValue,&local_168);
    (param_2->Location).field0_0x0._s_0.X = local_1c8.Translation.XY.m128d_f64[0];
    (param_2->Location).field0_0x0._s_0.Y = local_1c8.Translation.XY.m128d_f64[1];
    (param_2->Location).field0_0x0._s_0.Z = local_1c8.Translation.ZW.m128d_f64[0];
    local_1f8.X = local_1c8.Rotation.XY.m128d_f64[0];
    local_1f8.Y = local_1c8.Rotation.XY.m128d_f64[1];
    local_1f8.Z = local_1c8.Rotation.ZW.m128d_f64[0];
    local_1f8.W = local_1c8.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_1f8,(TRotator<double> *)&local_218);
    (param_2->Rotation).Pitch = local_218.X;
    (param_2->Rotation).Yaw = local_218.Y;
    dVar41 = local_218.Z;
  }
  (param_2->Rotation).Roll = dVar41;
  if (this->bUseAdditiveOffset == '\0') {
    fVar30 = this->FieldOfView;
  }
  else {
    fVar30 = this->AdditiveFOVOffset + this->FieldOfView;
  }
  param_2->FOV = fVar30;
  param_2->AspectRatio = this->AspectRatio;
  uVar21 = (this->bConstrainAspectRatio ^ param_2->bConstrainAspectRatio) & 1 ^
           *(uint *)&param_2->field_0x68;
  *(uint *)&param_2->field_0x68 = uVar21;
  uVar21 = ((byte)this->field_0x279 ^ uVar21) & 4 ^ uVar21;
  *(uint *)&param_2->field_0x68 = uVar21;
  (param_2->ProjectionMode).Value = (this->ProjectionMode).Value;
  param_2->OrthoWidth = this->OrthoWidth;
  param_2->OrthoNearClipPlane = this->OrthoNearClipPlane;
  param_2->OrthoFarClipPlane = this->OrthoFarClipPlane;
  param_2->bAutoCalculateOrthoPlanes = this->bAutoCalculateOrthoPlanes;
  param_2->AutoPlaneShift = this->AutoPlaneShift;
  param_2->bUpdateOrthoPlanes = this->bUpdateOrthoPlanes;
  param_2->bUseCameraHeightAsViewTarget = this->bUseCameraHeightAsViewTarget;
  if (this->bEnableFirstPersonFieldOfView != '\0') {
    fVar30 = this->FirstPersonFieldOfView;
  }
  param_2->FirstPersonFOV = fVar30;
  fVar30 = __real_3f800000;
  if (this->bEnableFirstPersonScale != '\0') {
    fVar30 = this->FirstPersonScale;
  }
  param_2->FirstPersonScale = fVar30;
  *(uint *)&param_2->field_0x68 =
       -(uint)(this->bEnableFirstPersonFieldOfView != '\0' || this->bEnableFirstPersonScale != '\0')
       & 2 | uVar21 & 0xfffffffd;
  FMinimalViewInfo::ApplyOverscan
            (param_2,this->Overscan,this->bScaleResolutionWithOverscan,this->bCropOverscan);
  FMinimalViewInfo::ApplyAsymmetricOverscan
            (param_2,&this->AsymmetricOverscan,this->bScaleResolutionWithOverscan,
             this->bCropOverscan);
  if ((this->bAutoCalculateOrthoPlanes != false) && (this->_padding_ != 0)) {
    lVar29 = *(longlong *)(this->_padding_ + 0x1b8);
    uVar48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_218.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar29 != 0) {
      uVar48 = *(undefined4 *)(lVar29 + 0x210);
      uVar49 = *(undefined4 *)(lVar29 + 0x214);
      uVar50 = *(undefined4 *)(lVar29 + 0x218);
      uVar51 = *(undefined4 *)(lVar29 + 0x21c);
      local_218.Z = *(double *)(lVar29 + 0x220);
    }
    dVar41 = (param_2->Location).field0_0x0._s_0.Z;
    dVar6 = (param_2->Location).field0_0x0._s_0.Y;
    (param_2->CameraToViewTarget).field0_0x0._s_0.X =
         (double)CONCAT44(uVar49,uVar48) - (param_2->Location).field0_0x0._s_0.X;
    (param_2->CameraToViewTarget).field0_0x0._s_0.Y = (double)CONCAT44(uVar51,uVar50) - dVar6;
    (param_2->CameraToViewTarget).field0_0x0._s_0.Z = local_218.Z - dVar41;
  }
  if (this->bOverrideAspectRatioAxisConstraint != '\0') {
    if ((TOptional<EAspectRatioAxisConstraint> *)local_1d8 != &param_2->AspectRatioAxisConstraint) {
      (param_2->AspectRatioAxisConstraint).TypedValue =
           (uint)(this->AspectRatioAxisConstraint).Value;
      (param_2->AspectRatioAxisConstraint).bIsSet = true;
    }
  }
  param_2->PostProcessBlendWeight = this->PostProcessBlendWeight;
  if (0.0 < this->PostProcessBlendWeight) {
    FPostProcessSettings::operator=(&param_2->PostProcessSettings,&this->PostProcessSettings);
  }
  this_00 = FMotionVectorSimulation::Get();
  pTVar20 = FMotionVectorSimulation::GetPreviousTransform(this_00,&local_108,(UObject *)this);
  if (pTVar20 != &param_2->PreviousViewTransform) {
    if (pTVar20->bIsSet == false) {
      if ((param_2->PreviousViewTransform).bIsSet != false) {
        (param_2->PreviousViewTransform).bIsSet = false;
      }
    }
    else {
      dVar41 = (pTVar20->TypedValue).Rotation.XY.m128d_f64[1];
      (param_2->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[0] =
           (pTVar20->TypedValue).Rotation.XY.m128d_f64[0];
      (param_2->PreviousViewTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar41;
      dVar41 = (pTVar20->TypedValue).Rotation.ZW.m128d_f64[1];
      (param_2->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
           (pTVar20->TypedValue).Rotation.ZW.m128d_f64[0];
      (param_2->PreviousViewTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar41;
      dVar41 = (pTVar20->TypedValue).Translation.XY.m128d_f64[1];
      (param_2->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[0] =
           (pTVar20->TypedValue).Translation.XY.m128d_f64[0];
      (param_2->PreviousViewTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar41;
      dVar41 = (pTVar20->TypedValue).Translation.ZW.m128d_f64[1];
      (param_2->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[0] =
           (pTVar20->TypedValue).Translation.ZW.m128d_f64[0];
      (param_2->PreviousViewTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar41;
      dVar41 = (pTVar20->TypedValue).Scale3D.XY.m128d_f64[1];
      (param_2->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
           (pTVar20->TypedValue).Scale3D.XY.m128d_f64[0];
      (param_2->PreviousViewTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar41;
      dVar41 = (pTVar20->TypedValue).Scale3D.ZW.m128d_f64[1];
      (param_2->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
           (pTVar20->TypedValue).Scale3D.ZW.m128d_f64[0];
      (param_2->PreviousViewTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar41;
      (param_2->PreviousViewTransform).bIsSet = true;
    }
  }
  return;
}

// GetExtraPostProcessBlends @ 1476b0cc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraComponent::GetExtraPostProcessBlends
          (UCameraComponent *this,TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FPostProcessSettings *pFVar3;
  FScriptContainerElement *_Src;
  
  if (param_1 != &this->ExtraPostProcessBlends) {
    DestructItems<FPostProcessSettings,int>
              ((FPostProcessSettings *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (this->ExtraPostProcessBlends).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar3 = (FPostProcessSettings *)(this->ExtraPostProcessBlends).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x770,0x10,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
      ConstructItems<FPostProcessSettings,FPostProcessSettings,int>
                ((param_1->AllocatorInstance).Data,pFVar3,iVar2);
    }
  }
  if (param_2 != &this->ExtraPostProcessBlendWeights) {
    iVar2 = (this->ExtraPostProcessBlendWeights).ArrayNum;
    piVar1 = &param_2->ArrayMax;
    _Src = (this->ExtraPostProcessBlendWeights).AllocatorInstance.Data;
    param_2->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,*piVar1,&param_2->AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
    }
  }
  return;
}

// GetPrivateStaticClass @ 1476b43b0

UClass * __cdecl UCameraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraComponent",
               &Z_Registration_Info_UClass_UCameraComponent.InnerSingleton,
               StaticRegisterNativesUCameraComponent,0xaa0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraComponent>,
               InternalVTableHelperCtorCaller<UCameraComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraComponent.InnerSingleton;
}

// HandleXRCamera @ 1476b7060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCameraComponent::HandleXRCamera(UCameraComponent *this,float param_1)

{
  IXRTrackingSystem *pIVar1;
  USceneComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  TTransform<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStackY_228 [32];
  longlong *local_1f8;
  TReferenceControllerBase<1> *local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pIVar1 = (GEngine->XRSystem).Object;
  (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,&local_1f8,0);
  if (local_1f8 != (longlong *)0x0) {
    pUVar2 = (USceneComponent *)this->_padding_;
    local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    uVar7 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    uVar8 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_148.Rotation.ZW.m128d_f64[1]._0_4_ = uVar7;
    local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_148.Rotation.ZW.m128d_f64[1]._4_4_ = uVar8;
    uVar9 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    uVar10 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_148.Translation.XY.m128d_f64[1]._0_4_ = uVar9;
    local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_148.Translation.XY.m128d_f64[1]._4_4_ = uVar10;
    local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    if (pUVar2 == (USceneComponent *)0x0) {
      local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar7;
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar8;
      local_1a8.Translation.XY.m128d_f64[1]._0_4_ = uVar9;
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Translation.XY.m128d_f64[1]._4_4_ = uVar10;
      local_1a8.Rotation.XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
      local_1a8.Rotation.XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
      local_1a8.Translation.ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
      local_1a8.Translation.ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
      local_1a8.Scale3D.XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
      local_1a8.Scale3D.XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
      local_1a8.Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
      local_1a8.Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
    }
    else if ((this->_padding_ & 0x1c) == 0) {
      pTVar6 = (TTransform<double> *)
               (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2,local_88,this->_padding_,0);
      local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_1a8,&local_148,pTVar6);
    }
    else {
      USceneComponent::CalcNewComponentToWorld_GeneralCase
                ((USceneComponent *)this,&local_1a8,&local_148,pUVar2,(FName)this->_padding_);
    }
    if ((local_1f8 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*local_1f8 + 0x38))(local_1f8,&local_1a8,this);
    if (this->bLockToHmd != 0) {
      if ((local_1f8 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar5 = (**(code **)(*local_1f8 + 0x28))(local_1f8,&local_1c8,&local_1e8,param_1);
      if (cVar5 == '\0') {
        USceneComponent::ResetRelativeTransform((USceneComponent *)this);
      }
      else {
        local_e8.Rotation.ZW.m128d_f64[0] = local_1b8;
        local_e8.Rotation.ZW.m128d_f64[1] = dStack_1b0;
        local_e8.Translation.ZW.m128d_f64[0] = local_1d8;
        local_e8.Translation.ZW.m128d_f64[1] = 0.0;
        local_e8.Rotation.XY.m128d_f64[0] = local_1c8;
        local_e8.Rotation.XY.m128d_f64[1] = dStack_1c0;
        local_e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
        local_e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
        local_e8.Translation.XY.m128d_f64[0] = local_1e8;
        local_e8.Translation.XY.m128d_f64[1] = dStack_1e0;
        local_e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        USceneComponent::SetRelativeTransform
                  ((USceneComponent *)this,&local_e8,false,(FHitResult *)0x0,None);
      }
    }
    if ((local_1f8 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*local_1f8 + 0x30))(local_1f8,&this->FieldOfView);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f0);
  return;
}

// IsXRHeadTrackedCamera @ 1476bb180

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UCameraComponent::IsXRHeadTrackedCamera(UCameraComponent *this)

{
  IXRTrackingSystem *pIVar1;
  code *pcVar2;
  char cVar3;
  UWorld *pUVar4;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (((GEngine != (UEngine *)0x0) && ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0)) &&
     ((this->_padding_ != 0 ||
      (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 != (UWorld *)0x0
      )))) {
    pUVar4 = (UWorld *)this->_padding_;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    if ((pUVar4->WorldType).Value != '\x02') {
      pIVar1 = (GEngine->XRSystem).Object;
      (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,&local_18,0);
      if (local_18 != 0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x150);
        pUVar4 = (UWorld *)this->_padding_;
        if (pUVar4 == (UWorld *)0x0) {
          pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        cVar3 = (*pcVar2)(pIVar1,pUVar4);
        if (cVar3 != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_10);
          return true;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    }
  }
  return false;
}

// NotifyCameraCut @ 1476bd800

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraComponent::NotifyCameraCut(UCameraComponent *this)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = ACameraActor::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x0001476bd840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x760))(plVar2);
      return;
    }
  }
  return;
}

// OnCameraMeshHiddenChanged @ 1476bd960

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UCameraComponent::OnCameraMeshHiddenChanged(UCameraComponent *this)

{
  return;
}

// OnRegister @ 1476bd9b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCameraComponent::OnRegister(UCameraComponent *this)

{
  byte *pbVar1;
  char cVar2;
  UWorld *pUVar3;
  ULevel *pUVar4;
  FLevelCollection *pFVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId846,"USceneComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
               ,0x34e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId846);
  }
  pFVar5 = (FLevelCollection *)0x0;
  if ((this->_padding_ != 0) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x508))
                        (this,this->_padding_,&FAttachmentTransformRules::KeepRelativeTransform,
                         this->_padding_), cVar2 == '\0')) {
    this->_padding_ = 0;
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x3f;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfc;
    this->_padding_ = 0;
  }
  if ((this->_padding_ != 0) ||
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 != (UWorld *)0x0)
     ) {
    pUVar4 = UActorComponent::GetComponentLevel((UActorComponent *)this);
    if (pUVar4 != (ULevel *)0x0) {
      pFVar5 = pUVar4->CachedLevelCollection;
    }
    this->_padding_ = (longlong)pFVar5;
  }
  UActorComponent::OnRegister((UActorComponent *)this);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnUpdateTransform @ 1476bdb70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraComponent::OnUpdateTransform
          (UCameraComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  return;
}

// StaticRegisterNativesUCameraComponent @ 1476ca340

void __cdecl UCameraComponent::StaticRegisterNativesUCameraComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1a;
  local_18.DataPtr = Z_Construct_UClass_UCameraComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddOrUpdateBlendable @ 1476cf8d0

void __cdecl
UCameraComponent::execAddOrUpdateBlendable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 local_res10 [2];
  undefined4 local_68 [2];
  UObject *local_60;
  UObject *local_58;
  undefined8 uStack_50;
  
  local_58 = (UObject *)0x0;
  uStack_50 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_58;
  uVar6 = local_res10[0];
  uVar12 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_58 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_58);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar7);
      goto LAB_1476cf9dd;
    }
  }
  if (pUVar7 == (UObject *)0x0) {
    return;
  }
LAB_1476cf9dd:
  puVar1 = &param_1[0x43].field_0x10;
  iVar10 = *(int *)&param_1[0x43].field_0x18;
  uVar13 = uVar12;
  uVar14 = uVar12;
  if (0 < (longlong)iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&param_1[0x43].field_0x18) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar3 = *(UObject **)(*(longlong *)puVar1 + uVar14 + 8);
      if (pUVar3 == (UObject *)0x0) {
        bVar8 = pUVar7 == (UObject *)0x0;
      }
      else {
        bVar8 = pUVar3 == pUVar7;
      }
      if (bVar8) {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&param_1[0x43].field_0x18) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(*(longlong *)puVar1 + (longlong)(int)uVar11 * 0x10) = uVar6;
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 0x10;
    } while ((longlong)uVar13 < (longlong)iVar10);
  }
  local_68[0] = uVar6;
  local_60 = pUVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  if (((*(undefined4 **)puVar1 <= local_68) &&
      (local_68 < *(undefined4 **)puVar1 + (longlong)*(int *)&param_1[0x43].field_0x1c * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = *(int *)&param_1[0x43].field_0x18;
  if (iVar10 == *(int *)&param_1[0x43].field_0x1c) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)puVar1,(int *)&param_1[0x43].field_0x1c);
    *(int *)&param_1[0x43].field_0x18 = iVar10;
  }
  *(int *)&param_1[0x43].field_0x18 = iVar10 + 1;
  lVar4 = *(longlong *)puVar1;
  *(undefined4 *)(lVar4 + (longlong)iVar10 * 0x10) = local_68[0];
  *(UObject **)(lVar4 + (longlong)iVar10 * 0x10 + 8) = local_60;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_60);
  }
  return;
}

// execGetCameraView @ 1476d06c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl UCameraComponent::execGetCameraView(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_928 [32];
  undefined4 local_908 [4];
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined4 local_8b8;
  undefined1 local_8b4;
  undefined4 local_8b0;
  undefined2 local_8ac;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined1 local_894;
  uint local_890;
  undefined1 local_88c;
  undefined4 local_888;
  FPostProcessSettings local_878;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_928;
  local_908[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_908,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_908);
  }
  local_8b8 = 0x44000000;
  local_8f8 = 0;
  uStack_8f0 = 0;
  local_8e8 = 0;
  uStack_8e0 = 0;
  local_890 = local_890 & 0xfffffffc | 4;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_8c8 = ___xmm_3f80000042b4000042b4000042b40000;
  uStack_8c0 = _UNK_150fabfd8;
  local_8b4 = 1;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = ___xmm_3faaaaabbf8000004a00000000000000;
  uStack_8a0 = _UNK_150fabfe8;
  local_894 = 0;
  local_88c = 0;
  local_888 = 0;
  FPostProcessSettings::FPostProcessSettings(&local_878);
  local_78 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_70 = _UNK_15076b1f8;
  local_108 = 0;
  uStack_100 = 0;
  local_98 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = 0x3f800000;
  local_84 = 0x3f800000;
  local_68 = 0;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_8f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_8f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x660))(param_1);
  if (local_878.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// execOnCameraMeshHiddenChanged @ 1476d3040

void __cdecl
UCameraComponent::execOnCameraMeshHiddenChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execRemoveBlendable @ 1476d3130

void __cdecl UCameraComponent::execRemoveBlendable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  UObject *local_38;
  undefined8 uStack_30;
  
  local_38 = (UObject *)0x0;
  uStack_30 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pUVar5 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_38 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_38);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar5);
      goto LAB_1476d31d9;
    }
  }
  if (pUVar5 == (UObject *)0x0) {
    return;
  }
LAB_1476d31d9:
  uVar9 = 0;
  iVar11 = *(int *)&param_1[0x43].field_0x18;
  if (0 < iVar11) {
    lVar10 = 0;
    puVar1 = &param_1[0x43].field_0x10;
    do {
      uVar12 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < *(int *)&param_1[0x43].field_0x18) {
        uVar7 = uVar12;
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
      pUVar3 = *(UObject **)(*(longlong *)puVar1 + lVar10 + 8);
      if (pUVar3 == (UObject *)0x0) {
        bVar6 = pUVar5 == (UObject *)0x0;
      }
      else {
        bVar6 = pUVar3 == pUVar5;
      }
      if (bVar6) {
        uVar7 = 0;
        if ((int)uVar9 < *(int *)&param_1[0x43].field_0x18) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = *(int *)&param_1[0x43].field_0x18 + ~uVar9;
        if (iVar8 != 0) {
          memmove((void *)(*(longlong *)puVar1 + lVar10),
                  (void *)(*(longlong *)puVar1 + lVar10 + 0x10),(longlong)iVar8 << 4);
        }
        *(int *)&param_1[0x43].field_0x18 = *(int *)&param_1[0x43].field_0x18 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)puVar1,*(int *)&param_1[0x43].field_0x18,
                   (int *)&param_1[0x43].field_0x1c);
        uVar9 = uVar9 - 1;
        lVar10 = lVar10 + -0x10;
        iVar11 = iVar11 + -1;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < iVar11);
  }
  return;
}

// execSetAspectRatio @ 1476d3470

void __cdecl UCameraComponent::execSetAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xf].field_0x1c = local_res8[0];
  return;
}

// execSetAspectRatioAxisConstraint @ 1476d3500

void __cdecl
UCameraComponent::execSetAspectRatioAxisConstraint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xf].field_0x20 = local_res8[0];
  return;
}

// execSetAsymmetricOverscan @ 1476d3580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UCameraComponent::execSetAsymmetricOverscan(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = ___xmm_3f800000000000000000000000000000;
  uStack_10 = _UNK_150689648;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  puVar17 = (uchar *)&local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[0x10].field_0x0 = puVar17[0];
  param_1[0x10].field_0x1 = uVar2;
  param_1[0x10].field_0x2 = uVar3;
  param_1[0x10].field_0x3 = uVar4;
  param_1[0x10].field_0x4 = uVar5;
  param_1[0x10].field_0x5 = uVar6;
  param_1[0x10].field_0x6 = uVar7;
  param_1[0x10].field_0x7 = uVar8;
  param_1[0x10].field_0x8 = uVar9;
  param_1[0x10].field_0x9 = uVar10;
  param_1[0x10].field_0xa = uVar11;
  param_1[0x10].field_0xb = uVar12;
  param_1[0x10].field_0xc = uVar13;
  param_1[0x10].field_0xd = uVar14;
  param_1[0x10].field_0xe = uVar15;
  param_1[0x10].field_0xf = uVar16;
  return;
}

// execSetAutoCalculateOrthoPlanes @ 1476d3630

void __cdecl
UCameraComponent::execSetAutoCalculateOrthoPlanes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xf].field_0x8 = local_res8[0] != 0;
  return;
}

// execSetAutoPlaneShift @ 1476d36c0

void __cdecl UCameraComponent::execSetAutoPlaneShift(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xf].field_0xc = local_res8[0];
  return;
}

// execSetConstraintAspectRatio @ 1476d3750

void __cdecl
UCameraComponent::execSetConstraintAspectRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xf].field_0x21 = param_1[0xf].field_0x21 & 0xfe;
  param_1[0xf].field_0x21 = param_1[0xf].field_0x21 | local_res8[0] != 0;
  return;
}

// execSetCropOverscan @ 1476d37f0

void __cdecl UCameraComponent::execSetCropOverscan(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x10].field_0x11 = local_res8[0] != 0;
  return;
}

// execSetEnableFirstPersonFieldOfView @ 1476d3880

void __cdecl
UCameraComponent::execSetEnableFirstPersonFieldOfView
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x10].field_0x12 = param_1[0x10].field_0x12 & 0xfb;
  param_1[0x10].field_0x12 = param_1[0x10].field_0x12 | -(local_res8[0] != 0) & 4U;
  return;
}

// execSetEnableFirstPersonScale @ 1476d3920

void __cdecl
UCameraComponent::execSetEnableFirstPersonScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x10].field_0x12 = param_1[0x10].field_0x12 & 0xf7;
  param_1[0x10].field_0x12 = param_1[0x10].field_0x12 | -(local_res8[0] != 0) & 8U;
  return;
}

// execSetFieldOfView @ 1476d3a90

void __cdecl UCameraComponent::execSetFieldOfView(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x640))(param_1,local_res8[0]);
  return;
}

// execSetFirstPersonFieldOfView @ 1476d3b20

void __cdecl
UCameraComponent::execSetFirstPersonFieldOfView(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x648))(param_1,local_res8[0]);
  return;
}

// execSetFirstPersonScale @ 1476d3bb0

void __cdecl
UCameraComponent::execSetFirstPersonScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x650))(param_1,local_res8[0]);
  return;
}

// execSetOrthoFarClipPlane @ 1476d44c0

void __cdecl
UCameraComponent::execSetOrthoFarClipPlane(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xf].field_0x14 = local_res8[0];
  return;
}

// execSetOrthoNearClipPlane @ 1476d4550

void __cdecl
UCameraComponent::execSetOrthoNearClipPlane(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xf].field_0x10 = local_res8[0];
  return;
}

// execSetOrthoWidth @ 1476d45e0

void __cdecl UCameraComponent::execSetOrthoWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xf].field_0x4 = local_res8[0];
  return;
}

// execSetOverscan @ 1476d4670

void __cdecl UCameraComponent::execSetOverscan(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xf].field_0x24 = local_res8[0];
  return;
}

// execSetPostProcessBlendWeight @ 1476d4700

void __cdecl
UCameraComponent::execSetPostProcessBlendWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x13].field_0x8 = local_res8[0];
  return;
}

// execSetProjectionMode @ 1476d4860

void __cdecl UCameraComponent::execSetProjectionMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x10].field_0x13 = local_res8[0];
  return;
}

// execSetScaleResolutionWithOverscan @ 1476d49d0

void __cdecl
UCameraComponent::execSetScaleResolutionWithOverscan(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x10].field_0x10 = local_res8[0] != 0;
  return;
}

// execSetUpdateOrthoPlanes @ 1476d4de0

void __cdecl
UCameraComponent::execSetUpdateOrthoPlanes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xf].field_0x18 = local_res8[0] != 0;
  return;
}

// execSetUseCameraHeightAsViewTarget @ 1476d4e70

void __cdecl
UCameraComponent::execSetUseCameraHeightAsViewTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xf].field_0x19 = local_res8[0] != 0;
  return;
}

// execSetUseFieldOfViewForLOD @ 1476d4f00

void __cdecl
UCameraComponent::execSetUseFieldOfViewForLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xf].field_0x21 = param_1[0xf].field_0x21 & 0xfb;
  param_1[0xf].field_0x21 = param_1[0xf].field_0x21 | -(local_res8[0] != 0) & 4U;
  return;
}

