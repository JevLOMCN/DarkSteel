// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 255

// NotifyIsRootComponentChanged @ 1473aa0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::NotifyIsRootComponentChanged(USceneComponent *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->IsRootComponentChanged != (FIsRootComponentChanged)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FIsRootComponentChanged_MCSignature,USceneComponent,FIsRootComponentChangedInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FIsRootComponentChanged_MCSignature,USceneComponent,FIsRootComponentChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FIsRootComponentChanged_MCSignature,USceneComponent,FIsRootComponentChangedInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FIsRootComponentChanged_MCSignature,USceneComponent,FIsRootComponentChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"IsRootComponentChanged");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FIsRootComponentChanged_MCSignature,USceneComponent,FIsRootComponentChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FIsRootComponentChanged_MCSignature,USceneComponent,FIsRootComponentChangedInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar4 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_18,(UObject *)this,FVar2);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FIsRootComponentChanged_DelegateWrapper(local_38,this,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// IsQueryCollisionEnabled @ 147840960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::IsQueryCollisionEnabled(USceneComponent *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x5e0))();
  if (((iVar1 - 1U & 0xfffffff9) == 0) && (iVar1 != 7)) {
    return true;
  }
  return false;
}

// GetCurrentScopedMovement @ 1478d0b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScopedMovementUpdate * __thiscall USceneComponent::GetCurrentScopedMovement(USceneComponent *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScopedMovementUpdate *pFVar5;
  
  iVar1 = (this->ScopedMovementStack).ArrayNum;
  if (iVar1 < 1) {
    return (FScopedMovementUpdate *)0x0;
  }
  uVar4 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar4 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FScopedMovementUpdate *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FScopedMovementUpdate **)
          ((this->ScopedMovementStack).AllocatorInstance.Data +
          (longlong)(this->ScopedMovementStack).ArrayNum * 8 + -8);
}

// USceneComponent @ 14792ac10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall
USceneComponent::USceneComponent(USceneComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->bHasGroupedMoveThisFrame = '\0';
  (this->PhysicsVolume).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AttachParent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->AttachSocketName).ComparisonIndex = 0;
  (this->AttachSocketName).Number = 0;
  (this->NetOldAttachSocketName).ComparisonIndex = 0;
  (this->NetOldAttachSocketName).Number = 0;
  (this->AttachChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachChildren).ArrayNum = 0;
  (this->AttachChildren).ArrayMax = 0;
  (this->ClientAttachedChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientAttachedChildren).ArrayNum = 0;
  (this->ClientAttachedChildren).ArrayMax = 0;
  this->PhysicsVolumeChangedDelegate = (FPhysicsVolumeChanged)0x0;
  this->IsRootComponentChanged = (FIsRootComponentChanged)0x0;
  *(undefined8 *)&this->TransformUpdated = 0;
  *(undefined8 *)&(this->TransformUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->TransformUpdated).field_0x10 = 0;
  (this->ScopedMovementStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScopedMovementStack).ArrayNum = 0;
  (this->ScopedMovementStack).ArrayMax = 0;
  (this->WorldRotationCache).PayloadPtr.Ptr = (FPayload *)0x0;
  (this->RelativeRotationCache).PayloadPtr.Ptr = (FPayload *)0x0;
  *(undefined8 *)&(this->TransformUpdated).field_0x18 = 2;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ComponentToWorld).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ComponentToWorld).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentToWorld).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentToWorld).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ComponentToWorld).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ComponentToWorld).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentToWorld).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentToWorld).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentToWorld).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ComponentToWorld).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentToWorld).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// USceneComponent @ 14792ad30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall
USceneComponent::USceneComponent(USceneComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  USceneComponent *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->bHasGroupedMoveThisFrame = '\0';
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PhysicsVolume).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AttachParent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->AttachSocketName).ComparisonIndex = 0;
  (this->AttachSocketName).Number = 0;
  (this->NetOldAttachSocketName).ComparisonIndex = 0;
  (this->NetOldAttachSocketName).Number = 0;
  (this->AttachChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachChildren).ArrayNum = 0;
  (this->AttachChildren).ArrayMax = 0;
  (this->ClientAttachedChildren).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientAttachedChildren).ArrayNum = 0;
  (this->ClientAttachedChildren).ArrayMax = 0;
  this->PhysicsVolumeChangedDelegate = (FPhysicsVolumeChanged)0x0;
  this->IsRootComponentChanged = (FIsRootComponentChanged)0x0;
  *(undefined8 *)&this->TransformUpdated = 0;
  *(undefined8 *)&(this->TransformUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->TransformUpdated).field_0x10 = 0;
  (this->ScopedMovementStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScopedMovementStack).ArrayNum = 0;
  (this->ScopedMovementStack).ArrayMax = 0;
  (this->WorldRotationCache).PayloadPtr.Ptr = (FPayload *)0x0;
  (this->RelativeRotationCache).PayloadPtr.Ptr = (FPayload *)0x0;
  this->CachedLevelCollection = (FLevelCollection *)0x0;
  *(undefined8 *)&(this->TransformUpdated).field_0x18 = 2;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ComponentToWorld).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ComponentToWorld).Rotation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentToWorld).Rotation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentToWorld).Rotation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ComponentToWorld).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ComponentToWorld).Translation.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentToWorld).Translation.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentToWorld).Translation.ZW.m128d_f64[1] = (double)fVar5;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentToWorld).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ComponentToWorld).Scale3D.XY.m128d_f64[1] = (double)fVar3;
  (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0] = (double)fVar4;
  (this->ComponentToWorld).Scale3D.ZW.m128d_f64[1] = (double)fVar5;
  (this->Mobility).Value = '\x02';
  (this->RelativeScale3D).field0_0x0._s_0.X = 1.0;
  (this->RelativeScale3D).field0_0x0._s_0.Y = 1.0;
  (this->RelativeScale3D).field0_0x0._s_0.Z = 1.0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf7;
  pUVar2 = (this->AttachParent).field0_0x0.DebugPtr;
  this->bVisible = '\x01';
  this->bShouldBeAttached = (byte)-(pUVar2 != (USceneComponent *)0x0) >> 6;
  return this;
}

// ~USceneComponent @ 14792d020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::~USceneComponent(USceneComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  ::operator_delete((this->RelativeRotationCache).PayloadPtr.Ptr,0x40);
  ::operator_delete((this->WorldRotationCache).PayloadPtr.Ptr,0x40);
  pFVar1 = (this->ScopedMovementStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TransformUpdated).field_0x8,*(int *)&(this->TransformUpdated).field_0x10);
  pvVar2 = *(void **)&(this->TransformUpdated).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TransformUpdated);
  pFVar1 = (this->ClientAttachedChildren).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttachChildren).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddLocalOffset @ 14792fa00

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
USceneComponent::AddLocalOffset
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TRotator<double> *this_00;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  FPayload *pFVar8;
  TQuat<double> *pTVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar16 [16];
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined8 uVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined1 local_a8 [160];
  
  dVar29 = (this->RelativeRotation).Roll;
  auVar1._0_8_ = (this->RelativeRotation).Pitch;
  auVar1._8_8_ = (this->RelativeRotation).Yaw;
  local_d8 = dVar29;
  pFVar8 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache);
  uVar27 = in_XMM3._8_8_;
  this_00 = &pFVar8->CachedRotator;
  if ((((double)auVar1._0_8_ != (pFVar8->CachedRotator).Pitch) ||
      (auVar6._4_8_ = extraout_XMM0_Qb, auVar6._0_4_ = (int)((ulonglong)auVar1._0_8_ >> 0x20),
      auVar14._0_8_ = auVar6._0_8_ << 0x20, auVar14._8_4_ = (int)auVar1._8_8_,
      auVar14._12_4_ = (int)((ulonglong)auVar1._8_8_ >> 0x20),
      auVar14._8_8_ != (pFVar8->CachedRotator).Yaw)) ||
     ((double)local_d8 != (pFVar8->CachedRotator).Roll)) {
    auVar14 = divpd(auVar1,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar20 = roundpd(in_XMM1,auVar14,3);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar29;
    auVar14 = divpd(auVar15,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar21._0_8_ = auVar20._0_8_ * dVar2;
    dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar21._8_8_ = auVar20._8_8_ * dVar3;
    dVar19 = (double)auVar1._0_8_ - auVar21._0_8_;
    dVar4 = (double)auVar1._8_8_ - auVar21._8_8_;
    auVar14 = roundpd(auVar21,auVar14,3);
    dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar20._8_4_ = SUB84(dVar4,0);
    auVar20._0_8_ = dVar19;
    auVar20._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    dVar18 = auVar20._8_8_ + dVar3;
    dVar29 = dVar29 - auVar14._0_8_ * dVar5;
    dVar30 = 0.0 - auVar14._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar10 = -(ulonglong)(0.0 <= dVar29);
    uVar12 = -(ulonglong)(0.0 <= dVar30);
    auVar23._0_8_ = uVar10 & (ulonglong)dVar29;
    auVar23._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar30);
    auVar23._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar30) >> 0x20);
    uVar11 = -(ulonglong)(0.0 <= dVar19);
    uVar13 = -(ulonglong)(0.0 <= dVar4);
    auVar22._0_8_ = uVar11 & (ulonglong)dVar19;
    auVar22._8_4_ = (undefined4)(uVar13 & (ulonglong)dVar4);
    auVar22._12_4_ = (undefined4)((uVar13 & (ulonglong)dVar4) >> 0x20);
    auVar25._0_4_ = ~(uint)uVar11 & SUB84(dVar19 + dVar2,0);
    auVar25._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar19 + dVar2) >> 0x20);
    auVar25._8_4_ = ~(uint)uVar13 & SUB84(dVar18,0);
    auVar25._12_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)dVar18 >> 0x20);
    auVar16._8_4_ = SUB84(dVar30,0);
    auVar16._0_8_ = dVar29;
    auVar16._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    dVar19 = auVar16._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar25 = auVar25 | auVar22;
    auVar28._0_4_ = ~(uint)uVar10 & SUB84(dVar29 + dVar5,0);
    auVar28._4_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)(dVar29 + dVar5) >> 0x20);
    auVar28._8_4_ = ~(uint)uVar12 & SUB84(dVar19,0);
    auVar28._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar19 >> 0x20);
    auVar28 = auVar28 | auVar23;
    uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar25._0_8_);
    uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar25._8_8_);
    uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar28._0_8_);
    auVar24._0_8_ = uVar11 & (ulonglong)(auVar25._0_8_ - dVar2);
    uVar10 = uVar13 & (ulonglong)(auVar25._8_8_ - dVar3);
    auVar24._8_4_ = (undefined4)uVar10;
    auVar24._12_4_ = (undefined4)(uVar10 >> 0x20);
    auVar17._0_4_ = ~(uint)uVar11 & auVar25._0_4_;
    auVar17._4_4_ = ~(uint)(uVar11 >> 0x20) & auVar25._4_4_;
    auVar17._8_4_ = ~(uint)uVar13 & auVar25._8_4_;
    auVar17._12_4_ = ~(uint)(uVar13 >> 0x20) & auVar25._12_4_;
    this_00->Pitch = (double)SUB168(auVar24 | auVar17,0);
    this_00->Yaw = (double)SUB168(auVar24 | auVar17,8);
    (pFVar8->CachedRotator).Roll =
         (double)((ulonglong)(auVar28._0_8_ - dVar5) & uVar12 |
                 CONCAT44(~(uint)(uVar12 >> 0x20) & auVar28._4_4_,~(uint)uVar12 & auVar28._0_4_));
    _local_e8 = auVar1;
    pTVar9 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_a8);
    uVar27 = auVar25._8_8_;
    dVar29 = pTVar9->Y;
    (pFVar8->CachedQuat).X = pTVar9->X;
    (pFVar8->CachedQuat).Y = dVar29;
    dVar29 = pTVar9->W;
    (pFVar8->CachedQuat).Z = pTVar9->Z;
    (pFVar8->CachedQuat).W = dVar29;
  }
  local_a8._0_8_ = (pFVar8->CachedQuat).X;
  local_a8._8_8_ = (pFVar8->CachedQuat).Y;
  local_a8._16_8_ = (pFVar8->CachedQuat).Z;
  local_a8._24_8_ = (pFVar8->CachedQuat).W;
  dVar19 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar29 = (param_1->field0_0x0)._s_0.Z;
  auVar7._4_8_ = uVar27;
  auVar7._0_4_ = (int)((ulonglong)local_a8._16_8_ >> 0x20);
  auVar26._0_8_ = auVar7._0_8_ << 0x20;
  auVar26._8_4_ = (int)local_a8._24_8_;
  auVar26._12_4_ = (int)((ulonglong)local_a8._24_8_ >> 0x20);
  dVar18 = auVar26._8_8_;
  dVar5 = dVar29 * (double)local_a8._8_8_ - dVar4 * (double)local_a8._16_8_;
  dVar5 = dVar5 + dVar5;
  dVar3 = dVar19 * (double)local_a8._16_8_ - dVar29 * (double)local_a8._0_8_;
  dVar3 = dVar3 + dVar3;
  dVar2 = dVar4 * (double)local_a8._0_8_ - dVar19 * (double)local_a8._8_8_;
  dVar2 = dVar2 + dVar2;
  local_d8 = ((double)local_a8._0_8_ * dVar3 - (double)local_a8._8_8_ * dVar5) +
             dVar18 * dVar2 + dVar29 + (this->RelativeLocation).field0_0x0._s_0.Z;
  dStack_e0 = ((double)local_a8._16_8_ * dVar5 - (double)local_a8._0_8_ * dVar2) +
              dVar18 * dVar3 + dVar4 + (this->RelativeLocation).field0_0x0._s_0.Y;
  local_e8 = ((double)local_a8._8_8_ * dVar2 - (double)local_a8._16_8_ * dVar3) +
             dVar18 * dVar5 + dVar19 + (this->RelativeLocation).field0_0x0._s_0.X;
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_e8,(TQuat<double> *)local_a8,param_2,param_3,param_4);
  return;
}

// AddLocalRotation @ 14792fd20

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
USceneComponent::AddLocalRotation
          (USceneComponent *this,TQuat<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TRotator<double> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  FPayload *pFVar11;
  TQuat<double> *pTVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar23;
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  TVector<double>_u_0 local_98;
  undefined1 local_78 [112];
  
  dVar34 = (this->RelativeRotation).Roll;
  auVar3._0_8_ = (this->RelativeRotation).Pitch;
  auVar3._8_8_ = (this->RelativeRotation).Yaw;
  local_98._s_0.Z = dVar34;
  pFVar11 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache);
  this_00 = &pFVar11->CachedRotator;
  if ((((double)auVar3._0_8_ != (pFVar11->CachedRotator).Pitch) ||
      (auVar10._4_8_ = extraout_XMM0_Qb, auVar10._0_4_ = (int)((ulonglong)auVar3._0_8_ >> 0x20),
      auVar17._0_8_ = auVar10._0_8_ << 0x20, auVar17._8_4_ = (int)auVar3._8_8_,
      auVar17._12_4_ = (int)((ulonglong)auVar3._8_8_ >> 0x20),
      auVar17._8_8_ != (pFVar11->CachedRotator).Yaw)) ||
     (local_98._s_0.Z != (pFVar11->CachedRotator).Roll)) {
    auVar17 = divpd(auVar3,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar25 = roundpd(in_XMM1,auVar17,3);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar34;
    auVar17 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar26._0_8_ = auVar25._0_8_ * dVar6;
    dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar26._8_8_ = auVar25._8_8_ * dVar7;
    dVar24 = (double)auVar3._0_8_ - auVar26._0_8_;
    dVar9 = (double)auVar3._8_8_ - auVar26._8_8_;
    auVar17 = roundpd(auVar26,auVar17,3);
    dVar8 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar25._8_4_ = SUB84(dVar9,0);
    auVar25._0_8_ = dVar24;
    auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dVar23 = auVar25._8_8_ + dVar7;
    dVar34 = dVar34 - auVar17._0_8_ * dVar8;
    dVar35 = 0.0 - auVar17._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar13 = -(ulonglong)(0.0 <= dVar34);
    uVar15 = -(ulonglong)(0.0 <= dVar35);
    auVar29._0_8_ = uVar13 & (ulonglong)dVar34;
    auVar29._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar35);
    auVar29._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar35) >> 0x20);
    uVar14 = -(ulonglong)(0.0 <= dVar24);
    uVar16 = -(ulonglong)(0.0 <= dVar9);
    auVar27._0_8_ = uVar14 & (ulonglong)dVar24;
    auVar27._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar9);
    auVar27._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar9) >> 0x20);
    auVar31._0_4_ = ~(uint)uVar14 & SUB84(dVar24 + dVar6,0);
    auVar31._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar24 + dVar6) >> 0x20);
    auVar31._8_4_ = ~(uint)uVar16 & SUB84(dVar23,0);
    auVar31._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar23 >> 0x20);
    auVar19._8_4_ = SUB84(dVar35,0);
    auVar19._0_8_ = dVar34;
    auVar19._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    dVar24 = auVar19._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar31 = auVar31 | auVar27;
    auVar32._0_4_ = ~(uint)uVar13 & SUB84(dVar34 + dVar8,0);
    auVar32._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar34 + dVar8) >> 0x20);
    auVar32._8_4_ = ~(uint)uVar15 & SUB84(dVar24,0);
    auVar32._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
    auVar32 = auVar32 | auVar29;
    uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar31._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar31._8_8_);
    uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar32._0_8_);
    auVar30._0_8_ = uVar14 & (ulonglong)(auVar31._0_8_ - dVar6);
    uVar13 = uVar16 & (ulonglong)(auVar31._8_8_ - dVar7);
    auVar30._8_4_ = (undefined4)uVar13;
    auVar30._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar20._0_4_ = ~(uint)uVar14 & auVar31._0_4_;
    auVar20._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar31._4_4_;
    auVar20._8_4_ = ~(uint)uVar16 & auVar31._8_4_;
    auVar20._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar31._12_4_;
    this_00->Pitch = (double)SUB168(auVar30 | auVar20,0);
    this_00->Yaw = (double)SUB168(auVar30 | auVar20,8);
    (pFVar11->CachedRotator).Roll =
         (double)((ulonglong)(auVar32._0_8_ - dVar8) & uVar15 |
                 CONCAT44(~(uint)(uVar15 >> 0x20) & auVar32._4_4_,~(uint)uVar15 & auVar32._0_4_));
    local_98._0_16_ = auVar3;
    pTVar12 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_78);
    dVar34 = pTVar12->Y;
    (pFVar11->CachedQuat).X = pTVar12->X;
    (pFVar11->CachedQuat).Y = dVar34;
    dVar34 = pTVar12->W;
    (pFVar11->CachedQuat).Z = pTVar12->Z;
    (pFVar11->CachedQuat).W = dVar34;
  }
  dVar6 = param_1->Z;
  dVar7 = param_1->W;
  dVar8 = param_1->X;
  dVar24 = param_1->Y;
  uVar1 = (pFVar11->CachedQuat).X;
  uVar4 = (pFVar11->CachedQuat).Y;
  uVar2 = (pFVar11->CachedQuat).Z;
  uVar5 = (pFVar11->CachedQuat).W;
  auVar33._8_4_ = (int)uVar1;
  auVar33._0_8_ = uVar1;
  auVar33._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  auVar21._8_4_ = (int)uVar5;
  auVar21._0_8_ = uVar5;
  auVar21._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  auVar28._8_4_ = (int)uVar4;
  auVar28._0_8_ = uVar4;
  auVar28._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  auVar22._8_4_ = (int)uVar2;
  auVar22._0_8_ = uVar2;
  auVar22._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_98._s_0.Z = (this->RelativeLocation).field0_0x0._s_0.Z;
  local_78._0_8_ =
       (double)uVar1 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       (double)uVar5 * dVar8 +
       (double)uVar4 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       (double)uVar2 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_78._8_8_ =
       auVar33._8_8_ * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
       auVar21._8_8_ * dVar24 +
       auVar28._8_8_ * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       auVar22._8_8_ * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_98._0_16_ = *(undefined1 (*) [16])&(this->RelativeLocation).field0_0x0;
  dVar34 = (double)uVar1 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           (double)uVar5 * dVar7 +
           (double)uVar4 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + (double)uVar2 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
  ;
  local_78._24_4_ = SUB84(dVar34,0);
  local_78._16_8_ =
       (double)uVar1 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       (double)uVar5 * dVar6 +
       (double)uVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       (double)uVar2 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_78._28_4_ = (int)((ulonglong)dVar34 >> 0x20);
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_98._s_0,(TQuat<double> *)local_78,param_2,param_3,
             param_4);
  return;
}

// AddLocalRotation @ 14792ffe0

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
USceneComponent::AddLocalRotation
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TRotator<double> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  FPayload *pFVar11;
  TQuat<double> *pTVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar23;
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  TVector<double>_u_0 local_98;
  undefined1 local_78 [112];
  
  dVar34 = (this->RelativeRotation).Roll;
  auVar3._0_8_ = (this->RelativeRotation).Pitch;
  auVar3._8_8_ = (this->RelativeRotation).Yaw;
  local_98._s_0.Z = dVar34;
  pFVar11 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache);
  this_00 = &pFVar11->CachedRotator;
  if ((((double)auVar3._0_8_ != (pFVar11->CachedRotator).Pitch) ||
      (auVar10._4_8_ = extraout_XMM0_Qb, auVar10._0_4_ = (int)((ulonglong)auVar3._0_8_ >> 0x20),
      auVar17._0_8_ = auVar10._0_8_ << 0x20, auVar17._8_4_ = (int)auVar3._8_8_,
      auVar17._12_4_ = (int)((ulonglong)auVar3._8_8_ >> 0x20),
      auVar17._8_8_ != (pFVar11->CachedRotator).Yaw)) ||
     (local_98._s_0.Z != (pFVar11->CachedRotator).Roll)) {
    auVar17 = divpd(auVar3,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar25 = roundpd(in_XMM1,auVar17,3);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar34;
    auVar17 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar26._0_8_ = auVar25._0_8_ * dVar6;
    dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar26._8_8_ = auVar25._8_8_ * dVar7;
    dVar24 = (double)auVar3._0_8_ - auVar26._0_8_;
    dVar9 = (double)auVar3._8_8_ - auVar26._8_8_;
    auVar17 = roundpd(auVar26,auVar17,3);
    dVar8 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar25._8_4_ = SUB84(dVar9,0);
    auVar25._0_8_ = dVar24;
    auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dVar23 = auVar25._8_8_ + dVar7;
    dVar34 = dVar34 - auVar17._0_8_ * dVar8;
    dVar35 = 0.0 - auVar17._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar13 = -(ulonglong)(0.0 <= dVar34);
    uVar15 = -(ulonglong)(0.0 <= dVar35);
    auVar29._0_8_ = uVar13 & (ulonglong)dVar34;
    auVar29._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar35);
    auVar29._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar35) >> 0x20);
    uVar14 = -(ulonglong)(0.0 <= dVar24);
    uVar16 = -(ulonglong)(0.0 <= dVar9);
    auVar27._0_8_ = uVar14 & (ulonglong)dVar24;
    auVar27._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar9);
    auVar27._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar9) >> 0x20);
    auVar31._0_4_ = ~(uint)uVar14 & SUB84(dVar24 + dVar6,0);
    auVar31._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar24 + dVar6) >> 0x20);
    auVar31._8_4_ = ~(uint)uVar16 & SUB84(dVar23,0);
    auVar31._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar23 >> 0x20);
    auVar19._8_4_ = SUB84(dVar35,0);
    auVar19._0_8_ = dVar34;
    auVar19._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    dVar24 = auVar19._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar31 = auVar31 | auVar27;
    auVar32._0_4_ = ~(uint)uVar13 & SUB84(dVar34 + dVar8,0);
    auVar32._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar34 + dVar8) >> 0x20);
    auVar32._8_4_ = ~(uint)uVar15 & SUB84(dVar24,0);
    auVar32._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
    auVar32 = auVar32 | auVar29;
    uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar31._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar31._8_8_);
    uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar32._0_8_);
    auVar30._0_8_ = uVar14 & (ulonglong)(auVar31._0_8_ - dVar6);
    uVar13 = uVar16 & (ulonglong)(auVar31._8_8_ - dVar7);
    auVar30._8_4_ = (undefined4)uVar13;
    auVar30._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar20._0_4_ = ~(uint)uVar14 & auVar31._0_4_;
    auVar20._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar31._4_4_;
    auVar20._8_4_ = ~(uint)uVar16 & auVar31._8_4_;
    auVar20._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar31._12_4_;
    this_00->Pitch = (double)SUB168(auVar30 | auVar20,0);
    this_00->Yaw = (double)SUB168(auVar30 | auVar20,8);
    (pFVar11->CachedRotator).Roll =
         (double)((ulonglong)(auVar32._0_8_ - dVar8) & uVar15 |
                 CONCAT44(~(uint)(uVar15 >> 0x20) & auVar32._4_4_,~(uint)uVar15 & auVar32._0_4_));
    local_98._0_16_ = auVar3;
    pTVar12 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_78);
    dVar34 = pTVar12->Y;
    (pFVar11->CachedQuat).X = pTVar12->X;
    (pFVar11->CachedQuat).Y = dVar34;
    dVar34 = pTVar12->W;
    (pFVar11->CachedQuat).Z = pTVar12->Z;
    (pFVar11->CachedQuat).W = dVar34;
  }
  uVar1 = (pFVar11->CachedQuat).X;
  uVar4 = (pFVar11->CachedQuat).Y;
  uVar2 = (pFVar11->CachedQuat).Z;
  uVar5 = (pFVar11->CachedQuat).W;
  pTVar12 = UE::Math::TRotator<double>::Quaternion(param_1,(TQuat<double> *)local_78);
  auVar33._8_4_ = (int)uVar1;
  auVar33._0_8_ = uVar1;
  auVar33._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  dVar6 = pTVar12->Z;
  dVar7 = pTVar12->W;
  dVar8 = pTVar12->X;
  dVar24 = pTVar12->Y;
  auVar28._8_4_ = (int)uVar4;
  auVar28._0_8_ = uVar4;
  auVar28._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  auVar21._8_4_ = (int)uVar5;
  auVar21._0_8_ = uVar5;
  auVar21._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  auVar22._8_4_ = (int)uVar2;
  auVar22._0_8_ = uVar2;
  auVar22._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_98._s_0.Z = (this->RelativeLocation).field0_0x0._s_0.Z;
  local_78._0_8_ =
       (double)uVar1 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       (double)uVar5 * dVar8 +
       (double)uVar4 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       (double)uVar2 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_78._8_8_ =
       auVar33._8_8_ * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
       auVar21._8_8_ * dVar24 +
       auVar28._8_8_ * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       auVar22._8_8_ * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_98._0_16_ = *(undefined1 (*) [16])&(this->RelativeLocation).field0_0x0;
  dVar34 = (double)uVar1 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           (double)uVar5 * dVar7 +
           (double)uVar4 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + (double)uVar2 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
  ;
  local_78._24_4_ = SUB84(dVar34,0);
  local_78._16_8_ =
       (double)uVar1 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       (double)uVar5 * dVar6 +
       (double)uVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       (double)uVar2 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_78._28_4_ = (int)((ulonglong)dVar34 >> 0x20);
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_98._s_0,(TQuat<double> *)local_78,param_2,param_3,
             param_4);
  return;
}

// AddLocalTransform @ 1479302a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::AddLocalTransform
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TRotator<double> *this_00;
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [12];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FPayload *pFVar13;
  TQuat<double> *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar24;
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [16];
  double local_178;
  TQuat<double> local_168;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_168.Z = (this->RelativeLocation).field0_0x0._s_0.Z;
  dVar1 = (this->RelativeRotation).Roll;
  uVar9 = *(undefined4 *)&(this->RelativeLocation).field0_0x0;
  uVar10 = *(undefined4 *)((longlong)&(this->RelativeLocation).field0_0x0 + 4);
  uVar11 = *(undefined4 *)((longlong)&(this->RelativeLocation).field0_0x0 + 8);
  uVar12 = *(undefined4 *)((longlong)&(this->RelativeLocation).field0_0x0 + 0xc);
  auVar2._0_8_ = (this->RelativeRotation).Pitch;
  auVar2._8_8_ = (this->RelativeRotation).Yaw;
  local_178 = dVar1;
  pFVar13 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache);
  this_00 = &pFVar13->CachedRotator;
  if ((((double)auVar2._0_8_ != (pFVar13->CachedRotator).Pitch) ||
      (auVar8._4_8_ = extraout_XMM0_Qb, auVar8._0_4_ = (int)((ulonglong)auVar2._0_8_ >> 0x20),
      auVar19._0_8_ = auVar8._0_8_ << 0x20, auVar19._8_4_ = (int)auVar2._8_8_,
      auVar19._12_4_ = (int)((ulonglong)auVar2._8_8_ >> 0x20),
      auVar19._8_8_ != (pFVar13->CachedRotator).Yaw)) ||
     (local_178 != (pFVar13->CachedRotator).Roll)) {
    auVar19 = divpd(auVar2,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar26 = roundpd(in_XMM1,auVar19,3);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = dVar1;
    auVar19 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar27._0_8_ = auVar26._0_8_ * dVar4;
    dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar27._8_8_ = auVar26._8_8_ * dVar5;
    dVar25 = (double)auVar2._0_8_ - auVar27._0_8_;
    dVar7 = (double)auVar2._8_8_ - auVar27._8_8_;
    auVar19 = roundpd(auVar27,auVar19,3);
    dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar21._8_4_ = SUB84(dVar7,0);
    auVar21._0_8_ = dVar25;
    auVar21._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    dVar24 = auVar21._8_8_ + dVar5;
    dVar1 = dVar1 - auVar19._0_8_ * dVar6;
    dVar3 = 0.0 - auVar19._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar15 = -(ulonglong)(0.0 <= dVar1);
    uVar17 = -(ulonglong)(0.0 <= dVar3);
    uVar16 = -(ulonglong)(0.0 <= dVar25);
    uVar18 = -(ulonglong)(0.0 <= dVar7);
    auVar30._0_4_ = ~(uint)uVar16 & SUB84(dVar25 + dVar4,0);
    auVar30._4_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)(dVar25 + dVar4) >> 0x20);
    auVar30._8_4_ = ~(uint)uVar18 & SUB84(dVar24,0);
    auVar30._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
    auVar28._0_8_ = uVar16 & (ulonglong)dVar25;
    auVar28._8_4_ = (undefined4)(uVar18 & (ulonglong)dVar7);
    auVar28._12_4_ = (undefined4)((uVar18 & (ulonglong)dVar7) >> 0x20);
    auVar30 = auVar30 | auVar28;
    auVar22._8_4_ = SUB84(dVar3,0);
    auVar22._0_8_ = dVar1;
    auVar22._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    dVar25 = auVar22._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar31._0_4_ = ~(uint)uVar15 & SUB84(dVar1 + dVar6,0);
    auVar31._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar6) >> 0x20);
    auVar31._8_4_ = ~(uint)uVar17 & SUB84(dVar25,0);
    auVar31._12_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)dVar25 >> 0x20);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar30._0_8_);
    uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar30._8_8_);
    auVar26._8_4_ = (int)((ulonglong)dVar3 & uVar17);
    auVar26._0_8_ = (ulonglong)dVar1 & uVar15;
    auVar26._12_4_ = (int)(((ulonglong)dVar3 & uVar17) >> 0x20);
    auVar31 = auVar31 | auVar26;
    uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar31._0_8_);
    auVar29._0_8_ = uVar16 & (ulonglong)(auVar30._0_8_ - dVar4);
    uVar15 = uVar18 & (ulonglong)(auVar30._8_8_ - dVar5);
    auVar29._8_4_ = (undefined4)uVar15;
    auVar29._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar23._0_4_ = ~(uint)uVar16 & auVar30._0_4_;
    auVar23._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar30._4_4_;
    auVar23._8_4_ = ~(uint)uVar18 & auVar30._8_4_;
    auVar23._12_4_ = ~(uint)(uVar18 >> 0x20) & auVar30._12_4_;
    this_00->Pitch = (double)SUB168(auVar29 | auVar23,0);
    this_00->Yaw = (double)SUB168(auVar29 | auVar23,8);
    (pFVar13->CachedRotator).Roll =
         (double)((ulonglong)(auVar31._0_8_ - dVar6) & uVar17 |
                 CONCAT44(~(uint)(uVar17 >> 0x20) & auVar31._4_4_,~(uint)uVar17 & auVar31._0_4_));
    local_188 = auVar2;
    pTVar14 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_188);
    dVar1 = pTVar14->Y;
    (pFVar13->CachedQuat).X = pTVar14->X;
    (pFVar13->CachedQuat).Y = dVar1;
    dVar1 = pTVar14->W;
    (pFVar13->CachedQuat).Z = pTVar14->Z;
    (pFVar13->CachedQuat).W = dVar1;
  }
  local_e8.Rotation.XY.m128d_f64[0] = (pFVar13->CachedQuat).X;
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&(pFVar13->CachedQuat).Y;
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&(pFVar13->CachedQuat).Y + 4);
  local_e8.Rotation.ZW.m128d_f64[0] = (pFVar13->CachedQuat).Z;
  local_e8.Rotation.ZW.m128d_f64[1] = (pFVar13->CachedQuat).W;
  local_e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8.Translation.ZW.m128d_f64[0] = local_168.Z;
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_e8.Translation.XY.m128d_f64[0]._0_4_ = uVar9;
  local_e8.Translation.XY.m128d_f64[0]._4_4_ = uVar10;
  local_e8.Translation.XY.m128d_f64[1]._0_4_ = uVar11;
  local_e8.Translation.XY.m128d_f64[1]._4_4_ = uVar12;
  UE::Math::TTransform<double>::Multiply(&local_148,param_1,&local_e8);
  local_168.X = local_148.Rotation.XY.m128d_f64[0];
  local_168.Y = local_148.Rotation.XY.m128d_f64[1];
  local_178 = local_148.Translation.ZW.m128d_f64[0];
  local_168.Z = local_148.Rotation.ZW.m128d_f64[0];
  local_168.W = local_148.Rotation.ZW.m128d_f64[1];
  local_188._0_8_ = local_148.Translation.XY.m128d_f64[0];
  local_188._8_8_ = local_148.Translation.XY.m128d_f64[1];
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)local_188,&local_168,param_2,param_3,param_4);
  local_188._8_8_ = local_148.Scale3D.XY.m128d_f64[1];
  local_188._0_8_ = local_148.Scale3D.XY.m128d_f64[0];
  local_178 = local_148.Scale3D.ZW.m128d_f64[0];
  SetRelativeScale3D(this,(TVector<double> *)local_188);
  return;
}

// AddRelativeLocation @ 147930730

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
USceneComponent::AddRelativeLocation
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TRotator<double> *this_00;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  FPayload *pFVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar17;
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  TQuat<double> local_58 [2];
  
  dVar26 = (this->RelativeRotation).Roll;
  auVar1._0_8_ = (this->RelativeRotation).Pitch;
  auVar1._8_8_ = (this->RelativeRotation).Yaw;
  local_88 = dVar26;
  pFVar7 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache);
  this_00 = &pFVar7->CachedRotator;
  if ((((double)auVar1._0_8_ != (pFVar7->CachedRotator).Pitch) ||
      (auVar6._4_8_ = extraout_XMM0_Qb, auVar6._0_4_ = (int)((ulonglong)auVar1._0_8_ >> 0x20),
      auVar13._0_8_ = auVar6._0_8_ << 0x20, auVar13._8_4_ = (int)auVar1._8_8_,
      auVar13._12_4_ = (int)((ulonglong)auVar1._8_8_ >> 0x20),
      auVar13._8_8_ != (pFVar7->CachedRotator).Yaw)) ||
     ((double)local_88 != (pFVar7->CachedRotator).Roll)) {
    auVar13 = divpd(auVar1,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar19 = roundpd(in_XMM1,auVar13,3);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar26;
    auVar13 = divpd(auVar14,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar20._0_8_ = auVar19._0_8_ * dVar2;
    dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar20._8_8_ = auVar19._8_8_ * dVar3;
    dVar18 = (double)auVar1._0_8_ - auVar20._0_8_;
    dVar5 = (double)auVar1._8_8_ - auVar20._8_8_;
    auVar13 = roundpd(auVar20,auVar13,3);
    dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar19._8_4_ = SUB84(dVar5,0);
    auVar19._0_8_ = dVar18;
    auVar19._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar17 = auVar19._8_8_ + dVar3;
    dVar26 = dVar26 - auVar13._0_8_ * dVar4;
    dVar27 = 0.0 - auVar13._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar9 = -(ulonglong)(0.0 <= dVar26);
    uVar11 = -(ulonglong)(0.0 <= dVar27);
    auVar22._0_8_ = uVar9 & (ulonglong)dVar26;
    auVar22._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar27);
    auVar22._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar27) >> 0x20);
    uVar10 = -(ulonglong)(0.0 <= dVar18);
    uVar12 = -(ulonglong)(0.0 <= dVar5);
    auVar21._0_8_ = uVar10 & (ulonglong)dVar18;
    auVar21._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar5);
    auVar21._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar5) >> 0x20);
    auVar24._0_4_ = ~(uint)uVar10 & SUB84(dVar18 + dVar2,0);
    auVar24._4_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)(dVar18 + dVar2) >> 0x20);
    auVar24._8_4_ = ~(uint)uVar12 & SUB84(dVar17,0);
    auVar24._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar17 >> 0x20);
    auVar15._8_4_ = SUB84(dVar27,0);
    auVar15._0_8_ = dVar26;
    auVar15._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    dVar18 = auVar15._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar24 = auVar24 | auVar21;
    auVar25._0_4_ = ~(uint)uVar9 & SUB84(dVar26 + dVar4,0);
    auVar25._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar26 + dVar4) >> 0x20);
    auVar25._8_4_ = ~(uint)uVar11 & SUB84(dVar18,0);
    auVar25._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar18 >> 0x20);
    auVar25 = auVar25 | auVar22;
    uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar24._0_8_);
    uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar24._8_8_);
    uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar25._0_8_);
    auVar23._0_8_ = uVar10 & (ulonglong)(auVar24._0_8_ - dVar2);
    uVar9 = uVar12 & (ulonglong)(auVar24._8_8_ - dVar3);
    auVar23._8_4_ = (undefined4)uVar9;
    auVar23._12_4_ = (undefined4)(uVar9 >> 0x20);
    auVar16._0_4_ = ~(uint)uVar10 & auVar24._0_4_;
    auVar16._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar24._4_4_;
    auVar16._8_4_ = ~(uint)uVar12 & auVar24._8_4_;
    auVar16._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar24._12_4_;
    this_00->Pitch = (double)SUB168(auVar23 | auVar16,0);
    this_00->Yaw = (double)SUB168(auVar23 | auVar16,8);
    (pFVar7->CachedRotator).Roll =
         (double)((ulonglong)(auVar25._0_8_ - dVar4) & uVar11 |
                 CONCAT44(~(uint)(uVar11 >> 0x20) & auVar25._4_4_,~(uint)uVar11 & auVar25._0_4_));
    _local_98 = auVar1;
    pTVar8 = UE::Math::TRotator<double>::Quaternion(this_00,local_58);
    dVar26 = pTVar8->Y;
    (pFVar7->CachedQuat).X = pTVar8->X;
    (pFVar7->CachedQuat).Y = dVar26;
    dVar26 = pTVar8->W;
    (pFVar7->CachedQuat).Z = pTVar8->Z;
    (pFVar7->CachedQuat).W = dVar26;
  }
  local_58[0].X = (pFVar7->CachedQuat).X;
  local_58[0].Y = (pFVar7->CachedQuat).Y;
  local_58[0].Z = (pFVar7->CachedQuat).Z;
  local_58[0].W = (pFVar7->CachedQuat).W;
  local_88 = (this->RelativeLocation).field0_0x0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  dStack_90 = (this->RelativeLocation).field0_0x0._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  local_98 = (this->RelativeLocation).field0_0x0._s_0.X + (param_1->field0_0x0)._s_0.X;
  SetRelativeLocationAndRotation(this,(TVector<double> *)&local_98,local_58,param_2,param_3,param_4)
  ;
  return;
}

// AddRelativeRotation @ 147930940

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
USceneComponent::AddRelativeRotation
          (USceneComponent *this,TQuat<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TRotator<double> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  FPayload *pFVar11;
  TQuat<double> *pTVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar23;
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  TVector<double>_u_0 local_98;
  undefined1 local_78 [112];
  
  dVar33 = (this->RelativeRotation).Roll;
  auVar3._0_8_ = (this->RelativeRotation).Pitch;
  auVar3._8_8_ = (this->RelativeRotation).Yaw;
  local_98._s_0.Z = dVar33;
  pFVar11 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache);
  this_00 = &pFVar11->CachedRotator;
  if ((((double)auVar3._0_8_ != (pFVar11->CachedRotator).Pitch) ||
      (auVar10._4_8_ = extraout_XMM0_Qb, auVar10._0_4_ = (int)((ulonglong)auVar3._0_8_ >> 0x20),
      auVar17._0_8_ = auVar10._0_8_ << 0x20, auVar17._8_4_ = (int)auVar3._8_8_,
      auVar17._12_4_ = (int)((ulonglong)auVar3._8_8_ >> 0x20),
      auVar17._8_8_ != (pFVar11->CachedRotator).Yaw)) ||
     (local_98._s_0.Z != (pFVar11->CachedRotator).Roll)) {
    auVar17 = divpd(auVar3,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar25 = roundpd(in_XMM1,auVar17,3);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar33;
    auVar17 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar26._0_8_ = auVar25._0_8_ * dVar6;
    dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar26._8_8_ = auVar25._8_8_ * dVar7;
    dVar24 = (double)auVar3._0_8_ - auVar26._0_8_;
    dVar9 = (double)auVar3._8_8_ - auVar26._8_8_;
    auVar17 = roundpd(auVar26,auVar17,3);
    dVar8 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar25._8_4_ = SUB84(dVar9,0);
    auVar25._0_8_ = dVar24;
    auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dVar23 = auVar25._8_8_ + dVar7;
    dVar33 = dVar33 - auVar17._0_8_ * dVar8;
    dVar34 = 0.0 - auVar17._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar13 = -(ulonglong)(0.0 <= dVar33);
    uVar15 = -(ulonglong)(0.0 <= dVar34);
    auVar28._0_8_ = uVar13 & (ulonglong)dVar33;
    auVar28._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar34);
    auVar28._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar34) >> 0x20);
    uVar14 = -(ulonglong)(0.0 <= dVar24);
    uVar16 = -(ulonglong)(0.0 <= dVar9);
    auVar27._0_8_ = uVar14 & (ulonglong)dVar24;
    auVar27._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar9);
    auVar27._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar9) >> 0x20);
    auVar30._0_4_ = ~(uint)uVar14 & SUB84(dVar24 + dVar6,0);
    auVar30._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar24 + dVar6) >> 0x20);
    auVar30._8_4_ = ~(uint)uVar16 & SUB84(dVar23,0);
    auVar30._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar23 >> 0x20);
    auVar19._8_4_ = SUB84(dVar34,0);
    auVar19._0_8_ = dVar33;
    auVar19._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    dVar24 = auVar19._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar30 = auVar30 | auVar27;
    auVar31._0_4_ = ~(uint)uVar13 & SUB84(dVar33 + dVar8,0);
    auVar31._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar33 + dVar8) >> 0x20);
    auVar31._8_4_ = ~(uint)uVar15 & SUB84(dVar24,0);
    auVar31._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
    auVar31 = auVar31 | auVar28;
    uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar30._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar30._8_8_);
    uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar31._0_8_);
    auVar29._0_8_ = uVar14 & (ulonglong)(auVar30._0_8_ - dVar6);
    uVar13 = uVar16 & (ulonglong)(auVar30._8_8_ - dVar7);
    auVar29._8_4_ = (undefined4)uVar13;
    auVar29._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar20._0_4_ = ~(uint)uVar14 & auVar30._0_4_;
    auVar20._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar30._4_4_;
    auVar20._8_4_ = ~(uint)uVar16 & auVar30._8_4_;
    auVar20._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar30._12_4_;
    this_00->Pitch = (double)SUB168(auVar29 | auVar20,0);
    this_00->Yaw = (double)SUB168(auVar29 | auVar20,8);
    (pFVar11->CachedRotator).Roll =
         (double)((ulonglong)(auVar31._0_8_ - dVar8) & uVar15 |
                 CONCAT44(~(uint)(uVar15 >> 0x20) & auVar31._4_4_,~(uint)uVar15 & auVar31._0_4_));
    local_98._0_16_ = auVar3;
    pTVar12 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_78);
    dVar33 = pTVar12->Y;
    (pFVar11->CachedQuat).X = pTVar12->X;
    (pFVar11->CachedQuat).Y = dVar33;
    dVar33 = pTVar12->W;
    (pFVar11->CachedQuat).Z = pTVar12->Z;
    (pFVar11->CachedQuat).W = dVar33;
  }
  dVar6 = (pFVar11->CachedQuat).Z;
  dVar7 = (pFVar11->CachedQuat).W;
  dVar8 = (pFVar11->CachedQuat).X;
  dVar24 = (pFVar11->CachedQuat).Y;
  uVar1 = param_1->X;
  uVar4 = param_1->Y;
  uVar2 = param_1->Z;
  uVar5 = param_1->W;
  auVar32._8_4_ = (int)uVar1;
  auVar32._0_8_ = uVar1;
  auVar32._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  auVar21._8_4_ = (int)uVar5;
  auVar21._0_8_ = uVar5;
  auVar21._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  auVar22._8_4_ = (int)uVar2;
  auVar22._0_8_ = uVar2;
  auVar22._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_98._s_0.Z = (this->RelativeLocation).field0_0x0._s_0.Z;
  local_78._0_8_ =
       (double)uVar1 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       (double)uVar5 * dVar8 +
       dVar6 * (double)uVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       (double)uVar2 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_78._8_8_ =
       auVar32._8_8_ * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
       auVar21._8_8_ * dVar24 +
       dVar7 * (double)uVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       auVar22._8_8_ * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_98._0_16_ = *(undefined1 (*) [16])&(this->RelativeLocation).field0_0x0;
  dVar33 = (double)uVar1 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar7 * (double)uVar5 +
           (double)uVar4 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + (double)uVar2 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
  ;
  local_78._24_4_ = SUB84(dVar33,0);
  local_78._16_8_ =
       (double)uVar1 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar6 * (double)uVar5 +
       (double)uVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       (double)uVar2 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_78._28_4_ = (int)((ulonglong)dVar33 >> 0x20);
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_98._s_0,(TQuat<double> *)local_78,param_2,param_3,
             param_4);
  return;
}

// AddWorldOffset @ 147930e30

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
USceneComponent::AddWorldOffset
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TVector<double>_u_0 local_48 [3];
  
  local_48[0]._0_8_ =
       (this->ComponentToWorld).Translation.XY.m128d_f64[0] + (param_1->field0_0x0)._s_0.X;
  local_48[0]._16_8_ =
       (this->ComponentToWorld).Translation.ZW.m128d_f64[0] + (param_1->field0_0x0)._s_0.Z;
  local_48[0]._8_8_ =
       (this->ComponentToWorld).Translation.XY.m128d_f64[1] + (param_1->field0_0x0)._s_0.Y;
  SetWorldLocation(this,(TVector<double> *)&local_48[0]._s_0,param_2,param_3,param_4);
  return;
}

// AddWorldRotation @ 147930e90

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
USceneComponent::AddWorldRotation
          (USceneComponent *this,TQuat<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  TQuat<double> local_78 [3];
  
  dVar3 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  dVar4 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  dVar5 = (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
  dVar6 = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
  dVar7 = param_1->X;
  dVar8 = param_1->Y;
  dVar9 = param_1->Z;
  dVar10 = param_1->W;
  dVar1 = dVar3 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar10 * dVar6 +
          dVar8 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar9 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar2 = dVar7 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar10 * dVar4 +
          dVar8 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar9 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_98._8_4_ = SUB84(dVar1,0);
  local_98._0_8_ =
       dVar4 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar10 * dVar5 +
       dVar8 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar9 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_98._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_88._8_4_ = SUB84(dVar2,0);
  local_88._0_8_ =
       dVar7 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar10 * dVar3 +
       dVar8 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar9 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_88._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  GetRelativeRotationFromWorld(this,local_78,(TQuat<double> *)local_98);
  local_98 = *(undefined1 (*) [16])&(this->RelativeLocation).field0_0x0;
  local_88._0_8_ = (this->RelativeLocation).field0_0x0._s_0.Z;
  SetRelativeLocationAndRotation(this,(TVector<double> *)local_98,local_78,param_2,param_3,param_4);
  return;
}

// AddWorldRotation @ 147931020

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
USceneComponent::AddWorldRotation
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TQuat<double> *pTVar11;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  TQuat<double> local_78 [3];
  
  pTVar11 = UE::Math::TRotator<double>::Quaternion(param_1,local_78);
  dVar3 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  dVar4 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  dVar5 = (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
  dVar6 = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
  dVar7 = pTVar11->X;
  dVar8 = pTVar11->Y;
  dVar9 = pTVar11->Z;
  dVar10 = pTVar11->W;
  dVar1 = dVar7 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar10 * dVar6 +
          dVar8 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar9 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar2 = dVar7 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar10 * dVar4 +
          dVar8 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar9 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_98._8_4_ = SUB84(dVar1,0);
  local_98._0_8_ =
       dVar7 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar10 * dVar5 +
       dVar8 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar9 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_98._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_88._8_4_ = SUB84(dVar2,0);
  local_88._0_8_ =
       dVar7 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar10 * dVar3 +
       dVar8 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar9 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_88._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  GetRelativeRotationFromWorld(this,local_78,(TQuat<double> *)local_98);
  local_98 = *(undefined1 (*) [16])&(this->RelativeLocation).field0_0x0;
  local_88._0_8_ = (this->RelativeLocation).field0_0x0._s_0.Z;
  SetRelativeLocationAndRotation(this,(TVector<double> *)local_98,local_78,param_2,param_3,param_4);
  return;
}

// AddWorldTransform @ 1479311c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::AddWorldTransform
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [12];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 auVar11 [16];
  double dVar13;
  double dVar14;
  undefined1 auStack_138 [32];
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_138;
  dVar4 = (param_1->Rotation).XY.m128d_f64[0];
  dVar5 = (param_1->Rotation).XY.m128d_f64[1];
  dVar6 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  dVar7 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar8 = (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
  dVar9 = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
  dVar13 = auVar11._8_8_;
  local_e8.Translation.XY.m128d_f64[0] =
       (param_1->Translation).XY.m128d_f64[0] + (this->ComponentToWorld).Translation.XY.m128d_f64[0]
  ;
  dVar14 = (param_1->Translation).XY.m128d_f64[1] +
           (this->ComponentToWorld).Translation.XY.m128d_f64[1];
  local_e8.Translation.ZW.m128d_f64[0] =
       (param_1->Translation).ZW.m128d_f64[0] + (this->ComponentToWorld).Translation.ZW.m128d_f64[0]
  ;
  dVar2 = auVar11._0_8_;
  auVar10._8_4_ = auVar11._0_4_;
  auVar10._0_8_ = dVar2;
  auVar10._12_4_ = auVar11._4_4_;
  dVar12 = auVar10._8_8_ * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar1 = dVar4 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar9 * dVar13 +
          dVar7 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar12;
  auVar3._4_8_ = dVar12;
  auVar3._0_4_ = (int)((ulonglong)local_e8.Translation.XY.m128d_f64[0] >> 0x20);
  auVar11._0_8_ = auVar3._0_8_ << 0x20;
  auVar11._8_4_ = SUB84(dVar14,0);
  auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_e8.Rotation.XY.m128d_f64[0] =
       dVar4 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar8 * dVar13 +
       dVar6 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar2 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_e8.Translation.XY.m128d_f64[1] = auVar11._8_8_;
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
  dVar1 = dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar7 * dVar13 +
          dVar9 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar2 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_e8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_e8.Rotation.ZW.m128d_f64[0] =
       dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar6 * dVar13 +
       dVar8 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar2 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_e8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  SetWorldTransform(this,&local_e8,param_2,param_3,param_4);
  return;
}

// AddWorldTransformKeepScale @ 1479313a0

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
USceneComponent::AddWorldTransformKeepScale
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_158 [32];
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_158;
  dVar2 = (param_1->Rotation).XY.m128d_f64[0];
  dVar3 = (param_1->Rotation).XY.m128d_f64[1];
  dVar4 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  dVar5 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  dVar6 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar8 = (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
  dVar9 = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
  local_108.Scale3D.XY.m128d_f64[0] = (this->ComponentToWorld).Scale3D.XY.m128d_f64[0];
  local_108.Scale3D.XY.m128d_f64[1] = (this->ComponentToWorld).Scale3D.XY.m128d_f64[1];
  dVar10 = (param_1->Translation).XY.m128d_f64[1] +
           (this->ComponentToWorld).Translation.XY.m128d_f64[1];
  local_108.Translation.ZW.m128d_f64[0] =
       (param_1->Translation).ZW.m128d_f64[0] + (this->ComponentToWorld).Translation.ZW.m128d_f64[0]
  ;
  local_108.Scale3D.ZW.m128d_f64[0] = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
  dVar1 = dVar2 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar9 * dVar7 +
          dVar5 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_108.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_108.Rotation.XY.m128d_f64[0] =
       dVar2 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar8 * dVar7 +
       dVar4 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_108.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_108.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
  local_108.Translation.XY.m128d_f64[0] =
       (param_1->Translation).XY.m128d_f64[0] + (this->ComponentToWorld).Translation.XY.m128d_f64[0]
  ;
  local_108.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_108.Translation.ZW.m128d_f64[1] = 0.0;
  dVar1 = dVar2 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar5 * dVar7 +
          dVar9 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar6 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_108.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_108.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_108.Rotation.ZW.m128d_f64[0] =
       dVar2 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar4 * dVar7 +
       dVar8 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar6 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_108.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  SetWorldTransform(this,&local_108,param_2,param_3,param_4);
  return;
}

// AppendDescendants @ 147932710

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
USceneComponent::AppendDescendants
          (USceneComponent *this,TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  
  uVar9 = (this->AttachChildren).ArrayNum + param_1->ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  pFVar8 = (this->AttachChildren).AllocatorInstance.Data;
  iVar3 = (this->AttachChildren).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AttachChildren).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<USceneComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_38[0] = *(longlong *)pFVar8;
    if (local_38[0] != 0) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
    }
    pFVar8 = pFVar8 + 8;
  }
  pFVar8 = (this->AttachChildren).AllocatorInstance.Data;
  iVar3 = (this->AttachChildren).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AttachChildren).ArrayNum != iVar3) {
      `TCheckedPointerIterator<USceneComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar2) break;
    if (*(USceneComponent **)pFVar8 != (USceneComponent *)0x0) {
      AppendDescendants(*(USceneComponent **)pFVar8,param_1);
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// ApplyWorldOffset @ 1479331b0

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
USceneComponent::ApplyWorldOffset(USceneComponent *this,TVector<double> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  TTransform<double> *pTVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  undefined8 local_130;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar10 = 0;
  local_130 = 0;
  pTVar9 = GetRelativeTransform(this,&local_108);
  pTVar9 = CalcNewComponentToWorld(this,&local_a8,pTVar9,(USceneComponent *)0x0,(FName)0x0);
  dVar2 = (pTVar9->Rotation).XY.m128d_f64[1];
  (this->ComponentToWorld).Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
  (this->ComponentToWorld).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar9->Rotation).ZW.m128d_f64[1];
  (this->ComponentToWorld).Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
  (this->ComponentToWorld).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar9->Translation).XY.m128d_f64[1];
  (this->ComponentToWorld).Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
  (this->ComponentToWorld).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar9->Translation).ZW.m128d_f64[1];
  (this->ComponentToWorld).Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
  (this->ComponentToWorld).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar9->Scale3D).XY.m128d_f64[1];
  (this->ComponentToWorld).Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
  (this->ComponentToWorld).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar9->Scale3D).ZW.m128d_f64[1];
  (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
  (this->ComponentToWorld).Scale3D.ZW.m128d_f64[1] = dVar2;
  (this->Bounds).Origin.field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->Bounds).Origin.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y =
       (this->Bounds).Origin.field0_0x0._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.Z =
       (this->Bounds).Origin.field0_0x0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  if (((this->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0) ||
     (this->bAbsoluteLocation != '\0')) {
    dVar6 = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
    dVar7 = (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    local_130 = 0;
    (this->RelativeLocation).field0_0x0._s_0.X =
         (this->ComponentToWorld).Translation.XY.m128d_f64[0] + (param_1->field0_0x0)._s_0.X;
    (this->RelativeLocation).field0_0x0._s_0.Y = dVar6 + dVar3;
    (this->RelativeLocation).field0_0x0._s_0.Z = dVar7 + dVar2;
    pTVar9 = GetRelativeTransform(this,&local_a8);
    pTVar9 = CalcNewComponentToWorld(this,&local_108,pTVar9,(USceneComponent *)0x0,(FName)0x0);
    dVar2 = (pTVar9->Rotation).XY.m128d_f64[1];
    (this->ComponentToWorld).Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
    (this->ComponentToWorld).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Rotation).ZW.m128d_f64[1];
    (this->ComponentToWorld).Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
    (this->ComponentToWorld).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Translation).XY.m128d_f64[1];
    (this->ComponentToWorld).Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
    (this->ComponentToWorld).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Translation).ZW.m128d_f64[1];
    (this->ComponentToWorld).Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
    (this->ComponentToWorld).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Scale3D).XY.m128d_f64[1];
    (this->ComponentToWorld).Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
    (this->ComponentToWorld).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar9->Scale3D).ZW.m128d_f64[1];
    (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
    (this->ComponentToWorld).Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  if ((this->_padding_ & 8) != 0) {
    if (!param_2) goto LAB_147933389;
    bVar8 = FPhysScene_Chaos::SupportsOriginShifting();
    if ((!bVar8) ||
       ((((param_1->field0_0x0)._s_0.X == 0.0 && ((param_1->field0_0x0)._s_0.Y == 0.0)) &&
        ((param_1->field0_0x0)._s_0.Z == 0.0)))) goto LAB_147933389;
  }
  uVar10 = 1;
LAB_147933389:
  (**(code **)(this->_padding_ + 0x578))(this,uVar10,0);
  if ((!param_2) ||
     ((((param_1->field0_0x0)._s_0.X == 0.0 && ((param_1->field0_0x0)._s_0.Y == 0.0)) &&
      ((param_1->field0_0x0)._s_0.Z == 0.0)))) {
    UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
  }
  if ((this->bShouldUpdatePhysicsVolume != '\0') && (!param_2)) {
    (**(code **)(this->_padding_ + 0x5c0))(this,1);
  }
  pFVar11 = (this->AttachChildren).AllocatorInstance.Data;
  iVar4 = (this->AttachChildren).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->AttachChildren).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_138);
    }
    if (pFVar11 == pFVar1) break;
    plVar5 = *(longlong **)pFVar11;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x4d8))(plVar5,param_1,param_2);
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// AttachToComponent @ 147933520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
USceneComponent::AttachToComponent
          (USceneComponent *this,USceneComponent *param_1,FAttachmentTransformRules *param_2,
          FName param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  USceneComponent *pUVar6;
  ITextData *pIVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  TObjectPtr<USceneComponent>_u_0 TVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 uVar19;
  ENetRole EVar20;
  uint *puVar21;
  FTlsAutoCleanup *pFVar22;
  FMessageLog *pFVar23;
  FString *pFVar24;
  FText *pFVar25;
  FText *pFVar26;
  FTextFormat *pFVar27;
  FText *pFVar28;
  FText *pFVar29;
  UClass *pUVar30;
  longlong lVar31;
  UWorld *this_00;
  FPayload *pFVar32;
  TQuat<double> *pTVar33;
  TRotator<double> *pTVar34;
  uint uVar35;
  FRotationConversionCache *this_01;
  byte bVar36;
  undefined4 uVar37;
  int iVar38;
  TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_> *pTVar39;
  FScriptContainerElement *pFVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar52;
  undefined1 auVar47 [16];
  double dVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar67 [16];
  double dVar68;
  double dVar70;
  undefined1 auVar69 [16];
  uint uVar71;
  undefined1 auStackY_688 [32];
  TObjectPtr<USceneComponent>_u_0 local_638;
  undefined1 local_630;
  undefined1 local_62f;
  undefined1 local_62e;
  undefined1 local_62d;
  undefined1 local_62c;
  undefined1 local_62b;
  undefined1 local_62a [2];
  USceneComponent *local_628;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_620;
  undefined8 local_610;
  undefined8 local_608;
  FString local_600;
  FName local_5f0;
  FName local_5e8;
  FName local_5e0;
  FName local_5d8;
  TObjectPtr<USceneComponent>_u_0 local_5d0;
  TObjectPtr<USceneComponent>_u_0 local_5c8;
  double local_5c0;
  double dStack_5b8;
  double local_5b0;
  TObjectPtr<USceneComponent>_u_0 *local_5a8;
  USceneComponent *local_5a0;
  code *local_598;
  undefined1 *local_590;
  FTextFormat local_588;
  FText local_578;
  TObjectPtr<USceneComponent>_u_0 *local_568;
  USceneComponent *local_560;
  FFormatArgumentValue local_558;
  undefined4 local_538;
  FText local_528;
  FText local_518;
  FText local_508;
  FString local_4f8;
  TSharedRef<FTokenizedMessage,1> local_4e8;
  FText local_4d8;
  FText local_4c8;
  FString local_4b8;
  TSharedRef<FTokenizedMessage,1> local_4a8;
  FText local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  TSharedRef<FTokenizedMessage,1> local_448;
  FText local_438;
  FText local_428;
  FString local_418;
  FString local_408;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  TSharedRef<FTokenizedMessage,1> local_378;
  TQuat<double> local_368;
  FText local_348;
  FText local_338;
  FText local_328;
  FTextFormat local_318;
  FText local_308;
  FTextFormat local_2f8;
  FText local_2e8;
  FTextFormat local_2d8;
  FText local_2c8;
  FText local_2b8;
  FTextFormat local_2a8 [2];
  TRotator<double> local_280;
  TRotator<double> local_268;
  TRotator<double> local_250 [2];
  FMessageLog local_220;
  FMessageLog local_1f0;
  FMessageLog local_1c0;
  FMessageLog local_190;
  TQuat<double> local_158;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  TTransform<double> *__return_storage_ptr__;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_688;
  local_638.DebugPtr = param_1;
  puVar21 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_590 = &local_62c;
  local_598 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_598,puVar21);
  TVar14 = local_638;
  if (0 < *(int *)(pFVar22 + 5)) {
    if (param_2->bWeldSimulatedBodies != false) {
      `USceneComponent::AttachToComponent'::__l5::<lambda_1>::operator()(&local_62b);
    }
    if (((param_2->LocationRule != KeepRelative) || (param_2->RotationRule != KeepRelative)) ||
       (param_2->ScaleRule != KeepRelative)) {
      `USceneComponent::AttachToComponent'::__l5::<lambda_2>::operator()(local_62a);
    }
    SetupAttachment(this,local_638.DebugPtr,param_3);
    this->bShouldSnapLocationWhenAttached = '\0';
    this->bShouldSnapRotationWhenAttached = '\0';
    this->bShouldSnapScaleWhenAttached = '\0';
    return true;
  }
  if (local_638.DebugPtr == (USceneComponent *)0x0) goto LAB_147933bdf;
  pTVar39 = (TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_> *)
            ((longlong)local_638 + 0xe8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pFVar5 = (pTVar39->AllocatorInstance).Data;
  for (pFVar40 = pFVar5;
      pFVar40 != pFVar5 + (longlong)((TVar14.DebugPtr)->AttachChildren).ArrayNum * 8;
      pFVar40 = pFVar40 + 8) {
    if (*(USceneComponent **)pFVar40 == this) {
      iVar38 = (int)((longlong)pFVar40 - (longlong)pFVar5 >> 3);
      goto LAB_147933664;
    }
  }
  iVar38 = -1;
LAB_147933664:
  if ((local_638.DebugPtr == (this->AttachParent).field0_0x0.DebugPtr) &&
     (param_3 == this->AttachSocketName)) {
    bVar18 = true;
    if (iVar38 == -1) goto LAB_147933691;
LAB_14793482b:
    bVar18 = true;
  }
  else {
    bVar18 = false;
LAB_147933691:
    if (local_638.DebugPtr == this) {
      ::FName::FName(&local_5f0,"PIE");
      pFVar23 = FMessageLog::FMessageLog(&local_220,&local_5f0);
      pFVar24 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this,&local_4f8,(UObject *)0x0);
      pFVar25 = FText::FromString(&local_308,pFVar24);
      pFVar26 = FText::AsLocalizable_Advanced_LocText
                          (&local_508,L"SceneComponent",L"AttachToSelfWarning",
                           L"AttachTo: \'{0}\' cannot be attached to itself. Aborting.");
      pFVar27 = FTextFormat::FTextFormat(&local_2f8,pFVar26,Default);
      pFVar25 = FText::Format<FText>(&local_518,pFVar27,pFVar25);
      FMessageLog::Warning(pFVar23,&local_378,pFVar25);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_378.SharedReferenceCount.ReferenceController);
      if (local_518.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_518.TextData.Reference + 0x10))();
      }
      if (local_508.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_508.TextData.Reference + 0x10))();
      }
      if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_220);
    }
    else {
      lVar31 = this->_padding_;
      if (((lVar31 == (local_638.DebugPtr)->_padding_) && (lVar31 != 0)) &&
         (*(USceneComponent **)(lVar31 + 0x1b8) == this)) {
        ::FName::FName(&local_5e8,"PIE");
        pFVar23 = FMessageLog::FMessageLog(&local_1f0,&local_5e8);
        pFVar24 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this,&local_4b8,(UObject *)0x0);
        pFVar25 = FText::FromString(&local_2e8,pFVar24);
        pFVar26 = FText::AsLocalizable_Advanced_LocText
                            (&local_4c8,L"SceneComponent",L"AttachToSelfRootWarning",
                             L"AttachTo: \'{0}\' root component cannot be attached to other components in the same actor. Aborting."
                            );
        pFVar27 = FTextFormat::FTextFormat(&local_2d8,pFVar26,Default);
        pFVar25 = FText::Format<FText>(&local_4d8,pFVar27,pFVar25);
        FMessageLog::Warning(pFVar23,&local_4e8,pFVar25);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4e8.SharedReferenceCount.ReferenceController);
        if (local_4d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_4d8.TextData.Reference + 0x10))();
        }
        if (local_4c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_4c8.TextData.Reference + 0x10))();
        }
        if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
        }
        FMessageLog::~FMessageLog(&local_1f0);
      }
      else {
        for (pUVar6 = ((local_638.DebugPtr)->AttachParent).field0_0x0.DebugPtr;
            pUVar6 != (USceneComponent *)0x0; pUVar6 = (pUVar6->AttachParent).field0_0x0.DebugPtr) {
          if (this == pUVar6) {
            ::FName::FName(&local_5e0,"PIE");
            pFVar23 = FMessageLog::FMessageLog(&local_1c0,&local_5e0);
            pFVar24 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)this,&local_478,(UObject *)0x0);
            pFVar25 = FText::FromString(&local_2c8,pFVar24);
            pFVar24 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)local_638.DebugPtr,&local_488,(UObject *)0x0)
            ;
            pFVar26 = FText::FromString(&local_2b8,pFVar24);
            pFVar28 = FText::AsLocalizable_Advanced_LocText
                                (&local_498,L"SceneComponent",L"AttachCycleWarning",
                                 L"AttachTo: \'{0}\' already attached to \'{1}\', would form cycle. Aborting."
                                );
            pFVar27 = FTextFormat::FTextFormat(local_2a8,pFVar28,Default);
            local_558.Type = Text;
            FText::FText((FText *)&local_558.TextValue,pFVar26);
            if ((local_558.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0xbd,
                                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                      ), bVar18)) {
              pcVar8 = (code *)swi(3);
              uVar19 = (*pcVar8)();
              return (bool)uVar19;
            }
            local_538 = 4;
            FText::FText(&local_528,pFVar25);
            if ((local_528.TextData.Reference == (ITextData *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0xbd,
                                    L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                   ), bVar18)) {
              pcVar8 = (code *)swi(3);
              uVar19 = (*pcVar8)();
              return (bool)uVar19;
            }
            local_620.ArrayNum = 2;
            local_620.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_620.AllocatorInstance,2,&local_620.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_620.AllocatorInstance.Data,&local_558,2);
            local_588.TextFormatData.Object = (pFVar27->TextFormatData).Object;
            local_588.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar27->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_588.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_588.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_588.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_578,&local_588,&local_620);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_620.AllocatorInstance.Data,local_620.ArrayNum);
            if ((FFormatArgumentValue *)local_620.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_620.AllocatorInstance.Data);
            }
            if (local_528.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_528.TextData.Reference + 0x10))();
            }
            if (local_558.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_558.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar27->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar7 = (pFVar26->TextData).Reference;
            if (pIVar7 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar7 + 0x10))();
            }
            pIVar7 = (pFVar25->TextData).Reference;
            if (pIVar7 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar7 + 0x10))();
            }
            FMessageLog::Warning(pFVar23,&local_4a8,&local_578);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_4a8.SharedReferenceCount.ReferenceController);
            if (local_578.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_578.TextData.Reference + 0x10))();
            }
            if (local_498.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
            }
            if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.Data.AllocatorInstance.Data);
            }
            if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_478.Data.AllocatorInstance.Data);
            }
            FMessageLog::~FMessageLog(&local_1c0);
            goto LAB_147933bdf;
          }
        }
        cVar15 = (**(code **)((local_638.DebugPtr)->_padding_ + 0x600))(local_638.DebugPtr,this);
        if (cVar15 != '\0') {
          bVar16 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
          if (((!bVar16) && ((this->Mobility).Value == '\0')) &&
             (((local_638.DebugPtr)->Mobility).Value != '\0')) {
            local_600.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_600.Data.ArrayNum = 0;
            local_600.Data.ArrayMax = 0;
            ::FName::FName(&local_5d8,"PIE");
            pFVar23 = FMessageLog::FMessageLog(&local_190,&local_5d8);
            pFVar24 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)this,&local_408,(UObject *)0x0);
            pFVar25 = FText::FromString(&local_348,pFVar24);
            pFVar26 = FText::FromString(&local_338,&local_600);
            pFVar24 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)local_638.DebugPtr,&local_418,(UObject *)0x0)
            ;
            pFVar28 = FText::FromString(&local_328,pFVar24);
            pFVar29 = FText::AsLocalizable_Advanced_LocText
                                (&local_428,L"SceneComponent",L"NoStaticToDynamicWarning",
                                 L"AttachTo: \'{0}\' is not static {1}, cannot attach \'{2}\' which is static to it. Aborting."
                                );
            pFVar27 = FTextFormat::FTextFormat(&local_318,pFVar29,Default);
            pFVar25 = FText::Format<FText,FText,FText>(&local_438,pFVar27,pFVar28,pFVar26,pFVar25);
            FMessageLog::Warning(pFVar23,&local_448,pFVar25);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_448.SharedReferenceCount.ReferenceController);
            if (local_438.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
            }
            if (local_428.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
            }
            if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_418.Data.AllocatorInstance.Data);
            }
            if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_408.Data.AllocatorInstance.Data);
            }
            FMessageLog::~FMessageLog(&local_190);
            local_458.Data.AllocatorInstance.Data = local_600.Data.AllocatorInstance.Data;
            goto LAB_147933bd5;
          }
          bVar16 = UObjectBaseUtility::IsTemplate
                             ((UObjectBaseUtility *)local_638.DebugPtr,
                              RF_ArchetypeObject|RF_ClassDefaultObject);
          bVar17 = UObjectBaseUtility::IsTemplate
                             ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
          if (bVar16 != bVar17) {
            bVar18 = UObjectBaseUtility::IsTemplate
                               ((UObjectBaseUtility *)local_638.DebugPtr,
                                RF_ArchetypeObject|RF_ClassDefaultObject);
            local_5a8 = &local_638;
            if (bVar18) {
              local_568 = local_5a8;
              local_560 = this;
              `USceneComponent::AttachToComponent'::__l50::<lambda_3>::operator()(&local_568);
            }
            else {
              local_5a0 = this;
              `USceneComponent::AttachToComponent'::__l52::<lambda_4>::operator()(&local_5a8);
            }
            goto LAB_147933bdf;
          }
          bVar36 = this->field_0x1aa;
          this->bDisableDetachmentUpdateOverlaps = '\x01';
          if ((SkipUpdateOverlapsOptimEnabled != 1) || (this->bSkipUpdateOverlaps == '\0')) {
            ClearSkipUpdateOverlaps(local_638.DebugPtr);
          }
          local_630 = param_2->LocationRule != KeepRelative;
          local_62d = 1;
          local_62f = param_2->RotationRule != KeepRelative;
          local_62e = param_2->ScaleRule != KeepRelative;
          if (((!bVar18) || ((this->_padding_ & 1) != 0)) ||
             ((param_2->LocationRule != KeepRelative ||
              (((param_2->RotationRule != KeepRelative || (param_2->ScaleRule != KeepRelative)) ||
               (iVar38 != -1)))))) {
            (**(code **)(this->_padding_ + 0x518))(this,&local_630);
          }
          this->field_0x1aa = (this->field_0x1aa ^ bVar36) & 4 ^ this->field_0x1aa;
          pUVar30 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar4 = (int)pUVar30->_padding_;
          if (((iVar4 <= *(int *)(this->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
               &pUVar30->_padding_)) && (this != (USceneComponent *)0x0)) {
            local_610 = 0;
            lVar31 = (**(code **)(this->_padding_ + 0x818))
                               (this,0,CONCAT71((int7)((ulonglong)&pUVar30->_padding_ >> 8),1));
            if (((lVar31 != 0) && ((*(byte *)(lVar31 + 8) & 1) != 0)) &&
               ((param_2->bWeldSimulatedBodies == false &&
                (((((this_00 = (UWorld *)this->_padding_, this_00 != (UWorld *)0x0 ||
                    (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
                    this_00 != (UWorld *)0x0)) && (bVar18 = UWorld::IsGameWorld(this_00), bVar18))
                  && (this_00->bIsRunningConstructionScript == '\0')) &&
                 ((bVar3 = *(byte *)(this->_padding_ + 0x5d), (bVar3 & 0x18) == 0x10 ||
                  ((bVar3 & 0x18) == 8)))))))) {
              this->bDisableDetachmentUpdateOverlaps = '\x01';
              (**(code **)(this->_padding_ + 0x518))(this,&local_630);
              this->field_0x1aa = (this->field_0x1aa ^ bVar36) & 4 ^ this->field_0x1aa;
              if ((param_2->LocationRule == KeepRelative) ||
                 ((param_2->RotationRule == KeepRelative || (param_2->ScaleRule == KeepRelative))))
              {
                dVar68 = (this->RelativeRotation).Roll;
                auVar56._0_8_ = (this->RelativeRotation).Pitch;
                auVar56._8_8_ = (this->RelativeRotation).Yaw;
                local_5b0 = dVar68;
                pFVar32 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache)
                ;
                pTVar34 = &pFVar32->CachedRotator;
                if (((double)auVar56._0_8_ != (pFVar32->CachedRotator).Pitch) ||
                   ((auVar11._4_8_ = extraout_XMM0_Qb,
                    auVar11._0_4_ = (int)((ulonglong)auVar56._0_8_ >> 0x20),
                    auVar45._0_8_ = auVar11._0_8_ << 0x20, auVar45._8_4_ = (int)auVar56._8_8_,
                    auVar45._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20),
                    auVar45._8_8_ != (pFVar32->CachedRotator).Yaw ||
                    (local_5b0 != (pFVar32->CachedRotator).Roll)))) {
                  auVar45 = divpd(auVar56,(undefined1  [16])
                                          GlobalVectorConstants::Double360.XY.m128d_f64);
                  auVar54 = roundpd(in_XMM1,auVar45,3);
                  auVar46._8_8_ = 0;
                  auVar46._0_8_ = dVar68;
                  auVar45 = divpd(auVar46,(undefined1  [16])
                                          GlobalVectorConstants::Double360.ZW.m128d_f64);
                  dVar61 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
                  auVar55._0_8_ = auVar54._0_8_ * dVar61;
                  dVar62 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
                  auVar55._8_8_ = auVar54._8_8_ * dVar62;
                  dVar53 = (double)auVar56._0_8_ - auVar55._0_8_;
                  dVar10 = (double)auVar56._8_8_ - auVar55._8_8_;
                  auVar56 = roundpd(auVar55,auVar45,3);
                  dVar9 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
                  auVar54._8_4_ = SUB84(dVar10,0);
                  auVar54._0_8_ = dVar53;
                  auVar54._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
                  dVar52 = auVar54._8_8_ + dVar62;
                  dVar68 = dVar68 - auVar56._0_8_ * dVar9;
                  dVar70 = 0.0 - auVar56._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
                  uVar41 = -(ulonglong)(0.0 <= dVar68);
                  uVar43 = -(ulonglong)(0.0 <= dVar70);
                  auVar63._0_8_ = uVar41 & (ulonglong)dVar68;
                  auVar63._8_4_ = (undefined4)(uVar43 & (ulonglong)dVar70);
                  auVar63._12_4_ = (undefined4)((uVar43 & (ulonglong)dVar70) >> 0x20);
                  uVar42 = -(ulonglong)(0.0 <= dVar53);
                  uVar44 = -(ulonglong)(0.0 <= dVar10);
                  auVar57._0_8_ = uVar42 & (ulonglong)dVar53;
                  auVar57._8_4_ = (undefined4)(uVar44 & (ulonglong)dVar10);
                  auVar57._12_4_ = (undefined4)((uVar44 & (ulonglong)dVar10) >> 0x20);
                  auVar65._0_4_ = ~(uint)uVar42 & SUB84(dVar53 + dVar61,0);
                  auVar65._4_4_ =
                       ~(uint)(uVar42 >> 0x20) & (uint)((ulonglong)(dVar53 + dVar61) >> 0x20);
                  auVar65._8_4_ = ~(uint)uVar44 & SUB84(dVar52,0);
                  auVar65._12_4_ = ~(uint)(uVar44 >> 0x20) & (uint)((ulonglong)dVar52 >> 0x20);
                  auVar47._8_4_ = SUB84(dVar70,0);
                  auVar47._0_8_ = dVar68;
                  auVar47._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
                  dVar53 = auVar47._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
                  auVar65 = auVar65 | auVar57;
                  auVar67._0_4_ = ~(uint)uVar41 & SUB84(dVar68 + dVar9,0);
                  auVar67._4_4_ =
                       ~(uint)(uVar41 >> 0x20) & (uint)((ulonglong)(dVar68 + dVar9) >> 0x20);
                  auVar67._8_4_ = ~(uint)uVar43 & SUB84(dVar53,0);
                  auVar67._12_4_ = ~(uint)(uVar43 >> 0x20) & (uint)((ulonglong)dVar53 >> 0x20);
                  auVar67 = auVar67 | auVar63;
                  uVar42 = -(ulonglong)
                            (GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar65._0_8_);
                  uVar44 = -(ulonglong)
                            (GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar65._8_8_);
                  uVar43 = -(ulonglong)
                            (GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar67._0_8_);
                  auVar64._0_8_ = uVar42 & (ulonglong)(auVar65._0_8_ - dVar61);
                  uVar41 = uVar44 & (ulonglong)(auVar65._8_8_ - dVar62);
                  auVar64._8_4_ = (undefined4)uVar41;
                  auVar64._12_4_ = (undefined4)(uVar41 >> 0x20);
                  auVar48._0_4_ = ~(uint)uVar42 & auVar65._0_4_;
                  auVar48._4_4_ = ~(uint)(uVar42 >> 0x20) & auVar65._4_4_;
                  auVar48._8_4_ = ~(uint)uVar44 & auVar65._8_4_;
                  auVar48._12_4_ = ~(uint)(uVar44 >> 0x20) & auVar65._12_4_;
                  pTVar34->Pitch = (double)SUB168(auVar64 | auVar48,0);
                  pTVar34->Yaw = (double)SUB168(auVar64 | auVar48,8);
                  (pFVar32->CachedRotator).Roll =
                       (double)((ulonglong)(auVar67._0_8_ - dVar9) & uVar43 |
                               CONCAT44(~(uint)(uVar43 >> 0x20) & auVar67._4_4_,
                                        ~(uint)uVar43 & auVar67._0_4_));
                  pTVar33 = UE::Math::TRotator<double>::Quaternion(pTVar34,&local_158);
                  dVar68 = pTVar33->Y;
                  (pFVar32->CachedQuat).X = pTVar33->X;
                  (pFVar32->CachedQuat).Y = dVar68;
                  dVar68 = pTVar33->W;
                  (pFVar32->CachedQuat).Z = pTVar33->Z;
                  (pFVar32->CachedQuat).W = dVar68;
                }
                local_368.X = (pFVar32->CachedQuat).X;
                local_368.Y = (pFVar32->CachedQuat).Y;
                local_368.Z = (pFVar32->CachedQuat).Z;
                local_368.W = (pFVar32->CachedQuat).W;
                UpdateComponentToWorldWithParent
                          (this,local_638.DebugPtr,param_3,None,&local_368,None);
                if (param_2->LocationRule == KeepRelative) {
                  dVar61 = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
                  dVar68 = (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
                  (this->RelativeLocation).field0_0x0._s_0.X =
                       (this->ComponentToWorld).Translation.XY.m128d_f64[0];
                  (this->RelativeLocation).field0_0x0._s_0.Y = dVar61;
                  (this->RelativeLocation).field0_0x0._s_0.Z = dVar68;
                }
                if (param_2->RotationRule == KeepRelative) {
                  pTVar34 = GetComponentRotation(this,&local_280);
                  dVar61 = pTVar34->Yaw;
                  dVar68 = pTVar34->Roll;
                  (this->RelativeRotation).Pitch = pTVar34->Pitch;
                  (this->RelativeRotation).Yaw = dVar61;
                  (this->RelativeRotation).Roll = dVar68;
                }
                if (param_2->ScaleRule == KeepRelative) {
                  dVar61 = (this->ComponentToWorld).Scale3D.XY.m128d_f64[1];
                  dVar68 = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
                  (this->RelativeScale3D).field0_0x0._s_0.X =
                       (this->ComponentToWorld).Scale3D.XY.m128d_f64[0];
                  (this->RelativeScale3D).field0_0x0._s_0.Y = dVar61;
                  (this->RelativeScale3D).field0_0x0._s_0.Z = dVar68;
                }
                if ((this->_padding_ & 1) != 0) {
                  UpdateOverlaps(this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                                 (TArrayView<FOverlapInfo_const_,int> *)0x0);
                }
              }
              goto LAB_147933bdf;
            }
          }
          FTickFunction::AddPrerequisite
                    ((FTickFunction *)&this->_padding_,(UObject *)local_638.DebugPtr,
                     (FTickFunction *)&(local_638.DebugPtr)->_padding_);
          TVar14 = local_638;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_638.DebugPtr != (USceneComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_638.DebugPtr);
          }
          (this->AttachParent).field0_0x0.DebugPtr = (USceneComponent *)TVar14;
          this->bShouldBeAttached = '\0';
          this->AttachSocketName = param_3;
          this->field_0x1a8 =
               this->field_0x1a8 | -(TVar14.DebugPtr != (USceneComponent *)0x0) & 0x40U;
          if (param_2->LocationRule == SnapToTarget) {
LAB_14793428d:
            bVar36 = 0x80;
          }
          else {
            if (param_2->LocationRule == KeepWorld) {
              local_3f8 = (this->RelativeLocation).field0_0x0._s_0.X;
              dStack_3f0 = (this->RelativeLocation).field0_0x0._s_0.Y;
              local_3e8 = (this->RelativeLocation).field0_0x0._s_0.Z;
              local_3e0 = ((local_638.DebugPtr)->RelativeLocation).field0_0x0._s_0.X;
              dStack_3d8 = ((local_638.DebugPtr)->RelativeLocation).field0_0x0._s_0.Y;
              local_3d0 = ((local_638.DebugPtr)->RelativeLocation).field0_0x0._s_0.Z;
              if (((local_3f8 == local_3e0) && (dStack_3f0 == dStack_3d8)) &&
                 (local_3e8 == local_3d0)) goto LAB_14793428d;
            }
            bVar36 = 0;
          }
          this->field_0x1a8 = this->field_0x1a8 & 0x7f | bVar36;
          if (param_2->RotationRule == SnapToTarget) {
LAB_14793430c:
            bVar36 = 1;
          }
          else {
            if (param_2->RotationRule == KeepWorld) {
              local_3c8 = (this->RelativeRotation).Pitch;
              dStack_3c0 = (this->RelativeRotation).Yaw;
              local_3b8 = (this->RelativeRotation).Roll;
              local_3b0 = ((local_638.DebugPtr)->RelativeRotation).Pitch;
              dStack_3a8 = ((local_638.DebugPtr)->RelativeRotation).Yaw;
              local_3a0 = ((local_638.DebugPtr)->RelativeRotation).Roll;
              if (((local_3c8 == local_3b0) && (dStack_3c0 == dStack_3a8)) &&
                 (local_3b8 == local_3a0)) goto LAB_14793430c;
            }
            bVar36 = 0;
          }
          this->bShouldSnapRotationWhenAttached = '\0';
          this->field_0x1a9 = this->field_0x1a9 | bVar36;
          if (param_2->ScaleRule == SnapToTarget) {
LAB_14793438e:
            bVar36 = 2;
          }
          else {
            if (param_2->ScaleRule == KeepWorld) {
              local_398 = (this->RelativeScale3D).field0_0x0._s_0.X;
              dStack_390 = (this->RelativeScale3D).field0_0x0._s_0.Y;
              local_388 = (this->RelativeScale3D).field0_0x0._s_0.Z;
              local_5c0 = ((local_638.DebugPtr)->RelativeScale3D).field0_0x0._s_0.X;
              dStack_5b8 = ((local_638.DebugPtr)->RelativeScale3D).field0_0x0._s_0.Y;
              local_5b0 = ((local_638.DebugPtr)->RelativeScale3D).field0_0x0._s_0.Z;
              if (((local_398 == local_5c0) && (dStack_390 == dStack_5b8)) &&
                 (local_388 == local_5b0)) goto LAB_14793438e;
            }
            bVar36 = 0;
          }
          this->field_0x1a9 = this->field_0x1a9 & 0xfd | bVar36;
          (**(code **)(this->_padding_ + 0x590))(this);
          TVar14 = local_638;
          if ((iVar38 == -1) || (this->bNetUpdateAttachment != '\0')) {
            pTVar39 = &(local_638.DebugPtr)->AttachChildren;
            local_628 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            pFVar5 = (pTVar39->AllocatorInstance).Data;
            if (((pFVar5 <= (FScriptContainerElement *)&local_628) &&
                ((FScriptContainerElement *)&local_628 <
                 pFVar5 + (longlong)((TVar14.DebugPtr)->AttachChildren).ArrayMax * 8)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar8 = (code *)swi(3);
              uVar19 = (*pcVar8)();
              return (bool)uVar19;
            }
            iVar38 = ((TVar14.DebugPtr)->AttachChildren).ArrayNum;
            piVar1 = &((TVar14.DebugPtr)->AttachChildren).ArrayMax;
            if (iVar38 == *piVar1) {
              iVar38 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar39->AllocatorInstance,piVar1);
            }
            ((TVar14.DebugPtr)->AttachChildren).ArrayNum = iVar38 + 1;
            *(USceneComponent **)((pTVar39->AllocatorInstance).Data + (longlong)iVar38 * 8) =
                 local_628;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_628 != (USceneComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_628);
            }
          }
          else {
            local_5d0.DebugPtr = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_>::Insert
                      (&(TVar14.DebugPtr)->AttachChildren,
                       (TObjectPtr<USceneComponent> *)&local_5d0.ObjectPtr,iVar38);
          }
          UObjectBaseUtility::AddToCluster
                    ((UObjectBaseUtility *)this,(UObjectBaseUtility *)local_638.DebugPtr,true);
          if ((((char)(local_638.DebugPtr)->_padding_ < '\0') &&
              (EVar20 = UActorComponent::GetOwnerRole((UActorComponent *)local_638.DebugPtr),
              EVar20 != ROLE_Authority)) &&
             ((-1 < (char)this->_padding_ ||
              (EVar20 = UActorComponent::GetOwnerRole((UActorComponent *)this),
              EVar20 == ROLE_Authority)))) {
            TVar14 = local_638;
            local_5c8.DebugPtr = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TObjectPtr<USceneComponent>_>
                      (&(TVar14.DebugPtr)->ClientAttachedChildren,
                       (TObjectPtr<USceneComponent> *)&local_5c8.ObjectPtr);
          }
          pUVar6 = (this->AttachParent).field0_0x0.DebugPtr;
          (**(code **)(pUVar6->_padding_ + 0x520))(pUVar6,&local_d8,this->AttachSocketName);
          __return_storage_ptr__ = &local_138;
          UE::Math::TTransform<double>::GetRelativeTransform
                    (&this->ComponentToWorld,__return_storage_ptr__,&local_d8);
          uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar37 = SUB84(__return_storage_ptr__,0);
          if (param_2->LocationRule == KeepWorld) {
            if (this->bAbsoluteLocation == '\0') {
              (this->RelativeLocation).field0_0x0._s_0.X = local_138.Translation.XY.m128d_f64[0];
              (this->RelativeLocation).field0_0x0._s_0.Y = local_138.Translation.XY.m128d_f64[1];
            }
            else {
              dVar68 = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
              local_138.Translation.ZW.m128d_f64[0] =
                   (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
              (this->RelativeLocation).field0_0x0._s_0.X =
                   (this->ComponentToWorld).Translation.XY.m128d_f64[0];
              (this->RelativeLocation).field0_0x0._s_0.Y = dVar68;
            }
LAB_1479345ba:
            (this->RelativeLocation).field0_0x0._s_0.Z = local_138.Translation.ZW.m128d_f64[0];
          }
          else if (param_2->LocationRule == SnapToTarget) {
            (this->RelativeLocation).field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            (this->RelativeLocation).field0_0x0._s_0.Y = (double)uVar12;
            local_138.Translation.ZW.m128d_f64[0] = (double)uVar13;
            goto LAB_1479345ba;
          }
          if (param_2->RotationRule == KeepWorld) {
            if (this->bAbsoluteRotation == '\0') {
              this_01 = &this->RelativeRotationCache;
              pFVar32 = FRotationConversionCache::GetOrCreatePayload(this_01);
              auVar58._8_8_ =
                   -(ulonglong)((pFVar32->CachedQuat).W != local_138.Rotation.ZW.m128d_f64[1]);
              auVar58._0_8_ =
                   -(ulonglong)((pFVar32->CachedQuat).Z != local_138.Rotation.ZW.m128d_f64[0]);
              uVar35 = movmskpd((int)this_01,auVar58);
              auVar49._8_8_ =
                   -(ulonglong)((pFVar32->CachedQuat).Y != local_138.Rotation.XY.m128d_f64[1]);
              auVar49._0_8_ =
                   -(ulonglong)((pFVar32->CachedQuat).X != local_138.Rotation.XY.m128d_f64[0]);
              iVar38 = movmskpd(uVar37,auVar49);
              if ((uVar35 & 0x3fffffff) != 0 || iVar38 != 0) {
                dVar68 = local_138.Rotation.XY.m128d_f64[0] * local_138.Rotation.XY.m128d_f64[0] +
                         local_138.Rotation.ZW.m128d_f64[0] * local_138.Rotation.ZW.m128d_f64[0];
                dVar61 = local_138.Rotation.XY.m128d_f64[1] * local_138.Rotation.XY.m128d_f64[1] +
                         local_138.Rotation.ZW.m128d_f64[1] * local_138.Rotation.ZW.m128d_f64[1];
                auVar50._8_4_ = SUB84(dVar61,0);
                auVar50._0_8_ = dVar68;
                auVar50._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
                auVar51._0_8_ = auVar50._8_8_ + dVar68;
                auVar51._8_8_ = dVar68 + dVar61;
                auVar56 = sqrtpd(in_XMM4,auVar51);
                uVar43 = -(ulonglong)(__real_3e45798ee0000000 <= auVar51._0_8_);
                uVar42 = -(ulonglong)(__real_3e45798ee0000000 <= auVar51._8_8_);
                uVar35 = (uint)(uVar43 >> 0x20);
                uVar71 = (uint)(uVar42 >> 0x20);
                auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                auVar56);
                auVar59._0_4_ =
                     ~(uint)uVar43 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                auVar59._4_4_ =
                     ~uVar35 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
                auVar59._8_4_ =
                     ~(uint)uVar42 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                auVar59._12_4_ =
                     ~uVar71 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
                auVar69._0_8_ =
                     uVar43 & (ulonglong)(auVar45._0_8_ * local_138.Rotation.XY.m128d_f64[0]);
                uVar41 = uVar42 & (ulonglong)(auVar45._8_8_ * local_138.Rotation.XY.m128d_f64[1]);
                auVar69._8_4_ = (undefined4)uVar41;
                auVar69._12_4_ = (undefined4)(uVar41 >> 0x20);
                auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar56);
                auVar66._0_4_ =
                     ~(uint)uVar43 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
                auVar66._4_4_ =
                     ~uVar35 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
                auVar66._8_4_ =
                     ~(uint)uVar42 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                auVar66._12_4_ =
                     ~uVar71 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
                auVar60._0_8_ =
                     (ulonglong)(auVar56._0_8_ * local_138.Rotation.ZW.m128d_f64[0]) & uVar43;
                uVar42 = (ulonglong)(auVar56._8_8_ * local_138.Rotation.ZW.m128d_f64[1]) & uVar42;
                auVar60._8_4_ = (undefined4)uVar42;
                auVar60._12_4_ = (undefined4)(uVar42 >> 0x20);
                (pFVar32->CachedQuat).X = (double)SUB168(auVar69 | auVar59,0);
                (pFVar32->CachedQuat).Y = (double)SUB168(auVar69 | auVar59,8);
                (pFVar32->CachedQuat).Z = (double)SUB168(auVar66 | auVar60,0);
                (pFVar32->CachedQuat).W = (double)SUB168(auVar66 | auVar60,8);
                pTVar34 = UE::Math::TQuat<double>::Rotator(&pFVar32->CachedQuat,local_250);
                dVar68 = pTVar34->Yaw;
                (pFVar32->CachedRotator).Pitch = pTVar34->Pitch;
                (pFVar32->CachedRotator).Yaw = dVar68;
                (pFVar32->CachedRotator).Roll = pTVar34->Roll;
              }
              dVar68 = (pFVar32->CachedRotator).Roll;
              dVar61 = (pFVar32->CachedRotator).Pitch;
              dVar62 = (pFVar32->CachedRotator).Yaw;
            }
            else {
              pTVar34 = GetComponentRotation(this,&local_268);
              dVar68 = pTVar34->Roll;
              dVar61 = pTVar34->Pitch;
              dVar62 = pTVar34->Yaw;
            }
LAB_147934701:
            (this->RelativeRotation).Pitch = dVar61;
            (this->RelativeRotation).Yaw = dVar62;
            (this->RelativeRotation).Roll = dVar68;
          }
          else {
            dVar68 = UE::Math::TRotator<double>::ZeroRotator.Roll;
            dVar61 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            dVar62 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            if (param_2->RotationRule == SnapToTarget) goto LAB_147934701;
          }
          dVar61 = _UNK_150689688;
          dVar68 = __real_3ff0000000000000;
          if (param_2->ScaleRule == KeepWorld) {
            if (this->bAbsoluteScale == '\0') {
              (this->RelativeScale3D).field0_0x0._s_0.X = local_138.Scale3D.XY.m128d_f64[0];
              (this->RelativeScale3D).field0_0x0._s_0.Y = local_138.Scale3D.XY.m128d_f64[1];
            }
            else {
              dVar68 = (this->ComponentToWorld).Scale3D.XY.m128d_f64[1];
              local_138.Scale3D.ZW.m128d_f64[0] = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
              (this->RelativeScale3D).field0_0x0._s_0.X =
                   (this->ComponentToWorld).Scale3D.XY.m128d_f64[0];
              (this->RelativeScale3D).field0_0x0._s_0.Y = dVar68;
            }
            (this->RelativeScale3D).field0_0x0._s_0.Z = local_138.Scale3D.ZW.m128d_f64[0];
          }
          else if (param_2->ScaleRule == SnapToTarget) {
            (this->RelativeScale3D).field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
            (this->RelativeScale3D).field0_0x0._s_0.Y = dVar61;
            (this->RelativeScale3D).field0_0x0._s_0.Z = dVar68;
          }
          (**(code **)(((this->AttachParent).field0_0x0.DebugPtr)->_padding_ + 0x610))();
          UpdateComponentToWorld(this,None,TeleportPhysics);
          if (param_2->bWeldSimulatedBodies != false) {
            pUVar30 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
            iVar38 = (int)pUVar30->_padding_;
            if (((iVar38 <= *(int *)(this->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar38 * 8) ==
                 &pUVar30->_padding_)) && (this != (USceneComponent *)0x0)) {
              local_608 = 0;
              lVar31 = (**(code **)(this->_padding_ + 0x818))
                                 (this,0,CONCAT71((int7)((ulonglong)&pUVar30->_padding_ >> 8),1));
              if (lVar31 != 0) {
                (**(code **)(this->_padding_ + 0x858))
                          (this,(this->AttachParent).field0_0x0.DebugPtr,this->AttachSocketName);
              }
            }
          }
          if ((this->_padding_ & 1) != 0) {
            UpdateOverlaps(this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                           (TArrayView<FOverlapInfo_const_,int> *)0x0);
          }
          goto LAB_14793482b;
        }
        if (2 < (byte)LogSceneComponent._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_458,(UObject *)0x0);
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)local_638.DebugPtr,&local_468,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
          if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_468.Data.AllocatorInstance.Data);
          }
LAB_147933bd5:
          if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.Data.AllocatorInstance.Data);
          }
        }
      }
    }
LAB_147933bdf:
    bVar18 = false;
  }
  return bVar18;
}

// AttachToParent @ 147934840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::AttachToParent(USceneComponent *this)

{
  undefined1 *puVar1;
  USceneComponent *pUVar2;
  char cVar3;
  
  pUVar2 = (this->AttachParent).field0_0x0.DebugPtr;
  if (pUVar2 != (USceneComponent *)0x0) {
    cVar3 = (**(code **)(this->_padding_ + 0x508))
                      (this,pUVar2,&FAttachmentTransformRules::KeepRelativeTransform,
                       this->AttachSocketName);
    if (cVar3 == '\0') {
      (this->AttachParent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
      this->bShouldBeAttached = '\0';
      this->bShouldSnapLocationWhenAttached = '\0';
      this->bShouldSnapRotationWhenAttached = '\0';
      this->bShouldSnapScaleWhenAttached = '\0';
      (this->AttachSocketName).ComparisonIndex = 0;
      (this->AttachSocketName).Number = 0;
    }
  }
  return;
}

// BeginDestroy @ 147934bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::BeginDestroy(USceneComponent *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"PhysicsVolumeChangedDelegate");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::DelegateFName;
  bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelegateOwner->IsValidLowLevelFast(false)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                       ,0xd7,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->PhysicsVolumeChangedDelegate != (FPhysicsVolumeChanged)0x0) {
    FSparseDelegateStorage::Clear((UObject *)this,FVar2);
    this->PhysicsVolumeChangedDelegate = (FPhysicsVolumeChanged)0x0;
  }
  UActorComponent::BeginDestroy((UActorComponent *)this);
  return;
}

// BeginScopedMovementUpdate @ 147935220

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
USceneComponent::BeginScopedMovementUpdate(USceneComponent *this,FScopedMovementUpdate *param_1)

{
  int *piVar1;
  TArray<FScopedMovementUpdate_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScopedMovementUpdate *local_18 [2];
  
  if ((param_1->bIsGroupDeferedUpdate != '\0') &&
     (SceneComponentCVars::bEnableGroupedComponentMovement)) {
    this->bHasGroupedMoveThisFrame = '\x01';
  }
  pTVar2 = &this->ScopedMovementStack;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->ScopedMovementStack).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ScopedMovementStack).ArrayNum;
  piVar1 = &(this->ScopedMovementStack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ScopedMovementStack).ArrayNum = iVar6 + 1;
  *(FScopedMovementUpdate **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// CalcBoundingCylinder @ 147935ef0

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
USceneComponent::CalcBoundingCylinder(USceneComponent *this,float *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  dVar1 = (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).BoxExtent.field0_0x0._s_0.X;
  auVar3._0_8_ = dVar2 * dVar2;
  auVar3._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1 * dVar1 + auVar3._0_8_;
  auVar4 = sqrtpd(auVar3,auVar4);
  *param_1 = (float)auVar4._0_8_;
  *param_2 = (float)(this->Bounds).BoxExtent.field0_0x0._s_0.Z;
  return;
}

// CalcBounds @ 147935fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
USceneComponent::CalcBounds
          (USceneComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar1 = (param_1->Translation).XY.m128d_f64[0];
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  __return_storage_ptr__->SphereRadius = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = (double)uVar3;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = (double)uVar5;
  return __return_storage_ptr__;
}

// CalcNewComponentToWorld @ 147937860

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

TTransform<double> * __thiscall
USceneComponent::CalcNewComponentToWorld
          (USceneComponent *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,USceneComponent *param_2,FName param_3)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  TTransform<double> *pTVar11;
  undefined1 auStack_108 [32];
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 == (USceneComponent *)0x0) {
    param_2 = (this->AttachParent).field0_0x0.DebugPtr;
    param_3 = this->AttachSocketName;
    if (param_2 == (USceneComponent *)0x0) goto LAB_147937a13;
  }
  if (this->bAbsoluteLocation == '\0' &&
      (this->bAbsoluteRotation == '\0' && this->bAbsoluteScale == '\0')) {
    pTVar11 = (TTransform<double> *)
              (**(code **)(param_2->_padding_ + 0x520))(param_2,&local_88,param_3,0);
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
    UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,param_1,pTVar11);
    return __return_storage_ptr__;
  }
  if (param_2 != (USceneComponent *)0x0) {
    (**(code **)(param_2->_padding_ + 0x520))(param_2,&local_88,param_3,0);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_e8,param_1,&local_88);
    if (this->bAbsoluteLocation == '\0') {
    }
    else {
      local_e8.Translation.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(param_1->Translation).XY.m128d_f64;
      local_e8.Translation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 4);
      local_e8.Translation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Translation).XY.m128d_f64 + 1);
      local_e8.Translation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 0xc);
      local_e8.Translation.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(param_1->Translation).ZW.m128d_f64;
      local_e8.Translation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 4);
      local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Translation).ZW.m128d_f64 + 1);
      local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 0xc);
    }
    if (this->bAbsoluteRotation == '\0') {
    }
    else {
      local_e8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Rotation).XY.m128d_f64;
      local_e8.Rotation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 4);
      local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Rotation).XY.m128d_f64 + 1);
      local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 0xc);
      local_e8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Rotation).ZW.m128d_f64;
      local_e8.Rotation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 4);
      local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Rotation).ZW.m128d_f64 + 1);
      local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 0xc);
    }
    if (this->bAbsoluteScale == '\0') {
    }
    else {
      local_e8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Scale3D).XY.m128d_f64;
      local_e8.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
      local_e8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
      local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
      local_e8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Scale3D).ZW.m128d_f64;
      local_e8.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4);
      local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((param_1->Scale3D).ZW.m128d_f64 + 1);
      local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc);
    }
    *(undefined4 *)(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         local_e8.Rotation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) =
         local_e8.Rotation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) =
         local_e8.Rotation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) =
         local_e8.Rotation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         local_e8.Rotation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 4) =
         local_e8.Rotation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) =
         local_e8.Rotation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) =
         local_e8.Rotation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 =
         local_e8.Translation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) =
         local_e8.Translation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) =
         local_e8.Translation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) =
         local_e8.Translation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         local_e8.Translation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 4) =
         local_e8.Translation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Translation).ZW.m128d_f64 + 1) =
         local_e8.Translation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 0xc) =
         local_e8.Translation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         local_e8.Scale3D.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) =
         local_e8.Scale3D.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) =
         local_e8.Scale3D.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) =
         local_e8.Scale3D.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         local_e8.Scale3D.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
         local_e8.Scale3D.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
         local_e8.Scale3D.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
         local_e8.Scale3D.ZW.m128d_f64[1]._4_4_;
    return __return_storage_ptr__;
  }
LAB_147937a13:
  dVar10 = (param_1->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar10;
  return __return_storage_ptr__;
}

// CalcNewComponentToWorld_GeneralCase @ 147937a70

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

TTransform<double> * __thiscall
USceneComponent::CalcNewComponentToWorld_GeneralCase
          (USceneComponent *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,USceneComponent *param_2,FName param_3)

{
  undefined1 *puVar1;
  double dVar2;
  undefined1 auStack_108 [32];
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_2 == (USceneComponent *)0x0) {
    dVar2 = (param_1->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  }
  else {
    (**(code **)(param_2->_padding_ + 0x520))(param_2,&local_88,param_3,0);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_e8,param_1,&local_88);
    if (this->bAbsoluteLocation == '\0') {
    }
    else {
      local_e8.Translation.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(param_1->Translation).XY.m128d_f64;
      local_e8.Translation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 4);
      local_e8.Translation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Translation).XY.m128d_f64 + 1);
      local_e8.Translation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 0xc);
      local_e8.Translation.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(param_1->Translation).ZW.m128d_f64;
      local_e8.Translation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 4);
      local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Translation).ZW.m128d_f64 + 1);
      local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 0xc);
    }
    if (this->bAbsoluteRotation == '\0') {
    }
    else {
      local_e8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Rotation).XY.m128d_f64;
      local_e8.Rotation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 4);
      local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Rotation).XY.m128d_f64 + 1);
      local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 0xc);
      local_e8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Rotation).ZW.m128d_f64;
      local_e8.Rotation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 4);
      local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Rotation).ZW.m128d_f64 + 1);
      local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 0xc);
    }
    if (this->bAbsoluteScale == '\0') {
    }
    else {
      local_e8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Scale3D).XY.m128d_f64;
      local_e8.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
      local_e8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
      local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
      local_e8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Scale3D).ZW.m128d_f64;
      local_e8.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4);
      local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((param_1->Scale3D).ZW.m128d_f64 + 1);
      local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc);
    }
    *(undefined4 *)(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         local_e8.Rotation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 4) =
         local_e8.Rotation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) =
         local_e8.Rotation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) =
         local_e8.Rotation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         local_e8.Rotation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 4) =
         local_e8.Rotation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) =
         local_e8.Rotation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) =
         local_e8.Rotation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 =
         local_e8.Translation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) =
         local_e8.Translation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) =
         local_e8.Translation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) =
         local_e8.Translation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         local_e8.Translation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 4) =
         local_e8.Translation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Translation).ZW.m128d_f64 + 1) =
         local_e8.Translation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).ZW.m128d_f64 + 0xc) =
         local_e8.Translation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         local_e8.Scale3D.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) =
         local_e8.Scale3D.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) =
         local_e8.Scale3D.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) =
         local_e8.Scale3D.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         local_e8.Scale3D.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
         local_e8.Scale3D.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
         local_e8.Scale3D.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
         local_e8.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  return __return_storage_ptr__;
}

// CanEverRender @ 147938430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::CanEverRender(USceneComponent *this)

{
  AActor *this_00;
  bool bVar1;
  bool bVar2;
  UChildActorComponent *this_01;
  UWorld *this_02;
  
  this_00 = (AActor *)this->_padding_;
  if (((this_00 != (AActor *)0x0) &&
      (this_01 = AActor::GetParentComponent(this_00), this_01 != (UChildActorComponent *)0x0)) &&
     (bVar2 = CanEverRender((USceneComponent *)this_01), !bVar2)) {
    return false;
  }
  this_02 = (UWorld *)this->_padding_;
  if (((this_02 == (UWorld *)0x0) &&
      (this_02 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      this_02 == (UWorld *)0x0)) || (bVar2 = UWorld::UsesGameHiddenFlags(this_02), !bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((this_00 == (AActor *)0x0) || (!(bool)this_00->bHidden)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// CheckStaticMobilityAndWarn @ 147938c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall USceneComponent::CheckStaticMobilityAndWarn(USceneComponent *this,FText *param_1)

{
  bool bVar1;
  UWorld *this_00;
  FMessageLog *this_01;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FName local_res8;
  FName local_res18 [2];
  FString local_d8;
  FString local_c8;
  TSharedRef<FTokenizedMessage,1> local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FMessageLog local_48;
  
  if (((this->Mobility).Value != '\x02') && ((this->_padding_ & 1) != 0)) {
    this_00 = (UWorld *)this->_padding_;
    if ((this_00 == (UWorld *)0x0) &&
       (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       this_00 == (UWorld *)0x0)) {
      return false;
    }
    bVar1 = UWorld::IsGameWorld(this_00);
    if ((((bVar1) && (this_00->bIsWorldInitialized != '\0')) &&
        (bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this),
        !bVar1)) && ((this->_padding_ != 0 && ((*(byte *)(this->_padding_ + 0x5c) & 2) != 0)))) {
      if (SceneComponentCVars::bWarnSceneComponentStaticMobilityMove != false) {
        ::FName::FName(&local_res8,"PIE");
        this_01 = FMessageLog::FMessageLog(&local_48,&local_res8);
        pFVar2 = FText::FText(&local_88,param_1);
        local_res18[0] = (FName)this->_padding_;
        ::FName::ToString(local_res18,&local_c8);
        pFVar3 = FText::FromString(&local_78,&local_c8);
        if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
          ::FString::FString(&local_d8,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_d8,(UObject *)0x0);
        }
        pFVar4 = FText::FromString(&local_68,&local_d8);
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_98,L"SceneComponent",L"InvalidMustBeMovable",
                            L"Mobility of {0} : {1} has to be \'Movable\' if you\'d like to {2}. ");
        pFVar6 = FTextFormat::FTextFormat(&local_58,pFVar5,Default);
        pFVar2 = FText::Format<FText,FText,FText>(&local_a8,pFVar6,pFVar4,pFVar3,pFVar2);
        FMessageLog::Warning(this_01,&local_b8,pFVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        FMessageLog::~FMessageLog(&local_48);
      }
      return true;
    }
  }
  return false;
}

// ClearSkipUpdateOverlaps @ 147939e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::ClearSkipUpdateOverlaps(USceneComponent *this)

{
  while( true ) {
    if (SkipUpdateOverlapsOptimEnabled != 1) {
      return;
    }
    if (this->bSkipUpdateOverlaps == '\0') break;
    this->field_0x1a8 = this->field_0x1a8 & 0xfd;
    this = (this->AttachParent).field0_0x0.DebugPtr;
    if (this == (USceneComponent *)0x0) {
      return;
    }
  }
  return;
}

// ConvertAttachLocation @ 14793c0b0

void __cdecl
USceneComponent::ConvertAttachLocation
          (Type param_1,EAttachmentRule *param_2,EAttachmentRule *param_3,EAttachmentRule *param_4)

{
  if (param_1 == KeepRelativeOffset) {
    *param_2 = KeepRelative;
    *param_3 = KeepRelative;
    *param_4 = KeepRelative;
  }
  else {
    if (param_1 == KeepWorldPosition) {
      *param_2 = KeepWorld;
      *param_3 = KeepWorld;
      *param_4 = KeepWorld;
      return;
    }
    if (param_1 == SnapToTarget) {
      *param_2 = SnapToTarget;
      *param_3 = SnapToTarget;
      *param_4 = KeepWorld;
      return;
    }
    if (param_1 == SnapToTargetIncludingScale) {
      *param_2 = SnapToTarget;
      *param_3 = SnapToTarget;
      *param_4 = SnapToTarget;
      return;
    }
  }
  return;
}

// DestroyComponent @ 14793ece0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall USceneComponent::DestroyComponent(USceneComponent *this,bool param_1)

{
  TObjectPtr<USceneComponent>_u_0 *pTVar1;
  AActor *this_00;
  USceneComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  char cVar7;
  bool bVar8;
  FUObjectItem *pFVar9;
  UClass *pUVar10;
  TObjectPtr<USceneComponent>_u_0 this_01;
  TRotator<double> *pTVar11;
  int iVar12;
  int iVar13;
  TObjectPtr<USceneComponent>_u_0 *pTVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  longlong *plVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198;
  undefined1 local_197;
  ForAnyElementType local_190;
  int local_188;
  int local_184;
  undefined8 local_180;
  undefined8 local_178;
  USceneComponent *local_170;
  USceneComponent *local_168;
  TObjectPtr<USceneComponent>_u_0 local_160;
  TObjectPtr<USceneComponent>_u_0 local_158;
  double local_150;
  double dStack_148;
  double local_140;
  TRotator<double> local_138;
  TVector<double>_u_0 local_118 [2];
  double local_e8;
  TRotator<double> local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_197 = param_1;
  if ((param_1) && (this_00 = (AActor *)this->_padding_, this_00 != (AActor *)0x0)) {
    this_01.DebugPtr = (USceneComponent *)0x0;
    if (this == (this_00->RootComponent).field0_0x0.DebugPtr) {
      pTVar14 = (TObjectPtr<USceneComponent>_u_0 *)(this->AttachChildren).AllocatorInstance.Data;
      pTVar1 = pTVar14 + (this->AttachChildren).ArrayNum;
      for (; pTVar14 != pTVar1; pTVar14 = pTVar14 + 1) {
        pUVar2 = pTVar14->DebugPtr;
        if (((pUVar2 != (USceneComponent *)0x0) &&
            (cVar7 = (**(code **)(pUVar2->_padding_ + 0x120))(pUVar2), cVar7 == '\0')) &&
           ((AActor *)pUVar2->_padding_ == this_00)) goto LAB_14793ed97;
      }
      pTVar14 = (TObjectPtr<USceneComponent>_u_0 *)0x0;
LAB_14793ed97:
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(this_00->_padding_ + 0xc));
      if (pTVar14 == (TObjectPtr<USceneComponent>_u_0 *)0x0) {
        if (((pFVar9->field0_0x0).FlagsAndRefCount & 0x200000000000000U) == 0) {
          (**(code **)(this->_padding_ + 0x170))(this,0,this->_padding_);
          FVar5 = SceneComponentStatics::DefaultSceneRootVariableName;
          if (SceneComponentStatics::DefaultSceneRootVariableName == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this_00,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar10 = StaticClass();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_c8,pUVar10);
          FVar6 = SceneComponentStatics::DefaultSceneRootVariableName;
          local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
          local_c8._56_8_ = (UPackage *)0x0;
          SceneComponentStatics::DefaultSceneRootVariableName.ComparisonIndex =
               FVar5.ComparisonIndex.Value;
          SceneComponentStatics::DefaultSceneRootVariableName.Number = FVar5.Number;
          local_c8._16_4_ =
               SceneComponentStatics::DefaultSceneRootVariableName.ComparisonIndex.Value;
          local_c8._20_4_ = SceneComponentStatics::DefaultSceneRootVariableName.Number;
          local_c8._24_4_ = RF_Transactional;
          local_c8._40_8_ = (UObject *)0x0;
          local_c8[0x20] = false;
          SceneComponentStatics::DefaultSceneRootVariableName = FVar6;
          local_c8._8_8_ = this_00;
          this_01.DebugPtr =
               (USceneComponent *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
          if (local_c8._64_8_ != 0) {
            plVar18 = (longlong *)(local_c8 + 0x50);
            if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
              plVar18 = (longlong *)local_c8._104_8_;
            }
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
          ((this_01.DebugPtr)->Mobility).Value = (this->Mobility).Value;
          pTVar11 = GetComponentRotation(this,&local_e0);
          local_140 = (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
          local_150 = (this->ComponentToWorld).Translation.XY.m128d_f64[0];
          dStack_148 = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
          local_138.Pitch = pTVar11->Pitch;
          local_138.Yaw = pTVar11->Yaw;
          local_138.Roll = pTVar11->Roll;
          local_118[0]._0_8_ = local_150;
          local_118[0]._8_8_ = dStack_148;
          local_118[0]._16_8_ = local_140;
          local_e8 = local_140;
          SetWorldLocationAndRotation
                    (this_01.DebugPtr,(TVector<double> *)&local_118[0]._s_0,&local_138,false,
                     (FHitResult *)0x0,None);
          AActor::AddInstanceComponent(this_00,(UActorComponent *)this_01.DebugPtr);
          UActorComponent::RegisterComponent((UActorComponent *)this_01.DebugPtr);
        }
        AActor::SetRootComponent(this_00,this_01.DebugPtr);
      }
      else {
        this_01 = (TObjectPtr<USceneComponent>_u_0)pTVar14->DebugPtr;
        AActor::SetRootComponent(this_00,this_01.DebugPtr);
      }
    }
    else {
      pUVar2 = (this->AttachParent).field0_0x0.DebugPtr;
      if ((pUVar2 != (USceneComponent *)0x0) ||
         (local_170 = this,
         bVar8 = `USceneComponent::DestroyComponent'::__l21::<lambda_2>::operator()(&local_170),
         bVar8)) {
        pFVar3 = (pUVar2->AttachChildren).AllocatorInstance.Data;
        for (pFVar16 = pFVar3; pFVar16 != pFVar3 + (longlong)(pUVar2->AttachChildren).ArrayNum * 8;
            pFVar16 = pFVar16 + 8) {
          if (*(USceneComponent **)pFVar16 == this) {
            iVar12 = (int)((longlong)pFVar16 - (longlong)pFVar3 >> 3);
            if (iVar12 == -1) goto LAB_14793ef59;
            goto LAB_14793ef7f;
          }
        }
        iVar12 = -1;
LAB_14793ef59:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                           ,0x575,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_14793ef7f:
        (**(code **)(this->_padding_ + 0x518))(this);
        iVar13 = (this->AttachChildren).ArrayNum;
        this_01.DebugPtr = (USceneComponent *)0x0;
        if (0 < iVar13) {
          pFVar16 = (this->AttachChildren).AllocatorInstance.Data;
          pFVar3 = pFVar16 + (longlong)iVar13 * 8;
          for (; pFVar16 != pFVar3; pFVar16 = pFVar16 + 8) {
            if ((*(longlong **)pFVar16 != (longlong *)0x0) &&
               (cVar7 = (**(code **)(**(longlong **)pFVar16 + 0x120))(), cVar7 == '\0'))
            goto LAB_14793f073;
          }
          if (((this->AttachChildren).ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(longlong *)(this->AttachChildren).AllocatorInstance.Data != 0) ||
             (local_168 = this,
             bVar8 = `USceneComponent::DestroyComponent'::__l39::<lambda_4>::operator()(&local_168),
             bVar8)) {
            if (((this->AttachChildren).ArrayNum < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar16 = (this->AttachChildren).AllocatorInstance.Data;
LAB_14793f073:
            this_01.DebugPtr = *(USceneComponent **)pFVar16;
            if (this_01.DebugPtr != (USceneComponent *)0x0) {
              local_180 = 0;
              (**(code **)((this_01.DebugPtr)->_padding_ + 0x508))
                        (this_01.DebugPtr,pUVar2,&FAttachmentTransformRules::KeepWorldTransform);
              local_160.DebugPtr = this_01.DebugPtr;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
              }
              TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_>::Remove
                        (&pUVar2->AttachChildren,(TObjectPtr<USceneComponent> *)&local_160.ObjectPtr
                        );
              iVar13 = (pUVar2->AttachChildren).ArrayNum;
              if (iVar12 < iVar13) {
                iVar13 = iVar12;
              }
              iVar12 = 0;
              if (0 < iVar13) {
                iVar12 = iVar13;
              }
              local_158.DebugPtr = this_01.DebugPtr;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
              }
              TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_>::Insert
                        (&pUVar2->AttachChildren,(TObjectPtr<USceneComponent> *)&local_158.ObjectPtr
                         ,iVar12);
            }
          }
        }
      }
    }
    local_188 = (this->AttachChildren).ArrayNum;
    lVar15 = (longlong)local_188;
    pFVar3 = (this->AttachChildren).AllocatorInstance.Data;
    local_190.Data = (FScriptContainerElement *)0x0;
    if (local_188 == 0) {
      local_184 = 0;
      iVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_188,0,&local_190,local_188,&local_184);
      memcpy(local_190.Data,pFVar3,lVar15 << 3);
      iVar12 = local_188;
    }
    pFVar3 = local_190.Data + (longlong)iVar12 * 8;
    FVar17.Data = local_190.Data;
    iVar13 = iVar12;
    while( true ) {
      if (iVar13 != iVar12) {
        local_198 = 0;
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_198);
      }
      param_1 = (bool)local_197;
      if (FVar17.Data == pFVar3) break;
      pUVar2 = *(USceneComponent **)FVar17.Data;
      if (pUVar2 == (USceneComponent *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8868271983431776863>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                           ,0x5a1,"Child");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        (**(code **)(pUVar2->_padding_ + 0x518))(pUVar2);
        if (pUVar2 != this_01.DebugPtr) {
          local_178 = 0;
          (**(code **)(pUVar2->_padding_ + 0x508))
                    (pUVar2,this_01.DebugPtr,&FAttachmentTransformRules::KeepWorldTransform,0);
        }
      }
      FVar17.Data = FVar17.Data + 8;
      iVar13 = local_188;
    }
    if (local_190.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data);
    }
  }
  UActorComponent::DestroyComponent((UActorComponent *)this,param_1);
  return;
}

// DetachFromComponent @ 14793f6e0

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
USceneComponent::DetachFromComponent(USceneComponent *this,FDetachmentTransformRules *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  UClass *pUVar6;
  USceneComponent *pUVar7;
  TRotator<double> *pTVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  longlong local_res8;
  TObjectPtr<USceneComponent>_u_0 local_res18;
  TRotator<double> local_28;
  
  if ((this->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
    return;
  }
  local_res8 = this->_padding_;
  pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  iVar4 = (int)pUVar6->_padding_;
  if (((iVar4 <= *(int *)(this->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
       &pUVar6->_padding_)) && (this != (USceneComponent *)0x0)) {
    (**(code **)(this->_padding_ + 0x860))(this);
  }
  if ((local_res8 == 0) || (*(char *)(local_res8 + 0x168) != '\x03')) {
    if (((char)this->_padding_ < '\0') ||
       (pUVar7 = (this->AttachParent).field0_0x0.DebugPtr, (char)pUVar7->_padding_ < '\0'))
    goto LAB_14793f7d1;
  }
  else {
    pUVar7 = (this->AttachParent).field0_0x0.DebugPtr;
  }
  if ((this->_padding_ & 1) != 0) {
    pFVar9 = (pUVar7->AttachChildren).AllocatorInstance.Data;
    pFVar2 = pFVar9 + (longlong)(pUVar7->AttachChildren).ArrayNum * 8;
    for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 8) {
      if (*(USceneComponent **)pFVar9 == (USceneComponent *)0x0) {
        bVar10 = this == (USceneComponent *)0x0;
      }
      else {
        bVar10 = *(USceneComponent **)pFVar9 == this;
      }
      if (bVar10) goto LAB_14793f7d1;
    }
    local_28.Yaw = (double)&local_res8;
    local_28.Pitch = (double)this;
    `USceneComponent::DetachFromComponent'::__l11::<lambda_1>::operator()(&local_28);
  }
LAB_14793f7d1:
  pUVar7 = (this->AttachParent).field0_0x0.DebugPtr;
  FTickFunction::RemovePrerequisite
            ((FTickFunction *)&this->_padding_,(UObject *)pUVar7,(FTickFunction *)&pUVar7->_padding_
            );
  pUVar7 = (this->AttachParent).field0_0x0.DebugPtr;
  local_res18.DebugPtr = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_>::Remove
            (&pUVar7->AttachChildren,(TObjectPtr<USceneComponent> *)&local_res18.ObjectPtr);
  pUVar7 = (this->AttachParent).field0_0x0.DebugPtr;
  local_res18.DebugPtr = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_>::Remove
            (&pUVar7->ClientAttachedChildren,(TObjectPtr<USceneComponent> *)&local_res18.ObjectPtr);
  (**(code **)(((this->AttachParent).field0_0x0.DebugPtr)->_padding_ + 0x618))();
  (this->AttachParent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  this->bShouldBeAttached = '\0';
  this->bShouldSnapLocationWhenAttached = '\0';
  this->bShouldSnapRotationWhenAttached = '\0';
  this->bShouldSnapScaleWhenAttached = '\0';
  (this->AttachSocketName).ComparisonIndex = 0;
  (this->AttachSocketName).Number = 0;
  local_res18.DebugPtr = (USceneComponent *)0x0;
  (**(code **)(this->_padding_ + 0x590))(this);
  if (param_1->LocationRule == KeepWorld) {
    dVar5 = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
    dVar3 = (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
    (this->RelativeLocation).field0_0x0._s_0.X =
         (this->ComponentToWorld).Translation.XY.m128d_f64[0];
    (this->RelativeLocation).field0_0x0._s_0.Y = dVar5;
    (this->RelativeLocation).field0_0x0._s_0.Z = dVar3;
  }
  if (param_1->RotationRule == KeepWorld) {
    pTVar8 = GetComponentRotation(this,&local_28);
    dVar5 = pTVar8->Yaw;
    dVar3 = pTVar8->Roll;
    (this->RelativeRotation).Pitch = pTVar8->Pitch;
    (this->RelativeRotation).Yaw = dVar5;
    (this->RelativeRotation).Roll = dVar3;
  }
  if (param_1->ScaleRule == KeepWorld) {
    dVar5 = (this->ComponentToWorld).Scale3D.XY.m128d_f64[1];
    dVar3 = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
    (this->RelativeScale3D).field0_0x0._s_0.X = (this->ComponentToWorld).Scale3D.XY.m128d_f64[0];
    (this->RelativeScale3D).field0_0x0._s_0.Y = dVar5;
    (this->RelativeScale3D).field0_0x0._s_0.Z = dVar3;
  }
  UpdateComponentToWorld(this,None,None);
  if (((this->_padding_ & 1) != 0) && (this->bDisableDetachmentUpdateOverlaps == '\0')) {
    UpdateOverlaps(this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                   (TArrayView<FOverlapInfo_const_,int> *)0x0);
  }
  return;
}

// DetachFromParent @ 14793f950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::DetachFromParent(USceneComponent *this,bool param_1,bool param_2)

{
  undefined2 local_res10;
  undefined1 local_res12;
  undefined1 local_res13;
  
  local_res10 = 0;
  if (param_1) {
    local_res10 = 0x101;
  }
  local_res12 = param_1;
  local_res13 = param_2;
  (**(code **)(this->_padding_ + 0x518))(this,&local_res10);
  return;
}

// DoesSocketExist @ 147940b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::DoesSocketExist(USceneComponent *this,FName param_1)

{
  return false;
}

// EndPlay @ 147940d80

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

void __thiscall USceneComponent::EndPlay(USceneComponent *this,Type param_1)

{
  ForElementType<USceneComponent_*> FVar1;
  USceneComponent *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  ForElementType<USceneComponent_*> FVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  UObjectBaseUtility **local_138;
  ForElementType<USceneComponent_*> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  UObjectBaseUtility *local_100;
  ForElementType<USceneComponent_*> local_f8;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  if ((param_1 == RemovedFromWorld) && ((this->_padding_ & 0x8000000) == 0)) {
    pUVar6 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)this);
    this_00 = (this->AttachParent).field0_0x0.DebugPtr;
    if ((this_00 != (USceneComponent *)0x0) &&
       (pUVar7 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)this_00),
       pUVar7 != pUVar6)) {
      (**(code **)(this->_padding_ + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    }
    uVar8 = 0;
    local_f8.SecondaryData = (ForElementType<USceneComponent_*>)0x0;
    local_30 = 0;
    local_2c = 0x18;
    if (0 < (this->AttachChildren).ArrayNum) {
      lVar10 = 0;
      do {
        iVar5 = (this->AttachChildren).ArrayNum;
        uVar4 = 0;
        if ((int)uVar8 < iVar5) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_138 = (UObjectBaseUtility **)(longlong)(int)uVar8;
          local_130 = (ForElementType<USceneComponent_*>)(longlong)iVar5;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        local_100 = *(UObjectBaseUtility **)((this->AttachChildren).AllocatorInstance.Data + lVar10)
        ;
        if ((local_100 != (UObjectBaseUtility *)0x0) &&
           (pUVar7 = UObjectBaseUtility::GetOutermostObject(local_100), pUVar7 != pUVar6)) {
          FVar9 = (ForElementType<USceneComponent_*>)&local_f8;
          if (local_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
            FVar9 = local_f8.SecondaryData;
          }
          if ((ulonglong)FVar9 <= &local_100) {
            FVar9 = (ForElementType<USceneComponent_*>)&local_f8;
            if (local_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
              FVar9 = local_f8.SecondaryData;
            }
            if (&local_100 < (UObjectBaseUtility **)((longlong)FVar9 + (longlong)local_2c * 8)) {
              local_120 = (longlong)local_30;
              local_118 = 8;
              local_138 = &local_100;
              local_130 = (ForElementType<USceneComponent_*>)&local_f8;
              if (local_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
                local_130 = local_f8.SecondaryData;
              }
              local_128 = (longlong)local_2c;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
          }
          iVar5 = local_30;
          if (local_30 == local_2c) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                              (0x808,&local_f8,&local_2c);
          }
          local_30 = iVar5 + 1;
          FVar9 = (ForElementType<USceneComponent_*>)&local_f8;
          if (local_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
            FVar9 = local_f8.SecondaryData;
          }
          *(UObjectBaseUtility **)((longlong)FVar9 + (longlong)iVar5 * 8) = local_100;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar8 < (this->AttachChildren).ArrayNum);
    }
    iVar5 = local_30;
    FVar9 = (ForElementType<USceneComponent_*>)&local_f8;
    if (local_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FVar9 = local_f8.SecondaryData;
    }
    FVar1 = (ForElementType<USceneComponent_*>)((longlong)FVar9 + (longlong)local_30 * 8);
    while( true ) {
      if (local_30 != iVar5) {
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_108);
      }
      if (FVar9 == FVar1) break;
      (**(code **)(**(longlong **)FVar9 + 0x518))
                (*(longlong **)FVar9,&FDetachmentTransformRules::KeepWorldTransform);
      FVar9 = (ForElementType<USceneComponent_*>)((longlong)FVar9 + 8);
    }
    if (local_f8.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FMemory::Free((void *)local_f8.SecondaryData);
    }
  }
  return;
}

// EndScopedMovementUpdate @ 1479410a0

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
USceneComponent::EndScopedMovementUpdate(USceneComponent *this,FScopedMovementUpdate *param_1)

{
  int iVar1;
  FName FVar2;
  FScopedMovementUpdate *this_00;
  AActor *pAVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ECollisionResponse EVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_EndScopedMovementUpdate> FVar11;
  UWorld *this_01;
  UClass *pUVar12;
  UPrimitiveComponent *this_02;
  USceneComponent *pUVar13;
  int iVar14;
  ForElementType<FHitResult> FVar15;
  uint uVar16;
  uint uVar17;
  TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 *pTVar18;
  ForElementType<FHitResult> FVar19;
  FNameEntryId FVar20;
  undefined1 auStackY_408 [32];
  FName local_3a8;
  undefined1 local_398 [4];
  FColor_u_0 local_394;
  FName local_390;
  TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 local_388;
  FName local_378;
  TArrayView<FOverlapInfo_const_,int> local_370;
  TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> local_360;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_408;
  FVar11 = StatPtr_STAT_EndScopedMovementUpdate;
  if (StatPtr_STAT_EndScopedMovementUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_EndScopedMovementUpdate>)0x0) {
    pFVar10 = ::FName::FName(&local_378,"STAT_EndScopedMovementUpdate");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_EndScopedMovementUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EndScopedMovementUpdate,*pFVar10,
                        L"EndScopedMovementUpdate Time","STATGROUP_Game","STATCAT_Advanced",L"Game",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_3a8.ComparisonIndex.Value = 0;
  local_3a8.Number = 0;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  FVar2 = *(FName *)FVar11;
  FVar20 = FVar2.ComparisonIndex.Value;
  uVar17 = FVar2.Number;
  if ((FVar20.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_394.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_394._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_390.ComparisonIndex.Value = FVar20.Value;
        local_390.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_390,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                   ,0x4d7);
        bVar6 = true;
        bVar5 = true;
      }
    }
    bVar7 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_388._0_4_ = FVar20.Value;
      local_388._4_4_ = uVar17;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar7 = true;
      local_3a8 = FVar2;
    }
  }
  if ((this->ScopedMovementStack).ArrayNum == 0) goto LAB_14794150b;
  if (((this->ScopedMovementStack).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = *(FScopedMovementUpdate **)
             ((this->ScopedMovementStack).AllocatorInstance.Data +
             (longlong)(this->ScopedMovementStack).ArrayNum * 8 + -8);
  iVar1 = (this->ScopedMovementStack).ArrayNum;
  iVar14 = iVar1 + -1;
  (this->ScopedMovementStack).ArrayNum = iVar14;
  if (iVar14 != 0) {
    uVar17 = iVar1 - 2;
    uVar16 = 0;
    if ((int)uVar17 < iVar14) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FScopedMovementUpdate::OnInnerScopeComplete
              (*(FScopedMovementUpdate **)
                ((this->ScopedMovementStack).AllocatorInstance.Data +
                (longlong)(this->ScopedMovementStack).ArrayNum * 8 + -8),this_00);
    goto LAB_14794150b;
  }
  bVar8 = FScopedMovementUpdate::IsTransformDirty(this_00);
  if ((this_00->bIsGroupDeferedUpdate != '\0') &&
     (SceneComponentCVars::bEnableGroupedComponentMovement != false)) {
    if ((this->bHasGroupedMoveThisFrame == '\0') &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8868271983431777042>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                           ,0x4ee,"bHasGroupedMoveThisFrame == true"), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (UWorld *)this->_padding_;
    if (((this_01 == (UWorld *)0x0) &&
        (this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
        this_01 == (UWorld *)0x0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                           ,0x4f3,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UWorld::PushComponentGroupMove(this_01,this_00);
    goto LAB_14794150b;
  }
  if (bVar8) {
    PropagateTransformUpdate(this,true,None,this_00->TeleportType);
LAB_147941330:
    pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       (pTVar18 = (TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 *)this,
       (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar12->_padding_)) {
      pTVar18 = (TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 *)0x0;
    }
    if (pTVar18 == (TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 *)0x0) {
      UpdateOverlaps(this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                     (TArrayView<FOverlapInfo_const_,int> *)0x0);
    }
    else {
      local_360.AllocatorInstance.SecondaryData = (ForElementType<FOverlapInfo>)0x0;
      local_360.ArrayNum = 0;
      local_360.ArrayMax = 3;
      TArrayView<FOverlapInfo_const_,int>::
      TArrayView<FOverlapInfo_const_,int><TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>_>
                (&local_370,&this_00->PendingOverlaps);
      FScopedMovementUpdate::GetOverlapsAtEnd
                (this_00,(TOptional<TArrayView<FOverlapInfo_const_,int>_> *)&local_388.TypedValue,
                 (UPrimitiveComponent *)&pTVar18->TypedValue,&local_360,bVar8);
      pTVar18 = &local_388;
      if (local_388.TypedValue.ArrayNum == -1) {
        pTVar18 = (TOptional<TArrayView<FOverlapInfo_const_,int>_>_u_0 *)0x0;
      }
      UpdateOverlaps(this,&local_370,true,&pTVar18->TypedValue);
      if (local_360.AllocatorInstance.SecondaryData != (ForElementType<FOverlapInfo>)0x0) {
        FMemory::Free((void *)local_360.AllocatorInstance.SecondaryData);
      }
    }
  }
  else if (this_00->bHasMoved != '\0') goto LAB_147941330;
  if ((0 < (this_00->BlockingHits).ArrayNum) &&
     (pAVar3 = (AActor *)this->_padding_, pAVar3 != (AActor *)0x0)) {
    this_02 = CastChecked<UPrimitiveComponent,USceneComponent>(this);
    FVar19 = (this_00->BlockingHits).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<FHitResult>)&this_00->BlockingHits;
    iVar1 = (this_00->BlockingHits).ArrayNum;
    if (FVar19 != (ForElementType<FHitResult>)0x0) {
      FVar15 = FVar19;
    }
    FVar19 = (ForElementType<FHitResult>)((longlong)iVar1 * 0x100 + (longlong)FVar15);
    while( true ) {
      if ((this_00->BlockingHits).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_398);
      }
      if (((FVar15 == FVar19) || (this_02 == (UPrimitiveComponent *)0x0)) ||
         ((*(uint *)&this_02->field_0x8 >> 0x1e & 1) != 0)) break;
      pUVar13 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar15 + 0xd8));
      EVar9 = GetCollisionResponseToComponent((USceneComponent *)this_02,pUVar13);
      if (EVar9 == ECR_Block) {
        UPrimitiveComponent::DispatchBlockingHit(this_02,pAVar3,(FHitResult *)FVar15);
      }
      FVar15 = (ForElementType<FHitResult>)((longlong)FVar15 + 0x100);
    }
  }
LAB_14794150b:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(local_3a8,CycleScopeEnd);
  }
  return;
}

// GetActorPositionForRenderer @ 147945230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
USceneComponent::GetActorPositionForRenderer
          (USceneComponent *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  USceneComponent *pUVar2;
  USceneComponent *pUVar3;
  double local_28;
  double dStack_20;
  double local_18;
  
  pUVar3 = (this->AttachParent).field0_0x0.DebugPtr;
  while ((pUVar2 = pUVar3, pUVar2 != (USceneComponent *)0x0 &&
         (pUVar2->bIsNotRenderAttachmentRoot == '\0'))) {
    this = pUVar2;
    pUVar3 = (pUVar2->AttachParent).field0_0x0.DebugPtr;
  }
  if (this->_padding_ == 0) {
    local_18 = 0.0;
    local_28 = 0.0;
    dStack_20 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
    if (lVar1 == 0) {
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_28 = *(double *)(lVar1 + 0x210);
      dStack_20 = *(double *)(lVar1 + 0x218);
      local_18 = *(double *)(lVar1 + 0x220);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetAllSocketNames @ 147945350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
USceneComponent::GetAllSocketNames
          (USceneComponent *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_28;
  ulonglong local_20;
  
  local_28 = (FScriptContainerElement *)0x0;
  local_20 = 0;
  (**(code **)(this->_padding_ + 0x550))(this,&local_28);
  uVar10 = local_20 & 0xffffffff;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((int)local_20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  if (0 < (int)local_20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_20,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    uVar10 = local_20 & 0xffffffff;
  }
  iVar9 = (int)uVar10;
  pFVar2 = local_28 + (longlong)iVar9 * 0xc;
  pFVar11 = local_28;
  while( true ) {
    if ((int)uVar10 != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FComponentSocketDescription,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar2) break;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    uVar4 = *(undefined8 *)pFVar11;
    pFVar11 = pFVar11 + 0xc;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = uVar4;
    uVar10 = local_20 & 0xffffffff;
  }
  if (local_28 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetAttachParentActor @ 147945610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall USceneComponent::GetAttachParentActor(USceneComponent *this)

{
  USceneComponent *pUVar1;
  
  pUVar1 = (this->AttachParent).field0_0x0.DebugPtr;
  if (pUVar1 != (USceneComponent *)0x0) {
    return (AActor *)pUVar1->_padding_;
  }
  return (AActor *)0x0;
}

// GetAttachmentRoot @ 147945630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall USceneComponent::GetAttachmentRoot(USceneComponent *this)

{
  USceneComponent *pUVar1;
  USceneComponent *pUVar2;
  
  pUVar2 = this;
  while (pUVar1 = this, pUVar1 != (USceneComponent *)0x0) {
    pUVar2 = pUVar1;
    this = (pUVar1->AttachParent).field0_0x0.DebugPtr;
  }
  return pUVar2;
}

// GetAttachmentRootActor @ 147945660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall USceneComponent::GetAttachmentRootActor(USceneComponent *this)

{
  USceneComponent *pUVar1;
  
  if (this == (USceneComponent *)0x0) {
    return (AActor *)0x0;
  }
  do {
    pUVar1 = this;
    this = (pUVar1->AttachParent).field0_0x0.DebugPtr;
  } while (this != (USceneComponent *)0x0);
  return (AActor *)pUVar1->_padding_;
}

// GetChildComponent @ 147947750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall USceneComponent::GetChildComponent(USceneComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  USceneComponent *pUVar3;
  
  if (param_1 < 0) {
    if (4 < (byte)LogBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
      return (USceneComponent *)0x0;
    }
  }
  else {
    if (param_1 < (this->AttachChildren).ArrayNum) {
      if (param_1 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (USceneComponent *)(*pcVar1)();
          return pUVar3;
        }
      }
      return *(USceneComponent **)
              ((this->AttachChildren).AllocatorInstance.Data + (longlong)param_1 * 8);
    }
    if (4 < (byte)LogBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
    }
  }
  return (USceneComponent *)0x0;
}

// GetChildrenComponents @ 147947820

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
USceneComponent::GetChildrenComponents
          (USceneComponent *this,bool param_1,
          TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  longlong local_28 [2];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if (param_1) {
    AppendDescendants(this,param_2);
    return;
  }
  uVar3 = (this->AttachChildren).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  pFVar9 = (this->AttachChildren).AllocatorInstance.Data;
  iVar4 = (this->AttachChildren).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->AttachChildren).ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<USceneComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar9 == pFVar2) break;
    local_28[0] = *(longlong *)pFVar9;
    if (local_28[0] != 0) {
      pFVar5 = (param_2->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)*piVar1 * 8)) {
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
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar8 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_28[0];
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// GetCollisionEnabled @ 147947fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall USceneComponent::GetCollisionEnabled(USceneComponent *this)

{
  return NoCollision;
}

// GetCollisionObjectType @ 147947ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ECollisionChannel __thiscall USceneComponent::GetCollisionObjectType(USceneComponent *this)

{
  return ECC_WorldDynamic;
}

// GetCollisionResponseToChannel @ 147948000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ECollisionResponse __thiscall
USceneComponent::GetCollisionResponseToChannel(USceneComponent *this,ECollisionChannel param_1)

{
  return ECR_Ignore;
}

// GetCollisionResponseToChannels @ 147948010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCollisionResponseContainer * __thiscall
USceneComponent::GetCollisionResponseToChannels(USceneComponent *this)

{
  return &FCollisionResponseContainer::DefaultResponseContainer;
}

// GetCollisionResponseToComponent @ 147948020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ECollisionResponse __thiscall
USceneComponent::GetCollisionResponseToComponent(USceneComponent *this,USceneComponent *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ECollisionResponse EVar4;
  ECollisionResponse EVar5;
  
  if (param_1 != (USceneComponent *)0x0) {
    iVar1 = (**(code **)(this->_padding_ + 0x5e0))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(param_1->_padding_ + 0x5e0))(param_1);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(this->_padding_ + 0x5f0))(this);
        uVar3 = (**(code **)(param_1->_padding_ + 0x5f0))(param_1);
        EVar4 = (**(code **)(this->_padding_ + 0x5e8))(this,uVar3);
        EVar5 = (**(code **)(param_1->_padding_ + 0x5e8))(param_1,uVar2);
        if ((int)EVar4 < (int)EVar5) {
          EVar5 = EVar4;
        }
        return EVar5;
      }
    }
  }
  return ECR_Ignore;
}

// GetComponentInstanceData @ 1479480d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TStructOnScope<FActorComponentInstanceData> * __thiscall
USceneComponent::GetComponentInstanceData
          (USceneComponent *this,TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__
          )

{
  UScriptStruct *pUVar1;
  uint uVar2;
  UPackage *pUVar3;
  FSceneComponentInstanceData *this_00;
  int iVar4;
  uint uVar5;
  UScriptStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FSceneComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSceneComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSceneComponentInstanceData,(UObject *)pUVar3,
                         L"SceneComponentInstanceData");
    if (Z_Registration_Info_UScriptStruct_FSceneComponentInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      return __return_storage_ptr__;
    }
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FSceneComponentInstanceData.OuterSingleton;
  local_res8 = Z_Registration_Info_UScriptStruct_FSceneComponentInstanceData.OuterSingleton;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable
              ((UObject *)
               Z_Registration_Info_UScriptStruct_FSceneComponentInstanceData.OuterSingleton);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
  iVar4 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
  uVar5 = (int)pUVar1->_padding_ + -1 + iVar4 & ~(iVar4 - 1U);
  uVar2 = 1;
  if (uVar5 != 0) {
    uVar2 = uVar5;
  }
  this_00 = FMemory::Malloc((longlong)(int)uVar2,0);
  *(FSceneComponentInstanceData **)&__return_storage_ptr__->field_0x10 = this_00;
  FSceneComponentInstanceData::FSceneComponentInstanceData(this_00,this);
  __return_storage_ptr__->field_0x20 = 1;
  return __return_storage_ptr__;
}

// GetComponentVelocity @ 1479481b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
USceneComponent::GetComponentVelocity(USceneComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ComponentVelocity).field0_0x0._s_0.Y;
  dVar1 = (this->ComponentVelocity).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ComponentVelocity).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetDefaultSceneRootVariableName @ 147948a70

FName __cdecl USceneComponent::GetDefaultSceneRootVariableName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = SceneComponentStatics::DefaultSceneRootVariableName;
  return in_RCX;
}

// GetForwardVector @ 1479491b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
USceneComponent::GetForwardVector(USceneComponent *this,TVector<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar1 = *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.ZW.m128d_f64;
  dVar5 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  auVar6 = *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.XY.m128d_f64;
  dVar16 = __xmm_00000000000000003ff0000000000000._8_8_;
  dVar4 = auVar1._0_8_;
  auVar7 = blendpd(auVar6,auVar1,2);
  auVar14._0_8_ =
       dVar16 * auVar6._0_8_ - auVar6._8_8_ * (double)__xmm_00000000000000003ff0000000000000;
  auVar14._8_8_ = auVar6._8_8_ * 0.0 - dVar4 * dVar16;
  auVar6 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
  auVar9._0_8_ = auVar6._0_8_ * dVar4 - auVar7._0_8_ * 0.0;
  auVar9._8_8_ = auVar6._8_8_ * auVar1._8_8_ - auVar7._8_8_ * 0.0;
  auVar6 = *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.XY.m128d_f64;
  auVar7 = blendpd(auVar14,auVar9,2);
  dVar2 = auVar14._8_8_ + auVar14._8_8_;
  dVar3 = auVar9._0_8_ + auVar9._0_8_;
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar15._0_8_ = auVar7._0_8_ + auVar7._0_8_;
  auVar15._8_8_ = auVar7._8_8_ + auVar7._8_8_;
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = uVar13;
  auVar8._8_4_ = SUB84(dVar3,0);
  auVar8._0_8_ = dVar2;
  auVar8._12_4_ = uVar13;
  auVar9 = blendpd(auVar8,auVar15,2);
  auVar12._0_8_ = auVar11._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar2;
  auVar12._8_8_ = auVar15._0_8_ * auVar6._8_8_ - dVar4 * dVar3;
  auVar7._8_4_ = SUB84(auVar12._8_8_,0);
  auVar7._0_8_ = auVar12._0_8_;
  auVar7._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
  auVar6 = blendpd(auVar6,auVar1,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar4 - auVar6._0_8_ * auVar15._0_8_;
  auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar6._8_8_ * auVar15._8_8_;
  auVar6 = blendpd(auVar12,auVar10,2);
  dVar4 = dVar3 * dVar5 + dVar16 + auVar10._0_8_;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar2 * dVar5 + (double)__xmm_00000000000000003ff0000000000000 + auVar7._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar15._0_8_ * dVar5 + auVar6._0_8_;
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 147949670

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
USceneComponent::GetLifetimeReplicatedProps
          (USceneComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepPropertyDescriptor local_48;
  FDoRepLifetimeParams local_38;
  FDoRepLifetimeParams local_20;
  
  UActorComponent::GetLifetimeReplicatedProps((UActorComponent *)this,param_1);
  local_38.bIsPushBased = true;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_20._9_7_ = local_38._9_7_;
  local_20.bIsPushBased = true;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_20.Condition = COND_None;
  local_20.RepNotifyCondition = REPNOTIFY_Always;
  local_20.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_48.PropertyName = L"bAbsoluteLocation";
  local_48.RepIndex = 8;
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 9;
  local_48.PropertyName = L"bAbsoluteRotation";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 10;
  local_48.PropertyName = L"bAbsoluteScale";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 0xb;
  local_48.PropertyName = L"bVisible";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 0xc;
  local_48.PropertyName = L"bShouldBeAttached";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 0xd;
  local_48.PropertyName = L"bShouldSnapLocationWhenAttached";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 0xe;
  local_48.PropertyName = L"bShouldSnapRotationWhenAttached";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 0xf;
  local_48.PropertyName = L"bShouldSnapScaleWhenAttached";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 2;
  local_48.PropertyName = L"AttachParent";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 4;
  local_48.PropertyName = L"AttachChildren";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 3;
  local_48.PropertyName = L"AttachSocketName";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 5;
  local_48.PropertyName = L"RelativeLocation";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_20);
  local_48.RepIndex = 6;
  local_48.PropertyName = L"RelativeRotation";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 7;
  local_48.PropertyName = L"RelativeScale3D";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  local_48.RepIndex = 0x10;
  local_48.PropertyName = L"Mobility";
  local_48.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_38);
  return;
}

// GetLocalBounds @ 147949ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
USceneComponent::GetLocalBounds
          (USceneComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  undefined1 uVar1;
  USceneComponent *pUVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  TTransform<double> local_e8;
  TMatrix<double> local_88;
  
  uVar1 = this->field_0x1a9;
  if (this->bComputeFastLocalBounds == '\0') {
    if (((GLocalBoundsUseAttachParentBound) && (this->bUseAttachParentBound != '\0')) &&
       (pUVar2 = (this->AttachParent).field0_0x0.DebugPtr, pUVar2 != (USceneComponent *)0x0)) {
      auVar11._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(this->ComponentToWorld).Scale3D.XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(this->ComponentToWorld).Scale3D.XY.m128d_f64);
      auVar11._8_4_ = _UNK_15061cc88 & *(uint *)((this->ComponentToWorld).Scale3D.XY.m128d_f64 + 1);
      auVar11._12_4_ =
           _UNK_15061cc8c & *(uint *)((longlong)(this->ComponentToWorld).Scale3D.XY.m128d_f64 + 0xc)
      ;
      lVar9 = -(ulonglong)
               ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
               (double)CONCAT44(_UNK_15061cc8c &
                                *(uint *)((longlong)(this->ComponentToWorld).Scale3D.ZW.m128d_f64 +
                                         0xc),
                                _UNK_15061cc88 &
                                *(uint *)((this->ComponentToWorld).Scale3D.ZW.m128d_f64 + 1)));
      auVar6._8_4_ = (int)lVar9;
      auVar6._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       *(uint *)((longlong)
                                                 (this->ComponentToWorld).Scale3D.ZW.m128d_f64 + 4),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       *(uint *)(this->ComponentToWorld).Scale3D.ZW.m128d_f64));
      auVar6._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      uVar8 = movmskpd((int)this,auVar6);
      lVar9 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar11._8_8_);
      auVar4._8_4_ = (int)lVar9;
      auVar4._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar11._0_8_);
      auVar4._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      iVar7 = movmskpd((uint)(byte)uVar1,auVar4);
      if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
        local_e8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_e8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_e8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_e8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(&this->ComponentToWorld,&local_e8);
      }
      UE::Math::TBoxSphereBounds<double,double>::TransformBy
                (&pUVar2->Bounds,__return_storage_ptr__,&local_e8);
    }
    else {
      (**(code **)(this->_padding_ + 0x598))
                (this,__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
    }
  }
  else {
    auVar10._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(this->ComponentToWorld).Scale3D.XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(this->ComponentToWorld).Scale3D.XY.m128d_f64);
    auVar10._8_4_ = _UNK_15061cc88 & *(uint *)((this->ComponentToWorld).Scale3D.XY.m128d_f64 + 1);
    auVar10._12_4_ =
         _UNK_15061cc8c & *(uint *)((longlong)(this->ComponentToWorld).Scale3D.XY.m128d_f64 + 0xc);
    lVar9 = -(ulonglong)
             ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
             (double)CONCAT44(_UNK_15061cc8c &
                              *(uint *)((longlong)(this->ComponentToWorld).Scale3D.ZW.m128d_f64 +
                                       0xc),
                              _UNK_15061cc88 &
                              *(uint *)((this->ComponentToWorld).Scale3D.ZW.m128d_f64 + 1)));
    auVar5._8_4_ = (int)lVar9;
    auVar5._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)((longlong)
                                               (this->ComponentToWorld).Scale3D.ZW.m128d_f64 + 4),
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)(this->ComponentToWorld).Scale3D.ZW.m128d_f64));
    auVar5._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar8 = movmskpd((int)this,auVar5);
    lVar9 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar10._8_8_);
    auVar3._8_4_ = (int)lVar9;
    auVar3._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar10._0_8_);
    auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    iVar7 = movmskpd((uint)(byte)uVar1,auVar3);
    if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
      local_e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_e8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_e8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(&this->ComponentToWorld,&local_e8);
    }
    UE::Math::TTransform<double>::ToMatrixWithScale(&local_e8,&local_88);
    UE::Math::TBoxSphereBounds<double,double>::TransformBy
              (&this->Bounds,__return_storage_ptr__,&local_88);
  }
  return __return_storage_ptr__;
}

// GetNumChildrenComponents @ 14794abb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall USceneComponent::GetNumChildrenComponents(USceneComponent *this)

{
  return (this->AttachChildren).ArrayNum;
}

// GetParentComponents @ 14794b300

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
USceneComponent::GetParentComponents
          (USceneComponent *this,TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TObjectPtr<USceneComponent>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<USceneComponent>_u_0 local_18 [2];
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_18[0] = (TObjectPtr<USceneComponent>_u_0)(this->AttachParent).field0_0x0.DebugPtr;
  while( true ) {
    if (local_18[0].DebugPtr == (USceneComponent *)0x0) {
      return;
    }
    pTVar2 = (TObjectPtr<USceneComponent>_u_0 *)(param_1->AllocatorInstance).Data;
    if (((pTVar2 <= local_18) && (local_18 < pTVar2 + *piVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_1->ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar5 + 1;
    ((TObjectPtr<USceneComponent>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8))->
    DebugPtr = (USceneComponent *)local_18[0];
    local_18[0] = (TObjectPtr<USceneComponent>_u_0)
                  ((local_18[0].DebugPtr)->AttachParent).field0_0x0.DebugPtr;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// GetPhysicsVolume @ 14794b850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhysicsVolume * __thiscall USceneComponent::GetPhysicsVolume(USceneComponent *this)

{
  APhysicsVolume *pAVar1;
  UWorld *this_00;
  
  pAVar1 = (APhysicsVolume *)FWeakObjectPtr::Get(&(this->PhysicsVolume).WeakPtr);
  if (pAVar1 != (APhysicsVolume *)0x0) {
    return pAVar1;
  }
  this_00 = (UWorld *)this->_padding_;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 == (UWorld *)0x0)) {
    return (APhysicsVolume *)0x0;
  }
  pAVar1 = (this_00->DefaultPhysicsVolume).field0_0x0.DebugPtr;
  if (pAVar1 == (APhysicsVolume *)0x0) {
    pAVar1 = UWorld::InternalGetDefaultPhysicsVolume(this_00);
  }
  return pAVar1;
}

// GetPlacementExtent @ 14794b8b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
USceneComponent::GetPlacementExtent
          (USceneComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x598))
            (this,__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14794c5e0

UClass * __cdecl USceneComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneComponent",
               &Z_Registration_Info_UClass_USceneComponent.InnerSingleton,
               StaticRegisterNativesUSceneComponent,0x250,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_USceneComponent,L"Engine",InternalConstructor<USceneComponent>,
               InternalVTableHelperCtorCaller<USceneComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneComponent.InnerSingleton;
}

// GetRelativeLocation_DirectMutable @ 14794cc60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
USceneComponent::GetRelativeLocation_DirectMutable(USceneComponent *this)

{
  return &this->RelativeLocation;
}

// GetRelativeRotationFromWorld @ 14794cc70

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

TQuat<double> * __thiscall
USceneComponent::GetRelativeRotationFromWorld
          (USceneComponent *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  int iVar13;
  TTransform<double> *pTVar14;
  uint uVar15;
  USceneComponent *pUVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_1a8 [32];
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar12 = *(undefined4 *)((longlong)&param_1->X + 4);
  uVar6 = *(undefined4 *)&param_1->Y;
  uVar7 = *(undefined4 *)((longlong)&param_1->Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&param_1->X;
  *(undefined4 *)((longlong)&__return_storage_ptr__->X + 4) = uVar12;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Y + 4) = uVar7;
  uVar12 = *(undefined4 *)((longlong)&param_1->Z + 4);
  uVar6 = *(undefined4 *)&param_1->W;
  uVar7 = *(undefined4 *)((longlong)&param_1->W + 4);
  *(undefined4 *)&__return_storage_ptr__->Z = *(undefined4 *)&param_1->Z;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Z + 4) = uVar12;
  *(undefined4 *)&__return_storage_ptr__->W = uVar6;
  *(undefined4 *)((longlong)&__return_storage_ptr__->W + 4) = uVar7;
  pUVar16 = (this->AttachParent).field0_0x0.DebugPtr;
  if ((pUVar16 != (USceneComponent *)0x0) && (this->bAbsoluteRotation == '\0')) {
    uVar12 = (**(code **)(pUVar16->_padding_ + 0x520))(pUVar16,&local_128,this->AttachSocketName,0);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (this->RelativeScale3D).field0_0x0._s_0.Z;
    auVar20 = minpd(*(undefined1 (*) [16])&(this->RelativeScale3D).field0_0x0,
                    (undefined1  [16])local_128.Scale3D.XY.m128d_f64);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = local_128.Scale3D.ZW.m128d_f64[0];
    auVar18 = minpd(auVar17,auVar18);
    auVar19._8_8_ =
         -(ulonglong)(auVar18._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[3]);
    auVar19._0_8_ =
         -(ulonglong)(auVar18._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[2]);
    uVar15 = movmskpd((int)pUVar16,auVar19);
    auVar21._8_8_ =
         -(ulonglong)(auVar20._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[1]);
    auVar21._0_8_ =
         -(ulonglong)(auVar20._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[0]);
    iVar13 = movmskpd(uVar12,auVar21);
    if ((uVar15 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar8 = param_1->Z;
      dVar9 = param_1->W;
      dVar10 = param_1->X;
      dVar11 = param_1->Y;
      local_128.Rotation.XY.m128d_f64[0] =
           local_128.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_128.Rotation.XY.m128d_f64[1] =
           local_128.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_128.Rotation.ZW.m128d_f64[0] =
           local_128.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_128.Rotation.ZW.m128d_f64[1] =
           local_128.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar22._8_4_ = SUB84(local_128.Rotation.XY.m128d_f64[0],0);
      auVar22._0_8_ = local_128.Rotation.XY.m128d_f64[0];
      auVar22._12_4_ = (int)((ulonglong)local_128.Rotation.XY.m128d_f64[0] >> 0x20);
      dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
      dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
      dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar4 = local_128.Rotation.XY.m128d_f64[0] * dVar11 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              local_128.Rotation.ZW.m128d_f64[1] * dVar8 +
              local_128.Rotation.XY.m128d_f64[1] * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              local_128.Rotation.ZW.m128d_f64[0] * dVar9 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar5 = local_128.Rotation.XY.m128d_f64[0] * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              local_128.Rotation.ZW.m128d_f64[1] * dVar9 +
              local_128.Rotation.XY.m128d_f64[1] * dVar11 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              local_128.Rotation.ZW.m128d_f64[0] * dVar8 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      __return_storage_ptr__->X =
           local_128.Rotation.XY.m128d_f64[0] * dVar9 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           local_128.Rotation.ZW.m128d_f64[1] * dVar10 +
           local_128.Rotation.XY.m128d_f64[1] * dVar8 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           local_128.Rotation.ZW.m128d_f64[0] * dVar11 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      __return_storage_ptr__->Y =
           auVar22._8_8_ * dVar8 * dVar1 + local_128.Rotation.ZW.m128d_f64[1] * dVar11 +
           local_128.Rotation.XY.m128d_f64[1] * dVar9 * dVar2 +
           local_128.Rotation.ZW.m128d_f64[0] * dVar10 * dVar3;
      auVar20._8_4_ = SUB84(dVar5,0);
      auVar20._0_8_ = dVar4;
      auVar20._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      __return_storage_ptr__->Z = dVar4;
      __return_storage_ptr__->W = (double)auVar20._8_8_;
    }
    else {
      local_188.Translation.XY.m128d_f64[0] = (this->ComponentToWorld).Translation.XY.m128d_f64[0];
      local_188.Translation.XY.m128d_f64[1] = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
      local_188.Translation.ZW.m128d_f64[0] = (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
      local_188.Translation.ZW.m128d_f64[1] = (this->ComponentToWorld).Translation.ZW.m128d_f64[1];
      local_188.Scale3D.XY.m128d_f64[0] = (this->ComponentToWorld).Scale3D.XY.m128d_f64[0];
      local_188.Scale3D.XY.m128d_f64[1] = (this->ComponentToWorld).Scale3D.XY.m128d_f64[1];
      local_188.Scale3D.ZW.m128d_f64[0] = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
      local_188.Scale3D.ZW.m128d_f64[1] = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
      local_188.Rotation.XY.m128d_f64[0] = param_1->X;
      local_188.Rotation.XY.m128d_f64[1] = param_1->Y;
      local_188.Rotation.ZW.m128d_f64[0] = param_1->Z;
      local_188.Rotation.ZW.m128d_f64[1] = param_1->W;
      pTVar14 = UE::Math::TTransform<double>::GetRelativeTransform(&local_188,&local_c8,&local_128);
      dVar1 = (pTVar14->Rotation).XY.m128d_f64[1];
      dVar2 = (pTVar14->Rotation).ZW.m128d_f64[0];
      dVar3 = (pTVar14->Rotation).ZW.m128d_f64[1];
      __return_storage_ptr__->X = (pTVar14->Rotation).XY.m128d_f64[0];
      __return_storage_ptr__->Y = dVar1;
      __return_storage_ptr__->Z = dVar2;
      __return_storage_ptr__->W = dVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetRelativeRotation_DirectMutable @ 14794cf10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
USceneComponent::GetRelativeRotation_DirectMutable(USceneComponent *this)

{
  return &this->RelativeRotation;
}

// GetRelativeScale3D_DirectMutable @ 14794cf20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
USceneComponent::GetRelativeScale3D_DirectMutable(USceneComponent *this)

{
  return &this->RelativeScale3D;
}

// GetRelativeTransform @ 14794cf30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
USceneComponent::GetRelativeTransform
          (USceneComponent *this,TTransform<double> *__return_storage_ptr__)

{
  TRotator<double> *this_00;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FPayload *pFVar17;
  TQuat<double> *pTVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar28;
  undefined1 auVar25 [16];
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 local_a8 [16];
  double local_98;
  double local_78;
  double local_60;
  
  local_60 = (this->RelativeScale3D).field0_0x0._s_0.Z;
  dVar38 = (this->RelativeRotation).Roll;
  auVar1._0_8_ = (this->RelativeRotation).Pitch;
  auVar1._8_8_ = (this->RelativeRotation).Yaw;
  uVar9 = *(undefined4 *)&(this->RelativeScale3D).field0_0x0;
  uVar10 = *(undefined4 *)((longlong)&(this->RelativeScale3D).field0_0x0 + 4);
  uVar11 = *(undefined4 *)((longlong)&(this->RelativeScale3D).field0_0x0 + 8);
  uVar12 = *(undefined4 *)((longlong)&(this->RelativeScale3D).field0_0x0 + 0xc);
  uVar13 = *(undefined4 *)&(this->RelativeLocation).field0_0x0;
  uVar14 = *(undefined4 *)((longlong)&(this->RelativeLocation).field0_0x0 + 4);
  uVar15 = *(undefined4 *)((longlong)&(this->RelativeLocation).field0_0x0 + 8);
  uVar16 = *(undefined4 *)((longlong)&(this->RelativeLocation).field0_0x0 + 0xc);
  local_78 = (this->RelativeLocation).field0_0x0._s_0.Z;
  local_98 = dVar38;
  pFVar17 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache);
  this_00 = &pFVar17->CachedRotator;
  if ((((double)auVar1._0_8_ != (pFVar17->CachedRotator).Pitch) ||
      (auVar6._4_8_ = extraout_XMM0_Qb, auVar6._0_4_ = (int)((ulonglong)auVar1._0_8_ >> 0x20),
      auVar23._0_8_ = auVar6._0_8_ << 0x20, auVar23._8_4_ = (int)auVar1._8_8_,
      auVar23._12_4_ = (int)((ulonglong)auVar1._8_8_ >> 0x20),
      auVar23._8_8_ != (pFVar17->CachedRotator).Yaw)) || (local_98 != (pFVar17->CachedRotator).Roll)
     ) {
    auVar23 = divpd(auVar1,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar30 = roundpd(in_XMM1,auVar23,3);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar38;
    auVar23 = divpd(auVar24,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar31._0_8_ = auVar30._0_8_ * dVar2;
    dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar31._8_8_ = auVar30._8_8_ * dVar3;
    dVar29 = (double)auVar1._0_8_ - auVar31._0_8_;
    dVar5 = (double)auVar1._8_8_ - auVar31._8_8_;
    auVar23 = roundpd(auVar31,auVar23,3);
    dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar30._8_4_ = SUB84(dVar5,0);
    auVar30._0_8_ = dVar29;
    auVar30._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar28 = auVar30._8_8_ + dVar3;
    dVar38 = dVar38 - auVar23._0_8_ * dVar4;
    dVar39 = 0.0 - auVar23._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar19 = -(ulonglong)(0.0 <= dVar38);
    uVar21 = -(ulonglong)(0.0 <= dVar39);
    auVar34._0_8_ = uVar19 & (ulonglong)dVar38;
    auVar34._8_4_ = (undefined4)(uVar21 & (ulonglong)dVar39);
    auVar34._12_4_ = (undefined4)((uVar21 & (ulonglong)dVar39) >> 0x20);
    uVar20 = -(ulonglong)(0.0 <= dVar29);
    uVar22 = -(ulonglong)(0.0 <= dVar5);
    auVar32._0_8_ = uVar20 & (ulonglong)dVar29;
    auVar32._8_4_ = (undefined4)(uVar22 & (ulonglong)dVar5);
    auVar32._12_4_ = (undefined4)((uVar22 & (ulonglong)dVar5) >> 0x20);
    auVar36._0_4_ = ~(uint)uVar20 & SUB84(dVar29 + dVar2,0);
    auVar36._4_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)(dVar29 + dVar2) >> 0x20);
    auVar36._8_4_ = ~(uint)uVar22 & SUB84(dVar28,0);
    auVar36._12_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)dVar28 >> 0x20);
    auVar25._8_4_ = SUB84(dVar39,0);
    auVar25._0_8_ = dVar38;
    auVar25._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    dVar29 = auVar25._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar36 = auVar36 | auVar32;
    auVar37._0_4_ = ~(uint)uVar19 & SUB84(dVar38 + dVar4,0);
    auVar37._4_4_ = ~(uint)(uVar19 >> 0x20) & (uint)((ulonglong)(dVar38 + dVar4) >> 0x20);
    auVar37._8_4_ = ~(uint)uVar21 & SUB84(dVar29,0);
    auVar37._12_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar29 >> 0x20);
    auVar37 = auVar37 | auVar34;
    uVar20 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar36._0_8_);
    uVar22 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar36._8_8_);
    uVar21 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar37._0_8_);
    auVar35._0_8_ = uVar20 & (ulonglong)(auVar36._0_8_ - dVar2);
    uVar19 = uVar22 & (ulonglong)(auVar36._8_8_ - dVar3);
    auVar35._8_4_ = (undefined4)uVar19;
    auVar35._12_4_ = (undefined4)(uVar19 >> 0x20);
    auVar26._0_4_ = ~(uint)uVar20 & auVar36._0_4_;
    auVar26._4_4_ = ~(uint)(uVar20 >> 0x20) & auVar36._4_4_;
    auVar26._8_4_ = ~(uint)uVar22 & auVar36._8_4_;
    auVar26._12_4_ = ~(uint)(uVar22 >> 0x20) & auVar36._12_4_;
    this_00->Pitch = (double)SUB168(auVar35 | auVar26,0);
    this_00->Yaw = (double)SUB168(auVar35 | auVar26,8);
    (pFVar17->CachedRotator).Roll =
         (double)((ulonglong)(auVar37._0_8_ - dVar4) & uVar21 |
                 CONCAT44(~(uint)(uVar21 >> 0x20) & auVar37._4_4_,~(uint)uVar21 & auVar37._0_4_));
    local_a8 = auVar1;
    pTVar18 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_a8);
    dVar38 = pTVar18->Y;
    (pFVar17->CachedQuat).X = pTVar18->X;
    (pFVar17->CachedQuat).Y = dVar38;
    dVar38 = pTVar18->W;
    (pFVar17->CachedQuat).Z = pTVar18->Z;
    (pFVar17->CachedQuat).W = dVar38;
  }
  dVar38 = (pFVar17->CachedQuat).Y;
  dVar2 = (pFVar17->CachedQuat).Z;
  dVar3 = (pFVar17->CachedQuat).W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pFVar17->CachedQuat).X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar38;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  auVar7._4_8_ = dVar38;
  auVar7._0_4_ = uVar14;
  auVar33._0_8_ = auVar7._0_8_ << 0x20;
  auVar33._8_4_ = uVar15;
  auVar33._12_4_ = uVar16;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar13;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar14;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = auVar33._8_8_;
  auVar8._4_8_ = auVar33._8_8_;
  auVar8._0_4_ = uVar10;
  auVar27._0_8_ = auVar8._0_8_ << 0x20;
  auVar27._8_4_ = uVar11;
  auVar27._12_4_ = uVar12;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_78;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar9;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar10;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = auVar27._8_8_;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_60;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// GetRightVector @ 14794d390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
USceneComponent::GetRightVector(USceneComponent *this,TVector<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar1 = *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.ZW.m128d_f64;
  dVar5 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  auVar6 = *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.XY.m128d_f64;
  dVar16 = __xmm_3ff00000000000000000000000000000._8_8_;
  dVar4 = auVar1._0_8_;
  auVar7 = blendpd(auVar6,auVar1,2);
  auVar14._0_8_ =
       dVar16 * auVar6._0_8_ - auVar6._8_8_ * (double)__xmm_3ff00000000000000000000000000000;
  auVar14._8_8_ = auVar6._8_8_ * 0.0 - dVar4 * dVar16;
  auVar6 = blendpd(___xmm_3ff00000000000000000000000000000,ZEXT816(0),2);
  auVar9._0_8_ = auVar6._0_8_ * dVar4 - auVar7._0_8_ * 0.0;
  auVar9._8_8_ = auVar6._8_8_ * auVar1._8_8_ - auVar7._8_8_ * 0.0;
  auVar6 = *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.XY.m128d_f64;
  auVar7 = blendpd(auVar14,auVar9,2);
  dVar2 = auVar14._8_8_ + auVar14._8_8_;
  dVar3 = auVar9._0_8_ + auVar9._0_8_;
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar15._0_8_ = auVar7._0_8_ + auVar7._0_8_;
  auVar15._8_8_ = auVar7._8_8_ + auVar7._8_8_;
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = uVar13;
  auVar8._8_4_ = SUB84(dVar3,0);
  auVar8._0_8_ = dVar2;
  auVar8._12_4_ = uVar13;
  auVar9 = blendpd(auVar8,auVar15,2);
  auVar12._0_8_ = auVar11._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar2;
  auVar12._8_8_ = auVar15._0_8_ * auVar6._8_8_ - dVar4 * dVar3;
  auVar7._8_4_ = SUB84(auVar12._8_8_,0);
  auVar7._0_8_ = auVar12._0_8_;
  auVar7._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
  auVar6 = blendpd(auVar6,auVar1,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar4 - auVar6._0_8_ * auVar15._0_8_;
  auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar6._8_8_ * auVar15._8_8_;
  auVar6 = blendpd(auVar12,auVar10,2);
  dVar4 = dVar3 * dVar5 + dVar16 + auVar10._0_8_;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar2 * dVar5 + (double)__xmm_3ff00000000000000000000000000000 + auVar7._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar15._0_8_ * dVar5 + auVar6._0_8_;
  return __return_storage_ptr__;
}

// GetSocketLocation @ 14794e5f0

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

TVector<double> * __thiscall
USceneComponent::GetSocketLocation
          (USceneComponent *this,TVector<double> *__return_storage_ptr__,FName param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(this->_padding_ + 0x520))(this,local_78,param_1,0);
  dVar2 = *(double *)(lVar3 + 0x28);
  dVar1 = *(double *)(lVar3 + 0x30);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar3 + 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetSocketQuaternion @ 14794e660

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

TQuat<double> * __thiscall
USceneComponent::GetSocketQuaternion
          (USceneComponent *this,TQuat<double> *__return_storage_ptr__,FName param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pdVar4 = (double *)(**(code **)(this->_padding_ + 0x520))(this,local_78,param_1,0);
  dVar1 = pdVar4[1];
  dVar2 = pdVar4[2];
  dVar3 = pdVar4[3];
  __return_storage_ptr__->X = *pdVar4;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetSocketRotation @ 14794e880

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

TRotator<double> * __thiscall
USceneComponent::GetSocketRotation
          (USceneComponent *this,TRotator<double> *__return_storage_ptr__,FName param_1)

{
  double *pdVar1;
  undefined1 auStack_b8 [32];
  TQuat<double> local_98;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pdVar1 = (double *)(**(code **)(this->_padding_ + 0x520))(this,local_78,param_1,0);
  local_98.X = *pdVar1;
  local_98.Y = pdVar1[1];
  local_98.Z = pdVar1[2];
  local_98.W = pdVar1[3];
  UE::Math::TQuat<double>::Rotator(&local_98,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSocketTransform @ 14794e8f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
USceneComponent::GetSocketTransform
          (USceneComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          ERelativeTransformSpace param_2)

{
  longlong lVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  
  if (param_2 == RTS_Actor) {
    lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
    if (lVar1 == 0) {
      pTVar3 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar3 = (TTransform<double> *)(lVar1 + 0x1f0);
    }
    UE::Math::TTransform<double>::GetRelativeTransform
              (&this->ComponentToWorld,__return_storage_ptr__,pTVar3);
    return __return_storage_ptr__;
  }
  if ((param_2 != RTS_Component) && (param_2 != RTS_ParentBoneSpace)) {
    dVar2 = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
    dVar2 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
         (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (this->ComponentToWorld).Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
    dVar2 = (this->ComponentToWorld).Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
         (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
    dVar2 = (this->ComponentToWorld).Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (this->ComponentToWorld).Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
    dVar2 = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
         (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
    return __return_storage_ptr__;
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

// GetSocketWorldLocationAndRotation @ 14794edc0

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
USceneComponent::GetSocketWorldLocationAndRotation
          (USceneComponent *this,FName param_1,TVector<double> *param_2,TQuat<double> *param_3)

{
  undefined1 auStack_b8 [64];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  (**(code **)(this->_padding_ + 0x520))(this,&local_78,param_1,0);
  (param_2->field0_0x0)._s_0.X = local_58;
  (param_2->field0_0x0)._s_0.Y = dStack_50;
  (param_2->field0_0x0)._s_0.Z = local_48;
  param_3->X = local_78;
  param_3->Y = dStack_70;
  param_3->Z = local_68;
  param_3->W = dStack_60;
  return;
}

// GetSocketWorldLocationAndRotation @ 14794ee50

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
USceneComponent::GetSocketWorldLocationAndRotation
          (USceneComponent *this,FName param_1,TVector<double> *param_2,TRotator<double> *param_3)

{
  undefined1 auStack_d8 [32];
  TRotator<double> local_b8;
  TQuat<double> local_98;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  (**(code **)(this->_padding_ + 0x520))(this,&local_78,param_1,0);
  (param_2->field0_0x0)._s_0.X = local_58;
  (param_2->field0_0x0)._s_0.Y = dStack_50;
  (param_2->field0_0x0)._s_0.Z = local_48;
  local_98.X = local_78;
  local_98.Y = dStack_70;
  local_98.Z = local_68;
  local_98.W = dStack_60;
  UE::Math::TQuat<double>::Rotator(&local_98,&local_b8);
  param_3->Pitch = local_b8.Pitch;
  param_3->Yaw = local_b8.Yaw;
  param_3->Roll = local_b8.Roll;
  return;
}

// GetUpVector @ 1479502a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
USceneComponent::GetUpVector(USceneComponent *this,TVector<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar1 = *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.ZW.m128d_f64;
  auVar7 = *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.XY.m128d_f64;
  dVar5 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  dVar4 = auVar1._0_8_;
  auVar15._0_8_ = auVar7._0_8_ * 0.0 - auVar7._8_8_ * 0.0;
  auVar15._8_8_ = __real_3ff0000000000000 * auVar7._8_8_ - dVar4 * 0.0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = __real_3ff0000000000000;
  auVar6 = blendpd(ZEXT816(0),auVar6,2);
  auVar7 = blendpd(auVar7,auVar1,2);
  auVar9._0_8_ = auVar6._0_8_ * dVar4 - auVar7._0_8_ * __real_3ff0000000000000;
  auVar9._8_8_ = auVar6._8_8_ * auVar1._8_8_ - auVar7._8_8_ * 0.0;
  auVar7 = *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.XY.m128d_f64;
  auVar6 = blendpd(auVar15,auVar9,2);
  auVar16._0_8_ = auVar6._0_8_ + auVar6._0_8_;
  auVar16._8_8_ = auVar6._8_8_ + auVar6._8_8_;
  dVar2 = auVar15._8_8_ + auVar15._8_8_;
  dVar3 = auVar9._0_8_ + auVar9._0_8_;
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = uVar13;
  auVar8._8_4_ = SUB84(dVar3,0);
  auVar8._0_8_ = dVar2;
  auVar8._12_4_ = uVar13;
  auVar9 = blendpd(auVar8,auVar16,2);
  auVar12._0_8_ = auVar11._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar2;
  auVar12._8_8_ = auVar16._0_8_ * auVar7._8_8_ - dVar4 * dVar3;
  auVar6 = blendpd(auVar7,auVar1,2);
  auVar7._8_4_ = SUB84(auVar12._8_8_,0);
  auVar7._0_8_ = auVar12._0_8_;
  auVar7._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
  dVar14 = auVar16._0_8_ * dVar5 + __real_3ff0000000000000;
  auVar10._0_8_ = auVar9._0_8_ * dVar4 - auVar6._0_8_ * auVar16._0_8_;
  auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar6._8_8_ * auVar16._8_8_;
  auVar6 = blendpd(auVar12,auVar10,2);
  dVar4 = dVar3 * dVar5 + auVar10._0_8_;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar2 * dVar5 + auVar7._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar14 + auVar6._0_8_;
  return __return_storage_ptr__;
}

// HasAnySockets @ 147952580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::HasAnySockets(USceneComponent *this)

{
  return false;
}

// HasGroupedMovementUpdate @ 147952760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
USceneComponent::HasGroupedMovementUpdate(USceneComponent *this,FScopedMovementUpdate *param_1)

{
  return param_1->bIsGroupDeferedUpdate;
}

// InternalSetWorldLocationAndRotation @ 1479550d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
USceneComponent::InternalSetWorldLocationAndRotation
          (USceneComponent *this,TVector<double> *param_1,TQuat<double> *param_2,bool param_3,
          ETeleportType param_4)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 uVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  TRotator<double> *pTVar14;
  FPayload *pFVar15;
  TQuat<double> *pTVar16;
  uint uVar17;
  int iVar18;
  USceneComponent *pUVar19;
  TTransform<double> *this_00;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar67;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar73;
  undefined1 auVar72 [16];
  double dVar74;
  undefined1 in_XMM3 [16];
  undefined1 auVar76 [16];
  double dVar80;
  undefined4 uVar82;
  undefined1 auVar77 [16];
  double dVar75;
  double dVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  uint uVar89;
  double dVar88;
  undefined1 auVar87 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar95;
  undefined1 auVar94 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined4 uVar112;
  undefined4 uVar113;
  __m128d _Var114;
  undefined1 auVar115 [16];
  __m128d _Var116;
  undefined1 auVar117 [16];
  undefined1 auStackY_268 [32];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  TRotator<double> local_218;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  uVar13 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar101 = *(undefined4 *)&param_2->X;
  uVar102 = *(undefined4 *)((longlong)&param_2->X + 4);
  uVar103 = *(undefined4 *)&param_2->Y;
  uVar104 = *(undefined4 *)((longlong)&param_2->Y + 4);
  local_238._0_8_ = param_2->X;
  local_238._8_8_ = param_2->Y;
  pUVar19 = (this->AttachParent).field0_0x0.DebugPtr;
  dVar1 = param_2->Z;
  dVar2 = param_2->W;
  uVar82 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar105 = (undefined4)((ulonglong)dVar2 >> 0x20);
  uVar11 = 0;
  uVar112 = SUB84(dVar1,0);
  uVar113 = SUB84(dVar2,0);
  local_d8 = uVar13;
  if (pUVar19 == (USceneComponent *)0x0) {
LAB_147955284:
    dVar2 = (double)CONCAT44(uVar105,uVar113);
    dVar1 = (double)CONCAT44(uVar82,uVar112);
    _Var114.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
    _Var116.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
    uVar17 = (uint)uVar13;
    dVar68 = (double)CONCAT44(uVar102,uVar101);
    dVar73 = (double)CONCAT44(uVar104,uVar103);
  }
  else {
    uVar11 = (**(code **)(pUVar19->_padding_ + 0x520))(pUVar19,&local_1f8,this->AttachSocketName,0);
    _Var116 = GlobalVectorConstants::DoubleOne.ZW;
    _Var114 = GlobalVectorConstants::DoubleOne.XY;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = (this->RelativeScale3D).field0_0x0._s_0.Z;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = local_1f8.Scale3D.ZW.m128d_f64[0];
    auVar40._8_4_ = local_1f8.Scale3D.XY.m128d_f64[1]._0_4_;
    auVar40._0_8_ =
         CONCAT44(local_1f8.Scale3D.XY.m128d_f64[0]._4_4_,local_1f8.Scale3D.XY.m128d_f64[0]._0_4_);
    auVar40._12_4_ = local_1f8.Scale3D.XY.m128d_f64[1]._4_4_;
    auVar76 = minpd(auVar96,auVar76);
    auVar96 = minpd(*(undefined1 (*) [16])&(this->RelativeScale3D).field0_0x0,auVar40);
    in_XMM3._8_8_ =
         (double)-(ulonglong)(auVar76._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[3]);
    in_XMM3._0_8_ =
         (double)-(ulonglong)(auVar76._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[2]);
    uVar17 = movmskpd((int)pUVar19,in_XMM3);
    auVar97._8_8_ =
         -(ulonglong)(auVar96._8_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[1]);
    auVar97._0_8_ =
         -(ulonglong)(auVar96._0_8_ < (double)GlobalVectorConstants::FloatZero.m128_f32[0]);
    iVar12 = movmskpd(uVar11,auVar97);
    if ((uVar17 & 0x3fffffff) != 0 || iVar12 != 0) {
      local_198.Rotation.ZW.m128d_f64[0] = param_2->Z;
      local_198.Rotation.ZW.m128d_f64[1] = param_2->W;
      dVar68 = (this->RelativeScale3D).field0_0x0._s_0.Y;
      this_00 = &local_198;
      local_198.Rotation.XY.m128d_f64[0] = param_2->X;
      local_198.Rotation.XY.m128d_f64[1] = param_2->Y;
      local_198.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
      local_198.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
      local_198.Translation.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
      local_198.Translation.ZW.m128d_f64[1] = 0.0;
      local_198.Scale3D.XY.m128d_f64[0] =
           (this->RelativeScale3D).field0_0x0._s_0.X *
           (double)CONCAT44(local_1f8.Scale3D.XY.m128d_f64[0]._4_4_,
                            local_1f8.Scale3D.XY.m128d_f64[0]._0_4_);
      in_XMM3._0_8_ = dVar68 * auVar40._8_8_;
      in_XMM3._8_8_ = dVar68;
      local_198.Scale3D.ZW.m128d_f64[0] =
           (this->RelativeScale3D).field0_0x0._s_0.Z * local_1f8.Scale3D.ZW.m128d_f64[0];
      local_228._0_8_ = local_1f8.Scale3D.ZW.m128d_f64[0];
      local_198.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_198.Scale3D.XY.m128d_f64[1] = in_XMM3._0_8_;
      UE::Math::TTransform<double>::GetRelativeTransform(this_00,&local_138,&local_1f8);
      uVar11 = SUB84(this_00,0);
      uVar3 = this->field_0x1a8;
      uVar13 = (ulonglong)(byte)uVar3;
      if (this->bAbsoluteLocation == '\0') {
        (param_1->field0_0x0)._s_0.X = local_138.Translation.XY.m128d_f64[0];
        (param_1->field0_0x0)._s_0.Y = local_138.Translation.XY.m128d_f64[1];
        (param_1->field0_0x0)._s_0.Z = local_138.Translation.ZW.m128d_f64[0];
      }
      if (this->bAbsoluteRotation == '\0') {
        uVar101 = local_138.Rotation.XY.m128d_f64[0]._0_4_;
        uVar102 = local_138.Rotation.XY.m128d_f64[0]._4_4_;
        uVar103 = local_138.Rotation.XY.m128d_f64[1]._0_4_;
        uVar104 = local_138.Rotation.XY.m128d_f64[1]._4_4_;
        uVar112 = local_138.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar82 = local_138.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar113 = local_138.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar105 = local_138.Rotation.ZW.m128d_f64[1]._4_4_;
      }
      goto LAB_147955284;
    }
    uVar3 = this->field_0x1a8;
    uVar17 = (uint)(byte)uVar3;
    auVar7._8_4_ = local_1f8.Rotation.ZW.m128d_f64[1]._0_4_;
    auVar7._0_8_ = CONCAT44(local_1f8.Rotation.ZW.m128d_f64[0]._4_4_,
                            local_1f8.Rotation.ZW.m128d_f64[0]._0_4_);
    auVar7._12_4_ = local_1f8.Rotation.ZW.m128d_f64[1]._4_4_;
    dVar81 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar67 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar75 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar88 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    if (this->bAbsoluteLocation == '\0') {
      local_1f8.Translation.ZW.m128d_f64[0] =
           (param_1->field0_0x0)._s_0.Z - local_1f8.Translation.ZW.m128d_f64[0];
      local_1f8.Translation.XY.m128d_f64[0] =
           (param_1->field0_0x0)._s_0.X - local_1f8.Translation.XY.m128d_f64[0];
      local_1f8.Translation.XY.m128d_f64[1] =
           (param_1->field0_0x0)._s_0.Y - local_1f8.Translation.XY.m128d_f64[1];
      auVar90._0_8_ =
           (double)CONCAT44(local_1f8.Rotation.ZW.m128d_f64[0]._4_4_,
                            local_1f8.Rotation.ZW.m128d_f64[0]._0_4_) * dVar81;
      auVar90._8_8_ = auVar7._8_8_ * dVar75;
      dVar74 = local_1f8.Rotation.XY.m128d_f64[0] * dVar67;
      dVar80 = local_1f8.Rotation.XY.m128d_f64[1] * dVar88;
      auVar109._8_4_ = SUB84(local_1f8.Translation.XY.m128d_f64[1],0);
      auVar109._0_8_ = local_1f8.Translation.XY.m128d_f64[0];
      uVar105 = (undefined4)((ulonglong)local_1f8.Translation.XY.m128d_f64[1] >> 0x20);
      auVar109._12_4_ = uVar105;
      auVar69._8_4_ = SUB84(dVar80,0);
      auVar69._0_8_ = dVar74;
      uVar82 = (undefined4)((ulonglong)dVar80 >> 0x20);
      auVar69._12_4_ = uVar82;
      dVar95 = auVar69._8_8_;
      auVar83._8_4_ = SUB84(dVar80,0);
      auVar83._0_8_ = dVar74;
      auVar83._12_4_ = uVar82;
      auVar76 = blendpd(auVar83,auVar90,2);
      auVar28._8_4_ = SUB84(auVar90._0_8_,0);
      auVar28._0_8_ = dVar95;
      auVar28._12_4_ = (int)((ulonglong)auVar90._0_8_ >> 0x20);
      auVar51._8_4_ = SUB84(local_1f8.Translation.XY.m128d_f64[1],0);
      auVar51._0_8_ = local_1f8.Translation.XY.m128d_f64[0];
      auVar51._12_4_ = uVar105;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_1f8.Translation.ZW.m128d_f64[0];
      auVar40 = blendpd(auVar51,auVar5,2);
      auVar110._0_8_ = auVar109._8_8_ * dVar74 - dVar95 * local_1f8.Translation.XY.m128d_f64[0];
      auVar110._8_8_ =
           local_1f8.Translation.ZW.m128d_f64[0] * dVar80 -
           auVar28._8_8_ * local_1f8.Translation.XY.m128d_f64[1];
      dVar100 = auVar76._8_8_;
      auVar52._0_8_ =
           auVar40._0_8_ * auVar90._0_8_ - auVar76._0_8_ * local_1f8.Translation.ZW.m128d_f64[0];
      auVar52._8_8_ = auVar40._8_8_ * auVar90._8_8_ - dVar100 * 0.0;
      auVar40 = blendpd(auVar110,auVar52,2);
      dVar68 = auVar110._8_8_ + auVar110._8_8_;
      dVar73 = auVar52._0_8_ + auVar52._0_8_;
      uVar82 = SUB84(dVar73,0);
      uVar105 = (undefined4)((ulonglong)dVar73 >> 0x20);
      auVar111._0_8_ = auVar40._0_8_ + auVar40._0_8_;
      auVar111._8_8_ = auVar40._8_8_ + auVar40._8_8_;
      auVar106._8_4_ = uVar82;
      auVar106._0_8_ = dVar68;
      auVar106._12_4_ = uVar105;
      auVar29._8_4_ = uVar82;
      auVar29._0_8_ = dVar68;
      auVar29._12_4_ = uVar105;
      auVar98._8_4_ = uVar82;
      auVar98._0_8_ = dVar68;
      auVar98._12_4_ = uVar105;
      auVar40 = blendpd(auVar98,auVar111,2);
      auVar107._0_8_ = auVar106._8_8_ * dVar74 - dVar68 * dVar95;
      auVar107._8_8_ = auVar111._0_8_ * dVar80 - auVar29._8_8_ * auVar90._0_8_;
      auVar30._8_4_ = SUB84(auVar111._8_8_,0);
      auVar30._0_8_ = auVar111._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar111._8_8_ >> 0x20);
      auVar91._0_8_ =
           (double)CONCAT44(local_1f8.Scale3D.XY.m128d_f64[0]._4_4_ &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_1f8.Scale3D.XY.m128d_f64[0]._0_4_ &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar91._8_4_ = local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
      auVar91._12_4_ = local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
      auVar6._4_8_ = dVar100;
      auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar84._0_8_ = auVar6._0_8_ << 0x20;
      auVar84._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar84._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar99._0_8_ = auVar40._0_8_ * auVar90._0_8_ - auVar111._0_8_ * auVar76._0_8_;
      auVar99._8_8_ = auVar40._8_8_ * auVar90._8_8_ - auVar30._8_8_ * dVar100;
      auVar85._8_8_ = auVar84._8_8_;
      auVar85._0_8_ = local_1f8.Scale3D.ZW.m128d_f64[0];
      auVar77._0_8_ =
           (double)CONCAT44((uint)((ulonglong)local_1f8.Scale3D.ZW.m128d_f64[0] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_1f8.Scale3D.ZW.m128d_f64[0],0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar77._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_ & _UNK_15061cc88;
      auVar77._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
      lVar20 = -(ulonglong)(auVar77._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2])
      ;
      lVar23 = -(ulonglong)(auVar77._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3])
      ;
      lVar21 = -(ulonglong)(auVar91._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar24 = -(ulonglong)(auVar91._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar8._4_4_ = local_1f8.Scale3D.XY.m128d_f64[0]._4_4_;
      auVar8._0_4_ = local_1f8.Scale3D.XY.m128d_f64[0]._0_4_;
      auVar8._8_4_ = local_1f8.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar8._12_4_ = local_1f8.Scale3D.XY.m128d_f64[1]._4_4_;
      auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar8);
      auVar92._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar40._4_4_,
                            ~(uint)lVar21 & auVar40._0_4_);
      auVar92._8_4_ = ~(uint)lVar24 & auVar40._8_4_;
      auVar92._12_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar40._12_4_;
      auVar31._8_4_ = SUB84(auVar107._8_8_,0);
      auVar31._0_8_ = auVar107._0_8_;
      auVar31._12_4_ = (int)((ulonglong)auVar107._8_8_ >> 0x20);
      auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar85);
      auVar76 = blendpd(auVar107,auVar99,2);
      in_XMM3._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar40._4_4_,
                            ~(uint)lVar20 & auVar40._0_4_);
      in_XMM3._8_4_ = ~(uint)lVar23 & auVar40._8_4_;
      in_XMM3._12_4_ = ~(uint)((ulonglong)lVar23 >> 0x20) & auVar40._12_4_;
      (param_1->field0_0x0)._s_0.X =
           auVar92._0_8_ *
           (dVar68 * auVar90._8_8_ + local_1f8.Translation.XY.m128d_f64[0] + auVar31._8_8_);
      (param_1->field0_0x0)._s_0.Y =
           auVar92._8_8_ *
           (dVar73 * auVar90._8_8_ + local_1f8.Translation.XY.m128d_f64[1] + auVar99._0_8_);
      (param_1->field0_0x0)._s_0.Z =
           in_XMM3._0_8_ *
           (auVar111._0_8_ * auVar90._8_8_ + local_1f8.Translation.ZW.m128d_f64[0] + auVar76._0_8_);
    }
    uVar11 = 0;
    dVar68 = (double)local_238._0_8_;
    dVar73 = (double)local_238._8_8_;
    if (this->bAbsoluteRotation == '\0') {
      dVar81 = (double)CONCAT44(local_1f8.Rotation.ZW.m128d_f64[0]._4_4_,
                                local_1f8.Rotation.ZW.m128d_f64[0]._0_4_) * dVar81;
      dVar75 = (double)CONCAT44(local_1f8.Rotation.ZW.m128d_f64[1]._4_4_,
                                local_1f8.Rotation.ZW.m128d_f64[1]._0_4_) * dVar75;
      uVar82 = (undefined4)((ulonglong)dVar75 >> 0x20);
      local_1f8.Rotation.XY.m128d_f64[0] = local_1f8.Rotation.XY.m128d_f64[0] * dVar67;
      local_1f8.Rotation.XY.m128d_f64[1] = local_1f8.Rotation.XY.m128d_f64[1] * dVar88;
      auVar86._8_4_ = SUB84(dVar75,0);
      auVar86._0_8_ = dVar81;
      auVar86._12_4_ = uVar82;
      dVar88 = auVar86._8_8_;
      auVar93._8_4_ = SUB84(local_1f8.Rotation.XY.m128d_f64[0],0);
      auVar93._0_8_ = local_1f8.Rotation.XY.m128d_f64[0];
      auVar93._12_4_ = (int)((ulonglong)local_1f8.Rotation.XY.m128d_f64[0] >> 0x20);
      dVar100 = local_1f8.Rotation.XY.m128d_f64[0] * dVar2;
      dVar95 = auVar93._8_8_ * dVar1;
      auVar32._8_4_ = SUB84(dVar75,0);
      auVar32._0_8_ = dVar88;
      auVar32._12_4_ = uVar82;
      auVar33._8_4_ = SUB84(dVar81,0);
      auVar33._0_8_ = dVar81;
      auVar33._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
      dVar73 = dVar1 * local_1f8.Rotation.XY.m128d_f64[1];
      dVar67 = dVar2 * local_1f8.Rotation.XY.m128d_f64[1];
      dVar68 = dVar81 * dVar1;
      in_XMM3._0_8_ =
           local_1f8.Rotation.XY.m128d_f64[0] * (double)local_238._8_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      in_XMM3._8_8_ =
           local_1f8.Rotation.XY.m128d_f64[0] * (double)local_238._0_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      auVar34._8_4_ = SUB84(dVar2 * dVar75,0);
      auVar34._0_8_ = dVar1 * dVar88;
      auVar34._12_4_ = (int)((ulonglong)(dVar2 * dVar75) >> 0x20);
      dVar1 = in_XMM3._0_8_ + dVar1 * dVar88 +
              local_1f8.Rotation.XY.m128d_f64[1] * (double)local_238._0_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar81 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar2 = in_XMM3._8_8_ + auVar34._8_8_ +
              local_1f8.Rotation.XY.m128d_f64[1] * (double)local_238._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar68 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      uVar17 = (uint)(byte)uVar3;
      dVar68 = dVar100 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar88 * (double)local_238._0_8_ +
               dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar81 * (double)local_238._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar73 = dVar95 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar32._8_8_ * (double)local_238._8_8_ +
               dVar67 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar33._8_8_ * (double)local_238._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    }
  }
  pFVar15 = (this->RelativeRotationCache).PayloadPtr.Ptr;
  if (pFVar15 != (FPayload *)0x0) {
    auVar35._8_8_ = -(ulonglong)((pFVar15->CachedQuat).W == dVar2);
    auVar35._0_8_ = -(ulonglong)((pFVar15->CachedQuat).Z == dVar1);
    iVar12 = movmskpd(uVar11,auVar35);
    auVar53._8_8_ = -(ulonglong)((pFVar15->CachedQuat).Y == dVar73);
    auVar53._0_8_ = -(ulonglong)((pFVar15->CachedQuat).X == dVar68);
    uVar17 = movmskpd(uVar17,auVar53);
    if ((iVar12 << 2 | uVar17) == 0xf) {
      local_218.Pitch = (pFVar15->CachedRotator).Pitch;
      local_218.Yaw = (pFVar15->CachedRotator).Yaw;
      local_218.Roll = (pFVar15->CachedRotator).Roll;
      uVar105 = SUB84(local_218.Roll,0);
      uVar101 = (undefined4)((ulonglong)local_218.Roll >> 0x20);
      uVar82 = 0xf;
      goto LAB_147955620;
    }
  }
  pTVar16 = (TQuat<double> *)local_238;
  auVar54._8_4_ = SUB84(dVar73,0);
  auVar54._0_8_ = dVar68;
  auVar54._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
  auVar36._8_4_ = SUB84(dVar2,0);
  auVar36._0_8_ = dVar1;
  auVar36._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar81 = dVar68 * dVar68 + dVar1 * dVar1;
  dVar75 = auVar54._8_8_ * dVar73 + auVar36._8_8_ * dVar2;
  auVar37._8_4_ = SUB84(dVar75,0);
  auVar37._0_8_ = dVar81;
  auVar37._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
  auVar38._0_8_ = auVar37._8_8_ + dVar81;
  auVar38._8_8_ = dVar81 + dVar75;
  auVar40 = sqrtpd(in_XMM3,auVar38);
  uVar22 = -(ulonglong)(__real_3e45798ee0000000 <= auVar38._0_8_);
  uVar25 = -(ulonglong)(__real_3e45798ee0000000 <= auVar38._8_8_);
  auVar76 = divpd((undefined1  [16])_Var114.m128d_f64,auVar40);
  auVar40 = divpd((undefined1  [16])_Var116.m128d_f64,auVar40);
  uVar17 = (uint)(uVar22 >> 0x20);
  uVar89 = (uint)(uVar25 >> 0x20);
  auVar55._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar55._4_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar55._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar55._12_4_ =
       ~uVar89 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar115._0_8_ = uVar22 & (ulonglong)(auVar76._0_8_ * dVar68);
  uVar13 = uVar25 & (ulonglong)(auVar76._8_8_ * dVar73);
  auVar115._8_4_ = (undefined4)uVar13;
  auVar115._12_4_ = (undefined4)(uVar13 >> 0x20);
  local_238 = auVar115 | auVar55;
  auVar117._0_8_ = (ulonglong)(auVar40._0_8_ * dVar1) & uVar22;
  uVar13 = (ulonglong)(auVar40._8_8_ * dVar2) & uVar25;
  auVar117._8_4_ = (undefined4)uVar13;
  auVar117._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar56._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar56._4_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar56._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar56._12_4_ =
       ~uVar89 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_228 = auVar56 | auVar117;
  pTVar14 = UE::Math::TQuat<double>::Rotator(pTVar16,&local_218);
  uVar17 = (uint)pTVar14;
  uVar82 = SUB84(pTVar16,0);
  uVar105 = SUB84(local_218.Roll,0);
  uVar101 = (undefined4)((ulonglong)local_218.Roll >> 0x20);
LAB_147955620:
  dVar2 = (param_1->field0_0x0)._s_0.X - (this->RelativeLocation).field0_0x0._s_0.X;
  dVar1 = (this->RelativeLocation).field0_0x0._s_0.Z;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar2 = (param_1->field0_0x0)._s_0.Y - (this->RelativeLocation).field0_0x0._s_0.Y,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar2 = (param_1->field0_0x0)._s_0.Z - dVar1,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  dVar67 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar2 = (this->RelativeRotation).Roll;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = dVar2;
  dVar75 = local_218.Pitch - (this->RelativeRotation).Pitch;
  dVar81 = local_218.Yaw - (this->RelativeRotation).Yaw;
  local_238._0_8_ = __real_3f1a36e2e0000000;
  dVar2 = (double)CONCAT44(uVar101,uVar105) - dVar2;
  auVar39._8_4_ = SUB84(dVar81,0);
  auVar39._0_8_ = dVar75;
  auVar39._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
  auVar40 = divpd(auVar39,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar40 = roundpd(auVar57,auVar40,3);
  dVar68 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar58._0_8_ = auVar40._0_8_ * dVar68;
  dVar73 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar58._8_8_ = auVar40._8_8_ * dVar73;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = dVar2;
  dVar75 = dVar75 - auVar58._0_8_;
  dVar81 = dVar81 - auVar58._8_8_;
  auVar40 = divpd(auVar41,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar40 = roundpd(auVar58,auVar40,3);
  dVar88 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar42._8_4_ = SUB84(dVar81,0);
  auVar42._0_8_ = dVar75;
  auVar42._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
  dVar2 = dVar2 - auVar40._0_8_ * dVar67;
  dVar100 = 0.0 - auVar40._8_8_ * dVar88;
  uVar13 = -(ulonglong)(0.0 <= dVar75);
  uVar25 = -(ulonglong)(0.0 <= dVar81);
  auVar59._0_8_ = uVar13 & (ulonglong)dVar75;
  auVar59._8_4_ = (undefined4)(uVar25 & (ulonglong)dVar81);
  auVar59._12_4_ = (undefined4)((uVar25 & (ulonglong)dVar81) >> 0x20);
  dVar81 = auVar42._8_8_ + dVar73;
  uVar22 = -(ulonglong)(0.0 <= dVar2);
  uVar26 = -(ulonglong)(0.0 <= dVar100);
  auVar94._0_4_ = ~(uint)uVar13 & SUB84(dVar75 + dVar68,0);
  auVar94._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar75 + dVar68) >> 0x20);
  auVar94._8_4_ = ~(uint)uVar25 & SUB84(dVar81,0);
  auVar94._12_4_ = ~(uint)(uVar25 >> 0x20) & (uint)((ulonglong)dVar81 >> 0x20);
  auVar94 = auVar94 | auVar59;
  auVar70._0_8_ = uVar22 & (ulonglong)dVar2;
  auVar70._8_4_ = (undefined4)(uVar26 & (ulonglong)dVar100);
  auVar70._12_4_ = (undefined4)((uVar26 & (ulonglong)dVar100) >> 0x20);
  auVar43._8_4_ = SUB84(dVar100,0);
  auVar43._0_8_ = dVar2;
  auVar43._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
  dVar81 = auVar43._8_8_ + dVar88;
  auVar78._0_4_ = ~(uint)uVar22 & SUB84(dVar2 + dVar67,0);
  auVar78._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar67) >> 0x20);
  auVar78._8_4_ = ~(uint)uVar26 & SUB84(dVar81,0);
  auVar78._12_4_ = ~(uint)(uVar26 >> 0x20) & (uint)((ulonglong)dVar81 >> 0x20);
  auVar78 = auVar78 | auVar70;
  uVar22 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar78._0_8_);
  uVar26 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar78._8_8_);
  uVar25 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar94._0_8_);
  uVar27 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar94._8_8_);
  auVar60._0_8_ = uVar22 & (ulonglong)(auVar78._0_8_ - dVar67);
  uVar13 = uVar26 & (ulonglong)(auVar78._8_8_ - dVar88);
  auVar60._8_4_ = (undefined4)uVar13;
  auVar60._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar44._0_4_ = ~(uint)uVar22 & auVar78._0_4_;
  auVar44._4_4_ = ~(uint)(uVar22 >> 0x20) & auVar78._4_4_;
  auVar44._8_4_ = ~(uint)uVar26 & auVar78._8_4_;
  auVar44._12_4_ = ~(uint)(uVar26 >> 0x20) & auVar78._12_4_;
  auVar60 = auVar60 | auVar44;
  auVar45._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
  auVar45._0_8_ = __real_3f1a36e2e0000000;
  auVar45._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar61._0_8_ =
       (double)CONCAT44(auVar60._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar60._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar61._8_4_ = auVar60._8_4_ & _UNK_15061cc88;
  auVar61._12_4_ = auVar60._12_4_ & _UNK_15061cc8c;
  auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < auVar61._8_8_);
  auVar46._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar61._0_8_);
  iVar18 = movmskpd(uVar82,auVar46);
  auVar62._0_8_ = (ulonglong)(auVar94._0_8_ - dVar68) & uVar25;
  uVar13 = uVar27 & (ulonglong)(auVar94._8_8_ - dVar73);
  auVar62._8_4_ = (undefined4)uVar13;
  auVar62._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar71._0_4_ = ~(uint)uVar25 & auVar94._0_4_;
  auVar71._4_4_ = ~(uint)(uVar25 >> 0x20) & auVar94._4_4_;
  auVar71._8_4_ = ~(uint)uVar27 & auVar94._8_4_;
  auVar71._12_4_ = ~(uint)(uVar27 >> 0x20) & auVar94._12_4_;
  auVar62 = auVar62 | auVar71;
  auVar63._0_8_ =
       (double)CONCAT44(auVar62._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar62._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar63._8_4_ = auVar62._8_4_ & _UNK_15061cc88;
  auVar63._12_4_ = auVar62._12_4_ & _UNK_15061cc8c;
  auVar108._8_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar63._8_8_);
  auVar108._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar63._0_8_);
  iVar12 = movmskpd(uVar17,auVar108);
  if ((bVar10) && (iVar18 << 2 == 0 && iVar12 == 0)) {
    bVar10 = false;
  }
  else {
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = dVar2;
    dVar68 = (param_1->field0_0x0)._s_0.Y;
    (this->RelativeLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->RelativeLocation).field0_0x0._s_0.Y = dVar68;
    (this->RelativeLocation).field0_0x0._s_0.Z = dVar2;
    if (iVar18 << 2 != 0 || iVar12 != 0) {
      (this->RelativeRotation).Pitch = local_218.Pitch;
      (this->RelativeRotation).Yaw = local_218.Yaw;
      (this->RelativeRotation).Roll = (double)CONCAT44(uVar101,uVar105);
      local_228._0_8_ = dVar1;
      pFVar15 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache);
      pTVar14 = &pFVar15->CachedRotator;
      if (((local_218.Pitch != (pFVar15->CachedRotator).Pitch) ||
          (local_218.Yaw != (pFVar15->CachedRotator).Yaw)) ||
         (local_218.Roll != (pFVar15->CachedRotator).Roll)) {
        dVar67 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        local_238._8_8_ = local_218.Yaw;
        local_238._0_8_ = local_218.Pitch;
        auVar40 = divpd(local_238,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar40 = roundpd(auVar64,auVar40,3);
        auVar65._0_8_ = auVar40._0_8_ * dVar67;
        dVar88 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar65._8_8_ = auVar40._8_8_ * dVar88;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = local_218.Roll;
        auVar40 = divpd(auVar47,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar68 = local_218.Pitch - auVar65._0_8_;
        dVar73 = local_218.Yaw - auVar65._8_8_;
        auVar40 = roundpd(auVar65,auVar40,3);
        dVar1 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar48._8_4_ = SUB84(dVar73,0);
        auVar48._0_8_ = dVar68;
        auVar48._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
        dVar2 = auVar48._8_8_ + dVar88;
        dVar81 = local_218.Roll - auVar40._0_8_ * dVar1;
        dVar75 = 0.0 - auVar40._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        uVar13 = -(ulonglong)(0.0 <= dVar68);
        uVar22 = -(ulonglong)(0.0 <= dVar73);
        auVar66._0_8_ = uVar13 & (ulonglong)dVar68;
        auVar66._8_4_ = (undefined4)(uVar22 & (ulonglong)dVar73);
        auVar66._12_4_ = (undefined4)((uVar22 & (ulonglong)dVar73) >> 0x20);
        auVar79._0_4_ = ~(uint)uVar13 & SUB84(dVar68 + dVar67,0);
        auVar79._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar68 + dVar67) >> 0x20);
        auVar79._8_4_ = ~(uint)uVar22 & SUB84(dVar2,0);
        auVar79._12_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)dVar2 >> 0x20);
        auVar49._8_4_ = SUB84(dVar75,0);
        auVar49._0_8_ = dVar81;
        auVar49._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
        dVar2 = auVar49._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar79 = auVar79 | auVar66;
        uVar13 = -(ulonglong)(0.0 <= dVar81);
        uVar22 = -(ulonglong)(0.0 <= dVar75);
        auVar87._0_4_ = ~(uint)uVar13 & SUB84(dVar81 + dVar1,0);
        auVar87._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar81 + dVar1) >> 0x20);
        auVar87._8_4_ = ~(uint)uVar22 & SUB84(dVar2,0);
        auVar87._12_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)dVar2 >> 0x20);
        auVar4._8_4_ = (int)((ulonglong)dVar75 & uVar22);
        auVar4._0_8_ = (ulonglong)dVar81 & uVar13;
        auVar4._12_4_ = (int)(((ulonglong)dVar75 & uVar22) >> 0x20);
        auVar87 = auVar87 | auVar4;
        uVar22 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar79._0_8_);
        uVar26 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar79._8_8_);
        uVar25 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar87._0_8_);
        auVar72._0_8_ = uVar22 & (ulonglong)(auVar79._0_8_ - dVar67);
        uVar13 = uVar26 & (ulonglong)(auVar79._8_8_ - dVar88);
        auVar72._8_4_ = (undefined4)uVar13;
        auVar72._12_4_ = (undefined4)(uVar13 >> 0x20);
        auVar50._0_4_ = ~(uint)uVar22 & auVar79._0_4_;
        auVar50._4_4_ = ~(uint)(uVar22 >> 0x20) & auVar79._4_4_;
        auVar50._8_4_ = ~(uint)uVar26 & auVar79._8_4_;
        auVar50._12_4_ = ~(uint)(uVar26 >> 0x20) & auVar79._12_4_;
        pTVar14->Pitch = (double)SUB168(auVar72 | auVar50,0);
        pTVar14->Yaw = (double)SUB168(auVar72 | auVar50,8);
        (pFVar15->CachedRotator).Roll =
             (double)((ulonglong)(auVar87._0_8_ - dVar1) & uVar25 |
                     CONCAT44(~(uint)(uVar25 >> 0x20) & auVar87._4_4_,~(uint)uVar25 & auVar87._0_4_)
                     );
        pTVar16 = UE::Math::TRotator<double>::Quaternion(pTVar14,(TQuat<double> *)local_238);
        dVar1 = pTVar16->Y;
        (pFVar15->CachedQuat).X = pTVar16->X;
        (pFVar15->CachedQuat).Y = dVar1;
        dVar1 = pTVar16->W;
        (pFVar15->CachedQuat).Z = pTVar16->Z;
        (pFVar15->CachedQuat).W = dVar1;
      }
    }
    pFVar15 = (this->RelativeRotationCache).PayloadPtr.Ptr;
    local_238._0_8_ = UE::Math::TQuat<double>::Identity.X;
    local_238._8_8_ = UE::Math::TQuat<double>::Identity.Y;
    local_228._0_8_ = UE::Math::TQuat<double>::Identity.Z;
    local_228._8_8_ = UE::Math::TQuat<double>::Identity.W;
    if (pFVar15 != (FPayload *)0x0) {
      local_238._0_8_ = (pFVar15->CachedQuat).X;
      local_238._8_8_ = (pFVar15->CachedQuat).Y;
      local_228._0_8_ = (pFVar15->CachedQuat).Z;
      local_228._8_8_ = (pFVar15->CachedQuat).W;
    }
    UpdateComponentToWorldWithParent
              (this,(this->AttachParent).field0_0x0.DebugPtr,this->AttachSocketName,(uint)param_3,
               (TQuat<double> *)local_238,param_4);
    if (((this->_padding_ & 1) != 0) && (*(char *)((longlong)&this->_padding_ + 2) < '\0')) {
      PostUpdateNavigationData(this);
    }
    bVar10 = true;
  }
  return bVar10;
}

// IsAnySimulatingPhysics @ 147955ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::IsAnySimulatingPhysics(USceneComponent *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147955eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x4f8))(this,0);
  return (bool)uVar1;
}

// IsAttachedTo @ 147955fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::IsAttachedTo(USceneComponent *this,USceneComponent *param_1)

{
  USceneComponent *pUVar1;
  
  if (param_1 != (USceneComponent *)0x0) {
    for (pUVar1 = (this->AttachParent).field0_0x0.DebugPtr; pUVar1 != (USceneComponent *)0x0;
        pUVar1 = (pUVar1->AttachParent).field0_0x0.DebugPtr) {
      if (param_1 == pUVar1) {
        return true;
      }
    }
  }
  return false;
}

// IsDeferringMovementUpdates @ 1479561b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
USceneComponent::IsDeferringMovementUpdates(USceneComponent *this,FScopedMovementUpdate *param_1)

{
  return param_1->bDeferUpdates;
}

// IsGroupedComponentMovementEnabled @ 147956370

bool __cdecl USceneComponent::IsGroupedComponentMovementEnabled(void)

{
  return SceneComponentCVars::bEnableGroupedComponentMovement;
}

// IsPostLoadThreadSafe @ 1479565f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::IsPostLoadThreadSafe(USceneComponent *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = (UClass *)this->_padding_;
  pUVar2 = StaticClass();
  return pUVar1 == pUVar2;
}

// IsSimulatingPhysics @ 1479566d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::IsSimulatingPhysics(USceneComponent *this,FName param_1)

{
  return false;
}

// IsVisible @ 147956ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::IsVisible(USceneComponent *this)

{
  if (((this->bHiddenInGame == '\0') && (this->bVisible != '\0')) &&
     ((this->CachedLevelCollection == (FLevelCollection *)0x0 ||
      (this->CachedLevelCollection->bIsVisible != false)))) {
    return true;
  }
  return false;
}

// IsVisibleInEditor @ 147956af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::IsVisibleInEditor(USceneComponent *this)

{
  return this->bVisible;
}

// IsWorldGeometry @ 147956b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::IsWorldGeometry(USceneComponent *this)

{
  return false;
}

// K2_AddLocalOffset @ 147956b80

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
USceneComponent::K2_AddLocalOffset
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  AddLocalOffset(this,(TVector<double> *)&local_28._s_0,param_2,pFVar1,param_4);
  return;
}

// K2_AddLocalRotation @ 147956bd0

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
USceneComponent::K2_AddLocalRotation
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  TRotator<double> local_28;
  
  local_28.Pitch = param_1->Pitch;
  local_28.Yaw = param_1->Yaw;
  local_28.Roll = param_1->Roll;
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  AddLocalRotation(this,&local_28,param_2,pFVar1,param_4);
  return;
}

// K2_AddLocalTransform @ 147956c20

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
USceneComponent::K2_AddLocalTransform
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  AddLocalTransform(this,param_1,param_2,pFVar1,param_4);
  return;
}

// K2_AddRelativeLocation @ 147956c50

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
USceneComponent::K2_AddRelativeLocation
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  AddRelativeLocation(this,(TVector<double> *)&local_28._s_0,param_2,pFVar1,param_4);
  return;
}

// K2_AddRelativeRotation @ 147956ca0

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
USceneComponent::K2_AddRelativeRotation
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  TRotator<double> local_48 [3];
  
  local_48[0].Roll = (this->RelativeRotation).Roll + param_1->Roll;
  local_48[0].Pitch = (this->RelativeRotation).Pitch + param_1->Pitch;
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  local_48[0].Yaw = (this->RelativeRotation).Yaw + param_1->Yaw;
  SetRelativeRotation(this,local_48,param_2,pFVar1,param_4);
  return;
}

// K2_AddWorldOffset @ 147956d10

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
USceneComponent::K2_AddWorldOffset
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  TVector<double>_u_0 local_48 [3];
  
  local_48[0]._16_8_ =
       (this->ComponentToWorld).Translation.ZW.m128d_f64[0] + (param_1->field0_0x0)._s_0.Z;
  local_48[0]._0_8_ =
       (this->ComponentToWorld).Translation.XY.m128d_f64[0] + (param_1->field0_0x0)._s_0.X;
  local_48[0]._8_8_ =
       (this->ComponentToWorld).Translation.XY.m128d_f64[1] + (param_1->field0_0x0)._s_0.Y;
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  SetWorldLocation(this,(TVector<double> *)&local_48[0]._s_0,param_2,pFVar1,param_4);
  return;
}

// K2_AddWorldRotation @ 147956d80

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
USceneComponent::K2_AddWorldRotation
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  TRotator<double> local_28;
  
  local_28.Pitch = param_1->Pitch;
  local_28.Yaw = param_1->Yaw;
  local_28.Roll = param_1->Roll;
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  AddWorldRotation(this,&local_28,param_2,pFVar1,param_4);
  return;
}

// K2_AddWorldTransform @ 147956dd0

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
USceneComponent::K2_AddWorldTransform
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  AddWorldTransform(this,param_1,param_2,pFVar1,param_4);
  return;
}

// K2_AddWorldTransformKeepScale @ 147956e00

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
USceneComponent::K2_AddWorldTransformKeepScale
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  AddWorldTransformKeepScale(this,param_1,param_2,pFVar1,param_4);
  return;
}

// K2_AttachTo @ 147956e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
USceneComponent::K2_AttachTo
          (USceneComponent *this,USceneComponent *param_1,FName param_2,Type param_3,bool param_4)

{
  undefined1 uVar1;
  undefined2 local_res20;
  undefined1 local_res22;
  bool local_res23;
  
  local_res23 = param_4;
  local_res20 = 0;
  local_res22 = 0;
  if (param_3 != KeepRelativeOffset) {
    if (param_3 == KeepWorldPosition) {
      local_res20 = 0x101;
    }
    else {
      if (param_3 != SnapToTarget) {
        if (param_3 == SnapToTargetIncludingScale) {
          local_res20 = 0x202;
          local_res22 = 2;
        }
        goto LAB_147956e83;
      }
      local_res20 = 0x202;
    }
    local_res22 = 1;
  }
LAB_147956e83:
  uVar1 = (**(code **)(this->_padding_ + 0x508))(this,param_1,&local_res20,param_2);
  return (bool)uVar1;
}

// K2_AttachToComponent @ 147956ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
USceneComponent::K2_AttachToComponent
          (USceneComponent *this,USceneComponent *param_1,FName param_2,EAttachmentRule param_3,
          EAttachmentRule param_4,EAttachmentRule param_5,bool param_6)

{
  undefined1 uVar1;
  EAttachmentRule local_res20;
  EAttachmentRule local_res21;
  EAttachmentRule local_res22;
  bool local_res23;
  
  local_res21 = param_4;
  local_res22 = param_5;
  local_res23 = param_6;
  local_res20 = param_3;
  uVar1 = (**(code **)(this->_padding_ + 0x508))(this,param_1,&local_res20,param_2);
  return (bool)uVar1;
}

// K2_DetachFromComponent @ 147956ee0

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
USceneComponent::K2_DetachFromComponent
          (USceneComponent *this,EDetachmentRule param_1,EDetachmentRule param_2,
          EDetachmentRule param_3,bool param_4)

{
  EDetachmentRule local_res10;
  EDetachmentRule local_res11;
  EDetachmentRule local_res12;
  bool local_res13;
  
  local_res13 = param_4;
  local_res10 = param_1;
  local_res11 = param_2;
  local_res12 = param_3;
  (**(code **)(this->_padding_ + 0x518))(this,&local_res10);
  return;
}

// K2_GetComponentLocation @ 147956f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
USceneComponent::K2_GetComponentLocation
          (USceneComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
  dVar1 = (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ComponentToWorld).Translation.XY.m128d_f64[0]
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// K2_GetComponentRotation @ 147956f40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
USceneComponent::K2_GetComponentRotation
          (USceneComponent *this,TRotator<double> *__return_storage_ptr__)

{
  GetComponentRotation(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// K2_GetComponentScale @ 147956f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
USceneComponent::K2_GetComponentScale(USceneComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ComponentToWorld).Scale3D.XY.m128d_f64[1];
  dVar1 = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ComponentToWorld).Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// K2_GetComponentToWorld @ 147956f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
USceneComponent::K2_GetComponentToWorld
          (USceneComponent *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
  dVar2 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->ComponentToWorld).Translation.XY.m128d_f64[0];
  dVar4 = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
  dVar3 = (this->ComponentToWorld).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->ComponentToWorld).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->ComponentToWorld).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// K2_SetRelativeLocation @ 147956fe0

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
USceneComponent::K2_SetRelativeLocation
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  SetRelativeLocation(this,(TVector<double> *)&local_28._s_0,param_2,pFVar1,param_4);
  return;
}

// K2_SetRelativeLocationAndRotation @ 147957030

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
USceneComponent::K2_SetRelativeLocationAndRotation
          (USceneComponent *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          FHitResult *param_4,bool param_5)

{
  FHitResult *pFVar1;
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  local_48.Pitch = param_2->Pitch;
  local_48.Yaw = param_2->Yaw;
  local_48.Roll = param_2->Roll;
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (FHitResult *)0x0;
  if (param_3) {
    pFVar1 = param_4;
  }
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_28._s_0,&local_48,param_3,pFVar1,param_5);
  return;
}

// K2_SetRelativeRotation @ 1479570a0

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
USceneComponent::K2_SetRelativeRotation
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  TRotator<double> local_28;
  
  local_28.Pitch = param_1->Pitch;
  local_28.Yaw = param_1->Yaw;
  local_28.Roll = param_1->Roll;
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  SetRelativeRotation(this,&local_28,param_2,pFVar1,param_4);
  return;
}

// K2_SetRelativeTransform @ 1479570f0

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
USceneComponent::K2_SetRelativeTransform
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  SetRelativeTransform(this,param_1,param_2,pFVar1,param_4);
  return;
}

// K2_SetWorldLocation @ 147957120

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
USceneComponent::K2_SetWorldLocation
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  SetWorldLocation(this,(TVector<double> *)&local_28._s_0,param_2,pFVar1,param_4);
  return;
}

// K2_SetWorldLocationAndRotation @ 147957170

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
USceneComponent::K2_SetWorldLocationAndRotation
          (USceneComponent *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          FHitResult *param_4,bool param_5)

{
  TQuat<double> *pTVar1;
  FHitResult *pFVar2;
  TQuat<double> local_68;
  TVector<double>_u_0 local_48;
  TRotator<double> local_28;
  
  local_68.X = param_2->Pitch;
  local_68.Y = param_2->Yaw;
  local_68.Z = param_2->Roll;
  pFVar2 = (FHitResult *)0x0;
  if (param_3) {
    pFVar2 = param_4;
  }
  local_28.Pitch = local_68.X;
  local_28.Yaw = local_68.Y;
  local_28.Roll = local_68.Z;
  if ((this->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
    local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    SetRelativeLocationAndRotation
              (this,(TVector<double> *)&local_48._s_0,(TRotator<double> *)&local_68,param_3,pFVar2,
               param_5);
  }
  else {
    pTVar1 = UE::Math::TRotator<double>::Quaternion(&local_28,&local_68);
    local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    SetWorldLocationAndRotation
              (this,(TVector<double> *)&local_48._s_0,pTVar1,param_3,pFVar2,param_5);
  }
  return;
}

// K2_SetWorldRotation @ 147957260

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
USceneComponent::K2_SetWorldRotation
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  TQuat<double> *pTVar1;
  FHitResult *pFVar2;
  TQuat<double> local_48;
  TRotator<double> local_28;
  
  local_48.X = param_1->Pitch;
  local_48.Y = param_1->Yaw;
  local_48.Z = param_1->Roll;
  pFVar2 = (FHitResult *)0x0;
  if (param_2) {
    pFVar2 = param_3;
  }
  local_28.Pitch = local_48.X;
  local_28.Yaw = local_48.Y;
  local_28.Roll = local_48.Z;
  if ((this->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
    SetRelativeRotation(this,(TRotator<double> *)&local_48,param_2,pFVar2,param_4);
    return;
  }
  pTVar1 = UE::Math::TRotator<double>::Quaternion(&local_28,&local_48);
  SetWorldRotation(this,pTVar1,param_2,pFVar2,param_4);
  return;
}

// K2_SetWorldTransform @ 147957320

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
USceneComponent::K2_SetWorldTransform
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          bool param_4)

{
  FHitResult *pFVar1;
  
  pFVar1 = (FHitResult *)0x0;
  if (param_2) {
    pFVar1 = param_3;
  }
  SetWorldTransform(this,param_1,param_2,pFVar1,param_4);
  return;
}

// ModifiedAttachChildren @ 1479579c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::ModifiedAttachChildren(USceneComponent *this)

{
  return;
}

// MoveComponent @ 1479579d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
USceneComponent::MoveComponent
          (USceneComponent *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          FHitResult *param_4,EMoveComponentFlags param_5,ETeleportType param_6)

{
  double dVar1;
  FPayload *pFVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 uVar10;
  undefined4 in_EAX;
  int iVar11;
  TQuat<double> *pTVar12;
  uint uVar13;
  code *pcVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
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
  double dVar35;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  TQuat<double> local_58 [2];
  
  if ((this->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
    if ((((param_1->field0_0x0)._s_0.X == 0.0) && ((param_1->field0_0x0)._s_0.Y == 0.0)) &&
       ((param_1->field0_0x0)._s_0.Z == 0.0)) {
      dVar1 = (this->RelativeRotation).Roll;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar1;
      dVar35 = param_2->Pitch - (this->RelativeRotation).Pitch;
      dVar38 = param_2->Yaw - (this->RelativeRotation).Yaw;
      dVar1 = param_2->Roll - dVar1;
      auVar21._8_4_ = SUB84(dVar38,0);
      auVar21._0_8_ = dVar35;
      auVar21._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      auVar22 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar22 = roundpd(auVar29,auVar22,3);
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar30._0_8_ = auVar22._0_8_ * dVar7;
      dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar30._8_8_ = auVar22._8_8_ * dVar8;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar1;
      dVar35 = dVar35 - auVar30._0_8_;
      dVar38 = dVar38 - auVar30._8_8_;
      auVar22 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar22 = roundpd(auVar30,auVar22,3);
      dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar24._8_4_ = SUB84(dVar38,0);
      auVar24._0_8_ = dVar35;
      auVar24._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      dVar1 = dVar1 - auVar22._0_8_ * dVar5;
      dVar4 = 0.0 - auVar22._8_8_ * dVar6;
      uVar15 = -(ulonglong)(0.0 <= dVar35);
      uVar17 = -(ulonglong)(0.0 <= dVar38);
      auVar36._0_8_ = (ulonglong)dVar35 & uVar15;
      auVar36._8_4_ = (undefined4)((ulonglong)dVar38 & uVar17);
      auVar36._12_4_ = (undefined4)(((ulonglong)dVar38 & uVar17) >> 0x20);
      dVar38 = auVar24._8_8_ + dVar8;
      uVar16 = -(ulonglong)(0.0 <= dVar1);
      uVar18 = -(ulonglong)(0.0 <= dVar4);
      auVar39._0_4_ = ~(uint)uVar15 & SUB84(dVar35 + dVar7,0);
      auVar39._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar7) >> 0x20);
      auVar39._8_4_ = ~(uint)uVar17 & SUB84(dVar38,0);
      auVar39._12_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
      auVar25._8_4_ = SUB84(dVar4,0);
      auVar25._0_8_ = dVar1;
      auVar25._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar39 = auVar39 | auVar36;
      dVar38 = auVar25._8_8_ + dVar6;
      auVar37._0_4_ = ~(uint)uVar16 & SUB84(dVar1 + dVar5,0);
      auVar37._4_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar5) >> 0x20);
      auVar37._8_4_ = ~(uint)uVar18 & SUB84(dVar38,0);
      auVar37._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
      auVar22._8_4_ = (int)((ulonglong)dVar4 & uVar18);
      auVar22._0_8_ = (ulonglong)dVar1 & uVar16;
      auVar22._12_4_ = (int)(((ulonglong)dVar4 & uVar18) >> 0x20);
      auVar37 = auVar37 | auVar22;
      uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar37._0_8_);
      uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar37._8_8_);
      uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar39._0_8_);
      uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar39._8_8_);
      auVar31._0_8_ = uVar16 & (ulonglong)(auVar37._0_8_ - dVar5);
      uVar15 = uVar18 & (ulonglong)(auVar37._8_8_ - dVar6);
      auVar31._8_4_ = (undefined4)uVar15;
      auVar31._12_4_ = (undefined4)(uVar15 >> 0x20);
      auVar26._0_4_ = ~(uint)uVar16 & auVar37._0_4_;
      auVar26._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar37._4_4_;
      auVar26._8_4_ = ~(uint)uVar18 & auVar37._8_4_;
      auVar26._12_4_ = ~(uint)(uVar18 >> 0x20) & auVar37._12_4_;
      auVar31 = auVar31 | auVar26;
      auVar27._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
      auVar27._0_8_ = __real_3f1a36e2e0000000;
      auVar27._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
      auVar32._0_8_ =
           (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
      auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
      auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < auVar32._8_8_);
      auVar28._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar32._0_8_);
      uVar13 = movmskpd((int)this,auVar28);
      auVar33._0_8_ = uVar17 & (ulonglong)(auVar39._0_8_ - dVar7);
      uVar15 = uVar19 & (ulonglong)(auVar39._8_8_ - dVar8);
      auVar33._8_4_ = (undefined4)uVar15;
      auVar33._12_4_ = (undefined4)(uVar15 >> 0x20);
      auVar3._4_4_ = ~(uint)(uVar17 >> 0x20) & auVar39._4_4_;
      auVar3._0_4_ = ~(uint)uVar17 & auVar39._0_4_;
      auVar3._8_4_ = ~(uint)uVar19 & auVar39._8_4_;
      auVar3._12_4_ = ~(uint)(uVar19 >> 0x20) & auVar39._12_4_;
      auVar33 = auVar33 | auVar3;
      auVar34._0_8_ =
           (double)CONCAT44(auVar33._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar33._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar34._8_4_ = auVar33._8_4_ & _UNK_15061cc88;
      auVar34._12_4_ = auVar33._12_4_ & _UNK_15061cc8c;
      lVar20 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._8_8_);
      auVar9._8_4_ = (int)lVar20;
      auVar9._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._0_8_);
      auVar9._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      iVar11 = movmskpd(in_EAX,auVar9);
      if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
        if (param_4 != (FHitResult *)0x0) {
          memset(param_4,0,0x100);
          (param_4->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
          (param_4->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
          param_4->Time = 1.0;
          param_4->MyItem = -1;
          (param_4->HitObjectHandle).ManagerInterface.InterfaceInstance =
               (IActorInstanceManagerInterface *)0x0;
          (param_4->HitObjectHandle).InstanceIndex = -1;
          (param_4->HitObjectHandle).ResolutionStatus = Invalid;
          *(undefined3 *)&(param_4->HitObjectHandle).field_0x1d = 0;
        }
        return true;
      }
    }
    pcVar14 = *(code **)(this->_padding_ + 0x588);
    pFVar2 = (this->RelativeRotationCache).PayloadPtr.Ptr;
    if (((pFVar2 == (FPayload *)0x0) || (param_2->Pitch != (pFVar2->CachedRotator).Pitch)) ||
       ((param_2->Yaw != (pFVar2->CachedRotator).Yaw ||
        (param_2->Roll != (pFVar2->CachedRotator).Roll)))) {
      UE::Math::TRotator<double>::Quaternion(param_2,local_58);
    }
    else {
      local_58[0].X = (pFVar2->CachedQuat).X;
      local_58[0].Y = (pFVar2->CachedQuat).Y;
      local_58[0].Z = (pFVar2->CachedQuat).Z;
      local_58[0].W = (pFVar2->CachedQuat).W;
    }
    pTVar12 = local_58;
  }
  else {
    pcVar14 = *(code **)(this->_padding_ + 0x588);
    pTVar12 = UE::Math::TRotator<double>::Quaternion(param_2,local_58);
  }
  uVar10 = (*pcVar14)(this,param_1,pTVar12,param_3,param_4,param_5,param_6);
  return (bool)uVar10;
}

// MoveComponentImpl @ 147957ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
USceneComponent::MoveComponentImpl
          (USceneComponent *this,TVector<double> *param_1,TQuat<double> *param_2,bool param_3,
          FHitResult *param_4,EMoveComponentFlags param_5,ETeleportType param_6)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  undefined4 extraout_EAX;
  uint uVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_MoveComponentSceneComponentTime> FVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined4 uVar29;
  int iVar30;
  uint uVar31;
  USceneComponent *pUVar32;
  FNameEntryId FVar33;
  FName FVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  FColor_u_0 local_res8 [2];
  LARGE_INTEGER local_318;
  FName local_310;
  FName local_308;
  FStatMessage local_2f8 [2];
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined1 uStack_2cc;
  undefined2 uStack_2cb;
  undefined1 uStack_2c9;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined1 uStack_2ac;
  undefined2 uStack_2ab;
  undefined1 uStack_2a9;
  TVector<double>_u_0 local_2a8;
  FName local_288 [5];
  undefined8 local_260;
  undefined4 local_1bc;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_160;
  undefined4 local_bc;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined7 extraout_var;
  
  lVar35 = 2;
  FVar26 = StatPtr_STAT_MoveComponentSceneComponentTime;
  if (StatPtr_STAT_MoveComponentSceneComponentTime ==
      (FThreadSafeStaticStat<FStat_STAT_MoveComponentSceneComponentTime>)0x0) {
    pFVar25 = ::FName::FName(local_288,"STAT_MoveComponentSceneComponentTime");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_MoveComponentSceneComponentTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoveComponentSceneComponentTime,
                        *pFVar25,L"MoveComponent(SceneComp) Time","STATGROUP_Game",
                        "STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_308.ComparisonIndex.Value = 0;
  local_308.Number = 0;
  bVar18 = false;
  bVar20 = false;
  FVar34 = *(FName *)FVar26;
  FVar33 = FVar34.ComparisonIndex.Value;
  uVar24 = FVar34.Number;
  if ((FVar33.Value == 0) && (uVar24 == 0)) {
LAB_147957df3:
    bVar19 = false;
    FVar34 = local_308;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar18 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_310.ComparisonIndex.Value = FVar33.Value;
        local_310.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_310,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                   ,0xd55);
        bVar18 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147957df3;
    local_318.s.LowPart = FVar33.Value;
    local_318.s.HighPart = uVar24;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar19 = true;
  }
  if (this == (USceneComponent *)0x0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Test",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                        ,0x760,L"");
    if (bVar21) {
      pcVar3 = (code *)swi(3);
      uVar22 = (*pcVar3)();
      return (bool)uVar22;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    pUVar32 = this;
    bVar21 = CheckStaticMobilityAndWarn(this,&SceneComponentStatics::MobilityWarnText);
    uVar29 = SUB84(pUVar32,0);
    puVar27 = (undefined8 *)CONCAT71(extraout_var,bVar21);
    if (!bVar21) {
      if (param_4 != (FHitResult *)0x0) {
        puVar27 = &local_260;
        memset(puVar27,0,0x100);
        uVar29 = SUB84(puVar27,0);
        uStack_2d0 = 0xffffffff;
        uStack_2cb = 0;
        uStack_2c9 = 0;
        local_2d8 = 0;
        uStack_2cc = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1bc = 0xffffffff;
        local_260._4_4_ = 0x3f800000;
        local_198 = 0;
        uStack_190 = 0xffffffff;
        puVar28 = &local_260;
        do {
          uVar14 = *puVar28;
          uVar15 = puVar28[1];
          uVar16 = puVar28[2];
          uVar17 = puVar28[3];
          puVar27 = puVar28 + 0x10;
          param_4->FaceIndex = (int)uVar14;
          param_4->Time = (float)(int)((ulonglong)uVar14 >> 0x20);
          param_4->Distance = (float)(int)uVar15;
          param_4->_padding_ = (int)((ulonglong)uVar15 >> 0x20);
          uVar14 = puVar28[4];
          uVar15 = puVar28[5];
          *(undefined8 *)&param_4->Location = uVar16;
          *(undefined8 *)&(param_4->Location).field_0x8 = uVar17;
          uVar16 = puVar28[6];
          uVar17 = puVar28[7];
          *(undefined8 *)&(param_4->Location).field_0x10 = uVar14;
          *(undefined8 *)&param_4->ImpactPoint = uVar15;
          uVar14 = puVar28[8];
          uVar15 = puVar28[9];
          *(undefined8 *)&(param_4->ImpactPoint).field_0x8 = uVar16;
          *(undefined8 *)&(param_4->ImpactPoint).field_0x10 = uVar17;
          uVar16 = puVar28[10];
          uVar17 = puVar28[0xb];
          *(undefined8 *)&param_4->Normal = uVar14;
          *(undefined8 *)&(param_4->Normal).field_0x8 = uVar15;
          uVar14 = puVar28[0xc];
          uVar15 = puVar28[0xd];
          *(undefined8 *)&(param_4->Normal).field_0x10 = uVar16;
          *(undefined8 *)&param_4->ImpactNormal = uVar17;
          uVar16 = puVar28[0xe];
          uVar17 = puVar28[0xf];
          *(undefined8 *)&(param_4->ImpactNormal).field_0x8 = uVar14;
          *(undefined8 *)&(param_4->ImpactNormal).field_0x10 = uVar15;
          *(undefined8 *)&param_4->TraceStart = uVar16;
          *(undefined8 *)&(param_4->TraceStart).field_0x8 = uVar17;
          lVar35 = lVar35 + -1;
          puVar28 = puVar27;
          param_4 = (FHitResult *)&(param_4->TraceStart).field_0x10;
        } while (lVar35 != 0);
      }
      uVar23 = SUB84(puVar27,0);
      if (this->bComponentToWorldUpdated == 0) {
        pUVar32 = this;
        UpdateComponentToWorld(this,None,None);
        uVar29 = SUB84(pUVar32,0);
        uVar23 = extraout_EAX;
      }
      dVar2 = (param_1->field0_0x0)._s_0.X;
      if (((dVar2 == 0.0) && ((param_1->field0_0x0)._s_0.Y == 0.0)) &&
         ((param_1->field0_0x0)._s_0.Z == 0.0)) {
        dVar12 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
        dVar13 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
        dVar10 = (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
        dVar11 = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
        dVar7 = param_2->Z - dVar12;
        dVar8 = param_2->W - dVar13;
        dVar12 = param_2->Z + dVar12;
        dVar13 = param_2->W + dVar13;
        dVar36 = param_2->X - dVar10;
        dVar37 = param_2->Y - dVar11;
        lVar35 = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar8,0) & _UNK_15061cc88));
        auVar4._8_4_ = (int)lVar35;
        auVar4._0_8_ = -(ulonglong)
                        (__real_3e45798ee0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar7,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar4._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
        iVar30 = movmskpd(uVar29,auVar4);
        lVar35 = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar37,0) & _UNK_15061cc88));
        dVar10 = param_2->X + dVar10;
        dVar11 = param_2->Y + dVar11;
        auVar5._8_4_ = (int)lVar35;
        auVar5._0_8_ = -(ulonglong)
                        (__real_3e45798ee0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar36,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar5._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
        uVar24 = movmskpd(uVar23,auVar5);
        uVar31 = iVar30 << 2 | uVar24;
        if (uVar31 != 0) {
          lVar35 = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar13,0) & _UNK_15061cc88));
          auVar6._8_4_ = (int)lVar35;
          auVar6._0_8_ = -(ulonglong)
                          (__real_3e45798ee0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar12,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar6._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
          uVar31 = movmskpd(uVar31,auVar6);
          lVar35 = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar11,0) & _UNK_15061cc88));
          auVar9._8_4_ = (int)lVar35;
          auVar9._0_8_ = -(ulonglong)
                          (__real_3e45798ee0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar10,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar9._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
          iVar30 = movmskpd(uVar24,auVar9);
          if ((uVar31 & 0x3fffffff) != 0 || iVar30 != 0) goto LAB_147957fff;
        }
      }
      else {
LAB_147957fff:
        local_2a8._s_0.Z =
             (this->ComponentToWorld).Translation.ZW.m128d_f64[0] + (param_1->field0_0x0)._s_0.Z;
        local_2a8._s_0.X = (this->ComponentToWorld).Translation.XY.m128d_f64[0] + dVar2;
        local_2a8._s_0.Y =
             (this->ComponentToWorld).Translation.XY.m128d_f64[1] + (param_1->field0_0x0)._s_0.Y;
        bVar21 = InternalSetWorldLocationAndRotation
                           (this,(TVector<double> *)&local_2a8._s_0,param_2,false,param_6);
        if ((bVar21) && ((this->ScopedMovementStack).ArrayNum < 1)) {
          UpdateOverlaps(this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                         (TArrayView<FOverlapInfo_const_,int> *)0x0);
          bVar21 = true;
          goto LAB_147958146;
        }
      }
      bVar21 = true;
      goto LAB_147958146;
    }
  }
  if (param_4 != (FHitResult *)0x0) {
    memset(&local_160,0,0x100);
    uStack_2b0 = 0xffffffff;
    uStack_2ab = 0;
    uStack_2a9 = 0;
    local_2b8 = 0;
    uStack_2ac = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_160._4_4_ = 0x3f800000;
    local_bc = 0xffffffff;
    local_98 = 0;
    uStack_90 = 0xffffffff;
    puVar27 = &local_160;
    do {
      uVar14 = *puVar27;
      uVar15 = puVar27[1];
      uVar16 = puVar27[2];
      uVar17 = puVar27[3];
      param_4->FaceIndex = (int)uVar14;
      param_4->Time = (float)(int)((ulonglong)uVar14 >> 0x20);
      param_4->Distance = (float)(int)uVar15;
      param_4->_padding_ = (int)((ulonglong)uVar15 >> 0x20);
      uVar14 = puVar27[4];
      uVar15 = puVar27[5];
      *(undefined8 *)&param_4->Location = uVar16;
      *(undefined8 *)&(param_4->Location).field_0x8 = uVar17;
      uVar16 = puVar27[6];
      uVar17 = puVar27[7];
      *(undefined8 *)&(param_4->Location).field_0x10 = uVar14;
      *(undefined8 *)&param_4->ImpactPoint = uVar15;
      uVar14 = puVar27[8];
      uVar15 = puVar27[9];
      *(undefined8 *)&(param_4->ImpactPoint).field_0x8 = uVar16;
      *(undefined8 *)&(param_4->ImpactPoint).field_0x10 = uVar17;
      uVar16 = puVar27[10];
      uVar17 = puVar27[0xb];
      *(undefined8 *)&param_4->Normal = uVar14;
      *(undefined8 *)&(param_4->Normal).field_0x8 = uVar15;
      uVar14 = puVar27[0xc];
      uVar15 = puVar27[0xd];
      *(undefined8 *)&(param_4->Normal).field_0x10 = uVar16;
      *(undefined8 *)&param_4->ImpactNormal = uVar17;
      uVar16 = puVar27[0xe];
      uVar17 = puVar27[0xf];
      *(undefined8 *)&(param_4->ImpactNormal).field_0x8 = uVar14;
      *(undefined8 *)&(param_4->ImpactNormal).field_0x10 = uVar15;
      *(undefined8 *)&param_4->TraceStart = uVar16;
      *(undefined8 *)&(param_4->TraceStart).field_0x8 = uVar17;
      lVar35 = lVar35 + -1;
      puVar27 = puVar27 + 0x10;
      param_4 = (FHitResult *)&(param_4->TraceStart).field_0x10;
    } while (lVar35 != 0);
  }
  bVar21 = false;
LAB_147958146:
  if (bVar20) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar19) && (FVar34 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_2f8[0].NameAndInfo.Index = FVar34.ComparisonIndex.Value;
      local_2f8[0].NameAndInfo.Number = FVar34.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_318);
      local_2f8[0].StatData.Pad[4] = '\0';
      local_2f8[0].StatData.Pad[5] = '\0';
      local_2f8[0].StatData.Pad[6] = '\0';
      local_2f8[0].StatData.Pad[7] = '\0';
      local_2f8[0].StatData.Pad[0] = local_318.s.LowPart._0_1_;
      local_2f8[0].StatData.Pad[1] = local_318.s.LowPart._1_1_;
      local_2f8[0].StatData.Pad[2] = local_318.s.LowPart._2_1_;
      local_2f8[0].StatData.Pad[3] = local_318.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_2f8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return bVar21;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar21;
}

// OnComponentDestroyed @ 147958c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnComponentDestroyed(USceneComponent *this,bool param_1)

{
  int *piVar1;
  longlong lVar2;
  UObjectBaseUtility *pUVar3;
  USceneComponent *pUVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FUObjectItem *pFVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  wchar_t *pwVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  USceneComponent *pUVar21;
  TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_> *pTVar22;
  uint local_res18;
  ulonglong in_stack_fffffffffffffe08;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  UObject *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  (this->ScopedMovementStack).ArrayNum = 0;
  if ((this->ScopedMovementStack).ArrayMax < 0) {
    in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 & 0xffffffff00000000;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ScopedMovementStack).AllocatorInstance,0,
               &(this->ScopedMovementStack).ArrayMax);
  }
  if ((GExitPurge == false) && (!(bool)this->bComputeBoundsOnceForGame)) {
    lVar2 = this->_padding_;
    local_res18 = (this->AttachChildren).ArrayNum;
    uVar20 = (ulonglong)local_res18;
    if (param_1) {
      pUVar21 = (USceneComponent *)0x0;
      bVar9 = false;
      local_1c8.Data = (FScriptContainerElement *)0x0;
      local_1c0 = 0;
      if ((int)local_res18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar20);
      }
      if (0 < (int)local_res18) {
        pwVar18 = (wchar_t *)((longlong)&local_1c0 + 4);
        pwVar14 = (wchar_t *)(in_stack_fffffffffffffe08 & 0xffffffff00000000);
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_res18,&local_1c8,0,(int *)pwVar18);
        pTVar22 = &this->AttachChildren;
        do {
          iVar11 = (this->AttachChildren).ArrayNum;
          pFVar19 = (FScriptContainerElement *)(longlong)iVar11;
          uVar17 = iVar11 - 1;
          uVar10 = 0;
          if ((int)uVar17 < iVar11) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if (uVar10 == 0) {
            pwVar14 = (wchar_t *)(longlong)(int)uVar17;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            pwVar18 = (wchar_t *)pFVar19;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar11 = (this->AttachChildren).ArrayNum;
          pFVar19 = (FScriptContainerElement *)(longlong)iVar11;
          pUVar3 = *(UObjectBaseUtility **)
                    ((pTVar22->AllocatorInstance).Data + (longlong)pFVar19 * 8 + -8);
          if ((pUVar3 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar3[4].field_0x8 == lVar2))
          {
            if (iVar11 < 1) {
              pwVar14 = (wchar_t *)0x0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              pwVar18 = (wchar_t *)pFVar19;
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 = *(UObject **)
                          ((pTVar22->AllocatorInstance).Data +
                          (longlong)(this->AttachChildren).ArrayNum * 8 + -8),
               pUVar5 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(pUVar5);
            }
            iVar11 = (this->AttachChildren).ArrayNum;
            uVar10 = iVar11 - 1;
            pFVar19 = (pTVar22->AllocatorInstance).Data + (longlong)(int)uVar10 * 8;
            iVar11 = ~uVar10 + iVar11;
            if (iVar11 != 0) {
              memmove(pFVar19,pFVar19 + 8,(longlong)iVar11 << 3);
            }
            piVar1 = &(this->AttachChildren).ArrayNum;
            *piVar1 = *piVar1 + -1;
            if (pUVar3 != (UObjectBaseUtility *)0x0) {
              local_1b8 = (UObject *)pUVar3;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar3);
              }
              if ((local_1c8.Data <= (FScriptContainerElement *)&local_1b8) &&
                 ((FScriptContainerElement *)&local_1b8 <
                  local_1c8.Data + (longlong)local_1c0._4_4_ * 8)) {
                pwVar14 = (wchar_t *)&local_1b8;
                pwVar18 = (wchar_t *)local_1c8.Data;
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
              iVar11 = (int)local_1c0;
              if ((int)local_1c0 == local_1c0._4_4_) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
              }
              local_1c0 = CONCAT44(local_1c0._4_4_,iVar11 + 1);
              *(UObject **)(local_1c8.Data + (longlong)iVar11 * 8) = local_1b8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_1b8 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_1b8);
              }
            }
          }
          else {
            pUVar4 = *(USceneComponent **)&pUVar3[5].field_0x8;
            if (pUVar4 == (USceneComponent *)0x0) {
              if (((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
                  ((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) == 0)) &&
                 (1 < (byte)LogSceneComponent._0_1_)) {
                pFVar13 = UObjectBaseUtility::GetFullName(pUVar3,&local_f8,(UObject *)0x0,None);
                if ((pFVar13->Data).ArrayNum == 0) {
                  pwVar14 = L"";
                }
                else {
                  pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
                }
                UObjectBaseUtility::GetFullName(pUVar3,&local_108,(UObject *)0x0,None);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this,&local_118,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
                if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_118.Data.AllocatorInstance.Data);
                }
                FVar15.Data = local_f8.Data.AllocatorInstance.Data;
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                  FVar15.Data = local_f8.Data.AllocatorInstance.Data;
                }
LAB_147959024:
                if (FVar15.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar15.Data);
                }
              }
LAB_147959035:
              iVar11 = (this->AttachChildren).ArrayNum;
              pFVar19 = (FScriptContainerElement *)(longlong)iVar11;
              if (iVar11 < 1) {
                pwVar14 = (wchar_t *)0x0;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                pwVar18 = (wchar_t *)pFVar19;
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar5 = *(UObject **)
                            ((pTVar22->AllocatorInstance).Data +
                            (longlong)(this->AttachChildren).ArrayNum * 8 + -8),
                 pUVar5 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar5);
              }
              iVar11 = (this->AttachChildren).ArrayNum;
              uVar10 = iVar11 - 1;
              pFVar19 = (pTVar22->AllocatorInstance).Data + (longlong)(int)uVar10 * 8;
              iVar11 = ~uVar10 + iVar11;
              if (iVar11 != 0) {
                memmove(pFVar19,pFVar19 + 8,(longlong)iVar11 << 3);
              }
              piVar1 = &(this->AttachChildren).ArrayNum;
              *piVar1 = *piVar1 + -1;
            }
            else {
              if (pUVar4 != this) {
                if (1 < (byte)LogSceneComponent._0_1_) {
                  pFVar13 = UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)pUVar4,&local_128,(UObject *)0x0,None);
                  if ((pFVar13->Data).ArrayNum == 0) {
                    pwVar18 = L"";
                  }
                  else {
                    pwVar18 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
                  }
                  pFVar13 = UObjectBaseUtility::GetFullName(pUVar3,&local_138,(UObject *)0x0,None);
                  if ((pFVar13->Data).ArrayNum == 0) {
                    pwVar14 = L"";
                  }
                  else {
                    pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
                  }
                  UObjectBaseUtility::GetFullName(pUVar3,&local_148,(UObject *)0x0,None);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this,&local_158,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
                  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_158.Data.AllocatorInstance.Data);
                  }
                  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_148.Data.AllocatorInstance.Data);
                  }
                  FVar15.Data = local_128.Data.AllocatorInstance.Data;
                  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_138.Data.AllocatorInstance.Data);
                    FVar15.Data = local_128.Data.AllocatorInstance.Data;
                  }
                  goto LAB_147959024;
                }
                goto LAB_147959035;
              }
              pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc);
              if (((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
                if (!bVar9) {
                  for (pUVar21 = (this->AttachParent).field0_0x0.DebugPtr;
                      (pUVar21 != (USceneComponent *)0x0 &&
                      ((pFVar12 = FUObjectArray::IndexToObject
                                            (&GUObjectArray,
                                             *(int *)((longlong)&pUVar21->_padding_ + 4)),
                       ((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) != 0 ||
                       (pUVar21->_padding_ == lVar2))));
                      pUVar21 = (pUVar21->AttachParent).field0_0x0.DebugPtr) {
                  }
                  bVar9 = true;
                }
                if (pUVar21 == (USceneComponent *)0x0) goto LAB_147958e4d;
                local_1b0 = 0;
                cVar8 = (**(code **)(*(longlong *)pUVar3 + 0x508))
                                  (pUVar3,pUVar21,&FAttachmentTransformRules::KeepWorldTransform,0,
                                   pwVar14,pwVar18);
                if (cVar8 == '\0') goto LAB_147958e4d;
              }
              else {
LAB_147958e4d:
                (**(code **)(*(longlong *)pUVar3 + 0x518))
                          (pUVar3,&FDetachmentTransformRules::KeepWorldTransform);
              }
            }
            if ((int)local_res18 <= (this->AttachChildren).ArrayNum) {
              local_1a0.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
              local_1a0.Number = *(uint *)&pUVar3->field_0x1c;
              ::FName::ToString(&local_1a0,&local_188);
              pwVar14 = L"";
              if (local_188.Data.ArrayNum != 0) {
                pwVar14 = (wchar_t *)local_188.Data.AllocatorInstance.Data;
              }
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ChildCount > AttachChildren.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                 ,0x612,
                                 L"AttachChildren count increased while detaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                                );
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
          local_res18 = (this->AttachChildren).ArrayNum;
        } while (0 < (int)local_res18);
      }
      pTVar22 = &this->AttachChildren;
      if (pTVar22 != (TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_> *)&local_1c8)
      {
        pFVar19 = (pTVar22->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar22->AllocatorInstance).Data = local_1c8.Data;
        (this->AttachChildren).ArrayNum = (int)local_1c0;
        local_1c8.Data = (FScriptContainerElement *)0x0;
        (this->AttachChildren).ArrayMax = local_1c0._4_4_;
        local_1c0 = 0;
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
    }
    else {
      while (0 < (int)local_res18) {
        iVar11 = (this->AttachChildren).ArrayNum;
        uVar17 = iVar11 - 1;
        uVar10 = 0;
        if ((int)uVar17 < iVar11) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (this->AttachChildren).ArrayNum;
        pUVar3 = *(UObjectBaseUtility **)
                  ((this->AttachChildren).AllocatorInstance.Data + (longlong)iVar11 * 8 + -8);
        if (pUVar3 == (UObjectBaseUtility *)0x0) {
joined_r0x00014795986d:
          if ((iVar11 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar5 = *(UObject **)
                        ((this->AttachChildren).AllocatorInstance.Data +
                        (longlong)(this->AttachChildren).ArrayNum * 8 + -8),
             pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          iVar11 = (this->AttachChildren).ArrayNum;
          uVar10 = iVar11 - 1;
          pFVar19 = (this->AttachChildren).AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
          iVar11 = ~uVar10 + iVar11;
          if (iVar11 != 0) {
            memmove(pFVar19,pFVar19 + 8,(longlong)iVar11 << 3);
          }
          piVar1 = &(this->AttachChildren).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        else {
          pUVar21 = *(USceneComponent **)&pUVar3[5].field_0x8;
          if (pUVar21 == (USceneComponent *)0x0) {
            if (((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
                ((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) == 0)) &&
               (1 < (byte)LogSceneComponent._0_1_)) {
              UObjectBaseUtility::GetFullName(pUVar3,&local_58,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar3,&local_68,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_78,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
            iVar11 = (this->AttachChildren).ArrayNum;
            goto joined_r0x00014795986d;
          }
          if (pUVar21 != this) {
            if (1 < (byte)LogSceneComponent._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar21,&local_88,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar3,&local_98,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar3,&local_a8,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_b8,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            iVar11 = (this->AttachChildren).ArrayNum;
            goto joined_r0x00014795986d;
          }
          pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc);
          if (((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
            for (pUVar4 = (this->AttachParent).field0_0x0.DebugPtr; pUVar4 != (USceneComponent *)0x0
                ; pUVar4 = (pUVar4->AttachParent).field0_0x0.DebugPtr) {
              pFVar12 = FUObjectArray::IndexToObject
                                  (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
              if (((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
                local_1a8 = 0;
                cVar8 = (**(code **)(*(longlong *)pUVar3 + 0x508))(pUVar3,pUVar4);
                if (cVar8 != '\0') {
                  if ((int)uVar20 <= (this->AttachChildren).ArrayNum) {
                    local_198.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
                    local_198.Number = *(uint *)&pUVar3->field_0x1c;
                    ::FName::ToString(&local_198,&local_178);
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ChildCount > AttachChildren.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                       ,0x63e,
                                       L"AttachChildren count did not decrease while reattaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                                      );
                    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_178.Data.AllocatorInstance.Data);
                    }
                    if (bVar9) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  goto LAB_147959903;
                }
                break;
              }
            }
          }
          pFVar16 = (pUVar21->AttachChildren).AllocatorInstance.Data;
          pFVar19 = pFVar16 + (longlong)(pUVar21->AttachChildren).ArrayNum * 8;
          for (; pFVar16 != pFVar19; pFVar16 = pFVar16 + 8) {
            if ((*(UObjectBaseUtility **)pFVar16 != (UObjectBaseUtility *)0x0) &&
               (*(UObjectBaseUtility **)pFVar16 == pUVar3)) goto LAB_1479595ca;
          }
          UObjectBaseUtility::GetFullName
                    (*(UObjectBaseUtility **)&pUVar3[5].field_0x8,&local_c8,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName(pUVar3,&local_d8,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_e8,(UObject *)0x0,None);
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChildAttachParentWas->GetAttachChildren().Contains(Child)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                             ,0x646,
                             L"Did not find \'%s\', in Child->AttachParent->AttachChildren. Child: \'%s\', Child->AttachParent: \'%s\'"
                            );
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_1479595ca:
          (**(code **)(*(longlong *)pUVar3 + 0x518))
                    (pUVar3,&FDetachmentTransformRules::KeepWorldTransform);
          if ((int)uVar20 <= (this->AttachChildren).ArrayNum) {
            local_190.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
            local_190.Number = *(uint *)&pUVar3->field_0x1c;
            ::FName::ToString(&local_190,&local_168);
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ChildCount > AttachChildren.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                               ,0x648,
                               L"AttachChildren count increased while detaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                              );
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
LAB_147959903:
        local_res18 = (this->AttachChildren).ArrayNum;
        uVar20 = (ulonglong)local_res18;
      }
    }
    pUVar21 = (this->AttachParent).field0_0x0.DebugPtr;
    if ((pUVar21 != (USceneComponent *)0x0) && ((!param_1 || (pUVar21->_padding_ != lVar2)))) {
      (**(code **)(this->_padding_ + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    }
  }
  return;
}

// OnHiddenInGameChanged @ 147959bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnHiddenInGameChanged(USceneComponent *this)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UWorld *pUVar7;
  FUObjectItem *pFVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel FStack_28;
  
  if (((this->_padding_ & 3) == 3) &&
     (((this->_padding_ & 0x100) == 0 ||
      (pUVar7 = UActorComponent::GetWorld((UActorComponent *)this), pUVar7 == (UWorld *)0x0)))) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 1;
    if ((this->_padding_ & 0x10000) == 0) {
      pUVar7 = UActorComponent::GetWorld((UActorComponent *)this);
      if (pUVar7 == (UWorld *)0x0) {
        pFVar8 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
        if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
          UActorComponent::DoDeferredRenderUpdates_Concurrent((UActorComponent *)this);
        }
      }
      else {
        bVar3 = (bool)(**(code **)(this->_padding_ + 0x458))(this);
        UWorld::MarkActorComponentForNeededEndOfFrameUpdate(pUVar7,(UActorComponent *)this,bVar3);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UActorComponent::MarkRenderStateDirtyEvent,(FWriteAccessScope *)&FStack_28);
    bVar3 = false;
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + 1;
    uVar10 = UActorComponent::MarkRenderStateDirtyEvent._16_4_ - 1;
    if (-1 < (int)uVar10) {
      lVar9 = (longlong)(int)uVar10 << 4;
      bVar3 = false;
      do {
        uVar6 = 0;
        if ((int)uVar10 < (int)UActorComponent::MarkRenderStateDirtyEvent._16_4_) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar9 + 8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) == 0) ||
            (*(longlong **)(lVar9 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) ==
             (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)
                                   (lVar9 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) + 0x68
                                ))(), cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UActorComponent::MarkRenderStateDirtyEvent,false);
    }
    if (FStack_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
    }
  }
  return;
}

// OnPreRegister @ 147959c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnPreRegister(USceneComponent *this)

{
  undefined1 *puVar1;
  USceneComponent *pUVar2;
  char cVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId839,"USceneComponent::OnPreRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
               ,0x347);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId839);
  }
  pUVar2 = (this->AttachParent).field0_0x0.DebugPtr;
  if ((pUVar2 != (USceneComponent *)0x0) &&
     (cVar3 = (**(code **)(this->_padding_ + 0x508))
                        (this,pUVar2,&FAttachmentTransformRules::KeepRelativeTransform,
                         this->AttachSocketName), cVar3 == '\0')) {
    (this->AttachParent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this->bShouldBeAttached = '\0';
    this->bShouldSnapLocationWhenAttached = '\0';
    this->bShouldSnapRotationWhenAttached = '\0';
    this->bShouldSnapScaleWhenAttached = '\0';
    (this->AttachSocketName).ComparisonIndex = 0;
    (this->AttachSocketName).Number = 0;
  }
  UActorComponent::OnPreRegister((UActorComponent *)this);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnRegister @ 14795a110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnRegister(USceneComponent *this)

{
  undefined1 *puVar1;
  USceneComponent *pUVar2;
  char cVar3;
  UWorld *pUVar4;
  ULevel *pUVar5;
  FLevelCollection *pFVar6;
  bool bVar7;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId846,"USceneComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
               ,0x34e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId846);
  }
  pUVar2 = (this->AttachParent).field0_0x0.DebugPtr;
  pFVar6 = (FLevelCollection *)0x0;
  if ((pUVar2 != (USceneComponent *)0x0) &&
     (cVar3 = (**(code **)(this->_padding_ + 0x508))
                        (this,pUVar2,&FAttachmentTransformRules::KeepRelativeTransform,
                         this->AttachSocketName), cVar3 == '\0')) {
    (this->AttachParent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this->bShouldBeAttached = '\0';
    this->bShouldSnapLocationWhenAttached = '\0';
    this->bShouldSnapRotationWhenAttached = '\0';
    this->bShouldSnapScaleWhenAttached = '\0';
    (this->AttachSocketName).ComparisonIndex = 0;
    (this->AttachSocketName).Number = 0;
  }
  if ((this->_padding_ != 0) ||
     (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 != (UWorld *)0x0)
     ) {
    pUVar5 = UActorComponent::GetComponentLevel((UActorComponent *)this);
    if (pUVar5 != (ULevel *)0x0) {
      pFVar6 = pUVar5->CachedLevelCollection;
    }
    this->CachedLevelCollection = pFVar6;
  }
  UActorComponent::OnRegister((UActorComponent *)this);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnRep_AttachChildren @ 14795a5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnRep_AttachChildren(USceneComponent *this)

{
  TRotator<double> *this_00;
  TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObjectPtr<USceneComponent>_u_0 *pTVar2;
  int *piVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  TObjectPtr<USceneComponent>_u_0 TVar7;
  USceneComponent *this_01;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [12];
  bool bVar17;
  uint uVar18;
  ENetRole EVar19;
  FPayload *pFVar20;
  TQuat<double> *pTVar21;
  ulonglong uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  UActorComponent *pUVar25;
  TObjectPtr<USceneComponent>_u_0 *pTVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_108 [8];
  UActorComponent *local_100;
  uint local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  TObjectPtr<USceneComponent>_u_0 local_e0 [3];
  double local_c8;
  undefined1 local_b8 [32];
  TQuat<double> local_98 [2];
  
  pTVar1 = &this->AttachChildren;
  uVar27 = (this->AttachChildren).ArrayNum - 1;
  if (0 < (int)uVar27) {
    lVar36 = (longlong)(int)uVar27;
    lVar30 = lVar36 * 8;
    do {
      uVar34 = ~uVar27 >> 0x1f;
      uVar23 = 0;
      if ((int)uVar27 < (this->AttachChildren).ArrayNum) {
        uVar23 = uVar34;
      }
      if ((uVar23 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *(longlong *)((pTVar1->AllocatorInstance).Data + lVar30);
      if (lVar5 != 0) {
        uVar23 = uVar27 - 1;
        lVar31 = lVar30;
        do {
          lVar31 = lVar31 + -8;
          uVar18 = 0;
          if ((int)uVar23 < (this->AttachChildren).ArrayNum) {
            uVar18 = ~uVar23 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)((pTVar1->AllocatorInstance).Data + lVar31);
          if ((lVar6 != 0) && (lVar6 == lVar5)) {
            uVar23 = 0;
            if ((int)uVar27 < (this->AttachChildren).ArrayNum) {
              uVar23 = uVar34;
            }
            if ((uVar23 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar32 = (pTVar1->AllocatorInstance).Data + lVar36 * 8;
            iVar33 = (this->AttachChildren).ArrayNum + ~uVar27;
            if (iVar33 != 0) {
              memmove(pFVar32,pFVar32 + 8,(longlong)iVar33 << 3);
            }
            piVar3 = &(this->AttachChildren).ArrayNum;
            *piVar3 = *piVar3 + -1;
            break;
          }
          uVar23 = uVar23 - 1;
        } while (-1 < (int)uVar23);
      }
      uVar27 = uVar27 - 1;
      lVar36 = lVar36 + -1;
      lVar30 = lVar30 + -8;
    } while (0 < (int)uVar27);
  }
  if ((this->ClientAttachedChildren).ArrayNum != 0) {
    local_f8 = (this->AttachChildren).ArrayNum;
    uVar22 = (ulonglong)(int)local_f8;
    pFVar24 = (pTVar1->AllocatorInstance).Data;
    pFVar32 = pFVar24 + uVar22 * 8;
    local_e8 = pFVar32;
    while( true ) {
      local_f0 = pFVar24;
      if ((this->AttachChildren).ArrayNum != (int)uVar22) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<USceneComponent>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar24 == pFVar32) break;
      pUVar25 = *(UActorComponent **)pFVar24;
      if (((pUVar25 != (UActorComponent *)0x0) && ((bool)pUVar25->bReplicates)) &&
         (EVar19 = UActorComponent::GetOwnerRole(pUVar25), EVar19 != ROLE_Authority)) {
        local_100 = pUVar25;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar25);
        }
        pFVar24 = (this->ClientAttachedChildren).AllocatorInstance.Data;
        if (((pFVar24 <= (FScriptContainerElement *)&local_100) &&
            ((FScriptContainerElement *)&local_100 <
             pFVar24 + (longlong)(this->ClientAttachedChildren).ArrayMax * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar33 = (this->ClientAttachedChildren).ArrayNum;
        if (iVar33 != 0) {
          pFVar32 = (this->ClientAttachedChildren).AllocatorInstance.Data;
          iVar35 = 0;
          lVar30 = 0;
          bVar17 = *(UActorComponent **)pFVar32 != local_100;
          pUVar25 = local_100;
          iVar28 = 0;
          do {
            iVar29 = iVar28;
            do {
              lVar30 = lVar30 + 1;
              iVar29 = iVar29 + 1;
              if (iVar33 <= lVar30) break;
            } while (bVar17 == (*(UActorComponent **)(pFVar32 + lVar30 * 8) != pUVar25));
            if (bVar17 != false) {
              if (iVar35 != iVar28) {
                memmove(pFVar32 + (longlong)iVar35 * 8,pFVar32 + (longlong)iVar28 * 8,
                        (longlong)(iVar29 - iVar28) << 3);
                pUVar25 = local_100;
              }
              iVar35 = iVar35 + (iVar29 - iVar28);
            }
            bVar17 = (bool)(bVar17 ^ 1);
            iVar28 = iVar29;
          } while (lVar30 < iVar33);
          (this->ClientAttachedChildren).ArrayNum = iVar35;
          pFVar32 = local_e8;
        }
      }
      uVar22 = (ulonglong)local_f8;
      pFVar24 = local_f0 + 8;
    }
    pTVar26 = (TObjectPtr<USceneComponent>_u_0 *)
              (this->ClientAttachedChildren).AllocatorInstance.Data;
    iVar33 = (this->ClientAttachedChildren).ArrayNum;
    pTVar2 = pTVar26 + iVar33;
    while( true ) {
      if ((this->ClientAttachedChildren).ArrayNum != iVar33) {
        `TCheckedPointerIterator<TObjectPtr<USceneComponent>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pTVar26 == pTVar2) break;
      TVar7 = (TObjectPtr<USceneComponent>_u_0)pTVar26->DebugPtr;
      if (TVar7.DebugPtr != (USceneComponent *)0x0) {
        local_e0[0] = TVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
        }
        TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TObjectPtr<USceneComponent>_>
                  (&this->AttachChildren,(TObjectPtr<USceneComponent> *)&local_e0[0].ObjectPtr);
      }
      pTVar26 = pTVar26 + 1;
    }
  }
  pFVar24 = (this->AttachChildren).AllocatorInstance.Data;
  iVar33 = (this->AttachChildren).ArrayNum;
  pFVar32 = pFVar24 + (longlong)iVar33 * 8;
  while( true ) {
    if ((this->AttachChildren).ArrayNum != iVar33) {
      `TCheckedPointerIterator<TObjectPtr<USceneComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_108);
    }
    if (pFVar24 == pFVar32) break;
    this_01 = *(USceneComponent **)pFVar24;
    if ((this_01 != (USceneComponent *)0x0) &&
       ((((SceneComponentCVars::bCheckRootComponentReplicationOnAttachedChildren == false ||
          (this_01->_padding_ == 0)) ||
         ((*(USceneComponent **)(this_01->_padding_ + 0x1b8) != this_01 ||
          ((char)this_01->_padding_ < '\0')))) &&
        ((this_01->AttachParent).field0_0x0.DebugPtr != this)))) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      (this_01->AttachParent).field0_0x0.DebugPtr = this;
      dVar4 = (this_01->RelativeRotation).Roll;
      auVar49._0_8_ = (this_01->RelativeRotation).Pitch;
      auVar49._8_8_ = (this_01->RelativeRotation).Yaw;
      local_c8 = dVar4;
      pFVar20 = FRotationConversionCache::GetOrCreatePayload(&this_01->RelativeRotationCache);
      this_00 = &pFVar20->CachedRotator;
      if ((((double)auVar49._0_8_ != (pFVar20->CachedRotator).Pitch) ||
          (auVar16._4_8_ = extraout_XMM0_Qb, auVar16._0_4_ = (int)((ulonglong)auVar49._0_8_ >> 0x20)
          , auVar41._0_8_ = auVar16._0_8_ << 0x20, auVar41._8_4_ = (int)auVar49._8_8_,
          auVar41._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20),
          auVar41._8_8_ != (pFVar20->CachedRotator).Yaw)) ||
         (local_c8 != (pFVar20->CachedRotator).Roll)) {
        auVar41 = divpd(auVar49,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar47 = roundpd(in_XMM1,auVar41,3);
        auVar42._8_8_ = 0;
        auVar42._0_8_ = dVar4;
        auVar41 = divpd(auVar42,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar48._0_8_ = auVar47._0_8_ * dVar9;
        dVar10 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar48._8_8_ = auVar47._8_8_ * dVar10;
        dVar14 = (double)auVar49._0_8_ - auVar48._0_8_;
        dVar15 = (double)auVar49._8_8_ - auVar48._8_8_;
        auVar49 = roundpd(auVar48,auVar41,3);
        dVar11 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar43._8_4_ = SUB84(dVar15,0);
        auVar43._0_8_ = dVar14;
        auVar43._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        dVar46 = auVar43._8_8_ + dVar10;
        dVar4 = dVar4 - auVar49._0_8_ * dVar11;
        dVar12 = 0.0 - auVar49._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        uVar22 = -(ulonglong)(0.0 <= dVar14);
        uVar38 = -(ulonglong)(0.0 <= dVar15);
        auVar51._0_4_ = ~(uint)uVar22 & SUB84(dVar14 + dVar9,0);
        auVar51._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar14 + dVar9) >> 0x20);
        auVar51._8_4_ = ~(uint)uVar38 & SUB84(dVar46,0);
        auVar51._12_4_ = ~(uint)(uVar38 >> 0x20) & (uint)((ulonglong)dVar46 >> 0x20);
        auVar44._8_4_ = SUB84(dVar12,0);
        auVar44._0_8_ = dVar4;
        auVar44._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        dVar46 = auVar44._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        uVar37 = -(ulonglong)(0.0 <= dVar4);
        uVar39 = -(ulonglong)(0.0 <= dVar12);
        auVar52._0_4_ = ~(uint)uVar37 & SUB84(dVar4 + dVar11,0);
        auVar52._4_4_ = ~(uint)(uVar37 >> 0x20) & (uint)((ulonglong)(dVar4 + dVar11) >> 0x20);
        auVar52._8_4_ = ~(uint)uVar39 & SUB84(dVar46,0);
        auVar52._12_4_ = ~(uint)(uVar39 >> 0x20) & (uint)((ulonglong)dVar46 >> 0x20);
        auVar13._8_4_ = (int)((ulonglong)dVar15 & uVar38);
        auVar13._0_8_ = (ulonglong)dVar14 & uVar22;
        auVar13._12_4_ = (int)(((ulonglong)dVar15 & uVar38) >> 0x20);
        auVar51 = auVar51 | auVar13;
        uVar38 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar51._0_8_);
        uVar40 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar51._8_8_);
        auVar47._8_4_ = (int)((ulonglong)dVar12 & uVar39);
        auVar47._0_8_ = (ulonglong)dVar4 & uVar37;
        auVar47._12_4_ = (int)(((ulonglong)dVar12 & uVar39) >> 0x20);
        auVar52 = auVar52 | auVar47;
        uVar37 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar52._0_8_);
        auVar50._0_8_ = uVar38 & (ulonglong)(auVar51._0_8_ - dVar9);
        uVar22 = uVar40 & (ulonglong)(auVar51._8_8_ - dVar10);
        auVar50._8_4_ = (undefined4)uVar22;
        auVar50._12_4_ = (undefined4)(uVar22 >> 0x20);
        auVar45._0_4_ = ~(uint)uVar38 & auVar51._0_4_;
        auVar45._4_4_ = ~(uint)(uVar38 >> 0x20) & auVar51._4_4_;
        auVar45._8_4_ = ~(uint)uVar40 & auVar51._8_4_;
        auVar45._12_4_ = ~(uint)(uVar40 >> 0x20) & auVar51._12_4_;
        this_00->Pitch = (double)SUB168(auVar50 | auVar45,0);
        this_00->Yaw = (double)SUB168(auVar50 | auVar45,8);
        (pFVar20->CachedRotator).Roll =
             (double)(uVar37 & (ulonglong)(auVar52._0_8_ - dVar11) |
                     CONCAT44(~(uint)(uVar37 >> 0x20) & auVar52._4_4_,~(uint)uVar37 & auVar52._0_4_)
                     );
        pTVar21 = UE::Math::TRotator<double>::Quaternion(this_00,local_98);
        dVar4 = pTVar21->Y;
        (pFVar20->CachedQuat).X = pTVar21->X;
        (pFVar20->CachedQuat).Y = dVar4;
        dVar4 = pTVar21->W;
        (pFVar20->CachedQuat).Z = pTVar21->Z;
        (pFVar20->CachedQuat).W = dVar4;
      }
      local_b8._0_8_ = (pFVar20->CachedQuat).X;
      local_b8._8_8_ = (pFVar20->CachedQuat).Y;
      in_XMM1._0_8_ = (pFVar20->CachedQuat).Z;
      in_XMM1._8_8_ = (pFVar20->CachedQuat).W;
      local_b8._16_16_ = in_XMM1;
      UpdateComponentToWorldWithParent
                (this_01,(this_01->AttachParent).field0_0x0.DebugPtr,this_01->AttachSocketName,None,
                 (TQuat<double> *)local_b8,None);
    }
    pFVar24 = pFVar24 + 8;
  }
  return;
}

// OnRep_AttachParent @ 14795ac10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnRep_AttachParent(USceneComponent *this)

{
  this->bNetUpdateAttachment = '\x01';
  return;
}

// OnRep_AttachSocketName @ 14795ac20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnRep_AttachSocketName(USceneComponent *this)

{
  USceneComponent *pUVar1;
  
  pUVar1 = (this->AttachParent).field0_0x0.DebugPtr;
  if ((pUVar1 != (USceneComponent *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    this->bNetUpdateAttachment = '\x01';
  }
  return;
}

// OnRep_Transform @ 14795ac50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnRep_Transform(USceneComponent *this)

{
  this->bNetUpdateTransform = '\x01';
  return;
}

// OnRep_Visibility @ 14795ac60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnRep_Visibility(USceneComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(**(code **)(this->_padding_ + 0x560))();
  this->bVisible = '\0';
  this->field_0x1a8 = this->field_0x1a8 | param_1 << 5;
  SetVisibility(this,bVar1,DirtyOnly);
  return;
}

// OnUnregister @ 14795afe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnUnregister(USceneComponent *this)

{
  this->CachedLevelCollection = (FLevelCollection *)0x0;
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// OnUpdateTransform @ 14795b2b0

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
USceneComponent::OnUpdateTransform
          (USceneComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  return;
}

// OnVisibilityChanged @ 14795b2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::OnVisibilityChanged(USceneComponent *this)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UWorld *pUVar7;
  FUObjectItem *pFVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel FStack_28;
  
  if (((this->_padding_ & 3) == 3) &&
     (((this->_padding_ & 0x100) == 0 ||
      (pUVar7 = UActorComponent::GetWorld((UActorComponent *)this), pUVar7 == (UWorld *)0x0)))) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 | 1;
    if ((this->_padding_ & 0x10000) == 0) {
      pUVar7 = UActorComponent::GetWorld((UActorComponent *)this);
      if (pUVar7 == (UWorld *)0x0) {
        pFVar8 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
        if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
          UActorComponent::DoDeferredRenderUpdates_Concurrent((UActorComponent *)this);
        }
      }
      else {
        bVar3 = (bool)(**(code **)(this->_padding_ + 0x458))(this);
        UWorld::MarkActorComponentForNeededEndOfFrameUpdate(pUVar7,(UActorComponent *)this,bVar3);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UActorComponent::MarkRenderStateDirtyEvent,(FWriteAccessScope *)&FStack_28);
    bVar3 = false;
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + 1;
    uVar10 = UActorComponent::MarkRenderStateDirtyEvent._16_4_ - 1;
    if (-1 < (int)uVar10) {
      lVar9 = (longlong)(int)uVar10 << 4;
      bVar3 = false;
      do {
        uVar6 = 0;
        if ((int)uVar10 < (int)UActorComponent::MarkRenderStateDirtyEvent._16_4_) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(lVar9 + 8 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) == 0) ||
            (*(longlong **)(lVar9 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) ==
             (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)
                                   (lVar9 + UActorComponent::MarkRenderStateDirtyEvent._8_8_) + 0x68
                                ))(), cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    UActorComponent::MarkRenderStateDirtyEvent._28_4_ =
         UActorComponent::MarkRenderStateDirtyEvent._28_4_ + -1;
    if (bVar3) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UActorComponent::MarkRenderStateDirtyEvent,false);
    }
    if (FStack_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
    }
  }
  return;
}

// PostNetReceive @ 14795cee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::PostNetReceive(USceneComponent *this)

{
  USceneComponent *pUVar1;
  
  UObject::PostNetReceive((UObject *)this);
  if (((this->bShouldBeAttached != '\0') &&
      ((this->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0)) &&
     (pUVar1 = *(USceneComponent **)(this->_padding_ + 0x1b8), pUVar1 != this)) {
    this->bNetUpdateAttachment = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->AttachParent).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// PostRepNotifies @ 14795cf50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::PostRepNotifies(USceneComponent *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  FName FVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  USceneComponent *pUVar12;
  USceneComponent *local_res8;
  
  bVar11 = this->field_0x1aa;
  if (this->bNetUpdateAttachment != '\0') {
    pUVar12 = this->NetOldAttachParent;
    this->NetOldAttachParent = (USceneComponent *)(this->AttachParent).field0_0x0;
    (this->AttachParent).field0_0x0.DebugPtr = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
      bVar11 = this->field_0x1aa;
      pUVar12 = (this->AttachParent).field0_0x0.DebugPtr;
    }
    FVar4 = this->NetOldAttachSocketName;
    this->NetOldAttachSocketName = this->AttachSocketName;
    this->AttachSocketName = FVar4;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar2 = this->field_0x1a8;
    if (((bool)this->bShouldSnapLocationWhenAttached) && ((bVar11 & 0x20) == 0)) {
      (this->RelativeLocation).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->RelativeLocation).field0_0x0._s_0.Y = (double)uVar7;
      (this->RelativeLocation).field0_0x0._s_0.Z = (double)uVar8;
    }
    dVar10 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    dVar9 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    puVar1 = &this->field_0x1a9;
    uVar3 = *puVar1;
    if ((this->bShouldSnapRotationWhenAttached != 0) && ((bVar11 & 0x20) == 0)) {
      (this->RelativeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (this->RelativeRotation).Yaw = dVar9;
      (this->RelativeRotation).Roll = dVar10;
    }
    uVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    if ((this->bShouldSnapScaleWhenAttached != 0) && ((bVar11 & 0x20) == 0)) {
      (this->RelativeScale3D).field0_0x0._s_0.X =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      (this->RelativeScale3D).field0_0x0._s_0.Y = (double)uVar7;
      (this->RelativeScale3D).field0_0x0._s_0.Z = (double)uVar8;
    }
    if ((pUVar12 == (USceneComponent *)0x0) || (this->bShouldBeAttached != '\0')) {
      (**(code **)(this->_padding_ + 0x508))
                (this,this->NetOldAttachParent,&FAttachmentTransformRules::KeepRelativeTransform,
                 this->NetOldAttachSocketName);
      this->field_0x1a8 = this->field_0x1a8 & 0x3f ^ uVar2 & 0x40 ^ uVar2 & 0x80;
      bVar11 = (this->bShouldSnapRotationWhenAttached ^ this->bShouldSnapRotationWhenAttached) & 1 ^
               *puVar1;
      this->field_0x1a9 = (((byte)uVar3 >> 1) * '\x02' ^ bVar11) & 2 ^ bVar11;
    }
    else {
      if (this->NetOldAttachParent != (USceneComponent *)0x0) {
        local_res8 = this;
        `USceneComponent::PostRepNotifies'::__l17::<lambda_1>::operator()(&local_res8);
      }
      (**(code **)(this->_padding_ + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    }
    bVar11 = this->field_0x1aa & 0xbf;
    this->bNetUpdateAttachment = '\0';
  }
  if ((bVar11 & 0x20) != 0) {
    UpdateComponentToWorld(this,None,None);
    this->bNetUpdateTransform = '\0';
  }
  return;
}

// PostUpdateNavigationData @ 14795d170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::PostUpdateNavigationData(USceneComponent *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_ComponentPostUpdateNavData> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_ComponentPostUpdateNavData;
  if (StatPtr_STAT_ComponentPostUpdateNavData ==
      (FThreadSafeStaticStat<FStat_STAT_ComponentPostUpdateNavData>)0x0) {
    pFVar4 = ::FName::FName(&local_res18,"STAT_ComponentPostUpdateNavData");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_ComponentPostUpdateNavData>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComponentPostUpdateNavData,*pFVar4
                       ,L"Component PostUpdateNavData","STATGROUP_Component","STATCAT_Advanced",
                       L"Component",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FNavigationSystem::OnComponentTransformChanged(this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar7.Value;
        local_res10.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                   ,0x108c);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar7.Value;
      local_res10.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FNavigationSystem::OnComponentTransformChanged(this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res10);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  return;
}

// PreNetReceive @ 14795d3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::PreNetReceive(USceneComponent *this)

{
  undefined1 *puVar1;
  
  UObject::PreNetReceive((UObject *)this);
  this->bNetUpdateTransform = '\0';
  this->bNetUpdateAttachment = '\0';
  this->NetOldAttachSocketName = this->AttachSocketName;
  this->NetOldAttachParent = (USceneComponent *)(this->AttachParent).field0_0x0;
  return;
}

// ProcessDeferredMovementGroup @ 14795d560

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
USceneComponent::ProcessDeferredMovementGroup
          (USceneComponent *this,FDeferredComponentMoveData *param_1)

{
  int iVar1;
  AActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  ECollisionResponse EVar5;
  UClass *pUVar6;
  UPrimitiveComponent *pUVar7;
  USceneComponent *pUVar8;
  ForElementType<FHitResult> FVar9;
  ForElementType<FHitResult> FVar10;
  undefined1 auStackY_3b8 [32];
  undefined1 local_388;
  undefined1 local_387 [7];
  undefined1 local_380 [16];
  TArrayView<FOverlapInfo_const_,int> local_370;
  TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> local_360;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if ((!SceneComponentCVars::bEnableGroupedComponentMovement) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8868271983431777148>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                         ,0x484,"IsGroupedComponentMovementEnabled()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->bHasGroupedMoveThisFrame == '\0') {
    `USceneComponent::ProcessDeferredMovementGroup'::__l5::<lambda_1>::operator()(&local_388);
  }
  else {
    if (param_1->bHasTransformMovedForGroupUpdate != false) {
      PropagateTransformUpdate(this,true,None,param_1->TeleportType);
    }
    if ((param_1->bHasTransformMovedForGroupUpdate != false) || (param_1->bHasMoved != false)) {
      pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
         (pUVar7 = (UPrimitiveComponent *)this,
         (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar6->_padding_)) {
        pUVar7 = (UPrimitiveComponent *)0x0;
      }
      if (pUVar7 == (UPrimitiveComponent *)0x0) {
        UpdateOverlaps(this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                       (TArrayView<FOverlapInfo_const_,int> *)0x0);
      }
      else {
        local_360.AllocatorInstance.SecondaryData = (ForElementType<FOverlapInfo>)0x0;
        local_370.DataPtr =
             *(FOverlapInfo **)&(param_1->PendingOverlaps).AllocatorInstance.SecondaryData;
        iVar1 = (param_1->PendingOverlaps).ArrayNum;
        local_360.ArrayNum = 0;
        if ((ForElementType<FOverlapInfo>)local_370.DataPtr == (ForElementType<FOverlapInfo>)0x0) {
          local_370.DataPtr = (FOverlapInfo *)&param_1->PendingOverlaps;
        }
        local_360.ArrayMax = 3;
        if ((iVar1 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_370.ArrayNum = iVar1;
        GetOverlapsAtEnd((TOptional<TArrayView<FOverlapInfo_const_,int>_> *)local_380,pUVar7,
                         &local_360,param_1);
        pUVar7 = (UPrimitiveComponent *)local_380;
        if (local_380._8_4_ == -1) {
          pUVar7 = (UPrimitiveComponent *)0x0;
        }
        UpdateOverlaps(this,&local_370,true,(TArrayView<FOverlapInfo_const_,int> *)pUVar7);
        if (local_360.AllocatorInstance.SecondaryData != (ForElementType<FOverlapInfo>)0x0) {
          FMemory::Free((void *)local_360.AllocatorInstance.SecondaryData);
        }
      }
    }
    if ((0 < (param_1->BlockingHits).ArrayNum) &&
       (pAVar2 = (AActor *)this->_padding_, pAVar2 != (AActor *)0x0)) {
      pUVar7 = CastChecked<UPrimitiveComponent,USceneComponent>(this);
      FVar10 = (param_1->BlockingHits).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FHitResult>)&param_1->BlockingHits;
      iVar1 = (param_1->BlockingHits).ArrayNum;
      if (FVar10 != (ForElementType<FHitResult>)0x0) {
        FVar9 = FVar10;
      }
      FVar10 = (ForElementType<FHitResult>)((longlong)iVar1 * 0x100 + (longlong)FVar9);
      while( true ) {
        if ((param_1->BlockingHits).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FHitResult_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_387);
        }
        if (((FVar9 == FVar10) || (pUVar7 == (UPrimitiveComponent *)0x0)) ||
           ((*(uint *)&pUVar7->field_0x8 >> 0x1e & 1) != 0)) break;
        pUVar8 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar9 + 0xd8));
        EVar5 = GetCollisionResponseToComponent((USceneComponent *)pUVar7,pUVar8);
        if (EVar5 == ECR_Block) {
          UPrimitiveComponent::DispatchBlockingHit(pUVar7,pAVar2,(FHitResult *)FVar9);
        }
        FVar9 = (ForElementType<FHitResult>)((longlong)FVar9 + 0x100);
      }
    }
    this->bHasGroupedMoveThisFrame = '\0';
  }
  return;
}

// PropagateTransformUpdate @ 14795d980

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
USceneComponent::PropagateTransformUpdate
          (USceneComponent *this,bool param_1,EUpdateTransformFlags param_2,ETeleportType param_3)

{
  undefined1 *puVar1;
  int iVar2;
  AActor *this_00;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UWorld *pUVar10;
  ETeleportType EVar11;
  uint uVar12;
  longlong lVar13;
  FDestructionSentinel local_48;
  
  iVar2 = (this->ScopedMovementStack).ArrayNum;
  if (0 < iVar2) {
    uVar12 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar12 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = *(longlong *)
              ((this->ScopedMovementStack).AllocatorInstance.Data +
              (longlong)(this->ScopedMovementStack).ArrayNum * 8 + -8);
    if (lVar13 == 0) {
      return;
    }
    if (param_3 == None) {
      return;
    }
    EVar11 = *(ETeleportType *)(lVar13 + 0x14);
    if (*(ETeleportType *)(lVar13 + 0x14) < param_3) {
      EVar11 = param_3;
    }
    *(ETeleportType *)(lVar13 + 0x14) = EVar11;
    return;
  }
  if (!param_1) {
    (**(code **)(this->_padding_ + 0x5b0))();
    if (0 < (this->AttachChildren).ArrayNum) {
      UpdateChildTransforms(this,None,None);
    }
    if ((this->_padding_ & 1) == 0) {
      return;
    }
    UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
    return;
  }
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar6) {
    this_00 = (AActor *)this->_padding_;
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar6) || (this_00 == (AActor *)0x0)) goto LAB_14795da97;
    pUVar10 = AActor::GetWorld(this_00);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar10);
    if (!bVar6) goto LAB_14795da97;
  }
  FObjectTrace::OutputObjectTransform((UObject *)this,&this->ComponentToWorld,param_3);
LAB_14795da97:
  (**(code **)(this->_padding_ + 0x5b0))(this);
  if ((this->_padding_ & 1) != 0) {
    if (this->bWantsOnUpdateTransform != '\0') {
      (**(code **)(this->_padding_ + 0x578))(this,param_2,param_3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TransformUpdated,
               (FWriteAccessScope *)&local_48);
    puVar1 = &(this->TransformUpdated).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar12 = *(int *)&(this->TransformUpdated).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar12 < *(int *)&(this->TransformUpdated).field_0x10) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->TransformUpdated).field_0x8;
        if (((*(int *)(lVar13 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar13 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,this,param_2,param_3), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(this->TransformUpdated).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->TransformUpdated,false
                );
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
  }
  if (0 < (this->AttachChildren).ArrayNum) {
    UpdateChildTransforms(this,param_2 & ~SkipPhysicsUpdate,param_3);
  }
  if (((this->_padding_ & 0x400000) != 0) && ((this->_padding_ & 1) != 0)) {
    UpdateNavigationData(this);
    return;
  }
  return;
}

// QuerySupportedSockets @ 14795dc90

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
USceneComponent::QuerySupportedSockets
          (USceneComponent *this,
          TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// ResetRelativeTransform @ 147963ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::ResetRelativeTransform(USceneComponent *this)

{
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  local_48.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_48.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_48.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_28._s_0,&local_48,false,(FHitResult *)0x0,None);
  local_28._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689688;
  local_28._s_0.Z = __real_3ff0000000000000;
  SetRelativeScale3D(this,(TVector<double> *)&local_28._s_0);
  return;
}

// Serialize @ 1479661e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::Serialize(USceneComponent *this,FArchive *param_1)

{
  int iVar1;
  bool local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  UActorComponent::Serialize((UActorComponent *)this,param_1);
  if ((bool)this->bComputeBoundsOnceForGame) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
    if (1 < iVar1) {
      if (((this->bComputedBoundsOnceForGame == 0) || (*(longlong *)&param_1->field_0x68 == 0)) ||
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
        local_res8[0] = false;
      }
      else {
        local_res8[0] = true;
      }
      ::operator<<(param_1,local_res8);
      if (local_res8[0] != false) {
        UE::Math::operator<<(param_1,&this->Bounds);
      }
    }
  }
  return;
}

// Serialize @ 147966290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::Serialize(USceneComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetAbsolute @ 147966c10

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
USceneComponent::SetAbsolute(USceneComponent *this,bool param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  
  this->bAbsoluteLocation = '\0';
  this->bAbsoluteRotation = '\0';
  this->field_0x1a8 = (param_1 | param_3 << 2) << 2 | param_2 << 3 | this->field_0x1a8 & 0xef;
  UpdateComponentToWorld(this,None,None);
  return;
}

// SetAttachParent @ 1479672c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetAttachParent(USceneComponent *this,USceneComponent *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->AttachParent).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->AttachParent).field0_0x0.DebugPtr = param_1;
  return;
}

// SetAttachSocketName @ 147967310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetAttachSocketName(USceneComponent *this,FName param_1)

{
  this->AttachSocketName = param_1;
  return;
}

// SetHiddenInGame @ 147967cc0

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
USceneComponent::SetHiddenInGame(USceneComponent *this,bool param_1,EVisibilityPropagation param_2)

{
  longlong lVar1;
  USceneComponent *this_00;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ForElementType<USceneComponent_*> FVar5;
  void *_Dst;
  bool bVar6;
  undefined1 auStackY_138 [32];
  ForElementType<USceneComponent_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar6 = param_2 == Propagate;
  if (param_1 != this->bHiddenInGame) {
    bVar6 = (byte)(param_2 - DirtyOnly) < 2;
    this->field_0x1a9 = this->field_0x1a9 & 0xf7 | param_1 << 3;
    (**(code **)(this->_padding_ + 0x570))();
  }
  if ((bVar6) && (0 < (this->AttachChildren).ArrayNum)) {
    local_3c = 0x18;
    local_108.SecondaryData = (ForElementType<USceneComponent_*>)0x0;
    local_40 = 0;
    if ((&local_108 == (ForElementType<USceneComponent_*> *)&this->AttachChildren) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (this->AttachChildren).ArrayNum;
    if (iVar4 != 0) {
      iVar3 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                        (8,8,iVar4,&local_108,&local_40,&local_3c);
      FVar5 = (ForElementType<USceneComponent_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar5 = local_108.SecondaryData;
      }
      memcpy((void *)((longlong)FVar5 + (longlong)iVar3 * 8),
             (this->AttachChildren).AllocatorInstance.Data,(longlong)iVar4 << 3);
    }
    while (0 < local_40) {
      FVar5 = (ForElementType<USceneComponent_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar5 = local_108.SecondaryData;
      }
      lVar1 = (longlong)(local_40 + -1) * 8;
      this_00 = *(USceneComponent **)(lVar1 + (longlong)FVar5);
      FVar5 = (ForElementType<USceneComponent_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar5 = local_108.SecondaryData;
      }
      _Dst = (void *)(lVar1 + (longlong)FVar5);
      iVar4 = (local_40 - (local_40 + -1)) + -1;
      if (iVar4 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
      }
      local_40 = local_40 + -1;
      if (this_00 != (USceneComponent *)0x0) {
        if ((&local_108 == (ForElementType<USceneComponent_*> *)&this_00->AttachChildren) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this_00->AttachChildren).ArrayNum;
        if (iVar4 != 0) {
          iVar3 = UE::Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                            (8,8,iVar4,&local_108,&local_40,&local_3c);
          FVar5 = (ForElementType<USceneComponent_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
            FVar5 = local_108.SecondaryData;
          }
          ConstructItems<USceneComponent_*,TObjectPtr<USceneComponent>,int>
                    ((void *)((longlong)FVar5 + (longlong)iVar3 * 8),
                     (TObjectPtr<USceneComponent> *)(this_00->AttachChildren).AllocatorInstance.Data
                     ,iVar4);
        }
        if (param_2 == Propagate) {
          SetHiddenInGame(this_00,param_1,NoPropagation);
        }
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00);
      }
    }
    if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FMemory::Free((void *)local_108.SecondaryData);
    }
  }
  return;
}

// SetMobility @ 147968840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetMobility(USceneComponent *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  UWorld *pUVar5;
  UActorComponent *pUVar6;
  FScriptContainerElement *pFVar7;
  UWorld *local_res8;
  undefined1 local_res10 [8];
  FComponentReregisterContextBase local_38;
  FWeakObjectPtr local_30;
  FWeakObjectPtr aFStack_28 [2];
  
  if ((this->Mobility).Value != param_1) {
    local_38.ScenesToUpdateAllPrimitiveSceneInfos =
         (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
    local_res8 = (UWorld *)0x0;
    local_30.ObjectIndex = 0;
    local_30.ObjectSerialNumber = 0;
    aFStack_28[0].ObjectIndex = 0;
    aFStack_28[0].ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(aFStack_28,(FObjectPtr)&local_res8);
    local_38.ScenesToUpdateAllPrimitiveSceneInfos =
         (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
    local_res8 = FComponentReregisterContextBase::UnRegister(&local_38,(UActorComponent *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(aFStack_28,(FObjectPtr)&local_res8);
    bVar4 = FWeakObjectPtr::IsValid(aFStack_28);
    local_res8 = (UWorld *)(USceneComponent *)0x0;
    if (bVar4) {
      local_res8 = (UWorld *)this;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&local_30,(FObjectPtr)&local_res8);
    (this->Mobility).Value = (uchar)param_1;
    if ((uchar)param_1 == '\x02') {
      pFVar7 = (this->AttachChildren).AllocatorInstance.Data;
      iVar2 = (this->AttachChildren).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->AttachChildren).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) break;
        plVar3 = *(longlong **)pFVar7;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x5f8))(plVar3,param_1);
        }
        pFVar7 = pFVar7 + 8;
      }
    }
    bVar4 = FWeakObjectPtr::IsValid(&local_30);
    if ((bVar4) && (bVar4 = FWeakObjectPtr::IsValid(aFStack_28), bVar4)) {
      pUVar5 = (UWorld *)FWeakObjectPtr::Get(aFStack_28);
      pUVar6 = (UActorComponent *)FWeakObjectPtr::Get(&local_30);
      FComponentReregisterContextBase::ReRegister(&local_38,pUVar6,pUVar5);
    }
  }
  return;
}

// SetPhysicsVolume @ 147968b00

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
USceneComponent::SetPhysicsVolume(USceneComponent *this,APhysicsVolume *param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  FName FVar3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar4;
  APhysicsVolume *pAVar5;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar6;
  APhysicsVolume *local_res20;
  APhysicsVolume *local_58;
  APhysicsVolume *local_50;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_28;
  
  if (!param_2) {
    local_50 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (APhysicsVolume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->PhysicsVolume).WeakPtr,(FObjectPtr)&local_50);
    return;
  }
  pAVar5 = (APhysicsVolume *)FWeakObjectPtr::Get(&(this->PhysicsVolume).WeakPtr);
  if (param_1 != pAVar5) {
    lVar1 = this->_padding_;
    if (pAVar5 != (APhysicsVolume *)0x0) {
      (**(code **)(pAVar5->_padding_ + 0x798))(pAVar5,lVar1);
    }
    local_48 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (this->PhysicsVolumeChangedDelegate != (FPhysicsVolumeChanged)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"PhysicsVolumeChangedDelegate");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar6 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_28,(UObject *)this,FVar3);
      local_30.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
      local_48 = pTVar6->Object;
      if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    this_00 = local_48;
    if (local_48 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      if ((local_48 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_58 = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                (this_00,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (APhysicsVolume *)0x0))
    {
      FWeakObjectPtr::operator=(&(this->PhysicsVolume).WeakPtr,(FObjectPtr)&local_res20);
      if (param_1 == (APhysicsVolume *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)param_1);
      FWeakObjectPtr::operator=(&(this->PhysicsVolume).WeakPtr,(FObjectPtr)&local_res20);
    }
    if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0x790))(param_1,lVar1);
    }
  }
  return;
}

// SetRelativeLocationAndRotation @ 147969e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::SetRelativeLocationAndRotation
          (USceneComponent *this,TVector<double> *param_1,TQuat<double> *param_2,bool param_3,
          FHitResult *param_4,ETeleportType param_5)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  FPayload *this_00;
  TRotator<double> *pTVar7;
  int iVar8;
  FRotationConversionCache *this_01;
  undefined4 uVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  undefined1 auStackY_188 [32];
  double local_140;
  double dStack_138;
  double local_130;
  TRotator<double> local_128;
  double dStack_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar11 = param_1;
  bVar6 = UActorComponent::NeedsInitialization((UActorComponent *)this);
  uVar9 = SUB84(pTVar11,0);
  if ((!bVar6) &&
     (bVar6 = UActorComponent::OwnerNeedsInitialization((UActorComponent *)this), !bVar6)) {
    if (this->bComponentToWorldUpdated == 0) {
      UpdateComponentToWorld(this,None,None);
    }
    local_108.Rotation.ZW.m128d_f64[0] = param_2->Z;
    local_108.Rotation.ZW.m128d_f64[1] = param_2->W;
    local_108.Rotation.XY.m128d_f64[0] = param_2->X;
    local_108.Rotation.XY.m128d_f64[1] = param_2->Y;
    local_108.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
    local_108.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
    local_108.Translation.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
    local_108.Translation.ZW.m128d_f64[1] = 0.0;
    local_108.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_108.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_108.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_108.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    CalcNewComponentToWorld(this,&local_a8,&local_108,(USceneComponent *)0x0,(FName)0x0);
    local_140 = local_a8.Translation.XY.m128d_f64[0] -
                (this->ComponentToWorld).Translation.XY.m128d_f64[0];
    dStack_138 = local_a8.Translation.XY.m128d_f64[1] -
                 (this->ComponentToWorld).Translation.XY.m128d_f64[1];
    local_130 = local_a8.Translation.ZW.m128d_f64[0] -
                (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
    local_128.Pitch = local_a8.Rotation.XY.m128d_f64[0];
    local_128.Yaw = local_a8.Rotation.XY.m128d_f64[1];
    local_128.Roll = local_a8.Rotation.ZW.m128d_f64[0];
    dStack_110 = local_a8.Rotation.ZW.m128d_f64[1];
    (**(code **)(this->_padding_ + 0x588))(this,&local_140,&local_128,param_3);
    return;
  }
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  this_01 = &this->RelativeRotationCache;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->RelativeLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RelativeLocation).field0_0x0._s_0.Y = dVar3;
  (this->RelativeLocation).field0_0x0._s_0.Z = dVar1;
  this_00 = FRotationConversionCache::GetOrCreatePayload(this_01);
  auVar21._8_8_ = -(ulonglong)((this_00->CachedQuat).W != param_2->W);
  auVar21._0_8_ = -(ulonglong)((this_00->CachedQuat).Z != param_2->Z);
  auVar22._8_8_ = -(ulonglong)(param_2->Y != (this_00->CachedQuat).Y);
  auVar22._0_8_ = -(ulonglong)(param_2->X != (this_00->CachedQuat).X);
  uVar10 = movmskpd(uVar9,auVar21);
  iVar8 = movmskpd((int)this_01,auVar22);
  if ((uVar10 & 0x3fffffff) != 0 || iVar8 != 0) {
    dVar1 = param_2->X;
    dVar3 = param_2->Y;
    dVar4 = param_2->Z;
    dVar5 = param_2->W;
    dVar16 = dVar1 * dVar1 + dVar4 * dVar4;
    dVar19 = dVar3 * dVar3 + dVar5 * dVar5;
    auVar14._8_4_ = SUB84(dVar19,0);
    auVar14._0_8_ = dVar16;
    auVar14._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar15._0_8_ = auVar14._8_8_ + dVar16;
    auVar15._8_8_ = dVar16 + dVar19;
    auVar21 = sqrtpd(in_XMM4,auVar15);
    uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= auVar15._0_8_);
    uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= auVar15._8_8_);
    uVar10 = (uint)(uVar12 >> 0x20);
    uVar24 = (uint)(uVar13 >> 0x20);
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
    auVar23._0_8_ = uVar12 & (ulonglong)(auVar22._0_8_ * dVar1);
    uVar2 = uVar13 & (ulonglong)(auVar22._8_8_ * dVar3);
    auVar23._8_4_ = (undefined4)uVar2;
    auVar23._12_4_ = (undefined4)(uVar2 >> 0x20);
    auVar17._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar17._4_4_ =
         ~uVar10 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar17._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar17._12_4_ =
         ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
    auVar20._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar20._4_4_ =
         ~uVar10 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar20._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar20._12_4_ =
         ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar18._0_8_ = (ulonglong)(auVar21._0_8_ * dVar4) & uVar12;
    uVar13 = (ulonglong)(auVar21._8_8_ * dVar5) & uVar13;
    auVar18._8_4_ = (undefined4)uVar13;
    auVar18._12_4_ = (undefined4)(uVar13 >> 0x20);
    (this_00->CachedQuat).X = (double)SUB168(auVar23 | auVar17,0);
    (this_00->CachedQuat).Y = (double)SUB168(auVar23 | auVar17,8);
    (this_00->CachedQuat).Z = (double)SUB168(auVar20 | auVar18,0);
    (this_00->CachedQuat).W = (double)SUB168(auVar20 | auVar18,8);
    pTVar7 = UE::Math::TQuat<double>::Rotator(&this_00->CachedQuat,&local_128);
    dVar1 = pTVar7->Yaw;
    (this_00->CachedRotator).Pitch = pTVar7->Pitch;
    (this_00->CachedRotator).Yaw = dVar1;
    (this_00->CachedRotator).Roll = pTVar7->Roll;
  }
  dVar3 = (this_00->CachedRotator).Yaw;
  dVar1 = (this_00->CachedRotator).Roll;
  (this->RelativeRotation).Pitch = (this_00->CachedRotator).Pitch;
  (this->RelativeRotation).Yaw = dVar3;
  (this->RelativeRotation).Roll = dVar1;
  return;
}

// SetRelativeLocationAndRotation @ 14796a100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::SetRelativeLocationAndRotation
          (USceneComponent *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          FHitResult *param_4,ETeleportType param_5)

{
  double dVar1;
  FPayload *pFVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined4 in_EAX;
  int iVar10;
  TQuat<double> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
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
  double dVar34;
  double dVar36;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  TVector<double>_u_0 local_78;
  TQuat<double> local_58 [2];
  
  local_78._s_0.Z = (this->RelativeLocation).field0_0x0._s_0.Z;
  if ((((this->RelativeLocation).field0_0x0._s_0.X == (param_1->field0_0x0)._s_0.X) &&
      ((this->RelativeLocation).field0_0x0._s_0.Y == (param_1->field0_0x0)._s_0.Y)) &&
     (local_78._s_0.Z == (param_1->field0_0x0)._s_0.Z)) {
    dVar1 = (this->RelativeRotation).Roll;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = dVar1;
    dVar1 = param_2->Roll - dVar1;
    dVar34 = param_2->Pitch - (this->RelativeRotation).Pitch;
    dVar36 = param_2->Yaw - (this->RelativeRotation).Yaw;
    auVar19._8_4_ = SUB84(dVar36,0);
    auVar19._0_8_ = dVar34;
    auVar19._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    auVar20 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar20 = roundpd(auVar27,auVar20,3);
    dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar28._0_8_ = auVar20._0_8_ * dVar7;
    dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar28._8_8_ = auVar20._8_8_ * dVar8;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar1;
    dVar34 = dVar34 - auVar28._0_8_;
    dVar36 = dVar36 - auVar28._8_8_;
    auVar20 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    auVar20 = roundpd(auVar28,auVar20,3);
    dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar22._8_4_ = SUB84(dVar36,0);
    auVar22._0_8_ = dVar34;
    auVar22._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    dVar1 = dVar1 - auVar20._0_8_ * dVar5;
    dVar4 = 0.0 - auVar20._8_8_ * dVar6;
    uVar13 = -(ulonglong)(0.0 <= dVar34);
    uVar15 = -(ulonglong)(0.0 <= dVar36);
    auVar29._0_8_ = uVar13 & (ulonglong)dVar34;
    auVar29._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar36);
    auVar29._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar36) >> 0x20);
    dVar36 = auVar22._8_8_ + dVar8;
    uVar14 = -(ulonglong)(0.0 <= dVar1);
    uVar16 = -(ulonglong)(0.0 <= dVar4);
    auVar37._0_4_ = ~(uint)uVar13 & SUB84(dVar34 + dVar7,0);
    auVar37._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar34 + dVar7) >> 0x20);
    auVar37._8_4_ = ~(uint)uVar15 & SUB84(dVar36,0);
    auVar37._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar36 >> 0x20);
    auVar37 = auVar37 | auVar29;
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar1;
    auVar23._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    dVar36 = auVar23._8_8_ + dVar6;
    auVar35._0_4_ = ~(uint)uVar14 & SUB84(dVar1 + dVar5,0);
    auVar35._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar5) >> 0x20);
    auVar35._8_4_ = ~(uint)uVar16 & SUB84(dVar36,0);
    auVar35._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar36 >> 0x20);
    auVar20._8_4_ = (int)((ulonglong)dVar4 & uVar16);
    auVar20._0_8_ = (ulonglong)dVar1 & uVar14;
    auVar20._12_4_ = (int)(((ulonglong)dVar4 & uVar16) >> 0x20);
    auVar35 = auVar35 | auVar20;
    uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar35._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar35._8_8_);
    uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar37._0_8_);
    uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar37._8_8_);
    auVar30._0_8_ = uVar14 & (ulonglong)(auVar35._0_8_ - dVar5);
    uVar13 = uVar16 & (ulonglong)(auVar35._8_8_ - dVar6);
    auVar30._8_4_ = (undefined4)uVar13;
    auVar30._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar24._0_4_ = ~(uint)uVar14 & auVar35._0_4_;
    auVar24._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar35._4_4_;
    auVar24._8_4_ = ~(uint)uVar16 & auVar35._8_4_;
    auVar24._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar35._12_4_;
    auVar30 = auVar30 | auVar24;
    auVar25._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
    auVar25._0_8_ = __real_3f1a36e2e0000000;
    auVar25._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    auVar31._0_8_ =
         (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar31._8_4_ = auVar30._8_4_ & _UNK_15061cc88;
    auVar31._12_4_ = auVar30._12_4_ & _UNK_15061cc8c;
    auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < auVar31._8_8_);
    auVar26._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar31._0_8_);
    uVar12 = movmskpd((int)this,auVar26);
    auVar32._0_8_ = uVar15 & (ulonglong)(auVar37._0_8_ - dVar7);
    uVar13 = uVar17 & (ulonglong)(auVar37._8_8_ - dVar8);
    auVar32._8_4_ = (undefined4)uVar13;
    auVar32._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar3._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar37._4_4_;
    auVar3._0_4_ = ~(uint)uVar15 & auVar37._0_4_;
    auVar3._8_4_ = ~(uint)uVar17 & auVar37._8_4_;
    auVar3._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar37._12_4_;
    auVar32 = auVar32 | auVar3;
    auVar33._0_8_ =
         (double)CONCAT44(auVar32._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar32._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar33._8_4_ = auVar32._8_4_ & _UNK_15061cc88;
    auVar33._12_4_ = auVar32._12_4_ & _UNK_15061cc8c;
    lVar18 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar33._8_8_);
    auVar9._8_4_ = (int)lVar18;
    auVar9._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar33._0_8_);
    auVar9._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar10 = movmskpd(in_EAX,auVar9);
    if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
      return;
    }
    pTVar11 = UE::Math::TRotator<double>::Quaternion(param_2,local_58);
  }
  else {
    pFVar2 = (this->RelativeRotationCache).PayloadPtr.Ptr;
    if (((pFVar2 == (FPayload *)0x0) || (param_2->Pitch != (pFVar2->CachedRotator).Pitch)) ||
       ((param_2->Yaw != (pFVar2->CachedRotator).Yaw ||
        (param_2->Roll != (pFVar2->CachedRotator).Roll)))) {
      UE::Math::TRotator<double>::Quaternion(param_2,local_58);
    }
    else {
      local_58[0].X = (pFVar2->CachedQuat).X;
      local_58[0].Y = (pFVar2->CachedQuat).Y;
      local_58[0].Z = (pFVar2->CachedQuat).Z;
      local_58[0].W = (pFVar2->CachedQuat).W;
    }
    pTVar11 = local_58;
  }
  local_78._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_78._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_78._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_78._s_0,pTVar11,param_3,param_4,param_5);
  return;
}

// SetRelativeLocation_Direct @ 14796a360

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
USceneComponent::SetRelativeLocation_Direct(USceneComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->RelativeLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RelativeLocation).field0_0x0._s_0.Y = dVar2;
  (this->RelativeLocation).field0_0x0._s_0.Z = dVar1;
  return;
}

// SetRelativeRotation @ 14796a380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::SetRelativeRotation
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  int iVar9;
  TQuat<double> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
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
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  TVector<double>_u_0 local_78;
  TQuat<double> local_58 [2];
  
  dVar1 = (this->RelativeRotation).Roll;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = dVar1;
  dVar1 = param_1->Roll - dVar1;
  dVar33 = param_1->Pitch - (this->RelativeRotation).Pitch;
  dVar35 = param_1->Yaw - (this->RelativeRotation).Yaw;
  auVar18._8_4_ = SUB84(dVar35,0);
  auVar18._0_8_ = dVar33;
  auVar18._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  auVar19 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar19 = roundpd(auVar26,auVar19,3);
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar27._0_8_ = auVar19._0_8_ * dVar6;
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar27._8_8_ = auVar19._8_8_ * dVar7;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar1;
  dVar33 = dVar33 - auVar27._0_8_;
  dVar35 = dVar35 - auVar27._8_8_;
  auVar19 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar19 = roundpd(auVar27,auVar19,3);
  dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar35,0);
  auVar21._0_8_ = dVar33;
  auVar21._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  dVar1 = dVar1 - auVar19._0_8_ * dVar4;
  dVar3 = 0.0 - auVar19._8_8_ * dVar5;
  uVar12 = -(ulonglong)(0.0 <= dVar33);
  uVar14 = -(ulonglong)(0.0 <= dVar35);
  auVar28._0_8_ = uVar12 & (ulonglong)dVar33;
  auVar28._8_4_ = (undefined4)(uVar14 & (ulonglong)dVar35);
  auVar28._12_4_ = (undefined4)((uVar14 & (ulonglong)dVar35) >> 0x20);
  dVar35 = auVar21._8_8_ + dVar7;
  uVar13 = -(ulonglong)(0.0 <= dVar1);
  uVar15 = -(ulonglong)(0.0 <= dVar3);
  auVar36._0_4_ = ~(uint)uVar12 & SUB84(dVar33 + dVar6,0);
  auVar36._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar33 + dVar6) >> 0x20);
  auVar36._8_4_ = ~(uint)uVar14 & SUB84(dVar35,0);
  auVar36._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
  auVar36 = auVar36 | auVar28;
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar1;
  auVar22._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar35 = auVar22._8_8_ + dVar5;
  auVar34._0_4_ = ~(uint)uVar13 & SUB84(dVar1 + dVar4,0);
  auVar34._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar4) >> 0x20);
  auVar34._8_4_ = ~(uint)uVar15 & SUB84(dVar35,0);
  auVar34._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
  auVar19._8_4_ = (int)((ulonglong)dVar3 & uVar15);
  auVar19._0_8_ = (ulonglong)dVar1 & uVar13;
  auVar19._12_4_ = (int)(((ulonglong)dVar3 & uVar15) >> 0x20);
  auVar34 = auVar34 | auVar19;
  uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar34._0_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar34._8_8_);
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar36._0_8_);
  uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar36._8_8_);
  auVar29._0_8_ = uVar13 & (ulonglong)(auVar34._0_8_ - dVar4);
  uVar12 = uVar15 & (ulonglong)(auVar34._8_8_ - dVar5);
  auVar29._8_4_ = (undefined4)uVar12;
  auVar29._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar13 & auVar34._0_4_;
  auVar23._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar34._4_4_;
  auVar23._8_4_ = ~(uint)uVar15 & auVar34._8_4_;
  auVar23._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar34._12_4_;
  auVar29 = auVar29 | auVar23;
  auVar24._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
  auVar24._0_8_ = __real_3f1a36e2e0000000;
  auVar24._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar30._0_8_ =
       (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar30._8_4_ = auVar29._8_4_ & _UNK_15061cc88;
  auVar30._12_4_ = auVar29._12_4_ & _UNK_15061cc8c;
  auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < auVar30._8_8_);
  auVar25._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar30._0_8_);
  uVar11 = movmskpd((int)this,auVar25);
  auVar31._0_8_ = uVar14 & (ulonglong)(auVar36._0_8_ - dVar6);
  uVar12 = uVar16 & (ulonglong)(auVar36._8_8_ - dVar7);
  auVar31._8_4_ = (undefined4)uVar12;
  auVar31._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar2._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar36._4_4_;
  auVar2._0_4_ = ~(uint)uVar14 & auVar36._0_4_;
  auVar2._8_4_ = ~(uint)uVar16 & auVar36._8_4_;
  auVar2._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar36._12_4_;
  auVar31 = auVar31 | auVar2;
  auVar32._0_8_ =
       (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
  auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
  lVar17 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar32._8_8_);
  auVar8._8_4_ = (int)lVar17;
  auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar32._0_8_);
  auVar8._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  iVar9 = movmskpd((int)&stack0x00000000,auVar8);
  if ((uVar11 & 0x3fffffff) != 0 || iVar9 != 0) {
    pTVar10 = UE::Math::TRotator<double>::Quaternion(param_1,local_58);
    local_78._s_0.X = (this->RelativeLocation).field0_0x0._s_0.X;
    local_78._s_0.Y = (this->RelativeLocation).field0_0x0._s_0.Y;
    local_78._s_0.Z = (this->RelativeLocation).field0_0x0._s_0.Z;
    SetRelativeLocationAndRotation
              (this,(TVector<double> *)&local_78._s_0,pTVar10,param_2,param_3,param_4);
  }
  return;
}

// SetRelativeRotationCache @ 14796a530

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
USceneComponent::SetRelativeRotationCache(USceneComponent *this,FRotationConversionCache *param_1)

{
  FRotationConversionCache *pFVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  FPayload *pFVar6;
  undefined1 auVar7 [16];
  FPayload *pFVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong local_48 [3];
  double local_30;
  double local_18;
  
  pFVar1 = &this->RelativeRotationCache;
  pFVar8 = (pFVar1->PayloadPtr).Ptr;
  dVar3 = (double)CONCAT44(UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_,
                           UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_);
  auVar7._4_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
  auVar7._0_4_ = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
  auVar7._8_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
  auVar7._12_4_ = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
  if (pFVar8 == (FPayload *)0x0) {
    dVar4 = auVar7._8_8_;
    local_30 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    uVar9 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
    uVar10 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
  }
  else {
    uVar2 = (pFVar8->CachedRotator).Pitch;
    dVar4 = (pFVar8->CachedRotator).Yaw;
    uVar9 = (undefined4)uVar2;
    uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_30 = (pFVar8->CachedRotator).Roll;
  }
  pFVar8 = (param_1->PayloadPtr).Ptr;
  if (pFVar8 == (FPayload *)0x0) {
    local_18 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    uVar11 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
    uVar12 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
  }
  else {
    dVar3 = (pFVar8->CachedRotator).Pitch;
    uVar5 = (pFVar8->CachedRotator).Yaw;
    uVar11 = (undefined4)uVar5;
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_18 = (pFVar8->CachedRotator).Roll;
  }
  if ((((double)CONCAT44(uVar10,uVar9) != dVar3) || (dVar4 != (double)CONCAT44(uVar12,uVar11))) ||
     (local_30 != local_18)) {
    if (this->bComponentToWorldUpdated == 0) {
      UpdateComponentToWorld(this,None,None);
    }
    if ((pFVar1->PayloadPtr).Ptr == (FPayload *)0x0) {
      if ((param_1->PayloadPtr).Ptr == (FPayload *)0x0) {
        return;
      }
      pFVar8 = ::operator_new(0x40);
      if (pFVar8 == (FPayload *)0x0) {
        pFVar8 = (FPayload *)0x0;
      }
      else {
        dVar3 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.Y._4_4_,
                                 UE::Math::TQuat<double>::Identity.Y._0_4_);
        (pFVar8->CachedQuat).X =
             (double)CONCAT44(UE::Math::TQuat<double>::Identity.X._4_4_,
                              UE::Math::TQuat<double>::Identity.X._0_4_);
        (pFVar8->CachedQuat).Y = dVar3;
        dVar3 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.W._4_4_,
                                 UE::Math::TQuat<double>::Identity.W._0_4_);
        (pFVar8->CachedQuat).Z =
             (double)CONCAT44(UE::Math::TQuat<double>::Identity.Z._4_4_,
                              UE::Math::TQuat<double>::Identity.Z._0_4_);
        (pFVar8->CachedQuat).W = dVar3;
        dVar3 = (double)CONCAT44(UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_,
                                 UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_);
        (pFVar8->CachedRotator).Pitch =
             (double)CONCAT44(UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_,
                              UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_);
        (pFVar8->CachedRotator).Yaw = dVar3;
        (pFVar8->CachedRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      if (pFVar1 != (FRotationConversionCache *)local_48) {
        pFVar6 = (pFVar1->PayloadPtr).Ptr;
        (pFVar1->PayloadPtr).Ptr = pFVar8;
        pFVar8 = (FPayload *)0x0;
        ::operator_delete(pFVar6,0x40);
      }
      ::operator_delete(pFVar8,0x40);
    }
    pFVar8 = (param_1->PayloadPtr).Ptr;
    pFVar6 = (pFVar1->PayloadPtr).Ptr;
    uVar9 = UE::Math::TQuat<double>::Identity.X._0_4_;
    uVar10 = UE::Math::TQuat<double>::Identity.X._4_4_;
    uVar11 = UE::Math::TQuat<double>::Identity.Y._0_4_;
    uVar12 = UE::Math::TQuat<double>::Identity.Y._4_4_;
    uVar13 = UE::Math::TQuat<double>::Identity.Z._0_4_;
    uVar14 = UE::Math::TQuat<double>::Identity.Z._4_4_;
    uVar15 = UE::Math::TQuat<double>::Identity.W._0_4_;
    uVar16 = UE::Math::TQuat<double>::Identity.W._4_4_;
    if (pFVar8 != (FPayload *)0x0) {
      uVar9 = *(undefined4 *)&(pFVar8->CachedQuat).X;
      uVar10 = *(undefined4 *)((longlong)&(pFVar8->CachedQuat).X + 4);
      uVar11 = *(undefined4 *)&(pFVar8->CachedQuat).Y;
      uVar12 = *(undefined4 *)((longlong)&(pFVar8->CachedQuat).Y + 4);
      uVar13 = *(undefined4 *)&(pFVar8->CachedQuat).Z;
      uVar14 = *(undefined4 *)((longlong)&(pFVar8->CachedQuat).Z + 4);
      uVar15 = *(undefined4 *)&(pFVar8->CachedQuat).W;
      uVar16 = *(undefined4 *)((longlong)&(pFVar8->CachedQuat).W + 4);
    }
    *(undefined4 *)&(pFVar6->CachedQuat).X = uVar9;
    *(undefined4 *)((longlong)&(pFVar6->CachedQuat).X + 4) = uVar10;
    *(undefined4 *)&(pFVar6->CachedQuat).Y = uVar11;
    *(undefined4 *)((longlong)&(pFVar6->CachedQuat).Y + 4) = uVar12;
    *(undefined4 *)&(pFVar6->CachedQuat).Z = uVar13;
    *(undefined4 *)((longlong)&(pFVar6->CachedQuat).Z + 4) = uVar14;
    *(undefined4 *)&(pFVar6->CachedQuat).W = uVar15;
    *(undefined4 *)((longlong)&(pFVar6->CachedQuat).W + 4) = uVar16;
    pFVar8 = (param_1->PayloadPtr).Ptr;
    if (pFVar8 == (FPayload *)0x0) {
      uVar13 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
      uVar14 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
      uVar9 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
      uVar10 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
      uVar11 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
      uVar12 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
    }
    else {
      uVar9 = *(undefined4 *)&(pFVar8->CachedRotator).Pitch;
      uVar10 = *(undefined4 *)((longlong)&(pFVar8->CachedRotator).Pitch + 4);
      uVar11 = *(undefined4 *)&(pFVar8->CachedRotator).Yaw;
      uVar12 = *(undefined4 *)((longlong)&(pFVar8->CachedRotator).Yaw + 4);
      dVar3 = (pFVar8->CachedRotator).Roll;
      uVar13 = SUB84(dVar3,0);
      uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    *(undefined4 *)&(pFVar6->CachedRotator).Pitch = uVar9;
    *(undefined4 *)((longlong)&(pFVar6->CachedRotator).Pitch + 4) = uVar10;
    *(undefined4 *)&(pFVar6->CachedRotator).Yaw = uVar11;
    *(undefined4 *)((longlong)&(pFVar6->CachedRotator).Yaw + 4) = uVar12;
    (pFVar6->CachedRotator).Roll = (double)CONCAT44(uVar14,uVar13);
  }
  return;
}

// SetRelativeRotationExact @ 14796a6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::SetRelativeRotationExact
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
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
  double dVar32;
  double dVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  TVector<double>_u_0 local_78;
  TQuat<double> local_58 [2];
  
  dVar1 = (this->RelativeRotation).Roll;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar1;
  dVar1 = param_1->Roll - dVar1;
  dVar32 = param_1->Pitch - (this->RelativeRotation).Pitch;
  dVar34 = param_1->Yaw - (this->RelativeRotation).Yaw;
  auVar17._8_4_ = SUB84(dVar34,0);
  auVar17._0_8_ = dVar32;
  auVar17._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar18 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar18 = roundpd(auVar25,auVar18,3);
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar26._0_8_ = auVar18._0_8_ * dVar6;
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar26._8_8_ = auVar18._8_8_ * dVar7;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar1;
  dVar32 = dVar32 - auVar26._0_8_;
  dVar34 = dVar34 - auVar26._8_8_;
  auVar18 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar18 = roundpd(auVar26,auVar18,3);
  dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar20._8_4_ = SUB84(dVar34,0);
  auVar20._0_8_ = dVar32;
  auVar20._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  dVar1 = dVar1 - auVar18._0_8_ * dVar4;
  dVar3 = 0.0 - auVar18._8_8_ * dVar5;
  uVar11 = -(ulonglong)(0.0 <= dVar32);
  uVar13 = -(ulonglong)(0.0 <= dVar34);
  auVar27._0_8_ = uVar11 & (ulonglong)dVar32;
  auVar27._8_4_ = (undefined4)(uVar13 & (ulonglong)dVar34);
  auVar27._12_4_ = (undefined4)((uVar13 & (ulonglong)dVar34) >> 0x20);
  dVar34 = auVar20._8_8_ + dVar7;
  uVar12 = -(ulonglong)(0.0 <= dVar1);
  uVar14 = -(ulonglong)(0.0 <= dVar3);
  auVar35._0_4_ = ~(uint)uVar11 & SUB84(dVar32 + dVar6,0);
  auVar35._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar6) >> 0x20);
  auVar35._8_4_ = ~(uint)uVar13 & SUB84(dVar34,0);
  auVar35._12_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
  auVar35 = auVar35 | auVar27;
  auVar21._8_4_ = SUB84(dVar3,0);
  auVar21._0_8_ = dVar1;
  auVar21._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar34 = auVar21._8_8_ + dVar5;
  auVar33._0_4_ = ~(uint)uVar12 & SUB84(dVar1 + dVar4,0);
  auVar33._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar4) >> 0x20);
  auVar33._8_4_ = ~(uint)uVar14 & SUB84(dVar34,0);
  auVar33._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
  auVar18._8_4_ = (int)((ulonglong)dVar3 & uVar14);
  auVar18._0_8_ = (ulonglong)dVar1 & uVar12;
  auVar18._12_4_ = (int)(((ulonglong)dVar3 & uVar14) >> 0x20);
  auVar33 = auVar33 | auVar18;
  uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar33._0_8_);
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar33._8_8_);
  uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar35._0_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar35._8_8_);
  auVar28._0_8_ = uVar12 & (ulonglong)(auVar33._0_8_ - dVar4);
  uVar11 = uVar14 & (ulonglong)(auVar33._8_8_ - dVar5);
  auVar28._8_4_ = (undefined4)uVar11;
  auVar28._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar22._0_4_ = ~(uint)uVar12 & auVar33._0_4_;
  auVar22._4_4_ = ~(uint)(uVar12 >> 0x20) & auVar33._4_4_;
  auVar22._8_4_ = ~(uint)uVar14 & auVar33._8_4_;
  auVar22._12_4_ = ~(uint)(uVar14 >> 0x20) & auVar33._12_4_;
  auVar28 = auVar28 | auVar22;
  auVar23._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
  auVar23._0_8_ = __real_3f1a36e2e0000000;
  auVar23._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar29._0_8_ =
       (double)CONCAT44(auVar28._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar28._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar29._8_4_ = auVar28._8_4_ & _UNK_15061cc88;
  auVar29._12_4_ = auVar28._12_4_ & _UNK_15061cc8c;
  auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < auVar29._8_8_);
  auVar24._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar29._0_8_);
  uVar10 = movmskpd((int)this,auVar24);
  auVar30._0_8_ = uVar13 & (ulonglong)(auVar35._0_8_ - dVar6);
  uVar11 = uVar15 & (ulonglong)(auVar35._8_8_ - dVar7);
  auVar30._8_4_ = (undefined4)uVar11;
  auVar30._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar2._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar35._4_4_;
  auVar2._0_4_ = ~(uint)uVar13 & auVar35._0_4_;
  auVar2._8_4_ = ~(uint)uVar15 & auVar35._8_4_;
  auVar2._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar35._12_4_;
  auVar30 = auVar30 | auVar2;
  auVar31._0_8_ =
       (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar31._8_4_ = auVar30._8_4_ & _UNK_15061cc88;
  auVar31._12_4_ = auVar30._12_4_ & _UNK_15061cc8c;
  lVar16 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar31._8_8_);
  auVar8._8_4_ = (int)lVar16;
  auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar31._0_8_);
  auVar8._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  iVar9 = movmskpd((int)&stack0x00000000,auVar8);
  if ((uVar10 & 0x3fffffff) != 0 || iVar9 != 0) {
    UE::Math::TRotator<double>::Quaternion(param_1,local_58);
    local_78._s_0.X = (this->RelativeLocation).field0_0x0._s_0.X;
    local_78._s_0.Y = (this->RelativeLocation).field0_0x0._s_0.Y;
    local_78._s_0.Z = (this->RelativeLocation).field0_0x0._s_0.Z;
    SetRelativeLocationAndRotation
              (this,(TVector<double> *)&local_78._s_0,local_58,param_2,param_3,param_4);
  }
  dVar3 = param_1->Yaw;
  dVar1 = param_1->Roll;
  (this->RelativeRotation).Pitch = param_1->Pitch;
  (this->RelativeRotation).Yaw = dVar3;
  (this->RelativeRotation).Roll = dVar1;
  return;
}

// SetRelativeRotation_Direct @ 14796a8a0

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
USceneComponent::SetRelativeRotation_Direct(USceneComponent *this,TRotator<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = param_1->Yaw;
  dVar1 = param_1->Roll;
  (this->RelativeRotation).Pitch = param_1->Pitch;
  (this->RelativeRotation).Yaw = dVar2;
  (this->RelativeRotation).Roll = dVar1;
  return;
}

// SetRelativeScale3D @ 14796a8c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetRelativeScale3D(USceneComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  FScopedMovementUpdate *this_00;
  FString local_68;
  TArrayView<FOverlapInfo_const_,int> local_58;
  FString local_48 [2];
  double local_28;
  
  local_28 = (this->RelativeScale3D).field0_0x0._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (((dVar1 != (this->RelativeScale3D).field0_0x0._s_0.X) ||
      ((this->RelativeScale3D).field0_0x0._s_0.Y != (param_1->field0_0x0)._s_0.Y)) ||
     (local_28 != (param_1->field0_0x0)._s_0.Z)) {
    iVar4 = _finite(dVar1);
    if (((iVar4 == 0) || (iVar4 = _finite((param_1->field0_0x0)._s_0.Y), iVar4 == 0)) ||
       (iVar4 = _finite((param_1->field0_0x0)._s_0.Z), iVar4 == 0)) {
      if (2 < (byte)LogBlueprint._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,local_48,(UObject *)0x0,None);
        ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
        }
      }
      (param_1->field0_0x0)._s_0.X = 1.0;
      (param_1->field0_0x0)._s_0.Y = 1.0;
      (param_1->field0_0x0)._s_0.Z = 1.0;
    }
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->RelativeScale3D).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->RelativeScale3D).field0_0x0._s_0.Y = dVar2;
    (this->RelativeScale3D).field0_0x0._s_0.Z = dVar1;
    bVar3 = UActorComponent::NeedsInitialization((UActorComponent *)this);
    if (((!bVar3) &&
        (bVar3 = UActorComponent::OwnerNeedsInitialization((UActorComponent *)this), !bVar3)) &&
       (UpdateComponentToWorld(this,None,None), (this->_padding_ & 1) != 0)) {
      if ((this->ScopedMovementStack).ArrayNum < 1) {
        UpdateOverlaps(this,(TArrayView<FOverlapInfo_const_,int> *)0x0,true,
                       (TArrayView<FOverlapInfo_const_,int> *)0x0);
      }
      else {
        this_00 = GetCurrentScopedMovement(this);
        local_58.DataPtr = (FOverlapInfo *)0x0;
        local_58.ArrayNum = 0;
        FScopedMovementUpdate::AppendOverlapsAfterMove(this_00,&local_58,false,false);
      }
    }
  }
  return;
}

// SetRelativeScale3D_Direct @ 14796aac0

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
USceneComponent::SetRelativeScale3D_Direct(USceneComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->RelativeScale3D).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RelativeScale3D).field0_0x0._s_0.Y = dVar2;
  (this->RelativeScale3D).field0_0x0._s_0.Z = dVar1;
  return;
}

// SetRelativeTransform @ 14796aae0

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
USceneComponent::SetRelativeTransform
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TVector<double>_u_0 local_48;
  TQuat<double> local_28;
  
  local_28.X = (param_1->Rotation).XY.m128d_f64[0];
  local_28.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_28.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_28.W = (param_1->Rotation).ZW.m128d_f64[1];
  local_48._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  local_48._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
  local_48._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_48._s_0,&local_28,param_2,param_3,param_4);
  local_48._s_0.X = (param_1->Scale3D).XY.m128d_f64[0];
  local_48._s_0.Y = (param_1->Scale3D).XY.m128d_f64[1];
  local_48._s_0.Z = (param_1->Scale3D).ZW.m128d_f64[0];
  SetRelativeScale3D(this,(TVector<double> *)&local_48._s_0);
  return;
}

// SetShouldBeAttached @ 14796adb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetShouldBeAttached(USceneComponent *this,bool param_1)

{
  this->bShouldBeAttached = '\0';
  this->field_0x1a8 = this->field_0x1a8 | param_1 << 6;
  return;
}

// SetShouldSnapLocationWhenAttached @ 14796add0

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
USceneComponent::SetShouldSnapLocationWhenAttached(USceneComponent *this,bool param_1)

{
  this->bShouldSnapLocationWhenAttached = '\0';
  this->field_0x1a8 = this->field_0x1a8 | param_1 << 7;
  return;
}

// SetShouldSnapRotationWhenAttached @ 14796adf0

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
USceneComponent::SetShouldSnapRotationWhenAttached(USceneComponent *this,bool param_1)

{
  this->bShouldSnapRotationWhenAttached = '\0';
  this->field_0x1a9 = this->field_0x1a9 | param_1;
  return;
}

// SetShouldSnapScaleWhenAttached @ 14796ae10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetShouldSnapScaleWhenAttached(USceneComponent *this,bool param_1)

{
  this->bShouldSnapScaleWhenAttached = '\0';
  this->field_0x1a9 = this->field_0x1a9 | param_1 * '\x02';
  return;
}

// SetShouldUpdatePhysicsVolume @ 14796ae30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetShouldUpdatePhysicsVolume(USceneComponent *this,bool param_1)

{
  USceneComponent *this_00;
  
  if (((param_1) && (SkipUpdateOverlapsOptimEnabled == 1)) && (this->bSkipUpdateOverlaps != '\0')) {
    this->field_0x1a8 = this->field_0x1a8 & 0xfd;
    this_00 = (this->AttachParent).field0_0x0.DebugPtr;
    if (this_00 != (USceneComponent *)0x0) {
      ClearSkipUpdateOverlaps(this_00);
    }
  }
  this->bShouldUpdatePhysicsVolume = '\0';
  this->field_0x1a9 = this->field_0x1a9 | param_1 << 2;
  return;
}

// SetUsingAbsoluteLocation @ 14796cdb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetUsingAbsoluteLocation(USceneComponent *this,bool param_1)

{
  this->bAbsoluteLocation = '\0';
  this->field_0x1a8 = this->field_0x1a8 | param_1 << 2;
  return;
}

// SetUsingAbsoluteRotation @ 14796cdd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetUsingAbsoluteRotation(USceneComponent *this,bool param_1)

{
  this->bAbsoluteRotation = '\0';
  this->field_0x1a8 = this->field_0x1a8 | param_1 << 3;
  return;
}

// SetUsingAbsoluteScale @ 14796cdf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetUsingAbsoluteScale(USceneComponent *this,bool param_1)

{
  this->bAbsoluteScale = '\0';
  this->field_0x1a8 = this->field_0x1a8 | param_1 << 4;
  return;
}

// SetVisibility @ 14796d660

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
USceneComponent::SetVisibility(USceneComponent *this,bool param_1,EVisibilityPropagation param_2)

{
  longlong lVar1;
  USceneComponent *this_00;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ForElementType<USceneComponent_*> FVar5;
  void *_Dst;
  bool bVar6;
  undefined1 auStackY_138 [32];
  ForElementType<USceneComponent_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar6 = param_2 == Propagate;
  if (param_1 != this->bVisible) {
    bVar6 = (byte)(param_2 - DirtyOnly) < 2;
    this->field_0x1a8 = this->field_0x1a8 & 0xdf | param_1 << 5;
    (**(code **)(this->_padding_ + 0x568))();
  }
  if ((bVar6) && (0 < (this->AttachChildren).ArrayNum)) {
    local_3c = 0x18;
    local_108.SecondaryData = (ForElementType<USceneComponent_*>)0x0;
    local_40 = 0;
    if ((&local_108 == (ForElementType<USceneComponent_*> *)&this->AttachChildren) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (this->AttachChildren).ArrayNum;
    if (iVar4 != 0) {
      iVar3 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                        (8,8,iVar4,&local_108,&local_40,&local_3c);
      FVar5 = (ForElementType<USceneComponent_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar5 = local_108.SecondaryData;
      }
      memcpy((void *)((longlong)FVar5 + (longlong)iVar3 * 8),
             (this->AttachChildren).AllocatorInstance.Data,(longlong)iVar4 << 3);
    }
    while (0 < local_40) {
      FVar5 = (ForElementType<USceneComponent_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar5 = local_108.SecondaryData;
      }
      lVar1 = (longlong)(local_40 + -1) * 8;
      this_00 = *(USceneComponent **)(lVar1 + (longlong)FVar5);
      FVar5 = (ForElementType<USceneComponent_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar5 = local_108.SecondaryData;
      }
      _Dst = (void *)(lVar1 + (longlong)FVar5);
      iVar4 = (local_40 - (local_40 + -1)) + -1;
      if (iVar4 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
      }
      local_40 = local_40 + -1;
      if (this_00 != (USceneComponent *)0x0) {
        if ((&local_108 == (ForElementType<USceneComponent_*> *)&this_00->AttachChildren) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this_00->AttachChildren).ArrayNum;
        if (iVar4 != 0) {
          iVar3 = UE::Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                            (8,8,iVar4,&local_108,&local_40,&local_3c);
          FVar5 = (ForElementType<USceneComponent_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
            FVar5 = local_108.SecondaryData;
          }
          ConstructItems<USceneComponent_*,TObjectPtr<USceneComponent>,int>
                    ((void *)((longlong)FVar5 + (longlong)iVar3 * 8),
                     (TObjectPtr<USceneComponent> *)(this_00->AttachChildren).AllocatorInstance.Data
                     ,iVar4);
        }
        if (param_2 == Propagate) {
          SetVisibility(this_00,param_1,NoPropagation);
        }
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00);
      }
    }
    if (local_108.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FMemory::Free((void *)local_108.SecondaryData);
    }
  }
  return;
}

// SetVisibleFlag @ 14796d900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::SetVisibleFlag(USceneComponent *this,bool param_1)

{
  this->bVisible = '\0';
  this->field_0x1a8 = this->field_0x1a8 | param_1 << 5;
  return;
}

// SetWorldLocation @ 14796d920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::SetWorldLocation
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  USceneComponent *pUVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_168 [32];
  TVector<double>_u_0 local_138;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_138._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  pUVar1 = (this->AttachParent).field0_0x0.DebugPtr;
  local_138._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if ((pUVar1 != (USceneComponent *)0x0) && (this->bAbsoluteLocation == '\0')) {
    (**(code **)(pUVar1->_padding_ + 0x520))(pUVar1,&local_118,this->AttachSocketName,0);
    local_118 = local_118 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dStack_110 = dStack_110 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_108 = local_108 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dStack_100 = dStack_100 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_e8 = (param_1->field0_0x0)._s_0.Z - local_e8;
    local_f8 = (param_1->field0_0x0)._s_0.X - local_f8;
    dStack_f0 = (param_1->field0_0x0)._s_0.Y - dStack_f0;
    uVar21 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
    auVar15._8_4_ = SUB84(dStack_110,0);
    auVar15._0_8_ = local_118;
    auVar15._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
    auVar13._8_4_ = SUB84(dStack_100,0);
    auVar13._0_8_ = local_108;
    auVar13._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
    auVar16 = blendpd(auVar15,auVar13,2);
    auVar25._8_4_ = SUB84(dStack_f0,0);
    auVar25._0_8_ = local_f8;
    auVar25._12_4_ = uVar21;
    auVar8._8_4_ = SUB84(local_108,0);
    auVar8._0_8_ = dStack_110;
    auVar8._12_4_ = (int)((ulonglong)local_108 >> 0x20);
    auVar12._8_4_ = SUB84(dStack_f0,0);
    auVar12._0_8_ = local_f8;
    auVar12._12_4_ = uVar21;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_e8;
    auVar13 = blendpd(auVar12,auVar4,2);
    auVar26._0_8_ = auVar25._8_8_ * local_118 - dStack_110 * local_f8;
    auVar26._8_8_ = local_e8 * dStack_110 - auVar8._8_8_ * dStack_f0;
    auVar14._0_8_ = auVar13._0_8_ * local_108 - auVar16._0_8_ * local_e8;
    auVar14._8_8_ = auVar13._8_8_ * dStack_100 - auVar16._8_8_ * 0.0;
    dVar2 = auVar26._8_8_ + auVar26._8_8_;
    dVar3 = auVar14._0_8_ + auVar14._0_8_;
    uVar21 = SUB84(dVar3,0);
    uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar13 = blendpd(auVar26,auVar14,2);
    auVar23._8_4_ = uVar21;
    auVar23._0_8_ = dVar2;
    auVar23._12_4_ = uVar22;
    auVar9._8_4_ = uVar21;
    auVar9._0_8_ = dVar2;
    auVar9._12_4_ = uVar22;
    auVar19._8_4_ = uVar21;
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar22;
    auVar27._0_8_ = auVar13._0_8_ + auVar13._0_8_;
    auVar27._8_8_ = auVar13._8_8_ + auVar13._8_8_;
    auVar13 = blendpd(auVar19,auVar27,2);
    auVar24._0_8_ = auVar23._8_8_ * local_118 - dVar2 * dStack_110;
    auVar24._8_8_ = auVar27._0_8_ * dStack_110 - auVar9._8_8_ * local_108;
    auVar10._8_4_ = SUB84(auVar27._8_8_,0);
    auVar10._0_8_ = auVar27._0_8_;
    auVar10._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
    auVar20._0_8_ = auVar13._0_8_ * local_108 - auVar27._0_8_ * auVar16._0_8_;
    auVar20._8_8_ = auVar13._8_8_ * dStack_100 - auVar10._8_8_ * auVar16._8_8_;
    auVar17._0_8_ =
         (double)CONCAT44(uStack_d4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_d8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar17._8_4_ = uStack_d0 & _UNK_15061cc88;
    auVar17._12_4_ = uStack_cc & _UNK_15061cc8c;
    lVar6 = -(ulonglong)(auVar17._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar7 = -(ulonglong)(auVar17._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar5._4_4_ = uStack_d4;
    auVar5._0_4_ = local_d8;
    auVar5._8_4_ = uStack_d0;
    auVar5._12_4_ = uStack_cc;
    auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar5);
    auVar18._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar13._4_4_,
                          ~(uint)lVar6 & auVar13._0_4_);
    auVar18._8_4_ = ~(uint)lVar7 & auVar13._8_4_;
    auVar18._12_4_ = ~(uint)((ulonglong)lVar7 >> 0x20) & auVar13._12_4_;
    auVar11._8_4_ = SUB84(auVar24._8_8_,0);
    auVar11._0_8_ = auVar24._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
    lVar6 = -(ulonglong)
             ((double)CONCAT44(local_c8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               local_c8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar16._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar16._0_8_ = local_c8._0_8_;
    auVar16._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
    auVar16 = blendpd(auVar24,auVar20,2);
    local_138._s_0.X = auVar18._0_8_ * (dVar2 * dStack_100 + local_f8 + auVar11._8_8_);
    local_138._s_0.Y = auVar18._8_8_ * (dVar3 * dStack_100 + dStack_f0 + auVar20._0_8_);
    local_138._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar13._4_4_,
                          ~(uint)lVar6 & auVar13._0_4_) *
         (auVar27._0_8_ * dStack_100 + local_e8 + auVar16._0_8_);
  }
  SetRelativeLocation(this,(TVector<double> *)&local_138._s_0,param_2,param_3,param_4);
  return;
}

// SetWorldLocationAndRotation @ 14796dbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::SetWorldLocationAndRotation
          (USceneComponent *this,TVector<double> *param_1,TQuat<double> *param_2,bool param_3,
          FHitResult *param_4,ETeleportType param_5)

{
  USceneComponent *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  TVector<double>_u_0 local_158;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_178._0_8_ = param_2->X;
  local_178._8_8_ = param_2->Y;
  pUVar1 = (this->AttachParent).field0_0x0.DebugPtr;
  local_168._0_8_ = param_2->Z;
  local_168._8_8_ = param_2->W;
  if (pUVar1 != (USceneComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x520))(pUVar1,&local_138,this->AttachSocketName,0);
    dVar24 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar25 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar30 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar29 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    if (this->bAbsoluteLocation == '\0') {
      local_108 = (param_1->field0_0x0)._s_0.Z - local_108;
      dVar2 = local_138 * dVar30;
      dVar3 = dStack_130 * dVar29;
      dVar4 = local_128 * dVar24;
      dVar5 = dStack_120 * dVar25;
      auVar26._8_4_ = SUB84(dVar3,0);
      auVar26._0_8_ = dVar2;
      auVar26._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar27._8_4_ = SUB84(dVar5,0);
      auVar27._0_8_ = dVar4;
      auVar27._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar27 = blendpd(auVar26,auVar27,2);
      local_118 = (param_1->field0_0x0)._s_0.X - local_118;
      dStack_110 = (param_1->field0_0x0)._s_0.Y - dStack_110;
      uVar33 = (undefined4)((ulonglong)dStack_110 >> 0x20);
      auVar38._8_4_ = SUB84(dStack_110,0);
      auVar38._0_8_ = local_118;
      auVar38._12_4_ = uVar33;
      auVar20._8_4_ = SUB84(dStack_110,0);
      auVar20._0_8_ = local_118;
      auVar20._12_4_ = uVar33;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = local_108;
      auVar21 = blendpd(auVar20,auVar37,2);
      auVar13._8_4_ = SUB84(dVar4,0);
      auVar13._0_8_ = dVar3;
      auVar13._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar39._0_8_ = auVar38._8_8_ * dVar2 - dVar3 * local_118;
      auVar39._8_8_ = local_108 * dVar3 - auVar13._8_8_ * dStack_110;
      auVar22._0_8_ = auVar21._0_8_ * dVar4 - auVar27._0_8_ * local_108;
      auVar22._8_8_ = auVar21._8_8_ * dVar5 - auVar27._8_8_ * 0.0;
      dVar6 = auVar39._8_8_ + auVar39._8_8_;
      dVar7 = auVar22._0_8_ + auVar22._0_8_;
      uVar33 = SUB84(dVar7,0);
      uVar34 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar21 = blendpd(auVar39,auVar22,2);
      auVar35._8_4_ = uVar33;
      auVar35._0_8_ = dVar6;
      auVar35._12_4_ = uVar34;
      auVar14._8_4_ = uVar33;
      auVar14._0_8_ = dVar6;
      auVar14._12_4_ = uVar34;
      auVar31._8_4_ = uVar33;
      auVar31._0_8_ = dVar6;
      auVar31._12_4_ = uVar34;
      auVar40._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar40._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      auVar36._0_8_ = auVar35._8_8_ * dVar2 - dVar6 * dVar3;
      auVar36._8_8_ = auVar40._0_8_ * dVar3 - auVar14._8_8_ * dVar4;
      auVar21 = blendpd(auVar31,auVar40,2);
      auVar15._8_4_ = SUB84(auVar40._8_8_,0);
      auVar15._0_8_ = auVar40._0_8_;
      auVar15._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
      auVar32._0_8_ = auVar21._0_8_ * dVar4 - auVar40._0_8_ * auVar27._0_8_;
      auVar32._8_8_ = auVar21._8_8_ * dVar5 - auVar15._8_8_ * auVar27._8_8_;
      lVar10 = -(ulonglong)
                ((double)CONCAT44(uStack_f4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  local_f8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar12 = -(ulonglong)
                ((double)CONCAT44(uStack_ec & _UNK_15061cc8c,uStack_f0 & _UNK_15061cc88) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar8._4_4_ = uStack_f4;
      auVar8._0_4_ = local_f8;
      auVar8._8_4_ = uStack_f0;
      auVar8._12_4_ = uStack_ec;
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar8);
      lVar11 = -(ulonglong)
                ((double)CONCAT44(local_e8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  local_e8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar16._8_4_ = SUB84(auVar36._8_8_,0);
      auVar16._0_8_ = auVar36._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
      auVar17._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar17._0_8_ = local_e8._0_8_;
      auVar17._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
      dVar2 = (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar27._12_4_,
                               ~(uint)lVar12 & auVar27._8_4_) *
              (dVar7 * dVar5 + dStack_110 + auVar32._0_8_);
      auVar37 = blendpd(auVar36,auVar32,2);
      auVar21._8_4_ = SUB84(dVar2,0);
      auVar21._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar10 >> 0x20) & auVar27._4_4_,
                            ~(uint)lVar10 & auVar27._0_4_) *
           (dVar6 * dVar5 + local_118 + auVar16._8_8_);
      auVar21._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])&param_1->field0_0x0 = auVar21;
      (param_1->field0_0x0)._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar17._4_4_,
                            ~(uint)lVar11 & auVar17._0_4_) *
           (auVar40._0_8_ * dVar5 + local_108 + auVar37._0_8_);
    }
    if (this->bAbsoluteRotation == '\0') {
      dVar2 = param_2->Z;
      dVar3 = param_2->W;
      dVar4 = param_2->X;
      dVar5 = param_2->Y;
      local_138 = local_138 * dVar30;
      dStack_130 = dStack_130 * dVar29;
      local_128 = local_128 * dVar24;
      dStack_120 = dStack_120 * dVar25;
      uVar33 = (undefined4)((ulonglong)dStack_120 >> 0x20);
      auVar28._8_4_ = SUB84(dStack_120,0);
      auVar28._0_8_ = local_128;
      auVar28._12_4_ = uVar33;
      dVar30 = auVar28._8_8_;
      auVar18._8_4_ = SUB84(dStack_120,0);
      auVar18._0_8_ = dVar30;
      auVar18._12_4_ = uVar33;
      auVar23._8_4_ = SUB84(dStack_130,0);
      auVar23._0_8_ = dStack_130;
      auVar23._12_4_ = (int)((ulonglong)dStack_130 >> 0x20);
      auVar19._8_4_ = SUB84(local_128,0);
      auVar19._0_8_ = local_128;
      auVar19._12_4_ = (int)((ulonglong)local_128 >> 0x20);
      dVar24 = local_138 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar18._8_8_ * dVar5 +
               auVar23._8_8_ * dVar3 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar19._8_8_ * dVar4 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar25 = local_138 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dStack_120 * dVar3 +
               dStack_130 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
               + local_128 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
      ;
      local_178._8_4_ = SUB84(dVar24,0);
      local_178._0_8_ =
           local_138 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar30 * dVar4 +
           dStack_130 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           local_128 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_178._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      local_168._8_4_ = SUB84(dVar25,0);
      local_168._0_8_ =
           local_138 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar30 * dVar2 +
           dStack_130 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           local_128 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_168._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    }
  }
  local_158._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_158._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_158._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_158._s_0,(TQuat<double> *)local_178,param_3,param_4,
             param_5);
  return;
}

// SetWorldLocationAndRotation @ 14796e010

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
USceneComponent::SetWorldLocationAndRotation
          (USceneComponent *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          FHitResult *param_4,ETeleportType param_5)

{
  TQuat<double> *pTVar1;
  TQuat<double> local_48;
  TVector<double>_u_0 local_28;
  
  if ((this->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
    local_48.X = param_2->Pitch;
    local_48.Y = param_2->Yaw;
    local_48.Z = param_2->Roll;
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    SetRelativeLocationAndRotation
              (this,(TVector<double> *)&local_28._s_0,(TRotator<double> *)&local_48,param_3,param_4,
               param_5);
    return;
  }
  pTVar1 = UE::Math::TRotator<double>::Quaternion(param_2,&local_48);
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  SetWorldLocationAndRotation(this,(TVector<double> *)&local_28._s_0,pTVar1,param_3,param_4,param_5)
  ;
  return;
}

// SetWorldLocationAndRotationNoPhysics @ 14796e100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::SetWorldLocationAndRotationNoPhysics
          (USceneComponent *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  USceneComponent *pUVar3;
  undefined1 auVar4 [12];
  ulonglong uVar5;
  double dVar6;
  undefined1 uVar7;
  TQuat<double> *pTVar8;
  FPayload *this_00;
  TRotator<double> *pTVar9;
  int iVar10;
  FRotationConversionCache *this_01;
  uint uVar11;
  TQuat<double> *__return_storage_ptr__;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
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
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auStack_168 [48];
  TQuat<double> local_138;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar3 = (this->AttachParent).field0_0x0.DebugPtr;
  if (pUVar3 == (USceneComponent *)0x0) {
    dVar31 = (param_1->field0_0x0)._s_0.Y;
    dVar17 = (param_1->field0_0x0)._s_0.Z;
    (this->RelativeLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->RelativeLocation).field0_0x0._s_0.Y = dVar31;
    (this->RelativeLocation).field0_0x0._s_0.Z = dVar17;
    dVar31 = param_2->Pitch;
    dVar30 = param_2->Yaw;
    dVar17 = param_2->Roll;
  }
  else {
    (**(code **)(pUVar3->_padding_ + 0x520))(pUVar3,&local_118,this->AttachSocketName,0);
    dVar17 = (param_1->field0_0x0)._s_0.Z;
    if (this->bAbsoluteLocation == '\0') {
      dVar17 = dVar17 - local_e8;
      dVar53 = local_118 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar38 = dStack_110 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar45._0_8_ = local_108 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar45._8_8_ = dStack_100 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar39._8_4_ = SUB84(dVar38,0);
      auVar39._0_8_ = dVar53;
      auVar39._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      local_f8 = (param_1->field0_0x0)._s_0.X - local_f8;
      dStack_f0 = (param_1->field0_0x0)._s_0.Y - dStack_f0;
      uVar57 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
      auVar48 = blendpd(auVar39,auVar45,2);
      auVar32._8_4_ = SUB84(dStack_f0,0);
      auVar32._0_8_ = local_f8;
      auVar32._12_4_ = uVar57;
      auVar61._8_4_ = SUB84(dStack_f0,0);
      auVar61._0_8_ = local_f8;
      auVar61._12_4_ = uVar57;
      auVar18._8_4_ = SUB84(auVar45._0_8_,0);
      auVar18._0_8_ = dVar38;
      auVar18._12_4_ = (int)((ulonglong)auVar45._0_8_ >> 0x20);
      auVar43._8_8_ = 0;
      auVar43._0_8_ = dVar17;
      auVar43 = blendpd(auVar32,auVar43,2);
      auVar62._0_8_ = auVar61._8_8_ * dVar53 - dVar38 * local_f8;
      auVar62._8_8_ = dVar17 * dVar38 - auVar18._8_8_ * dStack_f0;
      auVar33._0_8_ = auVar43._0_8_ * auVar45._0_8_ - auVar48._0_8_ * dVar17;
      auVar33._8_8_ = auVar43._8_8_ * auVar45._8_8_ - auVar48._8_8_ * 0.0;
      dVar31 = auVar62._8_8_ + auVar62._8_8_;
      dVar30 = auVar33._0_8_ + auVar33._0_8_;
      uVar57 = SUB84(dVar30,0);
      uVar58 = (undefined4)((ulonglong)dVar30 >> 0x20);
      auVar43 = blendpd(auVar62,auVar33,2);
      auVar63._0_8_ = auVar43._0_8_ + auVar43._0_8_;
      auVar63._8_8_ = auVar43._8_8_ + auVar43._8_8_;
      auVar59._8_4_ = uVar57;
      auVar59._0_8_ = dVar31;
      auVar59._12_4_ = uVar58;
      auVar19._8_4_ = uVar57;
      auVar19._0_8_ = dVar31;
      auVar19._12_4_ = uVar58;
      auVar54._8_4_ = uVar57;
      auVar54._0_8_ = dVar31;
      auVar54._12_4_ = uVar58;
      auVar43 = blendpd(auVar54,auVar63,2);
      auVar60._0_8_ = auVar59._8_8_ * dVar53 - dVar31 * dVar38;
      auVar60._8_8_ = auVar63._0_8_ * dVar38 - auVar19._8_8_ * auVar45._0_8_;
      auVar4._4_8_ = auVar45._8_8_;
      auVar4._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar46._0_8_ = auVar4._0_8_ << 0x20;
      auVar46._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar46._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar20._8_4_ = SUB84(auVar63._8_8_,0);
      auVar20._0_8_ = auVar63._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
      auVar55._0_8_ = auVar43._0_8_ * auVar45._0_8_ - auVar63._0_8_ * auVar48._0_8_;
      auVar55._8_8_ = auVar43._8_8_ * auVar45._8_8_ - auVar20._8_8_ * auVar48._8_8_;
      auVar47._8_8_ = auVar46._8_8_;
      auVar47._0_8_ = local_c8._0_8_;
      auVar50._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uStack_d4,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff & local_d8);
      auVar50._8_4_ = _UNK_15061cc88 & uStack_d0;
      auVar50._12_4_ = _UNK_15061cc8c & uStack_cc;
      lVar12 = -(ulonglong)(auVar50._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar15 = -(ulonglong)(auVar50._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar48._4_4_ = uStack_d4;
      auVar48._0_4_ = local_d8;
      auVar48._8_4_ = uStack_d0;
      auVar48._12_4_ = uStack_cc;
      auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar48);
      lVar13 = -(ulonglong)
                ((double)CONCAT44(local_c8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  local_c8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar51._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar43._4_4_,
                            ~(uint)lVar12 & auVar43._0_4_);
      auVar51._8_4_ = ~(uint)lVar15 & auVar43._8_4_;
      auVar51._12_4_ = ~(uint)((ulonglong)lVar15 >> 0x20) & auVar43._12_4_;
      auVar21._8_4_ = SUB84(auVar60._8_8_,0);
      auVar21._0_8_ = auVar60._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
      auVar48 = blendpd(auVar60,auVar55,2);
      (this->RelativeLocation).field0_0x0._s_0.X =
           auVar51._0_8_ * (dVar31 * auVar45._8_8_ + local_f8 + auVar21._8_8_);
      (this->RelativeLocation).field0_0x0._s_0.Y =
           auVar51._8_8_ * (dVar30 * auVar45._8_8_ + dStack_f0 + auVar55._0_8_);
      (this->RelativeLocation).field0_0x0._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar43._4_4_,
                            ~(uint)lVar13 & auVar43._0_4_) *
           (auVar63._0_8_ * auVar45._8_8_ + dVar17 + auVar48._0_8_);
    }
    else {
      dVar31 = (param_1->field0_0x0)._s_0.Y;
      (this->RelativeLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
      (this->RelativeLocation).field0_0x0._s_0.Y = dVar31;
      (this->RelativeLocation).field0_0x0._s_0.Z = dVar17;
    }
    if (this->bAbsoluteRotation == '\0') {
      dVar31 = local_118 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar17 = dStack_110 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      __return_storage_ptr__ = &local_138;
      dVar30 = local_108 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar53 = dStack_100 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar58 = (undefined4)((ulonglong)dVar53 >> 0x20);
      pTVar8 = UE::Math::TRotator<double>::Quaternion(param_2,__return_storage_ptr__);
      uVar57 = SUB84(__return_storage_ptr__,0);
      this_01 = &this->RelativeRotationCache;
      dVar38 = pTVar8->Z;
      dVar6 = pTVar8->W;
      uVar1 = pTVar8->X;
      uVar2 = pTVar8->Y;
      auVar41._8_4_ = SUB84(dVar53,0);
      auVar41._0_8_ = dVar30;
      auVar41._12_4_ = uVar58;
      dVar44 = auVar41._8_8_;
      auVar22._8_4_ = SUB84(dVar53,0);
      auVar22._0_8_ = dVar44;
      auVar22._12_4_ = uVar58;
      auVar34._8_4_ = SUB84(dVar17,0);
      auVar34._0_8_ = dVar17;
      auVar34._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      auVar23._8_4_ = (int)uVar1;
      auVar23._0_8_ = uVar2;
      auVar23._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
      auVar42._0_8_ = dVar44 * dVar38;
      auVar42._8_8_ = dVar53 * dVar6;
      dVar53 = (double)uVar2 * dVar31 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + auVar42._0_8_ +
               dVar17 * (double)uVar1 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar6 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar56 = (double)uVar1 * dVar31 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + auVar42._8_8_ +
               dVar17 * (double)uVar2 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar38 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar17 = dVar6 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar44 * (double)uVar1 +
               dVar17 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               (double)uVar2 * dVar30 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar31 = dVar38 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar22._8_8_ * (double)uVar2 +
               auVar34._8_8_ * dVar6 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar23._8_8_ * dVar30 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar58 = (undefined4)((ulonglong)dVar31 >> 0x20);
      this_00 = FRotationConversionCache::GetOrCreatePayload(this_01);
      param_2 = &this_00->CachedRotator;
      auVar24._8_8_ = -(ulonglong)((this_00->CachedQuat).W != dVar56);
      auVar24._0_8_ = -(ulonglong)((this_00->CachedQuat).Z != dVar53);
      uVar11 = movmskpd(uVar57,auVar24);
      auVar25._8_4_ = SUB84(dVar31,0);
      auVar25._0_8_ = dVar17;
      auVar25._12_4_ = uVar58;
      auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ != (this_00->CachedQuat).Y);
      auVar26._0_8_ = -(ulonglong)(dVar17 != (this_00->CachedQuat).X);
      iVar10 = movmskpd((int)this_01,auVar26);
      if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
        auVar35._8_4_ = SUB84(dVar56,0);
        auVar35._0_8_ = dVar53;
        auVar35._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
        auVar27._8_4_ = SUB84(dVar31,0);
        auVar27._0_8_ = dVar17;
        auVar27._12_4_ = uVar58;
        dVar30 = dVar53 * dVar53 + dVar17 * dVar17;
        dVar38 = auVar35._8_8_ * dVar56 + auVar27._8_8_ * dVar31;
        auVar28._8_4_ = SUB84(dVar38,0);
        auVar28._0_8_ = dVar30;
        auVar28._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        auVar29._0_8_ = auVar28._8_8_ + dVar30;
        auVar29._8_8_ = dVar30 + dVar38;
        auVar43 = sqrtpd(auVar42,auVar29);
        uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= auVar29._0_8_);
        uVar16 = -(ulonglong)(__real_3e45798ee0000000 <= auVar29._8_8_);
        auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar43);
        uVar11 = (uint)(uVar14 >> 0x20);
        uVar52 = (uint)(uVar16 >> 0x20);
        auVar36._0_4_ =
             ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar36._4_4_ =
             ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar36._8_4_ =
             ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar36._12_4_ =
             ~uVar52 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar49._0_8_ = uVar14 & (ulonglong)(auVar48._0_8_ * dVar17);
        uVar5 = uVar16 & (ulonglong)(auVar48._8_8_ * dVar31);
        auVar49._8_4_ = (undefined4)uVar5;
        auVar49._12_4_ = (undefined4)(uVar5 >> 0x20);
        auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar43);
        auVar40._0_4_ =
             ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar40._4_4_ =
             ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar40._8_4_ =
             ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar40._12_4_ =
             ~uVar52 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar37._0_8_ = (ulonglong)(auVar43._0_8_ * dVar53) & uVar14;
        uVar16 = (ulonglong)(auVar43._8_8_ * dVar56) & uVar16;
        auVar37._8_4_ = (undefined4)uVar16;
        auVar37._12_4_ = (undefined4)(uVar16 >> 0x20);
        (this_00->CachedQuat).X = (double)SUB168(auVar49 | auVar36,0);
        (this_00->CachedQuat).Y = (double)SUB168(auVar49 | auVar36,8);
        (this_00->CachedQuat).Z = (double)SUB168(auVar40 | auVar37,0);
        (this_00->CachedQuat).W = (double)SUB168(auVar40 | auVar37,8);
        pTVar9 = UE::Math::TQuat<double>::Rotator
                           (&this_00->CachedQuat,(TRotator<double> *)&local_138);
        dVar17 = pTVar9->Yaw;
        param_2->Pitch = pTVar9->Pitch;
        (this_00->CachedRotator).Yaw = dVar17;
        (this_00->CachedRotator).Roll = pTVar9->Roll;
      }
    }
    dVar31 = param_2->Pitch;
    dVar30 = param_2->Yaw;
    dVar17 = param_2->Roll;
  }
  (this->RelativeRotation).Pitch = dVar31;
  (this->RelativeRotation).Yaw = dVar30;
  (this->RelativeRotation).Roll = dVar17;
  UpdateComponentToWorld(this,SkipPhysicsUpdate,None);
  return;
}

// SetWorldRotation @ 14796e5e0

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
USceneComponent::SetWorldRotation
          (USceneComponent *this,TQuat<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TVector<double>_u_0 local_48;
  TQuat<double> local_28;
  
  GetRelativeRotationFromWorld(this,&local_28,param_1);
  local_48._s_0.X = (this->RelativeLocation).field0_0x0._s_0.X;
  local_48._s_0.Y = (this->RelativeLocation).field0_0x0._s_0.Y;
  local_48._s_0.Z = (this->RelativeLocation).field0_0x0._s_0.Z;
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_48._s_0,&local_28,param_2,param_3,param_4);
  return;
}

// SetWorldRotation @ 14796e660

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
USceneComponent::SetWorldRotation
          (USceneComponent *this,TRotator<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TQuat<double> *pTVar1;
  TQuat<double> local_28;
  
  if ((this->AttachParent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
    local_28.X = param_1->Pitch;
    local_28.Y = param_1->Yaw;
    local_28.Z = param_1->Roll;
    SetRelativeRotation(this,(TRotator<double> *)&local_28,param_2,param_3,param_4);
    return;
  }
  pTVar1 = UE::Math::TRotator<double>::Quaternion(param_1,&local_28);
  SetWorldRotation(this,pTVar1,param_2,param_3,param_4);
  return;
}

// SetWorldScale3D @ 14796e700

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

void __thiscall USceneComponent::SetWorldScale3D(USceneComponent *this,TVector<double> *param_1)

{
  USceneComponent *pUVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_b8 [32];
  TVector<double>_u_0 local_98;
  undefined1 local_78 [80];
  double local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  dVar6 = (param_1->field0_0x0)._s_0.X;
  dVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
  pUVar1 = (this->AttachParent).field0_0x0.DebugPtr;
  local_98._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if ((pUVar1 != (USceneComponent *)0x0) && (this->bAbsoluteScale == '\0')) {
    (**(code **)(pUVar1->_padding_ + 0x520))(pUVar1,local_78,this->AttachSocketName,0);
    dVar4 = 0.0;
    uVar2 = local_78._64_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar3 = local_78._68_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar2) &&
        (double)CONCAT44(uVar3,uVar2) != __real_3e45798ee0000000) {
      dVar6 = __real_3ff0000000000000 / local_78._64_8_;
    }
    else {
      dVar6 = 0.0;
    }
    uVar2 = local_78._72_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar3 = local_78._76_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar2) &&
        (double)CONCAT44(uVar3,uVar2) != __real_3e45798ee0000000) {
      dVar5 = __real_3ff0000000000000 / local_78._72_8_;
    }
    else {
      dVar5 = 0.0;
    }
    uVar2 = SUB84(local_28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar3 = (uint)((ulonglong)local_28 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar3,uVar2) &&
        (double)CONCAT44(uVar3,uVar2) != __real_3e45798ee0000000) {
      dVar4 = __real_3ff0000000000000 / local_28;
    }
    dVar6 = dVar6 * (param_1->field0_0x0)._s_0.X;
    dVar5 = dVar5 * (param_1->field0_0x0)._s_0.Y;
    local_98._s_0.Z = dVar4 * (param_1->field0_0x0)._s_0.Z;
  }
  local_98._8_4_ = SUB84(dVar5,0);
  local_98._0_8_ = dVar6;
  local_98._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  SetRelativeScale3D(this,(TVector<double> *)&local_98._s_0);
  return;
}

// SetWorldTransform @ 14796e850

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
USceneComponent::SetWorldTransform
          (USceneComponent *this,TTransform<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  undefined1 *puVar1;
  USceneComponent *pUVar2;
  undefined1 auStackY_168 [32];
  TVector<double>_u_0 local_138;
  TQuat<double> local_118;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar2 = (this->AttachParent).field0_0x0.DebugPtr;
  if (pUVar2 == (USceneComponent *)0x0) {
    SetRelativeTransform(this,param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(pUVar2->_padding_ + 0x520))(pUVar2,&local_98,this->AttachSocketName,0);
    UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_f8,&local_98);
    if (this->bAbsoluteLocation != '\0') {
      local_f8.Translation.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(param_1->Translation).XY.m128d_f64;
      local_f8.Translation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 4);
      local_f8.Translation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Translation).XY.m128d_f64 + 1);
      local_f8.Translation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 0xc);
      local_f8.Translation.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(param_1->Translation).ZW.m128d_f64;
      local_f8.Translation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 4);
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Translation).ZW.m128d_f64 + 1);
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Translation).ZW.m128d_f64 + 0xc);
    }
    if (this->bAbsoluteRotation != '\0') {
      local_f8.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Rotation).XY.m128d_f64;
      local_f8.Rotation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 4);
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Rotation).XY.m128d_f64 + 1);
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 0xc);
      local_f8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(param_1->Rotation).ZW.m128d_f64;
      local_f8.Rotation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 4);
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_1->Rotation).ZW.m128d_f64 + 1);
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_1->Rotation).ZW.m128d_f64 + 0xc);
    }
    if (this->bAbsoluteScale != '\0') {
      local_f8.Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
      local_f8.Scale3D.XY.m128d_f64[1] = (param_1->Scale3D).XY.m128d_f64[1];
      local_f8.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
      local_f8.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
    }
    local_138._4_4_ = local_f8.Translation.XY.m128d_f64[0]._4_4_;
    local_138._0_4_ = local_f8.Translation.XY.m128d_f64[0]._0_4_;
    local_138._12_4_ = local_f8.Translation.XY.m128d_f64[1]._4_4_;
    local_138._8_4_ = local_f8.Translation.XY.m128d_f64[1]._0_4_;
    local_138._s_0.Z =
         (double)CONCAT44(local_f8.Translation.ZW.m128d_f64[0]._4_4_,
                          local_f8.Translation.ZW.m128d_f64[0]._0_4_);
    local_118.X._0_4_ = local_f8.Rotation.XY.m128d_f64[0]._0_4_;
    local_118.X._4_4_ = local_f8.Rotation.XY.m128d_f64[0]._4_4_;
    local_118.Y._0_4_ = local_f8.Rotation.XY.m128d_f64[1]._0_4_;
    local_118.Y._4_4_ = local_f8.Rotation.XY.m128d_f64[1]._4_4_;
    local_118.Z._0_4_ = local_f8.Rotation.ZW.m128d_f64[0]._0_4_;
    local_118.Z._4_4_ = local_f8.Rotation.ZW.m128d_f64[0]._4_4_;
    local_118.W._0_4_ = local_f8.Rotation.ZW.m128d_f64[1]._0_4_;
    local_118.W._4_4_ = local_f8.Rotation.ZW.m128d_f64[1]._4_4_;
    SetRelativeLocationAndRotation
              (this,(TVector<double> *)&local_138._s_0,&local_118,param_2,param_3,param_4);
    local_138._s_0.X = local_f8.Scale3D.XY.m128d_f64[0];
    local_138._s_0.Y = local_f8.Scale3D.XY.m128d_f64[1];
    local_138._s_0.Z = local_f8.Scale3D.ZW.m128d_f64[0];
    SetRelativeScale3D(this,(TVector<double> *)&local_138._s_0);
  }
  return;
}

// SetupAttachment @ 14796e9a0

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
USceneComponent::SetupAttachment(USceneComponent *this,USceneComponent *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  USceneComponent *pUVar2;
  TObjectPtr<USceneComponent>_u_0 TVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  USceneComponent *local_res8;
  TObjectPtr<USceneComponent>_u_0 local_res10;
  FName local_res18;
  USceneComponent *local_28;
  TObjectPtr<USceneComponent>_u_0 *local_20;
  FName *local_18;
  
  pUVar2 = (this->AttachParent).field0_0x0.DebugPtr;
  if (pUVar2 == (USceneComponent *)0x0) {
    bVar5 = param_1 == (USceneComponent *)0x0;
  }
  else {
    bVar5 = pUVar2 == param_1;
  }
  if ((!bVar5) || (param_2 != this->AttachSocketName)) {
    local_res10.DebugPtr = param_1;
    local_res18 = param_2;
    if ((this->_padding_ & 1) != 0) {
      local_20 = &local_res10;
      local_18 = &local_res18;
      local_28 = this;
      bVar5 = `USceneComponent::SetupAttachment'::__l6::<lambda_1>::operator()(&local_28);
      if (!bVar5) {
        return;
      }
    }
    if ((local_res10.DebugPtr != this) ||
       (local_res8 = this,
       bVar5 = `USceneComponent::SetupAttachment'::__l9::<lambda_2>::operator()(&local_res8), bVar5)
       ) {
      if (local_res10.DebugPtr != (USceneComponent *)0x0) {
        for (pUVar2 = ((local_res10.DebugPtr)->AttachParent).field0_0x0.DebugPtr;
            pUVar2 != (USceneComponent *)0x0; pUVar2 = (pUVar2->AttachParent).field0_0x0.DebugPtr) {
          if (this == pUVar2) {
            local_20 = &local_res10;
            local_28 = this;
            bVar5 = `USceneComponent::SetupAttachment'::__l12::<lambda_3>::operator()(&local_28);
            if (!bVar5) {
              return;
            }
            break;
          }
        }
      }
      pUVar2 = (this->AttachParent).field0_0x0.DebugPtr;
      if (pUVar2 != (USceneComponent *)0x0) {
        pFVar4 = (pUVar2->AttachChildren).AllocatorInstance.Data;
        pFVar1 = pFVar4 + (longlong)(pUVar2->AttachChildren).ArrayNum * 8;
        for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 8) {
          if (*(USceneComponent **)pFVar4 == (USceneComponent *)0x0) {
            bVar5 = this == (USceneComponent *)0x0;
          }
          else {
            bVar5 = *(USceneComponent **)pFVar4 == this;
          }
          if (bVar5) {
            local_res8 = this;
            bVar5 = `USceneComponent::SetupAttachment'::__l15::<lambda_4>::operator()(&local_res8);
            if (!bVar5) {
              return;
            }
            break;
          }
        }
      }
      TVar3 = local_res10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10.DebugPtr != (USceneComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
      }
      (this->AttachParent).field0_0x0.DebugPtr = (USceneComponent *)TVar3;
      this->bShouldBeAttached = '\0';
      this->AttachSocketName = local_res18;
      this->field_0x1a8 = this->field_0x1a8 | -(TVar3.DebugPtr != (USceneComponent *)0x0) & 0x40U;
    }
  }
  return;
}

// ShouldComponentAddToScene @ 14796eb90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::ShouldComponentAddToScene(USceneComponent *this)

{
  byte bVar1;
  FCachedSystemScalabilityCVars *pFVar2;
  
  bVar1 = (this->DetailMode).Value;
  pFVar2 = GetCachedScalabilityCVars();
  return (int)(uint)bVar1 <= pFVar2->DetailMode;
}

// ShouldRender @ 14796eed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall USceneComponent::ShouldRender(USceneComponent *this)

{
  AActor *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  UWorld *this_01;
  UChildActorComponent *this_02;
  
  this_01 = (UWorld *)this->_padding_;
  this_00 = (AActor *)this->_padding_;
  if ((((this_01 != (UWorld *)0x0) ||
       (this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       this_01 != (UWorld *)0x0)) &&
      (this_01->bCreateRenderStateForHiddenComponentsWithCollsion != '\0')) &&
     (iVar4 = (**(code **)(this->_padding_ + 0x5e0))(this), iVar4 != 0)) {
    return true;
  }
  if (((this_00 != (AActor *)0x0) &&
      (this_02 = AActor::GetParentComponent(this_00), this_02 != (UChildActorComponent *)0x0)) &&
     (bVar2 = ShouldRender((USceneComponent *)this_02), !bVar2)) {
    return false;
  }
  if ((this_01 == (UWorld *)0x0) || (bVar2 = UWorld::UsesGameHiddenFlags(this_01), !bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x560))(this);
  if ((cVar3 == '\0') || ((this_00 != (AActor *)0x0 && ((bool)this_00->bHidden)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((bVar2) && (bVar1)) && (this->bVisible != '\0')) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUSceneComponent @ 147970880

void __cdecl USceneComponent::StaticRegisterNativesUSceneComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x3e;
  local_18.DataPtr = Z_Construct_UClass_USceneComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateBounds @ 147976fc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::UpdateBounds(USceneComponent *this)

{
  int *piVar1;
  USceneComponent *pUVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  UWorld *this_00;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ComponentCalcBounds> FVar11;
  double *pdVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar13;
  FColor_u_0 FVar14;
  FName FVar15;
  FColor_u_0 FVar16;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_88;
  undefined1 local_78 [72];
  
  if ((this == (USceneComponent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  if ((this->bUseAttachParentBound != '\0') &&
     (pUVar2 = (this->AttachParent).field0_0x0.DebugPtr, pUVar2 != (USceneComponent *)0x0)) {
    dVar4 = (pUVar2->Bounds).Origin.field0_0x0._s_0.Y;
    (this->Bounds).Origin.field0_0x0._s_0.X = (pUVar2->Bounds).Origin.field0_0x0._s_0.X;
    (this->Bounds).Origin.field0_0x0._s_0.Y = dVar4;
    dVar4 = (pUVar2->Bounds).BoxExtent.field0_0x0._s_0.X;
    (this->Bounds).Origin.field0_0x0._s_0.Z = (pUVar2->Bounds).Origin.field0_0x0._s_0.Z;
    (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar4;
    dVar4 = (pUVar2->Bounds).BoxExtent.field0_0x0._s_0.Z;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (pUVar2->Bounds).BoxExtent.field0_0x0._s_0.Y;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
    (this->Bounds).SphereRadius = (pUVar2->Bounds).SphereRadius;
    return;
  }
  this_00 = (UWorld *)this->_padding_;
  if (((this_00 == (UWorld *)0x0) &&
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      this_00 == (UWorld *)0x0)) ||
     ((bVar8 = UWorld::IsGameWorld(this_00), !bVar8 &&
      (bVar8 = UWorld::IsPlayInEditor(this_00), !bVar8)))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((((bool)this->bComputeBoundsOnceForGame) && (bVar8)) &&
     (this->bComputedBoundsOnceForGame != 0)) {
    return;
  }
  FVar16.Bits = 0;
  FVar11 = StatPtr_STAT_ComponentCalcBounds;
  if (StatPtr_STAT_ComponentCalcBounds == (FThreadSafeStaticStat<FStat_STAT_ComponentCalcBounds>)0x0
     ) {
    pFVar10 = ::FName::FName(&local_res20,"STAT_ComponentCalcBounds");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ComponentCalcBounds>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComponentCalcBounds,*pFVar10,
                        L"Component CalcBounds","STATGROUP_Component","STATCAT_Advanced",
                        L"Component",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar14.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Bits != 0) || (uVar13 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar14.Bits;
        local_res14 = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                   ,0x6a0);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar14.Bits;
      uStackX_c = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      FVar16.Bits = FVar14.Bits;
      goto LAB_14797722a;
    }
  }
  bVar6 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_14797722a:
  pdVar12 = (double *)(**(code **)(this->_padding_ + 0x598))(this,local_78);
  dVar4 = pdVar12[1];
  (this->Bounds).Origin.field0_0x0._s_0.X = *pdVar12;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar4;
  dVar4 = pdVar12[3];
  (this->Bounds).Origin.field0_0x0._s_0.Z = pdVar12[2];
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar4;
  dVar4 = pdVar12[5];
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = pdVar12[4];
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
  (this->Bounds).SphereRadius = pdVar12[6];
  if ((bVar8) && ((bool)this->bComputeBoundsOnceForGame)) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  this->bComputedBoundsOnceForGame = '\0';
  this->field_0x1aa = this->field_0x1aa | bVar9;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_88.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_88.NameAndInfo.Index.Value = FVar16.Bits;
      QueryPerformanceCounter(&local_res18);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_88);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// UpdateChildTransforms @ 147977500

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
USceneComponent::UpdateChildTransforms
          (USceneComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  USceneComponent *this_00;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_UpdateChildTransforms> FVar8;
  uint uVar9;
  FColor_u_0 FVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res20;
  
  FVar8 = StatPtr_STAT_UpdateChildTransforms;
  if (StatPtr_STAT_UpdateChildTransforms ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateChildTransforms>)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_UpdateChildTransforms");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_UpdateChildTransforms>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateChildTransforms,*pFVar7,
                       L"UpdateChildTransforms","STATGROUP_Component","STATCAT_Advanced",
                       L"Component",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10.Bits = (uint)FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar10.Bits;
        uStackX_c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                   ,0xb48);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar10.Bits;
      uStackX_c = uVar9;
      local_res20 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      goto LAB_147977672;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
LAB_147977672:
  iVar3 = (this->AttachChildren).ArrayNum;
  if (0 < iVar3) {
    pFVar12 = (this->AttachChildren).AllocatorInstance.Data;
    pFVar2 = pFVar12 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->AttachChildren).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      FVar11 = local_res20;
      if (pFVar12 == pFVar2) break;
      this_00 = *(USceneComponent **)pFVar12;
      if ((this_00 != (USceneComponent *)0x0) &&
         ((this_00->bComponentToWorldUpdated == 0 ||
          ((((param_1 & OnlyUpdateIfUsingSocket) == None ||
            (this_00->AttachSocketName != (FName)0x0)) &&
           (this_00->bAbsoluteLocation != '\x01' ||
            (this_00->bAbsoluteRotation != '\x01' || this_00->bAbsoluteScale != '\x01'))))))) {
        UpdateComponentToWorld
                  (this_00,param_1 & ~OnlyUpdateIfUsingSocket | PropagateFromParent,param_2);
      }
      pFVar12 = pFVar12 + 8;
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  return;
}

// UpdateComponentToWorldWithParent @ 147977970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
USceneComponent::UpdateComponentToWorldWithParent
          (USceneComponent *this,USceneComponent *param_1,FName param_2,
          EUpdateTransformFlags param_3,TQuat<double> *param_4,ETeleportType param_5)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  int iVar31;
  FName *pFVar32;
  FThreadSafeStaticStat<FStat_STAT_UpdateComponentToWorld> FVar33;
  TTransform<double> *pTVar34;
  undefined7 extraout_var;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar35;
  undefined4 uVar36;
  int iVar37;
  uint uVar38;
  USceneComponent *pUVar39;
  undefined4 uVar40;
  FNameEntryId FVar41;
  FName FVar42;
  longlong lVar43;
  uint uVar52;
  double dVar44;
  double dVar45;
  double dVar46;
  uint uVar53;
  uint uVar57;
  double dVar54;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar55;
  undefined1 auVar50 [16];
  double dVar56;
  undefined1 auVar51 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auStackY_288 [32];
  FColor_u_0 local_228 [2];
  LARGE_INTEGER local_220;
  FName local_218;
  byte local_210;
  FName local_208;
  FName local_200;
  FStatMessage local_1f0;
  FName local_1e0 [4];
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  TTransform<double> *__return_storage_ptr__;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  FVar33 = StatPtr_STAT_UpdateComponentToWorld;
  if (StatPtr_STAT_UpdateComponentToWorld ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateComponentToWorld>)0x0) {
    pFVar32 = ::FName::FName(local_1e0,"STAT_UpdateComponentToWorld");
    FVar33 = (FThreadSafeStaticStat<FStat_STAT_UpdateComponentToWorld>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateComponentToWorld,*pFVar32,
                        L"UpdateComponentToWorld","STATGROUP_Component","STATCAT_Advanced",
                        L"Component",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_200.ComparisonIndex.Value = 0;
  local_200.Number = 0;
  bVar27 = false;
  bVar29 = false;
  FVar42 = *(FName *)FVar33;
  FVar41 = FVar42.ComparisonIndex.Value;
  uVar35 = FVar42.Number;
  if ((FVar41.Value == 0) && (uVar35 == 0)) {
LAB_147977ad1:
    bVar28 = false;
    FVar42 = local_200;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_228[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_228[0]._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar27 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar41.Value;
        local_208.Number = uVar35;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                   ,0x2ee);
        bVar27 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147977ad1;
    local_220.s.LowPart = FVar41.Value;
    local_220.s.HighPart = uVar35;
    FThreadStats::AddMessage(FVar42,CycleScopeStart);
    bVar28 = true;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_218,(UObjectBaseUtility *)this);
  if (((param_1 != (USceneComponent *)0x0) && (param_1->bComponentToWorldUpdated == 0)) &&
     (UpdateComponentToWorld(param_1,None,None), this->bComponentToWorldUpdated != 0))
  goto LAB_147977eef;
  local_1c0 = (this->RelativeLocation).field0_0x0._s_0.X;
  dStack_1b8 = (this->RelativeLocation).field0_0x0._s_0.Y;
  local_1a8 = (this->RelativeScale3D).field0_0x0._s_0.X;
  dStack_1a0 = (this->RelativeScale3D).field0_0x0._s_0.Y;
  this->bComponentToWorldUpdated = '\x01';
  local_1b0 = (this->RelativeLocation).field0_0x0._s_0.Z;
  __return_storage_ptr__ = &local_128;
  local_188.Rotation.XY.m128d_f64[0] = param_4->X;
  local_188.Rotation.XY.m128d_f64[1] = param_4->Y;
  local_188.Rotation.ZW.m128d_f64[0] = param_4->Z;
  local_188.Rotation.ZW.m128d_f64[1] = param_4->W;
  local_198 = (this->RelativeScale3D).field0_0x0._s_0.Z;
  local_188.Translation.ZW.m128d_f64[1] = 0.0;
  local_188.Scale3D.ZW.m128d_f64[1] = 0.0;
  pUVar39 = this;
  local_188.Translation.XY.m128d_f64[0] = local_1c0;
  local_188.Translation.XY.m128d_f64[1] = dStack_1b8;
  local_188.Translation.ZW.m128d_f64[0] = local_1b0;
  local_188.Scale3D.XY.m128d_f64[0] = local_1a8;
  local_188.Scale3D.XY.m128d_f64[1] = dStack_1a0;
  local_188.Scale3D.ZW.m128d_f64[0] = local_198;
  pTVar34 = CalcNewComponentToWorld(this,__return_storage_ptr__,&local_188,param_1,param_2);
  uVar40 = SUB84(__return_storage_ptr__,0);
  uVar38 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar52 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar53 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar57 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  auVar2 = *(undefined1 (*) [16])(pTVar34->Rotation).ZW.m128d_f64;
  auVar3 = *(undefined1 (*) [16])(pTVar34->Rotation).XY.m128d_f64;
  auVar4 = *(undefined1 (*) [16])(pTVar34->Translation).XY.m128d_f64;
  auVar5 = *(undefined1 (*) [16])(pTVar34->Translation).ZW.m128d_f64;
  auVar6 = *(undefined1 (*) [16])(pTVar34->Scale3D).XY.m128d_f64;
  auVar7 = *(undefined1 (*) [16])(pTVar34->Scale3D).ZW.m128d_f64;
  dVar60 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar44 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar43 = -(ulonglong)((double)CONCAT44(uVar57 & auVar2._12_4_,uVar53 & auVar2._8_4_) == dVar44);
  auVar9._8_4_ = (int)lVar43;
  auVar9._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar52 & auVar2._4_4_,uVar38 & auVar2._0_4_) == dVar60);
  auVar9._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
  uVar35 = movmskpd((int)pUVar39,auVar9);
  lVar43 = -(ulonglong)((double)CONCAT44(uVar57 & auVar3._12_4_,uVar53 & auVar3._8_4_) == dVar44);
  auVar18._8_4_ = (int)lVar43;
  auVar18._0_8_ =
       -(ulonglong)((double)CONCAT44(uVar52 & auVar3._4_4_,uVar38 & auVar3._0_4_) == dVar60);
  auVar18._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
  iVar31 = movmskpd((int)pTVar34,auVar18);
  dVar46 = auVar2._0_8_;
  dVar56 = auVar2._8_8_;
  dVar22 = auVar3._0_8_;
  dVar23 = auVar3._8_8_;
  if ((uVar35 & 0x3fffffff) == 0 && iVar31 == 0) {
    lVar43 = -(ulonglong)((double)CONCAT44(uVar57 & auVar5._12_4_,uVar53 & auVar5._8_4_) == dVar44);
    auVar10._8_4_ = (int)lVar43;
    auVar10._0_8_ =
         -(ulonglong)((double)CONCAT44(uVar52 & auVar5._4_4_,uVar38 & auVar5._0_4_) == dVar60);
    auVar10._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    uVar35 = movmskpd(0,auVar10);
    lVar43 = -(ulonglong)((double)CONCAT44(uVar57 & auVar4._12_4_,uVar53 & auVar4._8_4_) == dVar44);
    auVar19._8_4_ = (int)lVar43;
    auVar19._0_8_ =
         -(ulonglong)((double)CONCAT44(uVar52 & auVar4._4_4_,uVar38 & auVar4._0_4_) == dVar60);
    auVar19._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    iVar31 = movmskpd(iVar31,auVar19);
    if ((uVar35 & 0x3fffffff) != 0 || iVar31 != 0) goto LAB_147977d16;
    lVar43 = -(ulonglong)((double)CONCAT44(uVar57 & auVar7._12_4_,uVar53 & auVar7._8_4_) == dVar44);
    auVar11._8_4_ = (int)lVar43;
    auVar11._0_8_ =
         -(ulonglong)((double)CONCAT44(uVar52 & auVar7._4_4_,uVar38 & auVar7._0_4_) == dVar60);
    auVar11._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    uVar35 = movmskpd(0,auVar11);
    lVar43 = -(ulonglong)((double)CONCAT44(uVar57 & auVar6._12_4_,uVar53 & auVar6._8_4_) == dVar44);
    auVar20._8_4_ = (int)lVar43;
    auVar20._0_8_ =
         -(ulonglong)((double)CONCAT44(uVar52 & auVar6._4_4_,uVar38 & auVar6._0_4_) == dVar60);
    auVar20._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    iVar31 = movmskpd(iVar31,auVar20);
    if ((uVar35 & 0x3fffffff) != 0 || iVar31 != 0) goto LAB_147977d16;
    dVar60 = dVar46 * dVar46 + dVar22 * dVar22;
    dVar44 = dVar56 * dVar56 + dVar23 * dVar23;
    dVar58 = dVar44 + dVar60;
    dVar60 = dVar60 + dVar44;
    dVar44 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar58;
    dVar54 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar60;
    auVar47._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar44,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar47._8_4_ = SUB84(dVar54,0) & _UNK_15061cc88;
    auVar47._12_4_ = (uint)((ulonglong)dVar54 >> 0x20) & _UNK_15061cc8c;
    lVar43 = -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar47._8_8_);
    dVar58 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar58;
    dVar60 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar60;
    auVar21._8_4_ = (int)lVar43;
    auVar21._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] < auVar47._0_8_);
    auVar21._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    uVar35 = movmskpd(0,auVar21);
    auVar48._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar58,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar48._8_4_ = SUB84(dVar60,0) & _UNK_15061cc88;
    auVar48._12_4_ = (uint)((ulonglong)dVar60 >> 0x20) & _UNK_15061cc8c;
    lVar43 = -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar48._8_8_);
    auVar12._8_4_ = (int)lVar43;
    auVar12._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] < auVar48._0_8_);
    auVar12._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    iVar31 = movmskpd(iVar31,auVar12);
    uVar36 = 0;
    if ((uVar35 & 0x3fffffff) != 0 || iVar31 != 0) goto LAB_147977d16;
  }
  else {
LAB_147977d16:
    uVar40 = 0;
    uVar36 = 0x551f877b;
    bVar30 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8868271983431777513>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                        ,0x317,"NewTransform.IsValid()");
    iVar31 = (int)CONCAT71(extraout_var,bVar30);
    if (bVar30) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  dVar60 = (this->ComponentToWorld).Translation.ZW.m128d_f64[0] - auVar5._0_8_;
  dVar44 = (this->ComponentToWorld).Translation.ZW.m128d_f64[1] - auVar5._8_8_;
  dVar58 = (this->ComponentToWorld).Translation.XY.m128d_f64[0] - auVar4._0_8_;
  dVar54 = (this->ComponentToWorld).Translation.XY.m128d_f64[1] - auVar4._8_8_;
  lVar43 = -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar44,0) & _UNK_15061cc88));
  auVar49._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar58,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar49._8_4_ = SUB84(dVar54,0) & _UNK_15061cc88;
  auVar49._12_4_ = (uint)((ulonglong)dVar54 >> 0x20) & _UNK_15061cc8c;
  auVar13._8_4_ = (int)lVar43;
  auVar13._0_8_ =
       -(ulonglong)
        (__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar60,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar13._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
  uVar35 = movmskpd(uVar36,auVar13);
  lVar43 = -(ulonglong)(__real_3e45798ee0000000 < auVar49._8_8_);
  auVar24._8_4_ = (int)lVar43;
  auVar24._0_8_ = -(ulonglong)(__real_3e45798ee0000000 < auVar49._0_8_);
  auVar24._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
  iVar31 = movmskpd(iVar31,auVar24);
  if ((uVar35 & 0x3fffffff) == 0 && iVar31 == 0) {
    dVar58 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
    dVar54 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
    dVar59 = (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
    dVar61 = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
    dVar60 = dVar58 - dVar46;
    dVar44 = dVar54 - dVar56;
    dVar45 = dVar59 - dVar22;
    dVar55 = dVar61 - dVar23;
    lVar43 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar44,0) & _UNK_15061cc88));
    auVar14._8_4_ = (int)lVar43;
    auVar14._0_8_ =
         -(ulonglong)
          (__real_3e45798ee0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar60,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar14._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    iVar37 = movmskpd(0,auVar14);
    auVar50._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar45,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar50._8_4_ = SUB84(dVar55,0) & _UNK_15061cc88;
    auVar50._12_4_ = (uint)((ulonglong)dVar55 >> 0x20) & _UNK_15061cc8c;
    lVar43 = -(ulonglong)(__real_3e45798ee0000000 < auVar50._8_8_);
    dVar59 = dVar59 + dVar22;
    dVar61 = dVar61 + dVar23;
    dVar58 = dVar58 + dVar46;
    dVar54 = dVar54 + dVar56;
    auVar15._8_4_ = (int)lVar43;
    auVar15._0_8_ = -(ulonglong)(__real_3e45798ee0000000 < auVar50._0_8_);
    auVar15._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    uVar35 = movmskpd(iVar31,auVar15);
    uVar38 = iVar37 << 2 | uVar35;
    if (uVar38 != 0) {
      lVar43 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar54,0) & _UNK_15061cc88));
      auVar16._8_4_ = (int)lVar43;
      auVar16._0_8_ =
           -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar58,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar16._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      uVar38 = movmskpd(uVar38,auVar16);
      lVar43 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar61,0) & _UNK_15061cc88));
      auVar25._8_4_ = (int)lVar43;
      auVar25._0_8_ =
           -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar59,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar25._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      uVar35 = movmskpd(uVar35,auVar25);
      if ((uVar38 & 0x3fffffff) != 0 || uVar35 != 0) goto LAB_147977e6c;
    }
    dVar22 = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[0] - auVar7._0_8_;
    dVar23 = (this->ComponentToWorld).Scale3D.ZW.m128d_f64[1] - auVar7._8_8_;
    dVar46 = (this->ComponentToWorld).Scale3D.XY.m128d_f64[0] - auVar6._0_8_;
    dVar56 = (this->ComponentToWorld).Scale3D.XY.m128d_f64[1] - auVar6._8_8_;
    lVar43 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar23,0) & _UNK_15061cc88));
    auVar51._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar46,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar51._8_4_ = SUB84(dVar56,0) & _UNK_15061cc88;
    auVar51._12_4_ = (uint)((ulonglong)dVar56 >> 0x20) & _UNK_15061cc8c;
    auVar17._8_4_ = (int)lVar43;
    auVar17._0_8_ =
         -(ulonglong)
          (__real_3e45798ee0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar17._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    uVar38 = movmskpd(uVar40,auVar17);
    lVar43 = -(ulonglong)(__real_3e45798ee0000000 < auVar51._8_8_);
    auVar26._8_4_ = (int)lVar43;
    auVar26._0_8_ = -(ulonglong)(__real_3e45798ee0000000 < auVar51._0_8_);
    auVar26._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    iVar31 = movmskpd(uVar35,auVar26);
    if (((uVar38 & 0x3fffffff) != 0 || iVar31 != 0) || (param_5 != None)) goto LAB_147977e6c;
    param_5 = None;
    param_3 = None;
    bVar30 = false;
  }
  else {
LAB_147977e6c:
    *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.XY.m128d_f64 = auVar3;
    bVar30 = true;
    *(undefined1 (*) [16])(this->ComponentToWorld).Rotation.ZW.m128d_f64 = auVar2;
    *(undefined1 (*) [16])(this->ComponentToWorld).Translation.XY.m128d_f64 = auVar4;
    *(undefined1 (*) [16])(this->ComponentToWorld).Translation.ZW.m128d_f64 = auVar5;
    *(undefined1 (*) [16])(this->ComponentToWorld).Scale3D.XY.m128d_f64 = auVar6;
    *(undefined1 (*) [16])(this->ComponentToWorld).Scale3D.ZW.m128d_f64 = auVar7;
  }
  PropagateTransformUpdate(this,bVar30,param_3,param_5);
LAB_147977eef:
  if ((local_210 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_210 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_210 & 4) != 0) {
    FThreadStats::AddMessage(local_218,CycleScopeEnd);
  }
  local_210 = 0;
  if (bVar29) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar28) && (FVar42 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1f0.NameAndInfo.Index = FVar42.ComparisonIndex.Value;
      local_1f0.NameAndInfo.Number = FVar42.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_220);
      local_1f0.StatData.Pad[4] = '\0';
      local_1f0.StatData.Pad[5] = '\0';
      local_1f0.StatData.Pad[6] = '\0';
      local_1f0.StatData.Pad[7] = '\0';
      local_1f0.StatData.Pad[0] = local_220.s.LowPart._0_1_;
      local_1f0.StatData.Pad[1] = local_220.s.LowPart._1_1_;
      local_1f0.StatData.Pad[2] = local_220.s.LowPart._2_1_;
      local_1f0.StatData.Pad[3] = local_220.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1f0);
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

// UpdateNavigationData @ 147979940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneComponent::UpdateNavigationData(USceneComponent *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_ComponentUpdateNavData> FVar6;
  UWorld *pUVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_ComponentUpdateNavData;
  if (StatPtr_STAT_ComponentUpdateNavData ==
      (FThreadSafeStaticStat<FStat_STAT_ComponentUpdateNavData>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_ComponentUpdateNavData");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_ComponentUpdateNavData>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ComponentUpdateNavData,*pFVar5,
                       L"Component UpdateNavData","STATGROUP_Component","STATCAT_Advanced",
                       L"Component",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value == 0) && (uVar8 == 0)) {
LAB_147979a99:
    bVar3 = false;
    FVar10.ComparisonIndex.Value = 0;
    FVar10.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                   ,0x107e);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147979a99;
    local_res8.s.LowPart = FVar9.Value;
    local_res8.s.HighPart = uVar8;
    FThreadStats::AddMessage(FVar10,CycleScopeStart);
    bVar3 = true;
    FVar11.Value = FVar9.Value;
  }
  if ((this->_padding_ & 1) != 0) {
    if (this->_padding_ == 0) {
      pUVar7 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      if (pUVar7 == (UWorld *)0x0) goto LAB_147979ac6;
    }
    FNavigationSystem::UpdateComponentData((UActorComponent *)this);
  }
LAB_147979ac6:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
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

// UpdateOverlaps @ 147979f50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
USceneComponent::UpdateOverlaps
          (USceneComponent *this,TArrayView<FOverlapInfo_const_,int> *param_1,bool param_2,
          TArrayView<FOverlapInfo_const_,int> *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1074,"USceneComponent::UpdateOverlaps",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
               ,0x432);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1074);
  }
  iVar2 = (this->ScopedMovementStack).ArrayNum;
  if (iVar2 < 1) {
    puVar1 = &this->field_0x1a8;
    if ((SkipUpdateOverlapsOptimEnabled != 1) || (this->bSkipUpdateOverlaps == '\0')) {
      cVar7 = (**(code **)(this->_padding_ + 0x580))(this,param_1,param_2,param_3);
      *puVar1 = *puVar1 ^ (cVar7 * '\x02' ^ *puVar1) & 2U;
    }
  }
  else {
    uVar8 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar8 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar3 = *(longlong *)
             ((this->ScopedMovementStack).AllocatorInstance.Data +
             (longlong)(this->ScopedMovementStack).ArrayNum * 8 + -8);
    *(byte *)(lVar3 + 0x608) = *(byte *)(lVar3 + 0x608) | 2;
    *(undefined4 *)(lVar3 + 0x10) = 3;
    *(undefined4 *)(lVar3 + 200) = 0xffffffff;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this->bSkipUpdateOverlaps;
}

// UpdateOverlapsImpl @ 14797a0b0

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

bool __thiscall
USceneComponent::UpdateOverlapsImpl
          (USceneComponent *this,TArrayView<FOverlapInfo_const_,int> *param_1,bool param_2,
          TArrayView<FOverlapInfo_const_,int> *param_3)

{
  ForElementType<USceneComponent_*> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_UpdateOverlaps> FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  ForElementType<USceneComponent_*> FVar15;
  bool bVar16;
  undefined1 auStackY_1a8 [32];
  undefined1 local_148 [4];
  FColor_u_0 local_144;
  FName local_140;
  uint local_138;
  uint uStack_134;
  FName local_130;
  USceneComponent *local_120;
  FName local_118;
  ForElementType<USceneComponent_*> local_110;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FVar11 = StatPtr_STAT_UpdateOverlaps;
  local_120 = this;
  if (StatPtr_STAT_UpdateOverlaps == (FThreadSafeStaticStat<FStat_STAT_UpdateOverlaps>)0x0) {
    pFVar10 = ::FName::FName(&local_118,"STAT_UpdateOverlaps");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_UpdateOverlaps>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateOverlaps,*pFVar10,
                        L"UpdateOverlaps Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_144.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_144._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar13.Value;
        local_140.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                   ,0xd06);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_138 = FVar13.Value;
      uStack_134 = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_14797a206;
    }
  }
  bVar5 = false;
  FVar14 = local_130;
LAB_14797a206:
  local_110.SecondaryData = (ForElementType<USceneComponent_*>)0x0;
  local_48[0] = 0;
  local_48[1] = 0x18;
  bVar16 = true;
  if ((&local_110 == (ForElementType<USceneComponent_*> *)&this->AttachChildren) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  iVar2 = (this->AttachChildren).ArrayNum;
  if (iVar2 != 0) {
    iVar9 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                      (8,8,iVar2,&local_110,local_48,local_48 + 1);
    FVar15 = (ForElementType<USceneComponent_*>)&local_110;
    if (local_110.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FVar15 = local_110.SecondaryData;
    }
    ConstructItems<USceneComponent_*,TObjectPtr<USceneComponent>,int>
              ((undefined8 *)((longlong)FVar15 + (longlong)iVar9 * 8),
               (TObjectPtr<USceneComponent> *)(this->AttachChildren).AllocatorInstance.Data,iVar2);
  }
  iVar2 = local_48[0];
  FVar15 = (ForElementType<USceneComponent_*>)&local_110;
  if (local_110.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
    FVar15 = local_110.SecondaryData;
  }
  FVar1 = (ForElementType<USceneComponent_*>)((longlong)FVar15 + (longlong)local_48[0] * 8);
  while( true ) {
    if (local_48[0] != iVar2) {
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_148);
    }
    if (FVar15 == FVar1) break;
    if (*(USceneComponent **)FVar15 != (USceneComponent *)0x0) {
      bVar7 = UpdateOverlaps(*(USceneComponent **)FVar15,(TArrayView<FOverlapInfo_const_,int> *)0x0,
                             param_2,(TArrayView<FOverlapInfo_const_,int> *)0x0);
      bVar16 = (bool)(bVar16 & bVar7);
    }
    FVar15 = (ForElementType<USceneComponent_*>)((longlong)FVar15 + 8);
  }
  if (local_120->bShouldUpdatePhysicsVolume != '\0') {
    (**(code **)(local_120->_padding_ + 0x5c0))(local_120,param_2);
    bVar16 = false;
  }
  if (local_110.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
    FMemory::Free((void *)local_110.SecondaryData);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return bVar16;
}

// UpdatePhysicsVolume @ 14797a390

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

void __thiscall USceneComponent::UpdatePhysicsVolume(USceneComponent *this,bool param_1)

{
  FActorInstanceHandle *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  schar sVar10;
  int iVar11;
  FName FVar12;
  longlong lVar13;
  code *pcVar14;
  double dVar15;
  bool bVar16;
  double dVar17;
  char cVar18;
  ECollisionChannel EVar19;
  UWorld *this_00;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_UpdatePhysicsVolume> FVar21;
  APhysicsVolume *pAVar22;
  UObject *pUVar23;
  FCollisionEnabledMask *pFVar24;
  UClass *pUVar25;
  UClass *pUVar26;
  APhysicsVolume *pAVar27;
  FString *pFVar28;
  ulonglong uVar29;
  int iVar30;
  UPrimitiveComponent *pUVar31;
  wchar_t *pwVar32;
  ForAnyElementType this_01;
  wchar_t *pwVar33;
  undefined1 auStackY_238 [32];
  FCollisionEnabledMask local_1d7 [7];
  FName local_1d0;
  FName local_1c8;
  byte local_1c0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_1b8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  double dStack_170;
  undefined1 local_168 [88];
  ForElementType<unsigned_int> local_110;
  ForElementType<unsigned_int> local_f0;
  FCollisionEnabledMask local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if (((this->bShouldUpdatePhysicsVolume != '\0') && (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
     ((this_00 = (UWorld *)this->_padding_, this_00 != (UWorld *)0x0 ||
      (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      this_00 != (UWorld *)0x0)))) {
    iVar30 = 0;
    FVar21 = StatPtr_STAT_UpdatePhysicsVolume;
    if (StatPtr_STAT_UpdatePhysicsVolume ==
        (FThreadSafeStaticStat<FStat_STAT_UpdatePhysicsVolume>)0x0) {
      pFVar20 = ::FName::FName((FName *)&local_188._s_0,"STAT_UpdatePhysicsVolume");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_UpdatePhysicsVolume>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdatePhysicsVolume,*pFVar20,
                          L"UpdatePhysicsVolume Time","STATGROUP_Game","STATCAT_Advanced",L"Game",
                          true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_1c8.ComparisonIndex.Value = 0;
    local_1c8.Number = 0;
    local_1c0 = 0;
    FVar12 = *(FName *)FVar21;
    if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1d0 = (FName)((ulonglong)local_1d0 & 0xffffffff00000000);
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1d0,(char *)*(FName *)((longlong)FVar21 + 0x10));
        local_1c0 = local_1c0 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_1d0 = FVar12;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1d0,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                     ,0xc35);
          local_1c0 = local_1c0 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_1d0 = FVar12;
        local_1c8 = FVar12;
        FThreadStats::AddMessage(FVar12,CycleScopeStart);
        local_1c0 = local_1c0 | 4;
      }
    }
    pAVar22 = (this_00->DefaultPhysicsVolume).field0_0x0.DebugPtr;
    if (pAVar22 == (APhysicsVolume *)0x0) {
      pAVar22 = UWorld::InternalGetDefaultPhysicsVolume(this_00);
    }
    dVar17 = __real_3f1a36e2e0000000;
    iVar11 = (this_00->NonDefaultPhysicsVolumeList).ArrayNum;
    if (0 < iVar11) {
      if (MaxVolumesToCheck < iVar11) {
LAB_14797a748:
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.ArrayNum = 0;
        local_1b8.ArrayMax = 0;
        pFVar24 = FCollisionEnabledMask::FCollisionEnabledMask(local_1d7,'\0');
        sVar10 = pFVar24->Bits;
        local_1d0 = (FName)this->_padding_;
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(int *)(lVar13 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          StatPtr_UpdatePhysicsVolume =
               (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_USceneComponent::UpdatePhysicsVolume(bool)_::_31_::<lambda_2>::operator()(void)const_::_2_::FStat_UpdatePhysicsVolume>
                )0x0;
          pFVar20 = ::FName::FName((FName *)&local_1a8._s_0,"UpdatePhysicsVolume");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_UpdatePhysicsVolume,*pFVar20,
                     L"UpdatePhysicsVolume","STATGROUP_CollisionTags","STATCAT_Advanced",
                     L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS0);
        }
        local_188._s_0.X = (double)StatPtr_UpdatePhysicsVolume;
        if (StatPtr_UpdatePhysicsVolume ==
            (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_USceneComponent::UpdatePhysicsVolume(bool)_::_31_::<lambda_2>::operator()(void)const_::_2_::FStat_UpdatePhysicsVolume>
             )0x0) {
          pFVar20 = ::FName::FName((FName *)&local_1a8._s_0,"UpdatePhysicsVolume");
          local_188._s_0.X =
               (double)FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_UpdatePhysicsVolume,*pFVar20
                                  ,L"UpdatePhysicsVolume","STATGROUP_CollisionTags",
                                  "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,
                                  MCR_Invalid);
        }
        if ((*(int *)(lVar13 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          ::FName::FName(&::StaticName,"UpdatePhysicsVolume");
          _Init_thread_footer(&::_TSS0);
        }
        FCollisionQueryParams::FCollisionQueryParams
                  ((FCollisionQueryParams *)local_168,::StaticName,(TStatId *)&local_188._s_0,false,
                   (AActor *)local_1d0);
        local_168[0x14] = true;
        local_e0.Bits = sVar10;
        pUVar25 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar30 = (int)pUVar25->_padding_;
        if ((*(int *)(this->_padding_ + 0x38) < iVar30) ||
           (pUVar31 = (UPrimitiveComponent *)this,
           (longlong *)
           *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar30 * 8) !=
           &pUVar25->_padding_)) {
          pUVar31 = (UPrimitiveComponent *)0x0;
        }
        pcVar14 = *(code **)(this->_padding_ + 0x5f0);
        if (pUVar31 == (UPrimitiveComponent *)0x0) {
          local_1a8._s_0.X = 9.88131291682493e-324;
          EVar19 = (*pcVar14)(this);
          local_188._s_0.X = (this->ComponentToWorld).Translation.XY.m128d_f64[0];
          local_188._s_0.Y = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
          local_188._s_0.Z = (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
          UWorld::OverlapMultiByChannel
                    (this_00,&local_1b8,(TVector<double> *)&local_188._s_0,
                     &UE::Math::TQuat<double>::Identity,EVar19,(FCollisionShape *)&local_1a8._s_0,
                     (FCollisionQueryParams *)local_168,
                     &FCollisionResponseParams::DefaultResponseParam);
        }
        else {
          EVar19 = (*pcVar14)();
          local_188._s_0.X = (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
          local_188._s_0.Y = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
          local_188._s_0.Z = (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
          dStack_170 = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
          local_1a8._s_0.X = (this->ComponentToWorld).Translation.XY.m128d_f64[0];
          local_1a8._s_0.Y = (this->ComponentToWorld).Translation.XY.m128d_f64[1];
          local_1a8._s_0.Z = (this->ComponentToWorld).Translation.ZW.m128d_f64[0];
          UWorld::ComponentOverlapMultiByChannel
                    (this_00,&local_1b8,pUVar31,(TVector<double> *)&local_1a8._s_0,
                     (TQuat<double> *)&local_188._s_0,EVar19,(FComponentQueryParams *)local_168,
                     &FCollisionObjectQueryParams::DefaultObjectQueryParam);
        }
        iVar30 = local_1b8.ArrayNum;
        uVar29 = (ulonglong)local_1b8.ArrayNum;
        pFVar1 = (FActorInstanceHandle *)(local_1b8.AllocatorInstance.Data + uVar29 * 0x48);
        this_01.Data = local_1b8.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar29 != iVar30) {
            `TCheckedPointerIterator<FOverlapResult,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_1d7);
          }
          if ((FActorInstanceHandle *)this_01.Data == pFVar1) break;
          pUVar25 = FActorInstanceHandle::GetRepresentedClass((FActorInstanceHandle *)this_01.Data);
          if (pUVar25 != (UClass *)0x0) {
            pUVar26 = Z_Construct_UClass_APhysicsVolume_NoRegister();
            if (pUVar26 == (UClass *)0x0) {
LAB_14797aa94:
              bVar16 = false;
            }
            else {
              iVar11 = (int)pUVar26->_padding_;
              if (((int)pUVar25->_padding_ < iVar11) ||
                 ((longlong *)*(undefined1 **)(pUVar25->_padding_ + (longlong)iVar11 * 8) !=
                  &pUVar26->_padding_)) goto LAB_14797aa94;
              bVar16 = true;
            }
            if (bVar16) {
              pAVar27 = (APhysicsVolume *)
                        FActorInstanceHandle::FetchActor((FActorInstanceHandle *)this_01.Data);
              if (pAVar27 == (APhysicsVolume *)0x0) {
                pAVar27 = (APhysicsVolume *)0x0;
              }
              else {
                pUVar25 = Z_Construct_UClass_APhysicsVolume_NoRegister();
                iVar11 = (int)pUVar25->_padding_;
                if ((*(int *)(pAVar27->_padding_ + 0x38) < iVar11) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pAVar27->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
                    &pUVar25->_padding_)) {
                  pFVar28 = GetTypeName<APhysicsVolume>((FString *)&local_1a8._s_0);
                  pwVar33 = L"";
                  if ((pFVar28->Data).ArrayNum == 0) {
                    pwVar32 = L"";
                  }
                  else {
                    pwVar32 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
                  }
                  pFVar28 = GetFullNameForCastLogError<AActor>
                                      ((FString *)&local_188._s_0,(AActor *)pAVar27);
                  if ((pFVar28->Data).ArrayNum != 0) {
                    pwVar33 = (wchar_t *)(pFVar28->Data).AllocatorInstance.Data;
                  }
                    /* WARNING: Subroutine does not return */
                  CastLogError(pwVar33,pwVar32);
                }
              }
              if (((pAVar27 != (APhysicsVolume *)0x0) && (pAVar22->Priority < pAVar27->Priority)) &&
                 ((pUVar31 == (UPrimitiveComponent *)0x0 ||
                  (cVar18 = (**(code **)(pAVar27->_padding_ + 0x7a0))(pAVar27,this), cVar18 != '\0')
                  ))) {
                pAVar22 = pAVar27;
              }
            }
          }
          uVar29 = local_1b8._8_8_ & 0xffffffff;
          this_01.Data = (FScriptContainerElement *)
                         &((FActorInstanceHandle *)((longlong)this_01.Data + 0x40))->
                          ManagerInterface;
        }
        if (local_f0 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_f0);
        }
        if (local_110 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_110);
        }
        if ((FActorInstanceHandle *)local_1b8.AllocatorInstance.Data != (FActorInstanceHandle *)0x0)
        {
          FMemory::Free(local_1b8.AllocatorInstance.Data);
        }
      }
      else {
        for (; (-1 < iVar30 && (iVar30 < (this_00->NonDefaultPhysicsVolumeList).ArrayNum));
            iVar30 = iVar30 + 1) {
          pUVar23 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((this_00->NonDefaultPhysicsVolumeList).AllocatorInstance.
                                         Data + (longlong)iVar30 * 8));
          if ((pUVar23 != (UObject *)0x0) && (lVar13 = *(longlong *)(pUVar23 + 0xb), lVar13 != 0)) {
            dVar2 = *(double *)(lVar13 + 0x118);
            dVar3 = *(double *)(lVar13 + 0x110);
            dVar4 = (this->Bounds).Origin.field0_0x0._s_0.Y;
            dVar5 = (this->Bounds).Origin.field0_0x0._s_0.X;
            dVar6 = *(double *)(lVar13 + 0x120);
            dVar7 = (this->Bounds).Origin.field0_0x0._s_0.Z;
            dVar15 = *(double *)(lVar13 + 0x140) + (this->Bounds).SphereRadius + dVar17;
            if (dVar15 <= __real_0000000000000000) {
              dVar15 = __real_0000000000000000;
            }
            if ((dVar3 - dVar5) * (dVar3 - dVar5) + (dVar2 - dVar4) * (dVar2 - dVar4) +
                (dVar6 - dVar7) * (dVar6 - dVar7) <= dVar15 * dVar15) {
              dVar15 = (this->Bounds).BoxExtent.field0_0x0._s_0.Z;
              dVar8 = (this->Bounds).BoxExtent.field0_0x0._s_0.X;
              dVar9 = (this->Bounds).BoxExtent.field0_0x0._s_0.Y;
              if (((((dVar3 - *(double *)(lVar13 + 0x128) <= dVar5 + dVar8) &&
                    (dVar5 - dVar8 <= dVar3 + *(double *)(lVar13 + 0x128))) &&
                   (dVar2 - *(double *)(lVar13 + 0x130) <= dVar4 + dVar9)) &&
                  ((dVar4 - dVar9 <= dVar2 + *(double *)(lVar13 + 0x130) &&
                   (dVar6 - *(double *)(lVar13 + 0x138) <= dVar7 + dVar15)))) &&
                 (dVar7 - dVar15 <= dVar6 + *(double *)(lVar13 + 0x138))) goto LAB_14797a748;
            }
          }
        }
      }
    }
    SetPhysicsVolume(this,pAVar22,param_1);
    if ((local_1c0 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_1c0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_1c0 & 4) != 0) {
      FThreadStats::AddMessage(local_1c8,CycleScopeEnd);
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 14797ba10

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
USceneComponent::ValidateGeneratedRepEnums
          (USceneComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_AttachParent,L"AttachParent");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_AttachSocketName,L"AttachSocketName");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_AttachChildren,L"AttachChildren");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_RelativeLocation,L"RelativeLocation");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&Name_RelativeRotation,L"RelativeRotation");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar5 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&Name_RelativeScale3D,L"RelativeScale3D");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar5 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&Name_bAbsoluteLocation,L"bAbsoluteLocation");
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar5 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FName::FName(&Name_bAbsoluteRotation,L"bAbsoluteRotation");
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar5 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FName::FName(&Name_bAbsoluteScale,L"bAbsoluteScale");
    _Init_thread_footer(&::_TSS8);
  }
  if ((*piVar5 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    ::FName::FName(&Name_bVisible,L"bVisible");
    _Init_thread_footer(&::_TSS9);
  }
  if ((*piVar5 < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
    ::FName::FName(&Name_bShouldBeAttached,L"bShouldBeAttached");
    _Init_thread_footer(&::_TSS10);
  }
  if ((*piVar5 < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
    ::FName::FName(&Name_bShouldSnapLocationWhenAttached,L"bShouldSnapLocationWhenAttached");
    _Init_thread_footer(&::_TSS11);
  }
  if ((*piVar5 < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
    ::FName::FName(&Name_bShouldSnapRotationWhenAttached,L"bShouldSnapRotationWhenAttached");
    _Init_thread_footer(&::_TSS12);
  }
  if ((*piVar5 < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
    ::FName::FName(&Name_bShouldSnapScaleWhenAttached,L"bShouldSnapScaleWhenAttached");
    _Init_thread_footer(&::_TSS13);
  }
  if ((*piVar5 < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
    ::FName::FName(&Name_Mobility,L"Mobility");
    _Init_thread_footer(&::_TSS14);
  }
  if ((param_1->ArrayNum < 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x20);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_AttachParent == FVar4) {
    if ((param_1->ArrayNum < 4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x30);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_AttachSocketName == FVar4) {
      if ((param_1->ArrayNum < 5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x40);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_AttachChildren == FVar4) {
        if ((param_1->ArrayNum < 6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x50);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar4 = FVar6;
        if (bVar3) {
          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_RelativeLocation == FVar4) {
          if ((param_1->ArrayNum < 7) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x60);
          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
          FVar4 = FVar6;
          if (bVar3) {
            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
          }
          if (Name_RelativeRotation == FVar4) {
            if ((param_1->ArrayNum < 8) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x70);
            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
            FVar4 = FVar6;
            if (bVar3) {
              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
            }
            if (Name_RelativeScale3D == FVar4) {
              if ((param_1->ArrayNum < 9) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x80);
              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
              FVar4 = FVar6;
              if (bVar3) {
                FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
              }
              if (Name_bAbsoluteLocation == FVar4) {
                if ((param_1->ArrayNum < 10) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x90);
                bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                FVar4 = FVar6;
                if (bVar3) {
                  FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                }
                if (Name_bAbsoluteRotation == FVar4) {
                  if ((param_1->ArrayNum < 0xb) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
                  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                  FVar4 = FVar6;
                  if (bVar3) {
                    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                  }
                  if (Name_bAbsoluteScale == FVar4) {
                    if ((param_1->ArrayNum < 0xc) &&
                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
                    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                    FVar4 = FVar6;
                    if (bVar3) {
                      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                    }
                    if (Name_bVisible == FVar4) {
                      if ((param_1->ArrayNum < 0xd) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xc0);
                      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                      FVar4 = FVar6;
                      if (bVar3) {
                        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                      }
                      if (Name_bShouldBeAttached == FVar4) {
                        if ((param_1->ArrayNum < 0xe) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xd0);
                        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                        FVar4 = FVar6;
                        if (bVar3) {
                          FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                        }
                        if (Name_bShouldSnapLocationWhenAttached == FVar4) {
                          if ((param_1->ArrayNum < 0xf) &&
                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar3)) {
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xe0);
                          bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                          FVar4 = FVar6;
                          if (bVar3) {
                            FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                          }
                          if (Name_bShouldSnapRotationWhenAttached == FVar4) {
                            if ((param_1->ArrayNum < 0x10) &&
                               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xf0);
                            bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                            FVar4 = FVar6;
                            if (bVar3) {
                              FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
                            }
                            if (Name_bShouldSnapScaleWhenAttached == FVar4) {
                              if ((param_1->ArrayNum < 0x11) &&
                                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar3)) {
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x100);
                              bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
                              if (bVar3) {
                                FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
                              }
                              if (Name_Mobility == FVar6) {
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\SceneComponent.gen.cpp"
                     ,0x1382,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USceneComponent"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execDetachFromParent @ 14797e6c0

void __cdecl USceneComponent::execDetachFromParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [2];
  
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
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x510))(param_1,bVar2,local_res10[0] != 0);
  return;
}

// execDoesSocketExist @ 14797e7a0

void __cdecl USceneComponent::execDoesSocketExist(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x540))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetAllSocketNames @ 14797eb00

void __cdecl USceneComponent::execGetAllSocketNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  FScriptContainerElement *local_28;
  ulonglong local_20;
  
  local_28 = (FScriptContainerElement *)0x0;
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x550))(param_1,&local_28);
  uVar7 = local_20 & 0xffffffff;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if ((int)local_20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  if (0 < (int)local_20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_20,&local_38,0,&iStack_2c);
    uVar7 = local_20 & 0xffffffff;
  }
  iVar6 = (int)uVar7;
  pFVar1 = local_28 + (longlong)iVar6 * 0xc;
  pFVar8 = local_28;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FComponentSocketDescription,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if ((local_38.Data <= pFVar8) && (pFVar8 < local_38.Data + (longlong)iStack_2c * 8)) {
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
    if (local_30 == iStack_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_38,&iStack_2c);
    }
    lVar5 = (longlong)local_30;
    local_30 = local_30 + 1;
    uVar2 = *(undefined8 *)pFVar8;
    pFVar8 = pFVar8 + 0xc;
    *(undefined8 *)(local_38.Data + lVar5 * 8) = uVar2;
    uVar7 = local_20 & 0xffffffff;
  }
  if (local_28 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28);
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(int *)((longlong)param_3 + 8) = local_30;
    *(int *)((longlong)param_3 + 0xc) = iStack_2c;
    local_30 = 0;
    iStack_2c = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetAttachParent @ 14797eea0

void __cdecl USceneComponent::execGetAttachParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[5].field_0x8;
  return;
}

// execGetAttachSocketName @ 14797eed0

void __cdecl
USceneComponent::execGetAttachSocketName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[5].field_0x10;
  return;
}

// execGetChildComponent @ 14797f3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USceneComponent::execGetChildComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res10 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res10[0];
  if ((int)local_res10[0] < 0) {
    if (4 < (byte)LogBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
    }
  }
  else {
    if ((int)local_res10[0] < *(int *)(param_1 + 6)) {
      uVar5 = 0;
      if ((int)local_res10[0] < *(int *)(param_1 + 6)) {
        uVar5 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1[5].field_0x20 + lVar4 * 8);
      return;
    }
    if (4 < (byte)LogBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
      *(undefined8 *)param_3 = 0;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetChildrenComponents @ 14797f4f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execGetChildrenComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int local_res10 [2];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  pTVar2 = &local_18;
  if ((TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetChildrenComponents((USceneComponent *)param_1,bVar3,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetComponentVelocity @ 14797f6e0

void __cdecl
USceneComponent::execGetComponentVelocity(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x558))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetForwardVector @ 1479804c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl USceneComponent::execGetForwardVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar9 = ___xmm_00000000000000003ff0000000000000;
  dVar14 = (double)__xmm_00000000000000003ff0000000000000;
  dVar17 = __xmm_00000000000000003ff0000000000000._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  auVar1 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
  auVar6 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
  dVar5 = *(double *)(param_1 + 0xd);
  dVar4 = auVar1._0_8_;
  auVar7 = blendpd(auVar6,auVar1,2);
  auVar15._0_8_ = dVar17 * auVar6._0_8_ - auVar6._8_8_ * dVar14;
  auVar15._8_8_ = auVar6._8_8_ * 0.0 - dVar4 * dVar17;
  auVar6 = blendpd(auVar9,ZEXT816(0),2);
  auVar9._0_8_ = auVar6._0_8_ * dVar4 - auVar7._0_8_ * 0.0;
  auVar9._8_8_ = auVar6._8_8_ * auVar1._8_8_ - auVar7._8_8_ * 0.0;
  auVar6 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
  auVar7 = blendpd(auVar15,auVar9,2);
  dVar2 = auVar15._8_8_ + auVar15._8_8_;
  dVar3 = auVar9._0_8_ + auVar9._0_8_;
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar16._0_8_ = auVar7._0_8_ + auVar7._0_8_;
  auVar16._8_8_ = auVar7._8_8_ + auVar7._8_8_;
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = uVar13;
  auVar8._8_4_ = SUB84(dVar3,0);
  auVar8._0_8_ = dVar2;
  auVar8._12_4_ = uVar13;
  auVar9 = blendpd(auVar8,auVar16,2);
  auVar12._0_8_ = auVar11._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar2;
  auVar12._8_8_ = auVar16._0_8_ * auVar6._8_8_ - dVar4 * dVar3;
  auVar7._8_4_ = SUB84(auVar12._8_8_,0);
  auVar7._0_8_ = auVar12._0_8_;
  auVar7._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
  auVar6 = blendpd(auVar6,auVar1,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar4 - auVar6._0_8_ * auVar16._0_8_;
  auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar6._8_8_ * auVar16._8_8_;
  auVar6 = blendpd(auVar12,auVar10,2);
  dVar4 = dVar3 * dVar5 + dVar17 + auVar10._0_8_;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar2 * dVar5 + dVar14 + auVar7._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar1;
  *(double *)((longlong)param_3 + 0x10) = auVar16._0_8_ * dVar5 + auVar6._0_8_;
  return;
}

// execGetNumChildrenComponents @ 147980ea0

void __cdecl
USceneComponent::execGetNumChildrenComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 6);
  return;
}

// execGetParentComponents @ 147980fc0

void __cdecl
USceneComponent::execGetParentComponents(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  longlong local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pFVar6 = &local_20;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
  iVar5 = *piVar1;
  *(undefined4 *)&pFVar6[1].Data = 0;
  if (iVar5 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar6,0,piVar1);
  }
  local_28 = *(longlong *)&param_1[5].field_0x8;
  while( true ) {
    if (local_28 == 0) {
      if (local_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data);
      }
      return;
    }
    if (((pFVar6->Data <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar6->Data + (longlong)*piVar1 * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = *(int *)&pFVar6[1].Data;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar6,piVar1);
    }
    *(int *)&pFVar6[1].Data = iVar5 + 1;
    *(longlong *)(pFVar6->Data + (longlong)iVar5 * 8) = local_28;
    local_28 = *(longlong *)(local_28 + 0xd0);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// execGetPhysicsVolume @ 147981170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USceneComponent::execGetPhysicsVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  UWorld *this;
  APhysicsVolume *pAVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 5));
  if (pUVar1 != (UObject *)0x0) {
    *(UObject **)param_3 = pUVar1;
    return;
  }
  this = *(UWorld **)&param_1[4].field_0x10;
  if (this == (UWorld *)0x0) {
    this = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    if (this == (UWorld *)0x0) {
      *(undefined8 *)param_3 = 0;
      return;
    }
  }
  pAVar2 = (this->DefaultPhysicsVolume).field0_0x0.DebugPtr;
  if (pAVar2 == (APhysicsVolume *)0x0) {
    pAVar2 = UWorld::InternalGetDefaultPhysicsVolume(this);
  }
  *(APhysicsVolume **)param_3 = pAVar2;
  return;
}

// execGetRelativeTransform @ 147981750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execGetRelativeTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TTransform<double> *pTVar2;
  TTransform<double> local_68;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetRelativeTransform((USceneComponent *)param_1,&local_68);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar2->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar2->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar2->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar2->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar2->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar1;
  return;
}

// execGetRightVector @ 1479817c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl USceneComponent::execGetRightVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar9 = ___xmm_3ff00000000000000000000000000000;
  dVar14 = (double)__xmm_3ff00000000000000000000000000000;
  dVar17 = __xmm_3ff00000000000000000000000000000._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  auVar1 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
  auVar6 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
  dVar5 = *(double *)(param_1 + 0xd);
  dVar4 = auVar1._0_8_;
  auVar7 = blendpd(auVar6,auVar1,2);
  auVar15._0_8_ = dVar17 * auVar6._0_8_ - auVar6._8_8_ * dVar14;
  auVar15._8_8_ = auVar6._8_8_ * 0.0 - dVar4 * dVar17;
  auVar6 = blendpd(auVar9,ZEXT816(0),2);
  auVar9._0_8_ = auVar6._0_8_ * dVar4 - auVar7._0_8_ * 0.0;
  auVar9._8_8_ = auVar6._8_8_ * auVar1._8_8_ - auVar7._8_8_ * 0.0;
  auVar6 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
  auVar7 = blendpd(auVar15,auVar9,2);
  dVar2 = auVar15._8_8_ + auVar15._8_8_;
  dVar3 = auVar9._0_8_ + auVar9._0_8_;
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar16._0_8_ = auVar7._0_8_ + auVar7._0_8_;
  auVar16._8_8_ = auVar7._8_8_ + auVar7._8_8_;
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = uVar13;
  auVar8._8_4_ = SUB84(dVar3,0);
  auVar8._0_8_ = dVar2;
  auVar8._12_4_ = uVar13;
  auVar9 = blendpd(auVar8,auVar16,2);
  auVar12._0_8_ = auVar11._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar2;
  auVar12._8_8_ = auVar16._0_8_ * auVar6._8_8_ - dVar4 * dVar3;
  auVar7._8_4_ = SUB84(auVar12._8_8_,0);
  auVar7._0_8_ = auVar12._0_8_;
  auVar7._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
  auVar6 = blendpd(auVar6,auVar1,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar4 - auVar6._0_8_ * auVar16._0_8_;
  auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar6._8_8_ * auVar16._8_8_;
  auVar6 = blendpd(auVar12,auVar10,2);
  dVar4 = dVar3 * dVar5 + dVar17 + auVar10._0_8_;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar2 * dVar5 + dVar14 + auVar7._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar1;
  *(double *)((longlong)param_3 + 0x10) = auVar16._0_8_ * dVar5 + auVar6._0_8_;
  return;
}

// execGetShouldUpdatePhysicsVolume @ 147981900

void __cdecl
USceneComponent::execGetShouldUpdatePhysicsVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[10].field_0x19 >> 2 & 1;
  return;
}

// execGetSocketLocation @ 147981bb0

void __cdecl USceneComponent::execGetSocketLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  undefined1 local_28 [32];
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x528))(param_1,local_28,local_res8);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetSocketQuaternion @ 147981c70

void __cdecl
USceneComponent::execGetSocketQuaternion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  undefined1 local_28 [32];
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x538))(param_1,local_28,local_res8);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  return;
}

// execGetSocketRotation @ 147981d30

void __cdecl USceneComponent::execGetSocketRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  undefined1 local_28 [32];
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x530))(param_1,local_28,local_res8);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetSocketTransform @ 147981df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl USceneComponent::execGetSocketTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x520))(param_1,local_88,local_90,local_98[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  uVar2 = puVar3[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar3[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar2;
  uVar2 = puVar3[7];
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar3[6];
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar2;
  uVar2 = puVar3[9];
  *(undefined8 *)((longlong)param_3 + 0x40) = puVar3[8];
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar2;
  uVar2 = puVar3[0xb];
  *(undefined8 *)((longlong)param_3 + 0x50) = puVar3[10];
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar2;
  return;
}

// execGetUpVector @ 147982a20

void __cdecl USceneComponent::execGetUpVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  dVar6 = __real_3ff0000000000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  auVar1 = *(undefined1 (*) [16])&param_1[0xc].field_0x20;
  auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
  dVar5 = *(double *)(param_1 + 0xd);
  dVar4 = auVar1._0_8_;
  auVar15._0_8_ = auVar8._0_8_ * 0.0 - auVar8._8_8_ * 0.0;
  auVar15._8_8_ = dVar6 * auVar8._8_8_ - dVar4 * 0.0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar6;
  auVar7 = blendpd(ZEXT816(0),auVar7,2);
  auVar8 = blendpd(auVar8,auVar1,2);
  auVar10._0_8_ = auVar7._0_8_ * dVar4 - auVar8._0_8_ * dVar6;
  auVar10._8_8_ = auVar7._8_8_ * auVar1._8_8_ - auVar8._8_8_ * 0.0;
  auVar8 = *(undefined1 (*) [16])&param_1[0xc].field_0x10;
  auVar7 = blendpd(auVar15,auVar10,2);
  auVar16._0_8_ = auVar7._0_8_ + auVar7._0_8_;
  auVar16._8_8_ = auVar7._8_8_ + auVar7._8_8_;
  dVar2 = auVar15._8_8_ + auVar15._8_8_;
  dVar3 = auVar10._0_8_ + auVar10._0_8_;
  uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar12._8_4_ = SUB84(dVar3,0);
  auVar12._0_8_ = dVar2;
  auVar12._12_4_ = uVar14;
  auVar9._8_4_ = SUB84(dVar3,0);
  auVar9._0_8_ = dVar2;
  auVar9._12_4_ = uVar14;
  auVar10 = blendpd(auVar9,auVar16,2);
  auVar13._0_8_ = auVar12._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar2;
  auVar13._8_8_ = auVar16._0_8_ * auVar8._8_8_ - dVar4 * dVar3;
  auVar7 = blendpd(auVar8,auVar1,2);
  auVar8._8_4_ = SUB84(auVar13._8_8_,0);
  auVar8._0_8_ = auVar13._0_8_;
  auVar8._12_4_ = (int)((ulonglong)auVar13._8_8_ >> 0x20);
  auVar11._0_8_ = auVar10._0_8_ * dVar4 - auVar7._0_8_ * auVar16._0_8_;
  auVar11._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar7._8_8_ * auVar16._8_8_;
  auVar7 = blendpd(auVar13,auVar11,2);
  dVar4 = dVar3 * dVar5 + auVar11._0_8_;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar2 * dVar5 + auVar8._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar1;
  *(double *)((longlong)param_3 + 0x10) = auVar16._0_8_ * dVar5 + dVar6 + auVar7._0_8_;
  return;
}

// execIsAnySimulatingPhysics @ 1479830e0

void __cdecl
USceneComponent::execIsAnySimulatingPhysics(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x500))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsGroupedComponentMovementEnabled @ 147983340

void __cdecl
USceneComponent::execIsGroupedComponentMovementEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = SceneComponentCVars::bEnableGroupedComponentMovement;
  return;
}

// execIsSimulatingPhysics @ 1479835e0

void __cdecl
USceneComponent::execIsSimulatingPhysics(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execIsVisible @ 1479837f0

void __cdecl USceneComponent::execIsVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x560))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execK2_AddLocalOffset @ 147983830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USceneComponent::execK2_AddLocalOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res20 [2];
  TVector<double>_u_0 local_168;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  double local_148;
  double dStack_140;
  double local_138;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  memset(&local_128,0,0x100);
  uStack_14b = 0;
  uStack_149 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_168._s_0.Z = 0.0;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_168._s_0.X = local_148;
  local_168._s_0.Y = dStack_140;
  local_168._s_0.Z = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  AddLocalOffset((USceneComponent *)param_1,(TVector<double> *)&local_168._s_0,bVar4,pFVar3,
                 local_res20[0] != 0);
  return;
}

// execK2_AddLocalRotation @ 147983a40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_AddLocalRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res20 [2];
  TRotator<double> local_168;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  double local_148;
  double dStack_140;
  double local_138;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  memset(&local_128,0,0x100);
  uStack_14b = 0;
  uStack_149 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_168.Roll = 0.0;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_168.Pitch = local_148;
  local_168.Yaw = dStack_140;
  local_168.Roll = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  AddLocalRotation((USceneComponent *)param_1,&local_168,bVar4,pFVar3,local_res20[0] != 0);
  return;
}

// execK2_AddLocalTransform @ 147983c50

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

void __cdecl
USceneComponent::execK2_AddLocalTransform(UObject *param_1,FFrame *param_2,void *param_3)

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
  FHitResult *pFVar14;
  FHitResult *pFVar15;
  TTransform<double> *pTVar16;
  bool bVar17;
  undefined1 auStack_208 [32];
  int local_1d8;
  int local_1d4 [5];
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  FHitResult local_1a8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
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
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_1d8 = 0;
  pTVar16 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar16 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  bVar17 = local_1d8 != 0;
  memset(&local_1a8,0,0x100);
  uStack_1b3 = 0;
  uStack_1b1 = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_1c0 = 0;
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 0;
  local_1a8.HitObjectHandle.InstanceIndex = -1;
  local_1a8.HitObjectHandle.ResolutionStatus = Invalid;
  local_1a8.HitObjectHandle._29_3_ = 0;
  local_1a8.Time = 1.0;
  local_1a8.MyItem = -1;
  local_1a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1d4[0] = 0;
  pFVar14 = &local_1a8;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar14 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1d4);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar15 = (FHitResult *)0x0;
  if (bVar17) {
    pFVar15 = pFVar14;
  }
  AddLocalTransform((USceneComponent *)param_1,pTVar16,bVar17,pFVar15,local_1d4[0] != 0);
  return;
}

// execK2_AddRelativeLocation @ 147983eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_AddRelativeLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res20 [2];
  TVector<double>_u_0 local_168;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  double local_148;
  double dStack_140;
  double local_138;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  memset(&local_128,0,0x100);
  uStack_14b = 0;
  uStack_149 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_168._s_0.Z = 0.0;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_168._s_0.X = local_148;
  local_168._s_0.Y = dStack_140;
  local_168._s_0.Z = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  AddRelativeLocation((USceneComponent *)param_1,(TVector<double> *)&local_168._s_0,bVar4,pFVar3,
                      local_res20[0] != 0);
  return;
}

// execK2_AddRelativeRotation @ 1479840c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_AddRelativeRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  double local_168;
  double local_160;
  double local_158;
  TRotator<double> local_148;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
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
  bVar4 = local_res8[0] != 0;
  memset(&local_128,0,0x100);
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res10[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_148.Pitch = local_168 + *(double *)&param_1[8].field_0x20;
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  local_148.Yaw = local_160 + *(double *)(param_1 + 9);
  local_148.Roll = local_158 + *(double *)&param_1[9].field_0x8;
  SetRelativeRotation((USceneComponent *)param_1,&local_148,bVar4,pFVar3,local_res10[0] != 0);
  return;
}

// execK2_AddWorldOffset @ 1479842f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USceneComponent::execK2_AddWorldOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  double local_168;
  double local_160;
  double local_158;
  TVector<double>_u_0 local_148;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
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
  bVar4 = local_res8[0] != 0;
  memset(&local_128,0,0x100);
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res10[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_148._s_0.X = local_168 + *(double *)&param_1[0xd].field_0x8;
  local_148._s_0.Y = local_160 + *(double *)&param_1[0xd].field_0x10;
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  local_148._s_0.Z = local_158 + *(double *)&param_1[0xd].field_0x18;
  SetWorldLocation((USceneComponent *)param_1,(TVector<double> *)&local_148._s_0,bVar4,pFVar3,
                   local_res10[0] != 0);
  return;
}

// execK2_AddWorldRotation @ 147984520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_AddWorldRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res20 [2];
  TRotator<double> local_168;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  double local_148;
  double dStack_140;
  double local_138;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  memset(&local_128,0,0x100);
  uStack_14b = 0;
  uStack_149 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_168.Roll = 0.0;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_168.Pitch = local_148;
  local_168.Yaw = dStack_140;
  local_168.Roll = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  AddWorldRotation((USceneComponent *)param_1,&local_168,bVar4,pFVar3,local_res20[0] != 0);
  return;
}

// execK2_AddWorldTransform @ 147984730

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

void __cdecl
USceneComponent::execK2_AddWorldTransform(UObject *param_1,FFrame *param_2,void *param_3)

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
  FHitResult *pFVar14;
  FHitResult *pFVar15;
  TTransform<double> *pTVar16;
  bool bVar17;
  undefined1 auStack_208 [32];
  int local_1d8;
  int local_1d4 [5];
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  FHitResult local_1a8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
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
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_1d8 = 0;
  pTVar16 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar16 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  bVar17 = local_1d8 != 0;
  memset(&local_1a8,0,0x100);
  uStack_1b3 = 0;
  uStack_1b1 = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_1c0 = 0;
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 0;
  local_1a8.HitObjectHandle.InstanceIndex = -1;
  local_1a8.HitObjectHandle.ResolutionStatus = Invalid;
  local_1a8.HitObjectHandle._29_3_ = 0;
  local_1a8.Time = 1.0;
  local_1a8.MyItem = -1;
  local_1a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1d4[0] = 0;
  pFVar14 = &local_1a8;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar14 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1d4);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar15 = (FHitResult *)0x0;
  if (bVar17) {
    pFVar15 = pFVar14;
  }
  AddWorldTransform((USceneComponent *)param_1,pTVar16,bVar17,pFVar15,local_1d4[0] != 0);
  return;
}

// execK2_AddWorldTransformKeepScale @ 147984990

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

void __cdecl
USceneComponent::execK2_AddWorldTransformKeepScale(UObject *param_1,FFrame *param_2,void *param_3)

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
  FHitResult *pFVar14;
  FHitResult *pFVar15;
  TTransform<double> *pTVar16;
  bool bVar17;
  undefined1 auStack_208 [32];
  int local_1d8;
  int local_1d4 [5];
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  FHitResult local_1a8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
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
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_1d8 = 0;
  pTVar16 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar16 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  bVar17 = local_1d8 != 0;
  memset(&local_1a8,0,0x100);
  uStack_1b3 = 0;
  uStack_1b1 = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_1c0 = 0;
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 0;
  local_1a8.HitObjectHandle.InstanceIndex = -1;
  local_1a8.HitObjectHandle.ResolutionStatus = Invalid;
  local_1a8.HitObjectHandle._29_3_ = 0;
  local_1a8.Time = 1.0;
  local_1a8.MyItem = -1;
  local_1a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1d4[0] = 0;
  pFVar14 = &local_1a8;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar14 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1d4);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar15 = (FHitResult *)0x0;
  if (bVar17) {
    pFVar15 = pFVar14;
  }
  AddWorldTransformKeepScale((USceneComponent *)param_1,pTVar16,bVar17,pFVar15,local_1d4[0] != 0);
  return;
}

// execK2_AttachTo @ 147984bf0

void __cdecl USceneComponent::execK2_AttachTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  char local_res8 [8];
  undefined2 local_res10;
  undefined1 local_res12;
  undefined1 local_res13;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10 = 0;
  local_res12 = 0;
  local_res13 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] != '\0') {
    if (local_res8[0] == '\x01') {
      local_res10 = 0x101;
    }
    else {
      if (local_res8[0] != '\x02') {
        if (local_res8[0] == '\x03') {
          local_res10 = 0x202;
          local_res12 = 2;
        }
        goto LAB_147984d51;
      }
      local_res10 = 0x202;
    }
    local_res12 = 1;
  }
LAB_147984d51:
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x508))(param_1,local_38[0],&local_res10,local_res20);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execK2_AttachToComponent @ 147984d80

void __cdecl
USceneComponent::execK2_AttachToComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  undefined1 local_res23;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_40 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_res18[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_48[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res23 = local_48[0] != 0;
  local_res20 = local_res8[0];
  local_res21 = local_res10[0];
  local_res22 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x508))(param_1,local_38[0],&local_res20,local_40);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execK2_DetachFromComponent @ 147984f60

void __cdecl
USceneComponent::execK2_DetachFromComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  int local_24 [3];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  local_res20[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_24[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_24,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_24);
  }
  local_25 = local_24[0] != 0;
  local_28 = local_res8[0];
  local_27 = local_res10[0];
  local_26 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x518))(param_1,&local_28);
  return;
}

// execK2_GetComponentLocation @ 1479852f0

void __cdecl
USceneComponent::execK2_GetComponentLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0xd].field_0x10;
  uVar1 = *(undefined8 *)&param_1[0xd].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xd].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execK2_GetComponentRotation @ 147985330

void __cdecl
USceneComponent::execK2_GetComponentRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  FPayload *pFVar5;
  TRotator<double> *pTVar6;
  int iVar7;
  UObject *this;
  uint uVar8;
  longlong lVar9;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.X = *(double *)&param_1[0xc].field_0x10;
  local_28.Y = *(double *)&param_1[0xc].field_0x18;
  local_28.Z = *(double *)&param_1[0xc].field_0x20;
  local_28.W = *(double *)(param_1 + 0xd);
  this = param_1 + 0xc;
  pFVar5 = FRotationConversionCache::GetOrCreatePayload((FRotationConversionCache *)this);
  lVar9 = -(ulonglong)((pFVar5->CachedQuat).W != local_28.W);
  auVar2._8_4_ = (int)lVar9;
  auVar2._0_8_ = -(ulonglong)((pFVar5->CachedQuat).Z != local_28.Z);
  auVar2._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  uVar8 = movmskpd((int)param_2,auVar2);
  lVar9 = -(ulonglong)(local_28.Y != (pFVar5->CachedQuat).Y);
  auVar3._8_4_ = (int)lVar9;
  auVar3._0_8_ = -(ulonglong)(local_28.X != (pFVar5->CachedQuat).X);
  auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  iVar7 = movmskpd((int)this,auVar3);
  if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
    (pFVar5->CachedQuat).X = local_28.X;
    (pFVar5->CachedQuat).Y = local_28.Y;
    (pFVar5->CachedQuat).Z = local_28.Z;
    (pFVar5->CachedQuat).W = local_28.W;
    pTVar6 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
    dVar1 = pTVar6->Yaw;
    (pFVar5->CachedRotator).Pitch = pTVar6->Pitch;
    (pFVar5->CachedRotator).Yaw = dVar1;
    (pFVar5->CachedRotator).Roll = pTVar6->Roll;
  }
  dVar4 = (pFVar5->CachedRotator).Yaw;
  dVar1 = (pFVar5->CachedRotator).Roll;
  *(double *)param_3 = (pFVar5->CachedRotator).Pitch;
  *(double *)((longlong)param_3 + 8) = dVar4;
  *(double *)((longlong)param_3 + 0x10) = dVar1;
  return;
}

// execK2_GetComponentScale @ 1479853f0

void __cdecl
USceneComponent::execK2_GetComponentScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0xe].field_0x8;
  uVar1 = *(undefined8 *)&param_1[0xe].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execK2_GetComponentToWorld @ 147985430

void __cdecl
USceneComponent::execK2_GetComponentToWorld(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0xc].field_0x18;
  uVar2 = *(undefined8 *)&param_1[0xc].field_0x20;
  uVar3 = *(undefined8 *)(param_1 + 0xd);
  uVar4 = *(undefined8 *)&param_1[0xd].field_0x8;
  uVar5 = *(undefined8 *)&param_1[0xd].field_0x10;
  uVar6 = *(undefined8 *)&param_1[0xd].field_0x18;
  uVar7 = *(undefined8 *)&param_1[0xd].field_0x20;
  uVar8 = *(undefined8 *)(param_1 + 0xe);
  uVar9 = *(undefined8 *)&param_1[0xe].field_0x8;
  uVar10 = *(undefined8 *)&param_1[0xe].field_0x10;
  uVar11 = *(undefined8 *)&param_1[0xe].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xc].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar11;
  return;
}

// execK2_SetRelativeLocation @ 1479854a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_SetRelativeLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res20 [2];
  TVector<double>_u_0 local_168;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  double local_148;
  double dStack_140;
  double local_138;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  memset(&local_128,0,0x100);
  uStack_14b = 0;
  uStack_149 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_168._s_0.Z = 0.0;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_168._s_0.X = local_148;
  local_168._s_0.Y = dStack_140;
  local_168._s_0.Z = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  SetRelativeLocation((USceneComponent *)param_1,(TVector<double> *)&local_168._s_0,bVar4,pFVar3,
                      local_res20[0] != 0);
  return;
}

// execK2_SetRelativeLocationAndRotation @ 1479856b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_SetRelativeLocationAndRotation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res20 [2];
  TVector<double>_u_0 local_198;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined2 uStack_17b;
  undefined1 uStack_179;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  TRotator<double> local_148;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  memset(&local_128,0,0x100);
  uStack_17b = 0;
  uStack_179 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_198._s_0.Z = 0.0;
  uStack_180 = 0xffffffff;
  uStack_17c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_148.Pitch = local_178;
  local_148.Yaw = dStack_170;
  local_148.Roll = local_168;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_198._s_0.X = local_160;
  local_198._s_0.Y = dStack_158;
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  local_198._s_0.Z = local_150;
  SetRelativeLocationAndRotation
            ((USceneComponent *)param_1,(TVector<double> *)&local_198._s_0,&local_148,bVar4,pFVar3,
             local_res20[0] != 0);
  return;
}

// execK2_SetRelativeRotation @ 147985910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_SetRelativeRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res20 [2];
  TRotator<double> local_168;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  double local_148;
  double dStack_140;
  double local_138;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  memset(&local_128,0,0x100);
  uStack_14b = 0;
  uStack_149 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_168.Roll = 0.0;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_168.Pitch = local_148;
  local_168.Yaw = dStack_140;
  local_168.Roll = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  SetRelativeRotation((USceneComponent *)param_1,&local_168,bVar4,pFVar3,local_res20[0] != 0);
  return;
}

// execK2_SetRelativeTransform @ 147985b20

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

void __cdecl
USceneComponent::execK2_SetRelativeTransform(UObject *param_1,FFrame *param_2,void *param_3)

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
  FHitResult *pFVar14;
  FHitResult *pFVar15;
  TTransform<double> *pTVar16;
  bool bVar17;
  undefined1 auStack_208 [32];
  int local_1d8;
  int local_1d4 [5];
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  FHitResult local_1a8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
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
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_1d8 = 0;
  pTVar16 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar16 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  bVar17 = local_1d8 != 0;
  memset(&local_1a8,0,0x100);
  uStack_1b3 = 0;
  uStack_1b1 = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_1c0 = 0;
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 0;
  local_1a8.HitObjectHandle.InstanceIndex = -1;
  local_1a8.HitObjectHandle.ResolutionStatus = Invalid;
  local_1a8.HitObjectHandle._29_3_ = 0;
  local_1a8.Time = 1.0;
  local_1a8.MyItem = -1;
  local_1a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1d4[0] = 0;
  pFVar14 = &local_1a8;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar14 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1d4);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar15 = (FHitResult *)0x0;
  if (bVar17) {
    pFVar15 = pFVar14;
  }
  SetRelativeTransform((USceneComponent *)param_1,pTVar16,bVar17,pFVar15,local_1d4[0] != 0);
  return;
}

// execK2_SetWorldLocation @ 147985d80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_SetWorldLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  FHitResult *pFVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res20 [2];
  TVector<double>_u_0 local_168;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  double local_148;
  double dStack_140;
  double local_138;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  memset(&local_128,0,0x100);
  uStack_14b = 0;
  uStack_149 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_168._s_0.Z = 0.0;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res20[0] = 0;
  pFVar2 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_168._s_0.X = local_148;
  local_168._s_0.Y = dStack_140;
  local_168._s_0.Z = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = (FHitResult *)0x0;
  if (bVar4) {
    pFVar3 = pFVar2;
  }
  SetWorldLocation((USceneComponent *)param_1,(TVector<double> *)&local_168._s_0,bVar4,pFVar3,
                   local_res20[0] != 0);
  return;
}

// execK2_SetWorldLocationAndRotation @ 147985f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_SetWorldLocationAndRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TQuat<double> *pTVar2;
  FHitResult *pFVar3;
  FHitResult *pFVar4;
  bool bVar5;
  bool bVar6;
  int local_res8 [2];
  int local_res10 [2];
  TRotator<double> local_1d8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined2 uStack_1bb;
  undefined1 uStack_1b9;
  TVector<double>_u_0 local_1b8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  TQuat<double> local_168;
  FHitResult local_148;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
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
  bVar5 = local_res8[0] != 0;
  memset(&local_148,0,0x100);
  uStack_1bb = 0;
  uStack_1b9 = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_148.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_1d8.Roll = 0.0;
  uStack_1c0 = 0xffffffff;
  uStack_1bc = 0;
  local_148.HitObjectHandle.InstanceIndex = -1;
  local_148.HitObjectHandle.ResolutionStatus = Invalid;
  local_148.HitObjectHandle._29_3_ = 0;
  local_148.Time = 1.0;
  local_148.MyItem = -1;
  local_148.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10[0] = 0;
  pFVar3 = &local_148;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar3 = (FHitResult *)param_2->MostRecentPropertyAddress;
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
  local_1d8.Pitch = local_198;
  local_1d8.Yaw = dStack_190;
  bVar6 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1d8.Roll = local_188;
  pFVar4 = (FHitResult *)0x0;
  if (bVar5) {
    pFVar4 = pFVar3;
  }
  if (*(longlong *)&param_1[5].field_0x8 == 0) {
    local_168.X = local_198;
    local_168.Y = dStack_190;
    local_168.Z = local_188;
    local_1b8._s_0.X = local_180;
    local_1b8._s_0.Y = dStack_178;
    local_1b8._s_0.Z = local_170;
    SetRelativeLocationAndRotation
              ((USceneComponent *)param_1,(TVector<double> *)&local_1b8._s_0,
               (TRotator<double> *)&local_168,bVar5,pFVar4,bVar6);
  }
  else {
    pTVar2 = UE::Math::TRotator<double>::Quaternion(&local_1d8,&local_168);
    local_1b8._s_0.X = local_180;
    local_1b8._s_0.Y = dStack_178;
    local_1b8._s_0.Z = local_170;
    SetWorldLocationAndRotation
              ((USceneComponent *)param_1,(TVector<double> *)&local_1b8._s_0,pTVar2,bVar5,pFVar4,
               bVar6);
  }
  return;
}

// execK2_SetWorldRotation @ 147986250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execK2_SetWorldRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TQuat<double> *pTVar2;
  FHitResult *pFVar3;
  FHitResult *pFVar4;
  bool bVar5;
  bool bVar6;
  int local_res8 [2];
  int local_res10 [2];
  TRotator<double> local_188;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined2 uStack_16b;
  undefined1 uStack_169;
  double local_168;
  double dStack_160;
  double local_158;
  TQuat<double> local_148;
  FHitResult local_128;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
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
  bVar5 = local_res8[0] != 0;
  memset(&local_128,0,0x100);
  uStack_16b = 0;
  uStack_169 = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_128.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_188.Roll = 0.0;
  uStack_170 = 0xffffffff;
  uStack_16c = 0;
  local_128.HitObjectHandle.InstanceIndex = -1;
  local_128.HitObjectHandle.ResolutionStatus = Invalid;
  local_128.HitObjectHandle._29_3_ = 0;
  local_128.Time = 1.0;
  local_128.MyItem = -1;
  local_128.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res10[0] = 0;
  pFVar3 = &local_128;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar3 = (FHitResult *)param_2->MostRecentPropertyAddress;
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
  local_188.Pitch = local_168;
  local_188.Yaw = dStack_160;
  local_188.Roll = local_158;
  bVar6 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FHitResult *)0x0;
  if (bVar5) {
    pFVar4 = pFVar3;
  }
  if (*(longlong *)&param_1[5].field_0x8 == 0) {
    local_148.X = local_168;
    local_148.Y = dStack_160;
    local_148.Z = local_158;
    SetRelativeRotation((USceneComponent *)param_1,(TRotator<double> *)&local_148,bVar5,pFVar4,bVar6
                       );
  }
  else {
    pTVar2 = UE::Math::TRotator<double>::Quaternion(&local_188,&local_148);
    SetWorldRotation((USceneComponent *)param_1,pTVar2,bVar5,pFVar4,bVar6);
  }
  return;
}

// execK2_SetWorldTransform @ 147986490

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

void __cdecl
USceneComponent::execK2_SetWorldTransform(UObject *param_1,FFrame *param_2,void *param_3)

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
  FHitResult *pFVar14;
  FHitResult *pFVar15;
  TTransform<double> *pTVar16;
  bool bVar17;
  undefined1 auStack_208 [32];
  int local_1d8;
  int local_1d4 [5];
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined2 uStack_1b3;
  undefined1 uStack_1b1;
  FHitResult local_1a8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
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
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_1d8 = 0;
  pTVar16 = &local_a8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar16 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  bVar17 = local_1d8 != 0;
  memset(&local_1a8,0,0x100);
  uStack_1b3 = 0;
  uStack_1b1 = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_1c0 = 0;
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 0;
  local_1a8.HitObjectHandle.InstanceIndex = -1;
  local_1a8.HitObjectHandle.ResolutionStatus = Invalid;
  local_1a8.HitObjectHandle._29_3_ = 0;
  local_1a8.Time = 1.0;
  local_1a8.MyItem = -1;
  local_1a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1d4[0] = 0;
  pFVar14 = &local_1a8;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar14 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1d4);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar15 = (FHitResult *)0x0;
  if (bVar17) {
    pFVar15 = pFVar14;
  }
  SetWorldTransform((USceneComponent *)param_1,pTVar16,bVar17,pFVar15,local_1d4[0] != 0);
  return;
}

// execOnRep_AttachChildren @ 147986ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execOnRep_AttachChildren(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRep_AttachChildren((USceneComponent *)param_1);
  return;
}

// execOnRep_AttachParent @ 147986ae0

void __cdecl USceneComponent::execOnRep_AttachParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[10].field_0x1a = param_1[10].field_0x1a | 0x40;
  return;
}

// execOnRep_AttachSocketName @ 147986b10

void __cdecl
USceneComponent::execOnRep_AttachSocketName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[5].field_0x8 != 0) &&
     ((*(uint *)(*(longlong *)&param_1[5].field_0x8 + 8) >> 0x1e & 1) == 0)) {
    param_1[10].field_0x1a = param_1[10].field_0x1a | 0x40;
  }
  return;
}

// execOnRep_Transform @ 147986b50

void __cdecl USceneComponent::execOnRep_Transform(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[10].field_0x1a = param_1[10].field_0x1a | 0x20;
  return;
}

// execOnRep_Visibility @ 147986b80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USceneComponent::execOnRep_Visibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
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
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = (bool)(**(code **)(*(longlong *)param_1 + 0x560))(param_1);
  param_1[10].field_0x18 = param_1[10].field_0x18 & 0xdf;
  param_1[10].field_0x18 = param_1[10].field_0x18 | bVar3 << 5;
  SetVisibility((USceneComponent *)param_1,bVar2,DirtyOnly);
  return;
}

// execResetRelativeTransform @ 147987980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execResetRelativeTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_48.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_48.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  SetRelativeLocationAndRotation
            ((USceneComponent *)param_1,(TVector<double> *)&local_28._s_0,&local_48,false,
             (FHitResult *)0x0,None);
  local_28._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689688;
  local_28._s_0.Z = __real_3ff0000000000000;
  SetRelativeScale3D((USceneComponent *)param_1,(TVector<double> *)&local_28._s_0);
  return;
}

// execSetAbsolute @ 147987a60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USceneComponent::execSetAbsolute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  
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
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[10].field_0x18 = param_1[10].field_0x18 & 0xf3;
  param_1[10].field_0x18 =
       bVar3 << 3 | param_1[10].field_0x18 & 0xef | bVar2 << 2 | -(local_res20[0] != 0) & 0x10U;
  UpdateComponentToWorld((USceneComponent *)param_1,None,None);
  return;
}

// execSetHiddenInGame @ 147989e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USceneComponent::execSetHiddenInGame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetHiddenInGame((USceneComponent *)param_1,bVar2,(local_res20[0] != 0) + DirtyOnly);
  return;
}

// execSetMobility @ 14798a2b0

void __cdecl USceneComponent::execSetMobility(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,local_res8[0]);
  return;
}

// execSetRelativeScale3D @ 14798aaf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USceneComponent::execSetRelativeScale3D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetRelativeScale3D((USceneComponent *)param_1,(TVector<double> *)&local_28._s_0);
  return;
}

// execSetShouldUpdatePhysicsVolume @ 14798ac50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USceneComponent::execSetShouldUpdatePhysicsVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USceneComponent *this;
  bool bVar2;
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
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res8[0] != 0) && (SkipUpdateOverlapsOptimEnabled == 1)) &&
     ((param_1[10].field_0x18 & 2) != 0)) {
    this = *(USceneComponent **)&param_1[5].field_0x8;
    param_1[10].field_0x18 = param_1[10].field_0x18 & 0xfd;
    if (this != (USceneComponent *)0x0) {
      ClearSkipUpdateOverlaps(this);
    }
  }
  param_1[10].field_0x19 = param_1[10].field_0x19 & 0xfb;
  param_1[10].field_0x19 = param_1[10].field_0x19 | bVar2 << 2;
  return;
}

// execSetVisibility @ 14798b8a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USceneComponent::execSetVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVisibility((USceneComponent *)param_1,bVar2,(local_res20[0] != 0) + DirtyOnly);
  return;
}

// execSetWorldScale3D @ 14798b980

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

void __cdecl USceneComponent::execSetWorldScale3D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_108 [32];
  TVector<double>_u_0 local_e8;
  undefined1 local_c8 [16];
  double local_b8;
  double local_98;
  undefined1 local_88 [80];
  double local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  dVar3 = local_c8._0_8_;
  uVar7 = local_c8._8_4_;
  uVar6 = local_c8._12_4_;
  local_98 = local_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[5].field_0x8;
  if ((plVar2 != (longlong *)0x0) && ((param_1[10].field_0x18 & 0x10) == 0)) {
    (**(code **)(*plVar2 + 0x520))(plVar2,local_88,*(undefined8 *)&param_1[5].field_0x10,0);
    local_b8 = 0.0;
    if (__real_3e45798ee0000000 <
        (double)CONCAT44(local_88._68_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_88._64_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar5 = __real_3ff0000000000000 / local_88._64_8_;
    }
    else {
      dVar5 = 0.0;
    }
    if (__real_3e45798ee0000000 <
        (double)CONCAT44(local_88._76_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_88._72_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar4 = __real_3ff0000000000000 / local_88._72_8_;
    }
    else {
      dVar4 = 0.0;
    }
    if (__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)local_38 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_38,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      local_b8 = __real_3ff0000000000000 / local_38;
    }
    dVar4 = local_c8._8_8_ * dVar4;
    uVar6 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar3 = dVar3 * dVar5;
    local_b8 = local_98 * local_b8;
    uVar7 = SUB84(dVar4,0);
  }
  local_e8._8_4_ = uVar7;
  local_e8._0_8_ = dVar3;
  local_e8._12_4_ = uVar6;
  local_e8._s_0.Z = local_b8;
  SetRelativeScale3D((USceneComponent *)param_1,(TVector<double> *)&local_e8._s_0);
  return;
}

// execToggleVisibility @ 14798c3f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USceneComponent::execToggleVisibility(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetVisibility((USceneComponent *)param_1,(bool)(~((byte)param_1[10].field_0x18 >> 5) & 1),
                (local_res8[0] != 0) + DirtyOnly);
  return;
}

// operator() @ 150514410

bool __thiscall `USceneComponent::AttachToComponent'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431775998>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431775998>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150514450

bool __thiscall
`USceneComponent::ProcessDeferredMovementGroup'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431777143>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431777143>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150514630

bool __thiscall `USceneComponent::SetupAttachment'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar6 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431776069>);
  if (bVar6) {
    ::FName::ToString(*(FName **)((longlong)this + 0x10),&local_28);
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_48);
    }
    if (*(UObjectBaseUtility **)(*(longlong *)this + 0xa8) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 0xa8),&local_58,(UObject *)0x0);
    }
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_38,(UObject *)0x0,None);
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar6 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431776069>,&::ENSURE_Static);
    if (bVar6) {
      bVar6 = true;
      goto LAB_150514783;
    }
  }
  bVar6 = false;
LAB_150514783:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  return false;
}

// operator() @ 1505148a0

bool __thiscall `USceneComponent::PostRepNotifies'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431774403>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431774403>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051490d;
    }
  }
  bVar2 = false;
LAB_15051490d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150514a30

bool __thiscall `USceneComponent::DetachFromComponent'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar3 = false;
  bVar6 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431775634>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 0xd0) + 0x18);
    ::FName::ToString(&local_res10,&local_38);
    bVar6 = **(longlong **)((longlong)this + 8) != 0;
    if (bVar6) {
      local_res18 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res18,&local_48);
    }
    bVar3 = true;
    bVar2 = true;
    local_res20 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res20,&local_58);
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431775634>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150514b5b;
    }
  }
  bVar4 = false;
LAB_150514b5b:
  if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// operator() @ 150514d50

bool __thiscall `USceneComponent::AttachToComponent'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431775997>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431775997>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150514d90

bool __thiscall `USceneComponent::SetupAttachment'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431776067>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431776067>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150514dfd;
    }
  }
  bVar2 = false;
LAB_150514dfd:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150514e30

bool __thiscall `USceneComponent::DestroyComponent'::__l21::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431776912>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431776912>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150514e9d;
    }
  }
  bVar2 = false;
LAB_150514e9d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505150c0

bool __thiscall `USceneComponent::AttachToComponent'::__l50::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431775923>);
  if (bVar7) {
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0xa8);
    if (lVar1 == 0) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res10,&local_70);
    }
    local_res18 = *(FName *)(*(longlong *)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res18,&local_50);
    if (*(longlong *)(**(longlong **)this + 0xa8) == 0) {
      ::FString::FString(&local_80,L"None");
    }
    else {
      local_res20 = *(FName *)(*(longlong *)(**(longlong **)this + 0xa8) + 0x18);
      ::FName::ToString(&local_res20,&local_80);
    }
    local_88 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_88,&local_60);
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431775923>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_15051522f;
    }
  }
  bVar7 = false;
LAB_15051522f:
  if ((bVar3) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  return false;
}

// operator() @ 1505152c0

bool __thiscall `USceneComponent::SetupAttachment'::__l12::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431776065>);
  if (bVar4) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8),&local_18,(UObject *)0x0,
               None);
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_28,(UObject *)0x0,None);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431776065>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150515368;
    }
  }
  bVar4 = false;
LAB_150515368:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505153c0

bool __thiscall `USceneComponent::DestroyComponent'::__l39::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431776888>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431776888>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051542d;
    }
  }
  bVar2 = false;
LAB_15051542d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150515460

bool __thiscall `USceneComponent::AttachToComponent'::__l52::<lambda_4>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431775919>);
  if (bVar7) {
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0xa8);
    if (lVar1 == 0) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res10,&local_70);
    }
    local_res18 = *(FName *)(*(longlong *)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res18,&local_50);
    if (*(longlong *)(**(longlong **)this + 0xa8) == 0) {
      ::FString::FString(&local_80,L"None");
    }
    else {
      local_res20 = *(FName *)(*(longlong *)(**(longlong **)this + 0xa8) + 0x18);
      ::FName::ToString(&local_res20,&local_80);
    }
    local_88 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_88,&local_60);
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431775919>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_1505155cf;
    }
  }
  bVar7 = false;
LAB_1505155cf:
  if ((bVar3) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  return false;
}

// operator() @ 150515660

bool __thiscall `USceneComponent::SetupAttachment'::__l15::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8868271983431776063>);
  if (bVar4) {
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(*(longlong *)this + 0xd0),&local_18,(UObject *)0x0,None);
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_28,(UObject *)0x0,None);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8868271983431776063>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15051570b;
    }
  }
  bVar4 = false;
LAB_15051570b:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

