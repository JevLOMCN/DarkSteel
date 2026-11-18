// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b6f9d70

UClass * __cdecl UDS_VM_WorldMap_BreachIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_BreachIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_BreachIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_BreachIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_BreachIcon,0x458,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_BreachIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_BreachIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_BreachIcon.InnerSingleton;
}

// SetMousePressedEvent_WrapperImpl @ 14b6fd710

void __cdecl
UDS_VM_WorldMap_BreachIcon::SetMousePressedEvent_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// UDS_VM_WorldMap_BreachIcon @ 14b702700

UDS_VM_WorldMap_BreachIcon * __thiscall
UDS_VM_WorldMap_BreachIcon::UDS_VM_WorldMap_BreachIcon
          (UDS_VM_WorldMap_BreachIcon *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MousePressedEvent)._padding_ = '\0';
  (this->MousePressedEvent).bIsCustomSelected = false;
  (this->MousePressedEvent).bIsLacked = false;
  (this->MousePressedEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_BreachIcon__6B_;
  *(undefined8 *)&(this->MousePressedEvent).Delegate = 0;
  *(undefined8 *)&(this->MousePressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePressedEvent).Delegate.field_0x10 = 0;
  this->BreachBaseID = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_VM_WorldMap_BreachIcon @ 14b702780

UDS_VM_WorldMap_BreachIcon * __thiscall
UDS_VM_WorldMap_BreachIcon::UDS_VM_WorldMap_BreachIcon
          (UDS_VM_WorldMap_BreachIcon *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->MousePressedEvent)._padding_ = '\0';
  (this->MousePressedEvent).bIsCustomSelected = false;
  (this->MousePressedEvent).bIsLacked = false;
  (this->MousePressedEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_BreachIcon__6B_;
  *(undefined8 *)&(this->MousePressedEvent).Delegate = 0;
  *(undefined8 *)&(this->MousePressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePressedEvent).Delegate.field_0x10 = 0;
  this->BreachBaseID = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_VM_WorldMap_BreachIcon @ 14b703970

void __thiscall
UDS_VM_WorldMap_BreachIcon::~UDS_VM_WorldMap_BreachIcon(UDS_VM_WorldMap_BreachIcon *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_BreachIcon__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MousePressedEvent).Delegate);
  pvVar1 = *(void **)&(this->MousePressedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MousePressedEvent).Delegate);
  UDS_VM_WorldMap_Icon::~UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7063f0

IClassDescriptor * __thiscall
UDS_VM_WorldMap_BreachIcon::GetFieldNotificationDescriptor(UDS_VM_WorldMap_BreachIcon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_BreachIcon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7073d0

UClass * __cdecl UDS_VM_WorldMap_BreachIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_BreachIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_BreachIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_BreachIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_BreachIcon,0x458,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMap_BreachIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_BreachIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_BreachIcon.InnerSingleton;
}

// GetTickableTickType @ 14b707560

ETickableTickType __thiscall
UDS_VM_WorldMap_BreachIcon::GetTickableTickType(UDS_VM_WorldMap_BreachIcon *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_BreachIcon @ 14b707790

void __cdecl UDS_VM_WorldMap_BreachIcon::StaticRegisterNativesUDS_VM_WorldMap_BreachIcon(void)

{
  return;
}

// BindModel @ 14c0048c0

void __thiscall UDS_VM_WorldMap_BreachIcon::BindModel(UDS_VM_WorldMap_BreachIcon *this)

{
  UDS_HudManager *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  
  UDS_VM_WorldMap_Icon::BindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_HudManager::GetInst();
  if (pUVar1 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_BreachIcon>
              (&pUVar1->OnHudShowDelegate,(UDS_VM_WorldMap_BreachIcon *)&stack0x00000010,
               (pmf_07a9aa5a *)this);
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->DeleteBreachDelegate,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_BreachIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar2->DeleteBreachDelegate,(UDS_VM_WorldMap_BreachIcon *)&stack0x00000010,
               (pmf_62b05b79 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->BreachIconUpdateDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(__int64,int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_BreachIcon>
              ((TMulticastDelegateRegistration<void___cdecl(__int64,int),FDefaultDelegateUserPolicy>
                *)&pUVar2->BreachIconUpdateDelegate,(UDS_VM_WorldMap_BreachIcon *)&stack0x00000010,
               (pmf_f9825113 *)this);
  }
  return;
}

// InitViewModel @ 14c020580

void __thiscall UDS_VM_WorldMap_BreachIcon::InitViewModel(UDS_VM_WorldMap_BreachIcon *this)

{
  return;
}

// IsUpdate @ 14c023a20

bool __thiscall UDS_VM_WorldMap_BreachIcon::IsUpdate(UDS_VM_WorldMap_BreachIcon *this)

{
  if ((char)this->_padding_ == '\0') {
    return (bool)(char)this->_padding_;
  }
  return false;
}

// OnCloseInit @ 14c028980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_BreachIcon::OnCloseInit(UDS_VM_WorldMap_BreachIcon *this)

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
                (&local_138,"UDS_VM_WorldMap_BreachIcon::OnCloseInit",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x66,L"gameinstance is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnDeleteBreach @ 14c029020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_BreachIcon::OnDeleteBreach(UDS_VM_WorldMap_BreachIcon *this,long64 param_1)

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
  if ((this->BreachBaseID == param_1) &&
     (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals(&this->Widget,(void *)0x0),
     !bVar1)) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_WorldMap_BreachIcon::OnDeleteBreach",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xc2,L"windowManager is nullptr");
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

// OnHudShowEvent @ 14c02a8e0

void __thiscall
UDS_VM_WorldMap_BreachIcon::OnHudShowEvent
          (UDS_VM_WorldMap_BreachIcon *this,EDS_WindowLayerGroupType *param_1)

{
  *(bool *)&this->_padding_ = *param_1 < Hud;
  return;
}

// OnMousePressedEvent @ 14c02d090

void __thiscall
UDS_VM_WorldMap_BreachIcon::OnMousePressedEvent
          (UDS_VM_WorldMap_BreachIcon *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnSetViewModel @ 14c038230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_BreachIcon::OnSetViewModel
          (UDS_VM_WorldMap_BreachIcon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulong64 uVar3;
  code *pcVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_218;
  TSharedPtr<FDS_ViewModelContext_WorldMapBreachIconInfo,1> local_210;
  FWeakObjectPtr local_200;
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
  SafeCast<FDS_ViewModelContext_WorldMapBreachIconInfo>(&local_210,&local_1c8);
  if (local_210.Object == (FDS_ViewModelContext_WorldMapBreachIconInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_210.SharedReferenceCount.ReferenceController);
  }
  else {
    this->_padding_ = (local_210.Object)->_padding_;
    dVar12 = ((local_210.Object)->MapStartPos).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)((local_210.Object)->MapStartPos).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar12;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_210.Object)->_padding_ + 4);
    lVar6 = (local_210.Object)->_padding_;
    this->_padding_ = (local_210.Object)->_padding_;
    this->_padding_ = lVar6;
    dVar12 = ((local_210.Object)->ReferencePosition).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)((local_210.Object)->ReferencePosition).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar12;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_210.Object)->_padding_);
    this->BreachBaseID = (local_210.Object)->BreachBaseID;
    *(int *)&this->_padding_ = (local_210.Object)->IconID;
    (this->Widget).WeakPtr = ((local_210.Object)->Widget).WeakPtr;
    pTVar8 = MakeContext<FDS_ViewModelConext_WorldMapIconToolTip>(&local_1a0);
    plVar1 = &this->_padding_;
    if ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)plVar1 != pTVar8) {
      *plVar1 = (longlong)pTVar8->Object;
      pTVar8->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar8->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
    if (*plVar1 != 0) {
      *(undefined4 *)(*plVar1 + 0x18) = 0x1b1;
      lVar6 = this->_padding_;
      if ((*plVar1 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int *)(*plVar1 + 0x20) = (int)lVar6;
      iVar2 = this->BreachBaseID;
      if ((*plVar1 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int *)(*plVar1 + 0x60) = iVar2;
      if ((local_210.Object == (FDS_ViewModelContext_WorldMapBreachIconInfo *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = (local_210.Object)->BreachEntityID;
      if ((*plVar1 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulong64 *)(*plVar1 + 0x68) = uVar3;
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
    bVar7 = FWeakObjectPtr::IsValid(&local_218);
    if (bVar7) {
      if ((char)this->_padding_ == '\0') {
        *(undefined1 *)&this->_padding_ = 1;
      }
      ADS_MainCharacter::GetMainPlayer();
      bVar7 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_200,(void *)0x0)
      ;
      if (!bVar7) {
        pUVar10 = FWeakObjectPtr::Get(&local_200);
        puVar11 = (undefined8 *)
                  (**(code **)(*(longlong *)&pUVar10[0x29].field_0x10 + 0x78))
                            (&pUVar10[0x29].field_0x10,local_1a8);
        *(undefined8 *)((longlong)&this->_padding_ + 4) = *puVar11;
      }
      dVar12 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
      dVar5 = ((double)this->_padding_ - (double)this->_padding_) * dVar12 *
              (double)*(float *)&this->_padding_;
      dVar12 = ((double)this->_padding_ - (double)this->_padding_) * dVar12 *
               (double)*(float *)&this->_padding_;
      this->_padding_ = (longlong)dVar5;
      this->_padding_ = (longlong)dVar12;
      UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
      UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
      local_188 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_1b8._s_0.X = dVar5;
      local_1b8._s_0.Y = dVar12;
      UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
                ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
                 (TVector2<double> *)&local_188._s_0,(TVector2<double> *)&local_1b8._s_0);
      local_1e0 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.BitNumber;
      local_1e8 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_210.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_VM_WorldMap_BreachIcon::OnSetViewModel",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_178.Ptr,0x8e,L"gameinstance is not valid.");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_210.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c03ae10

void __thiscall UDS_VM_WorldMap_BreachIcon::OnUpdate(UDS_VM_WorldMap_BreachIcon *this,float param_1)

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

// OnUpdateIconID @ 14c03b490

void __thiscall
UDS_VM_WorldMap_BreachIcon::OnUpdateIconID
          (UDS_VM_WorldMap_BreachIcon *this,long64 param_1,int param_2)

{
  FName local_18;
  int local_10;
  
  if (param_1 == this->BreachBaseID) {
    *(int *)&this->_padding_ = param_2;
    local_10 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_18 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c049430

void __thiscall UDS_VM_WorldMap_BreachIcon::UnbindModel(UDS_VM_WorldMap_BreachIcon *this)

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
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->DeleteBreachDelegate,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->BreachIconUpdateDelegate,this);
  }
  return;
}

