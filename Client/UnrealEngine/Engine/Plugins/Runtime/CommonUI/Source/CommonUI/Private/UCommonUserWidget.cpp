// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 31

// StaticClass @ 14a77f750

UClass * __cdecl UCommonUserWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUserWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUserWidget",
               &Z_Registration_Info_UClass_UCommonUserWidget.InnerSingleton,
               StaticRegisterNativesUCommonUserWidget,0x3d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonUserWidget>,
               InternalVTableHelperCtorCaller<UCommonUserWidget>,local_res8,UUserWidget::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUserWidget.InnerSingleton;
}

// UCommonUserWidget @ 14a7afb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonUserWidget * __thiscall
UCommonUserWidget::UCommonUserWidget(UCommonUserWidget *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->bDisplayInActionBar = false;
  this->bConsumePointerInput = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonUserWidget__6B_;
  (this->ActionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionBindings).ArrayNum = 0;
  (this->ActionBindings).ArrayMax = 0;
  (this->ScrollRecipients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScrollRecipients).ArrayNum = 0;
  (this->ScrollRecipients).ArrayMax = 0;
  return this;
}

// UCommonUserWidget @ 14a7afbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonUserWidget * __thiscall
UCommonUserWidget::UCommonUserWidget(UCommonUserWidget *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->bDisplayInActionBar = false;
  this->bConsumePointerInput = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonUserWidget__6B_;
  (this->ActionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionBindings).ArrayNum = 0;
  (this->ActionBindings).ArrayMax = 0;
  (this->ScrollRecipients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScrollRecipients).ArrayNum = 0;
  (this->ScrollRecipients).ArrayMax = 0;
  return this;
}

// ~UCommonUserWidget @ 14a7b3a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonUserWidget::~UCommonUserWidget(UCommonUserWidget *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonUserWidget__6B_;
  pFVar1 = (this->ScrollRecipients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FUIActionBindingHandle,int>
            ((FUIActionBindingHandle *)(this->ActionBindings).AllocatorInstance.Data,
             (this->ActionBindings).ArrayNum);
  pFVar1 = (this->ActionBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// AddActionBinding @ 14a7bd9f0

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
UCommonUserWidget::AddActionBinding(UCommonUserWidget *this,FUIActionBindingHandle *param_1)

{
  int *piVar1;
  TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FUIActionBindingHandle *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *pUVar8;
  FString local_28;
  int local_18;
  
  pTVar2 = &this->ActionBindings;
  pFVar4 = (FUIActionBindingHandle *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->ActionBindings).ArrayMax)) {
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
  iVar7 = (this->ActionBindings).ArrayNum;
  piVar1 = &(this->ActionBindings).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ActionBindings).ArrayNum = iVar7 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
  ::FString::FString((FString *)pFVar3,&param_1->CachedDebugActionName);
  *(int *)(pFVar3 + 0x10) = param_1->RegistrationId;
  this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  if (this_00 != (ULocalPlayer *)0x0) {
    pUVar8 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
    if (pUVar8 != (UCommonUIActionRouterBase *)0x0) {
      pcVar5 = *(code **)(pUVar8->_padding_ + 0x2f0);
      ::FString::FString(&local_28,&param_1->CachedDebugActionName);
      local_18 = param_1->RegistrationId;
      (*pcVar5)(pUVar8,&local_28);
    }
  }
  pFVar3 = (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetInputSubsystem @ 14a7e30b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonInputSubsystem * __thiscall UCommonUserWidget::GetInputSubsystem(UCommonUserWidget *this)

{
  ULocalPlayer *pUVar1;
  UCommonInputSubsystem *pUVar2;
  
  pUVar1 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  pUVar2 = UCommonInputSubsystem::Get(pUVar1);
  return pUVar2;
}

// GetLegacyPlayerRequirement @ 14a7e3320

ERequiresLegacyPlayer __thiscall
UCommonUserWidget::GetLegacyPlayerRequirement(UCommonUserWidget *this)

{
  return No;
}

// GetOwnerSlateUser @ 14a7e4460

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSlateUser,1> * __thiscall
UCommonUserWidget::GetOwnerSlateUser
          (UCommonUserWidget *this,TSharedPtr<FSlateUser,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))();
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x2d0))(plVar1,local_18);
    __return_storage_ptr__->Object = (FSlateUser *)*puVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)puVar2[1];
    puVar2[1] = 0;
    *puVar2 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FSlateUser *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a7e6b20

UClass * __cdecl UCommonUserWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUserWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUserWidget",
               &Z_Registration_Info_UClass_UCommonUserWidget.InnerSingleton,
               StaticRegisterNativesUCommonUserWidget,0x3d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonUserWidget>,
               InternalVTableHelperCtorCaller<UCommonUserWidget>,local_res8,UUserWidget::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUserWidget.InnerSingleton;
}

// GetUISubsystem @ 14a7e91e0

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

UCommonUISubsystemBase * __thiscall UCommonUserWidget::GetUISubsystem(UCommonUserWidget *this)

{
  int iVar1;
  bool bVar2;
  UGameInstance *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UCommonUISubsystemBase *pUVar6;
  
  pUVar3 = UWidget::GetGameInstance((UWidget *)this);
  if (pUVar3 == (UGameInstance *)0x0) {
    return (UCommonUISubsystemBase *)0x0;
  }
  pUVar4 = UCommonUISubsystemBase::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14a7e921c;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14a7e921c:
    pUVar5 = UCommonUISubsystemBase::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14a7e924c;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14a7e924c:
  pUVar6 = (UCommonUISubsystemBase *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  return pUVar6;
}

// NativeDestruct @ 14a7f99e0

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

void __thiscall UCommonUserWidget::NativeDestruct(UCommonUserWidget *this)

{
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *this_01;
  
  if (0 < (this->ActionBindings).ArrayNum) {
    this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
    if (this_00 != (ULocalPlayer *)0x0) {
      this_01 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
      if (this_01 != (UCommonUIActionRouterBase *)0x0) {
        UCommonUIActionRouterBase::NotifyUserWidgetDestructed(this_01,this);
      }
    }
  }
  UUserWidget::NativeDestruct((UUserWidget *)this);
  return;
}

// NativeOnMouseButtonDoubleClick @ 14a7fb0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonUserWidget::NativeOnMouseButtonDoubleClick
          (UCommonUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply *pFVar1;
  FReply local_178;
  FReply local_c0;
  
  if (this->bConsumePointerInput != false) {
    FReply::FReply(&local_178,true);
    FReply::FReply(__return_storage_ptr__,&local_178);
    FReply::~FReply(&local_178);
    return __return_storage_ptr__;
  }
  pFVar1 = UUserWidget::NativeOnMouseButtonDoubleClick
                     ((UUserWidget *)this,&local_c0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonDown @ 14a7fb140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonUserWidget::NativeOnMouseButtonDown
          (UCommonUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply *pFVar1;
  FReply local_178;
  FReply local_c0;
  
  if (this->bConsumePointerInput != false) {
    FReply::FReply(&local_178,true);
    FReply::FReply(__return_storage_ptr__,&local_178);
    FReply::~FReply(&local_178);
    return __return_storage_ptr__;
  }
  pFVar1 = UUserWidget::NativeOnMouseButtonDown((UUserWidget *)this,&local_c0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonUp @ 14a7fb1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonUserWidget::NativeOnMouseButtonUp
          (UCommonUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply *pFVar1;
  FReply local_178;
  FReply local_c0;
  
  if (this->bConsumePointerInput != false) {
    FReply::FReply(&local_178,true);
    FReply::FReply(__return_storage_ptr__,&local_178);
    FReply::~FReply(&local_178);
    return __return_storage_ptr__;
  }
  pFVar1 = UUserWidget::NativeOnMouseButtonUp((UUserWidget *)this,&local_c0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// NativeOnMouseWheel @ 14a7fb340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonUserWidget::NativeOnMouseWheel
          (UCommonUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply *pFVar1;
  FReply local_178;
  FReply local_c0;
  
  if (this->bConsumePointerInput != false) {
    FReply::FReply(&local_178,true);
    FReply::FReply(__return_storage_ptr__,&local_178);
    FReply::~FReply(&local_178);
    return __return_storage_ptr__;
  }
  pFVar1 = UUserWidget::NativeOnMouseWheel((UUserWidget *)this,&local_c0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// NativeOnTouchEnded @ 14a7fb5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonUserWidget::NativeOnTouchEnded
          (UCommonUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply *pFVar1;
  FReply local_178;
  FReply local_c0;
  
  if (this->bConsumePointerInput != false) {
    FReply::FReply(&local_178,true);
    FReply::FReply(__return_storage_ptr__,&local_178);
    FReply::~FReply(&local_178);
    return __return_storage_ptr__;
  }
  pFVar1 = UUserWidget::NativeOnTouchEnded((UUserWidget *)this,&local_c0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// NativeOnTouchGesture @ 14a7fb670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonUserWidget::NativeOnTouchGesture
          (UCommonUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply *pFVar1;
  FReply local_178;
  FReply local_c0;
  
  if (this->bConsumePointerInput != false) {
    FReply::FReply(&local_178,true);
    FReply::FReply(__return_storage_ptr__,&local_178);
    FReply::~FReply(&local_178);
    return __return_storage_ptr__;
  }
  pFVar1 = UUserWidget::NativeOnTouchGesture((UUserWidget *)this,&local_c0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// NativeOnTouchMoved @ 14a7fb6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonUserWidget::NativeOnTouchMoved
          (UCommonUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply *pFVar1;
  FReply local_178;
  FReply local_c0;
  
  if (this->bConsumePointerInput != false) {
    FReply::FReply(&local_178,true);
    FReply::FReply(__return_storage_ptr__,&local_178);
    FReply::~FReply(&local_178);
    return __return_storage_ptr__;
  }
  pFVar1 = UUserWidget::NativeOnTouchMoved((UUserWidget *)this,&local_c0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// NativeOnTouchStarted @ 14a7fb770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UCommonUserWidget::NativeOnTouchStarted
          (UCommonUserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply *pFVar1;
  FReply local_178;
  FReply local_c0;
  
  if (this->bConsumePointerInput != false) {
    FReply::FReply(&local_178,true);
    FReply::FReply(__return_storage_ptr__,&local_178);
    FReply::~FReply(&local_178);
    return __return_storage_ptr__;
  }
  pFVar1 = UUserWidget::NativeOnTouchStarted((UUserWidget *)this,&local_c0,param_1,param_2);
  FReply::FReply(__return_storage_ptr__,pFVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// OnWidgetRebuilt @ 14a800fc0

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

void __thiscall UCommonUserWidget::OnWidgetRebuilt(UCommonUserWidget *this)

{
  int *piVar1;
  TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  FWeakObjectPtr *pFVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<FUIActionBinding,1> *pTVar9;
  ULocalPlayer *pUVar10;
  UCommonUIActionRouterBase *pUVar11;
  TSharedPtr<SWidget,1> *pTVar12;
  UClass *pUVar13;
  UCommonActivatableWidget *pUVar14;
  TSharedPtr<FActivatableTreeNode,1> *pTVar15;
  FPendingWidgetRegistration *pFVar16;
  UWidget *pUVar17;
  int iVar18;
  ForAnyElementType this_00;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  undefined4 local_res8 [2];
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  TSharedPtr<FActivatableTreeNode,1> local_88;
  TSharedPtr<FUIActionBinding,1> local_78;
  TSharedPtr<SWidget,1> local_68;
  TSharedPtr<FActivatableTreeNode,1> local_58;
  FUIActionBindingHandle local_48;
  
  bVar7 = false;
  local_res8[0] = 0;
  iVar18 = (this->ActionBindings).ArrayNum + -1;
  if (-1 < iVar18) {
    pTVar2 = &this->ActionBindings;
    lVar19 = (longlong)iVar18 * 0x18;
    do {
      if (((this->ActionBindings).ArrayNum <= iVar18) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar20 = (pTVar2->AllocatorInstance).Data + lVar19;
      if (*(int *)(pFVar20 + 0x10) < 0) {
LAB_14a801084:
        bVar6 = false;
      }
      else {
        bVar7 = true;
        ::FString::FString(&local_48.CachedDebugActionName,(FString *)pFVar20);
        local_48.RegistrationId = *(int *)(pFVar20 + 0x10);
        pTVar9 = FUIActionBinding::FindBinding(&local_78,&local_48);
        if (pTVar9->Object == (FUIActionBinding *)0x0) goto LAB_14a801084;
        bVar6 = true;
      }
      if (bVar7) {
        bVar7 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      if (!bVar6) {
        if (((this->ActionBindings).ArrayNum <= iVar18) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar20 = (pTVar2->AllocatorInstance).Data + lVar19;
        if (*(void **)pFVar20 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar20);
        }
        iVar8 = ((this->ActionBindings).ArrayNum - iVar18) + -1;
        if (iVar8 != 0) {
          memmove(pFVar20,pFVar20 + 0x18,(longlong)iVar8 * 0x18);
        }
        piVar1 = &(this->ActionBindings).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&pTVar2->AllocatorInstance,(this->ActionBindings).ArrayNum,
                   &(this->ActionBindings).ArrayMax);
      }
      lVar19 = lVar19 + -0x18;
      iVar18 = iVar18 + -1;
    } while (-1 < iVar18);
  }
  if ((((this->ActionBindings).ArrayNum < 1) ||
      (pUVar10 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this),
      pUVar10 == (ULocalPlayer *)0x0)) ||
     (pUVar11 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(pUVar10),
     pUVar11 == (UCommonUIActionRouterBase *)0x0)) goto LAB_14a8012ac;
  pTVar12 = UWidget::GetCachedWidget((UWidget *)this,&local_68);
  pSVar4 = pTVar12->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if ((pSVar4 == (SWidget *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Widget.GetCachedWidget().IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                         ,0x2e4,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar13 = UCommonActivatableWidget::StaticClass();
  iVar18 = (int)pUVar13->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar18) ||
     (pUVar14 = (UCommonActivatableWidget *)this,
     (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
     &pUVar13->_padding_)) {
    pUVar14 = (UCommonActivatableWidget *)0x0;
  }
  UCommonUIActionRouterBase::FindNode(pUVar11,&local_88,pUVar14);
  if (local_88.Object == (FActivatableTreeNode *)0x0) {
    if ((pUVar14 == (UCommonActivatableWidget *)0x0) || (pUVar14->bIsModal == false)) {
      pUVar14 = FindOwningActivatable((UWidget *)this);
      if (pUVar14 != (UCommonActivatableWidget *)0x0) {
        pTVar15 = UCommonUIActionRouterBase::FindNode(pUVar11,&local_58,pUVar14);
        if (&local_88 != pTVar15) {
          local_88.Object = pTVar15->Object;
          pTVar15->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_88.SharedReferenceCount,&pTVar15->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      if (local_88.Object != (FActivatableTreeNode *)0x0) goto LAB_14a801290;
    }
    if (0 < (this->ActionBindings).ArrayNum) {
      pFVar16 = UCommonUIActionRouterBase::GetOrCreatePendingRegistration(pUVar11,(UWidget *)this);
      TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::
      Append<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>
                (&pFVar16->ActionBindings,&this->ActionBindings);
    }
  }
  else {
LAB_14a801290:
    UCommonUIActionRouterBase::RegisterWidgetBindings(pUVar11,&local_88,&this->ActionBindings);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
LAB_14a8012ac:
  UUserWidget::OnWidgetRebuilt((UUserWidget *)this);
  pUVar10 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  if ((pUVar10 != (ULocalPlayer *)0x0) &&
     (pUVar11 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(pUVar10),
     pUVar11 != (UCommonUIActionRouterBase *)0x0)) {
    local_90 = (this->ScrollRecipients).ArrayNum;
    lVar19 = (longlong)local_90;
    pFVar20 = (this->ScrollRecipients).AllocatorInstance.Data;
    local_98.Data = (FScriptContainerElement *)0x0;
    if (local_90 == 0) {
      local_8c = 0;
      iVar18 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_90,0,&local_98,local_90,&local_8c);
      memcpy(local_98.Data,pFVar20,lVar19 << 3);
      iVar18 = local_90;
    }
    pFVar3 = (FWeakObjectPtr *)(local_98.Data + (longlong)iVar18 * 8);
    this_00.Data = local_98.Data;
    iVar8 = iVar18;
    while( true ) {
      if (iVar8 != iVar18) {
        `TCheckedPointerIterator<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((FWeakObjectPtr *)this_00.Data == pFVar3) break;
      pUVar17 = (UWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
      if (pUVar17 != (UWidget *)0x0) {
        UCommonUIActionRouterBase::RegisterScrollRecipient(pUVar11,pUVar17);
      }
      this_00.Data = this_00.Data + 8;
      iVar8 = local_90;
    }
    if ((FWeakObjectPtr *)local_98.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_98.Data);
    }
  }
  return;
}

// RegisterScrollRecipient @ 14a80f250

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

void __thiscall UCommonUserWidget::RegisterScrollRecipient(UCommonUserWidget *this,UWidget *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *pFVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<SWidget,1> *pTVar9;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *this_01;
  FScriptContainerElement *this_02;
  UWidget *local_res8;
  FWeakObjectPtr local_38;
  TSharedPtr<SWidget,1> local_30;
  
  pTVar2 = &this->ScrollRecipients;
  this_02 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = this_02 + (longlong)(this->ScrollRecipients).ArrayNum * 8;
  for (; this_02 != pFVar3; this_02 = this_02 + 8) {
    bVar7 = TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>::UEOpEquals<UWidget,bool>
                      ((TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)this_02,param_1);
    if (bVar7) {
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
  pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= &local_38) && (&local_38 < pFVar4 + (this->ScrollRecipients).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->ScrollRecipients).ArrayNum;
  piVar1 = &(this->ScrollRecipients).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ScrollRecipients).ArrayNum = iVar8 + 1;
  *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38;
  pTVar9 = UWidget::GetCachedWidget((UWidget *)this,&local_30);
  pSVar5 = pTVar9->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  if (((pSVar5 != (SWidget *)0x0) &&
      (this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this),
      this_00 != (ULocalPlayer *)0x0)) &&
     (this_01 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
     this_01 != (UCommonUIActionRouterBase *)0x0)) {
    UCommonUIActionRouterBase::RegisterScrollRecipient(this_01,param_1);
  }
  return;
}

// RegisterScrollRecipientExternal @ 14a80f3f0

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

void __thiscall
UCommonUserWidget::RegisterScrollRecipientExternal(UCommonUserWidget *this,UWidget *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *pFVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<SWidget,1> *pTVar9;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *this_01;
  FScriptContainerElement *this_02;
  UWidget *pUStackX_8;
  FWeakObjectPtr FStack_38;
  TSharedPtr<SWidget,1> TStack_30;
  
  if (param_1 == (UWidget *)0x0) {
    return;
  }
  pTVar2 = &this->ScrollRecipients;
  this_02 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = this_02 + (longlong)(this->ScrollRecipients).ArrayNum * 8;
  for (; this_02 != pFVar3; this_02 = this_02 + 8) {
    bVar7 = TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>::UEOpEquals<UWidget,bool>
                      ((TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)this_02,param_1);
    if (bVar7) {
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FStack_38.ObjectIndex = 0;
  FStack_38.ObjectSerialNumber = 0;
  pUStackX_8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&FStack_38,(FObjectPtr)&pUStackX_8);
  pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= &FStack_38) && (&FStack_38 < pFVar4 + (this->ScrollRecipients).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->ScrollRecipients).ArrayNum;
  piVar1 = &(this->ScrollRecipients).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ScrollRecipients).ArrayNum = iVar8 + 1;
  *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = FStack_38;
  pTVar9 = UWidget::GetCachedWidget((UWidget *)this,&TStack_30);
  pSVar5 = pTVar9->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_30.SharedReferenceCount.ReferenceController);
  if (((pSVar5 != (SWidget *)0x0) &&
      (this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this),
      this_00 != (ULocalPlayer *)0x0)) &&
     (this_01 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
     this_01 != (UCommonUIActionRouterBase *)0x0)) {
    UCommonUIActionRouterBase::RegisterScrollRecipient(this_01,param_1);
  }
  return;
}

// RegisterUIActionBinding @ 14a810000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUIActionBindingHandle * __thiscall
UCommonUserWidget::RegisterUIActionBinding
          (UCommonUserWidget *this,FUIActionBindingHandle *__return_storage_ptr__,
          FBindUIActionArgs *param_1)

{
  int *piVar1;
  TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *pUVar8;
  FUIActionBindingHandle *pFVar9;
  undefined1 auStackY_1f8 [32];
  FString local_1a8;
  int local_198;
  undefined1 local_190 [8];
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  FUIActionTag local_128;
  UDataTable *local_120;
  FName local_118;
  FWeakObjectPtr local_110;
  ECommonInputMode local_108;
  EInputEvent local_104;
  ForAnyElementType local_100;
  undefined8 local_f8;
  TBitArray<FDefaultBitArrayAllocator> local_f0;
  undefined8 uStack_d0;
  void *local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  ITextData *local_a8;
  uint local_a0;
  int local_98;
  undefined1 local_90 [8];
  ForAnyElementType FStack_88;
  int local_80;
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  int local_68;
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  int local_50;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))();
  if ((this_00 == (ULocalPlayer *)0x0) ||
     (pUVar8 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
     pUVar8 == (UCommonUIActionRouterBase *)0x0)) {
    __return_storage_ptr__->RegistrationId = -1;
    (__return_storage_ptr__->CachedDebugActionName).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->CachedDebugActionName).Data.ArrayNum = 0;
    (__return_storage_ptr__->CachedDebugActionName).Data.ArrayMax = 0;
  }
  else {
    local_128 = param_1->ActionTag;
    local_120 = (param_1->LegacyActionTableRow).DataTable.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UDataTable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_120);
    }
    local_118 = (param_1->LegacyActionTableRow).RowName;
    local_110 = (param_1->InputAction).WeakPtr;
    local_108 = param_1->InputMode;
    local_104 = param_1->KeyEvent;
    local_100.Data = (FScriptContainerElement *)0x0;
    local_f8 = 0;
    local_f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_f0.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_f0.MaxBits = _UNK_150631d94;
    uStack_d0 = _UNK_150631d98;
    local_c0 = (void *)0x0;
    local_b8 = 0;
    TSet<enum_ECommonInputType,DefaultKeyFuncs<enum_ECommonInputType,0>,FDefaultSetAllocator>::
    operator=(&local_100,&param_1->InputTypesExemptFromValidKeyCheck);
    local_b0 = param_1->bIsPersistent;
    local_a8 = (param_1->OverrideDisplayName).TextData.Reference;
    local_af = param_1->bConsumeInput;
    local_ae = param_1->bDisplayInActionBar;
    local_ad = param_1->bForceHold;
    if (local_a8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8 + 8))(local_a8,local_190);
    }
    local_a0 = (param_1->OverrideDisplayName).Flags;
    local_98 = param_1->PriorityWithinCollection;
    local_90 = (undefined1  [8])0x0;
    FStack_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_90,
               &param_1->OnExecuteAction);
    local_68 = 0;
    local_78 = (undefined1  [8])0x0;
    FStack_70.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)local_78,
               &param_1->OnHoldActionProgressed);
    local_50 = 0;
    local_60 = (undefined1  [8])0x0;
    FStack_58.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_60,
               &param_1->OnHoldActionPressed);
    local_38 = 0;
    local_48 = (undefined1  [8])0x0;
    FStack_40.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,
               &param_1->OnHoldActionReleased);
    if ((this->bDisplayInActionBar != false) && (param_1->bDisplayInActionBar == false)) {
      local_ae = 1;
    }
    (**(code **)(pUVar8->_padding_ + 0x2d8))(pUVar8,&local_1a8,this,&local_128);
    pTVar2 = &this->ActionBindings;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_1a8) &&
        ((FScriptContainerElement *)&local_1a8 <
         pFVar3 + (longlong)(this->ActionBindings).ArrayMax * 0x18)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FUIActionBindingHandle *)(*pcVar4)();
      return pFVar9;
    }
    iVar7 = (this->ActionBindings).ArrayNum;
    piVar1 = &(this->ActionBindings).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ActionBindings).ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
    ::FString::FString((FString *)pFVar3,&local_1a8);
    *(int *)(pFVar3 + 0x10) = local_198;
    (__return_storage_ptr__->CachedDebugActionName).Data.AllocatorInstance.Data =
         local_1a8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->CachedDebugActionName).Data.ArrayNum = local_1a8.Data.ArrayNum;
    (__return_storage_ptr__->CachedDebugActionName).Data.ArrayMax = local_1a8.Data.ArrayMax;
    __return_storage_ptr__->RegistrationId = local_198;
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_188);
    if ((local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (FStack_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
               (FWriteAccessScope *)&local_170);
    if ((local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_58.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
               (FWriteAccessScope *)&local_158);
    if ((local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_70.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
      local_68 = 0;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    if (FStack_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_70.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_140);
    if ((local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_88.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    if (FStack_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_90);
    if (local_a8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8 + 0x10))();
    }
    local_b8 = 0;
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    uVar5 = local_f8 >> 0x20;
    local_f8 = local_f8 & 0xffffffff00000000;
    if ((int)uVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_100,0,(int *)((longlong)&local_f8 + 4));
    }
    iVar7 = local_f0.MaxBits;
    uStack_d0 = 0xffffffff;
    local_f0._24_8_ = (ulonglong)(uint)local_f0.MaxBits << 0x20;
    if (0x80 < (uint)iVar7) {
      local_f0.NumBits = 0;
      local_f0.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_f0,0);
    }
    if (local_f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
  }
  return __return_storage_ptr__;
}

// RemoveActionBinding @ 14a812d00

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
UCommonUserWidget::RemoveActionBinding(UCommonUserWidget *this,FUIActionBindingHandle *param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *pUVar3;
  FString local_28;
  int local_18;
  
  TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::Remove(&this->ActionBindings,param_1);
  this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  if ((this_00 != (ULocalPlayer *)0x0) &&
     (pUVar3 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
     pUVar3 != (UCommonUIActionRouterBase *)0x0)) {
    pcVar1 = *(code **)(pUVar3->_padding_ + 0x2f8);
    ::FString::FString(&local_28,&param_1->CachedDebugActionName);
    local_18 = param_1->RegistrationId;
    (*pcVar1)(pUVar3,&local_28);
  }
  pFVar2 = (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// SetConsumePointerInput @ 14a817bb0

void __thiscall UCommonUserWidget::SetConsumePointerInput(UCommonUserWidget *this,bool param_1)

{
  this->bConsumePointerInput = param_1;
  return;
}

// StaticRegisterNativesUCommonUserWidget @ 14a81e9d0

void __cdecl UCommonUserWidget::StaticRegisterNativesUCommonUserWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UCommonUserWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterScrollRecipient @ 14a8258b0

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

void __thiscall
UCommonUserWidget::UnregisterScrollRecipient(UCommonUserWidget *this,UWidget *param_1)

{
  TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar1;
  int iVar2;
  TSharedPtr<SWidget,1> *pTVar3;
  ULocalPlayer *this_01;
  UCommonUIActionRouterBase *this_02;
  UClass *pUVar4;
  TSharedPtr<FActivatableTreeNode,1> *pTVar5;
  FPendingWidgetRegistration *pFVar6;
  UCommonActivatableWidget *pUVar7;
  FWeakObjectPtr local_res8;
  UWidget *local_res10;
  TSharedPtr<FActivatableTreeNode,1> local_38;
  TSharedPtr<SWidget,1> local_28;
  
  local_res8 = (FWeakObjectPtr)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  iVar2 = TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
                    (&this->ScrollRecipients,
                     (TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)&local_res8);
  pUVar7 = (UCommonActivatableWidget *)0x0;
  if (iVar2 == 0) {
LAB_14a82594e:
    bVar1 = false;
  }
  else {
    pUVar7 = (UCommonActivatableWidget *)&DAT_00000001;
    pTVar3 = UWidget::GetCachedWidget((UWidget *)this,&local_28);
    if (pTVar3->Object == (SWidget *)0x0) goto LAB_14a82594e;
    bVar1 = true;
  }
  if (pUVar7 != (UCommonActivatableWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if (!bVar1) {
    return;
  }
  this_01 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  if (this_01 == (ULocalPlayer *)0x0) {
    return;
  }
  this_02 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_01);
  if (this_02 == (UCommonUIActionRouterBase *)0x0) {
    return;
  }
  if (param_1 == (UWidget *)0x0) {
LAB_14a8259be:
    pUVar7 = (UCommonActivatableWidget *)0x0;
  }
  else {
    pUVar4 = UCommonActivatableWidget::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       (pUVar7 = (UCommonActivatableWidget *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
       != &pUVar4->_padding_)) goto LAB_14a8259be;
  }
  UCommonUIActionRouterBase::FindNode(this_02,&local_38,pUVar7);
  if (local_38.Object == (FActivatableTreeNode *)0x0) {
    if ((pUVar7 == (UCommonActivatableWidget *)0x0) || (pUVar7->bIsModal == false)) {
      pUVar7 = FindOwningActivatable(param_1);
      if (pUVar7 != (UCommonActivatableWidget *)0x0) {
        pTVar5 = UCommonUIActionRouterBase::FindNode
                           (this_02,(TSharedPtr<FActivatableTreeNode,1> *)&local_28,pUVar7);
        if (&local_38 != pTVar5) {
          local_38.Object = pTVar5->Object;
          pTVar5->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_38.SharedReferenceCount,&pTVar5->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
      }
      if (local_38.Object != (FActivatableTreeNode *)0x0) goto LAB_14a825a54;
    }
    pFVar6 = TArray<UCommonUIActionRouterBase::FPendingWidgetRegistration,TSizedDefaultAllocator<32>_>
             ::FindByKey<UWidget>(&this_02->PendingWidgetRegistrations,param_1);
    if (pFVar6 != (FPendingWidgetRegistration *)0x0) {
      pFVar6->bIsScrollRecipient = false;
    }
  }
  else {
LAB_14a825a54:
    this_00 = &(local_38.Object)->ScrollRecipients;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
              (this_00,(TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)&local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// UnregisterScrollRecipientExternal @ 14a825ae0

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

void __thiscall
UCommonUserWidget::UnregisterScrollRecipientExternal(UCommonUserWidget *this,UWidget *param_1)

{
  TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar1;
  int iVar2;
  TSharedPtr<SWidget,1> *pTVar3;
  ULocalPlayer *this_01;
  UCommonUIActionRouterBase *this_02;
  UClass *pUVar4;
  TSharedPtr<FActivatableTreeNode,1> *pTVar5;
  FPendingWidgetRegistration *pFVar6;
  UCommonActivatableWidget *pUVar7;
  FWeakObjectPtr FStackX_8;
  UWidget *pUStackX_10;
  TSharedPtr<FActivatableTreeNode,1> TStack_38;
  TSharedPtr<SWidget,1> TStack_28;
  
  if (param_1 == (UWidget *)0x0) {
    return;
  }
  FStackX_8 = (FWeakObjectPtr)((ulonglong)FStackX_8 & 0xffffffff00000000);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  pUStackX_10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_10);
  iVar2 = TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
                    (&this->ScrollRecipients,
                     (TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)&FStackX_8);
  pUVar7 = (UCommonActivatableWidget *)0x0;
  if (iVar2 == 0) {
LAB_14a82594e:
    bVar1 = false;
  }
  else {
    pUVar7 = (UCommonActivatableWidget *)&DAT_00000001;
    pTVar3 = UWidget::GetCachedWidget((UWidget *)this,&TStack_28);
    if (pTVar3->Object == (SWidget *)0x0) goto LAB_14a82594e;
    bVar1 = true;
  }
  if (pUVar7 != (UCommonActivatableWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_28.SharedReferenceCount.ReferenceController);
  }
  if (!bVar1) {
    return;
  }
  this_01 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  if (this_01 == (ULocalPlayer *)0x0) {
    return;
  }
  this_02 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_01);
  if (this_02 == (UCommonUIActionRouterBase *)0x0) {
    return;
  }
  if (param_1 == (UWidget *)0x0) {
LAB_14a8259be:
    pUVar7 = (UCommonActivatableWidget *)0x0;
  }
  else {
    pUVar4 = UCommonActivatableWidget::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       (pUVar7 = (UCommonActivatableWidget *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
       != &pUVar4->_padding_)) goto LAB_14a8259be;
  }
  UCommonUIActionRouterBase::FindNode(this_02,&TStack_38,pUVar7);
  if (TStack_38.Object == (FActivatableTreeNode *)0x0) {
    if ((pUVar7 == (UCommonActivatableWidget *)0x0) || (pUVar7->bIsModal == false)) {
      pUVar7 = FindOwningActivatable(param_1);
      if (pUVar7 != (UCommonActivatableWidget *)0x0) {
        pTVar5 = UCommonUIActionRouterBase::FindNode
                           (this_02,(TSharedPtr<FActivatableTreeNode,1> *)&TStack_28,pUVar7);
        if (&TStack_38 != pTVar5) {
          TStack_38.Object = pTVar5->Object;
          pTVar5->Object = (FActivatableTreeNode *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&TStack_38.SharedReferenceCount,&pTVar5->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_28.SharedReferenceCount.ReferenceController);
      }
      if (TStack_38.Object != (FActivatableTreeNode *)0x0) goto LAB_14a825a54;
    }
    pFVar6 = TArray<UCommonUIActionRouterBase::FPendingWidgetRegistration,TSizedDefaultAllocator<32>_>
             ::FindByKey<UWidget>(&this_02->PendingWidgetRegistrations,param_1);
    if (pFVar6 != (FPendingWidgetRegistration *)0x0) {
      pFVar6->bIsScrollRecipient = false;
    }
  }
  else {
LAB_14a825a54:
    this_00 = &(TStack_38.Object)->ScrollRecipients;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    pUStackX_10 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_10);
    TArray<TWeakObjectPtr<UWidget_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
              (this_00,(TWeakObjectPtr<UWidget_const_,FWeakObjectPtr> *)&FStackX_8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_38.SharedReferenceCount.ReferenceController);
  return;
}

// execRegisterScrollRecipientExternal @ 14a8312d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonUserWidget::execRegisterScrollRecipientExternal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidget *local_res10;
  
  local_res10 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UWidget *)0x0) {
    RegisterScrollRecipient((UCommonUserWidget *)param_1,local_res10);
  }
  return;
}

// execSetConsumePointerInput @ 14a832a40

void __cdecl
UCommonUserWidget::execSetConsumePointerInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x17].field_0x11 = local_res8[0] != 0;
  return;
}

// execUnregisterScrollRecipientExternal @ 14a836ab0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonUserWidget::execUnregisterScrollRecipientExternal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidget *local_res10;
  
  local_res10 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UWidget *)0x0) {
    UnregisterScrollRecipient((UCommonUserWidget *)param_1,local_res10);
  }
  return;
}

