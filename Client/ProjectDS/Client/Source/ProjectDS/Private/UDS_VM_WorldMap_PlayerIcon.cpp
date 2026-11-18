// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b70a9e0

UClass * __cdecl UDS_VM_WorldMap_PlayerIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_PlayerIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_PlayerIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_PlayerIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_PlayerIcon,0x470,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_PlayerIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_PlayerIcon>,local_res8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_PlayerIcon.InnerSingleton;
}

// UDS_VM_WorldMap_PlayerIcon @ 14b7125c0

UDS_VM_WorldMap_PlayerIcon * __thiscall
UDS_VM_WorldMap_PlayerIcon::UDS_VM_WorldMap_PlayerIcon
          (UDS_VM_WorldMap_PlayerIcon *this,FVTableHelper *param_1)

{
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_PlayerIcon__6B_;
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
  this->PlayerAngle = 0.0;
  this->PlayerCanvasPanel = (UCanvasPanelSlot *)0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ReferencePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->OwnerCameraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_WorldMap_PlayerIcon @ 14b712690

UDS_VM_WorldMap_PlayerIcon * __thiscall
UDS_VM_WorldMap_PlayerIcon::UDS_VM_WorldMap_PlayerIcon
          (UDS_VM_WorldMap_PlayerIcon *this,FObjectInitializer *param_1)

{
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_PlayerIcon__6B_;
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
  this->PlayerAngle = 0.0;
  this->PlayerCanvasPanel = (UCanvasPanelSlot *)0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ReferencePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->OwnerCameraComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_WorldMap_PlayerIcon @ 14b713ab0

void __thiscall
UDS_VM_WorldMap_PlayerIcon::~UDS_VM_WorldMap_PlayerIcon(UDS_VM_WorldMap_PlayerIcon *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_PlayerIcon__6B_;
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
  UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716f30

IClassDescriptor * __thiscall
UDS_VM_WorldMap_PlayerIcon::GetFieldNotificationDescriptor(UDS_VM_WorldMap_PlayerIcon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_PlayerIcon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b718310

UClass * __cdecl UDS_VM_WorldMap_PlayerIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_PlayerIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_PlayerIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_PlayerIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_PlayerIcon,0x470,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_PlayerIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_PlayerIcon>,local_res8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_PlayerIcon.InnerSingleton;
}

// GetTickableTickType @ 14b718810

ETickableTickType __thiscall
UDS_VM_WorldMap_PlayerIcon::GetTickableTickType(UDS_VM_WorldMap_PlayerIcon *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_PlayerIcon @ 14b718b00

void __cdecl UDS_VM_WorldMap_PlayerIcon::StaticRegisterNativesUDS_VM_WorldMap_PlayerIcon(void)

{
  return;
}

// BindModel @ 14c06cee0

void __thiscall UDS_VM_WorldMap_PlayerIcon::BindModel(UDS_VM_WorldMap_PlayerIcon *this)

{
  UDS_WorldMapEvent *pUVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar2;
  
  UDS_VM_WorldMapIndexBase::BindModel((UDS_VM_WorldMapIndexBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_PlayerIcon>(&pUVar1->ChangedMapScaleDelegate,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_PlayerIcon>(&pUVar1->ChangeMapPositionOffsetDelegate,this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->ChangedMapScaleDelegate).Subscriptions,(uint)this->_padding_,
                        (int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_PlayerIcon>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_WorldMap_PlayerIcon *)&stack0x00000010,(pmf_f67d4a8f *)this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->ChangeMapPositionOffsetDelegate).Subscriptions,
                        (uint)this->_padding_,(int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_PlayerIcon>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_WorldMap_PlayerIcon *)&stack0x00000010,(pmf_f67d4a8f *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCloseInitDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_PlayerIcon>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCloseInitDelegate,(UDS_VM_WorldMap_PlayerIcon *)&stack0x00000010,
               (pmf_4ac465ba *)this);
  }
  return;
}

// InitViewModel @ 14c08c970

void __thiscall UDS_VM_WorldMap_PlayerIcon::InitViewModel(UDS_VM_WorldMap_PlayerIcon *this)

{
  bool bVar1;
  UObject *pUVar2;
  undefined8 *puVar3;
  ADS_MainCharacter *this_00;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_01;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  UDS_VM_WorldMapIndexBase::InitViewModel((UDS_VM_WorldMapIndexBase *)this);
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    puVar3 = (undefined8 *)
             (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x78))
                       (&pUVar2[0x29].field_0x10,local_res18);
    *(undefined8 *)((longlong)&this->_padding_ + 4) = *puVar3;
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res10);
    this_01 = ADS_MainCharacter::GetFollowCamera(this_00);
    local_res18[0] = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    FWeakObjectPtr::operator=(&(this->OwnerCameraComponent).WeakPtr,(FObjectPtr)local_res18);
  }
  return;
}

// IsUpdate @ 14c090350

bool __thiscall UDS_VM_WorldMap_PlayerIcon::IsUpdate(UDS_VM_WorldMap_PlayerIcon *this)

{
  return true;
}

// OnChangedMapScale @ 14c0927f0

void __thiscall
UDS_VM_WorldMap_PlayerIcon::OnChangedMapScale
          (UDS_VM_WorldMap_PlayerIcon *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  *(float *)&this->_padding_ = param_1;
  (this->MapOffset).field0_0x0._s_0.X = dVar1;
  (this->MapOffset).field0_0x0._s_0.Y = dVar2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->ReferencePos).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->ReferencePos).field0_0x0._s_0.Y = dVar1;
  return;
}

// OnCloseInit @ 14c0931d0

void __thiscall UDS_VM_WorldMap_PlayerIcon::OnCloseInit(UDS_VM_WorldMap_PlayerIcon *this)

{
  UDS_VM_WorldMapIndexBase::OnCloseInit((UDS_VM_WorldMapIndexBase *)this);
  this->PlayerCanvasPanel = (UCanvasPanelSlot *)0x0;
  return;
}

// OnCurMapPositionOffset @ 14c094a70

void __thiscall
UDS_VM_WorldMap_PlayerIcon::OnCurMapPositionOffset
          (UDS_VM_WorldMap_PlayerIcon *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  *(float *)&this->_padding_ = param_1;
  (this->MapOffset).field0_0x0._s_0.X = dVar1;
  (this->MapOffset).field0_0x0._s_0.Y = dVar2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->ReferencePos).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->ReferencePos).field0_0x0._s_0.Y = dVar1;
  return;
}

// OnSetViewModel @ 14c09a9c0

void __thiscall
UDS_VM_WorldMap_PlayerIcon::OnSetViewModel
          (UDS_VM_WorldMap_PlayerIcon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  FName *pFVar4;
  double dVar5;
  FName local_res10;
  FName local_58;
  int local_50;
  TArray<float,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
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
  UDS_VM_WorldMapIndexBase::OnSetViewModel((UDS_VM_WorldMapIndexBase *)this,&local_28);
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
  SafeCast<FDS_ViewModelContext_WorldMapIconInfo>(&local_38,&local_18);
  if (local_38.Object != (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
    this->PlayerCanvasPanel = (UCanvasPanelSlot *)(local_38.Object)->_padding_;
    dVar2 = ((local_38.Object)->MapStartPos).field0_0x0._s_0.Y;
    (this->MapStartPos).field0_0x0._s_0.X = ((local_38.Object)->MapStartPos).field0_0x0._s_0.X;
    (this->MapStartPos).field0_0x0._s_0.Y = dVar2;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_38.Object)->_padding_ + 4);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_38.Object)->_padding_);
    dVar2 = ((local_38.Object)->ReferencePosition).field0_0x0._s_0.Y;
    dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
    fVar1 = *(float *)&this->_padding_;
    dVar5 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    (this->ReferencePos).field0_0x0._s_0.X =
         (((local_38.Object)->ReferencePosition).field0_0x0._s_0.X -
         (this->MapStartPos).field0_0x0._s_0.X) * dVar5 * (double)fVar1;
    (this->ReferencePos).field0_0x0._s_0.Y = (dVar2 - dVar3) * dVar5 * (double)fVar1;
    DS_CommonDataHelper::WorldmapDefaultScale(&local_48);
    if (1 < local_48.ArrayNum) {
      *(undefined4 *)&this->_padding_ = *(undefined4 *)(local_48.AllocatorInstance.Data + 4);
    }
    pFVar4 = ::FName::FName(&local_res10,"Loop_PlayerIcon_Anim");
    (this->AnimationEvent).AnimationName = *pFVar4;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    (this->AnimationEvent).NumberOfLoops = 0;
    local_50 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c09c990

void __thiscall UDS_VM_WorldMap_PlayerIcon::OnUpdate(UDS_VM_WorldMap_PlayerIcon *this,float param_1)

{
  double dVar1;
  FName FVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_MovementCore *pUVar6;
  TRotator<double> *pTVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_98 [16];
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [2];
  TVector<double>_u_0 local_58 [3];
  
  bVar5 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if ((!bVar5) && (this->PlayerCanvasPanel != (UCanvasPanelSlot *)0x0)) {
    pUVar6 = (UDS_MovementCore *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    UDS_MovementCore::GetActorLocation(pUVar6,(TVector<double> *)&local_58[0]._s_0);
    dVar9 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    dVar11 = ((double)local_58[0]._0_8_ - (this->MapStartPos).field0_0x0._s_0.X) * dVar9 *
             (double)*(float *)&this->_padding_;
    dVar10 = (double)*(float *)&this->_padding_;
    dVar12 = (this->ReferencePos).field0_0x0._s_0.X - dVar11;
    dVar9 = ((double)local_58[0]._8_8_ - (this->MapStartPos).field0_0x0._s_0.Y) * dVar9 *
            (double)*(float *)&this->_padding_;
    dVar1 = (this->ReferencePos).field0_0x0._s_0.Y - dVar9;
    dVar12 = (dVar12 - dVar12 * dVar10) + dVar10 * (this->MapOffset).field0_0x0._s_0.X;
    dVar1 = (dVar1 - dVar1 * dVar10) + dVar10 * (this->MapOffset).field0_0x0._s_0.Y;
    dVar11 = dVar12 + dVar11;
    dVar9 = dVar1 + dVar9;
    if ((int)this->_padding_ == 1) {
      local_98._8_8_ = dVar1;
      local_98._0_8_ = dVar12;
      UDS_VM_WorldMapIndexBase::CheckRangeOverIcon
                ((UDS_VM_WorldMapIndexBase *)this,(TVector2<double> *)local_98);
      dVar1 = (this->MapOffset).field0_0x0._s_0.Y * (double)*(float *)&this->_padding_;
      local_98._8_4_ = SUB84(dVar1,0);
      local_98._0_8_ = (this->MapOffset).field0_0x0._s_0.X * (double)*(float *)&this->_padding_;
      local_98._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      local_78[0]._0_8_ = (this->ReferencePos).field0_0x0._s_0.X;
      local_78[0]._8_8_ = (this->ReferencePos).field0_0x0._s_0.Y;
      local_88._s_0.X = dVar11;
      local_88._s_0.Y = dVar9;
      UDS_VM_WorldMapIndexBase::BroadCastRangeOverIconPosition
                ((UDS_VM_WorldMapIndexBase *)this,(TVector2<double> *)&local_88._s_0,
                 (TVector2<double> *)&local_78[0]._s_0,(TVector2<double> *)local_98);
    }
    local_88._s_0.X = dVar11;
    local_88._s_0.Y = dVar9;
    UCanvasPanelSlot::SetPosition(this->PlayerCanvasPanel,(TVector2<double> *)&local_88._s_0);
    pUVar6 = (UDS_MovementCore *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    pTVar7 = UDS_MovementCore::GetActorRotation(pUVar6,(TRotator<double> *)&local_78[0]._s_0);
    iVar4 = FFieldNotificationClassDescriptor::PlayerAngle.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::PlayerAngle.FieldName;
    fVar8 = (float)pTVar7->Yaw + __real_42b40000;
    if (fVar8 != this->PlayerAngle) {
      this->PlayerAngle = fVar8;
      FVar3 = FFieldNotificationClassDescriptor::PlayerAngle.FieldName;
      local_98._8_4_ = iVar4;
      FFieldNotificationClassDescriptor::PlayerAngle.FieldName.ComparisonIndex =
           FVar2.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::PlayerAngle.FieldName.Number = FVar2.Number;
      local_98._0_4_ =
           FFieldNotificationClassDescriptor::PlayerAngle.FieldName.ComparisonIndex.Value;
      local_98._4_4_ = FFieldNotificationClassDescriptor::PlayerAngle.FieldName.Number;
      FFieldNotificationClassDescriptor::PlayerAngle.FieldName = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_98);
    }
  }
  return;
}

// PlayAnimation @ 14c09e990

void __thiscall UDS_VM_WorldMap_PlayerIcon::PlayAnimation(UDS_VM_WorldMap_PlayerIcon *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Loop_PlayerIcon_Anim");
  (this->AnimationEvent).AnimationName = *pFVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  (this->AnimationEvent).NumberOfLoops = 0;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14c0adeb0

void __thiscall UDS_VM_WorldMap_PlayerIcon::UnbindModel(UDS_VM_WorldMap_PlayerIcon *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  UDS_VM_WorldMapIndexBase::UnbindModel((UDS_VM_WorldMapIndexBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_PlayerIcon>(&pUVar1->ChangedMapScaleDelegate,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_PlayerIcon>(&pUVar1->ChangeMapPositionOffsetDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCloseInitDelegate,
               this);
  }
  return;
}

// UpdateDirection @ 14c0af480

void __thiscall
UDS_VM_WorldMap_PlayerIcon::UpdateDirection(UDS_VM_WorldMap_PlayerIcon *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PlayerAngle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerAngle.FieldName;
  if (*param_1 + __real_42b40000 != this->PlayerAngle) {
    this->PlayerAngle = *param_1 + __real_42b40000;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

