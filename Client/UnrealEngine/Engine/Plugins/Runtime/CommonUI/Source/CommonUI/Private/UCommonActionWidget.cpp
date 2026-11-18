// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 48

// GetEnhancedInputAction_WrapperImpl @ 14a7831e0

void __cdecl UCommonActionWidget::GetEnhancedInputAction_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x360);
  return;
}

// StaticClass @ 14a783240

UClass * __cdecl UCommonActionWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActionWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActionWidget",
               &Z_Registration_Info_UClass_UCommonActionWidget.InnerSingleton,
               StaticRegisterNativesUCommonActionWidget,0x490,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonActionWidget>,
               InternalVTableHelperCtorCaller<UCommonActionWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActionWidget.InnerSingleton;
}

// UCommonActionWidget @ 14a7ab4e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonActionWidget * __thiscall
UCommonActionWidget::UCommonActionWidget(UCommonActionWidget *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->OnInputMethodChanged = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->OnInputMethodChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputMethodChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnInputIconUpdated = 0;
  *(undefined8 *)&(this->OnInputIconUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputIconUpdated).field_0x10 = 0;
  FSlateBrush::FSlateBrush(&this->ProgressMaterialBrush);
  (this->ProgressMaterialParam).ComparisonIndex = 0;
  (this->ProgressMaterialParam).Number = 0;
  FSlateBrush::FSlateBrush(&this->IconRimBrush);
  (this->InputActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActions).ArrayNum = 0;
  (this->InputActions).ArrayMax = 0;
  (this->EnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (this->DisplayedBindingHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->DisplayedBindingHandle).RegistrationId = -1;
  (this->ProgressDynamicMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->MyKeyBox).Object = (SBox *)0x0;
  (this->MyKeyBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyIcon).Object = (SImage *)0x0;
  (this->MyIcon).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyProgressImage).Object = (SImage *)0x0;
  (this->MyProgressImage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MyIconRim).Object = (SImage *)0x0;
  (this->MyIconRim).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSlateBrush::FSlateBrush(&this->Icon);
  this->bAlwaysHideOverride = false;
  return this;
}

// UCommonActionWidget @ 14a7ab5f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonActionWidget * __thiscall
UCommonActionWidget::UCommonActionWidget(UCommonActionWidget *this,FObjectInitializer *param_1)

{
  FSlateBrush *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->OnInputMethodChanged = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->OnInputMethodChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputMethodChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnInputIconUpdated = 0;
  *(undefined8 *)&(this->OnInputIconUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputIconUpdated).field_0x10 = 0;
  FSlateBrush::FSlateBrush(&this->ProgressMaterialBrush);
  (this->ProgressMaterialParam).ComparisonIndex = 0;
  (this->ProgressMaterialParam).Number = 0;
  FSlateBrush::FSlateBrush(&this->IconRimBrush);
  (this->InputActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputActions).ArrayNum = 0;
  (this->InputActions).ArrayMax = 0;
  (this->EnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (this->DisplayedBindingHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->DisplayedBindingHandle).RegistrationId = -1;
  (this->ProgressDynamicMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->MyKeyBox).Object = (SBox *)0x0;
  (this->MyKeyBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyIcon).Object = (SImage *)0x0;
  (this->MyIcon).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MyProgressImage).Object = (SImage *)0x0;
  (this->MyProgressImage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MyIconRim).Object = (SImage *)0x0;
  (this->MyIconRim).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSlateBrush::FSlateBrush(&this->Icon);
  this->bAlwaysHideOverride = false;
  pFVar1 = FStyleDefaults::GetNoBrush();
  FSlateBrush::operator=(&this->IconRimBrush,pFVar1);
  return this;
}

// ~UCommonActionWidget @ 14a7b1b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonActionWidget::~UCommonActionWidget(UCommonActionWidget *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  void *pvVar3;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  (this->Icon)._padding_ = (longlong)&___7FSlateBrush__6B_;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Icon).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyIconRim).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyProgressImage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyIcon).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyKeyBox).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->DisplayedBindingHandle).CachedDebugActionName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->IconRimBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->IconRimBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar2 = (this->ProgressMaterialBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->ProgressMaterialBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pvVar3 = *(void **)&(this->OnInputIconUpdated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputIconUpdated);
  pvVar3 = *(void **)&(this->OnInputMethodChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputMethodChanged);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// FOnInputIconUpdated_DelegateWrapper @ 14a7db4a0

void __cdecl
UCommonActionWidget::FOnInputIconUpdated_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnInputMethodChanged_DelegateWrapper @ 14a7db4b0

void __cdecl
UCommonActionWidget::FOnInputMethodChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,bool param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetDisplayText @ 14a7e20f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FText * __thiscall
UCommonActionWidget::GetDisplayText(UCommonActionWidget *this,FText *__return_storage_ptr__)

{
  UInputAction *pUVar1;
  ITextData *pIVar2;
  bool bVar3;
  ULocalPlayer *pUVar4;
  UCommonInputSubsystem *pUVar5;
  UGameInstance *pUVar6;
  FCommonInputActionDataBase *pFVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  if ((this->EnhancedInputAction).field0_0x0.DebugPtr != (UInputAction *)0x0) {
    bVar3 = CommonUI::IsEnhancedInputSupportEnabled();
    if (bVar3) {
      pUVar1 = (this->EnhancedInputAction).field0_0x0.DebugPtr;
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar2 = (pUVar1->ActionDescription).TextData.Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      __return_storage_ptr__->Flags = (pUVar1->ActionDescription).Flags;
      return __return_storage_ptr__;
    }
  }
  pUVar4 = FUIActionBindingHandle::GetBoundLocalPlayer(&this->DisplayedBindingHandle);
  if (pUVar4 == (ULocalPlayer *)0x0) {
    pUVar4 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this);
  }
  pUVar5 = UCommonInputSubsystem::Get(pUVar4);
  pUVar6 = UWidget::GetGameInstance((UWidget *)this);
  if (((pUVar6 != (UGameInstance *)0x0) && (pUVar5 != (UCommonInputSubsystem *)0x0)) &&
     (0 < (this->InputActions).ArrayNum)) {
    pFVar7 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                       ((FDataTableRowHandle *)(this->InputActions).AllocatorInstance.Data,
                        L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                       );
    if (pFVar7 != (FCommonInputActionDataBase *)0x0) {
      lVar8 = (**(code **)(pFVar7->_padding_ + 0x18))(pFVar7,pUVar5);
      if (*(char *)(lVar8 + 0x19) != '\0') {
        FText::FText(__return_storage_ptr__,&pFVar7->HoldDisplayName);
        return __return_storage_ptr__;
      }
      FText::FText(__return_storage_ptr__,&pFVar7->DisplayName);
      return __return_storage_ptr__;
    }
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetEnhancedInputAction @ 14a7e2230

UInputAction * __thiscall UCommonActionWidget::GetEnhancedInputAction(UCommonActionWidget *this)

{
  return (this->EnhancedInputAction).field0_0x0.DebugPtr;
}

// GetIcon @ 14a7e27c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSlateBrush * __thiscall
UCommonActionWidget::GetIcon(UCommonActionWidget *this,FSlateBrush *__return_storage_ptr__)

{
  bool bVar1;
  ULocalPlayer *pUVar2;
  UCommonInputSubsystem *pUVar3;
  FSlateBrush *pFVar4;
  FSlateBrush local_168;
  FSlateBrush local_b8;
  
  pUVar2 = FUIActionBindingHandle::GetBoundLocalPlayer(&this->DisplayedBindingHandle);
  if (pUVar2 == (ULocalPlayer *)0x0) {
    pUVar2 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this);
  }
  pUVar3 = UCommonInputSubsystem::Get(pUVar2);
  if (pUVar3 == (UCommonInputSubsystem *)0x0) {
    pFVar4 = FStyleDefaults::GetNoBrush();
    FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar4);
  }
  else {
    if (((this->EnhancedInputAction).field0_0x0.DebugPtr != (UInputAction *)0x0) &&
       (bVar1 = CommonUI::IsEnhancedInputSupportEnabled(), bVar1)) {
      pFVar4 = CommonUI::GetIconForEnhancedInputAction
                         (&local_168,pUVar3,(this->EnhancedInputAction).field0_0x0.DebugPtr);
      FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar4);
      local_168._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    pFVar4 = CommonUI::GetIconForInputActions(&local_b8,pUVar3,&this->InputActions);
    FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar4);
    local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetIconDynamicMaterial @ 14a7e28d0

UMaterialInstanceDynamic * __thiscall
UCommonActionWidget::GetIconDynamicMaterial(UCommonActionWidget *this)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  pUVar3 = (UMaterialInstanceDynamic *)(this->Icon).ResourceObject.field0_0x0.DebugPtr;
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        pUVar3 = UMaterialInstanceDynamic::Create
                           ((UMaterialInterface *)pUVar3,(UObject *)this,(FName)0x0);
        FSlateBrush::SetResourceObject(&this->Icon,(UObject *)pUVar3);
        if ((this->MyIcon).Object != (SImage *)0x0) {
          SImage::InvalidateImage((this->MyIcon).Object);
        }
      }
      return pUVar3;
    }
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetInputActionData @ 14a7e2fe0

FCommonInputActionDataBase * __thiscall
UCommonActionWidget::GetInputActionData(UCommonActionWidget *this)

{
  FCommonInputActionDataBase *pFVar1;
  
  if (0 < (this->InputActions).ArrayNum) {
    pFVar1 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                       ((FDataTableRowHandle *)(this->InputActions).AllocatorInstance.Data,
                        L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                       );
    return pFVar1;
  }
  return (FCommonInputActionDataBase *)0x0;
}

// GetInputSubsystem @ 14a7e3010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonInputSubsystem * __thiscall UCommonActionWidget::GetInputSubsystem(UCommonActionWidget *this)

{
  ULocalPlayer *pUVar1;
  UCommonInputSubsystem *pUVar2;
  
  pUVar1 = FUIActionBindingHandle::GetBoundLocalPlayer(&this->DisplayedBindingHandle);
  if (pUVar1 == (ULocalPlayer *)0x0) {
    pUVar1 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this);
  }
  pUVar2 = UCommonInputSubsystem::Get(pUVar1);
  return pUVar2;
}

// GetPrivateStaticClass @ 14a7e47c0

UClass * __cdecl UCommonActionWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonActionWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonActionWidget",
               &Z_Registration_Info_UClass_UCommonActionWidget.InnerSingleton,
               StaticRegisterNativesUCommonActionWidget,0x490,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonActionWidget>,
               InternalVTableHelperCtorCaller<UCommonActionWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonActionWidget.InnerSingleton;
}

// HandleInputMethodChanged @ 14a7ecfb0

void __thiscall
UCommonActionWidget::HandleInputMethodChanged(UCommonActionWidget *this,ECommonInputType param_1)

{
  undefined1 local_res10 [24];
  
  (**(code **)(*(longlong *)this + 0x350))();
  local_res10[0] = param_1 == Gamepad;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnInputMethodChanged,
             local_res10);
  return;
}

// IsHeldAction @ 14a7f5970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UCommonActionWidget::IsHeldAction(UCommonActionWidget *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UInputAction *pUVar3;
  bool bVar4;
  ulonglong uVar5;
  ULocalPlayer *pUVar6;
  UCommonInputSubsystem *pUVar7;
  UGameInstance *pUVar8;
  FCommonInputActionDataBase *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  if (((this->EnhancedInputAction).field0_0x0.DebugPtr == (UInputAction *)0x0) ||
     (bVar4 = CommonUI::IsEnhancedInputSupportEnabled(), !bVar4)) {
    pUVar6 = FUIActionBindingHandle::GetBoundLocalPlayer(&this->DisplayedBindingHandle);
    if (pUVar6 == (ULocalPlayer *)0x0) {
      pUVar6 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this);
    }
    pUVar7 = UCommonInputSubsystem::Get(pUVar6);
    pUVar8 = UWidget::GetGameInstance((UWidget *)this);
    if ((((pUVar8 != (UGameInstance *)0x0) && (pUVar7 != (UCommonInputSubsystem *)0x0)) &&
        (0 < (this->InputActions).ArrayNum)) &&
       (pFVar9 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                           ((FDataTableRowHandle *)(this->InputActions).AllocatorInstance.Data,
                            L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                           ), pFVar9 != (FCommonInputActionDataBase *)0x0)) {
      lVar10 = (**(code **)(pFVar9->_padding_ + 0x18))(pFVar9,pUVar7);
      return (bool)*(undefined1 *)(lVar10 + 0x19);
    }
  }
  else {
    pUVar3 = (this->EnhancedInputAction).field0_0x0.DebugPtr;
    pFVar11 = (pUVar3->Triggers).AllocatorInstance.Data;
    iVar2 = (pUVar3->Triggers).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar3->Triggers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UInputTrigger>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar1) break;
      if ((*(longlong **)pFVar11 != (longlong *)0x0) &&
         (uVar5 = (**(code **)(**(longlong **)pFVar11 + 0x2c0))(), (uVar5 & 4) != 0)) {
        return true;
      }
      pFVar11 = pFVar11 + 8;
    }
  }
  return false;
}

// ListenToInputMethodChanged @ 14a7f7bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCommonActionWidget::ListenToInputMethodChanged(UCommonActionWidget *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  ULocalPlayer *pUVar3;
  UCommonInputSubsystem *pUVar4;
  UEnhancedInputLocalPlayerSubsystem *pUVar5;
  char *pcVar6;
  UObject *this_00;
  UFunction *pUVar7;
  char *pcVar8;
  <lambda_1> local_res8 [16];
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  UCommonActionWidget *local_d0;
  FName *local_c8;
  FName local_c0;
  code *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_a8;
  FDestructionSentinel local_98;
  code *local_78;
  longlong lStack_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  pUVar3 = FUIActionBindingHandle::GetBoundLocalPlayer(&this->DisplayedBindingHandle);
  if (pUVar3 == (ULocalPlayer *)0x0) {
    pUVar3 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this);
  }
  pUVar4 = UCommonInputSubsystem::Get(pUVar3);
  if (pUVar4 != (UCommonInputSubsystem *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnInputMethodChangedNative,this);
    if (param_1) {
      uStack_b0 = 0;
      local_b8 = HandleInputMethodChanged;
      lStack_70 = (ulonglong)uStack_ac << 0x20;
      local_78 = HandleInputMethodChanged;
      TMulticastDelegateRegistration<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>
      ::AddUObject<UCommonActionWidget>
                (&pUVar4->OnInputMethodChangedNative,(UCommonActionWidget *)&local_b8,
                 (pmf_3efe326f *)this);
    }
  }
  bVar2 = CommonUI::IsEnhancedInputSupportEnabled();
  if (!bVar2) {
    return;
  }
  pUVar3 = FUIActionBindingHandle::GetBoundLocalPlayer(&this->DisplayedBindingHandle);
  if ((pUVar3 == (ULocalPlayer *)0x0) &&
     (pUVar3 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this),
     pUVar3 == (ULocalPlayer *)0x0)) {
    return;
  }
  pUVar5 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pUVar3);
  if (pUVar5 == (UEnhancedInputLocalPlayerSubsystem *)0x0) {
    return;
  }
  if (!param_1) {
    pcVar6 = strstr("&UCommonActionWidget::OnEnhancedInputMappingsRebuilt","::");
    if (pcVar6 == (char *)0x0) {
LAB_14a7f7edb:
      pcVar8 = &DAT_00000002;
    }
    else {
      do {
        pcVar8 = pcVar6;
        pcVar6 = strstr(pcVar8 + 1,"::");
      } while (pcVar6 != (char *)0x0);
      if (pcVar8 == (char *)0x0) goto LAB_14a7f7edb;
      pcVar8 = pcVar8 + 2;
      if (*pcVar8 != '0') goto LAB_14a7f7f0e;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_14a7f7f0e:
    ::FName::FName(&local_c0,pcVar8);
    if ((this == (UCommonActionWidget *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && InMethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                           ,0x500,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar5->ControlMappingsRebuiltDelegate,(UObject *)this,local_c0);
    return;
  }
  pcVar6 = strstr("&UCommonActionWidget::OnEnhancedInputMappingsRebuilt","::");
  if (pcVar6 == (char *)0x0) {
LAB_14a7f7cfb:
    pcVar8 = &DAT_00000002;
LAB_14a7f7d00:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar6;
      pcVar6 = strstr(pcVar8 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14a7f7cfb;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14a7f7d00;
  }
  ::FName::FName(&local_res20,pcVar8);
  if ((this == (UCommonActionWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4e4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_res18 = local_res20;
  if ((this == (UCommonActionWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_d0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonActionWidget *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_d0);
  local_d8 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_68);
  if ((local_d8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_e0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    pUVar7 = UObject::FindFunction(this_00,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (pUVar7 != (UFunction *)0x0) goto LAB_14a7f7e32;
  }
  local_c8 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_BindDynamic<UCommonActionWidget>'::__l2::<lambda_1>::operator()(&local_c8);
LAB_14a7f7e32:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_50);
  local_a8.Object = local_e0;
  local_a8.FunctionName = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar5->ControlMappingsRebuiltDelegate,(FWriteAccessScope *)&local_98);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar5->ControlMappingsRebuiltDelegate).field_0x8,&local_a8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar5->ControlMappingsRebuiltDelegate).field_0x8,local_res8,Default);
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  return;
}

// OnActionComplete @ 14a7fbd80

void __thiscall UCommonActionWidget::OnActionComplete(UCommonActionWidget *this)

{
  UMaterialInstanceDynamic *this_00;
  
  this_00 = (this->ProgressDynamicMaterial).field0_0x0.DebugPtr;
  if ((this_00 != (UMaterialInstanceDynamic *)0x0) && (this->ProgressMaterialParam != (FName)0x0)) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this_00,this->ProgressMaterialParam,0.0);
    return;
  }
  return;
}

// OnActionProgress @ 14a7fbdf0

void __thiscall UCommonActionWidget::OnActionProgress(UCommonActionWidget *this,float param_1)

{
  UMaterialInstanceDynamic *this_00;
  
  this_00 = (this->ProgressDynamicMaterial).field0_0x0.DebugPtr;
  if ((this_00 != (UMaterialInstanceDynamic *)0x0) && (this->ProgressMaterialParam != (FName)0x0)) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this_00,this->ProgressMaterialParam,param_1);
    return;
  }
  return;
}

// OnEnhancedInputMappingsRebuilt @ 14a7fc470

void __thiscall UCommonActionWidget::OnEnhancedInputMappingsRebuilt(UCommonActionWidget *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a7fc473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x350))();
  return;
}

// OnWidgetRebuilt @ 14a800960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonActionWidget::OnWidgetRebuilt(UCommonActionWidget *this)

{
  UWidget::OnWidgetRebuilt((UWidget *)this);
  (**(code **)(*(longlong *)this + 0x350))(this);
  ListenToInputMethodChanged(this,true);
  return;
}

// RebuildWidget @ 14a805ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedRef<SWidget,1> * __thiscall
UCommonActionWidget::RebuildWidget
          (UCommonActionWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SBox,1> *pTVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  UMaterialInterface *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SBox *pSVar9;
  code *pcVar10;
  bool bVar11;
  UClass *pUVar12;
  UMaterialInstanceDynamic *pUVar13;
  FArguments *pFVar14;
  TSharedRef<SBox,1> *pTVar15;
  TSharedRef<SWidget,1> *pTVar16;
  FArguments *pFVar17;
  FSlotArguments *pFVar18;
  longlong *plVar19;
  FArguments *pFVar20;
  TSharedRef<SImage,1> *pTVar21;
  TSharedRef<SOverlay,1> *pTVar22;
  FSlotArguments *pFVar23;
  FSlotArguments *pFVar24;
  T0RequiredArgs local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1118;
  T0RequiredArgs local_1117 [3];
  FLLMScope local_1114;
  FLLMScope local_1110;
  FLLMScope local_110c;
  FLLMScope local_1108;
  FLLMScope local_1104;
  SImage *local_1100;
  FSharedReferencer<1> local_10f8;
  SImage *local_10f0;
  FSharedReferencer<1> local_10e8;
  SImage *local_10e0;
  FSharedReferencer<1> local_10d8;
  undefined8 local_10d0;
  SBox *local_10c8;
  FSharedReferencer<1> local_10c0;
  FSlateBrush *local_10b8;
  undefined1 local_10b0;
  undefined1 local_10a8 [8];
  void *pvStack_10a0;
  undefined8 local_1098;
  FSlateBrush *local_1090;
  undefined1 local_1088;
  undefined1 local_1080 [8];
  void *pvStack_1078;
  undefined8 local_1070;
  FSlateBrush *local_1068;
  undefined1 local_1060;
  undefined1 local_1058 [8];
  void *pvStack_1050;
  undefined8 local_1048;
  undefined4 local_1040 [2];
  undefined4 local_1038 [2];
  FName local_1030;
  FMemScope local_1028;
  FName local_1020;
  FMemScope local_1018;
  FName local_1010;
  FMemScope local_1008;
  FName local_1000;
  FName local_ff8;
  FMemScope local_ff0;
  SBox *local_fe8;
  FMemScope local_fe0;
  undefined4 local_fd8 [2];
  SImage *local_fd0;
  TReferenceControllerBase<1> *pTStack_fc8;
  SImage *local_fc0;
  TReferenceControllerBase<1> *pTStack_fb8;
  SImage *local_fb0;
  TReferenceControllerBase<1> *pTStack_fa8;
  TSharedRef<SWidget,1> local_fa0;
  undefined4 local_f90 [2];
  undefined4 local_f88 [2];
  undefined4 local_f80 [2];
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_f78;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_f60;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_f48;
  TSharedRef<SImage,1> local_f30;
  TSharedRef<SImage,1> local_f20;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_f10;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_ef8;
  TSharedRef<SBox,1> local_ee0;
  TSharedRef<SOverlay,1> local_ed0;
  TSharedRef<SImage,1> local_ec0;
  undefined1 local_eb0 [56];
  void *local_e78;
  undefined1 local_e50 [56];
  void *local_e18;
  undefined1 local_df0 [56];
  void *local_db8;
  FArguments local_d90;
  FArguments local_b88;
  FArguments local_8e0;
  FArguments local_638;
  FArguments local_390;
  undefined8 uStack_48;
  
  uStack_48 = 0x14a805cc3;
  pFVar24 = (FSlotArguments *)0x0;
  local_res10 = __return_storage_ptr__;
  if ((this->ProgressDynamicMaterial).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0) {
    pUVar3 = (this->ProgressMaterialBrush).ResourceObject.field0_0x0.DebugPtr;
    if (pUVar3 != (UObject *)0x0) {
      pUVar12 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      lVar4 = *(longlong *)&pUVar3->field_0x10;
      iVar2 = (int)pUVar12->_padding_;
      if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar12->_padding_)) goto LAB_14a805d81;
    }
    pUVar5 = (UMaterialInterface *)(this->ProgressMaterialBrush).ResourceObject.field0_0x0.DebugPtr;
    if (pUVar5 != (UMaterialInterface *)0x0) {
      pUVar12 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar2 = (int)pUVar12->_padding_;
      if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar12->_padding_)) {
        local_10d0 = 0;
        pUVar13 = UMaterialInstanceDynamic::Create(pUVar5,(UObject *)0x0,(FName)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        (this->ProgressDynamicMaterial).field0_0x0.DebugPtr = pUVar13;
        FSlateBrush::SetResourceObject(&this->ProgressMaterialBrush,(UObject *)pUVar13);
        goto LAB_14a805d81;
      }
    }
    (this->ProgressDynamicMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  }
LAB_14a805d81:
  pFVar14 = SBox::FArguments::FArguments(&local_390);
  pFVar14->_HAlign = HAlign_Center;
  pFVar14->_VAlign = VAlign_Center;
  FLLMScope::FLLMScope(&local_1114,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1030 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1028,&local_1030,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_f10,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonActionWidget.cpp"
             ,0x41,local_res8);
  FMemScope::~FMemScope(&local_1028);
  FLLMScope::~FLLMScope(&local_1114);
  pTVar15 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f10,&local_ee0,pFVar14);
  local_10c0.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
  local_10c8 = pTVar15->Object;
  if (local_10c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyKeyBox;
  if (pTVar1 != (TSharedPtr<SBox,1> *)&local_10c8) {
    pTVar1->Object = local_10c8;
    local_10c8 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyKeyBox).SharedReferenceCount,&local_10c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ee0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f10._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_390);
  if (pTVar1->Object == (SBox *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar16;
    }
  }
  local_fe8 = pTVar1->Object;
  pFVar17 = SOverlay::FArguments::FArguments(&local_d90);
  pFVar18 = SOverlay::Slot((FSlotArguments *)local_df0,0);
  plVar19 = &pFVar18->_padding_;
  if ((longlong *)local_fd8 != plVar19) {
    *(undefined4 *)plVar19 = 2;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  if (plVar19 == (longlong *)0x0) {
    pFVar18 = (FSlotArguments *)0x0;
  }
  if ((longlong *)local_f90 != &pFVar18->_padding_) {
    *(undefined4 *)&pFVar18->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  pFVar23 = pFVar24;
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar23 = pFVar18;
  }
  pFVar20 = SImage::FArguments::FArguments(&local_638);
  local_10b0 = 1;
  local_10b8 = &this->IconRimBrush;
  local_1098 = 0;
  local_10a8 = (undefined1  [8])0x0;
  pvStack_10a0 = (void *)0x0;
  (pFVar20->_Image).Value = local_10b8;
  (pFVar20->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10a8);
  if (pvStack_10a0 != (void *)0x0) {
    FMemory::Free(pvStack_10a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10a8);
  FLLMScope::FLLMScope(&local_1110,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1020 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1018,&local_1020,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_f48,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonActionWidget.cpp"
             ,0x4b,local_res18);
  FMemScope::~FMemScope(&local_1018);
  FLLMScope::~FLLMScope(&local_1110);
  if (local_f48._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f48._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f48._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_fd0 = (this->MyIconRim).Object;
  pTStack_fc8 = (this->MyIconRim).SharedReferenceCount.ReferenceController;
  (this->MyIconRim).Object = local_f48._Widget.Object;
  (this->MyIconRim).SharedReferenceCount.ReferenceController =
       local_f48._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_fc8);
  pTVar21 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f48,&local_f20,pFVar20);
  pTVar6 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_10e0 = pTVar21->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10d8.ReferenceController = pTVar6;
  if ((SImage **)&pFVar23->_padding_ != &local_10e0) {
    pFVar23->_padding_ = (longlong)local_10e0;
    local_10e0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar23->_padding_,&local_10d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10d8.ReferenceController);
  pFVar17 = SOverlay::FArguments::operator+(pFVar17,pFVar23);
  pFVar18 = SOverlay::Slot((FSlotArguments *)local_e50,0);
  plVar19 = &pFVar18->_padding_;
  if ((longlong *)local_f88 != plVar19) {
    *(undefined4 *)plVar19 = 2;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  if (plVar19 == (longlong *)0x0) {
    pFVar18 = (FSlotArguments *)0x0;
  }
  if ((longlong *)local_f80 != &pFVar18->_padding_) {
    *(undefined4 *)&pFVar18->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  pFVar23 = pFVar24;
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar23 = pFVar18;
  }
  pFVar20 = SImage::FArguments::FArguments(&local_8e0);
  local_1088 = 1;
  local_1090 = &this->ProgressMaterialBrush;
  local_1070 = 0;
  local_1080 = (undefined1  [8])0x0;
  pvStack_1078 = (void *)0x0;
  (pFVar20->_Image).Value = local_1090;
  (pFVar20->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1080);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1080);
  if (pvStack_1078 != (void *)0x0) {
    FMemory::Free(pvStack_1078);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1080);
  FLLMScope::FLLMScope(&local_110c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1010 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1008,&local_1010,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_f60,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonActionWidget.cpp"
             ,0x52,local_res20);
  FMemScope::~FMemScope(&local_1008);
  FLLMScope::~FLLMScope(&local_110c);
  if (local_f60._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f60._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f60._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_fc0 = (this->MyProgressImage).Object;
  pTStack_fb8 = (this->MyProgressImage).SharedReferenceCount.ReferenceController;
  (this->MyProgressImage).Object = local_f60._Widget.Object;
  (this->MyProgressImage).SharedReferenceCount.ReferenceController =
       local_f60._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_fb8);
  pTVar21 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f60,&local_f30,pFVar20);
  pTVar7 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_10f0 = pTVar21->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10e8.ReferenceController = pTVar7;
  if ((SImage **)&pFVar23->_padding_ != &local_10f0) {
    pFVar23->_padding_ = (longlong)local_10f0;
    local_10f0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar23->_padding_,&local_10e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10e8.ReferenceController);
  pFVar17 = SOverlay::FArguments::operator+(pFVar17,pFVar23);
  pFVar18 = SOverlay::Slot((FSlotArguments *)local_eb0,0);
  plVar19 = &pFVar18->_padding_;
  if ((longlong *)local_1040 != plVar19) {
    *(undefined4 *)plVar19 = 2;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  if (plVar19 == (longlong *)0x0) {
    pFVar18 = (FSlotArguments *)0x0;
  }
  if ((longlong *)local_1038 != &pFVar18->_padding_) {
    *(undefined4 *)&pFVar18->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  if (pFVar18 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar24 = pFVar18;
  }
  pFVar20 = SImage::FArguments::FArguments(&local_b88);
  local_1060 = 1;
  local_1068 = &this->Icon;
  local_1048 = 0;
  local_1058 = (undefined1  [8])0x0;
  pvStack_1050 = (void *)0x0;
  (pFVar20->_Image).Value = local_1068;
  (pFVar20->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1058);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1058);
  if (pvStack_1050 != (void *)0x0) {
    FMemory::Free(pvStack_1050);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1058);
  FLLMScope::FLLMScope(&local_1108,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1000 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_fe0,&local_1000,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_f78,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonActionWidget.cpp"
             ,0x59,&local_1118);
  FMemScope::~FMemScope(&local_fe0);
  FLLMScope::~FLLMScope(&local_1108);
  if (local_f78._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f78._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f78._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_fb0 = (this->MyIcon).Object;
  pTStack_fa8 = (this->MyIcon).SharedReferenceCount.ReferenceController;
  (this->MyIcon).Object = local_f78._Widget.Object;
  (this->MyIcon).SharedReferenceCount.ReferenceController =
       local_f78._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_fa8);
  pTVar21 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_f78,&local_ec0,pFVar20);
  pTVar8 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_1100 = pTVar21->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10f8.ReferenceController = pTVar8;
  if ((SImage **)&pFVar24->_padding_ != &local_1100) {
    pFVar24->_padding_ = (longlong)local_1100;
    local_1100 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar24->_padding_,&local_10f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10f8.ReferenceController);
  pFVar17 = SOverlay::FArguments::operator+(pFVar17,pFVar24);
  FLLMScope::FLLMScope(&local_1104,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ff8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ff0,&local_ff8,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_ef8,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonActionWidget.cpp"
             ,0x46,local_1117);
  FMemScope::~FMemScope(&local_ff0);
  FLLMScope::~FLLMScope(&local_1104);
  pTVar22 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_ef8,&local_ed0,pFVar17);
  local_fa0.Object = (SWidget *)pTVar22->Object;
  local_fa0.SharedReferenceCount.ReferenceController =
       (pTVar22->SharedReferenceCount).ReferenceController;
  if (local_fa0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_fa0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_fa0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SBox::SetContent(local_fe8,&local_fa0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ed0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ef8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ec0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f78._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_b88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_eb0 + 0x30));
  if (local_e78 != (void *)0x0) {
    FMemory::Free(local_e78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_eb0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_eb0._16_8_);
  if ((undefined8 *)local_eb0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_eb0._0_8_)(local_eb0._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f60._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_8e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_e50 + 0x30));
  if (local_e18 != (void *)0x0) {
    FMemory::Free(local_e18);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_e50 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e50._16_8_);
  if ((undefined8 *)local_e50._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_e50._0_8_)(local_e50._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f48._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_638);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_df0 + 0x30));
  if (local_db8 != (void *)0x0) {
    FMemory::Free(local_db8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_df0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_df0._16_8_);
  if ((undefined8 *)local_df0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_df0._0_8_)(local_df0._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_d90._Slots.AllocatorInstance.Data,local_d90._Slots.ArrayNum);
  if ((FSlotArguments *)local_d90._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_d90._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d90);
  if ((this->MyKeyBox).Object == (SBox *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar16;
    }
  }
  pTVar6 = (this->MyKeyBox).SharedReferenceCount.ReferenceController;
  pSVar9 = (this->MyKeyBox).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar9 == (SBox *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar16;
    }
  }
  pTVar16 = local_res10;
  local_res10->Object = (SWidget *)pSVar9;
  (local_res10->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return pTVar16;
}

// ReleaseSlateResources @ 14a811850

void __thiscall UCommonActionWidget::ReleaseSlateResources(UCommonActionWidget *this,bool param_1)

{
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyProgressImage != (TSharedPtr<SImage,1> *)&local_38) {
    (this->MyProgressImage).Object = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyProgressImage).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyIcon != (TSharedPtr<SImage,1> *)&local_28) {
    (this->MyIcon).Object = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyIcon).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyKeyBox != (TSharedPtr<SBox,1> *)&local_18) {
    (this->MyKeyBox).Object = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyKeyBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  ListenToInputMethodChanged(this,false);
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  return;
}

// Serialize @ 14a815870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UCommonActionWidget::Serialize(UCommonActionWidget *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14a815880

void __thiscall
UCommonActionWidget::Serialize(UCommonActionWidget *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// SetEnhancedInputAction @ 14a8180b0

void __thiscall
UCommonActionWidget::SetEnhancedInputAction(UCommonActionWidget *this,UInputAction *param_1)

{
  int *piVar1;
  FUIActionBindingHandle *this_00;
  int iVar2;
  bool bVar3;
  FUIActionBindingHandle local_28;
  
  this_00 = &this->DisplayedBindingHandle;
  if ((this->DisplayedBindingHandle).RegistrationId != -1) {
    bVar3 = FUIActionBindingHandle::IsValid(this_00);
    if (bVar3) {
      ListenToInputMethodChanged(this,false);
      if (this_00 != &local_28) {
        iVar2 = (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayMax;
        piVar1 = &(this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayMax;
        (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayNum = 0;
        if (iVar2 == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,0,iVar2,(ForAnyElementType *)this_00,0,piVar1);
        }
      }
      (this->DisplayedBindingHandle).RegistrationId = -1;
      ListenToInputMethodChanged(this,true);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->EnhancedInputAction).field0_0x0.DebugPtr = param_1;
  (this->InputActions).ArrayNum = 0;
  if ((this->InputActions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->InputActions).AllocatorInstance,0,&(this->InputActions).ArrayMax);
  }
                    /* WARNING: Could not recover jumptable at 0x00014a8181a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x350))(this);
  return;
}

// SetHidden @ 14a8183d0

void __thiscall UCommonActionWidget::SetHidden(UCommonActionWidget *this,bool param_1)

{
  this->bAlwaysHideOverride = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014a8183d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x350))();
  return;
}

// SetIconRimBrush @ 14a818660

void __thiscall UCommonActionWidget::SetIconRimBrush(UCommonActionWidget *this,FSlateBrush *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FSlateBrush::operator=(&this->IconRimBrush,param_1);
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetInputAction @ 14a8186a0

void __thiscall
UCommonActionWidget::SetInputAction(UCommonActionWidget *this,FDataTableRowHandle *param_1)

{
  int *piVar1;
  FUIActionBindingHandle *this_00;
  TArray<FDataTableRowHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  FDataTableRowHandle *pFVar3;
  UDataTable *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FUIActionBindingHandle local_38;
  
  this_00 = &this->DisplayedBindingHandle;
  if ((this->DisplayedBindingHandle).RegistrationId != -1) {
    bVar6 = FUIActionBindingHandle::IsValid(this_00);
    if (bVar6) {
      ListenToInputMethodChanged(this,false);
      if (this_00 != &local_38) {
        iVar7 = (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayMax;
        piVar1 = &(this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayMax;
        (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayNum = 0;
        if (iVar7 == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,0,iVar7,(ForAnyElementType *)this_00,0,piVar1);
        }
      }
      (this->DisplayedBindingHandle).RegistrationId = -1;
      ListenToInputMethodChanged(this,true);
    }
  }
  pTVar2 = &this->InputActions;
  (this->EnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  iVar7 = (this->InputActions).ArrayMax;
  piVar1 = &(this->InputActions).ArrayMax;
  (this->InputActions).ArrayNum = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    iVar7 = *piVar1;
  }
  pFVar3 = (FDataTableRowHandle *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->InputActions).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->InputActions).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  pUVar4 = (param_1->DataTable).field0_0x0.DebugPtr;
  *(UDataTable **)pFVar8 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(FName *)(pFVar8 + 8) = param_1->RowName;
                    /* WARNING: Could not recover jumptable at 0x00014a818831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x350))(this);
  return;
}

// SetInputActionBinding @ 14a818840

void __thiscall
UCommonActionWidget::SetInputActionBinding
          (UCommonActionWidget *this,FUIActionBindingHandle *param_1)

{
  int *piVar1;
  TArray<FDataTableRowHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  FDataTableRowHandle *pFVar3;
  UDataTable *pUVar4;
  code *pcVar5;
  int iVar6;
  UInputAction *pUVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  TSharedPtr<FUIActionBinding,1> local_58;
  FUIActionBindingHandle local_48;
  FUIActionBindingHandle local_30;
  
  ::FString::FString(&local_48.CachedDebugActionName,&param_1->CachedDebugActionName);
  local_48.RegistrationId = param_1->RegistrationId;
  UpdateBindingHandleInternal(this,&local_48);
  ::FString::FString(&local_30.CachedDebugActionName,&param_1->CachedDebugActionName);
  local_30.RegistrationId = param_1->RegistrationId;
  FUIActionBinding::FindBinding(&local_58,&local_30);
  bVar9 = local_58.Object == (FUIActionBinding *)0x0;
  if (local_58.Object != (FUIActionBinding *)0x0) {
    pTVar2 = &this->InputActions;
    piVar1 = &(this->InputActions).ArrayMax;
    (this->InputActions).ArrayNum = 0;
    if ((this->InputActions).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (bVar9) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pUVar7 = (UInputAction *)FWeakObjectPtr::Get(&((local_58.Object)->InputAction).WeakPtr);
    bVar9 = CommonUI::IsEnhancedInputSupportEnabled();
    if ((bVar9) && (pUVar7 != (UInputAction *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      (this->EnhancedInputAction).field0_0x0.DebugPtr = pUVar7;
    }
    else {
      (this->EnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
      if (local_58.Object == (FUIActionBinding *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      pFVar3 = &(local_58.Object)->LegacyActionTableRow;
      if ((pFVar8 <= pFVar3) && (pFVar3 < pFVar8 + (longlong)*piVar1 * 0x10)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar6 = (this->InputActions).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->InputActions).ArrayNum = iVar6 + 1;
      pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      pUVar4 = (pFVar3->DataTable).field0_0x0.DebugPtr;
      *(UDataTable **)pFVar8 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDataTable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      *(FName *)(pFVar8 + 8) = ((local_58.Object)->LegacyActionTableRow).RowName;
    }
    (**(code **)(*(longlong *)this + 0x350))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pFVar8 = (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// SetInputActions @ 14a818bf0

void __thiscall
UCommonActionWidget::SetInputActions
          (UCommonActionWidget *this,
          TArray<FDataTableRowHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FUIActionBindingHandle *this_00;
  TArray<FDataTableRowHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FDataTableRowHandle *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  FUIActionBindingHandle local_38;
  
  this_00 = &this->DisplayedBindingHandle;
  if (((this->DisplayedBindingHandle).RegistrationId != -1) &&
     (bVar7 = FUIActionBindingHandle::IsValid(this_00), bVar7)) {
    ListenToInputMethodChanged(this,false);
    if (this_00 != &local_38) {
      iVar3 = (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayMax;
      piVar1 = &(this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayMax;
      (this->DisplayedBindingHandle).CachedDebugActionName.Data.ArrayNum = 0;
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,iVar3,(ForAnyElementType *)this_00,0,piVar1);
      }
    }
    (this->DisplayedBindingHandle).RegistrationId = -1;
    ListenToInputMethodChanged(this,true);
  }
  pTVar2 = &this->InputActions;
  (this->EnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  if (pTVar2 != param_1) {
    iVar3 = (this->InputActions).ArrayMax;
    piVar1 = &(this->InputActions).ArrayMax;
    iVar4 = param_1->ArrayNum;
    pFVar5 = (FDataTableRowHandle *)(param_1->AllocatorInstance).Data;
    (this->InputActions).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FDataTableRowHandle,FDataTableRowHandle,int>
                ((pTVar2->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  (**(code **)(*(longlong *)this + 0x350))(this);
  pFVar6 = (param_1->AllocatorInstance).Data;
  if (pFVar6 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar6);
  return;
}

// SetProgressMaterial @ 14a81aad0

void __thiscall
UCommonActionWidget::SetProgressMaterial
          (UCommonActionWidget *this,FSlateBrush *param_1,FName *param_2)

{
  FSlateBrush *this_00;
  int iVar1;
  UMaterialInterface *pUVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  TAttribute<FSlateBrush_const_*> local_38;
  
  this_00 = &this->ProgressMaterialBrush;
  FSlateBrush::operator=(this_00,param_1);
  pUVar2 = (UMaterialInterface *)(this->ProgressMaterialBrush).ResourceObject.field0_0x0.DebugPtr;
  this->ProgressMaterialParam = *param_2;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar4 = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)0x0,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->ProgressDynamicMaterial).field0_0x0.DebugPtr = pUVar4;
      FSlateBrush::SetResourceObject(this_00,(UObject *)pUVar4);
      goto LAB_14a81ab7c;
    }
  }
  (this->ProgressDynamicMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
LAB_14a81ab7c:
  if ((this->MyProgressImage).Object != (SImage *)0x0) {
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Value = this_00;
    SImage::SetImage((this->MyProgressImage).Object,&local_38);
  }
  return;
}

// ShouldUpdateActionWidgetIcon @ 14a81da20

bool __thiscall UCommonActionWidget::ShouldUpdateActionWidgetIcon(UCommonActionWidget *this)

{
  bool bVar1;
  FCommonInputActionDataBase *pFVar2;
  
  if (this->bAlwaysHideOverride != false) {
    return false;
  }
  if ((this->InputActions).ArrayNum < 1) {
    pFVar2 = (FCommonInputActionDataBase *)0x0;
  }
  else {
    pFVar2 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                       ((FDataTableRowHandle *)(this->InputActions).AllocatorInstance.Data,
                        L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                       );
  }
  if (((this->EnhancedInputAction).field0_0x0.DebugPtr == (UInputAction *)0x0) ||
     (bVar1 = CommonUI::IsEnhancedInputSupportEnabled(), !bVar1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((pFVar2 == (FCommonInputActionDataBase *)0x0) && (!bVar1)) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUCommonActionWidget @ 14a81e250

void __cdecl UCommonActionWidget::StaticRegisterNativesUCommonActionWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UCommonActionWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a81fcb0

/* WARNING: Removing unreachable block (ram,0x000146a28528) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonActionWidget::SynchronizeProperties(UCommonActionWidget *this)

{
  byte bVar1;
  FName FVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EVisibility EVar11;
  UObject *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  UFunction *pUVar15;
  undefined7 extraout_var;
  FDelegateToolTip *pFVar16;
  FDelegateToolTip *pFVar17;
  FArguments *pFVar18;
  TSharedRef<SWidget,1> *pTVar19;
  TAttribute<FText> *pTVar20;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar21;
  undefined1 auStackX_8 [16];
  FLLMScope aFStackX_18 [5];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_878;
  FDelegateAllocation FStack_870;
  TSharedPtr<SWidget,1> TStack_860;
  SWidget *pSStack_850;
  TReferenceControllerBase<1> *pTStack_848;
  undefined1 uStack_840;
  undefined1 uStack_83f;
  undefined1 auStack_838 [8];
  ForAnyElementType FStack_830;
  ulonglong uStack_828;
  byte bStack_820;
  undefined1 uStack_81f;
  undefined1 auStack_818 [8];
  ForAnyElementType FStack_810;
  ulonglong uStack_808;
  undefined2 uStack_800;
  undefined1 auStack_7f8 [8];
  FDelegateAllocation FStack_7f0;
  undefined2 uStack_7e0;
  undefined1 auStack_7d8 [8];
  FDelegateAllocation FStack_7d0;
  undefined2 uStack_7c0;
  undefined1 auStack_7b8 [8];
  void *pvStack_7b0;
  int iStack_7a8;
  undefined1 auStack_7a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_788;
  ForAnyElementType FStack_780;
  ulonglong uStack_778;
  undefined1 auStack_770 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_758;
  ForAnyElementType FStack_750;
  ulonglong uStack_748;
  code *pcStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  bool bStack_728;
  undefined1 auStack_718 [16];
  undefined1 auStack_708 [8];
  void *pvStack_700;
  undefined8 uStack_6f8;
  UObject *pUStack_6f0;
  UCommonActionWidget *pUStack_6e8;
  code *pcStack_6e0;
  TRawPtrProxy<FDelegateToolTip> TStack_6d8;
  UObject *pUStack_6d0;
  FMemScope FStack_6c8;
  FName FStack_6c0;
  FName FStack_6b8;
  undefined1 auStack_6b0 [8];
  undefined1 auStack_6a8 [24];
  undefined1 uStack_690;
  undefined1 uStack_68f;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  TVector2<double>_u_0 TStack_670;
  undefined1 uStack_660;
  undefined1 auStack_658 [8];
  void *pvStack_650;
  undefined8 uStack_648;
  TSharedRef<FDelegateToolTip,1> TStack_640;
  TSharedRef<SToolTip,1> TStack_630;
  TSharedRef<SWidget,1> TStack_620;
  TAttribute<FSlateBrush_const_*> TStack_610;
  FDestructionSentinel FStack_5e8;
  FDestructionSentinel FStack_5d0;
  FDestructionSentinel FStack_5b8;
  FDestructionSentinel FStack_5a0;
  FDestructionSentinel FStack_588;
  FDestructionSentinel FStack_570;
  FDelegateAllocation *pFStack_558;
  FDestructionSentinel FStack_550;
  FDelegateAllocation *pFStack_538;
  FDestructionSentinel FStack_530;
  FDelegateAllocation *pFStack_518;
  TAttribute<FMargin> TStack_510;
  undefined1 uStack_4e0;
  undefined1 uStack_4df;
  TDelegateBase<FNotThreadSafeDelegateMode> TStack_4d8;
  SWidget *pSStack_4c0;
  TReferenceControllerBase<1> *pTStack_4b8;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> TStack_4b0;
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  FReadAccessScope FStack_438;
  FReadAccessScope FStack_420;
  FReadAccessScope FStack_408;
  TAttribute<FText> TStack_3f0;
  TAttribute<FText> TStack_3c0;
  FArguments FStack_390;
  
  auStackX_8[0] = Visible;
  auStackX_8[1] = false;
  auStackX_8._2_2_ = 0;
  this->field_0x1a8 = 1;
  UWidget::GetCachedWidget((UWidget *)this,&TStack_860);
  pSVar5 = TStack_860.Object;
  if (TStack_860.Object != (SWidget *)0x0) {
    if ((this->field_0xf9 & 8) != 0) {
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auStack_718._0_4_ = ZEXT14((byte)this->field_0xfb);
      auStack_718[4] = true;
      uStack_6f8 = 0;
      auStack_718[8] = true;
      auStack_708 = (undefined1  [8])0x0;
      pvStack_700 = (void *)0x0;
      SWidget::SetCursor(pSVar5,(TAttribute<TOptional<EMouseCursor::Type>_> *)auStack_718);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_708);
      if (pvStack_700 != (void *)0x0) {
        FMemory::Free(pvStack_700);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_708);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x38);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x38,
                 &FStack_408);
      FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x48;
      FVar2.Number = *(uint *)&this->field_0x4c;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_408);
      pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x38);
      uStack_800 = 0x100;
      FStack_7f0.DelegateSize = 0;
      FStack_7f0._12_4_ = 0;
      auStack_7f8 = (undefined1  [8])0x0;
      FStack_7f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7f8,
                 (FWriteAccessScope *)&FStack_570);
      pFStack_558 = &FStack_7f0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7f0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar13 + 4) = FVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        puVar13[5] = 0;
        pUStack_6d0 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 5),(FObjectPtr)&pUStack_6d0);
        if ((FVar2 == (FName)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pUVar12 != (UObject *)0x0) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar13 + 5));
          pUVar15 = UObject::FindFunctionChecked(pUVar12,FVar2);
          puVar13[3] = pUVar15;
        }
      }
      if (FStack_570.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_570.Accessor,&FStack_570);
      }
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8;
      bVar7 = false;
      bVar10 = true;
      auStack_6b0[0] = (byte)uStack_800;
      auStack_6b0[1] = uStack_800._1_1_;
    }
    else {
      auStack_6b0[1] = 1;
      auStack_6b0[0] = (byte)this->field_0xf9 >> 2 & 1;
      uStack_81f = 1;
      bVar7 = true;
      bVar10 = false;
      uStack_808 = 0;
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_818;
      auStack_818 = (undefined1  [8])0x0;
      FStack_810.Data = (FScriptContainerElement *)0x0;
      bStack_820 = auStack_6b0[0];
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8,pTVar21);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar5->EnabledStateAttribute,pSVar5,(TAttribute<bool> *)auStack_6b0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8);
    if ((void *)auStack_6a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_6a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_6a8);
    if (bVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_818,
                 (FWriteAccessScope *)&FStack_5b8);
      if (((int)uStack_808 != 0) && (FStack_810.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_810.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_810,0,0,0x10);
        uStack_808 = uStack_808 & 0xffffffff00000000;
      }
      if (FStack_5b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5b8.Accessor,&FStack_5b8);
      }
      if (FStack_810.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_810.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_818);
    }
    if (bVar10) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8);
      if (FStack_7f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7f8);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcStack_6e0 = *(code **)(pSVar5->_padding_ + 0x1c8);
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x98);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x98,
                 &FStack_438);
      FVar3.ComparisonIndex.Value = *(uint *)&this->field_0xa8;
      FVar3.Number = *(uint *)&this->field_0xac;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_438);
      pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x98);
      uStack_7e0 = 0x100;
      FStack_7d0.DelegateSize = 0;
      FStack_7d0._12_4_ = 0;
      auStack_7d8 = (undefined1  [8])0x0;
      FStack_7d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7d8,
                 (FWriteAccessScope *)&FStack_550);
      pFStack_538 = &FStack_7d0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7d0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar13 + 4) = FVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        puVar13[5] = 0;
        pUStack_6f0 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 5),(FObjectPtr)&pUStack_6f0);
        if ((FVar3 == (FName)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pUVar12 != (UObject *)0x0) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar13 + 5));
          pUVar15 = UObject::FindFunctionChecked(pUVar12,FVar3);
          puVar13[3] = pUVar15;
        }
      }
      if (FStack_550.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_550.Accessor,&FStack_550);
      }
      pcStack_738 = UWidget::ConvertVisibility;
      uStack_72c = TStack_620.SharedReferenceCount.ReferenceController._4_4_;
      uStack_730 = 0;
      TStack_878.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_870.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_530);
      pFStack_518 = &FStack_870;
      puVar13 = UE::Core::Private::DelegateAllocate(0x48,&FStack_870);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        *(undefined1 *)(puVar13 + 1) = (undefined1)uStack_7e0;
        *(undefined1 *)((longlong)puVar13 + 9) = uStack_7e0._1_1_;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar13 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[5] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUWidget____A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[6] = 0;
        pUStack_6e8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 6),(FObjectPtr)&pUStack_6e8);
        puVar13[7] = pcStack_738;
        puVar13[8] = CONCAT44(uStack_72c,uStack_730);
      }
      if (FStack_530.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_530.Accessor,&FStack_530);
      }
      uStack_7c0 = 0x119;
      auStack_7b8 = (undefined1  [8])0x0;
      pvStack_7b0 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&pcStack_738);
      if (pvStack_7b0 != (void *)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      pvStack_7b0 = (void *)FStack_870.DelegateAllocator;
      iStack_7a8 = FStack_870.DelegateSize;
      FStack_870.DelegateSize = 0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (bStack_728 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_72c,uStack_730),
                   (FDestructionSentinel *)&pcStack_738);
      }
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      bVar10 = false;
      uStack_4e0 = (undefined1)uStack_7c0;
      uStack_4df = uStack_7c0._1_1_;
    }
    else {
      uStack_690 = this->field_0xfd;
      uStack_68f = 1;
      uStack_678 = 0;
      uStack_688 = 0;
      uStack_680 = 0;
      EVar11 = UWidget::ConvertVisibility
                         ((UWidget *)this,(TAttribute<ESlateVisibility> *)auStackX_8);
      uStack_4df = 1;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar10 = true;
      uStack_4e0 = *(undefined1 *)CONCAT71(extraout_var,EVar11.Value.Value);
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_838;
      uStack_828 = 0;
      uStack_83f = 1;
      auStack_838 = (undefined1  [8])0x0;
      FStack_830.Data = (FScriptContainerElement *)0x0;
      uStack_840 = uStack_4e0;
    }
    pFVar17 = (FDelegateToolTip *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&TStack_4d8,pTVar21);
    (*pcStack_6e0)(pSVar5,&uStack_4e0);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_838,
                 (FWriteAccessScope *)&FStack_5a0);
      if (((int)uStack_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_830.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
        uStack_828 = uStack_828 & 0xffffffff00000000;
      }
      if (FStack_5a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5a0.Accessor,&FStack_5a0);
      }
      if (FStack_830.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_830.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_838);
    }
    if (bVar7) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8);
      if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_7b0 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7b8);
    }
    if (bVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_5d0);
      if ((FStack_870.DelegateSize != 0) &&
         (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_870.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_870,0,0,0x10);
        FStack_870.DelegateSize = 0;
      }
      if (FStack_5d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5d0.Accessor,&FStack_5d0);
      }
      if (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_870.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_878.AccessDetector);
    }
    if (bVar9) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
      if (FStack_7d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7d8);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::SetClipping(pSVar5,this->field_0xfc);
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::SetPixelSnapping(pSVar5,this->field_0xfe);
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pSVar5->FlowDirectionPreference != this->field_0xf8) {
      pSVar5->FlowDirectionPreference = this->field_0xf8;
      SWidget::Invalidate(pSVar5,Paint);
    }
    bVar1 = pSVar5->field_0x30;
    if (((bVar1 ^ this->field_0xf9) >> 4 & 1) != 0) {
      pSVar5->field_0x30 = (this->field_0xf9 & 0xf0 ^ bVar1) & 0x10 ^ bVar1;
      SWidget::Invalidate(pSVar5,PaintAndVolatility);
    }
    if (*(float *)&this->field_0x100 != pSVar5->RenderOpacity) {
      pSVar5->RenderOpacity = *(float *)&this->field_0x100;
      SWidget::Invalidate(pSVar5,Paint);
    }
    UWidget::UpdateRenderTransform((UWidget *)this);
    TStack_670._s_0.X = (double)*(undefined8 *)&this->field_0xe8;
    TStack_670._s_0.Y = (double)*(undefined8 *)&this->field_0xf0;
    uStack_660 = 1;
    uStack_648 = 0;
    auStack_658 = (undefined1  [8])0x0;
    pvStack_650 = (void *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar5->RenderTransformPivotAttribute,pSVar5,
             (TAttribute<UE::Math::TVector2<double>_> *)&TStack_670._s_0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_658);
    if (pvStack_650 != (void *)0x0) {
      FMemory::Free(pvStack_650);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_658);
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x80);
    if (bVar10) {
      pFVar16 = ::operator_new(0x30);
      if (pFVar16 != (FDelegateToolTip *)0x0) {
        *(undefined8 *)&pFVar16->ToolTipWidgetDelegate = 0;
        pFVar16->_padding_ = (longlong)&___7FDelegateToolTip__6B_;
        *(undefined8 *)&(pFVar16->ToolTipWidgetDelegate).field_0x8 = 0;
        *(undefined8 *)&(pFVar16->ToolTipWidgetDelegate).field_0x10 = 0;
        (pFVar16->CachedToolTip).Object = (SWidget *)0x0;
        (pFVar16->CachedToolTip).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar17 = pFVar16;
      }
      TStack_6d8.Object = pFVar17;
      TSharedRef<FDelegateToolTip,1>::TSharedRef<FDelegateToolTip,1><FDelegateToolTip>
                (&TStack_640,&TStack_6d8);
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &(TStack_640.Object)->ToolTipWidgetDelegate,
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x80);
      auStack_7a0._0_8_ = TStack_640.Object;
      auStack_7a0._8_8_ = TStack_640.SharedReferenceCount.ReferenceController;
      if (TStack_640.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_7a0[0x10] = true;
      uStack_778 = 0;
      TStack_788.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_780.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(pSVar5,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_7a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_788,(FWriteAccessScope *)&FStack_588);
      if (((int)uStack_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_780.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
        uStack_778 = uStack_778 & 0xffffffff00000000;
      }
      if (FStack_588.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_588.Accessor,&FStack_588);
      }
      if (FStack_780.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_780.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_788.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_7a0._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_640.SharedReferenceCount.ReferenceController);
    }
    else if (*(longlong *)&this->field_0x78 == 0) {
      bVar10 = FText::IsEmpty((FText *)&this->field_0x68);
      if ((!bVar10) ||
         (bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x50),
         bVar10)) {
        bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x50);
        if (!bVar10) {
          pTVar20 = TAttribute<FText>::TAttribute<FText><FText>
                              (&TStack_3f0,(FText *)&this->field_0x68);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x50,
                     &FStack_420);
          FStack_6c0.ComparisonIndex.Value = *(uint *)&this->field_0x60;
          FStack_6c0.Number = *(uint *)&this->field_0x64;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&FStack_420);
          pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x50);
          pTVar20 = TAttribute<FText>::Create<UObject>(&TStack_3c0,pUVar12,&FStack_6c0);
        }
        SWidget::SetToolTipText(pSVar5,pTVar20);
        if (bVar10) {
          TAttribute<FText>::~TAttribute<FText>(&TStack_3c0);
        }
      }
    }
    else {
      pFVar18 = SToolTip::FArguments::FArguments(&FStack_390);
      TStack_510.bIsSet = true;
      TStack_510.Getter._16_8_ = 0;
      TStack_510.Value.Left = 0.0;
      TStack_510.Value.Top = 0.0;
      TStack_510.Value.Right = 0.0;
      TStack_510.Value.Bottom = 0.0;
      TStack_510.Getter._0_8_ = 0;
      TStack_510.Getter._8_8_ = 0;
      pFVar18 = SToolTip::FArguments::TextMargin(pFVar18,&TStack_510);
      TStack_610.Value = (FSlateBrush *)0x0;
      TStack_610.bIsSet = true;
      TStack_610.Getter._16_8_ = 0;
      TStack_610.Getter._0_8_ = 0;
      TStack_610.Getter._8_8_ = 0;
      pFVar18 = SToolTip::FArguments::BorderImage(pFVar18,&TStack_610);
      pTVar19 = UWidget::TakeWidget(*(UWidget **)&this->field_0x78,&TStack_620);
      pTVar4 = (pTVar19->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar19->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSStack_4c0 = (pFVar18->_Content).Widget.Object;
      pTStack_4b8 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar18->_Content).Widget.Object = pSVar5;
      (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_4b8);
      FLLMScope::FLLMScope
                (aFStackX_18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      FStack_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&FStack_6c8,&FStack_6b8,true);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                (&TStack_4b0,"SToolTip",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                 ,0x5f8,(T0RequiredArgs *)(auStackX_8 + 8));
      FMemScope::~FMemScope(&FStack_6c8);
      FLLMScope::~FLLMScope(aFStackX_18);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
                (&TStack_4b0,&TStack_630,pFVar18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_4b0._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(TStack_620.SharedReferenceCount.ReferenceController._4_4_,
                          TStack_620.SharedReferenceCount.ReferenceController._0_4_));
      SToolTip::FArguments::~FArguments(&FStack_390);
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auStack_770._8_8_ = TStack_630.SharedReferenceCount.ReferenceController;
      auStack_770._0_8_ = &(TStack_630.Object)->_padding_;
      if (TStack_630.Object == (SToolTip *)0x0) {
        auStack_770._0_8_ = pFVar17;
      }
      if (TStack_630.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_770[0x10] = true;
      uStack_748 = 0;
      TStack_758.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_750.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(TStack_860.Object,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_770);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_758,(FWriteAccessScope *)&FStack_5e8);
      if (((int)uStack_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_750.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
        uStack_748 = uStack_748 & 0xffffffff00000000;
      }
      if (FStack_5e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5e8.Accessor,&FStack_5e8);
      }
      if (FStack_750.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_750.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_758.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_770._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_630.SharedReferenceCount.ReferenceController);
    }
    if (*(longlong *)&this->field_0x108 != 0) {
      (**(code **)(*(longlong *)this + 0x308))(this,&pSStack_850);
      if (pSStack_850 != (SWidget *)0x0) {
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar5 = pSStack_850;
        pTVar20 = USlateAccessibleWidgetData::CreateAccessibleTextAttribute
                            (*(USlateAccessibleWidgetData **)&this->field_0x108,
                             (TAttribute<FText> *)auStack_498);
        SWidget::SetAccessibleBehavior
                  (pSVar5,*(EAccessibleBehavior *)(*(longlong *)&this->field_0x108 + 0x29),pTVar20,
                   Main);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_480);
        if ((void *)auStack_480._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_480._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_480);
        if ((ITextData *)auStack_498._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_498._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar5 = pSStack_850;
        pTVar20 = USlateAccessibleWidgetData::CreateAccessibleSummaryTextAttribute
                            (*(USlateAccessibleWidgetData **)&this->field_0x108,
                             (TAttribute<FText> *)auStack_468);
        SWidget::SetAccessibleBehavior
                  (pSVar5,*(EAccessibleBehavior *)(*(longlong *)&this->field_0x108 + 0x2a),pTVar20,
                   Summary);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_450);
        if ((void *)auStack_450._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_450._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_450);
        if ((ITextData *)auStack_468._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_468._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        SWidget::SetCanChildrenBeAccessible
                  (pSStack_850,*(bool *)(*(longlong *)&this->field_0x108 + 0x28));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_848);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_860.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateActionWidget @ 14a825af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonActionWidget::UpdateActionWidget(UCommonActionWidget *this)

{
  SBox *this_00;
  bool bVar1;
  char cVar2;
  ESlateVisibility EVar3;
  longlong lVar4;
  ULocalPlayer *pUVar5;
  UCommonInputSubsystem *this_01;
  UGameInstance *pUVar6;
  FSlateBrush *pFVar7;
  SImage *pSVar8;
  EVisibility EVar9;
  undefined8 uVar10;
  undefined1 local_e8 [8];
  undefined1 local_e0 [16];
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  lVar4 = (**(code **)(*(longlong *)this + 0x180))();
  if (lVar4 == 0) {
    return;
  }
  pUVar5 = FUIActionBindingHandle::GetBoundLocalPlayer(&this->DisplayedBindingHandle);
  if (pUVar5 == (ULocalPlayer *)0x0) {
    pUVar5 = (ULocalPlayer *)(**(code **)(*(longlong *)this + 0x2e0))(this);
  }
  this_01 = UCommonInputSubsystem::Get(pUVar5);
  pUVar6 = UWidget::GetGameInstance((UWidget *)this);
  if ((((pUVar6 != (UGameInstance *)0x0) && (this_01 != (UCommonInputSubsystem *)0x0)) &&
      (bVar1 = UCommonInputSubsystem::ShouldShowInputKeys(this_01), bVar1)) &&
     (cVar2 = (**(code **)(*(longlong *)this + 0x358))(this), cVar2 != '\0')) {
    pFVar7 = (FSlateBrush *)(**(code **)(*(longlong *)this + 0x310))(this,local_b8);
    FSlateBrush::operator=(&this->Icon,pFVar7);
    local_b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    if ((this->Icon).DrawAs.Value == '\0') {
      (**(code **)(*(longlong *)this + 0x2c0))(this,1);
    }
    else {
      pSVar8 = (this->MyIcon).Object;
      if (pSVar8 != (SImage *)0x0) {
        local_e0[0] = true;
        local_c8 = 0;
        local_e0._8_8_ = 0;
        uStack_d0 = 0;
        local_e8 = (undefined1  [8])&this->Icon;
        SImage::SetImage(pSVar8,(TAttribute<FSlateBrush_const_*> *)local_e8);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnInputIconUpdated
                   ,(void *)0x0);
        EVar3 = UWidget::GetVisibility((UWidget *)this);
        if (EVar3 != Collapsed) {
          pSVar8 = TSharedPtr<SImage,1>::operator->(&this->MyIcon);
          SWidget::Invalidate((SWidget *)pSVar8,Layout);
        }
        if ((this->MyProgressImage).Object != (SImage *)0x0) {
          cVar2 = (**(code **)(*(longlong *)this + 0x338))(this);
          if (cVar2 == '\0') {
            pSVar8 = TSharedPtr<SImage,1>::operator->(&this->MyProgressImage);
            EVar9 = EVisibility::Collapsed;
          }
          else {
            pSVar8 = TSharedPtr<SImage,1>::operator->(&this->MyProgressImage);
            EVar9 = EVisibility::SelfHitTestInvisible;
          }
          local_e8[1] = true;
          local_e8[0] = EVar9.Value.Value;
          uStack_d0 = 0;
          local_e0._0_8_ = 0;
          local_e0._8_8_ = 0;
          SLeafWidget::SetVisibility((SLeafWidget *)pSVar8,(TAttribute<EVisibility> *)local_e8);
        }
        this_00 = (this->MyKeyBox).Object;
        if (this_00 != (SBox *)0x0) {
          SWidget::Invalidate((SWidget *)this_00,LayoutAndVolatility);
        }
        uVar10 = 4;
        goto LAB_14a825bcc;
      }
    }
  }
  uVar10 = 1;
LAB_14a825bcc:
  (**(code **)(*(longlong *)this + 0x2c0))(this,uVar10);
  return;
}

// UpdateBindingHandleInternal @ 14a825ce0

void __thiscall
UCommonActionWidget::UpdateBindingHandleInternal
          (UCommonActionWidget *this,FUIActionBindingHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  
  if ((this->DisplayedBindingHandle).RegistrationId != param_1->RegistrationId) {
    bVar2 = FUIActionBindingHandle::IsValid(&this->DisplayedBindingHandle);
    if (!bVar2) {
      bVar2 = FUIActionBindingHandle::IsValid(param_1);
      if (!bVar2) goto LAB_14a825d48;
    }
    ListenToInputMethodChanged(this,false);
    ::FString::operator=
              (&(this->DisplayedBindingHandle).CachedDebugActionName,&param_1->CachedDebugActionName
              );
    (this->DisplayedBindingHandle).RegistrationId = param_1->RegistrationId;
    ListenToInputMethodChanged(this,true);
  }
LAB_14a825d48:
  pFVar1 = (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// execGetDisplayText @ 14a82dcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UCommonActionWidget::execGetDisplayText(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  ULocalPlayer *pUVar2;
  UCommonInputSubsystem *pUVar3;
  UGameInstance *pUVar4;
  FCommonInputActionDataBase *pFVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x15].field_0x18 == 0) ||
     (bVar1 = CommonUI::IsEnhancedInputSupportEnabled(), !bVar1)) {
    pUVar2 = FUIActionBindingHandle::GetBoundLocalPlayer
                       ((FUIActionBindingHandle *)&param_1[0x15].field_0x20);
    if (pUVar2 == (ULocalPlayer *)0x0) {
      pUVar2 = (ULocalPlayer *)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1);
    }
    pUVar3 = UCommonInputSubsystem::Get(pUVar2);
    pUVar4 = UWidget::GetGameInstance((UWidget *)param_1);
    if ((((pUVar4 == (UGameInstance *)0x0) || (pUVar3 == (UCommonInputSubsystem *)0x0)) ||
        (*(int *)&param_1[0x15].field_0x10 < 1)) ||
       (pFVar5 = FDataTableRowHandle::GetRow<FCommonInputActionDataBase>
                           (*(FDataTableRowHandle **)&param_1[0x15].field_0x8,
                            L"CommonUIUtils::GetInputActionData couldn\'t find the row passed in, check data table if its missing."
                           ), pFVar5 == (FCommonInputActionDataBase *)0x0)) {
      FText::FText(&local_18);
    }
    else {
      lVar6 = (**(code **)(pFVar5->_padding_ + 0x18))(pFVar5,pUVar3);
      if (*(char *)(lVar6 + 0x19) == '\0') {
        local_18.TextData.Reference = (pFVar5->DisplayName).TextData.Reference;
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 8))
                    (local_18.TextData.Reference,local_res8);
        }
        local_18.Flags = (pFVar5->DisplayName).Flags;
      }
      else {
        local_18.TextData.Reference = (pFVar5->HoldDisplayName).TextData.Reference;
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 8))
                    (local_18.TextData.Reference,local_res8);
        }
        local_18.Flags = (pFVar5->HoldDisplayName).Flags;
      }
    }
  }
  else {
    lVar6 = *(longlong *)&param_1[0x15].field_0x18;
    local_18.TextData.Reference = *(ITextData **)(lVar6 + 0x30);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = *(uint *)(lVar6 + 0x38);
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetEnhancedInputAction @ 14a82de30

void __cdecl
UCommonActionWidget::execGetEnhancedInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x15].field_0x18;
  return;
}

// execGetIcon @ 14a82e0b0

void __cdecl UCommonActionWidget::execGetIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSlateBrush *pFVar1;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = (FSlateBrush *)(**(code **)(*(longlong *)param_1 + 0x310))(param_1,local_b8);
  FSlateBrush::operator=(param_3,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return;
}

// execGetIconDynamicMaterial @ 14a82e120

void __cdecl
UCommonActionWidget::execGetIconDynamicMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = *(UMaterialInstanceDynamic **)&param_1[0x19].field_0x20;
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        pUVar3 = UMaterialInstanceDynamic::Create((UMaterialInterface *)pUVar3,param_1,(FName)0x0);
        FSlateBrush::SetResourceObject((FSlateBrush *)&param_1[0x18].field_0x10,(UObject *)pUVar3);
        if (*(longlong *)(param_1 + 0x17) != 0) {
          SImage::InvalidateImage(*(SImage **)(param_1 + 0x17));
        }
      }
      *(UMaterialInstanceDynamic **)param_3 = pUVar3;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsHeldAction @ 14a8303f0

void __cdecl UCommonActionWidget::execIsHeldAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x338))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execOnEnhancedInputMappingsRebuilt @ 14a830be0

void __cdecl
UCommonActionWidget::execOnEnhancedInputMappingsRebuilt
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a830bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x350))();
  return;
}

// execSetEnhancedInputAction @ 14a832ed0

void __cdecl
UCommonActionWidget::execSetEnhancedInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1,local_res8);
  return;
}

// execSetIconRimBrush @ 14a8331f0

void __cdecl
UCommonActionWidget::execSetIconRimBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateBrush *pFVar3;
  FSlateBrush local_168;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_168);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FSlateBrush::FSlateBrush(&local_b8,&local_168);
  FSlateBrush::operator=((FSlateBrush *)&param_1[0x10].field_0x20,pFVar3);
  pTVar2 = (pFVar3->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar3->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_168._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execSetInputAction @ 14a8332c0

void __cdecl UCommonActionWidget::execSetInputAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *local_28;
  undefined8 local_20;
  UObject *local_18;
  undefined8 local_10;
  
  local_28 = (UObject *)0x0;
  local_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 800);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  local_10 = local_20;
  (*pcVar2)(param_1,&local_18);
  return;
}

// execSetInputActionBinding @ 14a833380

void __cdecl
UCommonActionWidget::execSetInputActionBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *_Src;
  longlong lVar3;
  void *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ForAnyElementType local_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  local_28 = 0xffffffff;
  local_38 = (void *)0x0;
  local_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  _Src = local_38;
  local_20.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_30;
  local_18 = (int)local_30;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x328);
  if ((int)local_30 == 0) {
    local_14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_30,0,&local_20,(int)local_30,&local_14);
    memcpy(local_20.Data,_Src,lVar3 * 2);
  }
  local_10 = local_28;
  (*pcVar2)(param_1,&local_20);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execSetInputActions @ 14a8336c0

void __cdecl
UCommonActionWidget::execSetInputActions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FDataTableRowHandle *pFVar3;
  int iVar4;
  FDataTableRowHandle *local_28;
  undefined8 local_20;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_28 = (FDataTableRowHandle *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = local_28;
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = (int)local_20;
  local_10 = (int)local_20;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x330);
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_20,0,&local_18,(int)local_20,&local_c);
    ConstructItems<FDataTableRowHandle,FDataTableRowHandle,int>(local_18.Data,pFVar3,iVar4);
  }
  (*pcVar2)(param_1,&local_18);
  if (local_28 != (FDataTableRowHandle *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

