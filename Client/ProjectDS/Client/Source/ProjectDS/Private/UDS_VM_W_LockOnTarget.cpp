// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b73c9b0

UClass * __cdecl UDS_VM_W_LockOnTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_LockOnTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_LockOnTarget",
               &Z_Registration_Info_UClass_UDS_VM_W_LockOnTarget.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_LockOnTarget,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_LockOnTarget>,
               InternalVTableHelperCtorCaller<UDS_VM_W_LockOnTarget>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_LockOnTarget.InnerSingleton;
}

// UDS_VM_W_LockOnTarget @ 14b742170

UDS_VM_W_LockOnTarget * __thiscall
UDS_VM_W_LockOnTarget::UDS_VM_W_LockOnTarget(UDS_VM_W_LockOnTarget *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LockOnTarget__6B_;
  (this->TargetActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TargetSocketName).ComparisonIndex = 0;
  (this->TargetSocketName).Number = 0;
  (this->LockOnTargetScreenPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_LockOnTarget @ 14b742220

UDS_VM_W_LockOnTarget * __thiscall
UDS_VM_W_LockOnTarget::UDS_VM_W_LockOnTarget
          (UDS_VM_W_LockOnTarget *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LockOnTarget__6B_;
  (this->TargetActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TargetSocketName).ComparisonIndex = 0;
  (this->TargetSocketName).Number = 0;
  (this->LockOnTargetScreenPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_LockOnTarget @ 14b743240

void __thiscall UDS_VM_W_LockOnTarget::~UDS_VM_W_LockOnTarget(UDS_VM_W_LockOnTarget *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LockOnTarget__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b745060

IClassDescriptor * __thiscall
UDS_VM_W_LockOnTarget::GetFieldNotificationDescriptor(UDS_VM_W_LockOnTarget *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_LockOnTarget::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745a40

UClass * __cdecl UDS_VM_W_LockOnTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_LockOnTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_LockOnTarget",
               &Z_Registration_Info_UClass_UDS_VM_W_LockOnTarget.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_LockOnTarget,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_LockOnTarget>,
               InternalVTableHelperCtorCaller<UDS_VM_W_LockOnTarget>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_LockOnTarget.InnerSingleton;
}

// GetTickableTickType @ 14b745bd0

ETickableTickType __thiscall UDS_VM_W_LockOnTarget::GetTickableTickType(UDS_VM_W_LockOnTarget *this)

{
  return Conditional;
}

// IsUpdate @ 14b745bf0

bool __thiscall UDS_VM_W_LockOnTarget::IsUpdate(UDS_VM_W_LockOnTarget *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_W_LockOnTarget @ 14b745de0

void __cdecl UDS_VM_W_LockOnTarget::StaticRegisterNativesUDS_VM_W_LockOnTarget(void)

{
  return;
}

// InitViewModel @ 14c01eb40

void __thiscall UDS_VM_W_LockOnTarget::InitViewModel(UDS_VM_W_LockOnTarget *this)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar2 = ::FName::FName(local_res8,L"Ani_GlowCursor");
  FVar1 = *pFVar2;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).NumberOfLoops = 0;
  (this->AnimationEvent).AnimationName = FVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnCloseInit @ 14c0285e0

void __thiscall UDS_VM_W_LockOnTarget::OnCloseInit(UDS_VM_W_LockOnTarget *this)

{
  (this->LockOnTargetScreenPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// OnSetViewModel @ 14c032380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_W_LockOnTarget::OnSetViewModel
          (UDS_VM_W_LockOnTarget *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr *pFVar3;
  undefined1 local_res10 [24];
  TSharedPtr<FDS_ViewModelContext_LockOnTarget,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_LockOnTarget>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_LockOnTarget *)0x0) {
    this->TargetSocketName = (local_28.Object)->TargetSocketName;
    pFVar2 = FDS_EntityBase::GetEntityBase(&(local_28.Object)->TargetEntityID);
    if (pFVar2 != (FDS_EntityBase *)0x0) {
      pFVar3 = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,local_res10);
      (this->TargetActor).WeakPtr = *pFVar3;
    }
    UpdateLockOnTarget(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c03a730

void __thiscall UDS_VM_W_LockOnTarget::OnUpdate(UDS_VM_W_LockOnTarget *this,float param_1)

{
  bool bVar1;
  
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&this->TargetActor,(void *)0x0);
  if (!bVar1) {
    UpdateLockOnTarget(this);
    return;
  }
  return;
}

// PlayAnimation @ 14c03d310

void __thiscall UDS_VM_W_LockOnTarget::PlayAnimation(UDS_VM_W_LockOnTarget *this)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar2 = ::FName::FName(local_res8,L"Ani_GlowCursor");
  FVar1 = *pFVar2;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).NumberOfLoops = 0;
  (this->AnimationEvent).AnimationName = FVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateLockOnTarget @ 14c04ca90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_W_LockOnTarget::UpdateLockOnTarget(UDS_VM_W_LockOnTarget *this)

{
  longlong lVar1;
  TVector2<double>_u_0 TVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  FDS_EntityBase *pFVar6;
  UObject *pUVar7;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar8;
  double *pdVar9;
  UDS_HudManager *this_01;
  float fVar10;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->TargetActor).WeakPtr);
  if (pFVar6 != (FDS_EntityBase *)0x0) {
    pUVar7 = FWeakObjectPtr::Get(&(this->TargetActor).WeakPtr);
    lVar1 = *(longlong *)(pUVar7 + 0xb);
    local_38[0]._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_38[0]._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_38[0]._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_38[0]._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_38[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar1 != 0) {
      local_38[0]._0_4_ = *(undefined4 *)(lVar1 + 0x210);
      local_38[0]._4_4_ = *(undefined4 *)(lVar1 + 0x214);
      local_38[0]._8_4_ = *(undefined4 *)(lVar1 + 0x218);
      local_38[0]._12_4_ = *(undefined4 *)(lVar1 + 0x21c);
      local_38[0]._16_8_ = *(double *)(lVar1 + 0x220);
    }
    (**(code **)(pFVar6->_padding_ + 0x78))(pFVar6,&local_res10);
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res10);
      pTVar8 = UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_58._s_0);
      local_38[0]._0_8_ = (pTVar8->field0_0x0)._s_0.X;
      local_38[0]._8_8_ = (pTVar8->field0_0x0)._s_0.Y;
      local_38[0]._16_8_ = (pTVar8->field0_0x0)._s_0.Z;
    }
    (**(code **)(pFVar6->_padding_ + 0x80))(pFVar6);
    bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      cVar5 = (**(code **)(*(longlong *)pUVar7 + 0x540))(pUVar7,this->TargetSocketName);
      if (cVar5 == '\x01') {
        pUVar7 = FWeakObjectPtr::Get(&local_res8);
        pdVar9 = (double *)
                 (**(code **)(*(longlong *)pUVar7 + 0x528))(pUVar7,&local_58,this->TargetSocketName)
        ;
        local_38[0]._0_8_ = *pdVar9;
        local_38[0]._8_8_ = pdVar9[1];
        local_38[0]._16_8_ = pdVar9[2];
      }
    }
    DS_Util::ProjectWorldToScreen
              ((TVector<double> *)&local_38[0]._s_0,&this->LockOnTargetScreenPosition);
    fVar10 = __real_3f800000;
    this_01 = UDS_HudManager::GetInst();
    if (this_01 != (UDS_HudManager *)0x0) {
      fVar10 = UDS_HudManager::GetUIScale(this_01);
    }
    dVar3 = (this->LockOnTargetScreenPosition).field0_0x0._s_0.Y *
            (__real_3ff0000000000000 / (double)fVar10);
    TVar2._8_4_ = SUB84(dVar3,0);
    TVar2._s_0.X = (this->LockOnTargetScreenPosition).field0_0x0._s_0.X *
                   (__real_3ff0000000000000 / (double)fVar10);
    TVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    (this->LockOnTargetScreenPosition).field0_0x0 = TVar2;
    local_58._8_4_ = FFieldNotificationClassDescriptor::LockOnTargetScreenPosition.BitNumber;
    local_58._s_0.X =
         (double)FFieldNotificationClassDescriptor::LockOnTargetScreenPosition.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  return;
}

