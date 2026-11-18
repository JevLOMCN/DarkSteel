// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 24

// StaticClass @ 14cf2f540

UClass * __cdecl UARComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARComponent",
               &Z_Registration_Info_UClass_UARComponent.InnerSingleton,
               StaticRegisterNativesUARComponent,0x2e0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARComponent>,InternalVTableHelperCtorCaller<UARComponent>,
               local_res8,USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARComponent.InnerSingleton;
}

// UARComponent @ 14cf40d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARComponent * __thiscall UARComponent::UARComponent(UARComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->bUseDefaultReplication = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->NativeID).A = 0;
  (this->NativeID).B = 0;
  (this->NativeID).C = 0;
  (this->NativeID).D = 0;
  *(undefined8 *)&this->OnMRMeshCreated = 0;
  *(undefined8 *)&(this->OnMRMeshCreated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMRMeshCreated).field_0x10 = 0;
  *(undefined8 *)&this->OnMRMeshDestroyed = 0;
  *(undefined8 *)&(this->OnMRMeshDestroyed).field_0x8 = 0;
  *(undefined8 *)&(this->OnMRMeshDestroyed).field_0x10 = 0;
  (this->DefaultMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MRMeshComponent).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  (this->MyTrackedGeometry).field0_0x0.DebugPtr = (UARTrackedGeometry *)0x0;
  this->bInDebugMode = false;
  *(undefined8 *)&(this->OnMRMeshCreated).field_0x18 = 2;
  *(undefined8 *)&(this->OnMRMeshDestroyed).field_0x18 = 2;
  this->bFirstUpdate = true;
  this->bIsRemoved = false;
  return this;
}

// UARComponent @ 14cf40e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARComponent * __thiscall UARComponent::UARComponent(UARComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  USceneComponent::USceneComponent((USceneComponent *)this,pFVar2);
  this->bUseDefaultReplication = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->OnMRMeshCreated).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->OnMRMeshDestroyed).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->NativeID).A = 0;
  (this->NativeID).B = 0;
  (this->NativeID).C = 0;
  (this->NativeID).D = 0;
  *(undefined8 *)&this->OnMRMeshCreated = 0;
  *(undefined8 *)&(this->OnMRMeshCreated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMRMeshCreated).field_0x10 = 0;
  *(undefined8 *)&this->OnMRMeshDestroyed = 0;
  *(undefined8 *)&(this->OnMRMeshDestroyed).field_0x8 = 0;
  *(undefined8 *)&(this->OnMRMeshDestroyed).field_0x10 = 0;
  (this->DefaultMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MRMeshComponent).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  (this->MyTrackedGeometry).field0_0x0.DebugPtr = (UARTrackedGeometry *)0x0;
  this->bInDebugMode = false;
  this->bFirstUpdate = true;
  this->bIsRemoved = false;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  return this;
}

// ~UARComponent @ 14cf44080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARComponent::~UARComponent(UARComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMRMeshDestroyed).field_0x8,*(int *)&(this->OnMRMeshDestroyed).field_0x10);
  pvVar1 = *(void **)&(this->OnMRMeshDestroyed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMRMeshDestroyed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMRMeshCreated).field_0x8,*(int *)&(this->OnMRMeshCreated).field_0x10);
  pvVar1 = *(void **)&(this->OnMRMeshCreated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMRMeshCreated);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// BeginPlay @ 14cf4aa20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARComponent::BeginPlay(UARComponent *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  UClass *pUVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  FDestructionSentinel local_48 [2];
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  lVar10 = this->_padding_;
  if (lVar10 != 0) {
    pUVar8 = AARActor::StaticClass();
    iVar9 = (int)pUVar8->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar9 * 8)
        == &pUVar8->_padding_)) goto LAB_14cf4aa77;
  }
  lVar10 = 0;
LAB_14cf4aa77:
  uVar3._0_4_ = (this->NativeID).A;
  uVar3._4_4_ = (this->NativeID).B;
  uVar4._0_4_ = (this->NativeID).C;
  uVar4._4_4_ = (this->NativeID).D;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UARLifeCycleComponent::OnSpawnARActorDelegate,(FWriteAccessScope *)local_48);
  bVar5 = false;
  UARLifeCycleComponent::OnSpawnARActorDelegate._28_4_ =
       UARLifeCycleComponent::OnSpawnARActorDelegate._28_4_ + 1;
  iVar9 = UARLifeCycleComponent::OnSpawnARActorDelegate._16_4_ + -1;
  if (-1 < iVar9) {
    lVar11 = (longlong)iVar9 << 4;
    bVar5 = false;
    do {
      if (((int)UARLifeCycleComponent::OnSpawnARActorDelegate._16_4_ <= iVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar11 + 8 + UARLifeCycleComponent::OnSpawnARActorDelegate._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar11 + UARLifeCycleComponent::OnSpawnARActorDelegate._8_8_),
          plVar1 == (longlong *)0x0)) ||
         (local_58 = uVar3, uStack_50 = uVar4,
         cVar7 = (**(code **)(*plVar1 + 0x68))(plVar1,lVar10,this,&local_58), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar11 = lVar11 + -0x10;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  UARLifeCycleComponent::OnSpawnARActorDelegate._28_4_ =
       UARLifeCycleComponent::OnSpawnARActorDelegate._28_4_ + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UARLifeCycleComponent::OnSpawnARActorDelegate,false);
  }
  if (local_48[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48[0].Accessor,local_48);
  }
  return;
}

// GetDebugColor @ 14cf50ad0

FLinearColor * __thiscall
UARComponent::GetDebugColor(UARComponent *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  
  pFVar2 = &FLinearColor::Red;
  if ((this->MyTrackedGeometry).field0_0x0.DebugPtr != (UARTrackedGeometry *)0x0) {
    pFVar2 = &FLinearColor::Green;
  }
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 14cf513a0

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
UARComponent::GetLifetimeReplicatedProps
          (UARComponent *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  USceneComponent::GetLifetimeReplicatedProps((USceneComponent *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,8,L"NativeID",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 14cf540a0

UClass * __cdecl UARComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARComponent",
               &Z_Registration_Info_UClass_UARComponent.InnerSingleton,
               StaticRegisterNativesUARComponent,0x2e0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARComponent>,InternalVTableHelperCtorCaller<UARComponent>,
               local_res8,USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARComponent.InnerSingleton;
}

// ManageMeshComponentForDebugMode @ 14cf58280

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
UARComponent::ManageMeshComponentForDebugMode
          (UARComponent *this,bool param_1,FARSessionPayload *param_2)

{
  TObjectPtr<UMRMeshComponent> *pTVar1;
  UMRMeshComponent *pUVar2;
  UARTrackedGeometry *pUVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pTVar1 = &this->MRMeshComponent;
  if (param_1) {
    if (this->bInDebugMode == false) {
      pUVar2 = (pTVar1->field0_0x0).DebugPtr;
      this->bSavedWireframeMode = pUVar2->bUseWireframe;
      uVar4 = *(undefined8 *)&(pUVar2->WireframeColor).field0_0x0;
      uVar5 = *(undefined8 *)((longlong)&(pUVar2->WireframeColor).field0_0x0 + 8);
      this->bInDebugMode = true;
      *(undefined8 *)&(this->SavedWireframeColor).field0_0x0 = uVar4;
      *(undefined8 *)((longlong)&(this->SavedWireframeColor).field0_0x0 + 8) = uVar5;
    }
    UMRMeshComponent::SetUseWireframe((pTVar1->field0_0x0).DebugPtr,true);
    return;
  }
  if (this->bInDebugMode != false) {
    UMRMeshComponent::SetUseWireframe((pTVar1->field0_0x0).DebugPtr,this->bSavedWireframeMode);
    UMRMeshComponent::SetWireframeColor((pTVar1->field0_0x0).DebugPtr,&this->SavedWireframeColor);
    this->bInDebugMode = false;
  }
  if ((param_2->ConfigFlags & 1) == 0) {
    pUVar3 = (this->MyTrackedGeometry).field0_0x0.DebugPtr;
    if ((pTVar1->field0_0x0).DebugPtr != (UMRMeshComponent *)0x0) {
      TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnMRMeshDestroyed,(pTVar1->field0_0x0).DebugPtr);
      UActorComponent::UnregisterComponent((UActorComponent *)(pTVar1->field0_0x0).DebugPtr);
      (pTVar1->field0_0x0).DebugPtr = (UMRMeshComponent *)0x0;
    }
    if (pUVar3 != (UARTrackedGeometry *)0x0) {
      (pUVar3->UnderlyingMesh).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
    }
  }
  return;
}

// OnRep_Payload @ 14cf58ae0

void __thiscall UARComponent::OnRep_Payload(UARComponent *this)

{
  bool bVar1;
  
  bVar1 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this);
  if (!bVar1) {
    UpdateVisualization(this);
    return;
  }
  return;
}

// OnUnregister @ 14cf59c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARComponent::OnUnregister(UARComponent *this)

{
  UFunction *pUVar1;
  
  if (this->bIsRemoved == false) {
    pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARComponent_ReceiveRemove);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,0);
    this->bIsRemoved = true;
  }
  USceneComponent::OnUnregister((USceneComponent *)this);
  return;
}

// ReceiveRemove @ 14cf5b080

void __thiscall UARComponent::ReceiveRemove(UARComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UARComponent_ReceiveRemove);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014cf5b0ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// Remove @ 14cf5c030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARComponent::Remove(UARComponent *this,UARTrackedGeometry *param_1)

{
  UMRMeshComponent *pUVar1;
  UFunction *pUVar2;
  
  if (this->bIsRemoved == false) {
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UARComponent_ReceiveRemove);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,0);
    this->bIsRemoved = true;
  }
  pUVar1 = (this->MRMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMRMeshComponent *)0x0) {
    TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnMRMeshDestroyed,pUVar1);
    UActorComponent::UnregisterComponent
              ((UActorComponent *)(this->MRMeshComponent).field0_0x0.DebugPtr);
    (this->MRMeshComponent).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  }
  if (param_1 != (UARTrackedGeometry *)0x0) {
    (param_1->UnderlyingMesh).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  }
  return;
}

// RemoveMeshComponent @ 14cf5c510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARComponent::RemoveMeshComponent(UARComponent *this,UARTrackedGeometry *param_1)

{
  UMRMeshComponent *pUVar1;
  
  pUVar1 = (this->MRMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UMRMeshComponent *)0x0) {
    TMulticastDelegate<void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnMRMeshDestroyed,pUVar1);
    UActorComponent::UnregisterComponent
              ((UActorComponent *)(this->MRMeshComponent).field0_0x0.DebugPtr);
    (this->MRMeshComponent).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  }
  if (param_1 != (UARTrackedGeometry *)0x0) {
    (param_1->UnderlyingMesh).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  }
  return;
}

// SetNativeID @ 14cf605c0

void __thiscall UARComponent::SetNativeID(UARComponent *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->NativeID).A = param_1->A;
  (this->NativeID).B = uVar1;
  (this->NativeID).C = uVar2;
  (this->NativeID).D = uVar3;
  return;
}

// StaticRegisterNativesUARComponent @ 14cf60ee0

void __cdecl UARComponent::StaticRegisterNativesUARComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UARComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 14cf63ea0

void __thiscall UARComponent::Update(UARComponent *this,UARTrackedGeometry *param_1)

{
  return;
}

// UpdateVisualization @ 14cf677a0

void __thiscall UARComponent::UpdateVisualization(UARComponent *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UARComponent_UpdateVisualization);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014cf677e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cf677f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x640))(this);
  return;
}

// UpdateVisualization_Implementation @ 14cf67810

void __thiscall UARComponent::UpdateVisualization_Implementation(UARComponent *this)

{
  return;
}

// ValidateGeneratedRepEnums @ 14cf68a40

void __thiscall
UARComponent::ValidateGeneratedRepEnums
          (UARComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_NativeID,L"NativeID");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0x12) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_NativeID != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AugmentedReality\\UHT\\ARComponent.gen.cpp"
                       ,0x59e,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execGetMRMesh @ 14cf6ed30

void __cdecl UARComponent::execGetMRMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x10;
  return;
}

// execOnRep_Payload @ 14cf71240

void __cdecl UARComponent::execOnRep_Payload(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014cf71258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x658))();
  return;
}

// execSetNativeID @ 14cf74210

void __cdecl UARComponent::execSetNativeID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[0xe].field_0x20 = local_18;
  *(undefined8 *)(param_1 + 0xf) = uStack_10;
  return;
}

// execUpdateVisualization @ 14cf75230

void __cdecl UARComponent::execUpdateVisualization(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014cf75248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x640))();
  return;
}

