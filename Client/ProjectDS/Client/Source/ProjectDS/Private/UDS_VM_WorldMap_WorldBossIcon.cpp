// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetMousePressedEvent_WrapperImpl @ 14b70bc90

void __cdecl
UDS_VM_WorldMap_WorldBossIcon::SetMousePressedEvent_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// StaticClass @ 14b70bd60

UClass * __cdecl UDS_VM_WorldMap_WorldBossIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_WorldBossIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_WorldBossIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_WorldBossIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_WorldBossIcon,0x458,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_WorldBossIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_WorldBossIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_WorldBossIcon.InnerSingleton;
}

// UDS_VM_WorldMap_WorldBossIcon @ 14b712bc0

UDS_VM_WorldMap_WorldBossIcon * __thiscall
UDS_VM_WorldMap_WorldBossIcon::UDS_VM_WorldMap_WorldBossIcon
          (UDS_VM_WorldMap_WorldBossIcon *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MousePressedEvent)._padding_ = '\0';
  (this->MousePressedEvent).bIsCustomSelected = false;
  (this->MousePressedEvent).bIsLacked = false;
  (this->MousePressedEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_WorldBossIcon__6B_;
  *(undefined8 *)&(this->MousePressedEvent).Delegate = 0;
  *(undefined8 *)&(this->MousePressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePressedEvent).Delegate.field_0x10 = 0;
  this->WorldBossTID = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_VM_WorldMap_WorldBossIcon @ 14b712c40

UDS_VM_WorldMap_WorldBossIcon * __thiscall
UDS_VM_WorldMap_WorldBossIcon::UDS_VM_WorldMap_WorldBossIcon
          (UDS_VM_WorldMap_WorldBossIcon *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MousePressedEvent)._padding_ = '\0';
  (this->MousePressedEvent).bIsCustomSelected = false;
  (this->MousePressedEvent).bIsLacked = false;
  (this->MousePressedEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_WorldBossIcon__6B_;
  *(undefined8 *)&(this->MousePressedEvent).Delegate = 0;
  *(undefined8 *)&(this->MousePressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePressedEvent).Delegate.field_0x10 = 0;
  this->WorldBossTID = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_VM_WorldMap_WorldBossIcon @ 14b713d60

void __thiscall
UDS_VM_WorldMap_WorldBossIcon::~UDS_VM_WorldMap_WorldBossIcon(UDS_VM_WorldMap_WorldBossIcon *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_WorldBossIcon__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MousePressedEvent).Delegate);
  pvVar1 = *(void **)&(this->MousePressedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MousePressedEvent).Delegate);
  this->_padding_ = (longlong)&UDS_VM_WorldMap_Icon::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_VM_WorldMap_Icon::_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Icon__6B_;
  UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b717160

IClassDescriptor * __thiscall
UDS_VM_WorldMap_WorldBossIcon::GetFieldNotificationDescriptor(UDS_VM_WorldMap_WorldBossIcon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_WorldBossIcon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7186d0

UClass * __cdecl UDS_VM_WorldMap_WorldBossIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_WorldBossIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_WorldBossIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_WorldBossIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_WorldBossIcon,0x458,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_WorldBossIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_WorldBossIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_WorldBossIcon.InnerSingleton;
}

// GetTickableTickType @ 14b718850

ETickableTickType __thiscall
UDS_VM_WorldMap_WorldBossIcon::GetTickableTickType(UDS_VM_WorldMap_WorldBossIcon *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_WorldBossIcon @ 14b718b50

void __cdecl UDS_VM_WorldMap_WorldBossIcon::StaticRegisterNativesUDS_VM_WorldMap_WorldBossIcon(void)

{
  return;
}

// BindModel @ 14c06d310

void __thiscall UDS_VM_WorldMap_WorldBossIcon::BindModel(UDS_VM_WorldMap_WorldBossIcon *this)

{
  UDS_HudManager *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  
  UDS_VM_WorldMap_Icon::BindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_HudManager::GetInst();
  if (pUVar1 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_WorldBossIcon>
              (&pUVar1->OnHudShowDelegate,(UDS_VM_WorldMap_WorldBossIcon *)&stack0x00000010,
               (pmf_2c5c83da *)this);
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->DeleteWorldBossIconDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_WorldBossIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar2->DeleteWorldBossIconDelegate,
               (UDS_VM_WorldMap_WorldBossIcon *)&stack0x00000010,(pmf_366dca6f *)this);
  }
  return;
}

// InitViewModel @ 14c08ca60

void __thiscall UDS_VM_WorldMap_WorldBossIcon::InitViewModel(UDS_VM_WorldMap_WorldBossIcon *this)

{
  return;
}

// IsUpdate @ 14c0903c0

bool __thiscall UDS_VM_WorldMap_WorldBossIcon::IsUpdate(UDS_VM_WorldMap_WorldBossIcon *this)

{
  if ((char)this->_padding_ == '\0') {
    return (bool)(char)this->_padding_;
  }
  return false;
}

// OnCloseInit @ 14c0934c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_WorldBossIcon::OnCloseInit(UDS_VM_WorldMap_WorldBossIcon *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_GameInstance *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_VM_WorldMap_Icon::OnCloseInit((UDS_VM_WorldMap_Icon *)this);
  local_140 = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    this->_padding_ = 0;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap_WorldBossIcon::OnCloseInit",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,100,L"gameinstance is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnDeleteWorldBossIcon @ 14c095260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_WorldBossIcon::OnDeleteWorldBossIcon
          (UDS_VM_WorldMap_WorldBossIcon *this,long64 param_1)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->WorldBossTID == param_1) &&
     (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->Widget,(void *)0x0),
     !bVar1)) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_WorldMap_WorldBossIcon::OnDeleteWorldBossIcon",0x34,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xbf,L"windowManager is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      local_148 = 0.0;
      local_144[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,MapTooltip,local_144,&local_148);
      (**(code **)(this->_padding_ + 0x2b0))(this);
      pUVar3 = FWeakObjectPtr::Get(&(this->Widget).WeakPtr);
      (**(code **)(*(longlong *)pUVar3 + 0x2d0))(pUVar3);
    }
  }
  return;
}

// OnHudShowEvent @ 14c095940

void __thiscall
UDS_VM_WorldMap_WorldBossIcon::OnHudShowEvent
          (UDS_VM_WorldMap_WorldBossIcon *this,EDS_WindowLayerGroupType *param_1)

{
  *(bool *)&this->_padding_ = *param_1 < Hud;
  return;
}

// OnMousePressedEvent @ 14c0972b0

void __thiscall
UDS_VM_WorldMap_WorldBossIcon::OnMousePressedEvent
          (UDS_VM_WorldMap_WorldBossIcon *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnSetViewModel @ 14c09b850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_WorldBossIcon::OnSetViewModel
          (UDS_VM_WorldMap_WorldBossIcon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  bool bVar6;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  TSharedPtr<FDS_ViewModelContext_WorldMapWorldBossIconInfo,1> local_208;
  UDS_GameInstance *local_1f8 [2];
  FName local_1e8;
  int local_1e0;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  TVector2<double>_u_0 local_1b8;
  undefined1 local_1a8 [8];
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_1a0;
  TVector2<double>_u_0 local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
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
  SafeCast<FDS_ViewModelContext_WorldMapWorldBossIconInfo>(&local_208,&local_1c8);
  if (local_208.Object == (FDS_ViewModelContext_WorldMapWorldBossIconInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
  else {
    this->_padding_ = (local_208.Object)->_padding_;
    dVar11 = ((local_208.Object)->MapStartPos).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)((local_208.Object)->MapStartPos).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar11;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_208.Object)->_padding_ + 4);
    lVar5 = (local_208.Object)->_padding_;
    this->_padding_ = (local_208.Object)->_padding_;
    this->_padding_ = lVar5;
    dVar11 = ((local_208.Object)->ReferencePosition).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)((local_208.Object)->ReferencePosition).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar11;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_208.Object)->_padding_);
    this->WorldBossTID = (local_208.Object)->WorldBossTID;
    *(int *)&this->_padding_ = (local_208.Object)->IconID;
    (this->Widget).WeakPtr = ((local_208.Object)->Widget).WeakPtr;
    pTVar7 = MakeContext<FDS_ViewModelConext_WorldMapIconToolTip>(&local_1a0);
    plVar1 = &this->_padding_;
    if ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)plVar1 != pTVar7) {
      *plVar1 = (longlong)pTVar7->Object;
      pTVar7->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar7->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
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
      iVar2 = this->WorldBossTID;
      if ((*plVar1 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(longlong *)(*plVar1 + 0x70) = (longlong)iVar2;
    }
    local_1f8[0] = UDS_GameInstance::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1f8[0] != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1f8[0]);
    }
    local_218.ObjectIndex = 0;
    local_218.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1f8[0] != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1f8[0]);
    }
    FWeakObjectPtr::operator=(&local_218,(FObjectPtr)local_1f8);
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
        pUVar9 = FWeakObjectPtr::Get(&local_210);
        puVar10 = (undefined8 *)
                  (**(code **)(*(longlong *)&pUVar9[0x29].field_0x10 + 0x78))
                            (&pUVar9[0x29].field_0x10,local_1a8);
        *(undefined8 *)((longlong)&this->_padding_ + 4) = *puVar10;
      }
      dVar11 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
      dVar4 = ((double)this->_padding_ - (double)this->_padding_) * dVar11 *
              (double)*(float *)&this->_padding_;
      dVar11 = ((double)this->_padding_ - (double)this->_padding_) * dVar11 *
               (double)*(float *)&this->_padding_;
      this->_padding_ = (longlong)dVar4;
      this->_padding_ = (longlong)dVar11;
      UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
      UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
      local_188 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_1b8._s_0.X = dVar4;
      local_1b8._s_0.Y = dVar11;
      UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
                ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
                 (TVector2<double> *)&local_188._s_0,(TVector2<double> *)&local_1b8._s_0);
      local_1e0 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.BitNumber;
      local_1e8 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_VM_WorldMap_WorldBossIcon::OnSetViewModel",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar8,1,Warning,local_178.Ptr,0x8b,L"gameinstance is not valid.");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c09cea0

void __thiscall
UDS_VM_WorldMap_WorldBossIcon::OnUpdate(UDS_VM_WorldMap_WorldBossIcon *this,float param_1)

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

// UnbindModel @ 14c0ae020

void __thiscall UDS_VM_WorldMap_WorldBossIcon::UnbindModel(UDS_VM_WorldMap_WorldBossIcon *this)

{
  UDS_HudManager *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  
  UDS_VM_WorldMap_Icon::UnbindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_HudManager::GetInst();
  if (pUVar1 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHudShowDelegate,this
              );
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->DeleteWorldBossIconDelegate,this);
    return;
  }
  return;
}

