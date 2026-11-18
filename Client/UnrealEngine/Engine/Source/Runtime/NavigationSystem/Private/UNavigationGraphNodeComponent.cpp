// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 7

// StaticClass @ 146d63940

UClass * __cdecl UNavigationGraphNodeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationGraphNodeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationGraphNodeComponent",
               &Z_Registration_Info_UClass_UNavigationGraphNodeComponent.InnerSingleton,
               StaticRegisterNativesUNavigationGraphNodeComponent,0x280,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationGraphNodeComponent>,
               InternalVTableHelperCtorCaller<UNavigationGraphNodeComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationGraphNodeComponent.InnerSingleton;
}

// UNavigationGraphNodeComponent @ 146d76290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavigationGraphNodeComponent * __thiscall
UNavigationGraphNodeComponent::UNavigationGraphNodeComponent
          (UNavigationGraphNodeComponent *this,FVTableHelper *param_1)

{
  int *piVar1;
  TArray<FNavGraphEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  pTVar2 = &(this->Node).Edges;
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Node).Owner.field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  piVar1 = &(this->Node).Edges.ArrayMax;
  (this->Node).Edges.ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,4,&pTVar2->AllocatorInstance,0,piVar1);
  (this->NextNodeComponent).field0_0x0.DebugPtr = (UNavigationGraphNodeComponent *)0x0;
  (this->PrevNodeComponent).field0_0x0.DebugPtr = (UNavigationGraphNodeComponent *)0x0;
  return this;
}

// UNavigationGraphNodeComponent @ 146d76320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavigationGraphNodeComponent * __thiscall
UNavigationGraphNodeComponent::UNavigationGraphNodeComponent
          (UNavigationGraphNodeComponent *this,FObjectInitializer *param_1)

{
  int *piVar1;
  TArray<FNavGraphEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  pTVar2 = &(this->Node).Edges;
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Node).Owner.field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  piVar1 = &(this->Node).Edges.ArrayMax;
  (this->Node).Edges.ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,4,&pTVar2->AllocatorInstance,0,piVar1);
  (this->NextNodeComponent).field0_0x0.DebugPtr = (UNavigationGraphNodeComponent *)0x0;
  (this->PrevNodeComponent).field0_0x0.DebugPtr = (UNavigationGraphNodeComponent *)0x0;
  return this;
}

// ~UNavigationGraphNodeComponent @ 146d78d40

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
UNavigationGraphNodeComponent::~UNavigationGraphNodeComponent(UNavigationGraphNodeComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->Node).Edges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// BeginDestroy @ 146d851a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavigationGraphNodeComponent::BeginDestroy(UNavigationGraphNodeComponent *this)

{
  TObjectPtr<UNavigationGraphNodeComponent> *pTVar1;
  UNavigationGraphNodeComponent *pUVar2;
  TObjectPtr<UNavigationGraphNodeComponent> *pTVar3;
  
  USceneComponent::BeginDestroy((USceneComponent *)this);
  pUVar2 = (this->PrevNodeComponent).field0_0x0.DebugPtr;
  pTVar1 = &this->NextNodeComponent;
  if (pUVar2 != (UNavigationGraphNodeComponent *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((pTVar1->field0_0x0).DebugPtr != (UNavigationGraphNodeComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)(pTVar1->field0_0x0).DebugPtr);
    }
    (pUVar2->NextNodeComponent).field0_0x0.DebugPtr =
         (UNavigationGraphNodeComponent *)*(UNavigationGraphNodeComponent **)&pTVar1->field0_0x0;
  }
  pTVar3 = &this->PrevNodeComponent;
  pUVar2 = (pTVar1->field0_0x0).DebugPtr;
  if (pUVar2 != (UNavigationGraphNodeComponent *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((pTVar3->field0_0x0).DebugPtr != (UNavigationGraphNodeComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)(pTVar3->field0_0x0).DebugPtr);
    }
    (pUVar2->PrevNodeComponent).field0_0x0 = pTVar3->field0_0x0;
  }
  (pTVar3->field0_0x0).DebugPtr = (UNavigationGraphNodeComponent *)0x0;
  (pTVar1->field0_0x0).DebugPtr = (UNavigationGraphNodeComponent *)0x0;
  return;
}

// GetPrivateStaticClass @ 146da0970

UClass * __cdecl UNavigationGraphNodeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationGraphNodeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationGraphNodeComponent",
               &Z_Registration_Info_UClass_UNavigationGraphNodeComponent.InnerSingleton,
               StaticRegisterNativesUNavigationGraphNodeComponent,0x280,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavigationGraphNodeComponent>,
               InternalVTableHelperCtorCaller<UNavigationGraphNodeComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationGraphNodeComponent.InnerSingleton;
}

// StaticRegisterNativesUNavigationGraphNodeComponent @ 146dba9d0

void __cdecl UNavigationGraphNodeComponent::StaticRegisterNativesUNavigationGraphNodeComponent(void)

{
  return;
}

