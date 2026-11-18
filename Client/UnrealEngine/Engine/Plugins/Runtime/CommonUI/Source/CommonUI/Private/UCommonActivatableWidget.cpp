// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 50

// StaticClass @ 14a783e00

UClass * __cdecl UCommonActivatableWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidget",
               &Z_Registration_Info_UClass_UCommonActivatableWidget.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidget,0x558,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonActivatableWidget>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidget>,local_res8,
               UCommonUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidget.InnerSingleton;
}

// UCommonActivatableWidget @ 14a7ab720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonActivatableWidget * __thiscall
UCommonActivatableWidget::UCommonActivatableWidget
          (UCommonActivatableWidget *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonActivatableWidget__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bIsBackHandler = false;
  this->bIsBackActionDisplayedInActionBar = false;
  FText::FText(&this->OverrideBackActionDisplayName);
  this_00 = &(this->ActionDomainOverride).SoftObjectPtr.field_0x18;
  this->bAutoActivate = false;
  this->bSupportsActivationFocus = true;
  this->bIsModal = false;
  this->bAutoRestoreFocus = false;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ActionDomainOverride).SoftObjectPtr.field_0x20 = 0;
  this->bOverrideActionDomain = false;
  (this->InputMapping).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  this->InputMappingPriority = 0;
  *(undefined8 *)&(this->ActionDomainOverride).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ActionDomainOverride).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ActionDomainOverride).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->BP_OnWidgetActivated = 0;
  *(undefined8 *)&(this->BP_OnWidgetActivated).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnWidgetActivated).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnWidgetDeactivated = 0;
  *(undefined8 *)&(this->BP_OnWidgetDeactivated).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnWidgetDeactivated).field_0x10 = 0;
  this->bIsActive = false;
  (this->VisibilityBoundWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilityBoundWidgets).ArrayNum = 0;
  (this->VisibilityBoundWidgets).ArrayMax = 0;
  this->ActivatedBindVisibility = SelfHitTestInvisible;
  this->DeactivatedBindVisibility = SelfHitTestInvisible;
  this->bAllActive = true;
  (this->DefaultBackActionHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultBackActionHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->DefaultBackActionHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->DefaultBackActionHandle).RegistrationId = -1;
  (this->InputTreeNode).Object = (FActivatableTreeNode *)0x0;
  (this->InputTreeNode).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnActivatedEvent = 0;
  *(undefined8 *)&(this->OnActivatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivatedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnActivatedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnDeactivatedEvent = 0;
  *(undefined8 *)&(this->OnDeactivatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnDeactivatedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnDeactivatedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnSlateReleasedEvent = 0;
  *(undefined8 *)&(this->OnSlateReleasedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnSlateReleasedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnSlateReleasedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnRequestRefreshFocusEvent = 0;
  *(undefined8 *)&(this->OnRequestRefreshFocusEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestRefreshFocusEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnRequestRefreshFocusEvent).field_0x18 = 2;
  (this->CalculatedActionDomainCache).bIsSet = false;
  this->bSetVisibilityOnActivated = false;
  this->ActivatedVisibility = SelfHitTestInvisible;
  this->bSetVisibilityOnDeactivated = false;
  this->DeactivatedVisibility = Collapsed;
  return this;
}

// UCommonActivatableWidget @ 14a7ab900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonActivatableWidget * __thiscall
UCommonActivatableWidget::UCommonActivatableWidget
          (UCommonActivatableWidget *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonActivatableWidget__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bIsBackHandler = false;
  this->bIsBackActionDisplayedInActionBar = false;
  FText::FText(&this->OverrideBackActionDisplayName);
  this_00 = &(this->ActionDomainOverride).SoftObjectPtr.field_0x18;
  this->bAutoActivate = false;
  this->bSupportsActivationFocus = true;
  this->bIsModal = false;
  this->bAutoRestoreFocus = false;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ActionDomainOverride).SoftObjectPtr.field_0x20 = 0;
  this->bOverrideActionDomain = false;
  (this->InputMapping).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  this->InputMappingPriority = 0;
  *(undefined8 *)&(this->ActionDomainOverride).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ActionDomainOverride).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ActionDomainOverride).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->BP_OnWidgetActivated = 0;
  *(undefined8 *)&(this->BP_OnWidgetActivated).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnWidgetActivated).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnWidgetDeactivated = 0;
  *(undefined8 *)&(this->BP_OnWidgetDeactivated).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnWidgetDeactivated).field_0x10 = 0;
  this->bIsActive = false;
  (this->VisibilityBoundWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilityBoundWidgets).ArrayNum = 0;
  (this->VisibilityBoundWidgets).ArrayMax = 0;
  this->ActivatedBindVisibility = SelfHitTestInvisible;
  this->DeactivatedBindVisibility = SelfHitTestInvisible;
  this->bAllActive = true;
  (this->DefaultBackActionHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultBackActionHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->DefaultBackActionHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->DefaultBackActionHandle).RegistrationId = -1;
  (this->InputTreeNode).Object = (FActivatableTreeNode *)0x0;
  (this->InputTreeNode).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnActivatedEvent = 0;
  *(undefined8 *)&(this->OnActivatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnActivatedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnActivatedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnDeactivatedEvent = 0;
  *(undefined8 *)&(this->OnDeactivatedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnDeactivatedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnDeactivatedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnSlateReleasedEvent = 0;
  *(undefined8 *)&(this->OnSlateReleasedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnSlateReleasedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnSlateReleasedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnRequestRefreshFocusEvent = 0;
  *(undefined8 *)&(this->OnRequestRefreshFocusEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestRefreshFocusEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnRequestRefreshFocusEvent).field_0x18 = 2;
  (this->CalculatedActionDomainCache).bIsSet = false;
  this->bSetVisibilityOnActivated = false;
  this->ActivatedVisibility = SelfHitTestInvisible;
  this->bSetVisibilityOnDeactivated = false;
  this->DeactivatedVisibility = Collapsed;
  return this;
}

// ~UCommonActivatableWidget @ 14a7b1c20

void __thiscall UCommonActivatableWidget::~UCommonActivatableWidget(UCommonActivatableWidget *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  ITextData *pIVar6;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonActivatableWidget__6B_;
  if (((this->CalculatedActionDomainCache).bIsSet != false) &&
     (pvVar3 = *(void **)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x18,
     pvVar3 != (void *)0x0)) {
    FMemory::Free(pvVar3);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRequestRefreshFocusEvent).field_0x8,
             *(int *)&(this->OnRequestRefreshFocusEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnRequestRefreshFocusEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRequestRefreshFocusEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSlateReleasedEvent).field_0x8,
             *(int *)&(this->OnSlateReleasedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnSlateReleasedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSlateReleasedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDeactivatedEvent).field_0x8,*(int *)&(this->OnDeactivatedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnDeactivatedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDeactivatedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnActivatedEvent).field_0x8,*(int *)&(this->OnActivatedEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnActivatedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnActivatedEvent);
  pTVar4 = (this->InputTreeNode).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pFVar5 = (this->DefaultBackActionHandle).CachedDebugActionName.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->VisibilityBoundWidgets).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pvVar3 = *(void **)&(this->BP_OnWidgetDeactivated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnWidgetDeactivated);
  pvVar3 = *(void **)&(this->BP_OnWidgetActivated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnWidgetActivated);
  pvVar3 = *(void **)&(this->ActionDomainOverride).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pIVar6 = (this->OverrideBackActionDisplayName).TextData.Reference;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  UCommonUserWidget::~UCommonUserWidget((UCommonUserWidget *)this);
  return;
}

// ActivateMappingContext @ 14a7bd640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonActivatableWidget::ActivateMappingContext(UCommonActivatableWidget *this)

{
  bool bVar1;
  ULocalPlayer *this_00;
  UEnhancedInputLocalPlayerSubsystem *pUVar2;
  byte local_res10 [24];
  
  bVar1 = CommonUI::IsEnhancedInputSupportEnabled();
  if ((bVar1) && ((this->InputMapping).field0_0x0.DebugPtr != (UInputMappingContext *)0x0)) {
    this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
    if (this_00 != (ULocalPlayer *)0x0) {
      pUVar2 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_00);
      if (pUVar2 != (UEnhancedInputLocalPlayerSubsystem *)0x0) {
        local_res10[0] = local_res10[0] & 0xf9 | 1;
        (**(code **)(pUVar2->_padding_ + 0x98))
                  (&pUVar2->_padding_,(this->InputMapping).field0_0x0.DebugPtr,
                   this->InputMappingPriority,local_res10);
      }
    }
  }
  return;
}

// ActivateWidget @ 14a7bd8e0

void __thiscall UCommonActivatableWidget::ActivateWidget(UCommonActivatableWidget *this)

{
  if (this->bIsActive == false) {
                    /* WARNING: Could not recover jumptable at 0x00014a7bd8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x520))();
    return;
  }
  return;
}

// BP_GetDesiredFocusTarget @ 14a7c0ae0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall
UCommonActivatableWidget::BP_GetDesiredFocusTarget(UCommonActivatableWidget *this)

{
  UFunction *pUVar1;
  UWidget *local_res8 [4];
  
  local_res8[0] = (UWidget *)0x0;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonActivatableWidget_BP_GetDesiredFocusTarget);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0];
}

// BP_GetDesiredInputConfig @ 14a7c0b30

FUIInputConfig __thiscall
UCommonActivatableWidget::BP_GetDesiredInputConfig(UCommonActivatableWidget *this)

{
  UFunction *pUVar1;
  undefined4 *in_RDX;
  undefined4 local_res8;
  undefined2 local_resc;
  
  local_res8 = 0;
  local_resc = 0x100;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonActivatableWidget_BP_GetDesiredInputConfig);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  *in_RDX = local_res8;
  *(undefined2 *)(in_RDX + 1) = local_resc;
  return SUB86(in_RDX,0);
}

// BP_OnActivated @ 14a7c0ca0

void __thiscall UCommonActivatableWidget::BP_OnActivated(UCommonActivatableWidget *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonActivatableWidget_BP_OnActivated);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnDeactivated @ 14a7c0d20

void __thiscall UCommonActivatableWidget::BP_OnDeactivated(UCommonActivatableWidget *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonActivatableWidget_BP_OnDeactivated);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7c0d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// BP_OnHandleBackAction @ 14a7c0ee0

bool __thiscall UCommonActivatableWidget::BP_OnHandleBackAction(UCommonActivatableWidget *this)

{
  UFunction *pUVar1;
  char local_res8 [32];
  
  local_res8[0] = '\0';
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonActivatableWidget_BP_OnHandleBackAction);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0] != '\0';
}

// BindVisibilityToActivation @ 14a7c2340

void __thiscall
UCommonActivatableWidget::BindVisibilityToActivation
          (UCommonActivatableWidget *this,UCommonActivatableWidget *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *this_00;
  UCommonActivatableWidget *local_res10 [3];
  FWeakObjectPtr local_58 [2];
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  longlong lStack_30;
  
  if (param_1 != (UCommonActivatableWidget *)0x0) {
    pTVar2 = &this->VisibilityBoundWidgets;
    this_00 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = this_00 + (longlong)(this->VisibilityBoundWidgets).ArrayNum * 8;
    for (; this_00 != pFVar3; this_00 = this_00 + 8) {
      bVar6 = TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>::
              UEOpEquals<UCommonActivatableWidget,bool>
                        ((TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr> *)this_00,param_1)
      ;
      if (bVar6) {
        return;
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_58[0].ObjectIndex = 0;
    local_58[0].ObjectSerialNumber = 0;
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_58,(FObjectPtr)local_res10);
    pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= local_58) && (local_58 < pFVar4 + (this->VisibilityBoundWidgets).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->VisibilityBoundWidgets).ArrayNum;
    piVar1 = &(this->VisibilityBoundWidgets).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->VisibilityBoundWidgets).ArrayNum = iVar7 + 1;
    uStack_40._0_4_ = 0;
    *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58[0];
    local_48 = HandleVisibilityBoundWidgetActivations;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonActivatableWidget>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &param_1->OnActivatedEvent,(UCommonActivatableWidget *)(local_res10 + 1),
               (pmf_cf4ce46c *)this);
    local_48 = HandleVisibilityBoundWidgetActivations;
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    local_38 = HandleVisibilityBoundWidgetActivations;
    lStack_30 = uStack_40;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonActivatableWidget>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &param_1->OnDeactivatedEvent,(UCommonActivatableWidget *)(local_res10 + 2),
               (pmf_cf4ce46c *)this);
    HandleVisibilityBoundWidgetActivations(this);
  }
  return;
}

// ClearActiveHoldInputs @ 14a7c4510

void __thiscall UCommonActivatableWidget::ClearActiveHoldInputs(UCommonActivatableWidget *this)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int *piVar7;
  FActivatableTreeNode *pFVar8;
  FActivatableTreeNode *pFVar9;
  FActivatableTreeNode *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  TSharedPtr<FUIActionBinding,1> local_58;
  FUIActionBindingHandle local_48 [2];
  
  if ((this->InputTreeNode).Object == (FActivatableTreeNode *)0x0) {
    return;
  }
  pTVar3 = (this->InputTreeNode).WeakReferenceCount.ReferenceController;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar3->SharedReferenceCount < 1) {
    return;
  }
  pFVar8 = (FActivatableTreeNode *)0x0;
  pFVar10 = (FActivatableTreeNode *)(this->InputTreeNode).WeakReferenceCount.ReferenceController;
  pFVar9 = pFVar10;
  if (pFVar10 != (FActivatableTreeNode *)0x0) {
    aVar5 = *(atomic<int> *)&pFVar10->_padding_;
    do {
      pFVar9 = pFVar8;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14a7c4577;
      LOCK();
      aVar6 = *(atomic<int> *)&pFVar10->_padding_;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    pFVar8 = (this->InputTreeNode).Object;
    pFVar9 = pFVar10;
    if (pFVar8 != (FActivatableTreeNode *)0x0) goto LAB_14a7c459d;
  }
LAB_14a7c4577:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pFVar10 = pFVar9;
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14a7c459d:
  if (0 < (int)pFVar8->_padding_) {
    piVar7 = (int *)pFVar8->_padding_;
    iVar2 = (int)pFVar8->_padding_;
    piVar1 = piVar7 + (longlong)iVar2 * 6;
    while( true ) {
      if ((int)pFVar8->_padding_ != iVar2) {
        `TCheckedPointerIterator<FUIActionBindingHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (piVar7 == piVar1) break;
      ::FString::FString(&local_48[0].CachedDebugActionName,(FString *)piVar7);
      local_48[0].RegistrationId = *(int *)&(((FString *)(piVar7 + 4))->Data).AllocatorInstance.Data
      ;
      FUIActionBinding::FindBinding(&local_58,local_48);
      if ((local_58.Object != (FUIActionBinding *)0x0) &&
         (0.0 < (local_58.Object)->HoldStartTime || (local_58.Object)->HoldStartTime == 0.0)) {
        (local_58.Object)->HoldStartTime = -1.0;
        TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                  (&(local_58.Object)->OnHoldActionProgressed,0.0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      piVar7 = piVar7 + 6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return;
}

// ClearFocusRestorationTarget @ 14a7c46c0

void __thiscall
UCommonActivatableWidget::ClearFocusRestorationTarget(UCommonActivatableWidget *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FActivatableTreeNode *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined8 local_18 [2];
  
  pTVar6 = (this->InputTreeNode).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a7c46f0;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar7);
    pFVar3 = (this->InputTreeNode).Object;
    if ((pFVar3 != (FActivatableTreeNode *)0x0) &&
       (&pFVar3->FocusRestorationTarget != (TWeakPtr<SWidget,1> *)local_18)) {
      pTVar4 = (pFVar3->FocusRestorationTarget).WeakReferenceCount.ReferenceController;
      (pFVar3->FocusRestorationTarget).Object = (SWidget *)0x0;
      (pFVar3->FocusRestorationTarget).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          return;
        }
      }
    }
  }
LAB_14a7c46f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// DeactivateMappingContext @ 14a7d2110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonActivatableWidget::DeactivateMappingContext(UCommonActivatableWidget *this)

{
  bool bVar1;
  ULocalPlayer *this_00;
  UEnhancedInputLocalPlayerSubsystem *pUVar2;
  byte local_res10 [24];
  
  bVar1 = CommonUI::IsEnhancedInputSupportEnabled();
  if ((bVar1) && ((this->InputMapping).field0_0x0.DebugPtr != (UInputMappingContext *)0x0)) {
    this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
    if (this_00 != (ULocalPlayer *)0x0) {
      pUVar2 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_00);
      if (pUVar2 != (UEnhancedInputLocalPlayerSubsystem *)0x0) {
        local_res10[0] = local_res10[0] & 0xf9 | 1;
        (**(code **)(pUVar2->_padding_ + 0xa0))
                  (&pUVar2->_padding_,(this->InputMapping).field0_0x0.DebugPtr,local_res10);
      }
    }
  }
  return;
}

// DeactivateWidget @ 14a7d2320

void __thiscall UCommonActivatableWidget::DeactivateWidget(UCommonActivatableWidget *this)

{
  if (this->bIsActive != false) {
                    /* WARNING: Could not recover jumptable at 0x00014a7d232c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x528))();
    return;
  }
  return;
}

// GetActivationMetadata @ 14a7e0500

TOptional<FActivationMetadata> __thiscall
UCommonActivatableWidget::GetActivationMetadata(UCommonActivatableWidget *this)

{
  longlong in_RDX;
  
  *(undefined1 *)(in_RDX + 2) = 0;
  return SUB83(in_RDX,0);
}

// GetCalculatedActionDomain @ 14a7e0e60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TObjectPtr<UCommonInputActionDomain> __thiscall
UCommonActivatableWidget::GetCalculatedActionDomain(UCommonActivatableWidget *this)

{
  undefined1 *puVar1;
  int iVar2;
  FCommonActivatableSlateMetaData *pFVar3;
  FDeprecateSlateVector2D FVar4;
  void *pvVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  atomic<int> aVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  longlong lVar13;
  TSharedPtr<FCommonActivatableSlateMetaData,1> *pTVar14;
  TObjectPtr<UCommonInputActionDomain> TVar15;
  longlong lVar16;
  SWidget *pSVar17;
  TObjectPtr<UCommonInputActionDomain>_u_0 in_RDX;
  SWidget *pSVar18;
  ForAnyElementType FVar19;
  TSharedPtr<SWidget,1> local_108;
  undefined1 local_f8 [24];
  FUtf8String local_e0;
  undefined1 local_d0 [24];
  FUtf8String local_b8;
  undefined1 local_a8 [24];
  FUtf8String local_90;
  undefined8 local_80;
  FSharedReferencer<1> local_78;
  TSharedPtr<ICommonInputActionDomainMetaData,1> local_70;
  SWidget *local_60;
  SWidget *local_58;
  undefined8 local_50;
  TSharedPtr<FCommonActivatableSlateMetaData,1> local_48;
  
  if ((this->CalculatedActionDomainCache).bIsSet == false) {
    lVar13 = (**(code **)(this->_padding_ + 0x2e0))();
    UWidget::GetCachedWidget((UWidget *)this,&local_108);
    pSVar18 = (SWidget *)0x0;
    do {
      if (local_108.Object == (SWidget *)0x0) {
        local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8._16_8_ = 0;
        local_a8._8_8_ = 0;
        local_90.Data.ArrayNum = 0;
        local_90.Data.ArrayMax = 0;
        local_a8._0_8_ = 0;
        FUtf8String::Reset(&local_90,0);
        local_50 = 0;
        FSoftObjectPtr::operator=((FSoftObjectPtr *)local_a8,(FObjectPtr)&local_50);
        if ((TOptional<TSoftObjectPtr<UCommonInputActionDomain>_> *)local_a8 !=
            &this->CalculatedActionDomainCache) {
          if (((this->CalculatedActionDomainCache).bIsSet != false) &&
             (pvVar5 = *(void **)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.
                                  field_0x18, pvVar5 != (void *)0x0)) {
            FMemory::Free(pvVar5);
          }
          puVar1 = &(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x18;
          *(undefined8 *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr =
               local_a8._0_8_;
          *(undefined8 *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x8 =
               local_a8._8_8_;
          *(undefined8 *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x10 =
               local_a8._16_8_;
          *(undefined8 *)puVar1 = 0;
          *(FScriptContainerElement **)puVar1 = local_90.Data.AllocatorInstance.Data;
          *(int *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x20 =
               local_90.Data.ArrayNum;
          *(int *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x24 =
               local_90.Data.ArrayMax;
          (this->CalculatedActionDomainCache).bIsSet = true;
          local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.Data.ArrayNum = 0;
          local_90.Data.ArrayMax = 0;
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        (in_RDX.DebugPtr)->_padding_ = 0;
LAB_14a7e137a:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        return (TObjectPtr<UCommonInputActionDomain>)in_RDX.DebugPtr;
      }
      pTVar14 = SWidget::GetMetaData<FCommonActivatableSlateMetaData>(local_108.Object,&local_48);
      pFVar3 = pTVar14->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if (pFVar3 != (FCommonActivatableSlateMetaData *)0x0) {
        if ((local_108.Object == (SWidget *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          TVar15.field0_0x0 = (TObjectPtr<UCommonInputActionDomain>_u_0)(*pcVar6)();
          return (TObjectPtr<UCommonInputActionDomain>)TVar15.field0_0x0;
        }
        SWidget::GetMetaData<ICommonInputActionDomainMetaData>(local_108.Object,&local_70);
        FVar8.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
        pSVar17 = local_108.Object;
        if (local_70.Object != (ICommonInputActionDomainMetaData *)0x0) {
          pSVar17 = (SWidget *)FWeakObjectPtr::Get(&((local_70.Object)->ActionDomain).WeakPtr);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pSVar17 != (SWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pSVar17);
          }
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d0._16_8_ = 0;
          local_d0._8_8_ = 0;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
          local_d0._0_8_ = 0;
          FUtf8String::Reset(&local_b8,0);
          local_58 = pSVar17;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pSVar17 != (SWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pSVar17);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_d0,(FObjectPtr)&local_58);
          FVar19.Data = local_b8.Data.AllocatorInstance.Data;
          if ((TOptional<TSoftObjectPtr<UCommonInputActionDomain>_> *)local_d0 !=
              &this->CalculatedActionDomainCache) {
            if (((this->CalculatedActionDomainCache).bIsSet != false) &&
               (pvVar5 = *(void **)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.
                                    field_0x18, pvVar5 != (void *)0x0)) {
              FMemory::Free(pvVar5);
            }
            puVar1 = &(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x18;
            *(undefined8 *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr =
                 local_d0._0_8_;
            *(undefined8 *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x8 =
                 local_d0._8_8_;
            *(undefined8 *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x10
                 = local_d0._16_8_;
            *(undefined8 *)puVar1 = 0;
            *(FScriptContainerElement **)puVar1 = local_b8.Data.AllocatorInstance.Data;
            *(int *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x20 =
                 local_b8.Data.ArrayNum;
            *(int *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x24 =
                 local_b8.Data.ArrayMax;
            (this->CalculatedActionDomainCache).bIsSet = true;
            local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b8.Data.ArrayNum = 0;
            local_b8.Data.ArrayMax = 0;
            FVar19.Data = (FScriptContainerElement *)pSVar18;
          }
LAB_14a7e1259:
          if ((SWidget *)FVar19.Data != (SWidget *)0x0) {
            FMemory::Free(FVar19.Data);
          }
          (in_RDX.DebugPtr)->_padding_ = (longlong)pSVar17;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pSVar17 != (SWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pSVar17);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70.SharedReferenceCount.ReferenceController);
          goto LAB_14a7e137a;
        }
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_108.Object == (SWidget *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          TVar15.field0_0x0 = (TObjectPtr<UCommonInputActionDomain>_u_0)(*pcVar6)();
          return (TObjectPtr<UCommonInputActionDomain>)TVar15.field0_0x0;
        }
        FVar4 = pSVar17[1].PersistentState.AllottedGeometry.Size;
        if (FVar4 == (FDeprecateSlateVector2D)0x0) {
LAB_14a7e102d:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
        }
        else {
          pUVar12 = StaticClass();
          iVar2 = (int)pUVar12->_padding_;
          if ((*(int *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)FVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
              != &pUVar12->_padding_)) goto LAB_14a7e102d;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          if (*(char *)((longlong)FVar4 + 0x3ec) != '\0') {
            lVar16 = (**(code **)(*(longlong *)FVar4 + 0x2e0))(FVar4);
            pSVar17 = pSVar18;
            if (lVar16 == lVar13) {
              pSVar17 = (SWidget *)
                        TSoftObjectPtr<UCommonInputActionDomain>::Get
                                  ((TSoftObjectPtr<UCommonInputActionDomain> *)
                                   ((longlong)FVar4 + 0x400));
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pSVar17 != (SWidget *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pSVar17);
            }
            local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8._16_8_ = 0;
            local_f8._8_8_ = 0;
            local_e0.Data.ArrayNum = 0;
            local_e0.Data.ArrayMax = 0;
            local_f8._0_8_ = 0;
            FUtf8String::Reset(&local_e0,0);
            local_60 = pSVar17;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pSVar17 != (SWidget *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pSVar17);
            }
            FSoftObjectPtr::operator=((FSoftObjectPtr *)local_f8,(FObjectPtr)&local_60);
            FVar19.Data = local_e0.Data.AllocatorInstance.Data;
            if ((TOptional<TSoftObjectPtr<UCommonInputActionDomain>_> *)local_f8 !=
                &this->CalculatedActionDomainCache) {
              if (((this->CalculatedActionDomainCache).bIsSet != false) &&
                 (pvVar5 = *(void **)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.
                                      field_0x18, pvVar5 != (void *)0x0)) {
                FMemory::Free(pvVar5);
              }
              puVar1 = &(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x18;
              *(undefined8 *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr =
                   local_f8._0_8_;
              *(undefined8 *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x8
                   = local_f8._8_8_;
              *(undefined8 *)
               &(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x10 =
                   local_f8._16_8_;
              *(undefined8 *)puVar1 = 0;
              *(FScriptContainerElement **)puVar1 = local_e0.Data.AllocatorInstance.Data;
              *(int *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x20 =
                   local_e0.Data.ArrayNum;
              *(int *)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x24 =
                   local_e0.Data.ArrayMax;
              (this->CalculatedActionDomainCache).bIsSet = true;
              local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_e0.Data.ArrayNum = 0;
              local_e0.Data.ArrayMax = 0;
              FVar19.Data = (FScriptContainerElement *)pSVar18;
            }
            goto LAB_14a7e1259;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.SharedReferenceCount.ReferenceController);
      }
      if ((local_108.Object == (SWidget *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        TVar15.field0_0x0 = (TObjectPtr<UCommonInputActionDomain>_u_0)(*pcVar6)();
        return (TObjectPtr<UCommonInputActionDomain>)TVar15.field0_0x0;
      }
      local_78.ReferenceController =
           ((local_108.Object)->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      pSVar17 = pSVar18;
      if (local_78.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = (local_78.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            local_78.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14a7e10a6;
          }
          LOCK();
          aVar10 = (local_78.ReferenceController)->SharedReferenceCount;
          bVar9 = aVar7 == aVar10;
          if (bVar9) {
            (local_78.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar9);
        pSVar17 = ((local_108.Object)->ParentWidgetPtr).Object;
      }
LAB_14a7e10a6:
      local_80 = 0;
      local_108.Object = pSVar17;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_108.SharedReferenceCount,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.ReferenceController);
    } while( true );
  }
  pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->CalculatedActionDomainCache);
  if (pUVar11 != (UObject *)0x0) {
    pUVar12 = Z_Construct_UClass_UCommonInputActionDomain_NoRegister();
    iVar2 = (int)pUVar12->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar12->_padding_)) goto LAB_14a7e0ebc;
  }
  pUVar11 = (UObject *)0x0;
LAB_14a7e0ebc:
  (in_RDX.DebugPtr)->_padding_ = (longlong)pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  return (TObjectPtr<UCommonInputActionDomain>)in_RDX;
}

// GetDesiredFocusTarget @ 14a7e1ba0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UCommonActivatableWidget::GetDesiredFocusTarget(UCommonActivatableWidget *this)

{
  UWidget *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a7e1ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UWidget *)(**(code **)(this->_padding_ + 0x4f0))();
  return pUVar1;
}

// GetDesiredInputConfig @ 14a7e1bb0

TOptional<FUIInputConfig> __thiscall
UCommonActivatableWidget::GetDesiredInputConfig(UCommonActivatableWidget *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  FName *pFVar4;
  UFunction *pUVar5;
  uint *in_RDX;
  FName local_res8;
  
  plVar1 = (longlong *)this->_padding_;
  pcVar2 = *(code **)(*plVar1 + 0x3d8);
  pFVar4 = ::FName::FName(&local_res8,0x18,L"BP_GetDesiredInputConfig",FNAME_Add);
  cVar3 = (*pcVar2)(plVar1,*pFVar4);
  if (cVar3 == '\0') {
    *(undefined1 *)((longlong)in_RDX + 6) = 0;
  }
  else {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number._0_2_ = 0x100;
    pUVar5 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UCommonActivatableWidget_BP_GetDesiredInputConfig);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&local_res8);
    *in_RDX = local_res8.ComparisonIndex.Value;
    *(undefined2 *)(in_RDX + 1) = (undefined2)local_res8.Number;
    *(undefined1 *)((longlong)in_RDX + 6) = 1;
  }
  return SUB87(in_RDX,0);
}

// GetInputTreeNode @ 14a7e30d0

TWeakPtr<FActivatableTreeNode,1> * __thiscall
UCommonActivatableWidget::GetInputTreeNode
          (UCommonActivatableWidget *this,TWeakPtr<FActivatableTreeNode,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->InputTreeNode).Object;
  pTVar1 = (this->InputTreeNode).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a7e4880

UClass * __cdecl UCommonActivatableWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActivatableWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActivatableWidget",
               &Z_Registration_Info_UClass_UCommonActivatableWidget.InnerSingleton,
               StaticRegisterNativesUCommonActivatableWidget,0x558,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonActivatableWidget>,
               InternalVTableHelperCtorCaller<UCommonActivatableWidget>,local_res8,
               UCommonUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActivatableWidget.InnerSingleton;
}

// HandleBackAction @ 14a7ea6f0

void __thiscall UCommonActivatableWidget::HandleBackAction(UCommonActivatableWidget *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a7ea6f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x518))();
  return;
}

// HandleVisibilityBoundWidgetActivations @ 14a7f0670

void __thiscall
UCommonActivatableWidget::HandleVisibilityBoundWidgetActivations(UCommonActivatableWidget *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  longlong lVar5;
  ESlateVisibility EVar6;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  EVar6 = this->DeactivatedBindVisibility;
  if ((this->bSetVisibilityOnActivated != false) && (this->bIsActive != false)) {
    EVar6 = this->ActivatedVisibility;
  }
  if ((this->bSetVisibilityOnDeactivated != false) && (this->bIsActive == false)) {
    EVar6 = this->DeactivatedVisibility;
  }
  this_00 = (FWeakObjectPtr *)(this->VisibilityBoundWidgets).AllocatorInstance.Data;
  iVar2 = (this->VisibilityBoundWidgets).ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->VisibilityBoundWidgets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if (bVar3) {
      if (this->bAllActive == false) {
        pUVar4 = FWeakObjectPtr::Get(this_00);
        if (pUVar4[0x1b].field_0x20 != '\0') {
          lVar5 = this->_padding_;
          EVar6 = this->ActivatedBindVisibility;
          goto LAB_14a7f0749;
        }
      }
      else {
        pUVar4 = FWeakObjectPtr::Get(this_00);
        if (pUVar4[0x1b].field_0x20 == '\0') {
          lVar5 = this->_padding_;
LAB_14a7f0749:
                    /* WARNING: Could not recover jumptable at 0x00014a7f075e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x2c0))(this,EVar6);
          return;
        }
      }
    }
    this_00 = this_00 + 1;
  }
  lVar5 = this->_padding_;
  if (this->bAllActive != false) {
    EVar6 = this->ActivatedBindVisibility;
  }
  goto LAB_14a7f0749;
}

// InternalProcessActivation @ 14a7f43f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonActivatableWidget::InternalProcessActivation(UCommonActivatableWidget *this)

{
  FName local_res8 [4];
  FString local_18;
  
  if (5 < (byte)LogCommonUI._0_1_) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->bIsActive = true;
                    /* WARNING: Could not recover jumptable at 0x00014a7f4460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4f8))(this);
  return;
}

// InternalProcessDeactivation @ 14a7f4470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonActivatableWidget::InternalProcessDeactivation(UCommonActivatableWidget *this)

{
  FName local_res8 [4];
  FString local_18;
  
  if (5 < (byte)LogCommonUI._0_1_) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->bIsActive = false;
                    /* WARNING: Could not recover jumptable at 0x00014a7f44e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x508))(this);
  return;
}

// NativeConstruct @ 14a7f8b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonActivatableWidget::NativeConstruct(UCommonActivatableWidget *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  UCommonInputSettings *pUVar5;
  UInputAction *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FName FVar9;
  FUIActionBindingHandle *pFVar10;
  FDataTableRowHandle *pFVar11;
  FUIActionBindingHandle *pFVar12;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [16];
  int local_190;
  FDelegateAllocation *local_188;
  FDestructionSentinel local_178;
  undefined1 local_158 [8];
  FDelegateAllocation local_150;
  FDestructionSentinel local_140;
  undefined1 *local_128;
  undefined1 local_120 [152];
  undefined1 local_88 [8];
  ForAnyElementType FStack_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  int local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  int local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  UUserWidget::NativeConstruct((UUserWidget *)this);
  if (this->bIsBackHandler == false) goto LAB_14a7f94a2;
  bVar4 = CommonUI::IsEnhancedInputSupportEnabled();
  if (bVar4) {
    pUVar5 = ICommonInputModule::GetSettings();
    pUVar6 = UCommonInputSettings::GetEnhancedInputBackAction(pUVar5);
    if (pUVar6 == (UInputAction *)0x0) goto LAB_14a7f9001;
    local_178._0_8_ = HandleBackAction;
    local_178.Accessor =
         (FMRSWRecursiveAccessDetector *)((ulonglong)local_178.Accessor._4_4_ << 0x20);
    local_158 = (undefined1  [8])0x0;
    local_150.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_150.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
               (FWriteAccessScope *)local_1a0);
    local_188 = &local_150;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_150);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidget____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1a8 = (undefined1  [8])this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_1a8);
      puVar7[4] = local_178._0_8_;
      puVar7[5] = local_178.Accessor;
    }
    if (local_190._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,(FDestructionSentinel *)local_1a0);
    }
    pUVar5 = ICommonInputModule::GetSettings();
    FVar9 = (FName)UCommonInputSettings::GetEnhancedInputBackAction(pUVar5);
    local_120._0_8_ = (FUIActionTag)0x0;
    local_120._8_8_ = (UDataTable *)0x0;
    local_120._16_4_ = 0;
    local_120._20_4_ = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar9 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar9);
    }
    local_120._24_4_ = 0;
    local_120._28_4_ = 0;
    local_1a8 = (undefined1  [8])FVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar9 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar9);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_120 + 0x18),(FObjectPtr)local_1a8);
    local_178._0_8_ = local_1a8;
    local_120[0x20] = Menu;
    local_178.Accessor = (FMRSWRecursiveAccessDetector *)(local_1a8 + 2);
    local_120._36_4_ = IE_Pressed;
    local_1a8._0_2_ = 0x200;
    TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>::
    TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>
              (local_120 + 0x28,(initializer_list<ECommonInputType> *)&local_178);
    local_120[0x78] = false;
    local_120[0x79] = true;
    local_120[0x7a] = true;
    local_120[0x7b] = false;
    FText::FText((FText *)(local_120 + 0x80));
    local_120._144_4_ = 0;
    local_78 = 0;
    local_88 = (undefined1  [8])0x0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_88,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_158);
    local_60 = 0;
    local_48 = 0;
    local_30 = 0;
    local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_68.Data = (FScriptContainerElement *)0x0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
               (FWriteAccessScope *)local_1a0);
    if ((local_150.DelegateSize != 0) && ((FName)local_150.DelegateAllocator != (FName)0x0)) {
      (*(code *)**(undefined8 **)local_150.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_150,0,0,0x10);
      local_150.DelegateSize = 0;
    }
    if (local_190._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,(FDestructionSentinel *)local_1a0);
    }
    if ((FName)local_150.DelegateAllocator != (FName)0x0) {
      FMemory::Free((void *)local_150.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_158);
    uVar3 = local_120._128_8_;
    pIVar1 = (this->OverrideBackActionDisplayName).TextData.Reference;
    local_120[0x7a] = this->bIsBackActionDisplayedInActionBar;
    if ((ITextData *)local_120._128_8_ != pIVar1) {
      local_120._128_8_ = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_1a8);
      }
      if ((ITextData *)uVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)uVar3 + 0x10))(uVar3);
      }
    }
    local_120._136_4_ = (this->OverrideBackActionDisplayName).Flags;
    pFVar10 = UCommonUserWidget::RegisterUIActionBinding
                        ((UCommonUserWidget *)this,(FUIActionBindingHandle *)local_1a0,
                         (FBindUIActionArgs *)local_120);
    FUIActionBindingHandle::operator=(&this->DefaultBackActionHandle,pFVar10);
    if ((atomic<unsigned___int64>)local_1a0._0_8_ != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_1a0._0_8_);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_40,(FWriteAccessScope *)local_1a0);
    if ((local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
      local_30 = 0;
    }
    if (local_190._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,(FDestructionSentinel *)local_1a0);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)local_1a0);
    if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_190._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,(FDestructionSentinel *)local_1a0);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_70,(FWriteAccessScope *)local_1a0);
    if ((local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_68.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
      local_60 = 0;
    }
    if (local_190._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,(FDestructionSentinel *)local_1a0);
    }
    if (FStack_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
               (FWriteAccessScope *)local_1a0);
  }
  else {
LAB_14a7f9001:
    local_178._0_8_ = HandleBackAction;
    local_178.Accessor =
         (FMRSWRecursiveAccessDetector *)((ulonglong)local_178.Accessor._4_4_ << 0x20);
    local_1a0._0_8_ = (atomic<unsigned___int64>)0x0;
    local_1a0._8_8_ = (atomic<unsigned___int64> *)0x0;
    local_190 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
               (FWriteAccessScope *)&local_140);
    local_128 = local_1a0 + 8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_1a0 + 8));
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonActivatableWidget____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1a8 = (undefined1  [8])this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_1a8);
      puVar7[4] = local_178._0_8_;
      puVar7[5] = local_178.Accessor;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    pUVar5 = ICommonInputModule::GetSettings();
    pFVar11 = UCommonInputSettings::GetDefaultBackAction(pUVar5,(FDataTableRowHandle *)local_158);
    local_120._0_8_ = (FUIActionTag)0x0;
    local_120._8_8_ = (pFVar11->DataTable).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDataTable *)local_120._8_8_ != (UDataTable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_120._8_8_);
    }
    local_120._16_8_ = pFVar11->RowName;
    local_178._0_8_ = local_1a8;
    local_120._24_4_ = 0;
    local_120._28_4_ = 0;
    local_178.Accessor = (FMRSWRecursiveAccessDetector *)(local_1a8 + 2);
    local_120[0x20] = Menu;
    local_120._36_4_ = IE_Pressed;
    local_1a8._0_2_ = 0x200;
    TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>::
    TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>
              (local_120 + 0x28,(initializer_list<ECommonInputType> *)&local_178);
    local_120[0x78] = false;
    local_120[0x79] = true;
    local_120[0x7a] = true;
    local_120[0x7b] = false;
    FText::FText((FText *)(local_120 + 0x80));
    local_120._144_4_ = 0;
    local_78 = 0;
    local_88 = (undefined1  [8])0x0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_88,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a0);
    local_60 = 0;
    local_48 = 0;
    local_30 = 0;
    local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_68.Data = (FScriptContainerElement *)0x0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
               (FWriteAccessScope *)&local_178);
    if ((local_190 != 0) &&
       ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_1a0._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_1a0 + 8),0,0,0x10);
      local_190 = 0;
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    if ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_1a0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a0);
    uVar3 = local_120._128_8_;
    pIVar1 = (this->OverrideBackActionDisplayName).TextData.Reference;
    local_120[0x7a] = this->bIsBackActionDisplayedInActionBar;
    if ((ITextData *)local_120._128_8_ != pIVar1) {
      local_120._128_8_ = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_1a8);
      }
      if ((ITextData *)uVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)uVar3 + 0x10))(uVar3);
      }
    }
    local_120._136_4_ = (this->OverrideBackActionDisplayName).Flags;
    pFVar12 = UCommonUserWidget::RegisterUIActionBinding
                        ((UCommonUserWidget *)this,(FUIActionBindingHandle *)local_1a0,
                         (FBindUIActionArgs *)local_120);
    pFVar10 = &this->DefaultBackActionHandle;
    if (pFVar10 != pFVar12) {
      pFVar2 = (pFVar10->CachedDebugActionName).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar10->CachedDebugActionName).Data.AllocatorInstance.Data =
           (pFVar12->CachedDebugActionName).Data.AllocatorInstance.Data;
      (pFVar12->CachedDebugActionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->DefaultBackActionHandle).CachedDebugActionName.Data.ArrayNum =
           (pFVar12->CachedDebugActionName).Data.ArrayNum;
      (this->DefaultBackActionHandle).CachedDebugActionName.Data.ArrayMax =
           (pFVar12->CachedDebugActionName).Data.ArrayMax;
      (pFVar12->CachedDebugActionName).Data.ArrayNum = 0;
      (pFVar12->CachedDebugActionName).Data.ArrayMax = 0;
    }
    (this->DefaultBackActionHandle).RegistrationId = pFVar12->RegistrationId;
    if ((atomic<unsigned___int64>)local_1a0._0_8_ != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_1a0._0_8_);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_40,(FWriteAccessScope *)local_1a0);
    if ((local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
      local_30 = 0;
    }
    if (local_190._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,(FDestructionSentinel *)local_1a0);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)local_1a0);
    if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_190._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,(FDestructionSentinel *)local_1a0);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_70,(FWriteAccessScope *)local_1a0);
    if ((local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_68.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
      local_60 = 0;
    }
    if (local_190._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,(FDestructionSentinel *)local_1a0);
    }
    if (FStack_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
               (FWriteAccessScope *)local_1a0);
  }
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_190._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1a0._8_8_,(FDestructionSentinel *)local_1a0);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  if ((ITextData *)local_120._128_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_120._128_8_ + 0x10))();
  }
  local_120._112_4_ = 0;
  if ((ForElementType<FSetElementId>)local_120._104_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_120._104_8_);
  }
  TSparseArray<TSparseSetElement<enum_ECommonInputType>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_ECommonInputType>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_120 + 0x28);
LAB_14a7f94a2:
  if (this->bAutoActivate != false) {
    if (5 < (byte)LogCommonUI._0_1_) {
      local_1a8 = (undefined1  [8])this->_padding_;
      ::FName::ToString((FName *)local_1a8,(FString *)&local_178);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if ((undefined1 *)local_178._0_8_ != (undefined1 *)0x0) {
        FMemory::Free((void *)local_178._0_8_);
      }
    }
    if (this->bIsActive == false) {
      (**(code **)(this->_padding_ + 0x520))(this);
    }
  }
  return;
}

// NativeDestruct @ 14a7f96a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCommonActivatableWidget::NativeDestruct(UCommonActivatableWidget *this)

{
  bool bVar1;
  UGameInstance *pUVar2;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *this_01;
  
  pUVar2 = UWidget::GetGameInstance((UWidget *)this);
  if ((pUVar2 != (UGameInstance *)0x0) && (this->bIsActive != false)) {
    (**(code **)(this->_padding_ + 0x528))(this);
  }
  if (0 < (int)this->_padding_) {
    this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
    if (this_00 != (ULocalPlayer *)0x0) {
      this_01 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
      if (this_01 != (UCommonUIActionRouterBase *)0x0) {
        UCommonUIActionRouterBase::NotifyUserWidgetDestructed(this_01,(UCommonUserWidget *)this);
      }
    }
  }
  UUserWidget::NativeDestruct((UUserWidget *)this);
  bVar1 = FUIActionBindingHandle::IsValid(&this->DefaultBackActionHandle);
  if (bVar1) {
    FUIActionBindingHandle::Unregister(&this->DefaultBackActionHandle);
    return;
  }
  return;
}

// NativeGetDesiredFocusTarget @ 14a7f9a30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall
UCommonActivatableWidget::NativeGetDesiredFocusTarget(UCommonActivatableWidget *this)

{
  UFunction *pUVar1;
  UWidget *pUVar2;
  UWidget *local_res8 [4];
  
  local_res8[0] = (UWidget *)0x0;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonActivatableWidget_BP_GetDesiredFocusTarget);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  if (local_res8[0] == (UWidget *)0x0) {
    pUVar2 = UUserWidget::GetDesiredFocusWidget((UUserWidget *)this);
    return pUVar2;
  }
  return local_res8[0];
}

// NativeOnActivated @ 14a7f9b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonActivatableWidget::NativeOnActivated(UCommonActivatableWidget *this)

{
  ESlateVisibility EVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *this_00;
  UFunction *pUVar4;
  UCommonActivatableWidget *local_res8;
  FName local_res10;
  FString local_38;
  FText local_28;
  
  if ((this->bIsActive == false) &&
     (local_res8 = this,
     bVar3 = `UCommonActivatableWidget::NativeOnActivated'::__l3::<lambda_1>::operator()
                       (&local_res8), !bVar3)) {
    return;
  }
  if ((this->bSetVisibilityOnActivated != false) &&
     ((**(code **)(this->_padding_ + 0x2c0))(this,this->ActivatedVisibility),
     5 < (byte)LogCommonUI._0_1_)) {
    StaticEnum<enum_ESlateVisibility>();
    EVar1 = this->ActivatedVisibility;
    this_00 = StaticEnum<enum_ESlateVisibility>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UEnum::GetDisplayNameTextByValue(this_00,&local_28,(ulonglong)EVar1);
    FText::ToString(&local_28);
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  (**(code **)(this->_padding_ + 0x500))(this);
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonActivatableWidget_BP_OnActivated);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,0);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnActivatedEvent);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnWidgetActivated,
             (void *)0x0);
  return;
}

// NativeOnDeactivated @ 14a7fa090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonActivatableWidget::NativeOnDeactivated(UCommonActivatableWidget *this)

{
  int *piVar1;
  ESlateVisibility EVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  UEnum *this_00;
  UFunction *pUVar9;
  FActivatableTreeNode *pFVar10;
  FActivatableTreeNode *pFVar11;
  FActivatableTreeNode *pFVar12;
  int *piVar13;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_88;
  FText local_78;
  TSharedPtr<FUIActionBinding,1> local_68;
  FUIActionBindingHandle local_58 [2];
  
  if (this->bIsActive != false) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9107588677856394964>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonActivatableWidget.cpp"
                       ,300,"!bIsActive");
    if (!bVar7) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->bSetVisibilityOnDeactivated != false) &&
     ((**(code **)(this->_padding_ + 0x2c0))(this,this->DeactivatedVisibility),
     5 < (byte)LogCommonUI._0_1_)) {
    StaticEnum<enum_ESlateVisibility>();
    EVar2 = this->DeactivatedVisibility;
    this_00 = StaticEnum<enum_ESlateVisibility>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UEnum::GetDisplayNameTextByValue(this_00,&local_78,(ulonglong)EVar2);
    FText::ToString(&local_78);
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_88);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  (**(code **)(this->_padding_ + 0x510))(this);
  if ((((this->InputTreeNode).Object == (FActivatableTreeNode *)0x0) ||
      (pTVar4 = (this->InputTreeNode).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1))
  goto LAB_14a7fa37c;
  pFVar12 = (FActivatableTreeNode *)0x0;
  pFVar11 = (FActivatableTreeNode *)(this->InputTreeNode).WeakReferenceCount.ReferenceController;
  pFVar10 = pFVar11;
  if (pFVar11 == (FActivatableTreeNode *)0x0) {
LAB_14a7fa255:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pFVar11 = pFVar10;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar6 = *(atomic<int> *)&pFVar11->_padding_;
    do {
      pFVar10 = pFVar12;
      if (aVar6 == (atomic<int>)0x0) goto LAB_14a7fa255;
      LOCK();
      aVar8 = *(atomic<int> *)&pFVar11->_padding_;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pFVar11->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    pFVar12 = (this->InputTreeNode).Object;
    pFVar10 = pFVar11;
    if (pFVar12 == (FActivatableTreeNode *)0x0) goto LAB_14a7fa255;
  }
  if (0 < (int)pFVar12->_padding_) {
    piVar13 = (int *)pFVar12->_padding_;
    iVar3 = (int)pFVar12->_padding_;
    piVar1 = piVar13 + (longlong)iVar3 * 6;
    while( true ) {
      if ((int)pFVar12->_padding_ != iVar3) {
        `TCheckedPointerIterator<FUIActionBindingHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (piVar13 == piVar1) break;
      ::FString::FString(&local_58[0].CachedDebugActionName,(FString *)piVar13);
      local_58[0].RegistrationId =
           *(int *)&(((FString *)(piVar13 + 4))->Data).AllocatorInstance.Data;
      FUIActionBinding::FindBinding(&local_68,local_58);
      if ((local_68.Object != (FUIActionBinding *)0x0) &&
         (0.0 < (local_68.Object)->HoldStartTime || (local_68.Object)->HoldStartTime == 0.0)) {
        (local_68.Object)->HoldStartTime = -1.0;
        TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                  (&(local_68.Object)->OnHoldActionProgressed,0.0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      piVar13 = piVar13 + 6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
LAB_14a7fa37c:
  pUVar9 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UCommonActivatableWidget_BP_OnDeactivated);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar9,0);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnDeactivatedEvent);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnWidgetDeactivated,
             (void *)0x0);
  return;
}

// NativeOnHandleBackAction @ 14a7faaa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UCommonActivatableWidget::NativeOnHandleBackAction(UCommonActivatableWidget *this)

{
  UFunction *pUVar1;
  FName local_res8 [4];
  FString local_18;
  
  if (this->bIsBackHandler != false) {
    local_res8[0] = (FName)((ulonglong)local_res8[0] & 0xffffffffffffff00);
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UCommonActivatableWidget_BP_OnHandleBackAction);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
    if ((char)local_res8[0].ComparisonIndex.Value == '\0') {
      if (5 < (byte)LogCommonUI._0_1_) {
        local_res8[0] = (FName)this->_padding_;
        ::FName::ToString(local_res8,&local_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      if (this->bIsActive != false) {
        (**(code **)(this->_padding_ + 0x528))(this);
      }
    }
    return true;
  }
  return false;
}

// OnWidgetRebuilt @ 14a800990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UCommonActivatableWidget::OnWidgetRebuilt(UCommonActivatableWidget *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TSharedPtr<FCommonActivatableSlateMetaData,1> *pTVar4;
  SWidget *pSVar5;
  SWidget *this_00;
  SWidget *pSVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  bool bVar9;
  TSharedRef<ISlateMetaData,1> local_38;
  TSharedPtr<FCommonActivatableSlateMetaData,1> local_28;
  
  pSVar5 = (SWidget *)0x0;
  UCommonUserWidget::OnWidgetRebuilt((UCommonUserWidget *)this);
  pSVar7 = (SWidget *)this->_padding_;
  this_00 = pSVar5;
  pSVar6 = pSVar7;
  pSVar8 = pSVar5;
  if (pSVar7 != (SWidget *)0x0) {
    iVar2 = (int)pSVar7->_padding_;
    do {
      this_00 = (SWidget *)0x0;
      pSVar6 = pSVar5;
      pSVar8 = (SWidget *)0x0;
      if (iVar2 == 0) goto LAB_14a8009e5;
      LOCK();
      iVar3 = (int)pSVar7->_padding_;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&pSVar7->_padding_ = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    this_00 = (SWidget *)this->_padding_;
    pSVar6 = pSVar7;
    if (this_00 != (SWidget *)0x0) {
      pSVar8 = (SWidget *)&DAT_00000001;
      pTVar4 = SWidget::GetMetaData<FCommonActivatableSlateMetaData>(this_00,&local_28);
      if (pTVar4->Object == (FCommonActivatableSlateMetaData *)0x0) {
        bVar9 = true;
        goto LAB_14a8009e8;
      }
    }
  }
LAB_14a8009e5:
  bVar9 = false;
  pSVar7 = pSVar6;
LAB_14a8009e8:
  if (pSVar8 != (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    if ((this_00 == (SWidget *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
    if ((SWidget *)local_38.SharedReferenceCount.ReferenceController == (SWidget *)0x0) {
      local_38.Object = ___xmm_00000000000000000000000000000010;
      local_38.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      *(undefined4 *)&((SWidget *)local_38.SharedReferenceCount.ReferenceController)->_padding_ = 1;
      *(undefined4 *)
       ((longlong)&((SWidget *)local_38.SharedReferenceCount.ReferenceController)->_padding_ + 4) =
           1;
      ((SWidget *)local_38.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFCommonActivatableSlateMetaData___00_SharedPointerInternals__6B_
      ;
      ((SWidget *)local_38.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)&___7FCommonActivatableSlateMetaData__6B_;
      if ((&((SWidget *)local_38.SharedReferenceCount.ReferenceController)->_padding_ ==
           (longlong *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      *(int *)&((SWidget *)local_38.SharedReferenceCount.ReferenceController)->_padding_ =
           (int)((SWidget *)local_38.SharedReferenceCount.ReferenceController)->_padding_ + 1;
      UNLOCK();
      pSVar5 = (SWidget *)local_38.SharedReferenceCount.ReferenceController;
      local_38.Object =
           (ISlateMetaData *)
           &((SWidget *)local_38.SharedReferenceCount.ReferenceController)->_padding_;
    }
    SWidget::AddMetadataInternal(this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return;
}

// RebuildWidget @ 14a806830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCommonActivatableWidget::RebuildWidget
          (UCommonActivatableWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRebuilding,
             (FWriteAccessScope *)&local_38);
  bVar2 = false;
  OnRebuilding._28_4_ = OnRebuilding._28_4_ + 1;
  uVar7 = OnRebuilding._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (int)OnRebuilding._16_4_) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar1)();
        return pTVar6;
      }
      if (((*(int *)(lVar8 + 8 + OnRebuilding._8_8_) == 0) ||
          (*(longlong **)(lVar8 + OnRebuilding._8_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar8 + OnRebuilding._8_8_) + 0x68))(), cVar4 == '\0'
         )) {
        bVar2 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnRebuilding._28_4_ = OnRebuilding._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRebuilding,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  UUserWidget::RebuildWidget((UUserWidget *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RegisterInputTreeNode @ 14a80ea30

void __thiscall
UCommonActivatableWidget::RegisterInputTreeNode
          (UCommonActivatableWidget *this,TSharedPtr<FActivatableTreeNode,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->InputTreeNode).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->InputTreeNode).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->InputTreeNode).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->InputTreeNode).WeakReferenceCount.ReferenceController = pTVar3;
  }
  return;
}

// ReleaseSlateResources @ 14a811940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonActivatableWidget::ReleaseSlateResources(UCommonActivatableWidget *this,bool param_1)

{
  UUserWidget::ReleaseSlateResources((UUserWidget *)this,param_1);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSlateReleasedEvent);
  return;
}

// RequestRefreshFocus @ 14a814a90

void __thiscall UCommonActivatableWidget::RequestRefreshFocus(UCommonActivatableWidget *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnRequestRefreshFocusEvent);
  return;
}

// Reset @ 14a814ab0

void __thiscall UCommonActivatableWidget::Reset(UCommonActivatableWidget *this)

{
  undefined1 *puVar1;
  FDestructionSentinel local_28;
  
  this->bIsActive = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->BP_OnWidgetActivated,
             (FWriteAccessScope *)&local_28);
  puVar1 = &(this->BP_OnWidgetActivated).field_0x14;
  *(undefined4 *)&(this->BP_OnWidgetActivated).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->BP_OnWidgetActivated).field_0x8,0,(int *)puVar1
              );
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->BP_OnWidgetDeactivated
             ,(FWriteAccessScope *)&local_28);
  puVar1 = &(this->BP_OnWidgetDeactivated).field_0x14;
  *(undefined4 *)&(this->BP_OnWidgetDeactivated).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->BP_OnWidgetDeactivated).field_0x8,0,
               (int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ResetCalculatedActionDomainCache @ 14a814b90

void __thiscall
UCommonActivatableWidget::ResetCalculatedActionDomainCache(UCommonActivatableWidget *this)

{
  void *pvVar1;
  
  if ((this->CalculatedActionDomainCache).bIsSet != false) {
    pvVar1 = *(void **)&(this->CalculatedActionDomainCache).TypedValue.SoftObjectPtr.field_0x18;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    (this->CalculatedActionDomainCache).bIsSet = false;
  }
  return;
}

// SetBindVisibilities @ 14a816fe0

void __thiscall
UCommonActivatableWidget::SetBindVisibilities
          (UCommonActivatableWidget *this,ESlateVisibility param_1,ESlateVisibility param_2,
          bool param_3)

{
  this->ActivatedBindVisibility = param_1;
  this->DeactivatedBindVisibility = param_2;
  this->bAllActive = param_3;
  return;
}

// StaticRegisterNativesUCommonActivatableWidget @ 14a81e290

void __cdecl UCommonActivatableWidget::StaticRegisterNativesUCommonActivatableWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UCommonActivatableWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execActivateWidget @ 14a82bd10

void __cdecl
UCommonActivatableWidget::execActivateWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x1b].field_0x20 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014a82bd31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x520))();
    return;
  }
  return;
}

// execBindVisibilityToActivation @ 14a82c840

void __cdecl
UCommonActivatableWidget::execBindVisibilityToActivation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UCommonActivatableWidget *pUVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType this;
  UCommonActivatableWidget *local_res10 [2];
  UCommonActivatableWidget *local_res20;
  FWeakObjectPtr local_68;
  undefined1 local_60 [24];
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  longlong lStack_30;
  
  local_res10[0] = (UCommonActivatableWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UCommonActivatableWidget *)0x0) {
    pUVar1 = param_1 + 0x1c;
    this.Data = *(FScriptContainerElement **)pUVar1;
    pFVar2 = this.Data + (longlong)*(int *)&param_1[0x1c].field_0x8 * 8;
    for (; this.Data != pFVar2; this.Data = this.Data + 8) {
      bVar6 = TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr>::
              UEOpEquals<UCommonActivatableWidget,bool>
                        ((TWeakObjectPtr<UCommonActivatableWidget,FWeakObjectPtr> *)this.Data,pUVar5
                        );
      if (bVar6) {
        return;
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    local_res20 = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res20);
    if (((*(FScriptContainerElement **)pUVar1 <= &local_68) &&
        (&local_68 <
         (FWeakObjectPtr *)
         (*(FScriptContainerElement **)pUVar1 + (longlong)*(int *)&param_1[0x1c].field_0xc * 8))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)&param_1[0x1c].field_0x8;
    if (iVar7 == *(int *)&param_1[0x1c].field_0xc) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)pUVar1,(int *)&param_1[0x1c].field_0xc);
    }
    *(int *)&param_1[0x1c].field_0x8 = iVar7 + 1;
    uStack_40._0_4_ = 0;
    *(FWeakObjectPtr *)(*(FScriptContainerElement **)pUVar1 + (longlong)iVar7 * 8) = local_68;
    local_48 = HandleVisibilityBoundWidgetActivations;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonActivatableWidget>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnActivatedEvent,(UCommonActivatableWidget *)local_60,
               (pmf_cf4ce46c *)param_1);
    local_48 = HandleVisibilityBoundWidgetActivations;
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    local_38 = HandleVisibilityBoundWidgetActivations;
    lStack_30 = uStack_40;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UCommonActivatableWidget>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnDeactivatedEvent,(UCommonActivatableWidget *)(local_60 + 8),
               (pmf_cf4ce46c *)param_1);
    HandleVisibilityBoundWidgetActivations((UCommonActivatableWidget *)param_1);
  }
  return;
}

// execClearFocusRestorationTarget @ 14a82ca80

void __cdecl
UCommonActivatableWidget::execClearFocusRestorationTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearFocusRestorationTarget((UCommonActivatableWidget *)param_1);
  return;
}

// execDeactivateWidget @ 14a82cd00

void __cdecl
UCommonActivatableWidget::execDeactivateWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x1b].field_0x20 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014a82cd21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x528))();
    return;
  }
  return;
}

// execGetDesiredFocusTarget @ 14a82db70

void __cdecl
UCommonActivatableWidget::execGetDesiredFocusTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x4f0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execIsActivated @ 14a830360

void __cdecl
UCommonActivatableWidget::execIsActivated(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x1b].field_0x20;
  return;
}

// execRequestRefreshFocus @ 14a831910

void __cdecl
UCommonActivatableWidget::execRequestRefreshFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(param_1 + 0x20));
  return;
}

// execSetBindVisibilities @ 14a832250

void __cdecl
UCommonActivatableWidget::execSetBindVisibilities(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  int local_res20 [2];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x1c].field_0x10 = local_res8[0];
  param_1[0x1c].field_0x11 = local_res10[0];
  param_1[0x1c].field_0x12 = local_res20[0] != 0;
  return;
}

// operator() @ 1505552e0

bool __thiscall
`UCommonActivatableWidget::NativeOnActivated'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9107588677856394981>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9107588677856394981>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150555355;
    }
  }
  bVar2 = false;
LAB_150555355:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

