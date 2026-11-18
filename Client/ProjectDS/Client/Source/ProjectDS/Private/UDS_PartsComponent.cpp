// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b550fd0

UClass * __cdecl UDS_PartsComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartsComponent",
               &Z_Registration_Info_UClass_UDS_PartsComponent.InnerSingleton,
               StaticRegisterNativesUDS_PartsComponent,0x280,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PartsComponent>,
               InternalVTableHelperCtorCaller<UDS_PartsComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartsComponent.InnerSingleton;
}

// UDS_PartsComponent @ 14b551c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_PartsComponent * __thiscall
UDS_PartsComponent::UDS_PartsComponent(UDS_PartsComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->StaticMeshComp).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->MeshPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MeshPath).AssetPath.PackageName.Number = 0;
  (this->MeshPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MeshPath).AssetPath.AssetName.Number = 0;
  (this->MeshPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshPath).SubPathString.Data.ArrayNum = 0;
  (this->MeshPath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// ~UDS_PartsComponent @ 14b551d90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_PartsComponent::~UDS_PartsComponent(UDS_PartsComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->MeshPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b5524a0

UClass * __cdecl UDS_PartsComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartsComponent",
               &Z_Registration_Info_UClass_UDS_PartsComponent.InnerSingleton,
               StaticRegisterNativesUDS_PartsComponent,0x280,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PartsComponent>,
               InternalVTableHelperCtorCaller<UDS_PartsComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartsComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_PartsComponent @ 14b5533a0

void __cdecl UDS_PartsComponent::StaticRegisterNativesUDS_PartsComponent(void)

{
  return;
}

// UDS_PartsComponent @ 14bc2b4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_PartsComponent * __thiscall UDS_PartsComponent::UDS_PartsComponent(UDS_PartsComponent *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  USceneComponent::USceneComponent((USceneComponent *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->StaticMeshComp).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->MeshPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MeshPath).AssetPath.PackageName.Number = 0;
  (this->MeshPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MeshPath).AssetPath.AssetName.Number = 0;
  (this->MeshPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshPath).SubPathString.Data.ArrayNum = 0;
  (this->MeshPath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// BeginPlay @ 14bc2e580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_PartsComponent::BeginPlay(UDS_PartsComponent *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_PartsComponent *local_res8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  undefined1 local_40 [16];
  undefined8 local_30;
  FDelegateAllocation *local_28;
  undefined8 local_20;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  local_78 = OnMeshLoaded;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  uStack_70 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PartsComponent____A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_PartsComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_PartsComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = local_78;
    puVar1[5] = CONCAT44(uStack_6c,uStack_70);
  }
  if (local_30._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_40._8_8_,(FDestructionSentinel *)local_40);
  }
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_28 = (FDelegateAllocation *)0x0;
  local_40._0_8_ = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_40._8_8_ = (TReferenceControllerBase<1> *)0x0;
  pTVar3 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                     ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                       *)&local_78,
                      (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                       *)local_58);
  FSoftObjectPath::LoadAsync(&this->MeshPath,pTVar3,(FLoadAssetAsyncOptionalParams *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
               (FDestructionSentinel *)&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// EndPlay @ 14bc3a560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_PartsComponent::EndPlay(UDS_PartsComponent *this,Type param_1)

{
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  return;
}

// OnMeshLoaded @ 14bc4ff90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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
UDS_PartsComponent::OnMeshLoaded(UDS_PartsComponent *this,FSoftObjectPath *param_1,UObject *param_2)

{
  byte *pbVar1;
  int iVar2;
  UClass *pUVar3;
  USkeletalMeshComponent *pUVar4;
  UStaticMeshComponent *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) {
      if ((this->SkeletalMeshComp).field0_0x0.DebugPtr == (USkeletalMeshComponent *)0x0) {
        local_b0 = 0;
        local_b8 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
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
        pUVar4 = (USkeletalMeshComponent *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
        if (local_a8._64_8_ != 0) {
          plVar6 = (longlong *)(local_a8 + 0x50);
          if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
            plVar6 = (longlong *)local_a8._104_8_;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (USkeletalMeshComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        (this->SkeletalMeshComp).field0_0x0.DebugPtr = pUVar4;
        pbVar1 = (byte *)((longlong)&pUVar4->_padding_ + 3);
        *pbVar1 = *pbVar1 & 0xfe;
        local_b8 = 0;
        *(undefined1 *)((longlong)&((this->SkeletalMeshComp).field0_0x0.DebugPtr)->_padding_ + 4) =
             0;
        pUVar4 = (this->SkeletalMeshComp).field0_0x0.DebugPtr;
        (**(code **)(pUVar4->_padding_ + 0x508))
                  (pUVar4,this,&FAttachmentTransformRules::KeepRelativeTransform,0);
        UActorComponent::RegisterComponent
                  ((UActorComponent *)(this->SkeletalMeshComp).field0_0x0.DebugPtr);
        (**(code **)(((this->SkeletalMeshComp).field0_0x0.DebugPtr)->_padding_ + 1000))();
      }
      pUVar4 = (this->SkeletalMeshComp).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0xb48))(pUVar4,param_2,1);
      return;
    }
  }
  if (param_2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) {
      if ((this->StaticMeshComp).field0_0x0.DebugPtr == (UStaticMeshComponent *)0x0) {
        local_b8 = 0;
        local_b0 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
        pUVar5 = (UStaticMeshComponent *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
        if (local_a8._64_8_ != 0) {
          plVar6 = (longlong *)(local_a8 + 0x50);
          if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
            plVar6 = (longlong *)local_a8._104_8_;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UStaticMeshComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        (this->StaticMeshComp).field0_0x0.DebugPtr = pUVar5;
        pbVar1 = (byte *)((longlong)&pUVar5->_padding_ + 3);
        *pbVar1 = *pbVar1 & 0xfe;
        pUVar5 = (this->StaticMeshComp).field0_0x0.DebugPtr;
        local_b8 = 0;
        (**(code **)(pUVar5->_padding_ + 0x508))
                  (pUVar5,this,&FAttachmentTransformRules::KeepRelativeTransform,0);
        UActorComponent::RegisterComponent
                  ((UActorComponent *)(this->StaticMeshComp).field0_0x0.DebugPtr);
        (**(code **)(((this->StaticMeshComp).field0_0x0.DebugPtr)->_padding_ + 1000))();
      }
      pUVar5 = (this->StaticMeshComp).field0_0x0.DebugPtr;
      (**(code **)(pUVar5->_padding_ + 0xb28))(pUVar5,param_2);
    }
  }
  return;
}

