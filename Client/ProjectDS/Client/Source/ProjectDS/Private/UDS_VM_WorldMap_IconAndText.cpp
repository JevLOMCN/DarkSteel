// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetEventClicked_WrapperImpl @ 14b709060

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WorldMap_IconAndText::SetEventClicked_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WorldMapEvent *pUVar1;
  UDS_WindowManager *this;
  float afStackX_8 [4];
  uint auStackX_18 [4];
  
  if (*(longlong *)((longlong)param_1 + 0x470) != 0) {
    pUVar1 = UDS_WorldMapEvent::GetEvent();
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      FDS_FilteredEventDelegate<int_const_,int_const_>::Broadcast
                (&pUVar1->IndoorChangeDelegate,(int *)((longlong)param_1 + 0x3b8),
                 *(int *)(*(longlong *)((longlong)param_1 + 0x470) + 0x60));
    }
    this = UDS_WindowManager::GetInst();
    if (this != (UDS_WindowManager *)0x0) {
      afStackX_8[0] = 0.0;
      auStackX_18[0] = 0;
      UDS_WindowManager::CloseWindow(this,MapTooltip,auStackX_18,afStackX_8);
    }
  }
  return;
}

// StaticClass @ 14b709070

UClass * __cdecl UDS_VM_WorldMap_IconAndText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IconAndText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IconAndText",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IconAndText.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IconAndText,0x478,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_IconAndText>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IconAndText>,local_res8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IconAndText.InnerSingleton;
}

// UDS_VM_WorldMap_IconAndText @ 14b711300

UDS_VM_WorldMap_IconAndText * __thiscall
UDS_VM_WorldMap_IconAndText::UDS_VM_WorldMap_IconAndText
          (UDS_VM_WorldMap_IconAndText *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EventClicked)._padding_ = '\0';
  (this->EventClicked).bIsCustomSelected = false;
  (this->EventClicked).bIsLacked = false;
  (this->EventClicked).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IconAndText__6B_;
  *(undefined8 *)&(this->EventClicked).Delegate = 0;
  *(undefined8 *)&(this->EventClicked).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventClicked).Delegate.field_0x10 = 0;
  (this->NameText).StringTableType = None;
  (this->NameText).StringTableID = 0;
  (this->NameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NameText).StringEnumTableNameID.Number = 0;
  (this->NameText).DateTime.Ticks = 0;
  (this->NameText).TimeSpan.Ticks = 0;
  (this->NameText).TimeExpressionType = None;
  (this->NameText).IsExpression = false;
  (this->NameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).UniqueString.Data.ArrayNum = 0;
  (this->NameText).UniqueString.Data.ArrayMax = 0;
  (this->NameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).FormatArgs.ArrayNum = 0;
  (this->NameText).FormatArgs.ArrayMax = 0;
  this->IconID = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IsHudShow = false;
  this->MapIndexSpawnTableRow = (FDS_MapIndexSpawnTableRow *)0x0;
  (this->StartReferencePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->ParentPanelScale = 1.0;
  return this;
}

// UDS_VM_WorldMap_IconAndText @ 14b7113e0

UDS_VM_WorldMap_IconAndText * __thiscall
UDS_VM_WorldMap_IconAndText::UDS_VM_WorldMap_IconAndText
          (UDS_VM_WorldMap_IconAndText *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_VM_WorldMapIndexBase::UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EventClicked)._padding_ = '\0';
  (this->EventClicked).bIsCustomSelected = false;
  (this->EventClicked).bIsLacked = false;
  (this->EventClicked).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IconAndText__6B_;
  *(undefined8 *)&(this->EventClicked).Delegate = 0;
  *(undefined8 *)&(this->EventClicked).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventClicked).Delegate.field_0x10 = 0;
  (this->NameText).StringTableType = None;
  (this->NameText).StringTableID = 0;
  (this->NameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NameText).StringEnumTableNameID.Number = 0;
  (this->NameText).DateTime.Ticks = 0;
  (this->NameText).TimeSpan.Ticks = 0;
  (this->NameText).TimeExpressionType = None;
  (this->NameText).IsExpression = false;
  (this->NameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).UniqueString.Data.ArrayNum = 0;
  (this->NameText).UniqueString.Data.ArrayMax = 0;
  (this->NameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).FormatArgs.ArrayNum = 0;
  (this->NameText).FormatArgs.ArrayMax = 0;
  this->IconID = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IsHudShow = false;
  this->MapIndexSpawnTableRow = (FDS_MapIndexSpawnTableRow *)0x0;
  (this->StartReferencePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->ParentPanelScale = 1.0;
  return this;
}

// ~UDS_VM_WorldMap_IconAndText @ 14b7133a0

void __thiscall
UDS_VM_WorldMap_IconAndText::~UDS_VM_WorldMap_IconAndText(UDS_VM_WorldMap_IconAndText *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_IconAndText__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NameText).FormatArgs.AllocatorInstance.Data,
             (this->NameText).FormatArgs.ArrayNum);
  pFVar1 = (this->NameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->EventClicked).Delegate);
  pvVar2 = *(void **)&(this->EventClicked).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EventClicked).Delegate);
  UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716b40

IClassDescriptor * __thiscall
UDS_VM_WorldMap_IconAndText::GetFieldNotificationDescriptor(UDS_VM_WorldMap_IconAndText *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_IconAndText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717c50

UClass * __cdecl UDS_VM_WorldMap_IconAndText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_IconAndText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_IconAndText",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_IconAndText.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_IconAndText,0x478,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_IconAndText>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_IconAndText>,local_res8,
               UDS_VM_WorldMapIndexBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_IconAndText.InnerSingleton;
}

// GetTickableTickType @ 14b7187d0

ETickableTickType __thiscall
UDS_VM_WorldMap_IconAndText::GetTickableTickType(UDS_VM_WorldMap_IconAndText *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_IconAndText @ 14b718a70

void __cdecl UDS_VM_WorldMap_IconAndText::StaticRegisterNativesUDS_VM_WorldMap_IconAndText(void)

{
  return;
}

// BindModel @ 14c004d10

void __thiscall UDS_VM_WorldMap_IconAndText::BindModel(UDS_VM_WorldMap_IconAndText *this)

{
  UDS_WorldMapEvent *pUVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar2;
  UDS_HudManager *pUVar3;
  
  UDS_VM_WorldMapIndexBase::BindModel((UDS_VM_WorldMapIndexBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_IconAndText>(&pUVar1->ChangedMapScaleDelegate,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_IconAndText>(&pUVar1->ChangeMapPositionOffsetDelegate,this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->ChangedMapScaleDelegate).Subscriptions,(uint)this->_padding_,
                        (int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_IconAndText>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_WorldMap_IconAndText *)&stack0x00000010,(pmf_d6f9ad60 *)this);
    pTVar2 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar1->ChangeMapPositionOffsetDelegate).Subscriptions,
                        (uint)this->_padding_,(int *)&this->_padding_);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar2,this);
    TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_IconAndText>
              ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                *)pTVar2,(UDS_VM_WorldMap_IconAndText *)&stack0x00000010,(pmf_d6f9ad60 *)this);
  }
  pUVar3 = UDS_HudManager::GetInst();
  if (pUVar3 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_IconAndText>
              (&pUVar3->OnHudShowDelegate,(UDS_VM_WorldMap_IconAndText *)&stack0x00000010,
               (pmf_97dea421 *)this);
  }
  return;
}

// ChangeIconPosition @ 14c0063a0

void __thiscall
UDS_VM_WorldMap_IconAndText::ChangeIconPosition
          (UDS_VM_WorldMap_IconAndText *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78;
  TVector2<double>_u_0 local_68 [6];
  
  if (this->_padding_ != 0) {
    dVar5 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    dVar6 = (double)(param_1 / *(float *)((longlong)&this->_padding_ + 4));
    dVar1 = (param_3->field0_0x0)._s_0.X;
    dVar4 = ((param_3->field0_0x0)._s_0.X -
            ((double)this->_padding_ - (double)this->_padding_) * dVar5 *
            (double)*(float *)&this->_padding_) * dVar6;
    dVar2 = (double)param_1 * (param_2->field0_0x0)._s_0.Y;
    dVar3 = (double)param_1 * (param_2->field0_0x0)._s_0.X;
    dVar6 = ((param_3->field0_0x0)._s_0.Y -
            ((double)this->_padding_ - (double)this->_padding_) * dVar5 *
            (double)*(float *)&this->_padding_) * dVar6;
    if ((int)this->_padding_ == 0) {
      dVar5 = (((param_3->field0_0x0)._s_0.Y + dVar2) - dVar6) +
              ((this->StartReferencePosition).field0_0x0._s_0.Y - (param_3->field0_0x0)._s_0.Y) +
              ((double)this->_padding_ - (double)this->_padding_);
      dVar1 = ((dVar1 + dVar3) - dVar4) + ((this->StartReferencePosition).field0_0x0._s_0.X - dVar1)
              + ((double)this->_padding_ - (double)this->_padding_);
    }
    else {
      local_88._s_0.X = dVar3 - dVar4;
      local_88._s_0.Y = dVar2 - dVar6;
      dVar5 = local_88._s_0.Y + (param_3->field0_0x0)._s_0.Y;
      dVar1 = local_88._s_0.X + dVar1;
      UDS_VM_WorldMapIndexBase::CheckRangeOverIcon
                ((UDS_VM_WorldMapIndexBase *)this,(TVector2<double> *)&local_88._s_0);
      local_68[0]._0_8_ = (param_3->field0_0x0)._s_0.X;
      local_68[0]._8_8_ = (param_3->field0_0x0)._s_0.Y;
      local_88._s_0.X = dVar3;
      local_88._s_0.Y = dVar2;
      local_78._s_0.X = dVar1;
      local_78._s_0.Y = dVar5;
      UDS_VM_WorldMapIndexBase::BroadCastRangeOverIconPosition
                ((UDS_VM_WorldMapIndexBase *)this,(TVector2<double> *)&local_78._s_0,
                 (TVector2<double> *)&local_68[0]._s_0,(TVector2<double> *)&local_88._s_0);
    }
    local_78._s_0.X = dVar1;
    local_78._s_0.Y = dVar5;
    UCanvasPanelSlot::SetPosition
              ((UCanvasPanelSlot *)this->_padding_,(TVector2<double> *)&local_78._s_0);
  }
  return;
}

// InitViewModel @ 14c0205b0

void __thiscall UDS_VM_WorldMap_IconAndText::InitViewModel(UDS_VM_WorldMap_IconAndText *this)

{
  return;
}

// IsUpdate @ 14c023a90

bool __thiscall UDS_VM_WorldMap_IconAndText::IsUpdate(UDS_VM_WorldMap_IconAndText *this)

{
  if ((char)this->_padding_ == '\0') {
    return this->IsHudShow;
  }
  return false;
}

// OnChangedMapScale @ 14c0259d0

void __thiscall
UDS_VM_WorldMap_IconAndText::OnChangedMapScale
          (UDS_VM_WorldMap_IconAndText *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  *(float *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar2;
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)local_28._s_0.X;
  this->_padding_ = (longlong)local_28._s_0.Y;
  local_18._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  ChangeIconPosition(this,param_1,(TVector2<double> *)&local_18._s_0,
                     (TVector2<double> *)&local_28._s_0);
  return;
}

// OnChangedPanelTranslation @ 14c025aa0

void __thiscall
UDS_VM_WorldMap_IconAndText::OnChangedPanelTranslation
          (UDS_VM_WorldMap_IconAndText *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.X = (double)this->_padding_;
  local_28._s_0.Y = (double)this->_padding_;
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_2->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar1;
  local_18._s_0.X = (double)this->_padding_;
  local_18._s_0.Y = (double)this->_padding_;
  ChangeIconPosition(this,*(float *)&this->_padding_,(TVector2<double> *)&local_18._s_0,
                     (TVector2<double> *)&local_28._s_0);
  return;
}

// OnCloseInit @ 14c028b80

void __thiscall UDS_VM_WorldMap_IconAndText::OnCloseInit(UDS_VM_WorldMap_IconAndText *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnCurMapPositionOffset @ 14c028d90

void __thiscall
UDS_VM_WorldMap_IconAndText::OnCurMapPositionOffset
          (UDS_VM_WorldMap_IconAndText *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  *(float *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)dVar2;
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)local_28._s_0.X;
  this->_padding_ = (longlong)local_28._s_0.Y;
  local_18._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  ChangeIconPosition(this,param_1,(TVector2<double> *)&local_18._s_0,
                     (TVector2<double> *)&local_28._s_0);
  return;
}

// OnEventClicked @ 14c029440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_IconAndText::OnEventClicked
          (UDS_VM_WorldMap_IconAndText *this,FDS_ButtonEventField *param_1)

{
  UDS_WorldMapEvent *pUVar1;
  UDS_WindowManager *this_00;
  float local_res8 [4];
  uint local_res18 [4];
  
  if (this->MapIndexSpawnTableRow != (FDS_MapIndexSpawnTableRow *)0x0) {
    pUVar1 = UDS_WorldMapEvent::GetEvent();
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      FDS_FilteredEventDelegate<int_const_,int_const_>::Broadcast
                (&pUVar1->IndoorChangeDelegate,(int *)&this->_padding_,
                 this->MapIndexSpawnTableRow->ID_MapIndoorGroup);
    }
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      local_res8[0] = 0.0;
      local_res18[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,MapTooltip,local_res18,local_res8);
    }
  }
  return;
}

// OnHudShowEvent @ 14c02a940

void __thiscall
UDS_VM_WorldMap_IconAndText::OnHudShowEvent
          (UDS_VM_WorldMap_IconAndText *this,EDS_WindowLayerGroupType *param_1)

{
  this->IsHudShow = *param_1 < Hud;
  return;
}

// OnSetViewModel @ 14c039180

void __thiscall
UDS_VM_WorldMap_IconAndText::OnSetViewModel
          (UDS_VM_WorldMap_IconAndText *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  longlong lVar4;
  long64 lVar5;
  bool bVar6;
  FDS_MapIndexSpawnTableRow *pFVar7;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar8;
  UObject *pUVar9;
  undefined8 *puVar10;
  double dVar11;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [16];
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  TSharedPtr<FDS_ViewModelContext_WorldMapIconAndTextInfo,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TVector2<double>_u_0 local_78;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_68;
  TVector2<double>_u_0 local_58 [3];
  
  local_98.Object = param_1->Object;
  local_98.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_WorldMapIndexBase::OnSetViewModel((UDS_VM_WorldMapIndexBase *)this,&local_98);
  local_88.Object = param_1->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapIconAndTextInfo>(&local_a8,&local_88);
  if (local_a8.Object == (FDS_ViewModelContext_WorldMapIconAndTextInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar7 = FDS_MapIndexSpawnTableRow::Get((local_a8.Object)->MapIndexSpawnTableID,true);
    this->MapIndexSpawnTableRow = pFVar7;
    this->_padding_ = (local_a8.Object)->_padding_;
    lVar4 = (local_a8.Object)->_padding_;
    this->_padding_ = (local_a8.Object)->_padding_;
    this->_padding_ = lVar4;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_a8.Object)->_padding_ + 4);
    this->IconID = (int)(local_a8.Object)->_padding_;
    lVar4 = (local_a8.Object)->_padding_;
    this->_padding_ = (local_a8.Object)->_padding_;
    this->_padding_ = lVar4;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_a8.Object)->_padding_);
    FDS_Text::operator=(&this->NameText,&(local_a8.Object)->NameFText);
    pTVar8 = MakeContext<FDS_ViewModelConext_WorldMapIconToolTip>(&local_68);
    plVar1 = &this->_padding_;
    if ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)plVar1 != pTVar8) {
      *plVar1 = (longlong)pTVar8->Object;
      pTVar8->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar8->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (*plVar1 != 0) {
      *(undefined4 *)(*plVar1 + 0x18) = 0x1b1;
      lVar4 = this->_padding_;
      if (*plVar1 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(int *)(*plVar1 + 0x20) = (int)lVar4;
      if (local_a8.Object == (FDS_ViewModelContext_WorldMapIconAndTextInfo *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar5 = (local_a8.Object)->MapIndexSpawnTableID;
      if (*plVar1 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(int *)(*plVar1 + 0x24) = (int)lVar5;
    }
    if ((char)this->_padding_ == '\0') {
      this->IsHudShow = true;
    }
    ADS_MainCharacter::GetMainPlayer();
    bVar6 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res10,(void *)0x0)
    ;
    if (!bVar6) {
      pUVar9 = FWeakObjectPtr::Get(&local_res10);
      puVar10 = (undefined8 *)
                (**(code **)(*(longlong *)&pUVar9[0x29].field_0x10 + 0x78))
                          (&pUVar9[0x29].field_0x10,local_res18);
      *(undefined8 *)((longlong)&this->_padding_ + 4) = *puVar10;
    }
    dVar11 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    dVar3 = ((double)this->_padding_ - (double)this->_padding_) * dVar11 *
            (double)*(float *)&this->_padding_;
    dVar11 = ((double)this->_padding_ - (double)this->_padding_) * dVar11 *
             (double)*(float *)&this->_padding_;
    (this->StartReferencePosition).field0_0x0._s_0.X = dVar3;
    (this->StartReferencePosition).field0_0x0._s_0.Y = dVar11;
    UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
    UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
    local_58[0] = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_78._s_0.X = dVar3;
    local_78._s_0.Y = dVar11;
    ChangeIconPosition(this,*(float *)&this->_padding_,(TVector2<double> *)&local_58[0]._s_0,
                       (TVector2<double> *)&local_78._s_0);
    local_c0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_c8 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    local_b0 = FFieldNotificationClassDescriptor::NameText.BitNumber;
    local_b8 = FFieldNotificationClassDescriptor::NameText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c03b0e0

void __thiscall
UDS_VM_WorldMap_IconAndText::OnUpdate(UDS_VM_WorldMap_IconAndText *this,float param_1)

{
  bool bVar1;
  UDS_MovementCore *this_00;
  double dVar2;
  TVector2<double>_u_0 local_48;
  TVector2<double>_u_0 local_38;
  TVector<double>_u_0 local_28;
  
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
    ChangeIconPosition(this,*(float *)&this->_padding_,(TVector2<double> *)&local_38._s_0,
                       (TVector2<double> *)&local_48._s_0);
  }
  return;
}

// SetIconPosition @ 14c041660

void __thiscall
UDS_VM_WorldMap_IconAndText::SetIconPosition
          (UDS_VM_WorldMap_IconAndText *this,TVector2<double> *param_1)

{
  double dVar1;
  TVector2<double>_u_0 local_18;
  
  if ((UCanvasPanelSlot *)this->_padding_ != (UCanvasPanelSlot *)0x0) {
    dVar1 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    local_18._s_0.Y =
         ((param_1->field0_0x0)._s_0.Y - (double)this->_padding_) * dVar1 *
         (double)*(float *)&this->_padding_;
    local_18._s_0.X =
         ((param_1->field0_0x0)._s_0.X - (double)this->_padding_) * dVar1 *
         (double)*(float *)&this->_padding_;
    UCanvasPanelSlot::SetPosition
              ((UCanvasPanelSlot *)this->_padding_,(TVector2<double> *)&local_18._s_0);
  }
  return;
}

// UnbindModel @ 14c0495b0

void __thiscall UDS_VM_WorldMap_IconAndText::UnbindModel(UDS_VM_WorldMap_IconAndText *this)

{
  UDS_WorldMapEvent *pUVar1;
  UDS_HudManager *pUVar2;
  
  UDS_VM_WorldMapIndexBase::UnbindModel((UDS_VM_WorldMapIndexBase *)this);
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_IconAndText>(&pUVar1->ChangedMapScaleDelegate,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_VM_WorldMap_IconAndText>(&pUVar1->ChangeMapPositionOffsetDelegate,this);
  }
  pUVar2 = UDS_HudManager::GetInst();
  if (pUVar2 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnHudShowDelegate,this
              );
  }
  return;
}

