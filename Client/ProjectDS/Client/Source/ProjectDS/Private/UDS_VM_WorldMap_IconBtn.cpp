// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b709480

UClass * __cdecl UDS_VM_WorldMap_IconBtn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IconBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IconBtn",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IconBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IconBtn,0x430,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_IconBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IconBtn>,local_res8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IconBtn.InnerSingleton;
}

// UDS_VM_WorldMap_IconBtn @ 14b7114c0

UDS_VM_WorldMap_IconBtn * __thiscall
UDS_VM_WorldMap_IconBtn::UDS_VM_WorldMap_IconBtn
          (UDS_VM_WorldMap_IconBtn *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IconBtn__6B_;
  (this->TimerHandle_CallFunc).Handle = 0;
  this->IconID = 0;
  this->CanvasPanel = (UCanvasPanelSlot *)0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->SpawnTableID = 0;
  this->NpcBaseTableID = 0;
  this->OrthoWidth = 0.0;
  this->TextureSize = 0.0;
  this->IsWandering = false;
  (this->SpawnGlobalPosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UDS_VM_WorldMap_IconBtn @ 14b711550

UDS_VM_WorldMap_IconBtn * __thiscall
UDS_VM_WorldMap_IconBtn::UDS_VM_WorldMap_IconBtn
          (UDS_VM_WorldMap_IconBtn *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IconBtn__6B_;
  (this->TimerHandle_CallFunc).Handle = 0;
  this->IconID = 0;
  this->CanvasPanel = (UCanvasPanelSlot *)0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->SpawnTableID = 0;
  this->NpcBaseTableID = 0;
  this->OrthoWidth = 0.0;
  this->TextureSize = 0.0;
  this->IsWandering = false;
  (this->SpawnGlobalPosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_VM_WorldMap_IconBtn @ 14b713450

void __thiscall UDS_VM_WorldMap_IconBtn::~UDS_VM_WorldMap_IconBtn(UDS_VM_WorldMap_IconBtn *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IconBtn__6B_;
  UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716bb0

IClassDescriptor * __thiscall
UDS_VM_WorldMap_IconBtn::GetFieldNotificationDescriptor(UDS_VM_WorldMap_IconBtn *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_IconBtn::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717d10

UClass * __cdecl UDS_VM_WorldMap_IconBtn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IconBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IconBtn",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IconBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IconBtn,0x430,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_IconBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IconBtn>,local_res8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IconBtn.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMap_IconBtn @ 14b718a80

void __cdecl UDS_VM_WorldMap_IconBtn::StaticRegisterNativesUDS_VM_WorldMap_IconBtn(void)

{
  return;
}

// BindModel @ 14c004e70

void __thiscall UDS_VM_WorldMap_IconBtn::BindModel(UDS_VM_WorldMap_IconBtn *this)

{
  int iVar1;
  UDS_WorldMapEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar3;
  longlong alStackX_10 [2];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMapIndexBase>
              (&pUVar2->ChangedPanelTranslationDelegate,(UDS_VM_WorldMapIndexBase *)this);
    FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>::
    Remove<UDS_VM_WorldMapIndexBase>
              (&pUVar2->ZoomStepChangeDelegate,(UDS_VM_WorldMapIndexBase *)this);
    FDS_FilteredEventDelegate<int_const_,int>::Remove<UDS_VM_WorldMapIndexBase>
              (&pUVar2->CurIndexFilterDelegate,(UDS_VM_WorldMapIndexBase *)this);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       (&(pUVar2->ZoomStepChangeDelegate).Subscriptions,(uint)this->_padding_,
                        (int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMapIndexBase>
              (pTVar3,(UDS_VM_WorldMapIndexBase *)alStackX_10,(pmf_2be85d3a *)this);
    iVar1 = (int)this->_padding_;
    alStackX_10[0] = (longlong)iVar1;
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<__int64_const_&>
                       ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->ChangedPanelTranslationDelegate).Subscriptions,
                        (iVar1 >> 0x1f) * 0x17 + iVar1,alStackX_10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMapIndexBase>
              ((TMulticastDelegateRegistration<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar3,(UDS_VM_WorldMapIndexBase *)(alStackX_10 + 1),(pmf_133194e0 *)this);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->CurIndexFilterDelegate).Subscriptions,(uint)this->_padding_,
                        (int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMapIndexBase>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               pTVar3,(UDS_VM_WorldMapIndexBase *)alStackX_10,(pmf_d3e6ac12 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->MapIndexIconVisibilityDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMapIndexBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->MapIndexIconVisibilityDelegate,(UDS_VM_WorldMapIndexBase *)alStackX_10,
               (pmf_11e4fb90 *)this);
  }
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_WorldMapIndexBase>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_VM_WorldMapIndexBase *)alStackX_10,(pmf_e6ca37e6 *)this);
  return;
}

// InitViewModel @ 14c0205c0

void __thiscall UDS_VM_WorldMap_IconBtn::InitViewModel(UDS_VM_WorldMap_IconBtn *this)

{
  return;
}

// OnCloseInit @ 14c028b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_IconBtn::OnCloseInit(UDS_VM_WorldMap_IconBtn *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  if ((this->TimerHandle_CallFunc).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->TimerHandle_CallFunc);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimerHandle_CallFunc).Handle);
    }
    (this->TimerHandle_CallFunc).Handle = 0;
    this->CanvasPanel = (UCanvasPanelSlot *)0x0;
    return;
  }
  this->CanvasPanel = (UCanvasPanelSlot *)0x0;
  return;
}

// OnSetViewModel @ 14c039500

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
UDS_VM_WorldMap_IconBtn::OnSetViewModel
          (UDS_VM_WorldMap_IconBtn *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  double dVar2;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TVector2<double>_u_0 local_18;
  
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_WorldMapIndexBase::OnSetViewModel((UDS_VM_WorldMapIndexBase *)this,&local_38);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapIconInfo>(&local_48,&local_28);
  if (local_48.Object != (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
    this->CanvasPanel = (UCanvasPanelSlot *)(local_48.Object)->_padding_;
    dVar2 = ((local_48.Object)->MapStartPos).field0_0x0._s_0.Y;
    (this->MapStartPos).field0_0x0._s_0.X = ((local_48.Object)->MapStartPos).field0_0x0._s_0.X;
    (this->MapStartPos).field0_0x0._s_0.Y = dVar2;
    this->TextureSize = *(float *)((longlong)&(local_48.Object)->_padding_ + 4);
    this->IconID = (local_48.Object)->IconID;
    this->IsWandering = (local_48.Object)->IsWandering;
    this->SpawnTableID = (int)(local_48.Object)->SpawnTableID;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_48.Object)->_padding_);
    if ((this->TimerHandle_CallFunc).Handle != 0) {
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar1 = FTimerManager::FindTimer(this_00,&this->TimerHandle_CallFunc);
      if (pFVar1 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimerHandle_CallFunc).Handle)
        ;
      }
      (this->TimerHandle_CallFunc).Handle = 0;
    }
    UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
    UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
    if (this->CanvasPanel != (UCanvasPanelSlot *)0x0) {
      dVar2 = __real_3ff0000000000000 / (double)this->OrthoWidth;
      local_18._s_0.X =
           ((this->SpawnGlobalPosition).field0_0x0._s_0.X - (this->MapStartPos).field0_0x0._s_0.X) *
           dVar2 * (double)this->TextureSize;
      local_18._s_0.Y =
           ((this->SpawnGlobalPosition).field0_0x0._s_0.Y - (this->MapStartPos).field0_0x0._s_0.Y) *
           dVar2 * (double)this->TextureSize;
      UCanvasPanelSlot::SetPosition(this->CanvasPanel,(TVector2<double> *)&local_18._s_0);
    }
    local_50 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIconPosition @ 14c0416e0

void __thiscall
UDS_VM_WorldMap_IconBtn::SetIconPosition(UDS_VM_WorldMap_IconBtn *this,TVector2<double> *param_1)

{
  double dVar1;
  TVector2<double>_u_0 local_18;
  
  if (this->CanvasPanel != (UCanvasPanelSlot *)0x0) {
    dVar1 = __real_3ff0000000000000 / (double)this->OrthoWidth;
    local_18._s_0.Y =
         ((param_1->field0_0x0)._s_0.Y - (this->MapStartPos).field0_0x0._s_0.Y) * dVar1 *
         (double)this->TextureSize;
    local_18._s_0.X =
         ((param_1->field0_0x0)._s_0.X - (this->MapStartPos).field0_0x0._s_0.X) * dVar1 *
         (double)this->TextureSize;
    UCanvasPanelSlot::SetPosition(this->CanvasPanel,(TVector2<double> *)&local_18._s_0);
  }
  return;
}

// UnbindModel @ 14c049620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_IconBtn::UnbindModel(UDS_VM_WorldMap_IconBtn *this)

{
  UDS_WorldMapEvent *pUVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMapIndexBase>
              (&pUVar1->ChangedPanelTranslationDelegate,(UDS_VM_WorldMapIndexBase *)this);
    FDS_FilteredEventDelegate<int_const_,enum_EDS_WorldMapZoomStep>::
    Remove<UDS_VM_WorldMapIndexBase>
              (&pUVar1->ZoomStepChangeDelegate,(UDS_VM_WorldMapIndexBase *)this);
    FDS_FilteredEventDelegate<int_const_,int>::Remove<UDS_VM_WorldMapIndexBase>
              (&pUVar1->CurIndexFilterDelegate,(UDS_VM_WorldMapIndexBase *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->MapIndexIconVisibilityDelegate,this);
  }
  if (this->_padding_ != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,(FTimerHandle *)&this->_padding_);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)this->_padding_);
    }
    this->_padding_ = 0;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  return;
}

