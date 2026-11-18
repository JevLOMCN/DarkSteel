// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetAnimationFinishEvent_WrapperImpl @ 14b72e5c0

void __cdecl UDS_VM_W_FloatingText::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  bool bVar2;
  FName FVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FNameEntryId FVar6;
  uint uVar7;
  void *pvStackX_8;
  FName FStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  FDestructionSentinel FStack_28;
  FDelegateAllocation *pFStack_10;
  
  if (*(longlong *)((longlong)param_1 + 0xa8) == *(longlong *)((longlong)param_1 + 0x3e0)) {
    *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
    FVar6 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName.ComparisonIndex.Value;
    uVar7 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName.Number;
    iStack_30 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
  }
  else {
    FVar3 = GetNextAnimationName(param_1);
    lVar1 = *(longlong *)FVar3;
    *(longlong *)((longlong)param_1 + 0xa8) = lVar1;
    if (lVar1 != 0) {
      *(undefined1 *)((longlong)param_1 + 0xb4) = 2;
      bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xd8));
      if (!bVar2) {
        iStack_30 = 0;
        FStack_38 = (FName)OnValidAnimation;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   ((longlong)param_1 + 0xd8),(FWriteAccessScope *)&FStack_28);
        pFStack_10 = (FDelegateAllocation *)((longlong)param_1 + 0xe0);
        puVar4 = UE::Core::Private::DelegateAllocate(0x30,pFStack_10);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_FloatingText____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_1);
          }
          puVar4[3] = 0;
          pvStackX_8 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(param_1);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&pvStackX_8);
          *(FName *)(puVar4 + 4) = FStack_38;
          puVar4[5] = CONCAT44(uStack_2c,iStack_30);
        }
        if (FStack_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
        }
      }
      iStack_30 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      FStack_38 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_38);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x3a8) = 1;
    iStack_30 = FFieldNotificationClassDescriptor::Vis_Progress.BitNumber;
    if (*(double *)((longlong)param_1 + 0x3d8) <= 0.0) {
      return;
    }
    FVar6 = FFieldNotificationClassDescriptor::Vis_Progress.FieldName.ComparisonIndex.Value;
    uVar7 = FFieldNotificationClassDescriptor::Vis_Progress.FieldName.Number;
    if (*(char *)((longlong)param_1 + 0x354) == '\x04') {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x354) = 4;
  }
  FStack_38.Number = uVar7;
  FStack_38.ComparisonIndex.Value = FVar6.Value;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_38);
  return;
}

// StaticClass @ 14b72e5d0

UClass * __cdecl UDS_VM_W_FloatingText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_FloatingText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_FloatingText",
               &Z_Registration_Info_UClass_UDS_VM_W_FloatingText.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_FloatingText,0x3f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_FloatingText>,
               InternalVTableHelperCtorCaller<UDS_VM_W_FloatingText>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_FloatingText.InnerSingleton;
}

// UDS_VM_W_FloatingText @ 14b734dd0

UDS_VM_W_FloatingText * __thiscall
UDS_VM_W_FloatingText::UDS_VM_W_FloatingText(UDS_VM_W_FloatingText *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->RequestCloseEvent).bIsActivate = false;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_FloatingText__6B_;
  (this->FloatingTextScreenPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  FSlateBrush::FSlateBrush(&this->TextBrush);
  (this->TextEffectColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FDS_FloatingTextInfo::FDS_FloatingTextInfo(&this->FloatingTextInfo);
  (this->TextIconID_1).TextIconID = 0;
  (this->TextIconID_10).TextIconID = 0;
  (this->TextIconID_100).TextIconID = 0;
  (this->TextIconID_1000).TextIconID = 0;
  (this->TextIconID_10000).TextIconID = 0;
  (this->TextIconID_100000).TextIconID = 0;
  (this->TextIconID_1000000).TextIconID = 0;
  (this->TextIconID_10000000).TextIconID = 0;
  (this->TargetActor).WeakPtr.ObjectSerialNumber = 0;
  this->bIsMyFloatingText = false;
  this->bIsCritical = false;
  this->bIsSmite = false;
  this->bIsCriticalSmite = false;
  this->ProgressPercent = 0.0;
  this->bOpenAniCompleted = false;
  this->bEndAniStarted = false;
  this->bIsUpdate = true;
  this->ElepsedTime = 0.0;
  (this->TargetActor).WeakPtr.ObjectIndex = 0;
  (this->OffsetPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->ProgressTime = 0.0;
  (this->AnimationDirection).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  ::FName::FName(&this->EndAniName,"End_ani");
  return this;
}

// UDS_VM_W_FloatingText @ 14b734f80

UDS_VM_W_FloatingText * __thiscall
UDS_VM_W_FloatingText::UDS_VM_W_FloatingText
          (UDS_VM_W_FloatingText *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->RequestCloseEvent).bIsActivate = false;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_FloatingText__6B_;
  (this->FloatingTextScreenPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  FSlateBrush::FSlateBrush(&this->TextBrush);
  (this->TextEffectColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FDS_FloatingTextInfo::FDS_FloatingTextInfo(&this->FloatingTextInfo);
  (this->TextIconID_1).TextIconID = 0;
  (this->TextIconID_10).TextIconID = 0;
  (this->TextIconID_100).TextIconID = 0;
  (this->TextIconID_1000).TextIconID = 0;
  (this->TextIconID_10000).TextIconID = 0;
  (this->TextIconID_100000).TextIconID = 0;
  (this->TextIconID_1000000).TextIconID = 0;
  (this->TextIconID_10000000).TextIconID = 0;
  (this->TargetActor).WeakPtr.ObjectSerialNumber = 0;
  this->bIsMyFloatingText = false;
  this->bIsCritical = false;
  this->bIsSmite = false;
  this->bIsCriticalSmite = false;
  this->ProgressPercent = 0.0;
  this->bOpenAniCompleted = false;
  this->bEndAniStarted = false;
  this->bIsUpdate = true;
  this->ElepsedTime = 0.0;
  (this->TargetActor).WeakPtr.ObjectIndex = 0;
  (this->OffsetPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->ProgressTime = 0.0;
  (this->AnimationDirection).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  ::FName::FName(&this->EndAniName,"End_ani");
  return this;
}

// ~UDS_VM_W_FloatingText @ 14b7364f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UDS_VM_W_FloatingText::~UDS_VM_W_FloatingText(UDS_VM_W_FloatingText *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  void *pvVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_W_FloatingText__6B_;
  pFVar1 = (this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatingTextInfo).NumberData.AnimationSequenceList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatingTextInfo).FloatingTextData.AnimationSequenceList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->FloatingTextInfo).FloatingTextData.TextBrush.ResourceHandle.Data.
           SharedReferenceCount.ReferenceController;
  (this->FloatingTextInfo).FloatingTextData.TextBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar2 = (this->TextBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->TextBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar3 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar3 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar3 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar3 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b739590

IClassDescriptor * __thiscall
UDS_VM_W_FloatingText::GetFieldNotificationDescriptor(UDS_VM_W_FloatingText *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_FloatingText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b73a440

UClass * __cdecl UDS_VM_W_FloatingText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_FloatingText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_FloatingText",
               &Z_Registration_Info_UClass_UDS_VM_W_FloatingText.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_FloatingText,0x3f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_FloatingText>,
               InternalVTableHelperCtorCaller<UDS_VM_W_FloatingText>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_FloatingText.InnerSingleton;
}

// GetTickableTickType @ 14b73ae30

ETickableTickType __thiscall UDS_VM_W_FloatingText::GetTickableTickType(UDS_VM_W_FloatingText *this)

{
  return Conditional;
}

// IsUpdate @ 14b73ae70

bool __thiscall UDS_VM_W_FloatingText::IsUpdate(UDS_VM_W_FloatingText *this)

{
  return this->bIsUpdate;
}

// StaticRegisterNativesUDS_VM_W_FloatingText @ 14b73afc0

void __cdecl UDS_VM_W_FloatingText::StaticRegisterNativesUDS_VM_W_FloatingText(void)

{
  return;
}

// __VTableCtorCaller @ 14b73c370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_W_FloatingText::__VTableCtorCaller(FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDS_ViewModelBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    *(undefined4 *)&this[1].TextPropertyIDList.AllocatorInstance.Data = 0;
    this->_padding_ = (longlong)&___7UDS_VM_W_FloatingText__6B_;
    *(TVector2<double>_u_0 *)&this[1].TextPropertyIDList.ArrayNum =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    FSlateBrush::FSlateBrush((FSlateBrush *)&this[2]._padding_);
    *(FLinearColor_u_0 *)&this[3]._padding_ = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    FDS_FloatingTextInfo::FDS_FloatingTextInfo((FDS_FloatingTextInfo *)&this[3]._padding_);
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[5].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)((longlong)&this[5].TextPropertyIDList.AllocatorInstance.Data + 4) = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined2 *)&this[5].VMName.Number = 0;
    *(undefined1 *)((longlong)&this[5].VMName.Number + 2) = 1;
    *(undefined8 *)&this[5].bIsCloseInit = 0;
    *(TVector2<double>_u_0 *)&this[5].TextPropertyIDList.ArrayNum =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[6]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[6]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    ::FName::FName((FName *)&this[6]._padding_,"End_ani");
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// GetNextAnimationName @ 14bfab190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __thiscall UDS_VM_W_FloatingText::GetNextAnimationName(UDS_VM_W_FloatingText *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  FName in_RDX;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if ((this->FloatingTextInfo).NumberValue == 0) {
    pTVar1 = &(this->FloatingTextInfo).FloatingTextData.AnimationSequenceList;
    if ((this->FloatingTextInfo).FloatingTextData.AnimationSequenceList.ArrayNum < 1)
    goto LAB_14bfab228;
    uVar2 = *(ulonglong *)(pTVar1->AllocatorInstance).Data;
    TArray<FName,TSizedDefaultAllocator<32>_>::RemoveAt(pTVar1,0,Default);
LAB_14bfab203:
    uVar3 = uVar2 >> 0x20;
  }
  else {
    pTVar1 = &(this->FloatingTextInfo).NumberData.AnimationSequenceList;
    uVar3 = uVar2;
    if (0 < (this->FloatingTextInfo).NumberData.AnimationSequenceList.ArrayNum) {
      uVar2 = *(ulonglong *)(pTVar1->AllocatorInstance).Data;
      TArray<FName,TSizedDefaultAllocator<32>_>::RemoveAt(pTVar1,0,Default);
      goto LAB_14bfab203;
    }
  }
  if ((uVar2 & 0xffffffff) != 0 || uVar3 != 0) {
    *(ulonglong *)in_RDX = uVar2;
    return in_RDX;
  }
LAB_14bfab228:
  ::FName::FName((FName *)in_RDX,"");
  return in_RDX;
}

// InitViewModel @ 14bfb0f50

void __thiscall UDS_VM_W_FloatingText::InitViewModel(UDS_VM_W_FloatingText *this)

{
  return;
}

// OnAnimationFinished @ 14bfb4530

void __thiscall
UDS_VM_W_FloatingText::OnAnimationFinished
          (UDS_VM_W_FloatingText *this,FDS_WidgetAnimationEventField *param_1)

{
  bool bVar1;
  FName FVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FNameEntryId FVar5;
  uint uVar6;
  UDS_VM_W_FloatingText *local_res8;
  FName local_38;
  int iStack_30;
  undefined4 uStack_2c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  if ((this->AnimationEvent).AnimationName == this->EndAniName) {
    (this->RequestCloseEvent).bIsActivate = true;
    FVar5 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName.ComparisonIndex.Value;
    uVar6 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName.Number;
    iStack_30 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
  }
  else {
    FVar2 = GetNextAnimationName(this);
    FVar2 = *(FName *)FVar2;
    (this->AnimationEvent).AnimationName = FVar2;
    if (FVar2 != (FName)0x0) {
      (this->AnimationEvent).AnimationEventType = PlayForward;
      bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &(this->AnimationEvent).Delegate_ValidAnimation);
      if (!bVar1) {
        iStack_30 = 0;
        local_38 = (FName)OnValidAnimation;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(this->AnimationEvent).Delegate_ValidAnimation,(FWriteAccessScope *)&local_28);
        local_10 = &(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
        puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &
                    ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar4 = FDelegateHandle::GenerateNewID();
          puVar3[2] = uVar4;
          *puVar3 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_FloatingText____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar3[3] = 0;
          local_res8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
          *(FName *)(puVar3 + 4) = local_38;
          puVar3[5] = CONCAT44(uStack_2c,iStack_30);
        }
        if (local_28.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
        }
      }
      iStack_30 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_38);
      return;
    }
    this->bOpenAniCompleted = true;
    iStack_30 = FFieldNotificationClassDescriptor::Vis_Progress.BitNumber;
    if (this->ProgressTime <= 0.0) {
      return;
    }
    FVar5 = FFieldNotificationClassDescriptor::Vis_Progress.FieldName.ComparisonIndex.Value;
    uVar6 = FFieldNotificationClassDescriptor::Vis_Progress.FieldName.Number;
    if (this->Vis_Progress == SelfHitTestInvisible) {
      return;
    }
    this->Vis_Progress = SelfHitTestInvisible;
  }
  local_38.Number = uVar6;
  local_38.ComparisonIndex.Value = FVar5.Value;
  (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_38);
  return;
}

// OnSetViewModel @ 14bfcc290

void __thiscall
UDS_VM_W_FloatingText::OnSetViewModel
          (UDS_VM_W_FloatingText *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_FloatingText,1> local_28;
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
  SafeCast<FDS_ViewModelContext_FloatingText>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_FloatingText *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_FloatingText *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SetFloatingText(this,&(local_28.Object)->FloatingTextInfo);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bfd1af0

void __thiscall UDS_VM_W_FloatingText::OnUpdate(UDS_VM_W_FloatingText *this,float param_1)

{
  TVector2<double> *pTVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  UDS_HudManager *this_00;
  FName *pFVar8;
  UDS_AbnormalAbilityData *this_01;
  float fVar9;
  FName local_res8;
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  TVector<double>_u_0 local_78 [4];
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->TargetActor).WeakPtr);
  dVar5 = __real_3ff0000000000000;
  if (bVar6) {
    if (0 < (this->FloatingTextInfo).NumberValue) {
      UpdateAnimationDirection(this);
    }
    if (this->bOpenAniCompleted == true) {
      fVar9 = DS_CommonDataHelper::EnemyDamageFontPrintOutSpeed();
      dVar2 = (this->AnimationDirection).field0_0x0._s_0.Y;
      dVar3 = (this->OffsetPosition).field0_0x0._s_0.Y;
      (this->OffsetPosition).field0_0x0._s_0.X =
           (double)fVar9 * (this->AnimationDirection).field0_0x0._s_0.X +
           (this->OffsetPosition).field0_0x0._s_0.X;
      (this->OffsetPosition).field0_0x0._s_0.Y = (double)fVar9 * dVar2 + dVar3;
    }
    pUVar7 = FWeakObjectPtr::Get(&(this->TargetActor).WeakPtr);
    lVar4 = *(longlong *)(pUVar7 + 0xb);
    local_78[0]._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_78[0]._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_78[0]._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_78[0]._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_78[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar4 != 0) {
      local_78[0]._0_4_ = *(undefined4 *)(lVar4 + 0x210);
      local_78[0]._4_4_ = *(undefined4 *)(lVar4 + 0x214);
      local_78[0]._8_4_ = *(undefined4 *)(lVar4 + 0x218);
      local_78[0]._12_4_ = *(undefined4 *)(lVar4 + 0x21c);
      local_78[0]._16_8_ = *(double *)(lVar4 + 0x220);
    }
    pTVar1 = &this->FloatingTextScreenPosition;
    DS_Util::ProjectWorldToScreen((TVector<double> *)&local_78[0]._s_0,pTVar1);
    fVar9 = __real_3f800000;
    (pTVar1->field0_0x0)._s_0.X =
         (pTVar1->field0_0x0)._s_0.X + (this->OffsetPosition).field0_0x0._s_0.X;
    (this->FloatingTextScreenPosition).field0_0x0._s_0.Y =
         (this->OffsetPosition).field0_0x0._s_0.Y +
         (this->FloatingTextScreenPosition).field0_0x0._s_0.Y;
    dVar2 = (pTVar1->field0_0x0)._s_0.X;
    dVar3 = (this->FloatingTextScreenPosition).field0_0x0._s_0.Y;
    this_00 = UDS_HudManager::GetInst();
    if (this_00 != (UDS_HudManager *)0x0) {
      fVar9 = UDS_HudManager::GetUIScale(this_00);
    }
    (pTVar1->field0_0x0)._s_0.X = (dVar5 / (double)fVar9) * dVar2;
    (this->FloatingTextScreenPosition).field0_0x0._s_0.Y = (dVar5 / (double)fVar9) * dVar3;
    local_78[0]._8_4_ = FFieldNotificationClassDescriptor::FloatingTextScreenPosition.BitNumber;
    local_78[0]._s_0.X = FFieldNotificationClassDescriptor::FloatingTextScreenPosition.FieldName;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,local_78);
  }
  else if (this->bOpenAniCompleted == true) {
    (this->FloatingTextScreenPosition).field0_0x0._s_0.X =
         (this->AnimationDirection).field0_0x0._s_0.X +
         (this->FloatingTextScreenPosition).field0_0x0._s_0.X;
    (this->FloatingTextScreenPosition).field0_0x0._s_0.Y =
         (this->AnimationDirection).field0_0x0._s_0.Y +
         (this->FloatingTextScreenPosition).field0_0x0._s_0.Y;
    local_78[0]._8_4_ = FFieldNotificationClassDescriptor::FloatingTextScreenPosition.BitNumber;
    local_78[0]._s_0.X = FFieldNotificationClassDescriptor::FloatingTextScreenPosition.FieldName;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,local_78);
  }
  if (this->bOpenAniCompleted != false) {
    if (((this->FloatingTextInfo).TargetEntityID == 0) ||
       (bVar6 = FWeakObjectPtr::IsValid(&(this->TargetActor).WeakPtr), bVar6)) {
      fVar9 = param_1 + this->ElepsedTime;
      dVar2 = this->ProgressTime;
      this->ElepsedTime = fVar9;
      if (dVar2 <= 0.0) {
        if (this->bEndAniStarted == false) {
          this->bEndAniStarted = true;
          pFVar8 = ::FName::FName(&local_res8,"End_ani");
          StartCloseAnimation(this,*pFVar8);
        }
        bVar6 = FWeakObjectPtr::IsValid(&(this->TargetActor).WeakPtr);
        if (bVar6) {
          fVar9 = DS_CommonDataHelper::EnemyDamageFontPrintOutTime();
        }
        else {
          fVar9 = DS_CommonDataHelper::MyDamageFontPrintOutTime();
        }
        if (fVar9 < this->ElepsedTime || fVar9 == this->ElepsedTime) {
          this->bIsUpdate = false;
        }
      }
      else {
        dVar2 = (dVar2 - (double)fVar9) / dVar2;
        if (dVar5 <= dVar2) {
          dVar2 = dVar5;
        }
        if (dVar2 <= 0.0) {
          dVar2 = 0.0;
        }
        this->ProgressPercent = (float)dVar2;
        local_78[0]._8_4_ = FFieldNotificationClassDescriptor::ProgressPercent.BitNumber;
        local_78[0]._s_0.X = FFieldNotificationClassDescriptor::ProgressPercent.FieldName;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,local_78);
        if ((double)this->ElepsedTime < this->ProgressTime) {
          local_res20 = FDS_EntityBase::GetMainPlayerEntityID(true);
          local_res8.ComparisonIndex.Value._0_1_ = 0x30;
          UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
                    ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&local_res20);
          bVar6 = FWeakObjectPtr::IsValid(&local_res18);
          if (bVar6) {
            this_01 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res18);
            bVar6 = UDS_AbnormalAbilityData::HasAbnormalInfo
                              (this_01,&(this->FloatingTextInfo).AbnormalType);
            if (!bVar6) {
              this->bIsUpdate = false;
              pFVar8 = ::FName::FName(&local_res8,"End_type_02_ani");
              StartCloseAnimation(this,*pFVar8);
            }
          }
        }
        else {
          this->bIsUpdate = false;
          pFVar8 = ::FName::FName(&local_res8,"End_type_01_ani");
          StartCloseAnimation(this,*pFVar8);
        }
      }
    }
    else {
      this->bIsUpdate = false;
      (this->RequestCloseEvent).bIsActivate = true;
      local_78[0]._8_4_ = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
      local_78[0]._s_0.X = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,local_78);
    }
  }
  return;
}

// OnValidAnimation @ 14bfd2140

void __thiscall
UDS_VM_W_FloatingText::OnValidAnimation(UDS_VM_W_FloatingText *this,FName param_1,bool param_2)

{
  FName local_18;
  int local_10;
  
  if ((!param_2) && (param_1 == this->EndAniName)) {
    (this->RequestCloseEvent).bIsActivate = true;
    local_10 = FFieldNotificationClassDescriptor::RequestCloseEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::RequestCloseEvent.FieldName;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_18);
  }
  return;
}

// SetFloatingText @ 14bfd9aa0

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
UDS_VM_W_FloatingText::SetFloatingText(UDS_VM_W_FloatingText *this,FDS_FloatingTextInfo *param_1)

{
  double dVar1;
  double dVar2;
  EDS_NumberFontType EVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  FName FVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  FDS_EntityBase *pFVar18;
  FWeakObjectPtr *pFVar19;
  UObject *pUVar20;
  UDS_HudManager *this_00;
  UDS_AbnormalAbilityData *pUVar21;
  FDS_AbnormalInfo *pFVar22;
  undefined1 *puVar23;
  float fVar24;
  float fVar25;
  FNameEntryId FVar26;
  UDS_VM_W_FloatingText *local_res8;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  TVector<double>_u_0 local_d8;
  FDestructionSentinel local_b8;
  undefined1 *local_a0;
  
  (this->FloatingTextInfo).FloatingTextData.FloatingTextWindowID =
       (param_1->FloatingTextData).FloatingTextWindowID;
  FSlateBrush::operator=
            (&(this->FloatingTextInfo).FloatingTextData.TextBrush,
             &(param_1->FloatingTextData).TextBrush);
  (this->FloatingTextInfo).FloatingTextData.TextBrushID = (param_1->FloatingTextData).TextBrushID;
  uVar11 = *(undefined8 *)((longlong)&(param_1->FloatingTextData).TextEffectColor.field0_0x0 + 8);
  *(undefined8 *)&(this->FloatingTextInfo).FloatingTextData.TextEffectColor.field0_0x0 =
       *(undefined8 *)&(param_1->FloatingTextData).TextEffectColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->FloatingTextInfo).FloatingTextData.TextEffectColor.field0_0x0 + 8) = uVar11;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->FloatingTextInfo).FloatingTextData.AnimationSequenceList,
             &(param_1->FloatingTextData).AnimationSequenceList);
  dVar1 = (param_1->FloatingTextScreenPosition).field0_0x0._s_0.Y;
  (this->FloatingTextInfo).FloatingTextScreenPosition.field0_0x0._s_0.X =
       (param_1->FloatingTextScreenPosition).field0_0x0._s_0.X;
  (this->FloatingTextInfo).FloatingTextScreenPosition.field0_0x0._s_0.Y = dVar1;
  (this->FloatingTextInfo).TargetEntityID = param_1->TargetEntityID;
  (this->FloatingTextInfo).NumberData.FloatingTextWindowID =
       (param_1->NumberData).FloatingTextWindowID;
  (this->FloatingTextInfo).NumberData.NumberFontType = (param_1->NumberData).NumberFontType;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->FloatingTextInfo).NumberData.AnimationSequenceList,
             &(param_1->NumberData).AnimationSequenceList);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&(this->FloatingTextInfo).NumberData.IconIDs,&(param_1->NumberData).IconIDs);
  (this->FloatingTextInfo).NumberValue = param_1->NumberValue;
  (this->FloatingTextInfo).AbnormalType = param_1->AbnormalType;
  FVar15 = GetNextAnimationName(this);
  FVar15 = *(FName *)FVar15;
  (this->AnimationEvent).AnimationName = FVar15;
  if (FVar15 != (FName)0x0) {
    (this->AnimationEvent).AnimationEventType = PlayForward;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->AnimationEvent).Delegate_ValidAnimation,(FReadAccessScope *)&local_d8._s_0);
    puVar23 = &(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
    if (((*(int *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 == 0) ||
        (*(longlong **)puVar23 == (longlong *)0x0)) ||
       (cVar12 = (**(code **)(**(longlong **)puVar23 + 0x38))(), cVar12 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_d8._s_0);
      local_d8._8_4_ = 0;
      local_d8._s_0.X = (double)OnValidAnimation;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->AnimationEvent).Delegate_ValidAnimation,(FWriteAccessScope *)&local_b8);
      local_a0 = puVar23;
      puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar23);
      if (puVar16 != (undefined8 *)0x0) {
        *puVar16 = &
                   ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar16[2] = uVar17;
        *puVar16 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_FloatingText____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar16[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&local_res8);
        puVar16[4] = local_d8._s_0.X;
        puVar16[5] = CONCAT44(local_d8._12_4_,local_d8._8_4_);
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_d8._s_0);
    }
    local_d8._8_4_ = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_d8._s_0.X = (double)FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_d8);
  }
  puVar23 = &this->field_0x28;
  FSlateBrush::operator=(&this->TextBrush,&(param_1->FloatingTextData).TextBrush);
  local_d8._8_4_ = FFieldNotificationClassDescriptor::TextBrush.BitNumber;
  local_d8._s_0.X = (double)FFieldNotificationClassDescriptor::TextBrush.FieldName;
  (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
  fVar24 = (param_1->FloatingTextData).TextEffectColor.field0_0x0._s_0.G;
  fVar25 = (param_1->FloatingTextData).TextEffectColor.field0_0x0._s_0.B;
  fVar10 = (param_1->FloatingTextData).TextEffectColor.field0_0x0._s_0.A;
  (this->TextEffectColor).field0_0x0._s_0.R =
       (param_1->FloatingTextData).TextEffectColor.field0_0x0._s_0.R;
  (this->TextEffectColor).field0_0x0._s_0.G = fVar24;
  (this->TextEffectColor).field0_0x0._s_0.B = fVar25;
  (this->TextEffectColor).field0_0x0._s_0.A = fVar10;
  local_d8._8_4_ = FFieldNotificationClassDescriptor::TextEffectColor.BitNumber;
  local_d8._s_0.X = (double)FFieldNotificationClassDescriptor::TextEffectColor.FieldName;
  (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
  this->bIsMyFloatingText = (this->FloatingTextInfo).TargetEntityID == 0;
  local_d8._8_4_ = FFieldNotificationClassDescriptor::bIsMyFloatingText.BitNumber;
  local_d8._s_0.X = (double)FFieldNotificationClassDescriptor::bIsMyFloatingText.FieldName;
  (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
  iVar4 = (this->FloatingTextInfo).NumberValue;
  if (iVar4 != 0) {
    SetNumberText(this,iVar4);
    iVar4 = FFieldNotificationClassDescriptor::bIsCritical.BitNumber;
    FVar15 = FFieldNotificationClassDescriptor::bIsCritical.FieldName;
    FVar26 = FFieldNotificationClassDescriptor::bIsCritical.FieldName.ComparisonIndex.Value;
    uVar14 = FFieldNotificationClassDescriptor::bIsCritical.FieldName.Number;
    if (this->bIsCritical != false) {
      this->bIsCritical = false;
      local_d8._8_4_ = iVar4;
      local_d8._s_0.X = (double)FVar15;
      (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
      FVar26 = FFieldNotificationClassDescriptor::bIsCritical.FieldName.ComparisonIndex.Value;
      uVar14 = FFieldNotificationClassDescriptor::bIsCritical.FieldName.Number;
    }
    iVar4 = FFieldNotificationClassDescriptor::bIsSmite.BitNumber;
    FVar15 = FFieldNotificationClassDescriptor::bIsSmite.FieldName;
    if (this->bIsSmite != false) {
      this->bIsSmite = false;
      local_d8._8_4_ = iVar4;
      local_d8._s_0.X = (double)FVar15;
      (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
      FVar26 = FFieldNotificationClassDescriptor::bIsCritical.FieldName.ComparisonIndex.Value;
      uVar14 = FFieldNotificationClassDescriptor::bIsCritical.FieldName.Number;
    }
    iVar4 = FFieldNotificationClassDescriptor::bIsCriticalSmite.BitNumber;
    FVar15 = FFieldNotificationClassDescriptor::bIsCriticalSmite.FieldName;
    if (this->bIsCriticalSmite != false) {
      this->bIsCriticalSmite = false;
      local_d8._8_4_ = iVar4;
      local_d8._s_0.X = (double)FVar15;
      (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
      FVar26 = FFieldNotificationClassDescriptor::bIsCritical.FieldName.ComparisonIndex.Value;
      uVar14 = FFieldNotificationClassDescriptor::bIsCritical.FieldName.Number;
    }
    iVar4 = FFieldNotificationClassDescriptor::bIsCritical.BitNumber;
    if (((this->FloatingTextInfo).NumberData.NumberFontType == DamageCritical) &&
       (this->bIsCritical != true)) {
      this->bIsCritical = true;
      local_d8._4_4_ = uVar14;
      local_d8._0_4_ = FVar26.Value;
      local_d8._8_4_ = iVar4;
      (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
    }
    iVar4 = FFieldNotificationClassDescriptor::bIsSmite.BitNumber;
    FVar15 = FFieldNotificationClassDescriptor::bIsSmite.FieldName;
    if (((this->FloatingTextInfo).NumberData.NumberFontType == DamageSmite) &&
       (this->bIsSmite != true)) {
      this->bIsSmite = true;
      local_d8._s_0.X = (double)FVar15;
      local_d8._8_4_ = iVar4;
      (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
    }
    iVar4 = FFieldNotificationClassDescriptor::bIsCriticalSmite.BitNumber;
    FVar15 = FFieldNotificationClassDescriptor::bIsCriticalSmite.FieldName;
    if (((this->FloatingTextInfo).NumberData.NumberFontType == DamageCriticalSmite) &&
       (this->bIsCriticalSmite != true)) {
      this->bIsCriticalSmite = true;
      local_d8._s_0.X = (double)FVar15;
      local_d8._8_4_ = iVar4;
      (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
    }
    if ((this->FloatingTextInfo).TargetEntityID == 0) {
      EVar3 = (this->FloatingTextInfo).NumberData.NumberFontType;
      if ((EVar3 == RecorveryHP) || (EVar3 == RecorveryMP)) {
        fVar24 = DS_CommonDataHelper::MyDamageFontPrintOutSpeed();
        fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000);
      }
      else {
        fVar24 = DS_CommonDataHelper::MyDamageFontPrintOutSpeed();
      }
      (this->AnimationDirection).field0_0x0._s_0.X = 0.0;
      (this->AnimationDirection).field0_0x0._s_0.Y = (double)fVar24;
    }
  }
  if ((this->FloatingTextInfo).TargetEntityID == 0) {
    dVar1 = (this->FloatingTextInfo).FloatingTextScreenPosition.field0_0x0._s_0.Y;
    (this->FloatingTextScreenPosition).field0_0x0._s_0.X =
         (this->FloatingTextInfo).FloatingTextScreenPosition.field0_0x0._s_0.X;
    (this->FloatingTextScreenPosition).field0_0x0._s_0.Y = dVar1;
  }
  else {
    pFVar18 = FDS_EntityBase::GetEntityBase(&(this->FloatingTextInfo).TargetEntityID);
    if (pFVar18 != (FDS_EntityBase *)0x0) {
      pFVar19 = (FWeakObjectPtr *)(**(code **)(pFVar18->_padding_ + 0x150))(pFVar18,&local_res8);
      bVar13 = FWeakObjectPtr::IsValid(pFVar19);
      if (bVar13) {
        pFVar19 = (FWeakObjectPtr *)(**(code **)(pFVar18->_padding_ + 0x150))(pFVar18,&local_res8);
        (this->TargetActor).WeakPtr = *pFVar19;
        pUVar20 = FWeakObjectPtr::Get(&(this->TargetActor).WeakPtr);
        lVar5 = *(longlong *)(pUVar20 + 0xb);
        local_d8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_d8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_d8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_d8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar5 != 0) {
          local_d8._0_4_ = *(uint *)(lVar5 + 0x210);
          local_d8._4_4_ = *(uint *)(lVar5 + 0x214);
          local_d8._8_4_ = *(int *)(lVar5 + 0x218);
          local_d8._12_4_ = *(undefined4 *)(lVar5 + 0x21c);
          local_d8._s_0.Z = *(double *)(lVar5 + 0x220);
        }
        DS_Util::ProjectWorldToScreen
                  ((TVector<double> *)&local_d8._s_0,&this->FloatingTextScreenPosition);
        if (0 < (this->FloatingTextInfo).NumberValue) {
          UpdateAnimationDirection(this);
        }
        dVar1 = *(double *)((longlong)&(this->AnimationDirection).field0_0x0 + 8);
        dVar2 = *(double *)&(this->AnimationDirection).field0_0x0;
        dVar8 = dVar2 * __real_4062c00000000000;
        dVar9 = dVar1 * __real_4062c00000000000;
        dVar1 = (double)(float)((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                 SUB84(dVar1,0) &
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                               __real_4059000000000000);
        dVar6 = dVar8 - dVar1;
        uVar14 = rand();
        fVar24 = (float)(uVar14 & 0x7fff) * __real_38000100;
        dVar2 = (double)(float)((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                 SUB84(dVar2,0) &
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                               __real_4059000000000000);
        dVar7 = dVar9 - dVar2;
        uVar14 = rand();
        fVar25 = (float)(uVar14 & 0x7fff) * __real_38000100;
        (this->OffsetPosition).field0_0x0._s_0.X =
             (double)fVar24 * ((dVar1 + dVar8) - dVar6) + dVar6;
        (this->OffsetPosition).field0_0x0._s_0.Y =
             (double)fVar25 * ((dVar2 + dVar9) - dVar7) + dVar7;
        dVar1 = (this->FloatingTextScreenPosition).field0_0x0._s_0.Y;
        (this->FloatingTextScreenPosition).field0_0x0._s_0.X =
             (this->FloatingTextScreenPosition).field0_0x0._s_0.X +
             (this->OffsetPosition).field0_0x0._s_0.X;
        (this->FloatingTextScreenPosition).field0_0x0._s_0.Y =
             dVar1 + (this->OffsetPosition).field0_0x0._s_0.Y;
      }
    }
  }
  fVar24 = __real_3f800000;
  dVar1 = (this->FloatingTextScreenPosition).field0_0x0._s_0.X;
  dVar2 = (this->FloatingTextScreenPosition).field0_0x0._s_0.Y;
  this_00 = UDS_HudManager::GetInst();
  if (this_00 != (UDS_HudManager *)0x0) {
    fVar24 = UDS_HudManager::GetUIScale(this_00);
  }
  dVar7 = __real_3ff0000000000000;
  dVar6 = __real_3ff0000000000000 / (double)fVar24;
  (this->FloatingTextScreenPosition).field0_0x0._s_0.X = dVar1 * dVar6;
  (this->FloatingTextScreenPosition).field0_0x0._s_0.Y = dVar2 * dVar6;
  local_d8._8_4_ = FFieldNotificationClassDescriptor::FloatingTextScreenPosition.BitNumber;
  local_d8._s_0.X = (double)FFieldNotificationClassDescriptor::FloatingTextScreenPosition.FieldName;
  (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
  if (((this->FloatingTextInfo).TargetEntityID == 0) &&
     ((this->FloatingTextInfo).AbnormalType != None)) {
    local_res18[0] = FDS_EntityBase::GetMainPlayerEntityID(true);
    local_res8 = (UDS_VM_W_FloatingText *)CONCAT71(local_res8._1_7_,0x30);
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)&local_res10,(EDS_AbilityTagType *)local_res18);
    bVar13 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar13) {
      pUVar21 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res10);
      bVar13 = UDS_AbnormalAbilityData::HasAbnormalInfo
                         (pUVar21,&(this->FloatingTextInfo).AbnormalType);
      if (bVar13) {
        pUVar21 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res10);
        pFVar22 = UDS_AbnormalAbilityData::GetAbnormalInfo
                            (pUVar21,(this->FloatingTextInfo).AbnormalType);
        dVar7 = ((pFVar22->AbnormalEndTime - pFVar22->AbnormalStartTime) -
                (double)pFVar22->AbnormalGetupTime) - dVar7;
        if (dVar7 <= __real_3fb99999a0000000) {
          dVar7 = __real_3fb99999a0000000;
        }
        this->ProgressTime = dVar7;
      }
    }
  }
  local_d8._8_4_ = FFieldNotificationClassDescriptor::Vis_Progress.BitNumber;
  local_d8._s_0.X = (double)FFieldNotificationClassDescriptor::Vis_Progress.FieldName;
  if (this->Vis_Progress != Collapsed) {
    this->Vis_Progress = Collapsed;
    (**(code **)(*(longlong *)puVar23 + 0x38))(puVar23,&local_d8);
  }
  return;
}

// SetNumberText @ 14bfdc5a0

void __thiscall UDS_VM_W_FloatingText::SetNumberText(UDS_VM_W_FloatingText *this,int param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  FName local_148;
  int local_140;
  FName local_138;
  int local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num1.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num1.FieldName;
  if (this->Vis_Num1 != Collapsed) {
    this->Vis_Num1 = Collapsed;
    local_190 = iVar3;
    local_198 = FVar2;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_198);
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num10.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num10.FieldName;
  if (this->Vis_Num10 != Collapsed) {
    this->Vis_Num10 = Collapsed;
    local_180 = iVar3;
    local_188 = FVar2;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_188);
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num100.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num100.FieldName;
  if (this->Vis_Num100 != Collapsed) {
    this->Vis_Num100 = Collapsed;
    local_170 = iVar3;
    local_178 = FVar2;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_178);
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num1000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num1000.FieldName;
  if (this->Vis_Num1000 != Collapsed) {
    this->Vis_Num1000 = Collapsed;
    local_160 = iVar3;
    local_168 = FVar2;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_168);
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num10000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num10000.FieldName;
  if (this->Vis_Num10000 != Collapsed) {
    this->Vis_Num10000 = Collapsed;
    local_150 = iVar3;
    local_158 = FVar2;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_158);
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num100000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num100000.FieldName;
  if (this->Vis_Num100000 != Collapsed) {
    this->Vis_Num100000 = Collapsed;
    local_140 = iVar3;
    local_148 = FVar2;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_148);
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num1000000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num1000000.FieldName;
  if (this->Vis_Num1000000 != Collapsed) {
    this->Vis_Num1000000 = Collapsed;
    local_130 = iVar3;
    local_138 = FVar2;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_138);
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num10000000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num10000000.FieldName;
  if (this->Vis_Num10000000 != Collapsed) {
    this->Vis_Num10000000 = Collapsed;
    local_120 = iVar3;
    local_128 = FVar2;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_128);
  }
  iVar5 = DS_Util::GetDigitCount(param_1);
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num1.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num1.FieldName;
  if (((0 < iVar5) && (uVar7 = param_1 % 10, -1 < (int)uVar7)) &&
     ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum)) {
    if (this->Vis_Num1 != SelfHitTestInvisible) {
      this->Vis_Num1 = SelfHitTestInvisible;
      local_110 = iVar3;
      local_118 = FVar2;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_118);
    }
    uVar6 = 0;
    if ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->TextIconID_1).TextIconID =
         (longlong)
         *(int *)((this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data +
                 (longlong)(int)uVar7 * 4);
    local_100 = FFieldNotificationClassDescriptor::TextIconID_1.BitNumber;
    local_108 = FFieldNotificationClassDescriptor::TextIconID_1.FieldName;
    (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_108);
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num10.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num10.FieldName;
  if (1 < iVar5) {
    uVar7 = (param_1 / 10) % 10;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum)) {
      if (this->Vis_Num10 != SelfHitTestInvisible) {
        this->Vis_Num10 = SelfHitTestInvisible;
        local_f0 = iVar3;
        local_f8 = FVar2;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_f8);
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (this->TextIconID_10).TextIconID =
           (longlong)
           *(int *)((this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 4);
      local_e0 = FFieldNotificationClassDescriptor::TextIconID_10.BitNumber;
      local_e8 = FFieldNotificationClassDescriptor::TextIconID_10.FieldName;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_e8);
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num100.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num100.FieldName;
  if (2 < iVar5) {
    uVar7 = (param_1 / 100) % 10;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum)) {
      if (this->Vis_Num100 != SelfHitTestInvisible) {
        this->Vis_Num100 = SelfHitTestInvisible;
        local_d0 = iVar3;
        local_d8 = FVar2;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_d8);
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (this->TextIconID_100).TextIconID =
           (longlong)
           *(int *)((this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 4);
      local_c0 = FFieldNotificationClassDescriptor::TextIconID_100.BitNumber;
      local_c8 = FFieldNotificationClassDescriptor::TextIconID_100.FieldName;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_c8);
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num1000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num1000.FieldName;
  if (3 < iVar5) {
    uVar7 = (param_1 / 1000) % 10;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum)) {
      if (this->Vis_Num1000 != SelfHitTestInvisible) {
        this->Vis_Num1000 = SelfHitTestInvisible;
        local_b0 = iVar3;
        local_b8 = FVar2;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_b8);
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (this->TextIconID_1000).TextIconID =
           (longlong)
           *(int *)((this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 4);
      local_a0 = FFieldNotificationClassDescriptor::TextIconID_1000.BitNumber;
      local_a8 = FFieldNotificationClassDescriptor::TextIconID_1000.FieldName;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_a8);
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num10000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num10000.FieldName;
  if (4 < iVar5) {
    uVar7 = (param_1 / 10000) % 10;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum)) {
      if (this->Vis_Num10000 != SelfHitTestInvisible) {
        this->Vis_Num10000 = SelfHitTestInvisible;
        local_90 = iVar3;
        local_98 = FVar2;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_98);
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (this->TextIconID_10000).TextIconID =
           (longlong)
           *(int *)((this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 4);
      local_80 = FFieldNotificationClassDescriptor::TextIconID_10000.BitNumber;
      local_88 = FFieldNotificationClassDescriptor::TextIconID_10000.FieldName;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_88);
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num100000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num100000.FieldName;
  if (5 < iVar5) {
    uVar7 = (param_1 / 100000) % 10;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum)) {
      if (this->Vis_Num100000 != SelfHitTestInvisible) {
        this->Vis_Num100000 = SelfHitTestInvisible;
        local_70 = iVar3;
        local_78 = FVar2;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_78);
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (this->TextIconID_100000).TextIconID =
           (longlong)
           *(int *)((this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 4);
      local_60 = FFieldNotificationClassDescriptor::TextIconID_100000.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::TextIconID_100000.FieldName;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_68);
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num1000000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num1000000.FieldName;
  if (6 < iVar5) {
    uVar7 = (param_1 / 1000000) % 10;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum)) {
      if (this->Vis_Num1000000 != SelfHitTestInvisible) {
        this->Vis_Num1000000 = SelfHitTestInvisible;
        local_50 = iVar3;
        local_58 = FVar2;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_58);
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (this->TextIconID_1000000).TextIconID =
           (longlong)
           *(int *)((this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 4);
      local_40 = FFieldNotificationClassDescriptor::TextIconID_1000000.BitNumber;
      local_48 = FFieldNotificationClassDescriptor::TextIconID_1000000.FieldName;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_48);
    }
  }
  iVar3 = FFieldNotificationClassDescriptor::Vis_Num10000000.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Num10000000.FieldName;
  if (7 < iVar5) {
    uVar7 = (param_1 / 10000000) % 10;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum)) {
      if (this->Vis_Num10000000 != SelfHitTestInvisible) {
        this->Vis_Num10000000 = SelfHitTestInvisible;
        local_30 = iVar3;
        local_38 = FVar2;
        (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_38);
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (this->TextIconID_10000000).TextIconID =
           (longlong)
           *(int *)((this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 4);
      local_20 = FFieldNotificationClassDescriptor::TextIconID_10000000.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::TextIconID_10000000.FieldName;
      (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_28);
    }
  }
  return;
}

// SetTextPosition @ 14bfddd40

void __thiscall
UDS_VM_W_FloatingText::SetTextPosition(UDS_VM_W_FloatingText *this,TVector2<double> *param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  UDS_HudManager *this_00;
  float fVar3;
  FName local_28;
  int local_20;
  
  fVar3 = __real_3f800000;
  this_00 = UDS_HudManager::GetInst();
  if (this_00 != (UDS_HudManager *)0x0) {
    fVar3 = UDS_HudManager::GetUIScale(this_00);
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y * (__real_3ff0000000000000 / (double)fVar3);
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = (param_1->field0_0x0)._s_0.X * (__real_3ff0000000000000 / (double)fVar3);
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (this->FloatingTextScreenPosition).field0_0x0 = TVar1;
  local_20 = FFieldNotificationClassDescriptor::FloatingTextScreenPosition.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::FloatingTextScreenPosition.FieldName;
  (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_28);
  return;
}

// StartCloseAnimation @ 14bfde7d0

void __thiscall
UDS_VM_W_FloatingText::StartCloseAnimation(UDS_VM_W_FloatingText *this,FName param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_VM_W_FloatingText *local_res8;
  FName local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->EndAniName = param_1;
  (this->AnimationEvent).AnimationName = param_1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation,(FReadAccessScope *)&local_48);
  puVar1 = &(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if ((*(int *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 != 0) &&
     (*(longlong **)puVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)puVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      goto LAB_14bfde903;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  iStack_40 = 0;
  local_48 = (FName)OnValidAnimation;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation,(FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_FloatingText____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar3 + 4) = local_48;
    puVar3[5] = CONCAT44(uStack_3c,iStack_40);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
LAB_14bfde903:
  iStack_40 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_48 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(*(longlong *)&this->field_0x28 + 0x38))(&this->field_0x28,&local_48);
  return;
}

// UpdateAnimationDirection @ 14bfe1690

void __thiscall UDS_VM_W_FloatingText::UpdateAnimationDirection(UDS_VM_W_FloatingText *this)

{
  longlong lVar1;
  TVector2<double>_u_0 TVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  double dVar5;
  double dVar6;
  double dVar7;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  TVector2<double>_u_0 local_48;
  TVector2<double>_u_0 local_38;
  TVector<double>_u_0 local_28;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->TargetActor).WeakPtr);
  if (bVar3) {
    ADS_MainCharacter::GetMainPlayer();
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      this_00 = (FWeakObjectPtr *)
                (**(code **)(*(longlong *)&pUVar4[0x29].field_0x10 + 0x150))
                          (&pUVar4[0x29].field_0x10,local_res10);
      pUVar4 = FWeakObjectPtr::Get(this_00);
      lVar1 = *(longlong *)(pUVar4 + 0xb);
      local_28._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_28._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_28._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_28._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar1 != 0) {
        local_28._0_4_ = *(undefined4 *)(lVar1 + 0x210);
        local_28._4_4_ = *(undefined4 *)(lVar1 + 0x214);
        local_28._8_4_ = *(undefined4 *)(lVar1 + 0x218);
        local_28._12_4_ = *(undefined4 *)(lVar1 + 0x21c);
        local_28._s_0.Z = *(double *)(lVar1 + 0x220);
      }
      DS_Util::ProjectWorldToScreen
                ((TVector<double> *)&local_28._s_0,(TVector2<double> *)&local_38._s_0);
      pUVar4 = FWeakObjectPtr::Get(&(this->TargetActor).WeakPtr);
      lVar1 = *(longlong *)(pUVar4 + 0xb);
      local_28._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_28._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_28._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_28._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar1 != 0) {
        local_28._0_4_ = *(undefined4 *)(lVar1 + 0x210);
        local_28._4_4_ = *(undefined4 *)(lVar1 + 0x214);
        local_28._8_4_ = *(undefined4 *)(lVar1 + 0x218);
        local_28._12_4_ = *(undefined4 *)(lVar1 + 0x21c);
        local_28._s_0.Z = *(double *)(lVar1 + 0x220);
      }
      DS_Util::ProjectWorldToScreen
                ((TVector<double> *)&local_28._s_0,(TVector2<double> *)&local_48._s_0);
      dVar6 = local_48._s_0.X - local_38._s_0.X;
      dVar7 = local_48._s_0.Y - local_38._s_0.Y;
      dVar5 = dVar6 * dVar6 + dVar7 * dVar7;
      if (dVar5 <= __real_3e45798ee0000000) {
        dVar6 = 0.0;
        dVar7 = 0.0;
      }
      else {
        dVar5 = __real_3ff0000000000000 / SQRT(dVar5);
        dVar6 = dVar6 * dVar5;
        dVar7 = dVar7 * dVar5;
      }
      TVar2._8_4_ = SUB84(dVar7,0);
      TVar2._s_0.X = dVar6;
      TVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      (this->AnimationDirection).field0_0x0 = TVar2;
    }
  }
  return;
}

