// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b70ae60

UClass * __cdecl UDS_VM_WorldMap_QuestIcon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_QuestIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_QuestIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_QuestIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_QuestIcon,0x478,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_WorldMap_QuestIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_QuestIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_QuestIcon.InnerSingleton;
}

// UDS_VM_WorldMap_QuestIcon @ 14b712760

UDS_VM_WorldMap_QuestIcon * __thiscall
UDS_VM_WorldMap_QuestIcon::UDS_VM_WorldMap_QuestIcon
          (UDS_VM_WorldMap_QuestIcon *this,FVTableHelper *param_1)

{
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_QuestIcon__6B_;
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
  this->QuestID = 0;
  this->QuestObjectiveID = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_WorldMap_QuestIcon @ 14b7127f0

UDS_VM_WorldMap_QuestIcon * __thiscall
UDS_VM_WorldMap_QuestIcon::UDS_VM_WorldMap_QuestIcon
          (UDS_VM_WorldMap_QuestIcon *this,FObjectInitializer *param_1)

{
  UDS_VM_WorldMap_Icon::UDS_VM_WorldMap_Icon((UDS_VM_WorldMap_Icon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_QuestIcon__6B_;
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
  this->QuestID = 0;
  this->QuestObjectiveID = 0;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_WorldMap_QuestIcon @ 14b713b50

void __thiscall
UDS_VM_WorldMap_QuestIcon::~UDS_VM_WorldMap_QuestIcon(UDS_VM_WorldMap_QuestIcon *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_QuestIcon__6B_;
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
  this->_padding_ = (longlong)&UDS_VM_WorldMap_Icon::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_VM_WorldMap_Icon::_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMap_Icon__6B_;
  UDS_VM_WorldMapIndexBase::~UDS_VM_WorldMapIndexBase((UDS_VM_WorldMapIndexBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716fa0

IClassDescriptor * __thiscall
UDS_VM_WorldMap_QuestIcon::GetFieldNotificationDescriptor(UDS_VM_WorldMap_QuestIcon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMap_QuestIcon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7183d0

UClass * __cdecl UDS_VM_WorldMap_QuestIcon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMap_QuestIcon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMap_QuestIcon",
               &Z_Registration_Info_UClass_UDS_VM_WorldMap_QuestIcon.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMap_QuestIcon,0x478,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_WorldMap_QuestIcon>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMap_QuestIcon>,local_res8,
               UDS_VM_WorldMap_Icon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMap_QuestIcon.InnerSingleton;
}

// GetTickableTickType @ 14b718820

ETickableTickType __thiscall
UDS_VM_WorldMap_QuestIcon::GetTickableTickType(UDS_VM_WorldMap_QuestIcon *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_WorldMap_QuestIcon @ 14b718b10

void __cdecl UDS_VM_WorldMap_QuestIcon::StaticRegisterNativesUDS_VM_WorldMap_QuestIcon(void)

{
  return;
}

// BindModel @ 14c06d050

void __thiscall UDS_VM_WorldMap_QuestIcon::BindModel(UDS_VM_WorldMap_QuestIcon *this)

{
  UDS_HudManager *pUVar1;
  UDS_QuestEvent *pUVar2;
  
  UDS_VM_WorldMap_Icon::BindModel((UDS_VM_WorldMap_Icon *)this);
  pUVar1 = UDS_HudManager::GetInst();
  if (pUVar1 != (UDS_HudManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_WorldMap_QuestIcon>
              (&pUVar1->OnHudShowDelegate,(UDS_VM_WorldMap_QuestIcon *)&stack0x00000010,
               (pmf_3753e271 *)this);
  }
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedTraceQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldMap_QuestIcon>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedTraceQuestDelegate,(UDS_VM_WorldMap_QuestIcon *)&stack0x00000010,
               (pmf_f1c40aff *)this);
  }
  return;
}

// InitViewModel @ 14c08ca20

void __thiscall UDS_VM_WorldMap_QuestIcon::InitViewModel(UDS_VM_WorldMap_QuestIcon *this)

{
  return;
}

// IsUpdate @ 14c090360

bool __thiscall UDS_VM_WorldMap_QuestIcon::IsUpdate(UDS_VM_WorldMap_QuestIcon *this)

{
  if ((char)this->_padding_ == '\0') {
    return (bool)(char)this->_padding_;
  }
  return false;
}

// OnChangedTraceQuestCallback @ 14c092b00

void __thiscall
UDS_VM_WorldMap_QuestIcon::OnChangedTraceQuestCallback(UDS_VM_WorldMap_QuestIcon *this,int param_1)

{
  int iVar1;
  int iVar2;
  UDS_QuestManager *this_00;
  FName *pFVar3;
  FName local_res18 [2];
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    iVar1 = this->QuestID;
    iVar2 = UDS_QuestManager::GetTraceQuestID(this_00);
    if (iVar2 == iVar1) {
      PlayAnimation(this);
      return;
    }
    pFVar3 = ::FName::FName(local_res18,"Loop_Quest_Anim");
    (this->AnimationEvent).AnimationName = *pFVar3;
    (this->AnimationEvent).AnimationEventType = StopAnimation;
    (this->AnimationEvent).NumberOfLoops = 1;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnCloseInit @ 14c093200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldMap_QuestIcon::OnCloseInit(UDS_VM_WorldMap_QuestIcon *this)

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
                (&local_138,"UDS_VM_WorldMap_QuestIcon::OnCloseInit",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x61,L"gameinstance is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnHudShowEvent @ 14c0958e0

void __thiscall
UDS_VM_WorldMap_QuestIcon::OnHudShowEvent
          (UDS_VM_WorldMap_QuestIcon *this,EDS_WindowLayerGroupType *param_1)

{
  *(bool *)&this->_padding_ = *param_1 < Hud;
  return;
}

// OnSetViewModel @ 14c09ab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMap_QuestIcon::OnSetViewModel
          (UDS_VM_WorldMap_QuestIcon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> *pTVar8;
  UDS_LogManager *pUVar9;
  UDS_QuestManager *this_00;
  UObject *pUVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined1 auStackY_238 [32];
  TSharedPtr<FDS_ViewModelContext_WorldMapQuestIconInfo,1> local_208;
  FWeakObjectPtr local_1f8;
  FWeakObjectPtr local_1f0;
  UDS_GameInstance *local_1e8;
  TSharedPtr<FDS_ViewModelContext,1> local_1e0;
  TSharedPtr<FDS_ViewModelContext,1> local_1d0;
  TVector2<double>_u_0 local_1b8;
  undefined1 local_1a8 [8];
  TSharedPtr<FDS_ViewModelConext_WorldMapIconToolTip,1> local_1a0;
  TVector2<double>_u_0 local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1e0.Object = param_1->Object;
  local_1e0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_WorldMap_Icon::OnSetViewModel((UDS_VM_WorldMap_Icon *)this,&local_1e0);
  local_1d0.Object = param_1->Object;
  local_1d0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapQuestIconInfo>(&local_208,&local_1d0);
  if (local_208.Object == (FDS_ViewModelContext_WorldMapQuestIconInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
  else {
    this->_padding_ = (local_208.Object)->_padding_;
    dVar4 = ((local_208.Object)->MapStartPos).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)((local_208.Object)->MapStartPos).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar4;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&(local_208.Object)->_padding_ + 4);
    lVar5 = (local_208.Object)->_padding_;
    this->_padding_ = (local_208.Object)->_padding_;
    this->_padding_ = lVar5;
    lVar5 = (local_208.Object)->_padding_;
    this->_padding_ = (local_208.Object)->_padding_;
    this->_padding_ = lVar5;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)&(local_208.Object)->_padding_);
    this->QuestID = (local_208.Object)->QuestID;
    this->QuestObjectiveID = (local_208.Object)->QuestObjectiveID;
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
      iVar2 = this->QuestID;
      if ((*plVar1 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(*plVar1 + 0x80) = iVar2;
      iVar2 = this->QuestObjectiveID;
      if ((*plVar1 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(*plVar1 + 0x84) = iVar2;
      if ((local_208.Object == (FDS_ViewModelContext_WorldMapQuestIconInfo *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar5 = (local_208.Object)->_padding_;
      if ((*plVar1 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(*plVar1 + 0x28) = (int)lVar5;
    }
    local_1e8 = UDS_GameInstance::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1e8 != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1e8);
    }
    local_1f8.ObjectIndex = 0;
    local_1f8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_1e8 != (UDS_GameInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_1e8);
    }
    FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1e8);
    bVar6 = FWeakObjectPtr::IsValid(&local_1f8);
    if (bVar6) {
      this_00 = UDS_QuestManager::GetInst();
      if (this_00 != (UDS_QuestManager *)0x0) {
        if ((char)this->_padding_ == '\0') {
          *(undefined1 *)&this->_padding_ = 1;
        }
        ADS_MainCharacter::GetMainPlayer();
        bVar6 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_1f0,
                           (void *)0x0);
        if (!bVar6) {
          pUVar10 = FWeakObjectPtr::Get(&local_1f0);
          puVar11 = (undefined8 *)
                    (**(code **)(*(longlong *)&pUVar10[0x29].field_0x10 + 0x78))
                              (&pUVar10[0x29].field_0x10,local_1a8);
          *(undefined8 *)((longlong)&this->_padding_ + 4) = *puVar11;
        }
        dVar12 = __real_3ff0000000000000 / (double)*(float *)((longlong)&this->_padding_ + 4);
        dVar4 = ((double)this->_padding_ - (double)this->_padding_) * dVar12 *
                (double)*(float *)&this->_padding_;
        dVar12 = ((double)this->_padding_ - (double)this->_padding_) * dVar12 *
                 (double)*(float *)&this->_padding_;
        this->_padding_ = (longlong)dVar4;
        this->_padding_ = (longlong)dVar12;
        UDS_VM_WorldMapIndexBase::SetIsZoomStepActivate((UDS_VM_WorldMapIndexBase *)this,LEVEL3);
        UDS_VM_WorldMapIndexBase::OnUpdateVisibility((UDS_VM_WorldMapIndexBase *)this);
        iVar2 = this->QuestID;
        iVar7 = UDS_QuestManager::GetTraceQuestID(this_00);
        if (iVar7 == iVar2) {
          PlayAnimation(this);
        }
        local_188 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        local_1b8._s_0.X = dVar4;
        local_1b8._s_0.Y = dVar12;
        UDS_VM_WorldMap_Icon::WorldMapChangeIconPosition
                  ((UDS_VM_WorldMap_Icon *)this,*(float *)&this->_padding_,
                   (TVector2<double> *)&local_188._s_0,(TVector2<double> *)&local_1b8._s_0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_208.SharedReferenceCount.ReferenceController);
        goto LAB_14c09b030;
      }
    }
    else {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_VM_WorldMap_QuestIcon::OnSetViewModel",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_178.Ptr,0x89,L"gameinstance is not valid.");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
LAB_14c09b030:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14c09cbd0

void __thiscall UDS_VM_WorldMap_QuestIcon::OnUpdate(UDS_VM_WorldMap_QuestIcon *this,float param_1)

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

// PlayAnimation @ 14c09ea00

void __thiscall UDS_VM_WorldMap_QuestIcon::PlayAnimation(UDS_VM_WorldMap_QuestIcon *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Loop_Quest_Anim");
  (this->AnimationEvent).AnimationName = *pFVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  (this->AnimationEvent).NumberOfLoops = 0;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// StopAnimation @ 14c0ac6a0

void __thiscall UDS_VM_WorldMap_QuestIcon::StopAnimation(UDS_VM_WorldMap_QuestIcon *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Loop_Quest_Anim");
  (this->AnimationEvent).AnimationName = *pFVar1;
  (this->AnimationEvent).AnimationEventType = StopAnimation;
  (this->AnimationEvent).NumberOfLoops = 1;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14c0adf10

void __thiscall UDS_VM_WorldMap_QuestIcon::UnbindModel(UDS_VM_WorldMap_QuestIcon *this)

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

