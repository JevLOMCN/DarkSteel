// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b70b430

UClass * __cdecl UDS_VM_WorldMap_TextOnly::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_TextOnly.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_TextOnly",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_TextOnly.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_TextOnly,0x478,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_TextOnly>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_TextOnly>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_TextOnly.InnerSingleton;
}

// UDS_VM_WorldMap_TextOnly @ 14b712980

UDS_VM_WorldMap_TextOnly * __thiscall
UDS_VM_WorldMap_TextOnly::UDS_VM_WorldMap_TextOnly
          (UDS_VM_WorldMap_TextOnly *this,FVTableHelper *param_1)

{
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_TextOnly__6B_;
  (this->NameFText).StringTableID = 0;
  (this->NameFText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NameFText).StringEnumTableNameID.Number = 0;
  (this->NameFText).DateTime.Ticks = 0;
  (this->NameFText).TimeSpan.Ticks = 0;
  (this->NameFText).TimeExpressionType = None;
  (this->NameFText).IsExpression = false;
  (this->NameFText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameFText).UniqueString.Data.ArrayNum = 0;
  (this->NameFText).UniqueString.Data.ArrayMax = 0;
  (this->NameFText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameFText).FormatArgs.ArrayNum = 0;
  (this->NameFText).FormatArgs.ArrayMax = 0;
  (this->NameFText).StringTableType = None;
  return this;
}

// UDS_VM_WorldMap_TextOnly @ 14b712a10

UDS_VM_WorldMap_TextOnly * __thiscall
UDS_VM_WorldMap_TextOnly::UDS_VM_WorldMap_TextOnly
          (UDS_VM_WorldMap_TextOnly *this,FObjectInitializer *param_1)

{
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_TextOnly__6B_;
  (this->NameFText).StringTableID = 0;
  (this->NameFText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NameFText).StringEnumTableNameID.Number = 0;
  (this->NameFText).DateTime.Ticks = 0;
  (this->NameFText).TimeSpan.Ticks = 0;
  (this->NameFText).TimeExpressionType = None;
  (this->NameFText).IsExpression = false;
  (this->NameFText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameFText).UniqueString.Data.ArrayNum = 0;
  (this->NameFText).UniqueString.Data.ArrayMax = 0;
  (this->NameFText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameFText).FormatArgs.ArrayNum = 0;
  (this->NameFText).FormatArgs.ArrayMax = 0;
  (this->NameFText).StringTableType = None;
  return this;
}

// ~UDS_VM_WorldMap_TextOnly @ 14b713c40

void __thiscall UDS_VM_WorldMap_TextOnly::~UDS_VM_WorldMap_TextOnly(UDS_VM_WorldMap_TextOnly *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_TextOnly__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NameFText).FormatArgs.AllocatorInstance.Data,
             (this->NameFText).FormatArgs.ArrayNum);
  pFVar1 = (this->NameFText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NameFText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UDS_VM_WorldMap_Icon::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_VM_WorldMap_Icon::_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Icon__6B_;
  UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b717080

IClassDescriptor * __thiscall
UDS_VM_WorldMap_TextOnly::GetFieldNotificationDescriptor(UDS_VM_WorldMap_TextOnly *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_TextOnly::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b718550

UClass * __cdecl UDS_VM_WorldMap_TextOnly::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_TextOnly.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_TextOnly",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_TextOnly.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_TextOnly,0x478,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_TextOnly>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_TextOnly>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_TextOnly.InnerSingleton;
}

// GetTickableTickType @ 14b718830

ETickableTickType __thiscall
UDS_VM_WorldMap_TextOnly::GetTickableTickType(UDS_VM_WorldMap_TextOnly *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_TextOnly @ 14b718b30

void __cdecl UDS_VM_WorldMap_TextOnly::StaticRegisterNativesUDS_VM_WorldMap_TextOnly(void)

{
  return;
}

// BindModel @ 14c06d250

void __thiscall UDS_VM_WorldMap_TextOnly::BindModel(UDS_VM_WorldMap_TextOnly *this)

{
  UDS_HudManager *pUVar1;
  
  UDS_VM_WorldMap_Icon::BindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_HudManager::GetInst();
  if (pUVar1 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_TextOnly>
              (&pUVar1->OnHudShowDelegate,(UDS_VM_WorldMap_TextOnly *)&stack0x00000010,
               (pmf_545c9bcb *)this);
  }
  return;
}

// InitViewModel @ 14c08ca40

void __thiscall UDS_VM_WorldMap_TextOnly::InitViewModel(UDS_VM_WorldMap_TextOnly *this)

{
  return;
}

// IsUpdate @ 14c090380

bool __thiscall UDS_VM_WorldMap_TextOnly::IsUpdate(UDS_VM_WorldMap_TextOnly *this)

{
  if ((char)this->_padding_ == '\0') {
    return (bool)(char)this->_padding_;
  }
  return false;
}

// OnCloseInit @ 14c093350

void __thiscall UDS_VM_WorldMap_TextOnly::OnCloseInit(UDS_VM_WorldMap_TextOnly *this)

{
  UDS_VM_WorldMap_Icon::OnCloseInit((UDS_VM_WorldMap_Icon *)this);
  this->_padding_ = 0;
  return;
}

// OnHudShowEvent @ 14c095900

void __thiscall
UDS_VM_WorldMap_TextOnly::OnHudShowEvent
          (UDS_VM_WorldMap_TextOnly *this,EDS_WindowLayerGroupType *param_1)

{
  *(bool *)&this->_padding_ = *param_1 < Hud;
  return;
}

// OnSetViewModel @ 14c09b140

void __thiscall
UDS_VM_WorldMap_TextOnly::OnSetViewModel
          (UDS_VM_WorldMap_TextOnly *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext_WorldMapTextOnlyInfo,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TVector2<double>_u_0 local_48;
  TVector2<double>_u_0 local_38 [3];
  
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_WorldMap_Icon::OnSetViewModel((UDS_VM_WorldMap_Icon *)this,&local_68);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapTextOnlyInfo>(&local_78,&local_58);
  if (local_78.Object == (FDS_ViewModelContext_WorldMapTextOnlyInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  else {
    this->_padding_ = (local_78.Object)->_padding_;
    lVar2 = (local_78.Object)->_padding_;
    this->_padding_ = (local_78.Object)->_padding_;
    this->_padding_ = lVar2;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_78.Object)->_padding_ + 4);
    lVar2 = (local_78.Object)->_padding_;
    this->_padding_ = (local_78.Object)->_padding_;
    this->_padding_ = lVar2;
    lVar2 = (local_78.Object)->_padding_;
    this->_padding_ = (local_78.Object)->_padding_;
    this->_padding_ = lVar2;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_78.Object)->_padding_);
    FDS_Text::operator=(&this->NameFText,&(local_78.Object)->NameFText);
    if ((char)this->_padding_ == '\0') {
      *(undefined1 *)&this->_padding_ = 1;
    }
    dVar3 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
    dVar1 = ((double)this->_padding_ - (double)this->_padding_) * dVar3 *
            (double)*(float *)&this->_padding_;
    dVar3 = ((double)this->_padding_ - (double)this->_padding_) * dVar3 *
            (double)*(float *)&this->_padding_;
    this->_padding_ = (longlong)dVar1;
    this->_padding_ = (longlong)dVar3;
    UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
    UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
    local_38[0] = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_48._s_0.X = dVar1;
    local_48._s_0.Y = dVar3;
    UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
              ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
               (TVector2<double> *)&local_38[0]._s_0,(TVector2<double> *)&local_48._s_0);
    local_80 = FFieldNotificationClassDescriptor::NameFText.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::NameFText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c09ccc0

void __thiscall UDS_VM_WorldMap_TextOnly::OnUpdate(UDS_VM_WorldMap_TextOnly *this,float param_1)

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

// UnbindModel @ 14c0adfa0

void __thiscall UDS_VM_WorldMap_TextOnly::UnbindModel(UDS_VM_WorldMap_TextOnly *this)

{
  UDS_HudManager *pUVar1;
  
  UDS_VM_WorldMap_Icon::UnbindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_HudManager::GetInst();
  if (pUVar1 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHudShowDelegate,this
              );
    return;
  }
  return;
}

