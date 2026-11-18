// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetMousePressedEvent_WrapperImpl @ 14b70b840

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WorldMap_WarpIcon::SetMousePressedEvent_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<FDS_WarpDeviceIconData> *this;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  UDS_WorldMapEvent *pUVar15;
  UDS_WindowManager *this_00;
  uint uVar16;
  longlong lVar17;
  float afStackX_8 [2];
  uint auStackX_18 [2];
  FDestructionSentinel FStack_98;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (*(int *)((longlong)param_1 + 0x3b8) != 0) {
    pUVar15 = UDS_WorldMapEvent::GetEvent();
    if (pUVar15 != (UDS_WorldMapEvent *)0x0) {
      this = &pUVar15->WarpDeviceClickDelegate;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x448);
      uVar6 = *(undefined8 *)((longlong)param_1 + 0x450);
      uVar7 = *(undefined8 *)((longlong)param_1 + 0x458);
      uVar8 = *(undefined8 *)((longlong)param_1 + 0x460);
      uVar9 = *(undefined8 *)((longlong)param_1 + 0x468);
      uVar10 = *(undefined8 *)((longlong)param_1 + 0x470);
      bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
      if (bVar11) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FWriteAccessScope *)&FStack_98);
        puVar1 = &(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar11 = false;
        uVar16 = *(int *)&(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar16) {
          lVar17 = (longlong)(int)uVar16 << 4;
          bVar11 = false;
          do {
            uVar14 = 0;
            if ((int)uVar16 < *(int *)&(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x10) {
              uVar14 = ~uVar16 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar2 = *(longlong *)&(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x8;
            if (((*(int *)(lVar17 + 8 + lVar2) == 0) ||
                (plVar3 = *(longlong **)(lVar17 + lVar2), plVar3 == (longlong *)0x0)) ||
               (uStack_78 = uVar5, uStack_70 = uVar6, uStack_68 = uVar7, uStack_60 = uVar8,
               uStack_58 = uVar9, uStack_50 = uVar10, cVar13 = (**(code **)(*plVar3 + 0x68))(),
               cVar13 == '\0')) {
              bVar11 = true;
            }
            lVar17 = lVar17 + -0x10;
            uVar16 = uVar16 - 1;
          } while (-1 < (int)uVar16);
        }
        puVar1 = &(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar11) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
        }
        if (FStack_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_98.Accessor,&FStack_98);
        }
      }
    }
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      afStackX_8[0] = 0.0;
      auStackX_18[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,MapTooltip,auStackX_18,afStackX_8);
    }
  }
  return;
}

// StaticClass @ 14b70b850

UClass * __cdecl UDS_VM_WorldMap_WarpIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_WarpIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_WarpIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_WarpIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_WarpIcon,0x478,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_WarpIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_WarpIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_WarpIcon.InnerSingleton;
}

// UDS_VM_WorldMap_WarpIcon @ 14b712aa0

UDS_VM_WorldMap_WarpIcon * __thiscall
UDS_VM_WorldMap_WarpIcon::UDS_VM_WorldMap_WarpIcon
          (UDS_VM_WorldMap_WarpIcon *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_WarpIcon__6B_;
  *(undefined8 *)&(this->MousePressedEvent).Delegate = 0;
  *(undefined8 *)&(this->MousePressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePressedEvent).Delegate.field_0x10 = 0;
  (this->MousePressedEvent)._padding_ = '\0';
  (this->MousePressedEvent).bIsCustomSelected = false;
  (this->MousePressedEvent).bIsLacked = false;
  (this->MousePressedEvent).bIsCustomDisabled = false;
  (this->WarpDeviceIconData).StuffTableID = 0;
  (this->WarpDeviceIconData).WarpLoactionID = 0;
  (this->WarpDeviceIconData).StuffWarpDeviceID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Y = (double)uVar1;
  (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UDS_VM_WorldMap_WarpIcon @ 14b712b30

UDS_VM_WorldMap_WarpIcon * __thiscall
UDS_VM_WorldMap_WarpIcon::UDS_VM_WorldMap_WarpIcon
          (UDS_VM_WorldMap_WarpIcon *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_WarpIcon__6B_;
  *(undefined8 *)&(this->MousePressedEvent).Delegate = 0;
  *(undefined8 *)&(this->MousePressedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MousePressedEvent).Delegate.field_0x10 = 0;
  (this->MousePressedEvent)._padding_ = '\0';
  (this->MousePressedEvent).bIsCustomSelected = false;
  (this->MousePressedEvent).bIsLacked = false;
  (this->MousePressedEvent).bIsCustomDisabled = false;
  (this->WarpDeviceIconData).StuffTableID = 0;
  (this->WarpDeviceIconData).WarpLoactionID = 0;
  (this->WarpDeviceIconData).StuffWarpDeviceID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Y = (double)uVar1;
  (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_VM_WorldMap_WarpIcon @ 14b713cd0

void __thiscall UDS_VM_WorldMap_WarpIcon::~UDS_VM_WorldMap_WarpIcon(UDS_VM_WorldMap_WarpIcon *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_WarpIcon__6B_;
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

// GetFieldNotificationDescriptor @ 14b7170f0

IClassDescriptor * __thiscall
UDS_VM_WorldMap_WarpIcon::GetFieldNotificationDescriptor(UDS_VM_WorldMap_WarpIcon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_WarpIcon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b718610

UClass * __cdecl UDS_VM_WorldMap_WarpIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_WarpIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_WarpIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_WarpIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_WarpIcon,0x478,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldMap_WarpIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_WarpIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_WarpIcon.InnerSingleton;
}

// GetTickableTickType @ 14b718840

ETickableTickType __thiscall
UDS_VM_WorldMap_WarpIcon::GetTickableTickType(UDS_VM_WorldMap_WarpIcon *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_WarpIcon @ 14b718b40

void __cdecl UDS_VM_WorldMap_WarpIcon::StaticRegisterNativesUDS_VM_WorldMap_WarpIcon(void)

{
  return;
}

// BindModel @ 14c06d2b0

void __thiscall UDS_VM_WorldMap_WarpIcon::BindModel(UDS_VM_WorldMap_WarpIcon *this)

{
  UDS_HudManager *pUVar1;
  
  UDS_VM_WorldMap_Icon::BindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_HudManager::GetInst();
  if (pUVar1 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_WarpIcon>
              (&pUVar1->OnHudShowDelegate,(UDS_VM_WorldMap_WarpIcon *)&stack0x00000010,
               (pmf_03d9ad23 *)this);
  }
  return;
}

// InitViewModel @ 14c08ca50

void __thiscall UDS_VM_WorldMap_WarpIcon::InitViewModel(UDS_VM_WorldMap_WarpIcon *this)

{
  return;
}

// IsUpdate @ 14c0903a0

bool __thiscall UDS_VM_WorldMap_WarpIcon::IsUpdate(UDS_VM_WorldMap_WarpIcon *this)

{
  if ((char)this->_padding_ == '\0') {
    return (bool)(char)this->_padding_;
  }
  return false;
}

// OnCloseInit @ 14c093380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_WarpIcon::OnCloseInit(UDS_VM_WorldMap_WarpIcon *this)

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
                (&local_138,"UDS_VM_WorldMap_WarpIcon::OnCloseInit",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x5b,L"gameinstance is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnHudShowEvent @ 14c095920

void __thiscall
UDS_VM_WorldMap_WarpIcon::OnHudShowEvent
          (UDS_VM_WorldMap_WarpIcon *this,EDS_WindowLayerGroupType *param_1)

{
  *(bool *)&this->_padding_ = *param_1 < Hud;
  return;
}

// OnMousePressedEvent @ 14c0970b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_WarpIcon::OnMousePressedEvent
          (UDS_VM_WorldMap_WarpIcon *this,FDS_ButtonEventField *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<FDS_WarpDeviceIconData> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  long64 lVar5;
  long64 lVar6;
  long64 lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  UDS_WorldMapEvent *pUVar15;
  UDS_WindowManager *this_01;
  uint uVar16;
  longlong lVar17;
  float local_res8 [2];
  uint local_res18 [2];
  FDestructionSentinel local_98;
  long64 local_78;
  long64 lStack_70;
  long64 local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  
  if ((int)this->_padding_ != 0) {
    pUVar15 = UDS_WorldMapEvent::GetEvent();
    if (pUVar15 != (UDS_WorldMapEvent *)0x0) {
      this_00 = &pUVar15->WarpDeviceClickDelegate;
      lVar5 = (this->WarpDeviceIconData).StuffTableID;
      lVar6 = (this->WarpDeviceIconData).WarpLoactionID;
      lVar7 = (this->WarpDeviceIconData).StuffWarpDeviceID;
      dVar8 = (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.X;
      dVar9 = (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Y;
      dVar10 = (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Z;
      bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar11) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_98);
        puVar1 = &(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar11 = false;
        uVar16 = *(int *)&(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar16) {
          lVar17 = (longlong)(int)uVar16 << 4;
          bVar11 = false;
          do {
            uVar14 = 0;
            if ((int)uVar16 < *(int *)&(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x10) {
              uVar14 = ~uVar16 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar2 = *(longlong *)&(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x8;
            if (((*(int *)(lVar17 + 8 + lVar2) == 0) ||
                (plVar3 = *(longlong **)(lVar17 + lVar2), plVar3 == (longlong *)0x0)) ||
               (local_78 = lVar5, lStack_70 = lVar6, local_68 = lVar7, dStack_60 = dVar8,
               local_58 = dVar9, dStack_50 = dVar10, cVar13 = (**(code **)(*plVar3 + 0x68))(),
               cVar13 == '\0')) {
              bVar11 = true;
            }
            lVar17 = lVar17 + -0x10;
            uVar16 = uVar16 - 1;
          } while (-1 < (int)uVar16);
        }
        puVar1 = &(pUVar15->WarpDeviceClickDelegate).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar11) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
      }
    }
    this_01 = UDS_WindowManager::GetInst();
    if (this_01 != (UDS_WindowManager *)0x0) {
      local_res8[0] = 0.0;
      local_res18[0] = 0;
      UDS_WindowManager::CloseWindow(this_01,MapTooltip,local_res18,local_res8);
    }
  }
  return;
}

// OnSetViewModel @ 14c09b350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_WarpIcon::OnSetViewModel
          (UDS_VM_WorldMap_WarpIcon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *this_00;
  code *pcVar1;
  double dVar2;
  long64 lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar7;
  FDS_StuffWarpDeviceTableRow *pFVar8;
  FDS_ViewModelConext_WorldMapIconToolTip *pFVar9;
  UDS_LogManager *pUVar10;
  UObject *pUVar11;
  undefined8 *puVar12;
  UDS_ActivateWarpDeviceData *this_01;
  double dVar13;
  undefined1 auStackY_368 [32];
  FWeakObjectPtr local_338;
  FWeakObjectPtr local_330;
  FWeakObjectPtr local_328;
  TSharedPtr<FDS_ViewModelContext_WorldMapWarpIconInfo,1> local_320;
  UDS_GameInstance *local_310;
  FName local_308;
  int local_300;
  TSharedPtr<FDS_ViewModelContext,1> local_2f8;
  TSharedPtr<FDS_ViewModelContext,1> local_2e8;
  TVector2<double>_u_0 local_2d8;
  undefined1 local_2c8 [8];
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_2c0;
  TVector2<double>_u_0 local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_2f8.Object = param_1->Object;
  local_2f8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_WorldMap_Icon::OnSetViewModel((UDS_VM_WorldMap_Icon *)this,&local_2f8);
  local_2e8.Object = param_1->Object;
  local_2e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapWarpIconInfo>(&local_320,&local_2e8);
  if (local_320.Object == (FDS_ViewModelContext_WorldMapWarpIconInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_320.SharedReferenceCount.ReferenceController);
  }
  else {
    this->_padding_ = (local_320.Object)->_padding_;
    lVar4 = (local_320.Object)->_padding_;
    this->_padding_ = (local_320.Object)->_padding_;
    this->_padding_ = lVar4;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_320.Object)->_padding_ + 4);
    lVar4 = (local_320.Object)->_padding_;
    this->_padding_ = (local_320.Object)->_padding_;
    this->_padding_ = lVar4;
    lVar4 = (local_320.Object)->_padding_;
    this->_padding_ = (local_320.Object)->_padding_;
    this->_padding_ = lVar4;
    lVar3 = ((local_320.Object)->WarpDeviceIconData).WarpLoactionID;
    (this->WarpDeviceIconData).StuffTableID = ((local_320.Object)->WarpDeviceIconData).StuffTableID;
    (this->WarpDeviceIconData).WarpLoactionID = lVar3;
    dVar2 = ((local_320.Object)->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.X;
    (this->WarpDeviceIconData).StuffWarpDeviceID =
         ((local_320.Object)->WarpDeviceIconData).StuffWarpDeviceID;
    (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.X = dVar2;
    dVar2 = ((local_320.Object)->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Z;
    (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Y =
         ((local_320.Object)->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Y;
    (this->WarpDeviceIconData).SpawnPosition.field0_0x0._s_0.Z = dVar2;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_320.Object)->_padding_);
    pTVar7 = MakeContext<FDS_ViewModelConext_WorldMapIconToolTip>(&local_2c0);
    this_00 = &this->_padding_;
    if ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)this_00 != pTVar7) {
      *this_00 = (longlong)pTVar7->Object;
      pTVar7->Object = (FDS_ViewModelConext_WorldMapIconToolTip *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar7->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c0.SharedReferenceCount.ReferenceController);
    if (*this_00 != 0) {
      *(undefined4 *)(*this_00 + 0x18) = 0x1b1;
      lVar4 = this->_padding_;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int *)(*this_00 + 0x20) = (int)lVar4;
      pFVar8 = FDS_StuffWarpDeviceTableRow::Get((this->WarpDeviceIconData).StuffWarpDeviceID,true);
      if (pFVar8 != (FDS_StuffWarpDeviceTableRow *)0x0) {
        iVar6 = pFVar8->ID_Zone;
        pFVar9 = TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1>::operator->
                           ((TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *)this_00);
        pFVar9->ZoneID = iVar6;
      }
    }
    local_310 = UDS_GameInstance::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_310 != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_310);
    }
    local_338.ObjectIndex = 0;
    local_338.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_310 != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_310);
    }
    FWeakObjectPtr::operator=(&local_338,(FObjectPtr)&local_310);
    bVar5 = FWeakObjectPtr::IsValid(&local_338);
    if (bVar5) {
      if ((char)this->_padding_ == '\0') {
        *(undefined1 *)&this->_padding_ = 1;
      }
      ADS_MainCharacter::GetMainPlayer();
      bVar5 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_330,(void *)0x0)
      ;
      if (!bVar5) {
        pUVar11 = FWeakObjectPtr::Get(&local_330);
        puVar12 = (undefined8 *)
                  (**(code **)(*(longlong *)&pUVar11[0x29].field_0x10 + 0x78))
                            (&pUVar11[0x29].field_0x10,local_2c8);
        *(undefined8 *)((longlong)&this->_padding_ + 4) = *puVar12;
      }
      dVar13 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
      dVar2 = ((double)this->_padding_ - (double)this->_padding_) * dVar13 *
              (double)*(float *)&this->_padding_;
      dVar13 = ((double)this->_padding_ - (double)this->_padding_) * dVar13 *
               (double)*(float *)&this->_padding_;
      this->_padding_ = (longlong)dVar2;
      this->_padding_ = (longlong)dVar13;
      UDS_ActivateWarpDeviceData::GetData
                ((ulong64)&local_328,UDS_PlayerData::MainPlayerEntityID,false);
      bVar5 = TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr> *)&local_328,
                         (void *)0x0);
      if (bVar5) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 != (UDS_LogManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          local_178._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_178,"UDS_VM_WorldMap_WarpIcon::SetWarpDeviceIcon",0x2b,Yes);
          UDS_LogManager::PrintLog
                    (pUVar10,1,Warning,local_178.Ptr,0xb0,
                     L"warpDeviceIconCommonDataTableRow nullptr");
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
        }
      }
      else {
        this_01 = (UDS_ActivateWarpDeviceData *)FWeakObjectPtr::Get(&local_328);
        bVar5 = UDS_ActivateWarpDeviceData::IsActivateWarpDevice
                          (this_01,(int)(this->WarpDeviceIconData).StuffTableID);
        if (bVar5) {
          iVar6 = DS_CommonDataHelper::IdWarpDeviceIconActivation();
        }
        else {
          iVar6 = DS_CommonDataHelper::IdWarpDeviceIconDeactivation();
        }
        *(int *)&this->_padding_ = iVar6;
        local_300 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.BitNumber;
        local_308 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_308);
      }
      UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
      UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
      local_2a8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_2d8._s_0.X = dVar2;
      local_2d8._s_0.Y = dVar13;
      UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
                ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
                 (TVector2<double> *)&local_2a8._s_0,(TVector2<double> *)&local_2d8._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_320.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_298._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_298,"UDS_VM_WorldMap_WarpIcon::OnSetViewModel",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar10,1,Warning,local_298.Ptr,0x85,L"gameinstance is not valid.")
        ;
        if ((void *)local_298._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_298._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_320.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c09cdb0

void __thiscall UDS_VM_WorldMap_WarpIcon::OnUpdate(UDS_VM_WorldMap_WarpIcon *this,float param_1)

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

// SetWarpDeviceIcon @ 14c0a1990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_WarpIcon::SetWarpDeviceIcon(UDS_VM_WorldMap_WarpIcon *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_ActivateWarpDeviceData *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_ActivateWarpDeviceData::GetData((ulong64)local_158,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr> *)local_158,
                     (void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMap_WarpIcon::SetWarpDeviceIcon",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xb0,L"warpDeviceIconCommonDataTableRow nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_ActivateWarpDeviceData *)FWeakObjectPtr::Get(local_158);
    bVar1 = UDS_ActivateWarpDeviceData::IsActivateWarpDevice
                      (this_00,(int)(this->WarpDeviceIconData).StuffTableID);
    if (bVar1) {
      iVar2 = DS_CommonDataHelper::IdWarpDeviceIconActivation();
    }
    else {
      iVar2 = DS_CommonDataHelper::IdWarpDeviceIconDeactivation();
    }
    *(int *)&this->_padding_ = iVar2;
    local_140 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_148 = UDS_VM_WorldMap_Icon::FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  return;
}

// UnbindModel @ 14c0adfe0

void __thiscall UDS_VM_WorldMap_WarpIcon::UnbindModel(UDS_VM_WorldMap_WarpIcon *this)

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

