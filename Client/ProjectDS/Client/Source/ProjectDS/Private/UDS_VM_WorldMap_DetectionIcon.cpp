// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b6fa1c0

UClass * __cdecl UDS_VM_WorldMap_DetectionIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_DetectionIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_DetectionIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_DetectionIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_DetectionIcon,0x480,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_DetectionIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_DetectionIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_DetectionIcon.InnerSingleton;
}

// UDS_VM_WorldMap_DetectionIcon @ 14b702800

UDS_VM_WorldMap_DetectionIcon * __thiscall
UDS_VM_WorldMap_DetectionIcon::UDS_VM_WorldMap_DetectionIcon
          (UDS_VM_WorldMap_DetectionIcon *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_DetectionIcon__6B_;
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
  this->EntityID = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_VM_WorldMap_DetectionIcon @ 14b7028b0

UDS_VM_WorldMap_DetectionIcon * __thiscall
UDS_VM_WorldMap_DetectionIcon::UDS_VM_WorldMap_DetectionIcon
          (UDS_VM_WorldMap_DetectionIcon *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_DetectionIcon__6B_;
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
  this->EntityID = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_VM_WorldMap_DetectionIcon @ 14b7039e0

void __thiscall
UDS_VM_WorldMap_DetectionIcon::~UDS_VM_WorldMap_DetectionIcon(UDS_VM_WorldMap_DetectionIcon *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_DetectionIcon__6B_;
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
  UDS_VM_WorldMap_Icon::~UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b706460

IClassDescriptor * __thiscall
UDS_VM_WorldMap_DetectionIcon::GetFieldNotificationDescriptor(UDS_VM_WorldMap_DetectionIcon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_DetectionIcon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b707490

UClass * __cdecl UDS_VM_WorldMap_DetectionIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_DetectionIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_DetectionIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_DetectionIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_DetectionIcon,0x480,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_DetectionIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_DetectionIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_DetectionIcon.InnerSingleton;
}

// GetTickableTickType @ 14b707570

ETickableTickType __thiscall
UDS_VM_WorldMap_DetectionIcon::GetTickableTickType(UDS_VM_WorldMap_DetectionIcon *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_DetectionIcon @ 14b7077a0

void __cdecl UDS_VM_WorldMap_DetectionIcon::StaticRegisterNativesUDS_VM_WorldMap_DetectionIcon(void)

{
  return;
}

// BindModel @ 14c0049d0

void __thiscall UDS_VM_WorldMap_DetectionIcon::BindModel(UDS_VM_WorldMap_DetectionIcon *this)

{
  UDS_WorldMapEvent *pUVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  UDS_HudManager *pUVar2;
  ulong64 local_res10 [2];
  
  UDS_VM_WorldMap_Icon::BindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_WorldMap_DetectionIcon>
              (&pUVar1->DeleteDetectionStuffDelegate,this);
    local_res10[0] = this->EntityID;
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<__int64_const_&>
                        ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar1->DeleteDetectionStuffDelegate).Subscriptions,
                         (int)(local_res10[0] >> 0x20) * 0x17 + (int)local_res10[0],
                         (long64 *)local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_DetectionIcon>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               this_00,(UDS_VM_WorldMap_DetectionIcon *)(local_res10 + 1),(pmf_58852102 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCloseInitDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_DetectionIcon>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCloseInitDelegate,(UDS_VM_WorldMap_DetectionIcon *)local_res10,
               (pmf_58852102 *)this);
  }
  pUVar2 = UDS_HudManager::GetInst();
  if (pUVar2 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_DetectionIcon>
              (&pUVar2->OnHudShowDelegate,(UDS_VM_WorldMap_DetectionIcon *)local_res10,
               (pmf_4a145068 *)this);
  }
  return;
}

// DeleteDetectionIcon @ 14c011680

void __thiscall
UDS_VM_WorldMap_DetectionIcon::DeleteDetectionIcon(UDS_VM_WorldMap_DetectionIcon *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->Widget,(void *)0x0);
  if (!bVar1) {
    (**(code **)(this->_padding_ + 0x2b0))(this);
    pUVar2 = FWeakObjectPtr::Get(&(this->Widget).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2);
  }
  return;
}

// InitViewModel @ 14c020590

void __thiscall UDS_VM_WorldMap_DetectionIcon::InitViewModel(UDS_VM_WorldMap_DetectionIcon *this)

{
  return;
}

// IsUpdate @ 14c023a40

bool __thiscall UDS_VM_WorldMap_DetectionIcon::IsUpdate(UDS_VM_WorldMap_DetectionIcon *this)

{
  if ((char)this->_padding_ == '\0') {
    return (bool)(char)this->_padding_;
  }
  return false;
}

// OnCloseInit @ 14c028ac0

void __thiscall UDS_VM_WorldMap_DetectionIcon::OnCloseInit(UDS_VM_WorldMap_DetectionIcon *this)

{
  UDS_VM_WorldMap_Icon::OnCloseInit((UDS_VM_WorldMap_Icon *)this);
  this->_padding_ = 0;
  return;
}

// OnHudShowEvent @ 14c02a900

void __thiscall
UDS_VM_WorldMap_DetectionIcon::OnHudShowEvent
          (UDS_VM_WorldMap_DetectionIcon *this,EDS_WindowLayerGroupType *param_1)

{
  *(bool *)&this->_padding_ = *param_1 < Hud;
  return;
}

// OnSetViewModel @ 14c0386e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_DetectionIcon::OnSetViewModel
          (UDS_VM_WorldMap_DetectionIcon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  undefined8 *puVar11;
  FName *pFVar12;
  double dVar13;
  undefined1 auStackY_258 [32];
  TSharedPtr<FDS_ViewModelContext_WorldMapDetectionIconInfo,1> local_228;
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  UDS_GameInstance *local_208 [2];
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  TVector2<double>_u_0 local_1b8;
  undefined1 local_1a8 [8];
  FName local_1a0;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_198;
  TVector2<double>_u_0 local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1d8.Object = param_1->Object;
  local_1d8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_WorldMap_Icon::OnSetViewModel((UDS_VM_WorldMap_Icon *)this,&local_1d8);
  local_1c8.Object = param_1->Object;
  local_1c8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapDetectionIconInfo>(&local_228,&local_1c8);
  if (local_228.Object == (FDS_ViewModelContext_WorldMapDetectionIconInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
  }
  else {
    this->_padding_ = (local_228.Object)->_padding_;
    lVar5 = (local_228.Object)->_padding_;
    this->_padding_ = (local_228.Object)->_padding_;
    this->_padding_ = lVar5;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_228.Object)->_padding_ + 4);
    *(int *)&this->_padding_ = (int)(local_228.Object)->_padding_;
    this->EntityID = (local_228.Object)->EntityID;
    lVar5 = (local_228.Object)->_padding_;
    this->_padding_ = (local_228.Object)->_padding_;
    this->_padding_ = lVar5;
    lVar5 = (local_228.Object)->_padding_;
    this->_padding_ = (local_228.Object)->_padding_;
    this->_padding_ = lVar5;
    (this->Widget).WeakPtr = (FWeakObjectPtr)(local_228.Object)->_padding_;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_228.Object)->_padding_);
    pTVar8 = MakeContext<FDS_ViewModelConext_WorldMapIconToolTip>(&local_198);
    plVar1 = &this->_padding_;
    if ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)plVar1 != pTVar8) {
      *plVar1 = (longlong)pTVar8->Object;
      pTVar8->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar8->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    if (*plVar1 != 0) {
      *(undefined4 *)(*plVar1 + 0x18) = 0x1b1;
      lVar5 = this->_padding_;
      if ((*plVar1 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(*plVar1 + 0x20) = (int)lVar5;
      if ((local_228.Object == (FDS_ViewModelContext_WorldMapDetectionIconInfo *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar6 = (local_228.Object)->IsStuff;
      if ((*plVar1 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(bool *)(*plVar1 + 0x44) = bVar6;
      if ((local_228.Object == (FDS_ViewModelContext_WorldMapDetectionIconInfo *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (local_228.Object)->DetectionTableID;
      if ((*plVar1 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(*plVar1 + 0x40) = iVar2;
    }
    local_208[0] = UDS_GameInstance::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_208[0] != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_208[0]);
    }
    local_218.ObjectIndex = 0;
    local_218.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_208[0] != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_208[0]);
    }
    FWeakObjectPtr::operator=(&local_218,(FObjectPtr)local_208);
    bVar6 = FWeakObjectPtr::IsValid(&local_218);
    if (bVar6) {
      if ((char)this->_padding_ == '\0') {
        *(undefined1 *)&this->_padding_ = 1;
      }
      ADS_MainCharacter::GetMainPlayer();
      bVar6 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_210,(void *)0x0)
      ;
      if (!bVar6) {
        pUVar10 = FWeakObjectPtr::Get(&local_210);
        puVar11 = (undefined8 *)
                  (**(code **)(*(longlong *)&pUVar10[0x29].field_0x10 + 0x78))
                            (&pUVar10[0x29].field_0x10,local_1a8);
        *(undefined8 *)((longlong)&this->_padding_ + 4) = *puVar11;
      }
      dVar13 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
      dVar4 = ((double)this->_padding_ - (double)this->_padding_) * dVar13 *
              (double)*(float *)&this->_padding_;
      dVar13 = ((double)this->_padding_ - (double)this->_padding_) * dVar13 *
               (double)*(float *)&this->_padding_;
      this->_padding_ = (longlong)dVar4;
      this->_padding_ = (longlong)dVar13;
      UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
      UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
      pFVar12 = ::FName::FName(&local_1a0,"Detection_Anim");
      (this->AnimationEvent).AnimationName = *pFVar12;
      (this->AnimationEvent).AnimationEventType = PlayForward;
      (this->AnimationEvent).NumberOfLoops = 3;
      local_1f0 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_1f8 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
      local_188 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_1b8._s_0.X = dVar4;
      local_1b8._s_0.Y = dVar13;
      UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
                ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
                 (TVector2<double> *)&local_188._s_0,(TVector2<double> *)&local_1b8._s_0);
      local_1e0 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.BitNumber;
      local_1e8 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_VM_WorldMap_DetectionIcon::OnSetViewModel",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_178.Ptr,0x8c,L"gameinstance is not valid.");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c03af00

void __thiscall
UDS_VM_WorldMap_DetectionIcon::OnUpdate(UDS_VM_WorldMap_DetectionIcon *this,float param_1)

{
  bool bVar1;
  UDS_MovementCore *this_00;
  double dVar2;
  TVector2<double>_u_0 local_48;
  TVector2<double>_u_0 local_38;
  TVector<double>_u_0 local_28;
  
  UDS_VM_WorldMap_Icon::OnUpdate((UDS_VM_WorldMap_Icon *)this,param_1);
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_MovementCore *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_28._s_0);
    dVar2 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    this->_padding_ = (longlong)local_28._s_0.X;
    this->_padding_ = (longlong)local_28._s_0.Y;
    local_48._s_0.X =
         (local_28._s_0.X - (double)this->_padding_) * dVar2 * (double)*(float *)&this->_padding_;
    local_38 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_48._s_0.Y =
         (local_28._s_0.Y - (double)this->_padding_) * dVar2 * (double)*(float *)&this->_padding_;
    UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
              ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
               (TVector2<double> *)&local_38._s_0,(TVector2<double> *)&local_48._s_0);
  }
  return;
}

// PlayAnimation @ 14c03d4d0

void __thiscall UDS_VM_WorldMap_DetectionIcon::PlayAnimation(UDS_VM_WorldMap_DetectionIcon *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Detection_Anim");
  (this->AnimationEvent).AnimationName = *pFVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  (this->AnimationEvent).NumberOfLoops = 3;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14c0494a0

void __thiscall UDS_VM_WorldMap_DetectionIcon::UnbindModel(UDS_VM_WorldMap_DetectionIcon *this)

{
  UDS_WorldMapEvent *pUVar1;
  UDS_HudManager *pUVar2;
  
  UDS_VM_WorldMap_Icon::UnbindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_WorldMap_DetectionIcon>
              (&pUVar1->DeleteDetectionStuffDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCloseInitDelegate,
               this);
  }
  pUVar2 = UDS_HudManager::GetInst();
  if (pUVar2 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnHudShowDelegate,this
              );
  }
  return;
}

