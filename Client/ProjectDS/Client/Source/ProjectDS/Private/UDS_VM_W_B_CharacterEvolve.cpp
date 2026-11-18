// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b71b1d0

UClass * __cdecl UDS_VM_W_B_CharacterEvolve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_CharacterEvolve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_CharacterEvolve",
               &Z_Registration_Info_UClass_UDS_VM_W_B_CharacterEvolve.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_CharacterEvolve,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_B_CharacterEvolve>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_CharacterEvolve>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_CharacterEvolve.InnerSingleton;
}

// UDS_VM_W_B_CharacterEvolve @ 14b71d2a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_B_CharacterEvolve * __thiscall
UDS_VM_W_B_CharacterEvolve::UDS_VM_W_B_CharacterEvolve
          (UDS_VM_W_B_CharacterEvolve *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_CharacterEvolve__6B_;
  (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_CharEvolveLevelList).field0_0x0.DebugPtr = (UDS_VM_CharEvolveLevelList *)0x0;
  (this->VM_SelectedCharEvolveLevel).field0_0x0.DebugPtr = (UDS_VM_CharEvolveLevel *)0x0;
  (this->StartAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->StartAnimationEvent).AnimationName.Number = 0;
  (this->StartAnimationEvent).AnimationPlayTime = 0.0;
  (this->StartAnimationEvent).AnimationEventType = None;
  (this->StartAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->StartAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->StartAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->StartAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->StartAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->StartAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->StartAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->CharEntityID = 0;
  this->SelectedCharEvolveLevel = 0;
  (this->StartAnimationEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_B_CharacterEvolve @ 14b71d350

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_B_CharacterEvolve * __thiscall
UDS_VM_W_B_CharacterEvolve::UDS_VM_W_B_CharacterEvolve
          (UDS_VM_W_B_CharacterEvolve *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_CharacterEvolve__6B_;
  (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr = (UDS_VM_CharInfoData *)0x0;
  (this->VM_CharEvolveLevelList).field0_0x0.DebugPtr = (UDS_VM_CharEvolveLevelList *)0x0;
  (this->VM_SelectedCharEvolveLevel).field0_0x0.DebugPtr = (UDS_VM_CharEvolveLevel *)0x0;
  (this->StartAnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->StartAnimationEvent).AnimationName.Number = 0;
  (this->StartAnimationEvent).AnimationPlayTime = 0.0;
  (this->StartAnimationEvent).AnimationEventType = None;
  (this->StartAnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->StartAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->StartAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->StartAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->StartAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->StartAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->StartAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->CharEntityID = 0;
  this->SelectedCharEvolveLevel = 0;
  (this->StartAnimationEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_B_CharacterEvolve @ 14b71f260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterEvolve::~UDS_VM_W_B_CharacterEvolve(UDS_VM_W_B_CharacterEvolve *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_B_CharacterEvolve__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->StartAnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->StartAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StartAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->StartAnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->StartAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->StartAnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b720f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_B_CharacterEvolve::GetFieldNotificationDescriptor(UDS_VM_W_B_CharacterEvolve *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_B_CharacterEvolve::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7213a0

UClass * __cdecl UDS_VM_W_B_CharacterEvolve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_B_CharacterEvolve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_B_CharacterEvolve",
               &Z_Registration_Info_UClass_UDS_VM_W_B_CharacterEvolve.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_B_CharacterEvolve,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_B_CharacterEvolve>,
               InternalVTableHelperCtorCaller<UDS_VM_W_B_CharacterEvolve>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_B_CharacterEvolve.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_B_CharacterEvolve @ 14b721b20

void __cdecl UDS_VM_W_B_CharacterEvolve::StaticRegisterNativesUDS_VM_W_B_CharacterEvolve(void)

{
  return;
}

// BindModel @ 14bf9c450

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_CharacterEvolve::BindModel(UDS_VM_W_B_CharacterEvolve *this)

{
  UDS_CharacterUIEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectCharEvolve,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_CharacterEvolve>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectCharEvolve,(UDS_VM_W_B_CharacterEvolve *)&stack0x00000010,
               (pmf_8c6f76ea *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdateCharEvolveInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_CharacterEvolve>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateCharEvolveInfo,(UDS_VM_W_B_CharacterEvolve *)&stack0x00000010,
               (pmf_53a85028 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateCharEvolveLevel,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_CharacterEvolve>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateCharEvolveLevel,(UDS_VM_W_B_CharacterEvolve *)&stack0x00000010,
               (pmf_8c6f76ea *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSuccessCharEvolveComplete,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_B_CharacterEvolve>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSuccessCharEvolveComplete,(UDS_VM_W_B_CharacterEvolve *)&stack0x00000010,
               (pmf_53a85028 *)this);
  }
  return;
}

// OnCloseInit @ 14bfbbd90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_W_B_CharacterEvolve::OnCloseInit(UDS_VM_W_B_CharacterEvolve *this)

{
  UDS_ViewerManager *this_00;
  
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 != (UDS_ViewerManager *)0x0) {
    UDS_ViewerManager::CloseViewerScene(this_00);
  }
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnSelectCharacterEvolveLevel @ 14bfc0a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterEvolve::OnSelectCharacterEvolveLevel
          (UDS_VM_W_B_CharacterEvolve *this,int param_1)

{
  if (this->SelectedCharEvolveLevel != param_1) {
    this->SelectedCharEvolveLevel = param_1;
    UpdateSelectedCharacterEvolveLevel(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14bfc49e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterEvolve::OnSetViewModel
          (UDS_VM_W_B_CharacterEvolve *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ulong64 uVar2;
  UDS_ViewerManager *this_00;
  EDS_ViewerSceneType local_res8 [2];
  int local_res10 [2];
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  uVar2 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  this->CharEntityID = uVar2;
  this_00 = UDS_ViewerManager::GetInst();
  if (this_00 != (UDS_ViewerManager *)0x0) {
    local_res8[0] = CharacterEquip;
    UDS_ViewerManager::OpenViewerScene(this_00,local_res8);
    local_res8[0] = None;
    local_res10[0] = UDS_PlayerData::GetMainPlayerCurrentCharID();
    UDS_ViewerManager::SetViewerCharacter(this_00,local_res10,(int *)local_res8);
  }
  UpdateSelectedCharacterInfo(this);
  UpdateCharacterEvolveLevelList(this,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSuccessCharacterEvolveComplete @ 14bfcff70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterEvolve::OnSuccessCharacterEvolveComplete(UDS_VM_W_B_CharacterEvolve *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Ani_Evolve_Complete_BG");
  (this->StartAnimationEvent).AnimationName = *pFVar1;
  (this->StartAnimationEvent).AnimationEventType = PlayForward;
  (this->StartAnimationEvent).NumberOfLoops = 1;
  local_10 = FFieldNotificationClassDescriptor::StartAnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StartAnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnUpdateCharacterEvolveInfo @ 14bfd1ef0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterEvolve::OnUpdateCharacterEvolveInfo(UDS_VM_W_B_CharacterEvolve *this)

{
  UpdateSelectedCharacterInfo(this);
  UpdateCharacterEvolveLevelList(this,true);
  UpdateSelectedCharacterEvolveLevel(this);
  return;
}

// OnUpdateCharacterEvolveLevelInfo @ 14bfd1f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterEvolve::OnUpdateCharacterEvolveLevelInfo
          (UDS_VM_W_B_CharacterEvolve *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_CharEvolveLevel *pUVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  longlong *plVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  undefined1 auStack_f8 [32];
  undefined8 uStack_d8;
  FName FStack_c8;
  int iStack_c0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_b8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_a8;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  if (this->SelectedCharEvolveLevel != param_1) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar10 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_SelectedCharEvolveLevel).field0_0x0.DebugPtr == (UDS_VM_CharEvolveLevel *)0x0) {
    uStack_d8 = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_CharEvolveLevel_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_VM_CharEvolveLevel_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar3);
    auStack_98._48_8_ = (FObjectInstancingGraph *)0x0;
    auStack_98._56_8_ = (UPackage *)0x0;
    auStack_98._16_4_ = 0;
    auStack_98._20_4_ = 0;
    auStack_98._24_4_ = RF_Transient;
    auStack_98._40_8_ = (UObject *)0x0;
    auStack_98[0x20] = false;
    auStack_98._8_8_ = this;
    pUVar5 = (UDS_VM_CharEvolveLevel *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar8 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_CharEvolveLevel *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CharEvolveLevel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_SelectedCharEvolveLevel).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_CharEvolveLevel *)0x0) {
      return;
    }
  }
  pFVar6 = ::operator_new(0x30);
  pFVar9 = pFVar10;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
    *(undefined2 *)&((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1].field_0x1 = 0;
    ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1].field_0x3 = 0;
    *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
    (pFVar6->ViewModelName).ComparisonIndex = 0;
    (pFVar6->ViewModelName).Number = 0;
    pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CharEvolveLevel__6B_;
    pFVar6[1]._padding_ = 0;
    *(atomic<int> *)&pFVar6[1].DerivedStaticStruct = (atomic<int>)0x0;
    *(undefined1 *)((atomic<int> *)&pFVar6[1].DerivedStaticStruct + 1) = 0;
    pFVar9 = pFVar6;
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharEvolveLevel__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar9;
    pFVar10 = pFVar6;
  }
  if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar7 = FDS_ViewModelContext_CharEvolveLevel::StaticStruct();
  *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar7;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    TStack_b8.Object = pFVar9;
    TStack_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelContextManager::RegisterContext(this_00,&TStack_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_b8.SharedReferenceCount.ReferenceController);
  }
  pFVar9->ViewModelTemplateKey = CharEvolveLevel;
  pFVar9[1]._padding_ = this->CharEntityID;
  *(int *)&pFVar9[1].DerivedStaticStruct = this->SelectedCharEvolveLevel;
  *(undefined1 *)((atomic<int> *)&pFVar9[1].DerivedStaticStruct + 1) = 0;
  pUVar5 = (this->VM_SelectedCharEvolveLevel).field0_0x0.DebugPtr;
  if (pFVar10 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar10->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
    UNLOCK();
  }
  TStack_a8.Object = pFVar9;
  TStack_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&TStack_a8);
  iStack_c0 = FFieldNotificationClassDescriptor::VM_SelectedCharEvolveLevel.BitNumber;
  FStack_c8 = FFieldNotificationClassDescriptor::VM_SelectedCharEvolveLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return;
}

// UnbindModel @ 14bfdf840

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_B_CharacterEvolve::UnbindModel(UDS_VM_W_B_CharacterEvolve *this)

{
  UDS_CharacterUIEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectCharEvolve,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdateCharEvolveInfo
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateCharEvolveLevel,this);
  }
  return;
}

// UpdateCharacterEvolveLevelList @ 14bfe1ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterEvolve::UpdateCharacterEvolveLevelList
          (UDS_VM_W_B_CharacterEvolve *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_CharEvolveLevelList *pUVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  longlong *plVar8;
  FDS_ViewModelContext *pFVar9;
  atomic<int> aVar10;
  FDS_ViewModelContext *pFVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  FName local_d8;
  int local_d0;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar11 = (FDS_ViewModelContext *)0x0;
  aVar10 = (atomic<int>)0x0;
  if ((this->VM_CharEvolveLevelList).field0_0x0.DebugPtr == (UDS_VM_CharEvolveLevelList *)0x0) {
    local_e8 = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_CharEvolveLevelList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_VM_CharEvolveLevelList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_CharEvolveLevelList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_CharEvolveLevelList *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CharEvolveLevelList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_CharEvolveLevelList).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_CharEvolveLevelList *)0x0) {
      return;
    }
  }
  pFVar6 = ::operator_new(0x30);
  pFVar9 = pFVar11;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
    ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
    *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
    (pFVar6->ViewModelName).ComparisonIndex = 0;
    (pFVar6->ViewModelName).Number = 0;
    pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CharEvolveLevelList__6B_;
    pFVar6[1]._padding_ = 0;
    *(atomic<int> *)&pFVar6[1].DerivedStaticStruct = (atomic<int>)0x0;
    pFVar9 = pFVar6;
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharEvolveLevelList__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar9;
    pFVar11 = pFVar6;
  }
  if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar7 = FDS_ViewModelContext_CharEvolveLevelList::StaticStruct();
  *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar7;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar11->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar9;
    local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  pFVar9->ViewModelTemplateKey = CharEvolveLevelList;
  pFVar9[1]._padding_ = this->CharEntityID;
  if (param_1) {
    aVar10 = (atomic<int>)this->SelectedCharEvolveLevel;
  }
  *(atomic<int> *)&pFVar9[1].DerivedStaticStruct = aVar10;
  pUVar5 = (this->VM_CharEvolveLevelList).field0_0x0.DebugPtr;
  if (pFVar11 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar11->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_b8.Object = pFVar9;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_b8);
  local_d0 = FFieldNotificationClassDescriptor::VM_CharEvolveLevelList.BitNumber;
  local_d8 = FFieldNotificationClassDescriptor::VM_CharEvolveLevelList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  return;
}

// UpdateSelectedCharacterEvolveLevel @ 14bfe4e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterEvolve::UpdateSelectedCharacterEvolveLevel(UDS_VM_W_B_CharacterEvolve *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_CharEvolveLevel *pUVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  longlong *plVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  FName local_c8;
  int local_c0;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar10 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_SelectedCharEvolveLevel).field0_0x0.DebugPtr == (UDS_VM_CharEvolveLevel *)0x0) {
    local_d8 = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_CharEvolveLevel_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_VM_CharEvolveLevel_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_CharEvolveLevel *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_CharEvolveLevel *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CharEvolveLevel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_SelectedCharEvolveLevel).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_CharEvolveLevel *)0x0) {
      return;
    }
  }
  pFVar6 = ::operator_new(0x30);
  pFVar9 = pFVar10;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
    *(undefined2 *)&((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1].field_0x1 = 0;
    ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1].field_0x3 = 0;
    *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
    (pFVar6->ViewModelName).ComparisonIndex = 0;
    (pFVar6->ViewModelName).Number = 0;
    pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CharEvolveLevel__6B_;
    pFVar6[1]._padding_ = 0;
    *(atomic<int> *)&pFVar6[1].DerivedStaticStruct = (atomic<int>)0x0;
    *(undefined1 *)((atomic<int> *)&pFVar6[1].DerivedStaticStruct + 1) = 0;
    pFVar9 = pFVar6;
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharEvolveLevel__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar9;
    pFVar10 = pFVar6;
  }
  if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar7 = FDS_ViewModelContext_CharEvolveLevel::StaticStruct();
  *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar7;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_b8.Object = pFVar9;
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  pFVar9->ViewModelTemplateKey = CharEvolveLevel;
  pFVar9[1]._padding_ = this->CharEntityID;
  *(int *)&pFVar9[1].DerivedStaticStruct = this->SelectedCharEvolveLevel;
  *(undefined1 *)((atomic<int> *)&pFVar9[1].DerivedStaticStruct + 1) = 0;
  pUVar5 = (this->VM_SelectedCharEvolveLevel).field0_0x0.DebugPtr;
  if (pFVar10 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar10->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_a8.Object = pFVar9;
  local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_a8);
  local_c0 = FFieldNotificationClassDescriptor::VM_SelectedCharEvolveLevel.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::VM_SelectedCharEvolveLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return;
}

// UpdateSelectedCharacterInfo @ 14bfe5100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_B_CharacterEvolve::UpdateSelectedCharacterInfo(UDS_VM_W_B_CharacterEvolve *this)

{
  code *pcVar1;
  FDS_ViewModelContext_CharInfoData *pFVar2;
  bool bVar3;
  UDS_VM_CharInfoData *pUVar4;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_SelectedCharInfoData).field0_0x0.DebugPtr == (UDS_VM_CharInfoData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CharInfoData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_CharInfoData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_CharInfoData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_CharInfoData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_CharInfoData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_CharInfoData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0xe;
  pFVar2->CharEntityID = this->CharEntityID;
  pUVar4 = (this->VM_SelectedCharInfoData).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  local_30 = FFieldNotificationClassDescriptor::VM_SelectedCharInfoData.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::VM_SelectedCharInfoData.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

