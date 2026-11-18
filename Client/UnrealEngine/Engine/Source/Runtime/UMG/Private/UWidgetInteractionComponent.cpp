// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 49

// StaticClass @ 146a4ae60

UClass * __cdecl UWidgetInteractionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetInteractionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetInteractionComponent",
               &Z_Registration_Info_UClass_UWidgetInteractionComponent.InnerSingleton,
               StaticRegisterNativesUWidgetInteractionComponent,0x560,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetInteractionComponent>,
               InternalVTableHelperCtorCaller<UWidgetInteractionComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetInteractionComponent.InnerSingleton;
}

// UWidgetInteractionComponent @ 146a575c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

UWidgetInteractionComponent * __thiscall
UWidgetInteractionComponent::UWidgetInteractionComponent
          (UWidgetInteractionComponent *this,FVTableHelper *param_1)

{
  FModifierKeysState *pFVar1;
  FWidgetPath *pFVar2;
  ForElementType<FArrangedWidget> FVar3;
  undefined1 auStack_1b8 [48];
  undefined8 local_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined2 uStack_17b;
  undefined1 uStack_179;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&this->OnHoveredWidgetChanged = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&(this->OnHoveredWidgetChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnHoveredWidgetChanged).field_0x10 = 0;
  (this->VirtualUser).Object = (FSlateVirtualUserHandle *)0x0;
  (this->VirtualUser).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar2 = FWidgetPath::FWidgetPath(&local_178);
  FWeakWidgetPath::FWeakWidgetPath(&this->LastWidgetPath,pFVar2);
  if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar3 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar3 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar3,local_178.Widgets.Array.ArrayNum);
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  *(undefined8 *)&(this->PressedKeys).Elements = 0;
  *(undefined8 *)&(this->PressedKeys).Elements.field_0x8 = 0;
  pFVar1->bIsLeftShiftDown = 0;
  pFVar1->bAreCapsLocked = 0;
  pFVar1->bIsRightCommandDown = 0;
  pFVar1->bIsLeftCommandDown = 0;
  pFVar1->bIsRightAltDown = 0;
  pFVar1->bIsLeftAltDown = 0;
  pFVar1->bIsRightControlDown = 0;
  pFVar1->bIsLeftControlDown = 0;
  pFVar1->bIsRightShiftDown = 0;
  *(undefined8 *)&(this->PressedKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PressedKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PressedKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PressedKeys).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PressedKeys).Elements.field_0x34 = 0;
  (this->PressedKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PressedKeys).HashSize = 0;
  memset(&this->CustomHitResult,0,0x100);
  (this->CustomHitResult).Time = 1.0;
  (this->CustomHitResult).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CustomHitResult).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->CustomHitResult).MyItem = -1;
  uStack_17b = 0;
  uStack_179 = 0;
  local_188 = 0;
  uStack_180 = 0xffffffff;
  uStack_17c = 0;
  (this->CustomHitResult).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->CustomHitResult).HitObjectHandle.InstanceIndex = -1;
  (this->CustomHitResult).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->CustomHitResult).HitObjectHandle.field_0x1d = 0;
  (this->HoveredWidgetComponent).field0_0x0.DebugPtr = (UWidgetComponent *)0x0;
  (this->WeakHoveredWidgetComponent).WeakPtr = (FWeakObjectPtr)0x0;
  memset(&this->LastHitResult,0,0x100);
  (this->LastHitResult).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastHitResult).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LastHitResult).Time = 1.0;
  (this->LastHitResult).MyItem = -1;
  (this->LastHitResult).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LastHitResult).HitObjectHandle.InstanceIndex = -1;
  (this->LastHitResult).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LastHitResult).HitObjectHandle.field_0x1d = 0;
  return this;
}

// UWidgetInteractionComponent @ 146a577e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

UWidgetInteractionComponent * __thiscall
UWidgetInteractionComponent::UWidgetInteractionComponent
          (UWidgetInteractionComponent *this,FObjectInitializer *param_1)

{
  FModifierKeysState *pFVar1;
  FWidgetPath *pFVar2;
  ForElementType<FArrangedWidget> FVar3;
  undefined1 auStack_1b8 [48];
  undefined8 local_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined2 uStack_17b;
  undefined1 uStack_179;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->InteractionDistance = 500.0;
  this->VirtualUserIndex = 0;
  this->PointerIndex = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined8 *)&this->OnHoveredWidgetChanged = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->OnHoveredWidgetChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnHoveredWidgetChanged).field_0x10 = 0;
  (this->VirtualUser).Object = (FSlateVirtualUserHandle *)0x0;
  (this->VirtualUser).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->InteractionSource = World;
  this->bEnableHitTesting = true;
  this->bShowDebug = false;
  this->DebugSphereLineThickness = 2.0;
  this->DebugLineThickness = 1.0;
  (this->DebugColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  pFVar2 = FWidgetPath::FWidgetPath(&local_178);
  FWeakWidgetPath::FWeakWidgetPath(&this->LastWidgetPath,pFVar2);
  if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar3 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar3 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar3,local_178.Widgets.Array.ArrayNum);
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  *(undefined8 *)&(this->PressedKeys).Elements = 0;
  *(undefined8 *)&(this->PressedKeys).Elements.field_0x8 = 0;
  pFVar1->bIsLeftShiftDown = 0;
  pFVar1->bAreCapsLocked = 0;
  pFVar1->bIsRightCommandDown = 0;
  pFVar1->bIsLeftCommandDown = 0;
  pFVar1->bIsRightAltDown = 0;
  pFVar1->bIsLeftAltDown = 0;
  pFVar1->bIsRightControlDown = 0;
  pFVar1->bIsLeftControlDown = 0;
  pFVar1->bIsRightShiftDown = 0;
  *(undefined8 *)&(this->PressedKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PressedKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PressedKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PressedKeys).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PressedKeys).Elements.field_0x34 = 0;
  (this->PressedKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PressedKeys).HashSize = 0;
  memset(&this->CustomHitResult,0,0x100);
  (this->CustomHitResult).Time = 1.0;
  (this->CustomHitResult).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CustomHitResult).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->CustomHitResult).MyItem = -1;
  uStack_17b = 0;
  uStack_179 = 0;
  local_188 = 0;
  uStack_180 = 0xffffffff;
  uStack_17c = 0;
  (this->CustomHitResult).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->CustomHitResult).HitObjectHandle.InstanceIndex = -1;
  (this->CustomHitResult).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->CustomHitResult).HitObjectHandle.field_0x1d = 0;
  (this->HoveredWidgetComponent).field0_0x0.DebugPtr = (UWidgetComponent *)0x0;
  (this->WeakHoveredWidgetComponent).WeakPtr = (FWeakObjectPtr)0x0;
  memset(&this->LastHitResult,0,0x100);
  (this->LastHitResult).Time = 1.0;
  (this->LastHitResult).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastHitResult).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LastHitResult).MyItem = -1;
  (this->LastHitResult).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LastHitResult).HitObjectHandle.InstanceIndex = -1;
  (this->LastHitResult).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LastHitResult).HitObjectHandle.field_0x1d = 0;
  this->field_0x42 = this->field_0x42 | 3;
  this->field_0x9a = this->field_0x9a | 8;
  (this->TraceChannel).Value = '\x03';
  return this;
}

// ~UWidgetInteractionComponent @ 146a58c40

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

void __thiscall
UWidgetInteractionComponent::~UWidgetInteractionComponent(UWidgetInteractionComponent *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<FSetElementId> FVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PressedKeys).HashSize = 0;
  FVar3 = (this->PressedKeys).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PressedKeys).Elements);
  pTVar4 = (this->LastWidgetPath).Window.WeakReferenceCount.ReferenceController;
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
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)(this->LastWidgetPath).Widgets.AllocatorInstance.Data,
             (this->LastWidgetPath).Widgets.ArrayNum);
  pFVar5 = (this->LastWidgetPath).Widgets.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualUser).SharedReferenceCount.ReferenceController);
  pvVar6 = *(void **)&(this->OnHoveredWidgetChanged).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoveredWidgetChanged);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// Activate @ 146a5c610

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

void __thiscall
UWidgetInteractionComponent::Activate(UWidgetInteractionComponent *this,bool param_1)

{
  TSharedPtr<FSlateVirtualUserHandle,1> *pTVar1;
  bool bVar2;
  UWorld *this_00;
  FSlateApplication *this_01;
  TSharedRef<FSlateVirtualUserHandle,1> *pTVar3;
  FSlateVirtualUserHandle *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FSlateVirtualUserHandle,1> local_18;
  
  UActorComponent::Activate((UActorComponent *)this,param_1);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    this_00 = *(UWorld **)&this->field_0xb0;
    if (this_00 == (UWorld *)0x0) {
      this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    bVar2 = UWorld::IsPreviewWorld(this_00);
    if ((!bVar2) && (pTVar1 = &this->VirtualUser, pTVar1->Object == (FSlateVirtualUserHandle *)0x0))
    {
      this_01 = FSlateApplication::Get();
      pTVar3 = FSlateApplication::FindOrCreateVirtualUser(this_01,&local_18,this->VirtualUserIndex);
      local_20.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
      local_28 = pTVar3->Object;
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<FSlateVirtualUserHandle,1> *)&local_28) {
        pTVar1->Object = local_28;
        local_28 = (FSlateVirtualUserHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->VirtualUser).SharedReferenceCount,&local_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// CanInteractWithComponent @ 146a60520

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

bool __thiscall
UWidgetInteractionComponent::CanInteractWithComponent
          (UWidgetInteractionComponent *this,UWidgetComponent *param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  if (param_1 != (UWidgetComponent *)0x0) {
    this_00 = *(UWorld **)&this->field_0xb0;
    if (this_00 == (UWorld *)0x0) {
      this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    bVar1 = UWorld::IsPaused(this_00);
    if ((!bVar1) || ((param_1->field_0x42 & 1) != 0)) {
      return true;
    }
  }
  return false;
}

// CanSendInput @ 146a60600

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

bool __thiscall UWidgetInteractionComponent::CanSendInput(UWidgetInteractionComponent *this)

{
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((this->VirtualUser).Object != (FSlateVirtualUserHandle *)0x0)) {
    return true;
  }
  return false;
}

// Deactivate @ 146a6a890

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

void __thiscall UWidgetInteractionComponent::Deactivate(UWidgetInteractionComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplication *this_00;
  TSharedPtr<FSlateVirtualUserHandle,1> *pTVar3;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  UActorComponent::Deactivate((UActorComponent *)this);
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     (pTVar3 = &this->VirtualUser, pTVar3->Object != (FSlateVirtualUserHandle *)0x0)) {
    this_00 = FSlateApplication::Get();
    if (pTVar3->Object == (FSlateVirtualUserHandle *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateApplication::UnregisterUser(this_00,pTVar3->Object->UserIndex);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TSharedPtr<FSlateVirtualUserHandle,1> *)&local_18) {
      pTVar3->Object = (FSlateVirtualUserHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VirtualUser).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

// DetermineWidgetUnderPointer @ 146a6b0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FWidgetPath * __thiscall
UWidgetInteractionComponent::DetermineWidgetUnderPointer
          (UWidgetInteractionComponent *this,FWidgetPath *__return_storage_ptr__)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  TArray<TOptional<FVirtualPointerPosition>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FSlateVirtualUserHandle *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  UObject *pUVar13;
  FHitResult *pFVar14;
  TVector2<double> *pTVar15;
  UObject *pUVar16;
  undefined8 *puVar17;
  ForElementType<FArrangedWidget> FVar18;
  ForElementType<FArrangedWidget> FVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 auStackY_468 [32];
  undefined1 local_428 [8];
  int local_420 [2];
  int local_418 [2];
  UObject *local_410;
  UObject *local_408;
  UObject *local_400;
  UObject *local_3f8;
  SWindow *local_3f0;
  TReferenceControllerBase<1> *pTStack_3e8;
  FLinearColor_u_0 local_3d8;
  FLinearColor_u_0 local_3c8;
  FLinearColor_u_0 local_3b8;
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_328;
  undefined8 local_308 [32];
  TVector2<double> local_208;
  UObject *local_1f8;
  FWidgetPath local_1f0;
  char local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_468;
  FWidgetPath::FWidgetPath(__return_storage_ptr__);
  this->bIsHoveredWidgetInteractable = false;
  this->bIsHoveredWidgetFocusable = false;
  this->bIsHoveredWidgetHitTestVisible = false;
  pUVar13 = FWeakObjectPtr::Get(&(this->WeakHoveredWidgetComponent).WeakPtr);
  (this->WeakHoveredWidgetComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_408 = pUVar13;
  (**(code **)(*(longlong *)this + 0x680))(this,local_308);
  lVar20 = 2;
  pFVar14 = &this->LastHitResult;
  puVar17 = local_308;
  do {
    uVar6 = *puVar17;
    uVar7 = puVar17[1];
    uVar8 = puVar17[2];
    uVar9 = puVar17[3];
    pFVar14->FaceIndex = (int)uVar6;
    pFVar14->Time = (float)(int)((ulonglong)uVar6 >> 0x20);
    pFVar14->Distance = (float)(int)uVar7;
    pFVar14->_padding_ = (int)((ulonglong)uVar7 >> 0x20);
    uVar6 = puVar17[4];
    uVar7 = puVar17[5];
    *(undefined8 *)&pFVar14->Location = uVar8;
    *(undefined8 *)&(pFVar14->Location).field_0x8 = uVar9;
    uVar8 = puVar17[6];
    uVar9 = puVar17[7];
    *(undefined8 *)&(pFVar14->Location).field_0x10 = uVar6;
    *(undefined8 *)&pFVar14->ImpactPoint = uVar7;
    uVar6 = puVar17[8];
    uVar7 = puVar17[9];
    *(undefined8 *)&(pFVar14->ImpactPoint).field_0x8 = uVar8;
    *(undefined8 *)&(pFVar14->ImpactPoint).field_0x10 = uVar9;
    uVar8 = puVar17[10];
    uVar9 = puVar17[0xb];
    *(undefined8 *)&pFVar14->Normal = uVar6;
    *(undefined8 *)&(pFVar14->Normal).field_0x8 = uVar7;
    uVar6 = puVar17[0xc];
    uVar7 = puVar17[0xd];
    *(undefined8 *)&(pFVar14->Normal).field_0x10 = uVar8;
    *(undefined8 *)&pFVar14->ImpactNormal = uVar9;
    uVar8 = puVar17[0xe];
    uVar9 = puVar17[0xf];
    *(undefined8 *)&(pFVar14->ImpactNormal).field_0x8 = uVar6;
    *(undefined8 *)&(pFVar14->ImpactNormal).field_0x10 = uVar7;
    *(undefined8 *)&pFVar14->TraceStart = uVar8;
    *(undefined8 *)&(pFVar14->TraceStart).field_0x8 = uVar9;
    lVar20 = lVar20 + -1;
    pFVar14 = (FHitResult *)&(pFVar14->TraceStart).field_0x10;
    puVar17 = puVar17 + 0x10;
  } while (lVar20 != 0);
  local_410 = local_1f8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1f8);
  }
  FWeakObjectPtr::operator=(&(this->WeakHoveredWidgetComponent).WeakPtr,(FObjectPtr)&local_410);
  dVar10 = (this->LocalHitLocation).field0_0x0._s_0.Y;
  pTVar15 = &local_208;
  if (local_90 == '\0') {
    pTVar15 = &this->LastLocalHitLocation;
  }
  pTVar1 = &(__return_storage_ptr__->Widgets).Array;
  (this->LastLocalHitLocation).field0_0x0._s_0.X = (this->LocalHitLocation).field0_0x0._s_0.X;
  (this->LastLocalHitLocation).field0_0x0._s_0.Y = dVar10;
  dVar10 = (pTVar15->field0_0x0)._s_0.Y;
  (this->LocalHitLocation).field0_0x0._s_0.X = (pTVar15->field0_0x0)._s_0.X;
  (this->LocalHitLocation).field0_0x0._s_0.Y = dVar10;
  (__return_storage_ptr__->Widgets).VisibilityFilter.Value.Value =
       (uchar)local_1f0.Widgets.VisibilityFilter.Value.Value;
  if (pTVar1 != &local_1f0.Widgets.Array) {
    FVar18 = (__return_storage_ptr__->Widgets).Array.AllocatorInstance.SecondaryData;
    if (FVar18 == (ForElementType<FArrangedWidget>)0x0) {
      FVar18 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    DestructItems<FArrangedWidget,int>
              ((FArrangedWidget *)FVar18,(__return_storage_ptr__->Widgets).Array.ArrayNum);
    piVar2 = &(__return_storage_ptr__->Widgets).Array.ArrayMax;
    iVar4 = *piVar2;
    (__return_storage_ptr__->Widgets).Array.ArrayNum = local_1f0.Widgets.Array.ArrayNum;
    FVar18 = (ForElementType<FArrangedWidget>)&local_1f0.Widgets.Array;
    if (local_1f0.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar18 = local_1f0.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    if ((local_1f0.Widgets.Array.ArrayNum == 0) && (iVar4 == 0)) {
      *piVar2 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                (0x48,8,local_1f0.Widgets.Array.ArrayNum,iVar4,&pTVar1->AllocatorInstance,
                 local_1f0.Widgets.Array.ArrayNum,piVar2);
      FVar19 = (__return_storage_ptr__->Widgets).Array.AllocatorInstance.SecondaryData;
      if (FVar19 == (ForElementType<FArrangedWidget>)0x0) {
        FVar19 = (ForElementType<FArrangedWidget>)pTVar1;
      }
      ConstructItems<FArrangedWidget,FArrangedWidget,int>
                ((void *)FVar19,(FArrangedWidget *)FVar18,local_1f0.Widgets.Array.ArrayNum);
    }
  }
  (__return_storage_ptr__->Widgets).bAllow3DWidgets = local_1f0.Widgets.bAllow3DWidgets;
  if (local_1f0.TopLevelWindow.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f0.TopLevelWindow.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f0.TopLevelWindow.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f0 = (__return_storage_ptr__->TopLevelWindow).Object;
  pTStack_3e8 = (__return_storage_ptr__->TopLevelWindow).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->TopLevelWindow).Object = local_1f0.TopLevelWindow.Object;
  (__return_storage_ptr__->TopLevelWindow).SharedReferenceCount.ReferenceController =
       local_1f0.TopLevelWindow.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3e8);
  pTVar3 = &__return_storage_ptr__->VirtualPointerPositions;
  if (pTVar3 != &local_1f0.VirtualPointerPositions) {
    piVar2 = &(__return_storage_ptr__->VirtualPointerPositions).ArrayMax;
    (__return_storage_ptr__->VirtualPointerPositions).ArrayNum =
         local_1f0.VirtualPointerPositions.ArrayNum;
    if ((local_1f0.VirtualPointerPositions.ArrayNum == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,local_1f0.VirtualPointerPositions.ArrayNum,*piVar2,
                 &pTVar3->AllocatorInstance,local_1f0.VirtualPointerPositions.ArrayNum,piVar2);
      ConstructItems<TOptional<FVirtualPointerPosition>,TOptional<FVirtualPointerPosition>,int>
                ((pTVar3->AllocatorInstance).Data,
                 (TOptional<FVirtualPointerPosition> *)
                 local_1f0.VirtualPointerPositions.AllocatorInstance.Data,
                 local_1f0.VirtualPointerPositions.ArrayNum);
    }
  }
  pUVar16 = FWeakObjectPtr::Get(&(this->WeakHoveredWidgetComponent).WeakPtr);
  if (this->bShowDebug == false) {
LAB_146a6b4b8:
    if (pUVar16 == (UObject *)0x0) goto LAB_146a6b4c9;
  }
  else {
    if (pUVar16 != (UObject *)0x0) {
      local_3a8._s_0.X = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint;
      local_3a8._s_0.Y = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint.field_0x8;
      local_3d8._0_8_ = *(undefined8 *)&(this->DebugColor).field0_0x0;
      local_3d8._8_8_ = *(undefined8 *)((longlong)&(this->DebugColor).field0_0x0 + 8);
      local_3a8._s_0.Z = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint.field_0x10;
      UKismetSystemLibrary::DrawDebugSphere
                ((UObject *)this,(TVector<double> *)&local_3a8._s_0,__real_40200000,0xc,
                 (FLinearColor *)&local_3d8._s_0,0.0,this->DebugSphereLineThickness,World);
    }
    if ((this->InteractionSource != World) && (this->InteractionSource != Custom))
    goto LAB_146a6b4b8;
    uVar6 = *(undefined8 *)&(this->DebugColor).field0_0x0;
    uVar7 = *(undefined8 *)((longlong)&(this->DebugColor).field0_0x0 + 8);
    if (pUVar16 == (UObject *)0x0) {
      local_348._s_0.X = local_70;
      local_348._s_0.Y = dStack_68;
      local_348._s_0.Z = local_60;
      local_328._s_0.X = local_88;
      local_328._s_0.Y = dStack_80;
      local_328._s_0.Z = local_78;
      local_3b8._0_8_ = uVar6;
      local_3b8._8_8_ = uVar7;
      UKismetSystemLibrary::DrawDebugLine
                ((UObject *)this,(TVector<double> *)&local_328._s_0,
                 (TVector<double> *)&local_348._s_0,(FLinearColor *)&local_3b8._s_0,0.0,
                 this->DebugLineThickness,World);
      goto LAB_146a6b4c9;
    }
    local_388._s_0.X = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint;
    local_388._s_0.Y = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint.field_0x8;
    local_388._s_0.Z = (double)*(undefined8 *)&(this->LastHitResult).ImpactPoint.field_0x10;
    local_368._s_0.X = (double)*(undefined8 *)&(this->LastHitResult).TraceStart;
    local_368._s_0.Y = (double)*(undefined8 *)&(this->LastHitResult).TraceStart.field_0x8;
    local_368._s_0.Z = (double)*(undefined8 *)&(this->LastHitResult).TraceStart.field_0x10;
    local_3c8._0_8_ = uVar6;
    local_3c8._8_8_ = uVar7;
    UKismetSystemLibrary::DrawDebugLine
              ((UObject *)this,(TVector<double> *)&local_368._s_0,(TVector<double> *)&local_388._s_0
               ,(FLinearColor *)&local_3c8._s_0,0.0,this->DebugLineThickness,World);
  }
  (**(code **)(*(longlong *)pUVar16 + 0xb68))(pUVar16);
LAB_146a6b4c9:
  bVar11 = FWidgetPath::IsValid(__return_storage_ptr__);
  if (bVar11) {
    FVar18 = (__return_storage_ptr__->Widgets).Array.AllocatorInstance.SecondaryData;
    iVar4 = (__return_storage_ptr__->Widgets).Array.ArrayNum;
    if (FVar18 == (ForElementType<FArrangedWidget>)0x0) {
      FVar18 = (ForElementType<FArrangedWidget>)&(__return_storage_ptr__->Widgets).Array;
    }
    plVar21 = (longlong *)((longlong)FVar18 + 0x38);
    while( true ) {
      if ((__return_storage_ptr__->Widgets).Array.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FArrangedWidget_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_428);
      }
      pUVar13 = local_408;
      if (plVar21 + -7 == (longlong *)((longlong)FVar18 + (longlong)iVar4 * 0x48)) break;
      if (*(char *)(*plVar21 + 0x3a) != '\0') {
        cVar12 = (**(code **)(*(longlong *)*plVar21 + 0x1b0))();
        if (cVar12 != '\0') {
          this->bIsHoveredWidgetInteractable = true;
        }
        cVar12 = (**(code **)(*(longlong *)*plVar21 + 0x198))();
        if (cVar12 != '\0') {
          this->bIsHoveredWidgetFocusable = true;
        }
      }
      if ((*(byte *)(*plVar21 + 0x39) & 8) != 0) {
        this->bIsHoveredWidgetHitTestVisible = true;
      }
      plVar21 = plVar21 + 9;
    }
  }
  if (pUVar16 != pUVar13) {
    if (pUVar13 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar13 + 0xb68))(pUVar13);
    }
    if ((pUVar16 != (UObject *)0x0) &&
       (pFVar5 = (this->VirtualUser).Object, pFVar5 != (FSlateVirtualUserHandle *)0x0)) {
      local_420[0] = pFVar5->UserIndex;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pUVar16 + 0x2c),local_418
                 ,(bool *)local_420);
    }
    local_400 = pUVar16;
    local_3f8 = pUVar13;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnHoveredWidgetChanged
               ,&local_400);
  }
  FWidgetPath::~FWidgetPath(&local_1f0);
  return __return_storage_ptr__;
}

// FindHoveredWidgetPath @ 146a71b50

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

FWidgetPath * __thiscall
UWidgetInteractionComponent::FindHoveredWidgetPath
          (UWidgetInteractionComponent *this,FWidgetPath *__return_storage_ptr__,
          FWidgetTraceResult *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *pTVar3;
  FWidgetPath *pFVar4;
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> local_48;
  FWidgetAndPointer *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TVector2<double>_u_0 local_28;
  TArrayView<FWidgetAndPointer,int> local_18;
  
  if (param_1->HitWidgetComponent == (UWidgetComponent *)0x0) {
    FWidgetPath::FWidgetPath(__return_storage_ptr__);
  }
  else {
    local_28._s_0.X = (param_1->LocalHitLocation).field0_0x0._s_0.X;
    local_28._s_0.Y = (param_1->LocalHitLocation).field0_0x0._s_0.Y;
    pTVar3 = UWidgetComponent::GetHitWidgetPath
                       (param_1->HitWidgetComponent,&local_48,(TVector2<double> *)&local_28._s_0,
                        false,0.0);
    local_38 = (FWidgetAndPointer *)(pTVar3->AllocatorInstance).Data;
    iStack_30 = pTVar3->ArrayNum;
    if (iStack_30 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWidgetPath *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_18._12_4_ = uStack_2c;
    local_18.ArrayNum = iStack_30;
    local_18.DataPtr = local_38;
    FWidgetPath::FWidgetPath(__return_storage_ptr__,&local_18);
    DestructItems<FWidgetAndPointer,int>
              ((FWidgetAndPointer *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FWidgetAndPointer *)local_48.AllocatorInstance.Data != (FWidgetAndPointer *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Get2DHitLocation @ 146a72250

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

TVector2<double> * __thiscall
UWidgetInteractionComponent::Get2DHitLocation
          (UWidgetInteractionComponent *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->LocalHitLocation).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->LocalHitLocation).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetHoveredWidgetComponent @ 146a76a40

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

UWidgetComponent * __thiscall
UWidgetInteractionComponent::GetHoveredWidgetComponent(UWidgetInteractionComponent *this)

{
  UWidgetComponent *pUVar1;
  
  pUVar1 = (UWidgetComponent *)FWeakObjectPtr::Get(&(this->WeakHoveredWidgetComponent).WeakPtr);
  return pUVar1;
}

// GetHoveredWidgetPath @ 146a76a60

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

FWeakWidgetPath * __thiscall
UWidgetInteractionComponent::GetHoveredWidgetPath(UWidgetInteractionComponent *this)

{
  return &this->LastWidgetPath;
}

// GetKeyAndCharCodes @ 146a76be0

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

void __thiscall
UWidgetInteractionComponent::GetKeyAndCharCodes
          (UWidgetInteractionComponent *this,FKey *param_1,bool *param_2,uint *param_3,bool *param_4
          ,uint *param_5)

{
  FName FVar1;
  uint uVar2;
  FInputKeyManager *this_00;
  uint uVar3;
  uint *local_res10;
  uint *local_res18;
  FKey local_28;
  
  this_00 = FInputKeyManager::Get();
  local_28.KeyName = param_1->KeyName;
  local_28.KeyDetails.Object = (param_1->KeyDetails).Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FInputKeyManager::GetCodesFromKey(this_00,&local_28,&local_res10,&local_res18);
  *param_2 = local_res10 != (uint *)0x0;
  uVar3 = 0;
  *param_4 = local_res18 != (uint *)0x0;
  if (local_res10 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *local_res10;
  }
  *param_3 = uVar2;
  if (local_res18 != (uint *)0x0) {
    uVar3 = *local_res18;
  }
  *param_5 = uVar3;
  if (local_res18 == (uint *)0x0) {
    FVar1 = param_1->KeyName;
    if (FVar1 == EKeys::Tab.KeyName) {
      *param_5 = 9;
      *param_4 = true;
      return;
    }
    if (FVar1 == EKeys::BackSpace.KeyName) {
      *param_5 = 8;
      *param_4 = true;
      return;
    }
    if (FVar1 == EKeys::Enter.KeyName) {
      *param_5 = 10;
      *param_4 = true;
    }
  }
  return;
}

// GetLastHitResult @ 146a76d10

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

FHitResult * __thiscall
UWidgetInteractionComponent::GetLastHitResult(UWidgetInteractionComponent *this)

{
  return &this->LastHitResult;
}

// GetPrivateStaticClass @ 146a78450

UClass * __cdecl UWidgetInteractionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetInteractionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetInteractionComponent",
               &Z_Registration_Info_UClass_UWidgetInteractionComponent.InnerSingleton,
               StaticRegisterNativesUWidgetInteractionComponent,0x560,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetInteractionComponent>,
               InternalVTableHelperCtorCaller<UWidgetInteractionComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetInteractionComponent.InnerSingleton;
}

// GetRelatedComponentsToIgnoreInAutomaticHitTesting @ 146a78ea0

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

void __thiscall
UWidgetInteractionComponent::GetRelatedComponentsToIgnoreInAutomaticHitTesting
          (UWidgetInteractionComponent *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  USceneComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  USceneComponent *local_48;
  USceneComponent *local_40;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if ((*(longlong *)&this->field_0xa8 != 0) &&
     (local_48 = *(USceneComponent **)(*(longlong *)&this->field_0xa8 + 0x1b8),
     local_48 != (USceneComponent *)0x0)) {
    local_48 = USceneComponent::GetAttachmentRoot(local_48);
    USceneComponent::GetChildrenComponents(local_48,true,&local_38);
    if ((local_38.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
       (((FScriptContainerElement *)&local_48 <
         local_38.AllocatorInstance.Data + (longlong)local_38.ArrayMax * 8 &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = local_38.ArrayNum;
    if (local_38.ArrayNum == local_38.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
    }
    local_38.ArrayNum = iVar6 + 1;
    *(USceneComponent **)(local_38.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_48;
  }
  iVar6 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar9.Data = local_38.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar9.Data == pFVar1) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return;
      }
      pUVar2 = *(USceneComponent **)FVar9.Data;
      if (pUVar2 != (USceneComponent *)0x0) break;
LAB_146a790dc:
      local_40 = (USceneComponent *)0x0;
LAB_146a790e0:
      FVar9.Data = FVar9.Data + 8;
    }
    pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) goto LAB_146a790dc;
    local_40 = pUVar2;
    pUVar8 = UWidgetComponent::StaticClass();
    iVar7 = (int)pUVar8->_padding_;
    if ((iVar7 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar8->_padding_)) goto LAB_146a790e0;
    pFVar3 = (param_1->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_40) &&
       (((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)param_1->ArrayMax * 8 &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    FVar9.Data = FVar9.Data + 8;
    param_1->ArrayNum = iVar7 + 1;
    *(USceneComponent **)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_40;
  } while( true );
}

// IsOverFocusableWidget @ 146a7c590

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

bool __thiscall
UWidgetInteractionComponent::IsOverFocusableWidget(UWidgetInteractionComponent *this)

{
  return this->bIsHoveredWidgetFocusable;
}

// IsOverHitTestVisibleWidget @ 146a7c5a0

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

bool __thiscall
UWidgetInteractionComponent::IsOverHitTestVisibleWidget(UWidgetInteractionComponent *this)

{
  return this->bIsHoveredWidgetHitTestVisible;
}

// IsOverInteractableWidget @ 146a7c5b0

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

bool __thiscall
UWidgetInteractionComponent::IsOverInteractableWidget(UWidgetInteractionComponent *this)

{
  return this->bIsHoveredWidgetInteractable;
}

// OnComponentCreated @ 146a818a0

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

void __thiscall UWidgetInteractionComponent::OnComponentCreated(UWidgetInteractionComponent *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->field_0x9b & 4) == 0) {
    this->field_0x9b = this->field_0x9b | 4;
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2595971593406515309>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                     ,0x86d,"!bHasBeenCreated");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->field_0x9b = this->field_0x9b | 4;
  return;
}

// PerformTrace @ 146a885f0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FWidgetTraceResult * __thiscall
UWidgetInteractionComponent::PerformTrace
          (UWidgetInteractionComponent *this,FWidgetTraceResult *__return_storage_ptr__)

{
  uchar *puVar1;
  undefined1 *puVar2;
  EWidgetInteractionSource EVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  UGameViewportClient *this_00;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  TStatIdData *pTVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  bool bVar20;
  TVector<double> *pTVar21;
  FHitResult *pFVar22;
  FName *pFVar23;
  UWorld *pUVar24;
  APlayerController *this_01;
  ULocalPlayer *pUVar25;
  UObject *pUVar26;
  UClass *pUVar27;
  undefined8 *puVar28;
  FWidgetTraceResult *pFVar29;
  uchar *puVar30;
  ForElementType<FArrangedWidget> FVar31;
  FArrangedWidget *pFVar32;
  longlong lVar33;
  ForAnyElementType FVar34;
  TVector<double>_u_0 *pTVar35;
  TVector<double>_u_0 *pTVar36;
  FScriptContainerElement *pFVar37;
  longlong lVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  double dVar48;
  undefined8 in_XMM4_Qb;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStackY_858 [32];
  undefined1 local_7f8 [8];
  TVector<double>_u_0 local_7f0;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> local_7d8;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_7c8;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_7b8;
  TVector<double>_u_0 local_7a8;
  TStatId local_790;
  TStatId local_788;
  TVector2<double>_u_0 local_780;
  TVector2<double>_u_0 local_770;
  TVector<double>_u_0 local_760;
  TVector<double>_u_0 local_748;
  TVector<double> local_730;
  FName local_718;
  FName local_710;
  FName local_708;
  FName local_700;
  TVector2<double> local_6f8;
  TVector<double>_u_0 local_6e8;
  double local_6d0;
  TStatIdData *pTStack_6c8;
  double local_6c0;
  TVector<double>_u_0 local_6b8;
  TVector<double>_u_0 local_698;
  undefined1 local_678 [32];
  double local_658;
  double dStack_650;
  double local_648;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined1 local_630 [16];
  undefined8 local_620;
  undefined1 local_618 [16];
  double local_608;
  undefined1 local_600 [40];
  undefined1 auStack_5d8 [16];
  double dStack_5c8;
  FVector_NetQuantizeNormal local_5c0;
  FVector_NetQuantizeNormal FStack_5a8;
  FVector_NetQuantize local_590;
  FVector_NetQuantize local_578;
  float local_560;
  int local_55c;
  int local_558;
  uchar local_554;
  byte local_553;
  FWeakObjectPtr local_550;
  FActorInstanceHandle local_548;
  FWeakObjectPtr local_528;
  FWeakObjectPtr local_520;
  FPhysicsObject *local_518;
  FName local_510;
  FName local_508;
  TVector2<double>_u_0 local_500;
  UWidgetComponent *local_4f0;
  FWidgetPath local_4e8;
  bool local_388;
  TVector<double>_u_0 local_380;
  TVector<double>_u_0 local_368;
  undefined1 local_348 [40];
  TStatId TStack_320;
  undefined8 local_318;
  uchar auStack_310 [8];
  uchar local_308 [8];
  uchar auStack_300 [8];
  uchar local_2f8 [8];
  ForElementType<unsigned_int> FStack_2f0;
  ForElementType<unsigned_int> local_2d0;
  FCollisionQueryParams local_2b8;
  undefined1 local_228 [8];
  FArrangedWidget local_220 [4];
  FArrangedWidget *local_100;
  int local_f8;
  TReferenceControllerBase<1> *local_e0;
  void *local_d8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_858;
  FWidgetTraceResult::FWidgetTraceResult((FWidgetTraceResult *)local_600);
  EVar3 = this->InteractionSource;
  local_7d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar38 = 2;
  local_7d8.ArrayNum = 0;
  local_7d8.ArrayMax = 0;
  local_7f0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_7f0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_7f0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (EVar3 == World) {
    auVar49 = *(undefined1 (*) [16])&this->field_0x200;
    auVar45 = *(undefined1 (*) [16])&this->field_0x1f0;
    local_308[0] = this->field_0x230;
    local_308[1] = this->field_0x231;
    local_308[2] = this->field_0x232;
    local_308[3] = this->field_0x233;
    local_308[4] = this->field_0x234;
    local_308[5] = this->field_0x235;
    local_308[6] = this->field_0x236;
    local_308[7] = this->field_0x237;
    auStack_300[0] = this->field_0x238;
    auStack_300[1] = this->field_0x239;
    auStack_300[2] = this->field_0x23a;
    auStack_300[3] = this->field_0x23b;
    auStack_300[4] = this->field_0x23c;
    auStack_300[5] = this->field_0x23d;
    auStack_300[6] = this->field_0x23e;
    auStack_300[7] = this->field_0x23f;
    local_318._0_1_ = (bool)this->field_0x220;
    local_318._1_1_ = (bool)this->field_0x221;
    local_318._2_2_ = *(undefined2 *)&this->field_0x222;
    local_318._4_4_ = *(int *)&this->field_0x224;
    auStack_310[0] = this->field_0x228;
    auStack_310[1] = this->field_0x229;
    auStack_310[2] = this->field_0x22a;
    auStack_310[3] = this->field_0x22b;
    auStack_310[4] = this->field_0x22c;
    auStack_310[5] = this->field_0x22d;
    auStack_310[6] = this->field_0x22e;
    auStack_310[7] = this->field_0x22f;
    local_620 = 0;
    local_2f8[0] = this->field_0x240;
    local_2f8[1] = this->field_0x241;
    local_2f8[2] = this->field_0x242;
    local_2f8[3] = this->field_0x243;
    local_2f8[4] = this->field_0x244;
    local_2f8[5] = this->field_0x245;
    local_2f8[6] = this->field_0x246;
    local_2f8[7] = this->field_0x247;
    FStack_2f0 = *(ForElementType<unsigned_int> *)&this->field_0x248;
    dVar9 = __xmm_00000000000000003ff0000000000000._8_8_;
    dVar48 = auVar45._8_8_;
    local_7b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7b8.ArrayNum = 0;
    local_7b8.ArrayMax = 0;
    auVar40 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
    dVar42 = auVar49._0_8_;
    dVar8 = auVar49._8_8_;
    auVar50 = blendpd(auVar45,auVar49,2);
    dVar13 = *(double *)&this->field_0x210;
    pTVar14 = *(TStatIdData **)&this->field_0x218;
    auVar49 = *(undefined1 (*) [16])&this->field_0x210;
    dVar10 = dVar48 * 0.0 - dVar42 * dVar9;
    dVar39 = *(double *)&this->field_0x220;
    auVar51._8_4_ = SUB84(dVar10,0);
    auVar51._0_8_ = dVar9 * auVar45._0_8_ - dVar48 * (double)__xmm_00000000000000003ff0000000000000;
    auVar51._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar41._0_8_ = auVar40._0_8_ * dVar42 - auVar50._0_8_ * 0.0;
    auVar41._8_8_ = auVar40._8_8_ * dVar8 - auVar50._8_8_ * 0.0;
    auVar40 = blendpd(auVar51,auVar41,2);
    dVar10 = dVar10 + dVar10;
    dVar11 = auVar41._0_8_ + auVar41._0_8_;
    uVar46 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar52._0_8_ = auVar40._0_8_ + auVar40._0_8_;
    auVar52._8_8_ = auVar40._8_8_ + auVar40._8_8_;
    auVar43._8_4_ = SUB84(dVar11,0);
    auVar43._0_8_ = dVar10;
    auVar43._12_4_ = uVar46;
    auVar40._8_4_ = SUB84(dVar11,0);
    auVar40._0_8_ = dVar10;
    auVar40._12_4_ = uVar46;
    auVar40 = blendpd(auVar40,auVar52,2);
    auVar44._0_8_ = auVar43._8_8_ * auVar45._0_8_ - dVar10 * dVar48;
    auVar44._8_8_ = auVar52._0_8_ * dVar48 - dVar11 * dVar42;
    auVar45._0_8_ = auVar40._0_8_ * dVar42 - auVar52._0_8_ * auVar50._0_8_;
    auVar45._8_8_ = auVar40._8_8_ * dVar8 - auVar52._8_8_ * auVar50._8_8_;
    dVar48 = dVar10 * dVar8 + (double)__xmm_00000000000000003ff0000000000000 + auVar44._8_8_;
    dVar42 = dVar11 * dVar8 + dVar9 + auVar45._0_8_;
    uVar46 = SUB84(dVar42,0);
    uVar47 = (undefined4)((ulonglong)dVar42 >> 0x20);
    auVar45 = blendpd(auVar44,auVar45,2);
    local_7f0._s_0.Z = auVar52._0_8_ * dVar8 + auVar45._0_8_;
    local_618._8_4_ = uVar46;
    local_618._0_8_ = dVar48;
    local_618._12_4_ = uVar47;
    local_7f0._8_4_ = uVar46;
    local_7f0._s_0.X = dVar48;
    local_7f0._12_4_ = uVar47;
    local_630 = ___xmm_00000000000000003ff0000000000000;
    local_6d0 = dVar13;
    pTStack_6c8 = pTVar14;
    local_6c0 = dVar39;
    local_608 = local_7f0._s_0.Z;
    local_348._32_8_ = dVar13;
    TStack_320.StatIdPtr = pTVar14;
    GetRelatedComponentsToIgnoreInAutomaticHitTesting(this,&local_7b8);
    lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar33 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_WidgetInteractionComponentTrace =
           (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_struct_UWidgetInteractionComponent::FWidgetTraceResult___cdecl_UWidgetInteractionComponent::PerformTrace(void)const_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_WidgetInteractionComponentTrace>
            )0x0;
      pFVar23 = ::FName::FName(&local_708,"WidgetInteractionComponentTrace");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_WidgetInteractionComponentTrace,*pFVar23,
                 L"WidgetInteractionComponentTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_788.StatIdPtr = (TStatIdData *)StatPtr_WidgetInteractionComponentTrace;
    if (StatPtr_WidgetInteractionComponentTrace ==
        (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_struct_UWidgetInteractionComponent::FWidgetTraceResult___cdecl_UWidgetInteractionComponent::PerformTrace(void)const_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_WidgetInteractionComponentTrace>
         )0x0) {
      pFVar23 = ::FName::FName(&local_700,"WidgetInteractionComponentTrace");
      local_788.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_WidgetInteractionComponentTrace,*pFVar23
                      ,L"WidgetInteractionComponentTrace","STATGROUP_CollisionTags",
                      "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid)
      ;
    }
    if ((*(int *)(lVar33 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"WidgetInteractionComponentTrace");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_2b8,::StaticName,&local_788,false,(AActor *)0x0);
    FCollisionQueryParams::AddIgnoredComponents(&local_2b8,&local_7b8);
    pUVar24 = *(UWorld **)&this->field_0xb0;
    dVar42 = (double)this->InteractionDistance;
    dVar48 = dVar42 * local_7f0._s_0.Y + (double)pTVar14;
    local_730.field0_0x0._s_0.Z = dVar42 * local_7f0._s_0.Z + local_6c0;
    local_368._8_4_ = SUB84(dVar48,0);
    local_368._s_0.X = dVar42 * local_7f0._s_0.X + dVar13;
    local_368._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    local_380._0_16_ = auVar49;
    local_380._s_0.Z = dVar39;
    local_368._s_0.Z = local_730.field0_0x0._s_0.Z;
    if (pUVar24 == (UWorld *)0x0) {
      pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    UWorld::LineTraceMultiByChannel
              (pUVar24,&local_7d8,(TVector<double> *)&local_380._s_0,
               (TVector<double> *)&local_368._s_0,(uint)(this->TraceChannel).Value,&local_2b8,
               &FCollisionResponseParams::DefaultResponseParam);
    if (local_2b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_2b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    FVar34.Data = local_7b8.AllocatorInstance.Data;
    if (local_2b8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_2b8.IgnoreComponents.AllocatorInstance.SecondaryData);
      FVar34.Data = local_7b8.AllocatorInstance.Data;
    }
LAB_146a88f6b:
    if (FVar34.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar34.Data);
    }
  }
  else {
    if ((EVar3 == Mouse) || (EVar3 == CenterScreen)) {
      local_7c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7c8.ArrayNum = 0;
      local_7c8.ArrayMax = 0;
      GetRelatedComponentsToIgnoreInAutomaticHitTesting(this,&local_7c8);
      lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar33 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_WidgetInteractionComponentTrace =
             (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_struct_UWidgetInteractionComponent::FWidgetTraceResult___cdecl_UWidgetInteractionComponent::PerformTrace(void)const_::_6_::<lambda_4>::operator()(void)const_::_2_::FStat_WidgetInteractionComponentTrace>
              )0x0;
        pFVar23 = ::FName::FName(&local_718,"WidgetInteractionComponentTrace");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_WidgetInteractionComponentTrace,*pFVar23,
                   L"WidgetInteractionComponentTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                   L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      local_790.StatIdPtr = (TStatIdData *)StatPtr_WidgetInteractionComponentTrace;
      if (StatPtr_WidgetInteractionComponentTrace ==
          (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_struct_UWidgetInteractionComponent::FWidgetTraceResult___cdecl_UWidgetInteractionComponent::PerformTrace(void)const_::_6_::<lambda_4>::operator()(void)const_::_2_::FStat_WidgetInteractionComponentTrace>
           )0x0) {
        pFVar23 = ::FName::FName(&local_710,"WidgetInteractionComponentTrace");
        local_790.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_WidgetInteractionComponentTrace,
                        *pFVar23,L"WidgetInteractionComponentTrace","STATGROUP_CollisionTags",
                        "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,
                        MCR_Invalid);
      }
      if ((*(int *)(lVar33 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::StaticName,"WidgetInteractionComponentTrace");
        _Init_thread_footer(&::_TSS0);
      }
      FCollisionQueryParams::FCollisionQueryParams
                ((FCollisionQueryParams *)local_348,::StaticName,&local_790,false,(AActor *)0x0);
      FCollisionQueryParams::AddIgnoredComponents((FCollisionQueryParams *)local_348,&local_7c8);
      pUVar24 = *(UWorld **)&this->field_0xb0;
      if (((pUVar24 == (UWorld *)0x0) &&
          (pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
          pUVar24 == (UWorld *)0x0)) ||
         (this_01 = UWorld::GetFirstPlayerController(pUVar24), this_01 == (APlayerController *)0x0))
      {
        if (2 < (byte)LogUMG._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
        }
        FWidgetTraceResult::FWidgetTraceResult(__return_storage_ptr__);
        if (local_2d0 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_2d0);
        }
        if (FStack_2f0 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FStack_2f0);
        }
        if (local_7c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7c8.AllocatorInstance.Data);
        }
        goto LAB_146a8956b;
      }
      pUVar25 = APlayerController::GetLocalPlayer(this_01);
      if ((pUVar25 != (ULocalPlayer *)0x0) &&
         (this_00 = (pUVar25->ViewportClient).field0_0x0.DebugPtr,
         this_00 != (UGameViewportClient *)0x0)) {
        if (this->InteractionSource == Mouse) {
          cVar19 = (**(code **)(this_00->_padding_ + 0x348))(this_00,&local_6f8);
          if ((cVar19 != '\0') &&
             (bVar20 = UGameplayStatics::DeprojectScreenToWorld
                                 (this_01,&local_6f8,(TVector<double> *)&local_6e8._s_0,
                                  (TVector<double> *)&local_7f0._s_0), bVar20)) {
            pUVar24 = *(UWorld **)&this->field_0xb0;
            local_380._s_0.Z = local_6e8._s_0.Z;
            dVar48 = (double)this->InteractionDistance;
            local_380._s_0.Y = local_6e8._s_0.Y;
            local_380._s_0.X = local_6e8._s_0.X;
            dVar39 = dVar48 * local_7f0._s_0.Y + local_6e8._s_0.Y;
            local_730.field0_0x0._s_0.Z = dVar48 * local_7f0._s_0.Z + local_6e8._s_0.Z;
            local_368._8_4_ = SUB84(dVar39,0);
            local_368._s_0.X = dVar48 * local_7f0._s_0.X + local_6e8._s_0.X;
            local_368._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            local_368._s_0.Z = local_730.field0_0x0._s_0.Z;
            if (pUVar24 == (UWorld *)0x0) {
              pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
            }
            bVar4 = (this->TraceChannel).Value;
            pTVar36 = &local_368;
            pTVar35 = &local_380;
LAB_146a88b4e:
            UWorld::LineTraceMultiByChannel
                      (pUVar24,&local_7d8,(TVector<double> *)&pTVar35->_s_0,
                       (TVector<double> *)&pTVar36->_s_0,(uint)bVar4,
                       (FCollisionQueryParams *)local_348,
                       &FCollisionResponseParams::DefaultResponseParam);
          }
        }
        else if (this->InteractionSource == CenterScreen) {
          UGameViewportClient::GetViewportSize(this_00,(TVector2<double> *)&local_780._s_0);
          local_770._8_4_ = SUB84(local_780._s_0.Y * _UNK_150689678,0);
          local_770._s_0.X = local_780._s_0.X * ___xmm_3fe00000000000003fe0000000000000;
          local_770._12_4_ = (int)((ulonglong)(local_780._s_0.Y * _UNK_150689678) >> 0x20);
          bVar20 = UGameplayStatics::DeprojectScreenToWorld
                             (this_01,(TVector2<double> *)&local_770._s_0,
                              (TVector<double> *)&local_7a8._s_0,(TVector<double> *)&local_7f0._s_0)
          ;
          if (bVar20) {
            local_380._s_0.Y = local_7a8._s_0.Y;
            local_380._0_8_ = local_7a8._s_0.X;
            uVar46 = SUB84(local_7a8._s_0.X,0);
            uVar47 = (undefined4)((ulonglong)local_7a8._0_8_ >> 0x20);
            pUVar24 = *(UWorld **)&this->field_0xb0;
            auVar12._4_8_ = in_XMM4_Qb;
            auVar12._0_4_ = uVar47;
            auVar49._0_8_ = auVar12._0_8_ << 0x20;
            auVar49._8_4_ = SUB84(local_7a8._s_0.Y,0);
            auVar49._12_4_ = (int)((ulonglong)local_7a8._8_8_ >> 0x20);
            uVar53 = local_7f0._0_4_;
            uVar54 = local_7f0._4_4_;
            uVar55 = local_7f0._8_4_;
            uVar56 = local_7f0._12_4_;
            local_380._s_0.Z = local_7a8._s_0.Z;
            dVar48 = (double)this->InteractionDistance;
            dVar39 = dVar48 * local_7f0._s_0.Y + auVar49._8_8_;
            local_730.field0_0x0._s_0.Z = dVar48 * local_7f0._s_0.Z + local_7a8._s_0.Z;
            local_368._8_4_ = SUB84(dVar39,0);
            local_368._s_0.X = dVar48 * local_7f0._s_0.X + local_7a8._s_0.X;
            local_368._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            local_748._s_0.Y = auVar49._8_8_;
            local_368._s_0.Z = local_730.field0_0x0._s_0.Z;
            if (pUVar24 == (UWorld *)0x0) {
              pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
              uVar46 = SUB84(local_7a8._s_0.X,0);
              uVar47 = (undefined4)((ulonglong)local_7a8._0_8_ >> 0x20);
              uVar55 = local_7f0._8_4_;
              uVar56 = local_7f0._12_4_;
              uVar53 = local_7f0._0_4_;
              uVar54 = local_7f0._4_4_;
              local_748._8_8_ = local_7a8._8_8_;
            }
            bVar4 = (this->TraceChannel).Value;
            pTVar36 = &local_748;
            dVar39 = (double)this->InteractionDistance;
            pTVar35 = &local_7a8;
            local_748._s_0.X =
                 dVar39 * (double)CONCAT44(uVar54,uVar53) + (double)CONCAT44(uVar47,uVar46);
            local_748._s_0.Y = dVar39 * (double)CONCAT44(uVar56,uVar55) + local_748._s_0.Y;
            local_748._s_0.Z = dVar39 * local_7f0._s_0.Z + local_7a8._s_0.Z;
            goto LAB_146a88b4e;
          }
        }
      }
      if (local_2d0 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_2d0);
      }
      FVar34.Data = local_7c8.AllocatorInstance.Data;
      if (FStack_2f0 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FStack_2f0);
        FVar34.Data = local_7c8.AllocatorInstance.Data;
      }
      goto LAB_146a88f6b;
    }
    if (EVar3 == Custom) {
      local_760._s_0.X =
           *(double *)&(this->CustomHitResult).TraceEnd -
           *(double *)&(this->CustomHitResult).TraceStart;
      local_760._s_0.Y =
           *(double *)&(this->CustomHitResult).TraceEnd.field_0x8 -
           *(double *)&(this->CustomHitResult).TraceStart.field_0x8;
      local_760._s_0.Z =
           *(double *)&(this->CustomHitResult).TraceEnd.field_0x10 -
           *(double *)&(this->CustomHitResult).TraceStart.field_0x10;
      pTVar21 = UE::Math::TVector<double>::GetSafeNormal
                          ((TVector<double> *)&local_760._s_0,&local_730,__real_3e45798ee0000000,
                           &UE::Math::TVector<double>::ZeroVector);
      lVar33 = 2;
      local_7f0._0_16_ = *(undefined1 (*) [16])&pTVar21->field0_0x0;
      local_7f0._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
      pFVar22 = &this->CustomHitResult;
      puVar28 = (undefined8 *)local_600;
      do {
        uVar15 = *(undefined8 *)&pFVar22->Distance;
        uVar16 = *(undefined8 *)&pFVar22->Location;
        uVar17 = *(undefined8 *)&(pFVar22->Location).field_0x8;
        *puVar28 = *(undefined8 *)pFVar22;
        puVar28[1] = uVar15;
        uVar15 = *(undefined8 *)&(pFVar22->Location).field_0x10;
        uVar18 = *(undefined8 *)&pFVar22->ImpactPoint;
        puVar28[2] = uVar16;
        puVar28[3] = uVar17;
        uVar16 = *(undefined8 *)&(pFVar22->ImpactPoint).field_0x8;
        uVar17 = *(undefined8 *)&(pFVar22->ImpactPoint).field_0x10;
        puVar28[4] = uVar15;
        puVar28[5] = uVar18;
        uVar15 = *(undefined8 *)&pFVar22->Normal;
        uVar18 = *(undefined8 *)&(pFVar22->Normal).field_0x8;
        puVar28[6] = uVar16;
        puVar28[7] = uVar17;
        uVar16 = *(undefined8 *)&(pFVar22->Normal).field_0x10;
        uVar17 = *(undefined8 *)&pFVar22->ImpactNormal;
        puVar28[8] = uVar15;
        puVar28[9] = uVar18;
        uVar15 = *(undefined8 *)&(pFVar22->ImpactNormal).field_0x8;
        uVar18 = *(undefined8 *)&(pFVar22->ImpactNormal).field_0x10;
        puVar28[10] = uVar16;
        puVar28[0xb] = uVar17;
        uVar16 = *(undefined8 *)&pFVar22->TraceStart;
        uVar17 = *(undefined8 *)&(pFVar22->TraceStart).field_0x8;
        puVar28[0xc] = uVar15;
        puVar28[0xd] = uVar18;
        puVar28[0xe] = uVar16;
        puVar28[0xf] = uVar17;
        lVar33 = lVar33 + -1;
        pFVar22 = (FHitResult *)&(pFVar22->TraceStart).field_0x10;
        puVar28 = puVar28 + 0x10;
      } while (lVar33 != 0);
      local_380._0_16_ = *(undefined1 (*) [16])&(this->CustomHitResult).TraceStart;
      local_380._s_0.Z = (double)*(undefined8 *)&(this->CustomHitResult).TraceStart.field_0x10;
      local_388 = (this->CustomHitResult).bBlockingHit;
      local_368._0_16_ = *(undefined1 (*) [16])&(this->CustomHitResult).TraceEnd;
      local_368._s_0.Z = (double)*(undefined8 *)&(this->CustomHitResult).TraceEnd.field_0x10;
    }
  }
  if (this->InteractionSource != Custom) {
    iVar6 = local_7d8.ArrayNum;
    pFVar37 = local_7d8.AllocatorInstance.Data + (longlong)local_7d8.ArrayNum * 0x100;
    FVar34.Data = local_7d8.AllocatorInstance.Data;
    do {
      if (local_7d8.ArrayNum != iVar6) {
        local_7f8[0] = 0;
        `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_7f8);
      }
      if (FVar34.Data == pFVar37) break;
      pUVar26 = FWeakObjectPtr::Get((FWeakObjectPtr *)(FVar34.Data + 0xd8));
      if (pUVar26 == (UObject *)0x0) {
LAB_146a89065:
        if (((byte)FVar34.Data[0xad] & 1) != 0) break;
      }
      else {
        pUVar27 = UWidgetComponent::StaticClass();
        iVar5 = (int)pUVar27->_padding_;
        if ((*(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar27->_padding_)) goto LAB_146a89065;
        cVar19 = (**(code **)(*(longlong *)pUVar26 + 0x560))(pUVar26);
        if (cVar19 != '\0') goto code_r0x000146a89001;
      }
      FVar34.Data = FVar34.Data + 0x100;
    } while( true );
  }
  if (local_388 != false) goto LAB_146a89087;
  goto LAB_146a89386;
code_r0x000146a89001:
  local_388 = true;
  puVar28 = (undefined8 *)local_600;
  do {
    uVar15 = *(undefined8 *)(FVar34.Data + 8);
    *puVar28 = *(undefined8 *)FVar34.Data;
    puVar28[1] = uVar15;
    uVar15 = *(undefined8 *)(FVar34.Data + 0x18);
    puVar28[2] = *(undefined8 *)(FVar34.Data + 0x10);
    puVar28[3] = uVar15;
    uVar15 = *(undefined8 *)(FVar34.Data + 0x28);
    puVar28[4] = *(undefined8 *)(FVar34.Data + 0x20);
    puVar28[5] = uVar15;
    uVar15 = *(undefined8 *)(FVar34.Data + 0x38);
    puVar28[6] = *(undefined8 *)(FVar34.Data + 0x30);
    puVar28[7] = uVar15;
    uVar15 = *(undefined8 *)(FVar34.Data + 0x48);
    puVar28[8] = *(undefined8 *)(FVar34.Data + 0x40);
    puVar28[9] = uVar15;
    uVar15 = *(undefined8 *)(FVar34.Data + 0x58);
    puVar28[10] = *(undefined8 *)(FVar34.Data + 0x50);
    puVar28[0xb] = uVar15;
    uVar15 = *(undefined8 *)(FVar34.Data + 0x68);
    puVar28[0xc] = *(undefined8 *)(FVar34.Data + 0x60);
    puVar28[0xd] = uVar15;
    uVar15 = *(undefined8 *)(FVar34.Data + 0x78);
    puVar28[0xe] = *(undefined8 *)(FVar34.Data + 0x70);
    puVar28[0xf] = uVar15;
    lVar38 = lVar38 + -1;
    puVar28 = puVar28 + 0x10;
    FVar34.Data = FVar34.Data + 0x80;
  } while (lVar38 != 0);
LAB_146a89087:
  local_4f0 = (UWidgetComponent *)FWeakObjectPtr::Get(&local_528);
  if (local_4f0 != (UWidgetComponent *)0x0) {
    pUVar27 = UWidgetComponent::StaticClass();
    iVar6 = (int)pUVar27->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&local_4f0->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_4f0->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar27->_padding_)) {
      if (local_4f0->GeometryMode == Cylinder) {
        local_6b8._s_0.X = local_7f0._s_0.X;
        local_6b8._s_0.Y = local_7f0._s_0.Y;
        local_6b8._s_0.Z = local_7f0._s_0.Z;
        local_698._s_0.X = (double)auStack_5d8._0_8_;
        local_698._s_0.Y = (double)auStack_5d8._8_8_;
        local_698._s_0.Z = dStack_5c8;
        UWidgetComponent::GetCylinderHitLocation
                  (local_4f0,
                   (TTuple<UE::Math::TVector<double>,UE::Math::TVector2<double>_> *)&local_658,
                   (TVector<double> *)&local_698._s_0,(TVector<double> *)&local_6b8._s_0);
        auStack_5d8._0_8_ = local_658;
        auStack_5d8._8_8_ = dStack_650;
        dStack_5c8 = local_648;
        local_500._0_4_ = local_640;
        local_500._4_4_ = uStack_63c;
        local_500._8_4_ = uStack_638;
        local_500._12_4_ = uStack_634;
      }
      else {
        if ((local_4f0->GeometryMode != Plane) &&
           (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3756401594199965418>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetInteractionComponent.cpp"
                                ,0x116,
                                "TraceResult.HitWidgetComponent->GetGeometryMode() == EWidgetGeometryMode::Plane"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          pFVar29 = (FWidgetTraceResult *)(*pcVar7)();
          return pFVar29;
        }
        local_678._0_4_ = auStack_5d8._0_4_;
        local_678._4_4_ = auStack_5d8._4_4_;
        local_678._8_4_ = auStack_5d8._8_4_;
        local_678._12_4_ = auStack_5d8._12_4_;
        local_678._16_8_ = dStack_5c8;
        (**(code **)(*(longlong *)local_4f0 + 0xb48))(local_4f0,local_678,&local_500);
      }
      puVar30 = (uchar *)(**(code **)(*(longlong *)this + 0x678))(this,local_228,local_600);
      local_4e8.Widgets.VisibilityFilter.Value.Value = (TEnumAsByte<EVisibility::Private>)*puVar30;
      if (&local_4e8.Widgets.Array !=
          (TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
          (puVar30 + 8)) {
        FVar31 = (ForElementType<FArrangedWidget>)&local_4e8.Widgets.Array;
        if (local_4e8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar31 = local_4e8.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar31,local_4e8.Widgets.Array.ArrayNum);
        if (*(longlong *)(puVar30 + 0x128) == 0) {
          memmove(&local_4e8.Widgets.Array,puVar30 + 8,0x120);
        }
        if (local_4e8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_4e8.Widgets.Array.AllocatorInstance.SecondaryData);
        }
        local_4e8.Widgets.Array.AllocatorInstance.SecondaryData =
             *(ForElementType<FArrangedWidget> *)(puVar30 + 0x128);
        puVar30[0x128] = '\0';
        puVar30[0x129] = '\0';
        puVar30[0x12a] = '\0';
        puVar30[299] = '\0';
        puVar30[300] = '\0';
        puVar30[0x12d] = '\0';
        puVar30[0x12e] = '\0';
        puVar30[0x12f] = '\0';
        local_4e8.Widgets.Array.ArrayNum = *(int *)(puVar30 + 0x130);
        local_4e8.Widgets.Array.ArrayMax = *(int *)(puVar30 + 0x134);
        puVar30[0x130] = '\0';
        puVar30[0x131] = '\0';
        puVar30[0x132] = '\0';
        puVar30[0x133] = '\0';
        puVar30[0x134] = '\x04';
        puVar30[0x135] = '\0';
        puVar30[0x136] = '\0';
        puVar30[0x137] = '\0';
      }
      local_4e8.Widgets.bAllow3DWidgets = (bool)puVar30[0x138];
      puVar1 = puVar30 + 0x140;
      if (&local_4e8.TopLevelWindow != (TSharedPtr<SWindow,1> *)puVar1) {
        local_4e8.TopLevelWindow.Object = *(SWindow **)puVar1;
        puVar1[0] = '\0';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
        puVar1[4] = '\0';
        puVar1[5] = '\0';
        puVar1[6] = '\0';
        puVar1[7] = '\0';
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_4e8.TopLevelWindow.SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar30 + 0x148));
      }
      puVar1 = puVar30 + 0x150;
      if (&local_4e8.VirtualPointerPositions !=
          (TArray<TOptional<FVirtualPointerPosition>,TSizedDefaultAllocator<32>_> *)puVar1) {
        if (local_4e8.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e8.VirtualPointerPositions.AllocatorInstance.Data);
        }
        local_4e8.VirtualPointerPositions.AllocatorInstance.Data =
             *(FScriptContainerElement **)puVar1;
        puVar1[0] = '\0';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
        puVar1[4] = '\0';
        puVar1[5] = '\0';
        puVar1[6] = '\0';
        puVar1[7] = '\0';
        local_4e8.VirtualPointerPositions.ArrayNum = *(int *)(puVar30 + 0x158);
        local_4e8.VirtualPointerPositions.ArrayMax = *(int *)(puVar30 + 0x15c);
        puVar30[0x158] = '\0';
        puVar30[0x159] = '\0';
        puVar30[0x15a] = '\0';
        puVar30[0x15b] = '\0';
        puVar30[0x15c] = '\0';
        puVar30[0x15d] = '\0';
        puVar30[0x15e] = '\0';
        puVar30[0x15f] = '\0';
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      pFVar32 = local_220;
      if (local_100 != (FArrangedWidget *)0x0) {
        pFVar32 = local_100;
      }
      DestructItems<FArrangedWidget,int>(pFVar32,local_f8);
      if (local_100 != (FArrangedWidget *)0x0) {
        FMemory::Free(local_100);
      }
      goto LAB_146a89386;
    }
  }
  local_4f0 = (UWidgetComponent *)0x0;
LAB_146a89386:
  (__return_storage_ptr__->HitResult).bBlockingHit = '\0';
  (__return_storage_ptr__->HitResult).bStartPenetrating = '\0';
  (__return_storage_ptr__->HitResult).Time = (float)local_600._4_4_;
  (__return_storage_ptr__->HitResult).FaceIndex = local_600._0_4_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).Location = local_600._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).Location.field_0x8 = local_600._24_8_;
  (__return_storage_ptr__->HitResult).MyItem = local_55c;
  (__return_storage_ptr__->HitResult).Item = local_558;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).ImpactPoint = auStack_5d8._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).ImpactPoint.field_0x8 = auStack_5d8._8_8_;
  (__return_storage_ptr__->HitResult).ElementIndex = local_554;
  (__return_storage_ptr__->HitResult).Distance = (float)local_600._8_4_;
  puVar2 = &(__return_storage_ptr__->HitResult).field_0xad;
  *puVar2 = *puVar2 | local_553 & 3;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).Normal = local_5c0._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).Normal.field_0x8 = local_5c0._8_8_;
  (__return_storage_ptr__->HitResult).PhysMaterial.WeakPtr = local_550;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).Location.field_0x10 = local_600._32_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).ImpactNormal = FStack_5a8._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).ImpactNormal.field_0x8 = FStack_5a8._8_8_;
  *(double *)&(__return_storage_ptr__->HitResult).ImpactPoint.field_0x10 = dStack_5c8;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).Normal.field_0x10 = local_5c0._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).TraceStart = local_590._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).TraceStart.field_0x8 = local_590._8_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).ImpactNormal.field_0x10 = FStack_5a8._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).TraceEnd = local_578._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).TraceEnd.field_0x8 = local_578._8_8_;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).TraceStart.field_0x10 = local_590._16_8_;
  (__return_storage_ptr__->HitResult).PenetrationDepth = local_560;
  *(undefined8 *)&(__return_storage_ptr__->HitResult).TraceEnd.field_0x10 = local_578._16_8_;
  FActorInstanceHandle::FActorInstanceHandle
            (&(__return_storage_ptr__->HitResult).HitObjectHandle,&local_548);
  (__return_storage_ptr__->HitResult).Component.WeakPtr = local_528;
  (__return_storage_ptr__->HitResult).PhysicsObjectOwner.WeakPtr = local_520;
  (__return_storage_ptr__->HitResult).PhysicsObject = local_518;
  (__return_storage_ptr__->HitResult).BoneName = local_510;
  (__return_storage_ptr__->HitResult).MyBoneName = local_508;
  __return_storage_ptr__->HitWidgetComponent = local_4f0;
  (__return_storage_ptr__->LocalHitLocation).field0_0x0._s_0.X =
       (double)CONCAT44(local_500._4_4_,local_500._0_4_);
  (__return_storage_ptr__->LocalHitLocation).field0_0x0._s_0.Y =
       (double)CONCAT44(local_500._12_4_,local_500._8_4_);
  FWidgetPath::FWidgetPath(&__return_storage_ptr__->HitWidgetPath,&local_4e8);
  (__return_storage_ptr__->LineStartLocation).field0_0x0._s_0.X = local_380._s_0.X;
  (__return_storage_ptr__->LineStartLocation).field0_0x0._s_0.Y = local_380._s_0.Y;
  __return_storage_ptr__->bWasHit = local_388;
  (__return_storage_ptr__->LineStartLocation).field0_0x0._s_0.Z = local_380._s_0.Z;
  (__return_storage_ptr__->LineEndLocation).field0_0x0._s_0.X = local_368._s_0.X;
  (__return_storage_ptr__->LineEndLocation).field0_0x0._s_0.Y = local_368._s_0.Y;
  (__return_storage_ptr__->LineEndLocation).field0_0x0._s_0.Z = local_368._s_0.Z;
LAB_146a8956b:
  if (local_7d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d8.AllocatorInstance.Data);
  }
  FWidgetPath::~FWidgetPath(&local_4e8);
  return __return_storage_ptr__;
}

// PressAndReleaseKey @ 146a8a810

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

bool __thiscall
UWidgetInteractionComponent::PressAndReleaseKey(UWidgetInteractionComponent *this,FKey *param_1)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  FName local_28;
  FKeyDetails *local_20;
  TReferenceControllerBase<1> *local_18;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x650);
  local_28 = param_1->KeyName;
  local_20 = (param_1->KeyDetails).Object;
  local_18 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  cVar2 = (*pcVar1)(this,&local_28,0);
  pcVar1 = *(code **)(*(longlong *)this + 0x658);
  local_28 = param_1->KeyName;
  local_20 = (param_1->KeyDetails).Object;
  local_18 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
    UNLOCK();
  }
  cVar3 = (*pcVar1)(this,&local_28);
  if ((cVar2 == '\0') && (cVar3 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return bVar4;
}

// PressKey @ 146a8a8d0

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

bool __thiscall
UWidgetInteractionComponent::PressKey(UWidgetInteractionComponent *this,FKey *param_1,bool param_2)

{
  TSharedPtr<FSlateVirtualUserHandle,1> *this_00;
  uint uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FInputKeyManager *this_01;
  FSlateApplication *pFVar7;
  FSlateVirtualUserHandle *pFVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint *local_res20;
  uint *local_f8;
  LARGE_INTEGER local_f0;
  undefined1 local_e8 [10];
  undefined1 local_de;
  int local_dc;
  int local_d8;
  longlong local_d0;
  LARGE_INTEGER local_c8;
  wchar_t local_c0;
  FKey local_b8;
  FKey local_a0;
  FKeyEvent local_88;
  
  if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) ||
     ((this->VirtualUser).Object == (FSlateVirtualUserHandle *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return false;
  }
  this_01 = FInputKeyManager::Get();
  local_b8.KeyName = param_1->KeyName;
  local_b8.KeyDetails.Object = (param_1->KeyDetails).Object;
  local_b8.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_b8.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FInputKeyManager::GetCodesFromKey(this_01,&local_b8,&local_f8,&local_res20);
  bVar11 = local_res20 != (uint *)0x0;
  if (local_f8 == (uint *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *local_f8;
  }
  if (local_res20 == (uint *)0x0) {
    FVar2 = param_1->KeyName;
    if (FVar2 == EKeys::Tab.KeyName) {
      uVar9 = 9;
    }
    else if (FVar2 == EKeys::BackSpace.KeyName) {
      uVar9 = 8;
    }
    else {
      uVar9 = 0;
      if (FVar2 != EKeys::Enter.KeyName) goto LAB_146a8a9b0;
      uVar9 = 10;
    }
    bVar11 = true;
  }
  else {
    uVar9 = *local_res20;
  }
LAB_146a8a9b0:
  this_00 = &this->VirtualUser;
  if (this_00->Object == (FSlateVirtualUserHandle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar1 = this_00->Object->UserIndex;
  local_a0.KeyName = param_1->KeyName;
  local_a0.KeyDetails.Object = (param_1->KeyDetails).Object;
  local_a0.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_a0.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FKeyEvent::FKeyEvent(&local_88,&local_a0,&this->ModifierKeys,uVar1,param_2,uVar9,uVar10);
  pFVar7 = FSlateApplication::Get();
  bVar6 = FSlateApplication::ProcessKeyDownEvent(pFVar7,&local_88);
  bVar4 = false;
  if ((bVar11) && ((uVar9 < 0xd800 || (bVar4 = false, uVar9 - 0xe000 < 0x2000)))) {
    pFVar8 = TSharedPtr<FSlateVirtualUserHandle,1>::operator->(this_00);
    local_dc = pFVar8->UserIndex;
    local_e8._8_2_ = this->ModifierKeys;
    local_d0 = 0;
    local_de = param_2;
    local_d8 = local_dc;
    QueryPerformanceCounter(&local_f0);
    local_c8 = local_f0;
    local_e8._0_8_ = &___7FCharacterEvent__6B_;
    local_c0 = (wchar_t)uVar9;
    pFVar7 = FSlateApplication::Get();
    bVar4 = FSlateApplication::ProcessKeyCharEvent(pFVar7,(FCharacterEvent *)local_e8);
    FCharacterEvent::~FCharacterEvent((FCharacterEvent *)local_e8);
  }
  if ((bVar6) || (bVar4 != false)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  FKeyEvent::~FKeyEvent(&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return bVar11;
}

// PressPointerKey @ 146a8ab60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
UWidgetInteractionComponent::PressPointerKey(UWidgetInteractionComponent *this,FKey *param_1)

{
  atomic<int> *paVar1;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *this_00;
  atomic<int> aVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FWidgetPath *pFVar8;
  FSlateApplication *pFVar9;
  IPlatformInputDeviceMapper *pIVar10;
  int *piVar11;
  FSlateVirtualUserHandle *pFVar12;
  FPointerEvent *pFVar13;
  ForElementType<FArrangedWidget> FVar14;
  ForElementType<FSetElementId> FVar15;
  FInputDeviceId FVar16;
  undefined1 auStackY_628 [32];
  undefined8 local_5d8;
  undefined8 local_5d0;
  ushort local_5c8;
  int local_5b8;
  undefined1 local_5b4;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  FKey local_5a0;
  TSharedPtr<FSlateUser,1> local_588;
  FPointerEvent local_578;
  FWeakWidgetPath local_4f8;
  FKey local_4d8;
  FPointerEvent local_4b8;
  FPointerEvent local_438;
  FReply local_3b8;
  FWidgetPath local_2f8;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_628;
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((this->VirtualUser).Object != (FSlateVirtualUserHandle *)0x0)) {
    FVar3 = param_1->KeyName;
    this_00 = &this->PressedKeys;
    uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (*(int *)&(this->PressedKeys).Elements.field_0x8 !=
        *(int *)&(this->PressedKeys).Elements.field_0x34) {
      FVar15 = (this->PressedKeys).Hash.SecondaryData;
      if (FVar15 == (ForElementType<FSetElementId>)0x0) {
        FVar15 = (ForElementType<FSetElementId>)&(this->PressedKeys).Hash;
      }
      iVar7 = *(int *)((longlong)FVar15 +
                      (ulonglong)((this->PressedKeys).HashSize - 1U & FVar3.Number + uVar6) * 4);
      if (iVar7 != -1) {
        do {
          if (*(FName *)((longlong)iVar7 * 0x20 + *(longlong *)&this_00->Elements) ==
              param_1->KeyName) goto LAB_146a8b12d;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this_00->Elements);
        } while (iVar7 != -1);
      }
    }
    TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Emplace<FKey_const_&>
              (this_00,&local_5a0,(bool *)param_1);
    if ((this->LastWidgetPath).Widgets.ArrayNum < 1) {
      pFVar8 = DetermineWidgetUnderPointer(this,&local_198);
      FWeakWidgetPath::FWeakWidgetPath(&local_4f8,pFVar8);
      FWeakWidgetPath::operator=(&this->LastWidgetPath,&local_4f8);
      if (local_4f8.Window.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_4f8.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_4f8.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_4f8.Window.WeakReferenceCount.ReferenceController,1);
        }
      }
      DestructItems<TWeakPtr<SWidget,1>,int>
                ((TWeakPtr<SWidget,1> *)local_4f8.Widgets.AllocatorInstance.Data,
                 local_4f8.Widgets.ArrayNum);
      if ((TWeakPtr<SWidget,1> *)local_4f8.Widgets.AllocatorInstance.Data !=
          (TWeakPtr<SWidget,1> *)0x0) {
        FMemory::Free(local_4f8.Widgets.AllocatorInstance.Data);
      }
      if (local_198.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar14 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
      if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar14 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar14,local_198.Widgets.Array.ArrayNum)
      ;
      if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
    FWeakWidgetPath::ToWidgetPath
              (&this->LastWidgetPath,&local_2f8,Truncate,(FPointerEvent *)0x0,EVisibility::Visible);
    if ((this->PointerIndex < 0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3756401594199965209>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetInteractionComponent.cpp"
                           ,0x1e7,"PointerIndex >= 0"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FPointerEvent::FPointerEvent(&local_4b8);
    FVar16.InternalId = -1;
    pFVar9 = FSlateApplication::Get();
    if (((this->VirtualUser).Object == (FSlateVirtualUserHandle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FSlateApplication::GetUser(pFVar9,&local_588,((this->VirtualUser).Object)->UserIndex);
    if (local_588.Object != (FSlateUser *)0x0) {
      if ((local_588.Object == (FSlateUser *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = ((local_588.Object)->PlatformUser).InternalId;
      pIVar10 = IPlatformInputDeviceMapper::Get();
      piVar11 = (int *)(**(code **)(pIVar10->_padding_ + 0x70))
                                 (pIVar10,&local_5a0.KeyName.Number,iVar7);
      FVar16.InternalId = *piVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_588.SharedReferenceCount.ReferenceController);
    if (FVar16.InternalId < 0) {
      pIVar10 = IPlatformInputDeviceMapper::Get();
      piVar11 = (int *)(**(code **)(pIVar10->_padding_ + 0x58))(pIVar10,&local_5a0.KeyDetails);
      FVar16.InternalId = *piVar11;
    }
    bVar5 = FKey::IsTouch(param_1);
    if (bVar5) {
      pFVar12 = TSharedPtr<FSlateVirtualUserHandle,1>::operator->(&this->VirtualUser);
      local_5d0._0_4_ = (float)(this->LastLocalHitLocation).field0_0x0._s_0.X;
      iVar7 = pFVar12->UserIndex;
      local_578._padding_._0_2_ = local_5c8 & 0xfe00;
      local_5d0._4_4_ = (float)(this->LastLocalHitLocation).field0_0x0._s_0.Y;
      local_578._padding_._2_1_ = 0;
      local_578._padding_ = 0;
      uVar6 = this->PointerIndex;
      local_5d8._0_4_ = (float)(this->LocalHitLocation).field0_0x0._s_0.X;
      local_5d8._4_4_ = (float)(this->LocalHitLocation).field0_0x0._s_0.Y;
      local_578._padding_._0_4_ = FVar16.InternalId;
      QueryPerformanceCounter((LARGE_INTEGER *)&local_5a0.KeyDetails.SharedReferenceCount);
      local_578._padding_ = (longlong)local_5a0.KeyDetails.SharedReferenceCount.ReferenceController;
      pIVar10 = IPlatformInputDeviceMapper::Get();
      (**(code **)(pIVar10->_padding_ + 0x68))
                (pIVar10,(undefined1 *)((longlong)&local_5a0.KeyDetails.Object + 4),
                 local_578._padding_._0_4_);
      local_578._padding_ = (longlong)&___7FPointerEvent__6B_;
      local_578.LastScreenSpacePosition = local_5d0;
      local_578.ScreenSpacePosition = local_5d8;
      local_578.CursorDelta._4_4_ = local_5d8._4_4_ - local_5d0._4_4_;
      local_578.CursorDelta._0_4_ = (float)local_5d8 - (float)local_5d0;
      local_578.PressedButtons =
           (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)&FTouchKeySet::EmptySet;
      local_578.EffectingButton.KeyName = EKeys::LeftMouseButton.KeyName;
      local_578.EffectingButton.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
      local_578.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_578.TouchpadIndex = 0;
      local_578.Force = 1.0;
      local_578.bIsTouchEvent = true;
      local_578.GestureType = None;
      local_578.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
      local_578.bIsDirectionInvertedFromDevice = false;
      local_578.bIsTouchForceChanged = false;
      local_578.bIsTouchFirstMove = false;
      local_578._padding_._4_4_ = iVar7;
      local_578.PointerIndex = uVar6;
      FPointerEvent::operator=(&local_4b8,&local_578);
      pFVar13 = &local_578;
    }
    else {
      pFVar12 = TSharedPtr<FSlateVirtualUserHandle,1>::operator->(&this->VirtualUser);
      local_5b4 = 1;
      local_5b8 = pFVar12->UserIndex;
      local_4d8.KeyName = param_1->KeyName;
      local_4d8.KeyDetails.Object = (param_1->KeyDetails).Object;
      local_4d8.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_4d8.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_4d8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4d8.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_5b0 = (float)(this->LastLocalHitLocation).field0_0x0._s_0.X;
      local_5ac = (float)(this->LastLocalHitLocation).field0_0x0._s_0.Y;
      local_5a8 = (float)(this->LocalHitLocation).field0_0x0._s_0.X;
      local_5a4 = (float)(this->LocalHitLocation).field0_0x0._s_0.Y;
      pFVar13 = FPointerEvent::FPointerEvent
                          (&local_438,FVar16,this->PointerIndex,
                           (FDeprecateVector2DParameter *)&local_5a8,
                           (FDeprecateVector2DParameter *)&local_5b0,this_00,&local_4d8,0.0,
                           &this->ModifierKeys,(TOptional<int>)&local_5b8);
      FPointerEvent::operator=(&local_4b8,pFVar13);
      pFVar13 = &local_438;
    }
    FPointerEvent::~FPointerEvent(pFVar13);
    pFVar9 = FSlateApplication::Get();
    FSlateApplication::RoutePointerDownEvent(pFVar9,&local_3b8,&local_2f8,&local_4b8);
    FReply::~FReply(&local_3b8);
    FPointerEvent::~FPointerEvent(&local_4b8);
    if (local_2f8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2f8.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar14 = (ForElementType<FArrangedWidget>)&local_2f8.Widgets.Array;
    if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar14 = local_2f8.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar14,local_2f8.Widgets.Array.ArrayNum);
    if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_2f8.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
LAB_146a8b12d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// ReleaseKey @ 146a8df40

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

bool __thiscall
UWidgetInteractionComponent::ReleaseKey(UWidgetInteractionComponent *this,FKey *param_1)

{
  uint uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FInputKeyManager *this_00;
  FSlateApplication *this_01;
  uint uVar6;
  uint uVar7;
  uint *local_res18;
  uint *local_res20;
  FKey local_98;
  FKey local_80;
  FKeyEvent local_68;
  
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((this->VirtualUser).Object != (FSlateVirtualUserHandle *)0x0)) {
    this_00 = FInputKeyManager::Get();
    local_98.KeyName = param_1->KeyName;
    local_98.KeyDetails.Object = (param_1->KeyDetails).Object;
    local_98.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_98.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FInputKeyManager::GetCodesFromKey(this_00,&local_98,&local_res18,&local_res20);
    if (local_res18 == (uint *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *local_res18;
    }
    if (local_res20 == (uint *)0x0) {
      FVar2 = param_1->KeyName;
      if (FVar2 == EKeys::Tab.KeyName) {
        uVar6 = 9;
      }
      else if (FVar2 == EKeys::BackSpace.KeyName) {
        uVar6 = 8;
      }
      else {
        uVar6 = 0;
        if (FVar2 == EKeys::Enter.KeyName) {
          uVar6 = 10;
        }
      }
    }
    else {
      uVar6 = *local_res20;
    }
    if ((this->VirtualUser).Object == (FSlateVirtualUserHandle *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar1 = ((this->VirtualUser).Object)->UserIndex;
    local_80.KeyName = param_1->KeyName;
    local_80.KeyDetails.Object = (param_1->KeyDetails).Object;
    local_80.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_80.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_80.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FKeyEvent::FKeyEvent(&local_68,&local_80,&this->ModifierKeys,uVar1,false,uVar6,uVar7);
    this_01 = FSlateApplication::Get();
    bVar4 = FSlateApplication::ProcessKeyUpEvent(this_01,&local_68);
    FKeyEvent::~FKeyEvent(&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return bVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// ReleasePointerKey @ 146a8e190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
UWidgetInteractionComponent::ReleasePointerKey(UWidgetInteractionComponent *this,FKey *param_1)

{
  atomic<int> *paVar1;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *this_00;
  atomic<int> aVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FWidgetPath *pFVar8;
  FWeakWidgetPath *pFVar9;
  FSlateApplication *pFVar10;
  IPlatformInputDeviceMapper *pIVar11;
  int *piVar12;
  FSlateVirtualUserHandle *pFVar13;
  FPointerEvent *pFVar14;
  ForElementType<FArrangedWidget> FVar15;
  ForElementType<FSetElementId> FVar16;
  FInputDeviceId FVar17;
  undefined1 auStackY_628 [32];
  undefined8 local_5d8;
  undefined8 local_5d0;
  ushort local_5c8;
  int local_5b8;
  undefined1 local_5b4;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  undefined1 local_5a0 [4];
  undefined1 local_59c [4];
  undefined1 local_598 [8];
  LARGE_INTEGER local_590;
  TSharedPtr<FSlateUser,1> local_588;
  FPointerEvent local_578;
  FKey local_4f8;
  FWeakWidgetPath local_4e0;
  FPointerEvent local_4b8;
  FPointerEvent local_438;
  FReply local_3b8;
  FWidgetPath local_2f8;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_628;
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((this->VirtualUser).Object != (FSlateVirtualUserHandle *)0x0)) {
    FVar3 = param_1->KeyName;
    this_00 = &this->PressedKeys;
    uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (*(int *)&(this->PressedKeys).Elements.field_0x8 !=
        *(int *)&(this->PressedKeys).Elements.field_0x34) {
      FVar16 = (this->PressedKeys).Hash.SecondaryData;
      if (FVar16 == (ForElementType<FSetElementId>)0x0) {
        FVar16 = (ForElementType<FSetElementId>)&(this->PressedKeys).Hash;
      }
      iVar7 = *(int *)((longlong)FVar16 +
                      (ulonglong)((this->PressedKeys).HashSize - 1U & FVar3.Number + uVar6) * 4);
      if (iVar7 != -1) {
        FVar3 = param_1->KeyName;
        do {
          if (*(FName *)((longlong)iVar7 * 0x20 + *(longlong *)&this_00->Elements) == FVar3) {
            uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
            TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::RemoveImpl<FKey>
                      (this_00,uVar6 + FVar3.Number,param_1);
            FWeakWidgetPath::ToWidgetPath
                      (&this->LastWidgetPath,&local_2f8,Truncate,(FPointerEvent *)0x0,
                       EVisibility::Visible);
            pFVar8 = FWidgetPath::FWidgetPath(&local_198);
            pFVar9 = FWeakWidgetPath::FWeakWidgetPath(&local_4e0,pFVar8);
            FWeakWidgetPath::operator=(&this->LastWidgetPath,pFVar9);
            if (local_4e0.Window.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(local_4e0.Window.WeakReferenceCount.ReferenceController)->
                        WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)((local_4e0.Window.WeakReferenceCount.ReferenceController)->_padding_ +
                            8))(local_4e0.Window.WeakReferenceCount.ReferenceController,1);
              }
            }
            DestructItems<TWeakPtr<SWidget,1>,int>
                      ((TWeakPtr<SWidget,1> *)local_4e0.Widgets.AllocatorInstance.Data,
                       local_4e0.Widgets.ArrayNum);
            if ((TWeakPtr<SWidget,1> *)local_4e0.Widgets.AllocatorInstance.Data !=
                (TWeakPtr<SWidget,1> *)0x0) {
              FMemory::Free(local_4e0.Widgets.AllocatorInstance.Data);
            }
            if (local_198.VirtualPointerPositions.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
            FVar15 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
            if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar15 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
            }
            DestructItems<FArrangedWidget,int>
                      ((FArrangedWidget *)FVar15,local_198.Widgets.Array.ArrayNum);
            if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
            }
            if ((this->PointerIndex < 0) &&
               (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_3756401594199965135>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetInteractionComponent.cpp"
                                   ,0x231,"PointerIndex >= 0"), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FPointerEvent::FPointerEvent(&local_4b8);
            FVar17.InternalId = -1;
            pFVar10 = FSlateApplication::Get();
            if (((this->VirtualUser).Object == (FSlateVirtualUserHandle *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FSlateApplication::GetUser(pFVar10,&local_588,((this->VirtualUser).Object)->UserIndex);
            if (local_588.Object != (FSlateUser *)0x0) {
              if ((local_588.Object == (FSlateUser *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar7 = ((local_588.Object)->PlatformUser).InternalId;
              pIVar11 = IPlatformInputDeviceMapper::Get();
              piVar12 = (int *)(**(code **)(pIVar11->_padding_ + 0x70))(pIVar11,local_5a0,iVar7);
              FVar17.InternalId = *piVar12;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_588.SharedReferenceCount.ReferenceController);
            if (FVar17.InternalId < 0) {
              pIVar11 = IPlatformInputDeviceMapper::Get();
              piVar12 = (int *)(**(code **)(pIVar11->_padding_ + 0x58))(pIVar11,local_59c);
              FVar17.InternalId = *piVar12;
            }
            bVar5 = FKey::IsTouch(param_1);
            if (bVar5) {
              pFVar13 = TSharedPtr<FSlateVirtualUserHandle,1>::operator->(&this->VirtualUser);
              local_5d0._0_4_ = (float)(this->LastLocalHitLocation).field0_0x0._s_0.X;
              iVar7 = pFVar13->UserIndex;
              local_578._padding_._0_2_ = local_5c8 & 0xfe00;
              local_5d0._4_4_ = (float)(this->LastLocalHitLocation).field0_0x0._s_0.Y;
              local_578._padding_._2_1_ = 0;
              local_578._padding_ = 0;
              uVar6 = this->PointerIndex;
              local_5d8._0_4_ = (float)(this->LocalHitLocation).field0_0x0._s_0.X;
              local_5d8._4_4_ = (float)(this->LocalHitLocation).field0_0x0._s_0.Y;
              local_578._padding_._0_4_ = FVar17.InternalId;
              QueryPerformanceCounter(&local_590);
              local_578._padding_ = (longlong)local_590;
              pIVar11 = IPlatformInputDeviceMapper::Get();
              (**(code **)(pIVar11->_padding_ + 0x68))(pIVar11,local_598,local_578._padding_._0_4_);
              local_578._padding_ = (longlong)&___7FPointerEvent__6B_;
              local_578.LastScreenSpacePosition = local_5d0;
              local_578.ScreenSpacePosition = local_5d8;
              local_578.CursorDelta._4_4_ = local_5d8._4_4_ - local_5d0._4_4_;
              local_578.CursorDelta._0_4_ = (float)local_5d8 - (float)local_5d0;
              local_578.PressedButtons =
                   (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)
                   &FTouchKeySet::EmptySet;
              local_578.EffectingButton.KeyName = EKeys::LeftMouseButton.KeyName;
              local_578.EffectingButton.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object
              ;
              local_578.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
                   EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
              if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.
                           ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_578.TouchpadIndex = 0;
              local_578.Force = 0.0;
              local_578.bIsTouchEvent = true;
              local_578.GestureType = None;
              local_578.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
              local_578.bIsDirectionInvertedFromDevice = false;
              local_578.bIsTouchForceChanged = false;
              local_578.bIsTouchFirstMove = false;
              local_578._padding_._4_4_ = iVar7;
              local_578.PointerIndex = uVar6;
              FPointerEvent::operator=(&local_4b8,&local_578);
              pFVar14 = &local_578;
            }
            else {
              pFVar13 = TSharedPtr<FSlateVirtualUserHandle,1>::operator->(&this->VirtualUser);
              local_5b4 = 1;
              local_5b8 = pFVar13->UserIndex;
              local_4f8.KeyName = param_1->KeyName;
              local_4f8.KeyDetails.Object = (param_1->KeyDetails).Object;
              local_4f8.KeyDetails.SharedReferenceCount.ReferenceController =
                   (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
              if (local_4f8.KeyDetails.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_4f8.KeyDetails.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_4f8.KeyDetails.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              local_5b0 = (float)(this->LastLocalHitLocation).field0_0x0._s_0.X;
              local_5ac = (float)(this->LastLocalHitLocation).field0_0x0._s_0.Y;
              local_5a8 = (float)(this->LocalHitLocation).field0_0x0._s_0.X;
              local_5a4 = (float)(this->LocalHitLocation).field0_0x0._s_0.Y;
              pFVar14 = FPointerEvent::FPointerEvent
                                  (&local_438,FVar17,this->PointerIndex,
                                   (FDeprecateVector2DParameter *)&local_5a8,
                                   (FDeprecateVector2DParameter *)&local_5b0,this_00,&local_4f8,0.0,
                                   &this->ModifierKeys,(TOptional<int>)&local_5b8);
              FPointerEvent::operator=(&local_4b8,pFVar14);
              pFVar14 = &local_438;
            }
            FPointerEvent::~FPointerEvent(pFVar14);
            pFVar10 = FSlateApplication::Get();
            FSlateApplication::RoutePointerUpEvent(pFVar10,&local_3b8,&local_2f8,&local_4b8);
            FReply::~FReply(&local_3b8);
            FPointerEvent::~FPointerEvent(&local_4b8);
            if (local_2f8.VirtualPointerPositions.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f8.VirtualPointerPositions.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2f8.TopLevelWindow.SharedReferenceCount.ReferenceController);
            FVar15 = (ForElementType<FArrangedWidget>)&local_2f8.Widgets.Array;
            if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar15 = local_2f8.Widgets.Array.AllocatorInstance.SecondaryData;
            }
            DestructItems<FArrangedWidget,int>
                      ((FArrangedWidget *)FVar15,local_2f8.Widgets.Array.ArrayNum);
            if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FMemory::Free((void *)local_2f8.Widgets.Array.AllocatorInstance.SecondaryData);
            }
            break;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)&this_00->Elements);
        } while (iVar7 != -1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// ScrollWheel @ 146a91bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
UWidgetInteractionComponent::ScrollWheel(UWidgetInteractionComponent *this,float param_1)

{
  uint uVar1;
  code *pcVar2;
  FName FVar3;
  FKeyDetails *pFVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  FSlateApplication *this_00;
  ForElementType<FArrangedWidget> FVar7;
  undefined1 auStackY_318 [32];
  undefined8 local_2e8;
  undefined8 local_2e0;
  LARGE_INTEGER local_2d8 [2];
  undefined1 local_2c8 [10];
  undefined1 local_2be;
  int local_2bc;
  int local_2b8;
  longlong local_2b0;
  FDeprecateSlateVector2D local_2a0;
  FDeprecateSlateVector2D local_298;
  FDeprecateSlateVector2D local_290;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *local_288;
  FName local_280;
  FKeyDetails *local_278;
  FSharedReferencer<1> local_270;
  uint local_268;
  uint local_264;
  float local_260;
  undefined2 local_25c;
  undefined8 local_258;
  undefined2 local_250;
  bool local_24e;
  FReply local_248;
  FWidgetPath local_190;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((this->VirtualUser).Object != (FSlateVirtualUserHandle *)0x0)) {
    FWeakWidgetPath::ToWidgetPath
              (&this->LastWidgetPath,&local_190,Truncate,(FPointerEvent *)0x0,EVisibility::Visible);
    if (this->PointerIndex < 0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3756401594199964972>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetInteractionComponent.cpp"
                         ,0x2d4,"PointerIndex >= 0");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar5.ReferenceController =
         EKeys::MouseWheelAxis.KeyDetails.SharedReferenceCount.ReferenceController;
    pFVar4 = EKeys::MouseWheelAxis.KeyDetails.Object;
    FVar3 = EKeys::MouseWheelAxis.KeyName;
    if (EKeys::MouseWheelAxis.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::MouseWheelAxis.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::MouseWheelAxis.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar1 = this->PointerIndex;
    local_2e0._0_4_ = (float)(this->LastLocalHitLocation).field0_0x0._s_0.X;
    local_2e0._4_4_ = (float)(this->LastLocalHitLocation).field0_0x0._s_0.Y;
    local_2e8._0_4_ = (float)(this->LocalHitLocation).field0_0x0._s_0.X;
    local_2e8._4_4_ = (float)(this->LocalHitLocation).field0_0x0._s_0.Y;
    if ((this->VirtualUser).Object == (FSlateVirtualUserHandle *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_2bc = ((this->VirtualUser).Object)->UserIndex;
    local_2c8._8_2_ = this->ModifierKeys;
    local_2be = 0;
    local_2b0 = 0;
    local_2b8 = local_2bc;
    QueryPerformanceCounter(local_2d8);
    local_2c8._0_8_ = &___7FPointerEvent__6B_;
    local_298 = local_2e0;
    local_280 = FVar3;
    local_278 = pFVar4;
    local_2a0 = local_2e8;
    local_270.ReferenceController = FVar5.ReferenceController;
    local_2d8[0]._0_4_ = (float)local_2e8 - (float)local_2e0;
    local_2d8[0]._4_4_ = local_2e8._4_4_ - local_2e0._4_4_;
    local_290._4_4_ = local_2d8[0]._4_4_;
    local_290._0_4_ = local_2d8[0]._0_4_;
    local_288 = &this->PressedKeys;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_264 = 0;
    local_260 = 1.0;
    local_25c._0_1_ = false;
    local_25c._1_1_ = None;
    local_258._0_4_ = 0;
    local_250._0_1_ = false;
    local_250._1_1_ = false;
    local_24e = false;
    local_268 = uVar1;
    local_258._4_4_ = param_1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    this_00 = FSlateApplication::Get();
    FSlateApplication::RouteMouseWheelOrGestureEvent
              (this_00,&local_248,&local_190,(FPointerEvent *)local_2c8,(FPointerEvent *)0x0);
    FReply::~FReply(&local_248);
    FPointerEvent::~FPointerEvent((FPointerEvent *)local_2c8);
    if (local_190.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar7 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
    if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar7 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar7,local_190.Widgets.Array.ArrayNum);
    if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// SendKeyChar @ 146a91f00

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

bool __thiscall
UWidgetInteractionComponent::SendKeyChar
          (UWidgetInteractionComponent *this,FString *param_1,bool param_2)

{
  wchar_t wVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  LARGE_INTEGER local_res20;
  undefined1 local_58 [10];
  undefined1 local_4e;
  int local_4c;
  int local_48;
  longlong local_40;
  LARGE_INTEGER local_38;
  wchar_t local_30;
  
  if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
     ((this->VirtualUser).Object != (FSlateVirtualUserHandle *)0x0)) {
    bVar10 = false;
    uVar8 = 0;
    uVar9 = uVar8;
    while( true ) {
      iVar7 = (param_1->Data).ArrayNum;
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      iVar7 = (int)uVar8;
      if (iVar6 <= iVar7) break;
      if (iVar7 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      wVar1 = *(wchar_t *)((param_1->Data).AllocatorInstance.Data + uVar9);
      if ((this->VirtualUser).Object == (FSlateVirtualUserHandle *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      local_4c = ((this->VirtualUser).Object)->UserIndex;
      local_58._0_8_ = &___7FInputEvent__6B_;
      local_58._8_2_ = this->ModifierKeys;
      local_40 = 0;
      local_4e = param_2;
      local_48 = local_4c;
      QueryPerformanceCounter(&local_res20);
      local_38 = local_res20;
      local_58._0_8_ = &___7FCharacterEvent__6B_;
      local_30 = wVar1;
      if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentApplication.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                           ,0x141,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      bVar4 = IsInGameThread();
      if (!bVar4) {
        bVar4 = IsInSlateThread();
        if (!bVar4) {
          bVar4 = (*IsInAsyncLoadingThread)();
          if (!bVar4) {
            bVar4 = IsInParallelLoadingThread();
            if (!bVar4) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                                 ,0x142,L"");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
            }
          }
        }
      }
      if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      bVar4 = FSlateApplication::ProcessKeyCharEvent
                        (FSlateApplication::CurrentApplication.Object,(FCharacterEvent *)local_58);
      bVar10 = (bool)(bVar10 | bVar4);
      FCharacterEvent::~FCharacterEvent((FCharacterEvent *)local_58);
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar9 = uVar9 + 2;
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return bVar10;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// SetCustomHitResult @ 146a930c0

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

void __thiscall
UWidgetInteractionComponent::SetCustomHitResult
          (UWidgetInteractionComponent *this,FHitResult *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FHitResult *pFVar5;
  longlong lVar6;
  
  lVar6 = 2;
  pFVar5 = &this->CustomHitResult;
  do {
    fVar2 = param_1->Time;
    fVar3 = param_1->Distance;
    iVar4 = param_1->_padding_;
    pFVar5->FaceIndex = param_1->FaceIndex;
    pFVar5->Time = fVar2;
    pFVar5->Distance = fVar3;
    pFVar5->_padding_ = iVar4;
    uVar1 = *(undefined8 *)&(param_1->Location).field_0x8;
    *(undefined8 *)&pFVar5->Location = *(undefined8 *)&param_1->Location;
    *(undefined8 *)&(pFVar5->Location).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&param_1->ImpactPoint;
    *(undefined8 *)&(pFVar5->Location).field_0x10 = *(undefined8 *)&(param_1->Location).field_0x10;
    *(undefined8 *)&pFVar5->ImpactPoint = uVar1;
    uVar1 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar5->ImpactPoint).field_0x8 =
         *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar5->ImpactPoint).field_0x10 = uVar1;
    uVar1 = *(undefined8 *)&(param_1->Normal).field_0x8;
    *(undefined8 *)&pFVar5->Normal = *(undefined8 *)&param_1->Normal;
    *(undefined8 *)&(pFVar5->Normal).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&param_1->ImpactNormal;
    *(undefined8 *)&(pFVar5->Normal).field_0x10 = *(undefined8 *)&(param_1->Normal).field_0x10;
    *(undefined8 *)&pFVar5->ImpactNormal = uVar1;
    uVar1 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar5->ImpactNormal).field_0x8 =
         *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar5->ImpactNormal).field_0x10 = uVar1;
    uVar1 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
    *(undefined8 *)&pFVar5->TraceStart = *(undefined8 *)&param_1->TraceStart;
    *(undefined8 *)&(pFVar5->TraceStart).field_0x8 = uVar1;
    lVar6 = lVar6 + -1;
    pFVar5 = (FHitResult *)&(pFVar5->TraceStart).field_0x10;
    param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
  } while (lVar6 != 0);
  return;
}

// SetFocus @ 146a937e0

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

void __thiscall
UWidgetInteractionComponent::SetFocus(UWidgetInteractionComponent *this,UWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplication *this_00;
  TSharedPtr<SWidget,1> *pTVar3;
  TSharedPtr<SWidget,1> local_18;
  
  if ((this->VirtualUser).Object != (FSlateVirtualUserHandle *)0x0) {
    this_00 = FSlateApplication::Get();
    pTVar3 = UWidget::GetCachedWidget(param_1,&local_18);
    if ((this->VirtualUser).Object == (FSlateVirtualUserHandle *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateApplication::SetUserFocus
              (this_00,((this->VirtualUser).Object)->UserIndex,pTVar3,SetDirectly);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SimulatePointerMovement @ 146a95e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
UWidgetInteractionComponent::SimulatePointerMovement(UWidgetInteractionComponent *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *pFVar6;
  FWidgetPath *pFVar7;
  FWeakWidgetPath *pFVar8;
  ForElementType<FArrangedWidget> FVar9;
  undefined1 auStackY_558 [32];
  undefined8 local_528;
  undefined8 local_520;
  LARGE_INTEGER local_510;
  undefined1 local_508 [10];
  undefined1 local_4fe;
  int local_4fc;
  int local_4f8;
  longlong local_4f0;
  LARGE_INTEGER local_4e8;
  FDeprecateSlateVector2D local_4e0;
  FDeprecateSlateVector2D local_4d8;
  FDeprecateSlateVector2D local_4d0;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *local_4c8;
  FName local_4c0;
  FKeyDetails *local_4b8;
  FSharedReferencer<1> FStack_4b0;
  uint local_4a8;
  uint local_4a4;
  float local_4a0;
  undefined2 local_49c;
  FDeprecateSlateVector2D local_498;
  undefined2 local_490;
  bool local_48e;
  FWeakWidgetPath local_488;
  FWeakWidgetPath local_468;
  FName local_448;
  FWidgetPath local_430;
  FWidgetPath local_2d0;
  FWidgetPath local_170;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_558;
  if (((this->bEnableHitTesting != false) &&
      (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) &&
     ((this->VirtualUser).Object != (FSlateVirtualUserHandle *)0x0)) {
    DetermineWidgetUnderPointer(this,&local_430);
    if (this->PointerIndex < 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3756401594199965258>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetInteractionComponent.cpp"
                         ,0x1b6,"PointerIndex >= 0");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar3 = this->PointerIndex;
    local_520._0_4_ = (float)(this->LastLocalHitLocation).field0_0x0._s_0.X;
    local_448.ComparisonIndex.Value = 0;
    local_448.Number = 0;
    local_520._4_4_ = (float)(this->LastLocalHitLocation).field0_0x0._s_0.Y;
    local_528._0_4_ = (float)(this->LocalHitLocation).field0_0x0._s_0.X;
    local_528._4_4_ = (float)(this->LocalHitLocation).field0_0x0._s_0.Y;
    if ((this->VirtualUser).Object == (FSlateVirtualUserHandle *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_4fc = ((this->VirtualUser).Object)->UserIndex;
    local_508._8_2_ = this->ModifierKeys;
    local_4fe = 0;
    local_4f0 = 0;
    local_4f8 = local_4fc;
    QueryPerformanceCounter(&local_510);
    local_4e8 = local_510;
    local_508._0_8_ = &___7FPointerEvent__6B_;
    local_4d8 = local_520;
    local_4e0 = local_528;
    local_4b8 = (FKeyDetails *)0x0;
    FStack_4b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_4d0._4_4_ = local_528._4_4_ - local_520._4_4_;
    local_4d0._0_4_ = (float)local_528 - (float)local_520;
    local_4c8 = &this->PressedKeys;
    local_4c0 = local_448;
    local_4a4 = 0;
    local_4a0 = 1.0;
    local_49c._0_1_ = false;
    local_49c._1_1_ = None;
    local_498 = (FDeprecateSlateVector2D)0x0;
    local_490._0_1_ = false;
    local_490._1_1_ = false;
    local_48e = false;
    local_4a8 = uVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar5 = FWidgetPath::IsValid(&local_430);
    if (bVar5) {
      bVar5 = FWeakObjectPtr::IsValid(&(this->WeakHoveredWidgetComponent).WeakPtr);
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("WeakHoveredWidgetComponent.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetInteractionComponent.cpp"
                           ,0x1c3,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FWeakWidgetPath::FWeakWidgetPath(&local_488,&local_430);
      FWeakWidgetPath::operator=(&this->LastWidgetPath,&local_488);
      if (local_488.Window.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_488.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_488.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_488.Window.WeakReferenceCount.ReferenceController,1);
        }
      }
      DestructItems<TWeakPtr<SWidget,1>,int>
                ((TWeakPtr<SWidget,1> *)local_488.Widgets.AllocatorInstance.Data,
                 local_488.Widgets.ArrayNum);
      if ((TWeakPtr<SWidget,1> *)local_488.Widgets.AllocatorInstance.Data !=
          (TWeakPtr<SWidget,1> *)0x0) {
        FMemory::Free(local_488.Widgets.AllocatorInstance.Data);
      }
      pFVar6 = FSlateApplication::Get();
      FSlateApplication::RoutePointerMoveEvent(pFVar6,&local_430,(FPointerEvent *)local_508,false);
    }
    else {
      FWidgetPath::FWidgetPath(&local_2d0);
      pFVar6 = FSlateApplication::Get();
      FSlateApplication::RoutePointerMoveEvent(pFVar6,&local_2d0,(FPointerEvent *)local_508,false);
      pFVar7 = FWidgetPath::FWidgetPath(&local_170);
      pFVar8 = FWeakWidgetPath::FWeakWidgetPath(&local_468,pFVar7);
      FWeakWidgetPath::operator=(&this->LastWidgetPath,pFVar8);
      if (local_468.Window.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_468.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_468.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_468.Window.WeakReferenceCount.ReferenceController,1);
        }
      }
      DestructItems<TWeakPtr<SWidget,1>,int>
                ((TWeakPtr<SWidget,1> *)local_468.Widgets.AllocatorInstance.Data,
                 local_468.Widgets.ArrayNum);
      if ((TWeakPtr<SWidget,1> *)local_468.Widgets.AllocatorInstance.Data !=
          (TWeakPtr<SWidget,1> *)0x0) {
        FMemory::Free(local_468.Widgets.AllocatorInstance.Data);
      }
      if (local_170.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_170.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar9 = (ForElementType<FArrangedWidget>)&local_170.Widgets.Array;
      if (local_170.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = local_170.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_170.Widgets.Array.ArrayNum);
      if (local_170.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_170.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      if (local_2d0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_2d0.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d0.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar9 = (ForElementType<FArrangedWidget>)&local_2d0.Widgets.Array;
      if (local_2d0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = local_2d0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_2d0.Widgets.Array.ArrayNum);
      if (local_2d0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_2d0.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
    FPointerEvent::~FPointerEvent((FPointerEvent *)local_508);
    if (local_430.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_430.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_430.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar9 = (ForElementType<FArrangedWidget>)&local_430.Widgets.Array;
    if (local_430.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar9 = local_430.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_430.Widgets.Array.ArrayNum);
    if (local_430.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_430.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// StaticRegisterNativesUWidgetInteractionComponent @ 146a96950

void __cdecl UWidgetInteractionComponent::StaticRegisterNativesUWidgetInteractionComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UWidgetInteractionComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 146a994b0

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

void __thiscall
UWidgetInteractionComponent::TickComponent
          (UWidgetInteractionComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  SimulatePointerMovement(this);
  return;
}

// execGet2DHitLocation @ 146aa0740

void __cdecl
UWidgetInteractionComponent::execGet2DHitLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x1a].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x1a].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetHoveredWidgetComponent @ 146aa1bc0

void __cdecl
UWidgetInteractionComponent::execGetHoveredWidgetComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x1b].field_0x10);
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetLastHitResult @ 146aa22d0

void __cdecl
UWidgetInteractionComponent::execGetLastHitResult(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = 2;
  puVar2 = (undefined8 *)&param_1[0x1b].field_0x18;
  do {
    uVar1 = puVar2[1];
    *(undefined8 *)param_3 = *puVar2;
    *(undefined8 *)((longlong)param_3 + 8) = uVar1;
    uVar1 = puVar2[3];
    *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
    *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
    uVar1 = puVar2[5];
    *(undefined8 *)((longlong)param_3 + 0x20) = puVar2[4];
    *(undefined8 *)((longlong)param_3 + 0x28) = uVar1;
    uVar1 = puVar2[7];
    *(undefined8 *)((longlong)param_3 + 0x30) = puVar2[6];
    *(undefined8 *)((longlong)param_3 + 0x38) = uVar1;
    uVar1 = puVar2[9];
    *(undefined8 *)((longlong)param_3 + 0x40) = puVar2[8];
    *(undefined8 *)((longlong)param_3 + 0x48) = uVar1;
    uVar1 = puVar2[0xb];
    *(undefined8 *)((longlong)param_3 + 0x50) = puVar2[10];
    *(undefined8 *)((longlong)param_3 + 0x58) = uVar1;
    uVar1 = puVar2[0xd];
    *(undefined8 *)((longlong)param_3 + 0x60) = puVar2[0xc];
    *(undefined8 *)((longlong)param_3 + 0x68) = uVar1;
    uVar1 = puVar2[0xf];
    *(undefined8 *)((longlong)param_3 + 0x70) = puVar2[0xe];
    *(undefined8 *)((longlong)param_3 + 0x78) = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x10;
    param_3 = (undefined8 *)((longlong)param_3 + 0x80);
  } while (lVar3 != 0);
  return;
}

// execIsOverFocusableWidget @ 146aa3240

void __cdecl
UWidgetInteractionComponent::execIsOverFocusableWidget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x22].field_0x1;
  return;
}

// execIsOverHitTestVisibleWidget @ 146aa3270

void __cdecl
UWidgetInteractionComponent::execIsOverHitTestVisibleWidget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x22].field_0x2;
  return;
}

// execIsOverInteractableWidget @ 146aa32a0

void __cdecl
UWidgetInteractionComponent::execIsOverInteractableWidget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x22);
  return;
}

// execPressAndReleaseKey @ 146aa4d60

void __cdecl
UWidgetInteractionComponent::execPressAndReleaseKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  undefined8 local_20;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_38 = 0;
  local_30 = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x660);
  local_20 = local_38;
  local_18 = local_30;
  local_10 = pTStack_28;
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,&local_20);
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return;
}

// execPressKey @ 146aa4e40

void __cdecl
UWidgetInteractionComponent::execPressKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  int local_res8 [2];
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  undefined8 local_20;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_38 = 0;
  local_30 = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
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
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x650);
  local_20 = local_38;
  local_18 = local_30;
  local_10 = pTStack_28;
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,&local_20,local_res8[0] != 0);
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return;
}

// execPressPointerKey @ 146aa4f70

void __cdecl
UWidgetInteractionComponent::execPressPointerKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  undefined8 local_20;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_38 = 0;
  local_30 = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x640);
  local_20 = local_38;
  local_18 = local_30;
  local_10 = pTStack_28;
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(param_1,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return;
}

// execReleaseKey @ 146aa6120

void __cdecl
UWidgetInteractionComponent::execReleaseKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  undefined8 local_20;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_38 = 0;
  local_30 = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x658);
  local_20 = local_38;
  local_18 = local_30;
  local_10 = pTStack_28;
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,&local_20);
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return;
}

// execReleasePointerKey @ 146aa6360

void __cdecl
UWidgetInteractionComponent::execReleasePointerKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  undefined8 local_20;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_38 = 0;
  local_30 = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x648);
  local_20 = local_38;
  local_18 = local_30;
  local_10 = pTStack_28;
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(param_1,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return;
}

// execScrollWheel @ 146aa7080

void __cdecl
UWidgetInteractionComponent::execScrollWheel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x670))(param_1,local_res8[0]);
  return;
}

// execSendKeyChar @ 146aa7110

void __cdecl
UWidgetInteractionComponent::execSendKeyChar(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *_Src;
  undefined1 uVar3;
  longlong lVar4;
  bool bVar5;
  int local_res8 [2];
  void *local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
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
  _Src = local_48;
  bVar5 = local_res8[0] != 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_40;
  local_30 = (int)local_40;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x668);
  if ((int)local_40 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,&local_38,(int)local_40,&local_2c);
    memcpy(local_38.Data,_Src,lVar4 * 2);
  }
  uVar3 = (*pcVar2)(param_1,&local_38,bVar5);
  *(undefined1 *)param_3 = uVar3;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execSetCustomHitResult @ 146aa7ce0

void __cdecl
UWidgetInteractionComponent::execSetCustomHitResult(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  UObject *pUVar17;
  uchar *puVar18;
  longlong lVar19;
  uchar local_108 [4];
  undefined4 uStack_104;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  memset(local_108,0,0x100);
  local_50 = 0;
  uStack_48 = 0;
  uStack_38 = 0xffffffff;
  uStack_104 = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  lVar19 = 2;
  puVar18 = local_108;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar18 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar17 = param_1 + 0x14;
  do {
    uVar2 = puVar18[1];
    uVar3 = puVar18[2];
    uVar4 = puVar18[3];
    uVar5 = puVar18[4];
    uVar6 = puVar18[5];
    uVar7 = puVar18[6];
    uVar8 = puVar18[7];
    uVar9 = puVar18[8];
    uVar10 = puVar18[9];
    uVar11 = puVar18[10];
    uVar12 = puVar18[0xb];
    uVar13 = puVar18[0xc];
    uVar14 = puVar18[0xd];
    uVar15 = puVar18[0xe];
    uVar16 = puVar18[0xf];
    pUVar17->field_0x0 = puVar18[0];
    pUVar17->field_0x1 = uVar2;
    pUVar17->field_0x2 = uVar3;
    pUVar17->field_0x3 = uVar4;
    pUVar17->field_0x4 = uVar5;
    pUVar17->field_0x5 = uVar6;
    pUVar17->field_0x6 = uVar7;
    pUVar17->field_0x7 = uVar8;
    pUVar17->field_0x8 = uVar9;
    pUVar17->field_0x9 = uVar10;
    pUVar17->field_0xa = uVar11;
    pUVar17->field_0xb = uVar12;
    pUVar17->field_0xc = uVar13;
    pUVar17->field_0xd = uVar14;
    pUVar17->field_0xe = uVar15;
    pUVar17->field_0xf = uVar16;
    uVar2 = puVar18[0x11];
    uVar3 = puVar18[0x12];
    uVar4 = puVar18[0x13];
    uVar5 = puVar18[0x14];
    uVar6 = puVar18[0x15];
    uVar7 = puVar18[0x16];
    uVar8 = puVar18[0x17];
    uVar9 = puVar18[0x18];
    uVar10 = puVar18[0x19];
    uVar11 = puVar18[0x1a];
    uVar12 = puVar18[0x1b];
    uVar13 = puVar18[0x1c];
    uVar14 = puVar18[0x1d];
    uVar15 = puVar18[0x1e];
    uVar16 = puVar18[0x1f];
    pUVar17->field_0x10 = puVar18[0x10];
    pUVar17->field_0x11 = uVar2;
    pUVar17->field_0x12 = uVar3;
    pUVar17->field_0x13 = uVar4;
    pUVar17->field_0x14 = uVar5;
    pUVar17->field_0x15 = uVar6;
    pUVar17->field_0x16 = uVar7;
    pUVar17->field_0x17 = uVar8;
    pUVar17->field_0x18 = uVar9;
    pUVar17->field_0x19 = uVar10;
    pUVar17->field_0x1a = uVar11;
    pUVar17->field_0x1b = uVar12;
    pUVar17->field_0x1c = uVar13;
    pUVar17->field_0x1d = uVar14;
    pUVar17->field_0x1e = uVar15;
    pUVar17->field_0x1f = uVar16;
    uVar2 = puVar18[0x21];
    uVar3 = puVar18[0x22];
    uVar4 = puVar18[0x23];
    uVar5 = puVar18[0x24];
    uVar6 = puVar18[0x25];
    uVar7 = puVar18[0x26];
    uVar8 = puVar18[0x27];
    uVar9 = puVar18[0x28];
    uVar10 = puVar18[0x29];
    uVar11 = puVar18[0x2a];
    uVar12 = puVar18[0x2b];
    uVar13 = puVar18[0x2c];
    uVar14 = puVar18[0x2d];
    uVar15 = puVar18[0x2e];
    uVar16 = puVar18[0x2f];
    pUVar17->field_0x20 = puVar18[0x20];
    pUVar17->field_0x21 = uVar2;
    pUVar17->field_0x22 = uVar3;
    pUVar17->field_0x23 = uVar4;
    pUVar17->field_0x24 = uVar5;
    pUVar17->field_0x25 = uVar6;
    pUVar17->field_0x26 = uVar7;
    pUVar17->field_0x27 = uVar8;
    pUVar17[1].field_0x0 = uVar9;
    pUVar17[1].field_0x1 = uVar10;
    pUVar17[1].field_0x2 = uVar11;
    pUVar17[1].field_0x3 = uVar12;
    pUVar17[1].field_0x4 = uVar13;
    pUVar17[1].field_0x5 = uVar14;
    pUVar17[1].field_0x6 = uVar15;
    pUVar17[1].field_0x7 = uVar16;
    uVar2 = puVar18[0x31];
    uVar3 = puVar18[0x32];
    uVar4 = puVar18[0x33];
    uVar5 = puVar18[0x34];
    uVar6 = puVar18[0x35];
    uVar7 = puVar18[0x36];
    uVar8 = puVar18[0x37];
    uVar9 = puVar18[0x38];
    uVar10 = puVar18[0x39];
    uVar11 = puVar18[0x3a];
    uVar12 = puVar18[0x3b];
    uVar13 = puVar18[0x3c];
    uVar14 = puVar18[0x3d];
    uVar15 = puVar18[0x3e];
    uVar16 = puVar18[0x3f];
    pUVar17[1].field_0x8 = puVar18[0x30];
    pUVar17[1].field_0x9 = uVar2;
    pUVar17[1].field_0xa = uVar3;
    pUVar17[1].field_0xb = uVar4;
    pUVar17[1].field_0xc = uVar5;
    pUVar17[1].field_0xd = uVar6;
    pUVar17[1].field_0xe = uVar7;
    pUVar17[1].field_0xf = uVar8;
    pUVar17[1].field_0x10 = uVar9;
    pUVar17[1].field_0x11 = uVar10;
    pUVar17[1].field_0x12 = uVar11;
    pUVar17[1].field_0x13 = uVar12;
    pUVar17[1].field_0x14 = uVar13;
    pUVar17[1].field_0x15 = uVar14;
    pUVar17[1].field_0x16 = uVar15;
    pUVar17[1].field_0x17 = uVar16;
    uVar2 = puVar18[0x41];
    uVar3 = puVar18[0x42];
    uVar4 = puVar18[0x43];
    uVar5 = puVar18[0x44];
    uVar6 = puVar18[0x45];
    uVar7 = puVar18[0x46];
    uVar8 = puVar18[0x47];
    uVar9 = puVar18[0x48];
    uVar10 = puVar18[0x49];
    uVar11 = puVar18[0x4a];
    uVar12 = puVar18[0x4b];
    uVar13 = puVar18[0x4c];
    uVar14 = puVar18[0x4d];
    uVar15 = puVar18[0x4e];
    uVar16 = puVar18[0x4f];
    pUVar17[1].field_0x18 = puVar18[0x40];
    pUVar17[1].field_0x19 = uVar2;
    pUVar17[1].field_0x1a = uVar3;
    pUVar17[1].field_0x1b = uVar4;
    pUVar17[1].field_0x1c = uVar5;
    pUVar17[1].field_0x1d = uVar6;
    pUVar17[1].field_0x1e = uVar7;
    pUVar17[1].field_0x1f = uVar8;
    pUVar17[1].field_0x20 = uVar9;
    pUVar17[1].field_0x21 = uVar10;
    pUVar17[1].field_0x22 = uVar11;
    pUVar17[1].field_0x23 = uVar12;
    pUVar17[1].field_0x24 = uVar13;
    pUVar17[1].field_0x25 = uVar14;
    pUVar17[1].field_0x26 = uVar15;
    pUVar17[1].field_0x27 = uVar16;
    uVar2 = puVar18[0x51];
    uVar3 = puVar18[0x52];
    uVar4 = puVar18[0x53];
    uVar5 = puVar18[0x54];
    uVar6 = puVar18[0x55];
    uVar7 = puVar18[0x56];
    uVar8 = puVar18[0x57];
    uVar9 = puVar18[0x58];
    uVar10 = puVar18[0x59];
    uVar11 = puVar18[0x5a];
    uVar12 = puVar18[0x5b];
    uVar13 = puVar18[0x5c];
    uVar14 = puVar18[0x5d];
    uVar15 = puVar18[0x5e];
    uVar16 = puVar18[0x5f];
    pUVar17[2].field_0x0 = puVar18[0x50];
    pUVar17[2].field_0x1 = uVar2;
    pUVar17[2].field_0x2 = uVar3;
    pUVar17[2].field_0x3 = uVar4;
    pUVar17[2].field_0x4 = uVar5;
    pUVar17[2].field_0x5 = uVar6;
    pUVar17[2].field_0x6 = uVar7;
    pUVar17[2].field_0x7 = uVar8;
    pUVar17[2].field_0x8 = uVar9;
    pUVar17[2].field_0x9 = uVar10;
    pUVar17[2].field_0xa = uVar11;
    pUVar17[2].field_0xb = uVar12;
    pUVar17[2].field_0xc = uVar13;
    pUVar17[2].field_0xd = uVar14;
    pUVar17[2].field_0xe = uVar15;
    pUVar17[2].field_0xf = uVar16;
    uVar2 = puVar18[0x61];
    uVar3 = puVar18[0x62];
    uVar4 = puVar18[99];
    uVar5 = puVar18[100];
    uVar6 = puVar18[0x65];
    uVar7 = puVar18[0x66];
    uVar8 = puVar18[0x67];
    uVar9 = puVar18[0x68];
    uVar10 = puVar18[0x69];
    uVar11 = puVar18[0x6a];
    uVar12 = puVar18[0x6b];
    uVar13 = puVar18[0x6c];
    uVar14 = puVar18[0x6d];
    uVar15 = puVar18[0x6e];
    uVar16 = puVar18[0x6f];
    pUVar17[2].field_0x10 = puVar18[0x60];
    pUVar17[2].field_0x11 = uVar2;
    pUVar17[2].field_0x12 = uVar3;
    pUVar17[2].field_0x13 = uVar4;
    pUVar17[2].field_0x14 = uVar5;
    pUVar17[2].field_0x15 = uVar6;
    pUVar17[2].field_0x16 = uVar7;
    pUVar17[2].field_0x17 = uVar8;
    pUVar17[2].field_0x18 = uVar9;
    pUVar17[2].field_0x19 = uVar10;
    pUVar17[2].field_0x1a = uVar11;
    pUVar17[2].field_0x1b = uVar12;
    pUVar17[2].field_0x1c = uVar13;
    pUVar17[2].field_0x1d = uVar14;
    pUVar17[2].field_0x1e = uVar15;
    pUVar17[2].field_0x1f = uVar16;
    uVar2 = puVar18[0x71];
    uVar3 = puVar18[0x72];
    uVar4 = puVar18[0x73];
    uVar5 = puVar18[0x74];
    uVar6 = puVar18[0x75];
    uVar7 = puVar18[0x76];
    uVar8 = puVar18[0x77];
    uVar9 = puVar18[0x78];
    uVar10 = puVar18[0x79];
    uVar11 = puVar18[0x7a];
    uVar12 = puVar18[0x7b];
    uVar13 = puVar18[0x7c];
    uVar14 = puVar18[0x7d];
    uVar15 = puVar18[0x7e];
    uVar16 = puVar18[0x7f];
    pUVar17[2].field_0x20 = puVar18[0x70];
    pUVar17[2].field_0x21 = uVar2;
    pUVar17[2].field_0x22 = uVar3;
    pUVar17[2].field_0x23 = uVar4;
    pUVar17[2].field_0x24 = uVar5;
    pUVar17[2].field_0x25 = uVar6;
    pUVar17[2].field_0x26 = uVar7;
    pUVar17[2].field_0x27 = uVar8;
    pUVar17[3].field_0x0 = uVar9;
    pUVar17[3].field_0x1 = uVar10;
    pUVar17[3].field_0x2 = uVar11;
    pUVar17[3].field_0x3 = uVar12;
    pUVar17[3].field_0x4 = uVar13;
    pUVar17[3].field_0x5 = uVar14;
    pUVar17[3].field_0x6 = uVar15;
    pUVar17[3].field_0x7 = uVar16;
    lVar19 = lVar19 + -1;
    pUVar17 = (UObject *)&pUVar17[3].field_0x8;
    puVar18 = puVar18 + 0x80;
  } while (lVar19 != 0);
  return;
}

// execSetFocus @ 146aa8440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetInteractionComponent::execSetFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UWidget *this;
  bool bVar3;
  FSlateApplication *this_00;
  TSharedPtr<SWidget,1> *pTVar4;
  UWidget *local_res8;
  TSharedPtr<SWidget,1> local_18;
  
  local_res8 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  this = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xf].field_0x10 != 0) {
    this_00 = FSlateApplication::Get();
    pTVar4 = UWidget::GetCachedWidget(this,&local_18);
    if (*(longlong *)&param_1[0xf].field_0x10 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FSlateApplication::SetUserFocus
              (this_00,*(uint *)(*(longlong *)&param_1[0xf].field_0x10 + 8),pTVar4,SetDirectly);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

