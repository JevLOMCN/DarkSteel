// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 19

// StaticClass @ 14ea714d0

UClass * __cdecl UHoldoutCompositeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoldoutCompositeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CompositeCore",L"HoldoutCompositeComponent",
               &Z_Registration_Info_UClass_UHoldoutCompositeComponent.InnerSingleton,
               StaticRegisterNativesUHoldoutCompositeComponent,0x260,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHoldoutCompositeComponent>,
               InternalVTableHelperCtorCaller<UHoldoutCompositeComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoldoutCompositeComponent.InnerSingleton;
}

// UHoldoutCompositeComponent @ 14ea770d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UHoldoutCompositeComponent * __thiscall
UHoldoutCompositeComponent::UHoldoutCompositeComponent
          (UHoldoutCompositeComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->bIsEnabled = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UHoldoutCompositeComponent @ 14ea77120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UHoldoutCompositeComponent * __thiscall
UHoldoutCompositeComponent::UHoldoutCompositeComponent
          (UHoldoutCompositeComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->bIsEnabled = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  if (UE::CompositeCore::GRegisterPrimitivesOnTick != false) {
    this->field_0x42 = this->field_0x42 | 7;
    this->field_0x99 = this->field_0x99 | 0x80;
    this->field_0x9a = this->field_0x9a | 8;
    this->field_0x40 = 5;
  }
  return this;
}

// ~UHoldoutCompositeComponent @ 14ea776c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UHoldoutCompositeComponent::~UHoldoutCompositeComponent(UHoldoutCompositeComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// BeginDestroy @ 14ea7b5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UHoldoutCompositeComponent::BeginDestroy(UHoldoutCompositeComponent *this)

{
  USceneComponent::BeginDestroy((USceneComponent *)this);
  UnregisterCompositeImpl(this);
  return;
}

// DetachFromComponent @ 14ea7d0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UHoldoutCompositeComponent::DetachFromComponent
          (UHoldoutCompositeComponent *this,FDetachmentTransformRules *param_1)

{
  UnregisterCompositeImpl(this);
  USceneComponent::DetachFromComponent((USceneComponent *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 14ea7ef50

UClass * __cdecl UHoldoutCompositeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHoldoutCompositeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CompositeCore",L"HoldoutCompositeComponent",
               &Z_Registration_Info_UClass_UHoldoutCompositeComponent.InnerSingleton,
               StaticRegisterNativesUHoldoutCompositeComponent,0x260,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHoldoutCompositeComponent>,
               InternalVTableHelperCtorCaller<UHoldoutCompositeComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHoldoutCompositeComponent.InnerSingleton;
}

// IsEnabled @ 14ea80bc0

bool __thiscall UHoldoutCompositeComponent::IsEnabled(UHoldoutCompositeComponent *this)

{
  return this->bIsEnabled;
}

// OnAttachmentChanged @ 14ea80d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UHoldoutCompositeComponent::OnAttachmentChanged(UHoldoutCompositeComponent *this)

{
  USceneComponent *pUVar1;
  UWorld *pUVar2;
  UCompositeCoreSubsystem *this_00;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  UnregisterCompositeImpl(this);
  pUVar1 = *(USceneComponent **)&this->field_0xd0;
  if ((pUVar1 != (USceneComponent *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    UE::CompositeCore::Private::FindPrimitiveComponents(&local_18,pUVar1);
    if ((local_18.ArrayNum != 0) && (this->bIsEnabled != false)) {
      pUVar2 = *(UWorld **)&this->field_0xb0;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      this_00 = UWorld::GetSubsystem<UCompositeCoreSubsystem>(pUVar2);
      UE::CompositeCore::Private::FindPrimitiveComponents
                (&local_28,*(USceneComponent **)&this->field_0xd0);
      if (((this_00 != (UCompositeCoreSubsystem *)0x0) &&
          (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) && (local_28.ArrayNum != 0)) {
        UCompositeCoreSubsystem::RegisterPrimitives(this_00,&local_28);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// OnComponentCreated @ 14ea80e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UHoldoutCompositeComponent::OnComponentCreated(UHoldoutCompositeComponent *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_28;
  
  UActorComponent::OnComponentCreated((UActorComponent *)this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnComponentCreatedDelegate,
             (FWriteAccessScope *)&local_28);
  bVar3 = false;
  OnComponentCreatedDelegate._28_4_ = OnComponentCreatedDelegate._28_4_ + 1;
  uVar7 = OnComponentCreatedDelegate._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnComponentCreatedDelegate._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + OnComponentCreatedDelegate._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnComponentCreatedDelegate._8_8_),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnComponentCreatedDelegate._28_4_ = OnComponentCreatedDelegate._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnComponentCreatedDelegate,
               false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// OnRegister @ 14ea811b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UHoldoutCompositeComponent::OnRegister(UHoldoutCompositeComponent *this)

{
  USceneComponent::OnRegister((USceneComponent *)this);
  if (UE::CompositeCore::GRegisterPrimitivesOnTick == false) {
    RegisterCompositeImpl(this);
    return;
  }
  return;
}

// OnUnregister @ 14ea811e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UHoldoutCompositeComponent::OnUnregister(UHoldoutCompositeComponent *this)

{
  if (!UE::CompositeCore::GRegisterPrimitivesOnTick) {
    UnregisterCompositeImpl(this);
  }
  USceneComponent::OnUnregister((USceneComponent *)this);
  return;
}

// RegisterCompositeImpl @ 14ea81a10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UHoldoutCompositeComponent::RegisterCompositeImpl(UHoldoutCompositeComponent *this)

{
  UWorld *pUVar1;
  UCompositeCoreSubsystem *this_00;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bIsEnabled != false) {
    pUVar1 = *(UWorld **)&this->field_0xb0;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_00 = UWorld::GetSubsystem<UCompositeCoreSubsystem>(pUVar1);
    UE::CompositeCore::Private::FindPrimitiveComponents
              (&local_18,*(USceneComponent **)&this->field_0xd0);
    if (((this_00 != (UCompositeCoreSubsystem *)0x0) &&
        (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) && (local_18.ArrayNum != 0)) {
      UCompositeCoreSubsystem::RegisterPrimitives(this_00,&local_18);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// SetEnabled @ 14ea82680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UHoldoutCompositeComponent::SetEnabled(UHoldoutCompositeComponent *this,bool param_1)

{
  UWorld *pUVar1;
  UCompositeCoreSubsystem *this_00;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (this->bIsEnabled == param_1) {
    return;
  }
  this->bIsEnabled = param_1;
  if (!param_1) {
    UnregisterCompositeImpl(this);
    return;
  }
  if (this->bIsEnabled != false) {
    pUVar1 = *(UWorld **)&this->field_0xb0;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_00 = UWorld::GetSubsystem<UCompositeCoreSubsystem>(pUVar1);
    UE::CompositeCore::Private::FindPrimitiveComponents
              (&TStack_18,*(USceneComponent **)&this->field_0xd0);
    if (((this_00 != (UCompositeCoreSubsystem *)0x0) &&
        (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) && (TStack_18.ArrayNum != 0)) {
      UCompositeCoreSubsystem::RegisterPrimitives(this_00,&TStack_18);
    }
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUHoldoutCompositeComponent @ 14ea83170

void __cdecl UHoldoutCompositeComponent::StaticRegisterNativesUHoldoutCompositeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UHoldoutCompositeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14ea83480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UHoldoutCompositeComponent::TickComponent
          (UHoldoutCompositeComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if (UE::CompositeCore::GRegisterPrimitivesOnTick != false) {
    RegisterCompositeImpl(this);
    return;
  }
  return;
}

// UnregisterCompositeImpl @ 14ea83990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UHoldoutCompositeComponent::UnregisterCompositeImpl(UHoldoutCompositeComponent *this)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  USubsystem *pUVar6;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar3 = *(UWorld **)&this->field_0xb0;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar3 == (UWorld *)0x0) {
      UE::CompositeCore::Private::FindPrimitiveComponents
                (&local_18,*(USceneComponent **)&this->field_0xd0);
      goto LAB_14ea83a76;
    }
  }
  pUVar4 = UCompositeCoreSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14ea839e8;
LAB_14ea83a16:
    pUVar4 = (UClass *)0x0;
  }
  else {
    if (pUVar4 == (UClass *)0x0) goto LAB_14ea83a16;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14ea839e8:
    pUVar5 = UCompositeCoreSubsystem::StaticClass();
    if (pUVar5 == (UClass *)0x0) goto LAB_14ea83a16;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14ea83a16;
  }
  pUVar6 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  UE::CompositeCore::Private::FindPrimitiveComponents
            (&local_18,*(USceneComponent **)&this->field_0xd0);
  if ((((pUVar6 != (USubsystem *)0x0) && (((uint)pUVar6->_padding_ >> 0x1e & 1) == 0)) &&
      (local_18.ArrayNum != 0)) &&
     ((FCompositeCoreSceneViewExtension *)pUVar6[1]._padding_ !=
      (FCompositeCoreSceneViewExtension *)0x0)) {
    FCompositeCoreSceneViewExtension::UnregisterPrimitives_GameThread
              ((FCompositeCoreSceneViewExtension *)pUVar6[1]._padding_,&local_18);
  }
LAB_14ea83a76:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execIsEnabled @ 14ea841c0

void __cdecl
UHoldoutCompositeComponent::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xe].field_0x20;
  return;
}

// execSetEnabled @ 14ea842e0

void __cdecl
UHoldoutCompositeComponent::execSetEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
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
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)param_1[0xe].field_0x20 != bVar2) {
    param_1[0xe].field_0x20 = bVar2;
    if (bVar2) {
      RegisterCompositeImpl((UHoldoutCompositeComponent *)param_1);
      return;
    }
    UnregisterCompositeImpl((UHoldoutCompositeComponent *)param_1);
  }
  return;
}

