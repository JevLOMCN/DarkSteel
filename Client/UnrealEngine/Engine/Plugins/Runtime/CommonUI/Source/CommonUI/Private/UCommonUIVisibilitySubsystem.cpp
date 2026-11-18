// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 16

// StaticClass @ 14a780e30

UClass * __cdecl UCommonUIVisibilitySubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIVisibilitySubsystem",
               &Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem.InnerSingleton,
               StaticRegisterNativesUCommonUIVisibilitySubsystem,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonUIVisibilitySubsystem>,
               InternalVTableHelperCtorCaller<UCommonUIVisibilitySubsystem>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem.InnerSingleton;
}

// UCommonUIVisibilitySubsystem @ 14a7afa60

UCommonUIVisibilitySubsystem * __thiscall
UCommonUIVisibilitySubsystem::UCommonUIVisibilitySubsystem
          (UCommonUIVisibilitySubsystem *this,FVTableHelper *param_1)

{
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonUIVisibilitySubsystem__6B_;
  *(undefined8 *)&this->OnVisibilityTagsChanged = 0;
  *(undefined8 *)&(this->OnVisibilityTagsChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnVisibilityTagsChanged).field_0x10 = 0;
  (this->ComputedVisibilityTags).GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComputedVisibilityTags).GameplayTags.ArrayNum = 0;
  (this->ComputedVisibilityTags).GameplayTags.ArrayMax = 0;
  (this->ComputedVisibilityTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputedVisibilityTags).ParentTags.ArrayNum = 0;
  (this->ComputedVisibilityTags).ParentTags.ArrayMax = 0;
  (this->UserVisibilityTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserVisibilityTags).GameplayTags.ArrayNum = 0;
  (this->UserVisibilityTags).GameplayTags.ArrayMax = 0;
  (this->UserVisibilityTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserVisibilityTags).ParentTags.ArrayNum = 0;
  (this->UserVisibilityTags).ParentTags.ArrayMax = 0;
  *(undefined8 *)&(this->OnVisibilityTagsChanged).field_0x18 = 2;
  return this;
}

// UCommonUIVisibilitySubsystem @ 14a7afad0

UCommonUIVisibilitySubsystem * __thiscall
UCommonUIVisibilitySubsystem::UCommonUIVisibilitySubsystem(UCommonUIVisibilitySubsystem *this)

{
  ULocalPlayerSubsystem::ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  this->_padding_ = (longlong)&___7UCommonUIVisibilitySubsystem__6B_;
  *(undefined8 *)&this->OnVisibilityTagsChanged = 0;
  *(undefined8 *)&(this->OnVisibilityTagsChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnVisibilityTagsChanged).field_0x10 = 0;
  (this->ComputedVisibilityTags).GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComputedVisibilityTags).GameplayTags.ArrayNum = 0;
  (this->ComputedVisibilityTags).GameplayTags.ArrayMax = 0;
  (this->ComputedVisibilityTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComputedVisibilityTags).ParentTags.ArrayNum = 0;
  (this->ComputedVisibilityTags).ParentTags.ArrayMax = 0;
  (this->UserVisibilityTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserVisibilityTags).GameplayTags.ArrayNum = 0;
  (this->UserVisibilityTags).GameplayTags.ArrayMax = 0;
  (this->UserVisibilityTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserVisibilityTags).ParentTags.ArrayNum = 0;
  (this->UserVisibilityTags).ParentTags.ArrayMax = 0;
  *(undefined8 *)&(this->OnVisibilityTagsChanged).field_0x18 = 2;
  return this;
}

// ~UCommonUIVisibilitySubsystem @ 14a7b39a0

void __thiscall
UCommonUIVisibilitySubsystem::~UCommonUIVisibilitySubsystem(UCommonUIVisibilitySubsystem *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UCommonUIVisibilitySubsystem__6B_;
  pFVar1 = (this->UserVisibilityTags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserVisibilityTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComputedVisibilityTags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComputedVisibilityTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnVisibilityTagsChanged).field_0x8,
             *(int *)&(this->OnVisibilityTagsChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnVisibilityTagsChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVisibilityTagsChanged);
  ULocalPlayerSubsystem::~ULocalPlayerSubsystem((ULocalPlayerSubsystem *)this);
  return;
}

// AddUserVisibilityCondition @ 14a7be7c0

void __thiscall
UCommonUIVisibilitySubsystem::AddUserVisibilityCondition
          (UCommonUIVisibilitySubsystem *this,FGameplayTag param_1)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1.TagName;
  FGameplayTagContainer::AddTag(&this->UserVisibilityTags,(FGameplayTag *)local_res10);
  RefreshVisibilityTags(this);
  return;
}

// ComputeVisibilityTags @ 14a7c4ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGameplayTagContainer * __thiscall
UCommonUIVisibilitySubsystem::ComputeVisibilityTags
          (UCommonUIVisibilitySubsystem *this,FGameplayTagContainer *__return_storage_ptr__)

{
  int iVar1;
  ECommonInputType EVar2;
  UClass *pUVar3;
  UCommonInputSubsystem *this_00;
  FName FVar4;
  UCommonUISettings *pUVar5;
  ULocalPlayer *pUVar6;
  FName local_res8;
  
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  FGameplayTagContainer::operator=(__return_storage_ptr__,&this->UserVisibilityTags);
  pUVar6 = (ULocalPlayer *)this->_padding_;
  if (pUVar6 != (ULocalPlayer *)0x0) {
    pUVar3 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a7c4b31;
  }
  pUVar6 = (ULocalPlayer *)0x0;
LAB_14a7c4b31:
  this_00 = UCommonInputSubsystem::Get(pUVar6);
  if ((this_00 != (UCommonInputSubsystem *)0x0) &&
     (((EVar2 = UCommonInputSubsystem::GetCurrentInputType(this_00),
       FVar4 = TAG_INPUT_MOUSEANDKEYBOARD.InternalTag.TagName, EVar2 == MouseAndKeyboard ||
       (FVar4 = TAG_INPUT_GAMEPAD.InternalTag.TagName, EVar2 == Gamepad)) ||
      (FVar4 = TAG_INPUT_TOUCH.InternalTag.TagName, EVar2 == Touch)))) {
    local_res8 = FVar4;
    FGameplayTagContainer::AddTag(__return_storage_ptr__,(FGameplayTag *)&local_res8);
  }
  pUVar5 = ICommonUIModule::GetSettings();
  FGameplayTagContainer::AppendTags(__return_storage_ptr__,&pUVar5->PlatformTraitContainer);
  return __return_storage_ptr__;
}

// Deinitialize @ 14a7d2e20

void __thiscall UCommonUIVisibilitySubsystem::Deinitialize(UCommonUIVisibilitySubsystem *this)

{
  return;
}

// Get @ 14a7e00d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonUIVisibilitySubsystem * __cdecl UCommonUIVisibilitySubsystem::Get(ULocalPlayer *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UCommonUIVisibilitySubsystem *pUVar5;
  
  if (param_1 == (ULocalPlayer *)0x0) {
    return (UCommonUIVisibilitySubsystem *)0x0;
  }
  pUVar3 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_14a7e0107;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14a7e0107:
    pUVar4 = StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14a7e0137;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_14a7e0137:
  pUVar5 = (UCommonUIVisibilitySubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  return pUVar5;
}

// GetChecked @ 14a7e13b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonUIVisibilitySubsystem * __cdecl
UCommonUIVisibilitySubsystem::GetChecked(ULocalPlayer *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCommonUIVisibilitySubsystem *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  if (param_1 == (ULocalPlayer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalPlayer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUIVisibilitySubsystem.cpp"
                       ,0x1f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCommonUIVisibilitySubsystem *)(*pcVar2)();
      return pUVar4;
    }
    goto LAB_14a7e1458;
  }
  pUVar5 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14a7e1411;
LAB_14a7e143f:
    pUVar5 = (UClass *)0x0;
  }
  else {
    if (pUVar5 == (UClass *)0x0) goto LAB_14a7e143f;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14a7e1411:
    pUVar6 = StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_14a7e143f;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14a7e143f;
  }
  pUVar4 = (UCommonUIVisibilitySubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar5);
  if (pUVar4 != (UCommonUIVisibilitySubsystem *)0x0) {
    return pUVar4;
  }
LAB_14a7e1458:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUIVisibilitySubsystem.cpp"
                     ,0x21,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UCommonUIVisibilitySubsystem *)(*pcVar2)();
    return pUVar4;
  }
  return (UCommonUIVisibilitySubsystem *)0x0;
}

// GetPrivateStaticClass @ 14a7e6a60

UClass * __cdecl UCommonUIVisibilitySubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUIVisibilitySubsystem",
               &Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem.InnerSingleton,
               StaticRegisterNativesUCommonUIVisibilitySubsystem,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonUIVisibilitySubsystem>,
               InternalVTableHelperCtorCaller<UCommonUIVisibilitySubsystem>,local_res8,
               ULocalPlayerSubsystem::StaticClass,ULocalPlayer::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIVisibilitySubsystem.InnerSingleton;
}

// Initialize @ 14a7f3650

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
UCommonUIVisibilitySubsystem::Initialize
          (UCommonUIVisibilitySubsystem *this,FSubsystemCollectionBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UCommonInputSubsystem *pUVar3;
  FGameplayTagContainer *pFVar4;
  ULocalPlayer *this_00;
  void *local_28 [2];
  void *local_18;
  
  FSubsystemCollectionBase::InitializeDependency<UCommonInputSubsystem>(param_1);
  this_00 = (ULocalPlayer *)this->_padding_;
  if (this_00 != (ULocalPlayer *)0x0) {
    pUVar2 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14a7f3693;
  }
  this_00 = (ULocalPlayer *)0x0;
LAB_14a7f3693:
  pUVar3 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_00);
  if (pUVar3 != (UCommonInputSubsystem *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonUIVisibilitySubsystem>
              (&pUVar3->OnInputMethodChangedNative,(UCommonUIVisibilitySubsystem *)&stack0x00000008,
               (pmf_b2c642b2)this);
  }
  pFVar4 = (FGameplayTagContainer *)(**(code **)(this->_padding_ + 0x2d0))(this,local_28);
  FGameplayTagContainer::operator=(&this->ComputedVisibilityTags,pFVar4);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return;
}

// OnInputMethodChanged @ 14a7fd060

void __thiscall
UCommonUIVisibilitySubsystem::OnInputMethodChanged
          (UCommonUIVisibilitySubsystem *this,ECommonInputType param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FGameplayTagContainer *pFVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel FStack_58;
  void *apvStack_40 [2];
  void *pvStack_30;
  
  pFVar9 = (FGameplayTagContainer *)(**(code **)(this->_padding_ + 0x2d0))(this,apvStack_40);
  FGameplayTagContainer::operator=(&this->ComputedVisibilityTags,pFVar9);
  if (pvStack_30 != (void *)0x0) {
    FMemory::Free(pvStack_30);
  }
  if (apvStack_40[0] != (void *)0x0) {
    FMemory::Free(apvStack_40[0]);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnVisibilityTagsChanged,(FWriteAccessScope *)&FStack_58);
  puVar1 = &(this->OnVisibilityTagsChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnVisibilityTagsChanged).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnVisibilityTagsChanged).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnVisibilityTagsChanged).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnVisibilityTagsChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnVisibilityTagsChanged,
               false);
  }
  if (FStack_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_58.Accessor,&FStack_58);
  }
  return;
}

// RefreshVisibilityTags @ 14a80e5f0

void __thiscall
UCommonUIVisibilitySubsystem::RefreshVisibilityTags(UCommonUIVisibilitySubsystem *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FGameplayTagContainer *pFVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_58;
  void *local_40 [2];
  void *local_30;
  
  pFVar9 = (FGameplayTagContainer *)(**(code **)(this->_padding_ + 0x2d0))(this,local_40);
  FGameplayTagContainer::operator=(&this->ComputedVisibilityTags,pFVar9);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40[0] != (void *)0x0) {
    FMemory::Free(local_40[0]);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnVisibilityTagsChanged,(FWriteAccessScope *)&local_58);
  puVar1 = &(this->OnVisibilityTagsChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnVisibilityTagsChanged).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnVisibilityTagsChanged).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnVisibilityTagsChanged).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnVisibilityTagsChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnVisibilityTagsChanged,
               false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return;
}

// RemoveUserVisibilityCondition @ 14a8142e0

void __thiscall
UCommonUIVisibilitySubsystem::RemoveUserVisibilityCondition
          (UCommonUIVisibilitySubsystem *this,FGameplayTag param_1)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1.TagName;
  FGameplayTagContainer::RemoveTag(&this->UserVisibilityTags,(FGameplayTag *)local_res10,false);
  RefreshVisibilityTags(this);
  return;
}

// ShouldCreateSubsystem @ 14a81d860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UCommonUIVisibilitySubsystem::ShouldCreateSubsystem
          (UCommonUIVisibilitySubsystem *this,UObject *param_1)

{
  bool bVar1;
  ULocalPlayer *this_00;
  UGameInstance *this_01;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = CastChecked<ULocalPlayer,UObject>(param_1);
  this_01 = ULocalPlayer::GetGameInstance(this_00);
  if (this_01 != (UGameInstance *)0x0) {
    bVar1 = UGameInstance::IsDedicatedServerInstance(this_01);
    if (!bVar1) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      GetDerivedClasses((UClass *)this->_padding_,&local_18,false);
      bVar1 = local_18.ArrayNum == 0;
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return bVar1;
    }
  }
  return false;
}

// StaticRegisterNativesUCommonUIVisibilitySubsystem @ 14a81e9c0

void __cdecl UCommonUIVisibilitySubsystem::StaticRegisterNativesUCommonUIVisibilitySubsystem(void)

{
  return;
}

