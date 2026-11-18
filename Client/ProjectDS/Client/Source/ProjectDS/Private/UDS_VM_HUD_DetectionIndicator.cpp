// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetAnimationEndEvent_WrapperImpl @ 14b668860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_HUD_DetectionIndicator::SetAnimationEndEvent_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  int iVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  FName aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (*(char *)((longlong)param_2 + 0xd) == '\x02') {
    pFVar3 = ::FName::FName(aFStack_148,L"Close_Anim");
    iVar2 = ::FName::Compare(param_2,pFVar3);
    if (iVar2 == 0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x20);
      if (plVar1 != (longlong *)0x0) {
        pUVar4 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
        iVar2 = (int)pUVar4->_padding_;
        if ((iVar2 <= *(int *)(plVar1[2] + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar1[2] + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar4->_padding_)) {
          (**(code **)(*plVar1 + 0x2d0))(plVar1);
          return;
        }
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_HUD_DetectionIndicator::OnAnimationEndEvent",0x32,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_138.Ptr,0xbc,L"Widget is nullptr");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
  }
  return;
}

// StaticClass @ 14b668870

UClass * __cdecl UDS_VM_HUD_DetectionIndicator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_DetectionIndicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_DetectionIndicator",
               &Z_Registration_Info_UClass_UDS_VM_HUD_DetectionIndicator.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_DetectionIndicator,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_DetectionIndicator>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_DetectionIndicator>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_DetectionIndicator.InnerSingleton;
}

// UDS_VM_HUD_DetectionIndicator @ 14b66d880

UDS_VM_HUD_DetectionIndicator * __thiscall
UDS_VM_HUD_DetectionIndicator::UDS_VM_HUD_DetectionIndicator
          (UDS_VM_HUD_DetectionIndicator *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_DetectionIndicator__6B_;
  this->ArrowAngle = 0.0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEndEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEndEvent).AnimationName.Number = 0;
  (this->AnimationEndEvent).AnimationPlayTime = 0.0;
  (this->AnimationEndEvent).AnimationEventType = None;
  (this->AnimationEndEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->TargetEntityID = 0;
  this->LifeTime = 0.0;
  this->IsRemoved = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEndEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_HUD_DetectionIndicator @ 14b66d960

UDS_VM_HUD_DetectionIndicator * __thiscall
UDS_VM_HUD_DetectionIndicator::UDS_VM_HUD_DetectionIndicator
          (UDS_VM_HUD_DetectionIndicator *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_DetectionIndicator__6B_;
  this->ArrowAngle = 0.0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationEndEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEndEvent).AnimationName.Number = 0;
  (this->AnimationEndEvent).AnimationPlayTime = 0.0;
  (this->AnimationEndEvent).AnimationEventType = None;
  (this->AnimationEndEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->TargetEntityID = 0;
  this->LifeTime = 0.0;
  this->IsRemoved = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEndEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_HUD_DetectionIndicator @ 14b66f1d0

void __thiscall
UDS_VM_HUD_DetectionIndicator::~UDS_VM_HUD_DetectionIndicator(UDS_VM_HUD_DetectionIndicator *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_DetectionIndicator__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEndEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEndEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEndEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEndEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEndEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEndEvent).Delegate_AnimationFinish);
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

// GetFieldNotificationDescriptor @ 14b6719d0

IClassDescriptor * __thiscall
UDS_VM_HUD_DetectionIndicator::GetFieldNotificationDescriptor(UDS_VM_HUD_DetectionIndicator *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_DetectionIndicator::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b672520

UClass * __cdecl UDS_VM_HUD_DetectionIndicator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_DetectionIndicator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_DetectionIndicator",
               &Z_Registration_Info_UClass_UDS_VM_HUD_DetectionIndicator.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_DetectionIndicator,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_DetectionIndicator>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_DetectionIndicator>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_DetectionIndicator.InnerSingleton;
}

// GetTickableTickType @ 14b672a70

ETickableTickType __thiscall
UDS_VM_HUD_DetectionIndicator::GetTickableTickType(UDS_VM_HUD_DetectionIndicator *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_HUD_DetectionIndicator @ 14b672bb0

void __cdecl UDS_VM_HUD_DetectionIndicator::StaticRegisterNativesUDS_VM_HUD_DetectionIndicator(void)

{
  return;
}

// BindModel @ 14be76470

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_HUD_DetectionIndicator::BindModel(UDS_VM_HUD_DetectionIndicator *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// IsUpdate @ 14be90130

bool __thiscall UDS_VM_HUD_DetectionIndicator::IsUpdate(UDS_VM_HUD_DetectionIndicator *this)

{
  if ((this->IsRemoved != true) && (0.0 < this->LifeTime)) {
    return this->TargetEntityID != 0;
  }
  return false;
}

// OnAnimationEndEvent @ 14be90240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_DetectionIndicator::OnAnimationEndEvent
          (UDS_VM_HUD_DetectionIndicator *this,FDS_WidgetAnimationEventField *param_1)

{
  longlong *plVar1;
  int iVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1->AnimationStateType == Finished) {
    pFVar3 = ::FName::FName(local_148,L"Close_Anim");
    iVar2 = ::FName::Compare(&param_1->AnimationName,pFVar3);
    if (iVar2 == 0) {
      plVar1 = (longlong *)this->_padding_;
      if (plVar1 != (longlong *)0x0) {
        pUVar4 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
        iVar2 = (int)pUVar4->_padding_;
        if ((iVar2 <= *(int *)(plVar1[2] + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar1[2] + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar4->_padding_)) {
          (**(code **)(*plVar1 + 0x2d0))(plVar1);
          return;
        }
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_HUD_DetectionIndicator::OnAnimationEndEvent",0x32,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0xbc,L"Widget is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OnRemoveVM @ 14be9be70

void __thiscall UDS_VM_HUD_DetectionIndicator::OnRemoveVM(UDS_VM_HUD_DetectionIndicator *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  if (this->IsRemoved != true) {
    this->IsRemoved = true;
    pFVar1 = ::FName::FName(local_res8,L"Close_Anim");
    (this->AnimationEvent).AnimationName = *pFVar1;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    (this->AnimationEvent).AnimationStateType = Started;
    (this->AnimationEvent).AnimationPlayTime = 0.0;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bea25a0

void __thiscall
UDS_VM_HUD_DetectionIndicator::OnSetViewModel
          (UDS_VM_HUD_DetectionIndicator *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  TSharedPtr<FDS_ViewModelContext_HUD_DetectionIndicator,1> local_28;
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
  SafeCast<FDS_ViewModelContext_HUD_DetectionIndicator>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_HUD_DetectionIndicator *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_HUD_DetectionIndicator *)0x0) {
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
    this->TargetEntityID = (local_28.Object)->TargetEntityID;
    fVar4 = DS_CommonDataHelper::HudIndicatorShowTime();
    this->LifeTime = fVar4;
    SetVisibilityIndicator(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bea7490

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_DetectionIndicator::OnUpdate(UDS_VM_HUD_DetectionIndicator *this,float param_1)

{
  int iVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_MovementCore *pUVar4;
  ADS_MainCharacter *this_00;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_01;
  UDS_MainCameraComponent *this_02;
  TMatrix<double> *this_03;
  float fVar5;
  float fVar6;
  undefined1 auStack_158 [32];
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  TVector<double>_u_0 local_118;
  UObject *local_f8;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TRotator<double> local_c0;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  fVar6 = 0.0;
  fVar5 = this->LifeTime - param_1;
  this->LifeTime = fVar5;
  if ((fVar5 <= 0.0) ||
     (pFVar3 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID), pFVar3 == (FDS_EntityBase *)0x0
     )) {
    OnRemoveVM(this);
    return;
  }
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_MovementCore::GetMovementCore((ulong64)&local_130);
  bVar2 = FWeakObjectPtr::IsValid(&local_130);
  if (!bVar2) {
    return;
  }
  pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_130);
  UDS_MovementCore::GetActorFootLocation(pUVar4,(TVector<double> *)&local_d8._s_0);
  UDS_MovementCore::GetMovementCore((ulong64)&local_128);
  bVar2 = FWeakObjectPtr::IsValid(&local_128);
  if (!bVar2) {
    return;
  }
  pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_128);
  UDS_MovementCore::GetActorFootLocation(pUVar4,(TVector<double> *)&local_f0._s_0);
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_120,(void *)0x0);
  if (!bVar2) {
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_120);
    this_01 = ADS_MainCharacter::GetFollowCamera(this_00);
    local_f8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    local_138.ObjectIndex = 0;
    local_138.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_f8);
    bVar2 = FWeakObjectPtr::IsValid(&local_138);
    if (bVar2) {
      this_02 = (UDS_MainCameraComponent *)FWeakObjectPtr::Get(&local_138);
      fVar6 = UDS_MainCameraComponent::GetCameraYaw(this_02);
    }
  }
  local_118._s_0.X = local_f0._s_0.X - local_d8._s_0.X;
  local_118._s_0.Y = local_f0._s_0.Y - local_d8._s_0.Y;
  local_118._s_0.Z = local_f0._s_0.Z - local_d8._s_0.Z;
  this_03 = UE::Math::TRotationMatrix<double>::MakeFromX
                      (&local_a8,(TVector<double> *)&local_118._s_0);
  UE::Math::TMatrix<double>::Rotator(this_03,&local_c0);
  iVar1 = FFieldNotificationClassDescriptor::ArrowAngle.BitNumber;
  local_118._s_0.X = (double)FFieldNotificationClassDescriptor::ArrowAngle.FieldName;
  if ((float)(local_c0.Yaw - (double)fVar6) == this->ArrowAngle) {
    return;
  }
  this->ArrowAngle = (float)(local_c0.Yaw - (double)fVar6);
  local_118._8_4_ = iVar1;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
  return;
}

// SetVisibilityIndicator @ 14bebaa30

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
UDS_VM_HUD_DetectionIndicator::SetVisibilityIndicator(UDS_VM_HUD_DetectionIndicator *this)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  FDS_EntityBase *this_00;
  FName *pFVar4;
  FName local_res8;
  FName local_18;
  int local_10;
  
  this_00 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  iVar2 = FFieldNotificationClassDescriptor::VisiblityStuffGather.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VisiblityStuffGather.FieldName;
  if (this_00 != (FDS_EntityBase *)0x0) {
    if (this->VisiblityStuffGather != Collapsed) {
      this->VisiblityStuffGather = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::VisiblityGate.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::VisiblityGate.FieldName;
    if (this->VisiblityGate != Collapsed) {
      this->VisiblityGate = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::VisiblityBreach.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::VisiblityBreach.FieldName;
    if (this->VisiblityBreach != Collapsed) {
      this->VisiblityBreach = Collapsed;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::VisiblityStuffGather.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::VisiblityStuffGather.FieldName;
    if (this_00->EntityType == StuffGather) {
      if (this->VisiblityStuffGather != SelfHitTestInvisible) {
        this->VisiblityStuffGather = SelfHitTestInvisible;
        local_18 = FVar1;
        local_10 = iVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      pFVar4 = ::FName::FName(&local_res8,L"Open_Gathering_Anim");
      (this->AnimationEvent).AnimationName = *pFVar4;
      (this->AnimationEvent).AnimationEventType = PlayForward;
      (this->AnimationEvent).AnimationStateType = Started;
      (this->AnimationEvent).AnimationPlayTime = 0.0;
      local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    else if (this_00->EntityType == StuffPortal) {
      bVar3 = FDS_EntityBase::IsBreach(this_00);
      iVar2 = FFieldNotificationClassDescriptor::VisiblityBreach.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::VisiblityBreach.FieldName;
      if (bVar3) {
        if (this->VisiblityBreach != SelfHitTestInvisible) {
          this->VisiblityBreach = SelfHitTestInvisible;
          local_10 = iVar2;
          local_18 = FVar1;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        }
        pFVar4 = ::FName::FName(&local_res8,L"Open_Breach_Anim");
        StartAnimaion(this,pFVar4);
      }
      else {
        bVar3 = FDS_EntityBase::IsGate(this_00);
        iVar2 = FFieldNotificationClassDescriptor::VisiblityGate.BitNumber;
        FVar1 = FFieldNotificationClassDescriptor::VisiblityGate.FieldName;
        if (bVar3) {
          if (this->VisiblityGate != SelfHitTestInvisible) {
            this->VisiblityGate = SelfHitTestInvisible;
            local_10 = iVar2;
            local_18 = FVar1;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
          }
          pFVar4 = ::FName::FName(&local_res8,L"Open_Gate_Anim");
          StartAnimaion(this,pFVar4);
        }
      }
    }
  }
  return;
}

// SetVisiblityBreach @ 14bebaca0

void __thiscall
UDS_VM_HUD_DetectionIndicator::SetVisiblityBreach
          (UDS_VM_HUD_DetectionIndicator *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisiblityBreach.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisiblityBreach.FieldName;
  if (this->VisiblityBreach != *param_1) {
    this->VisiblityBreach = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisiblityGate @ 14bebacf0

void __thiscall
UDS_VM_HUD_DetectionIndicator::SetVisiblityGate
          (UDS_VM_HUD_DetectionIndicator *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisiblityGate.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisiblityGate.FieldName;
  if (this->VisiblityGate != *param_1) {
    this->VisiblityGate = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisiblityStuffGather @ 14bebad40

void __thiscall
UDS_VM_HUD_DetectionIndicator::SetVisiblityStuffGather
          (UDS_VM_HUD_DetectionIndicator *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisiblityStuffGather.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisiblityStuffGather.FieldName;
  if (this->VisiblityStuffGather != *param_1) {
    this->VisiblityStuffGather = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// StartAnimaion @ 14bebafb0

void __thiscall
UDS_VM_HUD_DetectionIndicator::StartAnimaion(UDS_VM_HUD_DetectionIndicator *this,FName *param_1)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = *param_1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  (this->AnimationEvent).AnimationStateType = Started;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc330

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_HUD_DetectionIndicator::UnbindModel(UDS_VM_HUD_DetectionIndicator *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

