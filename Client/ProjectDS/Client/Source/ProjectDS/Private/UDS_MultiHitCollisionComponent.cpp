// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b4fe4c0

UClass * __cdecl UDS_MultiHitCollisionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultiHitCollisionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultiHitCollisionComponent",
               &Z_Registration_Info_UClass_UDS_MultiHitCollisionComponent.InnerSingleton,
               StaticRegisterNativesUDS_MultiHitCollisionComponent,0x1a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MultiHitCollisionComponent>,
               InternalVTableHelperCtorCaller<UDS_MultiHitCollisionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultiHitCollisionComponent.InnerSingleton;
}

// UDS_MultiHitCollisionComponent @ 14b501a00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_MultiHitCollisionComponent * __thiscall
UDS_MultiHitCollisionComponent::UDS_MultiHitCollisionComponent
          (UDS_MultiHitCollisionComponent *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  puVar1 = &(this->PreviewMesh).SoftObjectPtr.field_0x18;
  this->MultiHitCollisionGroupID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ServerHitCapsuleInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ServerHitCapsuleInfoArray).ArrayNum = 0;
  (this->ServerHitCapsuleInfoArray).ArrayMax = 0;
  (this->HitSphereInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitSphereInfoArray).ArrayNum = 0;
  (this->HitSphereInfoArray).ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->PreviewMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PreviewMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PreviewMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PreviewMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->PreviewAnimSequence).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->PreviewAnimSequence).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->PreviewAnimSequence).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PreviewAnimSequence).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PreviewAnimSequence).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviewMeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviewMeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->PreviewMeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->PreviewMeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviewMeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviewMeshTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->PreviewMeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->PreviewMeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviewMeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviewMeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->PreviewMeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->PreviewMeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  return this;
}

// UDS_MultiHitCollisionComponent @ 14b501b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_MultiHitCollisionComponent * __thiscall
UDS_MultiHitCollisionComponent::UDS_MultiHitCollisionComponent
          (UDS_MultiHitCollisionComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  puVar1 = &(this->PreviewMesh).SoftObjectPtr.field_0x18;
  this->MultiHitCollisionGroupID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ServerHitCapsuleInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->ServerHitCapsuleInfoArray).ArrayNum = 0;
  (this->ServerHitCapsuleInfoArray).ArrayMax = 0;
  (this->HitSphereInfoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitSphereInfoArray).ArrayNum = 0;
  (this->HitSphereInfoArray).ArrayMax = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->PreviewMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PreviewMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PreviewMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PreviewMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->PreviewAnimSequence).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->PreviewAnimSequence).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->PreviewAnimSequence).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PreviewAnimSequence).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PreviewAnimSequence).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviewMeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviewMeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->PreviewMeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->PreviewMeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviewMeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviewMeshTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->PreviewMeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->PreviewMeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviewMeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviewMeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->PreviewMeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->PreviewMeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  return this;
}

// ~UDS_MultiHitCollisionComponent @ 14b502900

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
UDS_MultiHitCollisionComponent::~UDS_MultiHitCollisionComponent
          (UDS_MultiHitCollisionComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->PreviewAnimSequence).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->PreviewMesh).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->HitSphereInfoArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ServerHitCapsuleInfoArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b504e90

UClass * __cdecl UDS_MultiHitCollisionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultiHitCollisionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultiHitCollisionComponent",
               &Z_Registration_Info_UClass_UDS_MultiHitCollisionComponent.InnerSingleton,
               StaticRegisterNativesUDS_MultiHitCollisionComponent,0x1a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MultiHitCollisionComponent>,
               InternalVTableHelperCtorCaller<UDS_MultiHitCollisionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultiHitCollisionComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_MultiHitCollisionComponent @ 14b505bd0

void __cdecl
UDS_MultiHitCollisionComponent::StaticRegisterNativesUDS_MultiHitCollisionComponent(void)

{
  return;
}

// GetHitCollisionTestActor @ 14bc411e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TObjectPtr<AActor> __thiscall
UDS_MultiHitCollisionComponent::GetHitCollisionTestActor(UDS_MultiHitCollisionComponent *this)

{
  TObjectPtr<AActor>_u_0 in_RDX;
  
  (in_RDX.DebugPtr)->_padding_ = 0;
  return (TObjectPtr<AActor>)in_RDX;
}

// GetHitSphereCompList @ 14bc41200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<TObjectPtr<USphereComponent>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MultiHitCollisionComponent::GetHitSphereCompList
          (UDS_MultiHitCollisionComponent *this,
          TArray<TObjectPtr<USphereComponent>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  UClass *pUVar10;
  UClass *local_res8;
  undefined8 *local_28;
  undefined8 local_20;
  
  pUVar8 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (AActor *)this->_padding_;
  if (this_00 == (AActor *)0x0) {
    return __return_storage_ptr__;
  }
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) goto LAB_14bc41293;
  }
  else {
    pUVar10 = pUVar8;
    if (pUVar6 == (UClass *)0x0) goto LAB_14bc41293;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar10 = pUVar8;
  if (pUVar7 != (UClass *)0x0) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar10 = pUVar6;
    }
  }
LAB_14bc41293:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar6;
  if (pUVar10 == pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  iVar2 = (int)local_20;
  puVar1 = local_28 + (int)local_20;
  puVar9 = local_28;
  while( true ) {
    if ((int)local_20 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (puVar9 == puVar1) break;
    pUVar3 = (UObject *)*puVar9;
    if (pUVar3 != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_UDS_MultiHitSphereComponent_NoRegister();
      iVar5 = (int)pUVar10->_padding_;
      if ((iVar5 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar10->_padding_)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
    }
    puVar9 = puVar9 + 1;
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetServerHitCapsuleCompList @ 14bc438c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<TObjectPtr<UCapsuleComponent>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MultiHitCollisionComponent::GetServerHitCapsuleCompList
          (UDS_MultiHitCollisionComponent *this,
          TArray<TObjectPtr<UCapsuleComponent>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  UClass *pUVar10;
  UClass *local_res8;
  undefined8 *local_28;
  undefined8 local_20;
  
  pUVar8 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (AActor *)this->_padding_;
  if (this_00 == (AActor *)0x0) {
    return __return_storage_ptr__;
  }
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) goto LAB_14bc43953;
  }
  else {
    pUVar10 = pUVar8;
    if (pUVar6 == (UClass *)0x0) goto LAB_14bc43953;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar10 = pUVar8;
  if (pUVar7 != (UClass *)0x0) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar10 = pUVar6;
    }
  }
LAB_14bc43953:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar6;
  if (pUVar10 == pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  iVar2 = (int)local_20;
  puVar1 = local_28 + (int)local_20;
  puVar9 = local_28;
  while( true ) {
    if ((int)local_20 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (puVar9 == puVar1) break;
    pUVar3 = (UObject *)*puVar9;
    if (pUVar3 != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_UDS_MultiHitCapsuleComponent_NoRegister();
      iVar5 = (int)pUVar10->_padding_;
      if ((iVar5 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar10->_padding_)) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
    }
    puVar9 = puVar9 + 1;
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetSkeletalMeshComponent @ 14bc43e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkeletalMeshComponent * __thiscall
UDS_MultiHitCollisionComponent::GetSkeletalMeshComponent(UDS_MultiHitCollisionComponent *this)

{
  uchar uVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UObject *pUVar6;
  FWeakObjectPtr *pFVar7;
  USkeletalMeshComponent *pUVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 == (UObject *)0x0) {
    return (USkeletalMeshComponent *)0x0;
  }
  pUVar4 = Z_Construct_UClass_ADS_NPC_NoRegister();
  iVar2 = (int)pUVar4->_padding_;
  if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      != &pUVar4->_padding_)) {
    pUVar6 = (UObject *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  bVar3 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar3) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = (UObject *)0x0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    pUVar5 = (UWorld *)this->_padding_;
    if ((((pUVar5 != (UWorld *)0x0) ||
         (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
         pUVar5 != (UWorld *)0x0)) && (uVar1 = (pUVar5->WorldType).Value, uVar1 != '\x02')) &&
       (uVar1 != '\x04')) {
      pUVar6 = FWeakObjectPtr::Get(&local_res10);
      pFVar7 = (FWeakObjectPtr *)(**(code **)(*(longlong *)&pUVar6[0x11].field_0x18 + 0x80))();
      local_res8 = *pFVar7;
    }
    bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (bVar3) {
      return (USkeletalMeshComponent *)0x0;
    }
    pUVar8 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res8);
    return pUVar8;
  }
  return (USkeletalMeshComponent *)0x0;
}

// HitSphereInfoArrayHovered @ 14bc466d0

void __thiscall
UDS_MultiHitCollisionComponent::HitSphereInfoArrayHovered
          (UDS_MultiHitCollisionComponent *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)(this->HitSphereInfoArray).ArrayNum;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->HitSphereInfoArray).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar4 = (FScriptContainerElement)0x0;
      if (param_1 == uVar5) {
        FVar4 = (FScriptContainerElement)param_2;
      }
      uVar5 = uVar5 + 1;
      (this->HitSphereInfoArray).AllocatorInstance.Data[lVar7 + 0x28] = FVar4;
      lVar7 = lVar7 + 0x50;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  SetHitSphereCompList(this);
  return;
}

// ImportMultiHitCollisionTable @ 14bc467b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_MultiHitCollisionComponent::ImportMultiHitCollisionTable(UDS_MultiHitCollisionComponent *this)

{
  int *piVar1;
  TArray<FDS_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  longlong lVar10;
  UDS_LogManager *pUVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  double dVar15;
  undefined1 auStackY_298 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_258;
  TArray<FString,TSizedDefaultAllocator<32>_> local_248;
  undefined4 local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  double local_228;
  double dStack_220;
  double local_218;
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined2 uStack_20e;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  double dStack_200;
  double dStack_1f8;
  double local_1f0;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pTVar2 = &this->ServerHitCapsuleInfoArray;
  piVar1 = &(this->ServerHitCapsuleInfoArray).ArrayMax;
  (this->ServerHitCapsuleInfoArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar9 = FPaths::ProjectDir(&local_1c8);
  ::FString::Replace(pFVar9,&local_1d8,L"Client/",L"GameDesign/Data/csv/MultiHitCollision.csv",
                     IgnoreCase);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1e8,"");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_1d8.Data.ArrayNum != 0) {
    FVar13.Data = local_1d8.Data.AllocatorInstance.Data;
  }
  bVar5 = FFileHelper::LoadFileToString(&local_1e8,(wchar_t *)FVar13.Data,None,0);
  if (bVar5) {
    local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.ArrayNum = 0;
    local_248.ArrayMax = 0;
    iVar6 = ::FString::ParseIntoArrayLines(&local_1e8,&local_248,true);
    uVar14 = iVar6 - 5;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if (*piVar1 < (int)uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,uVar14,&pTVar2->AllocatorInstance,(this->ServerHitCapsuleInfoArray).ArrayNum
                 ,piVar1);
    }
    uVar14 = 5;
    if (5 < iVar6) {
      do {
        local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_258.ArrayNum = 0;
        local_258.ArrayMax = 0;
        uVar7 = 0;
        if ((int)uVar14 < local_248.ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ::FString::ParseIntoArray
                  ((FString *)(local_248.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10),
                   &local_258,L",",false);
        if (local_258.ArrayNum < 0xb) {
          pUVar11 = UDS_LogManager::GetInst();
          if (pUVar11 != (UDS_LogManager *)0x0) {
            pUVar11 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,
                       "UDS_MultiHitCollisionComponent::ImportMultiHitCollisionTable::<lambda_1>::operator ()"
                       ,0x55,Yes);
            UDS_LogManager::PrintLog
                      (pUVar11,1,Warning,local_158.Ptr,0x1db,
                       L"Invalid MutiHitCollision ColumnIndex!! (%d ~ %d)");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
          DestructItems<FString,int>((FString *)local_258.AllocatorInstance.Data,local_258.ArrayNum)
          ;
          if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.AllocatorInstance.Data);
          }
          break;
        }
        pFVar9 = ::FString::TrimStartAndEnd
                           ((FString *)(local_258.AllocatorInstance.Data + 0x50),&local_1b8);
        if ((pFVar9->Data).ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        iVar8 = _wtoi(pwVar12);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if (iVar8 == this->MultiHitCollisionGroupID) {
          local_228 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_220 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_238 = CONCAT31(local_238._1_3_,1);
          fStack_234 = 0.0;
          fStack_230 = 0.0;
          local_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uStack_210 = 0;
          uStack_20f = 1;
          fStack_20c = 0.0;
          fStack_208 = 0.0;
          local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          dStack_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_1f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          if ((local_258.ArrayNum < 7) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9 = ::FString::TrimStartAndEnd
                             ((FString *)(local_258.AllocatorInstance.Data + 0x60),&local_1a8);
          if ((pFVar9->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          dVar15 = _wtof(pwVar12);
          fStack_234 = (float)dVar15;
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          if ((local_258.ArrayNum < 8) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9 = ::FString::TrimStartAndEnd
                             ((FString *)(local_258.AllocatorInstance.Data + 0x70),&local_198);
          if ((pFVar9->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          dVar15 = _wtof(pwVar12);
          fStack_230 = (float)dVar15;
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if ((local_258.ArrayNum < 9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9 = ::FString::TrimStartAndEnd
                             ((FString *)(local_258.AllocatorInstance.Data + 0x80),&local_188);
          if ((pFVar9->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          FParse::Value(pwVar12,L"\" (X=",&local_228);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if ((local_258.ArrayNum < 10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9 = ::FString::TrimStartAndEnd
                             ((FString *)(local_258.AllocatorInstance.Data + 0x90),&local_178);
          if ((pFVar9->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          FParse::Value(pwVar12,L"Y=",&dStack_220);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if ((local_258.ArrayNum < 0xb) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9 = ::FString::TrimStartAndEnd
                             ((FString *)(local_258.AllocatorInstance.Data + 0xa0),&local_168);
          if ((pFVar9->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
          }
          FParse::Value(pwVar12,L"Z=",&local_218);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          fStack_20c = fStack_234;
          fStack_208 = fStack_230;
          uStack_20f = (undefined1)local_238;
          iVar8 = (this->ServerHitCapsuleInfoArray).ArrayNum;
          dStack_200 = local_228;
          dStack_1f8 = dStack_220;
          local_1f0 = local_218;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->ServerHitCapsuleInfoArray).ArrayNum = iVar8 + 1;
          lVar10 = (longlong)iVar8;
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          *(ulonglong *)(pFVar3 + lVar10 * 0x50) = CONCAT44(fStack_234,local_238);
          *(ulonglong *)(pFVar3 + lVar10 * 0x50 + 8) = CONCAT44(uStack_22c,fStack_230);
          *(double *)(pFVar3 + lVar10 * 0x50 + 0x10) = local_228;
          *(double *)(pFVar3 + lVar10 * 0x50 + 0x10 + 8) = dStack_220;
          *(double *)(pFVar3 + lVar10 * 0x50 + 0x20) = local_218;
          *(ulonglong *)(pFVar3 + lVar10 * 0x50 + 0x20 + 8) =
               CONCAT44(fStack_20c,CONCAT22(uStack_20e,CONCAT11(uStack_20f,uStack_210)));
          *(ulonglong *)(pFVar3 + lVar10 * 0x50 + 0x30) = CONCAT44(uStack_204,fStack_208);
          *(double *)(pFVar3 + lVar10 * 0x50 + 0x30 + 8) = dStack_200;
          *(double *)(pFVar3 + lVar10 * 0x50 + 0x40) = dStack_1f8;
          *(double *)(pFVar3 + lVar10 * 0x50 + 0x40 + 8) = local_1f0;
        }
        DestructItems<FString,int>((FString *)local_258.AllocatorInstance.Data,local_258.ArrayNum);
        if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.AllocatorInstance.Data);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar6);
    }
    DestructItems<FString,int>((FString *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
    if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.AllocatorInstance.Data);
    }
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return;
}

// ImportMultiHitCollisionTableButton @ 14bc46e70

TArray<FDS_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_MultiHitCollisionComponent::ImportMultiHitCollisionTableButton
          (UDS_MultiHitCollisionComponent *this,
          TArray<FDS_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// Init @ 14bc474c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_MultiHitCollisionComponent::Init(UDS_MultiHitCollisionComponent *this)

{
  TRotator<double> *this_00;
  byte *pbVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uchar uVar5;
  int iVar6;
  UObject *pUVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  FColor_u_0 FVar22;
  UClass *pUVar23;
  UWorld *pUVar24;
  UObject *pUVar25;
  FWeakObjectPtr *pFVar26;
  USphereComponent *this_01;
  FPayload *pFVar27;
  TQuat<double> *pTVar28;
  longlong *plVar29;
  ulonglong uVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStackY_1f8 [32];
  undefined1 auStack_1c8 [8];
  UObject *pUStack_1c0;
  FWeakObjectPtr FStack_1b8;
  FWeakObjectPtr FStack_1b0;
  uint uStack_1a8;
  undefined8 uStack_1a0;
  FScriptContainerElement *pFStack_198;
  TVector<double>_u_0 TStack_188;
  undefined1 auStack_168 [16];
  double dStack_158;
  TQuat<double> TStack_148;
  undefined1 auStack_128 [128];
  ulonglong uStack_a8;
  
  uStack_a8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ResetHitSphereCompList(this);
  pUVar7 = (UObject *)this->_padding_;
  if (pUVar7 != (UObject *)0x0) {
    pUVar23 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar6 = (int)pUVar23->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
       (pUVar25 = pUVar7,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
       &pUVar23->_padding_)) {
      pUVar25 = (UObject *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar25 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar25);
    }
    FStack_1b0.ObjectIndex = 0;
    FStack_1b0.ObjectSerialNumber = 0;
    pUStack_1c0 = pUVar25;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar25 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar25);
    }
    FWeakObjectPtr::operator=(&FStack_1b0,(FObjectPtr)&pUStack_1c0);
    bVar21 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&FStack_1b0,(void *)0x0);
    if (!bVar21) {
      FStack_1b8.ObjectIndex = 0;
      FStack_1b8.ObjectSerialNumber = 0;
      pUStack_1c0 = (UObject *)0x0;
      FWeakObjectPtr::operator=(&FStack_1b8,(FObjectPtr)&pUStack_1c0);
      pUVar24 = (UWorld *)this->_padding_;
      if ((((pUVar24 != (UWorld *)0x0) ||
           (pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
           pUVar24 != (UWorld *)0x0)) && (uVar5 = (pUVar24->WorldType).Value, uVar5 != '\x02')) &&
         (uVar5 != '\x04')) {
        pUVar25 = FWeakObjectPtr::Get(&FStack_1b0);
        pFVar26 = (FWeakObjectPtr *)(**(code **)(*(longlong *)&pUVar25[0x11].field_0x18 + 0x80))();
        FStack_1b8 = *pFVar26;
      }
      bVar21 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&FStack_1b8,
                          (void *)0x0);
      fVar19 = __real_40a00000;
      fVar18 = __real_41200000;
      if (!bVar21) {
        uStack_1a8 = (this->HitSphereInfoArray).ArrayNum;
        uVar30 = (ulonglong)(int)uStack_1a8;
        pFStack_198 = (this->HitSphereInfoArray).AllocatorInstance.Data;
        pFVar31 = pFStack_198 + 0x28;
        pFStack_198 = pFStack_198 + uVar30 * 0x50;
        while( true ) {
          pFVar20 = pFStack_198;
          if ((this->HitSphereInfoArray).ArrayNum != (int)uVar30) {
            `TCheckedPointerIterator<FDS_CS_HitSphereInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(auStack_1c8);
          }
          if (pFVar31 + -0x28 == pFVar20) break;
          uStack_1a0 = 0;
          pUStack_1c0 = (UObject *)0x0;
          FObjectInitializer::AssertIfInConstructor
                    (pUVar7,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar23 = Z_Construct_UClass_UDS_MultiHitSphereComponent_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)auStack_128,pUVar23);
          auStack_128._48_8_ = (FObjectInstancingGraph *)0x0;
          auStack_128._56_8_ = (UPackage *)0x0;
          auStack_128._16_4_ = 0;
          auStack_128._20_4_ = 0;
          auStack_128._24_4_ = RF_DuplicateTransient|RF_TextExportTransient|RF_Transient;
          auStack_128._40_8_ = (UObject *)0x0;
          auStack_128[0x20] = false;
          auStack_128._8_8_ = pUVar7;
          this_01 = (USphereComponent *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_128);
          if (auStack_128._64_8_ != 0) {
            plVar29 = (longlong *)(auStack_128 + 0x50);
            if ((longlong *)auStack_128._104_8_ != (longlong *)0x0) {
              plVar29 = (longlong *)auStack_128._104_8_;
            }
            (**(code **)(*plVar29 + 0x10))();
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (USphereComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          auVar36 = ZEXT416((uint)*(float *)(pFVar31 + -0x20));
          USphereComponent::SetSphereRadius(this_01,*(float *)(pFVar31 + -0x20),true);
          pcVar8 = *(code **)(this_01->_padding_ + 0x508);
          pUVar25 = FWeakObjectPtr::Get(&FStack_1b8);
          (*pcVar8)(this_01,pUVar25,&FAttachmentTransformRules::KeepRelativeTransform);
          dVar2 = (double)this_01->_padding_;
          dVar16 = *(double *)(pFVar31 + -0x18);
          dVar17 = *(double *)(pFVar31 + -0x10);
          dVar3 = *(double *)(pFVar31 + -8);
          auVar4._0_8_ = this_01->_padding_;
          auVar4._8_8_ = this_01->_padding_;
          dStack_158 = dVar2;
          pFVar27 = FRotationConversionCache::GetOrCreatePayload
                              ((FRotationConversionCache *)&this_01->_padding_);
          this_00 = &pFVar27->CachedRotator;
          if ((((double)auVar4._0_8_ != (pFVar27->CachedRotator).Pitch) ||
              (auVar14._4_8_ = extraout_XMM0_Qb,
              auVar14._0_4_ = (int)((ulonglong)auVar4._0_8_ >> 0x20),
              auVar35._0_8_ = auVar14._0_8_ << 0x20, auVar35._8_4_ = (int)auVar4._8_8_,
              auVar35._12_4_ = (int)((ulonglong)auVar4._8_8_ >> 0x20),
              auVar35._8_8_ != (pFVar27->CachedRotator).Yaw)) ||
             (dStack_158 != (pFVar27->CachedRotator).Roll)) {
            auVar35 = divpd(auVar4,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
            auVar35 = roundpd(auVar36,auVar35,3);
            auVar36._8_8_ = 0;
            auVar36._0_8_ = dVar2;
            auVar36 = divpd(auVar36,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64)
            ;
            dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
            auVar42._0_8_ = auVar35._0_8_ * dVar9;
            dVar10 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
            auVar42._8_8_ = auVar35._8_8_ * dVar10;
            dVar12 = (double)auVar4._0_8_ - auVar42._0_8_;
            dVar13 = (double)auVar4._8_8_ - auVar42._8_8_;
            auVar36 = roundpd(auVar42,auVar36,3);
            dVar11 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
            auVar37._8_4_ = SUB84(dVar13,0);
            auVar37._0_8_ = dVar12;
            auVar37._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            dVar40 = auVar37._8_8_ + dVar10;
            dVar2 = dVar2 - auVar36._0_8_ * dVar11;
            dVar41 = 0.0 - auVar36._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
            uVar30 = -(ulonglong)(0.0 <= dVar2);
            uVar33 = -(ulonglong)(0.0 <= dVar41);
            auVar44._0_8_ = uVar30 & (ulonglong)dVar2;
            auVar44._8_4_ = (undefined4)(uVar33 & (ulonglong)dVar41);
            auVar44._12_4_ = (undefined4)((uVar33 & (ulonglong)dVar41) >> 0x20);
            uVar32 = -(ulonglong)(0.0 <= dVar12);
            uVar34 = -(ulonglong)(0.0 <= dVar13);
            auVar43._0_8_ = uVar32 & (ulonglong)dVar12;
            auVar43._8_4_ = (undefined4)(uVar34 & (ulonglong)dVar13);
            auVar43._12_4_ = (undefined4)((uVar34 & (ulonglong)dVar13) >> 0x20);
            auVar46._0_4_ = ~(uint)uVar32 & SUB84(dVar12 + dVar9,0);
            auVar46._4_4_ = ~(uint)(uVar32 >> 0x20) & (uint)((ulonglong)(dVar12 + dVar9) >> 0x20);
            auVar46._8_4_ = ~(uint)uVar34 & SUB84(dVar40,0);
            auVar46._12_4_ = ~(uint)(uVar34 >> 0x20) & (uint)((ulonglong)dVar40 >> 0x20);
            auVar38._8_4_ = SUB84(dVar41,0);
            auVar38._0_8_ = dVar2;
            auVar38._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
            dVar41 = auVar38._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
            auVar46 = auVar46 | auVar43;
            auVar47._0_4_ = ~(uint)uVar30 & SUB84(dVar2 + dVar11,0);
            auVar47._4_4_ = ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar11) >> 0x20);
            auVar47._8_4_ = ~(uint)uVar33 & SUB84(dVar41,0);
            auVar47._12_4_ = ~(uint)(uVar33 >> 0x20) & (uint)((ulonglong)dVar41 >> 0x20);
            auVar47 = auVar47 | auVar44;
            uVar32 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar46._0_8_);
            uVar34 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar46._8_8_);
            uVar33 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar47._0_8_);
            auVar45._0_8_ = uVar32 & (ulonglong)(auVar46._0_8_ - dVar9);
            uVar30 = uVar34 & (ulonglong)(auVar46._8_8_ - dVar10);
            auVar45._8_4_ = (undefined4)uVar30;
            auVar45._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar39._0_4_ = ~(uint)uVar32 & auVar46._0_4_;
            auVar39._4_4_ = ~(uint)(uVar32 >> 0x20) & auVar46._4_4_;
            auVar39._8_4_ = ~(uint)uVar34 & auVar46._8_4_;
            auVar39._12_4_ = ~(uint)(uVar34 >> 0x20) & auVar46._12_4_;
            this_00->Pitch = (double)SUB168(auVar45 | auVar39,0);
            this_00->Yaw = (double)SUB168(auVar45 | auVar39,8);
            (pFVar27->CachedRotator).Roll =
                 (double)((ulonglong)(auVar47._0_8_ - dVar11) & uVar33 |
                         CONCAT44(~(uint)(uVar33 >> 0x20) & auVar47._4_4_,
                                  ~(uint)uVar33 & auVar47._0_4_));
            auStack_168 = auVar4;
            pTVar28 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)auStack_168);
            dVar2 = pTVar28->Y;
            (pFVar27->CachedQuat).X = pTVar28->X;
            (pFVar27->CachedQuat).Y = dVar2;
            dVar2 = pTVar28->W;
            (pFVar27->CachedQuat).Z = pTVar28->Z;
            (pFVar27->CachedQuat).W = dVar2;
          }
          TStack_148.X = (pFVar27->CachedQuat).X;
          TStack_148.Y = (pFVar27->CachedQuat).Y;
          TStack_148.Z = (pFVar27->CachedQuat).Z;
          TStack_148.W = (pFVar27->CachedQuat).W;
          TStack_188._s_0.X = dVar16;
          TStack_188._s_0.Y = dVar17;
          TStack_188._s_0.Z = dVar3;
          USceneComponent::SetRelativeLocationAndRotation
                    ((USceneComponent *)this_01,(TVector<double> *)&TStack_188._s_0,&TStack_148,
                     false,(FHitResult *)0x0,None);
          FVar22 = FColor::Red.field0_0x0;
          if (*pFVar31 != (FScriptContainerElement)0x0) {
            FVar22 = FColor::Yellow.field0_0x0;
          }
          *(FColor_u_0 *)&this_01->_padding_ = (FColor_u_0_s_0)FVar22;
          fVar15 = fVar19;
          if (*pFVar31 != (FScriptContainerElement)0x0) {
            fVar15 = fVar18;
          }
          UShapeComponent::SetLineThickness((UShapeComponent *)this_01,fVar15);
          pUVar24 = (UWorld *)this->_padding_;
          if ((((pUVar24 != (UWorld *)0x0) ||
               (pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
               pUVar24 != (UWorld *)0x0)) && (uVar5 = (pUVar24->WorldType).Value, uVar5 != '\x02'))
             && (uVar5 != '\x04')) {
            pbVar1 = (byte *)((longlong)&this_01->_padding_ + 3);
            *pbVar1 = *pbVar1 & 0xfe;
            pbVar1 = (byte *)((longlong)&this_01->_padding_ + 2);
            *pbVar1 = *pbVar1 & 0xf9;
            USceneComponent::SetHiddenInGame((USceneComponent *)this_01,true,DirtyOnly);
            UActorComponent::RegisterComponent((UActorComponent *)this_01);
            (**(code **)(this_01->_padding_ + 1000))(this_01);
          }
          pFVar31 = pFVar31 + 0x50;
          uVar30 = (ulonglong)uStack_1a8;
        }
      }
    }
  }
  return;
}

// IsGame @ 14bc4aa90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UDS_MultiHitCollisionComponent::IsGame(UDS_MultiHitCollisionComponent *this)

{
  uchar uVar1;
  UWorld *pUVar2;
  
  pUVar2 = (UWorld *)this->_padding_;
  if ((pUVar2 == (UWorld *)0x0) &&
     (pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar2 == (UWorld *)0x0)
     ) {
    return false;
  }
  uVar1 = (pUVar2->WorldType).Value;
  if (uVar1 == '\x02') {
    return false;
  }
  return uVar1 != '\x04';
}

// OnComponentCreated @ 14bc4eeb0

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
UDS_MultiHitCollisionComponent::OnComponentCreated(UDS_MultiHitCollisionComponent *this)

{
  uchar uVar1;
  UWorld *pUVar2;
  
  UActorComponent::OnComponentCreated((UActorComponent *)this);
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar2 == (UWorld *)0x0) goto LAB_14bc4eee8;
  }
  uVar1 = (pUVar2->WorldType).Value;
  if ((uVar1 != '\x02') && (uVar1 != '\x04')) {
    return;
  }
LAB_14bc4eee8:
  SetServerHitCapsuleCompList(this);
  SetHitSphereCompList(this);
  return;
}

// OnRegister @ 14bc528e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_MultiHitCollisionComponent::OnRegister(UDS_MultiHitCollisionComponent *this)

{
  int iVar1;
  UObjectBaseUtility *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FUObjectItem *pFVar7;
  FString *pFVar8;
  bool bVar9;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  bVar6 = false;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1544,"UActorComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x608);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1544);
  }
  pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObject::GetDetailedInfo((UObject *)this,&FStack_c8);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60b,L"%s");
    if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this->_padding_,RF_ArchetypeObject|RF_ClassDefaultObject)
  ;
  if (bVar5) {
    UObject::GetDetailedInfo((UObject *)this,&FStack_a8);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this->_padding_,&FStack_b8,(UObject *)0x0,None);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GetOuter()->IsTemplate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60c,L"\'%s\' (%s)");
    if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
    }
    if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar5) {
    UObject::GetDetailedInfo((UObject *)this,&FStack_88);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this->_padding_,&FStack_98,(UObject *)0x0,None);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsTemplate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60d,L"\'%s\' (%s)");
    if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
    }
    if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
      pFVar8 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)this->_padding_,&FStack_68,(UObject *)0x0,None);
      if ((pFVar8->Data).ArrayNum == 0) {
        bVar6 = true;
      }
      else {
        bVar6 = true;
      }
    }
    UObject::GetDetailedInfo((UObject *)this,&FStack_78);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidChecked(this)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60e,L"OnRegister: %s to %s");
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    if ((bVar6) && (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    pUVar2 = (UObjectBaseUtility *)this->_padding_;
    if (pUVar2 != (UObjectBaseUtility *)0x0) {
      UObjectBaseUtility::GetFullName(pUVar2,&FStack_48,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&FStack_58);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPrivate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x610,L"OnRegister: %s to %s");
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if ((pUVar2 != (UObjectBaseUtility *)0x0) &&
       (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->_padding_ & 1) != 0) {
    pUVar2 = (UObjectBaseUtility *)this->_padding_;
    if (pUVar2 != (UObjectBaseUtility *)0x0) {
      UObjectBaseUtility::GetFullName(pUVar2,&FStack_28,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&FStack_38);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x611,L"OnRegister: %s to %s");
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    if ((pUVar2 != (UObjectBaseUtility *)0x0) &&
       (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if (iVar1 != 2) {
    (**(code **)(this->_padding_ + 0x448))(this,0,0);
  }
  if ((this->_padding_ & 0x80000) != 0) {
    lVar3 = this->_padding_;
    bVar6 = UWorld::IsGameWorld((UWorld *)this->_padding_);
    if (((!bVar6) || (lVar3 == 0)) || ((*(byte *)(lVar3 + 0x5c) & 2) != 0)) {
      (**(code **)(this->_padding_ + 0x2b8))(this,1);
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ResetHitSphereCompList @ 14bc5acc0

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
UDS_MultiHitCollisionComponent::ResetHitSphereCompList(UDS_MultiHitCollisionComponent *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  AActor *this_00;
  longlong *plVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  UClass *pUVar10;
  UClass *local_res8;
  longlong *local_18;
  undefined8 local_10;
  
  this_00 = (AActor *)this->_padding_;
  if (this_00 == (AActor *)0x0) {
    return;
  }
  pUVar8 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) goto LAB_14bc5ad47;
  }
  else {
    pUVar10 = pUVar8;
    if (pUVar6 == (UClass *)0x0) goto LAB_14bc5ad47;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar10 = pUVar8;
  if (pUVar7 != (UClass *)0x0) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar10 = pUVar6;
    }
  }
LAB_14bc5ad47:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar6;
  if (pUVar10 == pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  iVar2 = (int)local_10;
  plVar1 = local_18 + (int)local_10;
  plVar9 = local_18;
  while( true ) {
    if ((int)local_10 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (plVar9 == plVar1) break;
    plVar4 = (longlong *)*plVar9;
    if (plVar4 != (longlong *)0x0) {
      pUVar10 = Z_Construct_UClass_UDS_MultiHitSphereComponent_NoRegister();
      iVar3 = (int)pUVar10->_padding_;
      if ((iVar3 <= *(int *)(plVar4[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar10->_padding_)) {
        (**(code **)(*plVar4 + 0x4a0))(plVar4,0);
      }
    }
    plVar9 = plVar9 + 1;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// ResetServerHitCapsuleCompList @ 14bc5af50

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
UDS_MultiHitCollisionComponent::ResetServerHitCapsuleCompList(UDS_MultiHitCollisionComponent *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  AActor *this_00;
  longlong *plVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  UClass *pUVar10;
  UClass *local_res8;
  longlong *local_18;
  undefined8 local_10;
  
  this_00 = (AActor *)this->_padding_;
  if (this_00 == (AActor *)0x0) {
    return;
  }
  pUVar8 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) goto LAB_14bc5afd7;
  }
  else {
    pUVar10 = pUVar8;
    if (pUVar6 == (UClass *)0x0) goto LAB_14bc5afd7;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar10 = pUVar8;
  if (pUVar7 != (UClass *)0x0) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar10 = pUVar6;
    }
  }
LAB_14bc5afd7:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar6;
  if (pUVar10 == pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  iVar2 = (int)local_10;
  plVar1 = local_18 + (int)local_10;
  plVar9 = local_18;
  while( true ) {
    if ((int)local_10 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (plVar9 == plVar1) break;
    plVar4 = (longlong *)*plVar9;
    if (plVar4 != (longlong *)0x0) {
      pUVar10 = Z_Construct_UClass_UDS_MultiHitCapsuleComponent_NoRegister();
      iVar3 = (int)pUVar10->_padding_;
      if ((iVar3 <= *(int *)(plVar4[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar10->_padding_)) {
        (**(code **)(*plVar4 + 0x4a0))(plVar4,0);
      }
    }
    plVar9 = plVar9 + 1;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetHitSphereCompList @ 14bc5f8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_MultiHitCollisionComponent::SetHitSphereCompList(UDS_MultiHitCollisionComponent *this)

{
  TRotator<double> *this_00;
  byte *pbVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uchar uVar5;
  int iVar6;
  UObject *pUVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  FColor_u_0 FVar22;
  UClass *pUVar23;
  UWorld *pUVar24;
  UObject *pUVar25;
  FWeakObjectPtr *pFVar26;
  USphereComponent *this_01;
  FPayload *pFVar27;
  TQuat<double> *pTVar28;
  longlong *plVar29;
  ulonglong uVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [8];
  UObject *local_1c0;
  FWeakObjectPtr local_1b8;
  FWeakObjectPtr local_1b0;
  uint local_1a8;
  undefined8 local_1a0;
  FScriptContainerElement *local_198;
  TVector<double>_u_0 local_188;
  undefined1 local_168 [16];
  double local_158;
  TQuat<double> local_148;
  undefined1 local_128 [128];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ResetHitSphereCompList(this);
  pUVar7 = (UObject *)this->_padding_;
  if (pUVar7 != (UObject *)0x0) {
    pUVar23 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar6 = (int)pUVar23->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
       (pUVar25 = pUVar7,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
       &pUVar23->_padding_)) {
      pUVar25 = (UObject *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar25 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar25);
    }
    local_1b0.ObjectIndex = 0;
    local_1b0.ObjectSerialNumber = 0;
    local_1c0 = pUVar25;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar25 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar25);
    }
    FWeakObjectPtr::operator=(&local_1b0,(FObjectPtr)&local_1c0);
    bVar21 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_1b0,(void *)0x0);
    if (!bVar21) {
      local_1b8.ObjectIndex = 0;
      local_1b8.ObjectSerialNumber = 0;
      local_1c0 = (UObject *)0x0;
      FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_1c0);
      pUVar24 = (UWorld *)this->_padding_;
      if ((((pUVar24 != (UWorld *)0x0) ||
           (pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
           pUVar24 != (UWorld *)0x0)) && (uVar5 = (pUVar24->WorldType).Value, uVar5 != '\x02')) &&
         (uVar5 != '\x04')) {
        pUVar25 = FWeakObjectPtr::Get(&local_1b0);
        pFVar26 = (FWeakObjectPtr *)(**(code **)(*(longlong *)&pUVar25[0x11].field_0x18 + 0x80))();
        local_1b8 = *pFVar26;
      }
      bVar21 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_1b8,
                          (void *)0x0);
      fVar19 = __real_40a00000;
      fVar18 = __real_41200000;
      if (!bVar21) {
        local_1a8 = (this->HitSphereInfoArray).ArrayNum;
        uVar30 = (ulonglong)(int)local_1a8;
        local_198 = (this->HitSphereInfoArray).AllocatorInstance.Data;
        pFVar31 = local_198 + 0x28;
        local_198 = local_198 + uVar30 * 0x50;
        while( true ) {
          pFVar20 = local_198;
          if ((this->HitSphereInfoArray).ArrayNum != (int)uVar30) {
            `TCheckedPointerIterator<FDS_CS_HitSphereInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_1c8);
          }
          if (pFVar31 + -0x28 == pFVar20) break;
          local_1a0 = 0;
          local_1c0 = (UObject *)0x0;
          FObjectInitializer::AssertIfInConstructor
                    (pUVar7,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar23 = Z_Construct_UClass_UDS_MultiHitSphereComponent_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_128,pUVar23);
          local_128._48_8_ = (FObjectInstancingGraph *)0x0;
          local_128._56_8_ = (UPackage *)0x0;
          local_128._16_4_ = 0;
          local_128._20_4_ = 0;
          local_128._24_4_ = RF_DuplicateTransient|RF_TextExportTransient|RF_Transient;
          local_128._40_8_ = (UObject *)0x0;
          local_128[0x20] = false;
          local_128._8_8_ = pUVar7;
          this_01 = (USphereComponent *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
          if (local_128._64_8_ != 0) {
            plVar29 = (longlong *)(local_128 + 0x50);
            if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
              plVar29 = (longlong *)local_128._104_8_;
            }
            (**(code **)(*plVar29 + 0x10))();
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (USphereComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          auVar36 = ZEXT416((uint)*(float *)(pFVar31 + -0x20));
          USphereComponent::SetSphereRadius(this_01,*(float *)(pFVar31 + -0x20),true);
          pcVar8 = *(code **)(this_01->_padding_ + 0x508);
          pUVar25 = FWeakObjectPtr::Get(&local_1b8);
          (*pcVar8)(this_01,pUVar25,&FAttachmentTransformRules::KeepRelativeTransform);
          dVar2 = (double)this_01->_padding_;
          dVar16 = *(double *)(pFVar31 + -0x18);
          dVar17 = *(double *)(pFVar31 + -0x10);
          dVar3 = *(double *)(pFVar31 + -8);
          auVar4._0_8_ = this_01->_padding_;
          auVar4._8_8_ = this_01->_padding_;
          local_158 = dVar2;
          pFVar27 = FRotationConversionCache::GetOrCreatePayload
                              ((FRotationConversionCache *)&this_01->_padding_);
          this_00 = &pFVar27->CachedRotator;
          if ((((double)auVar4._0_8_ != (pFVar27->CachedRotator).Pitch) ||
              (auVar14._4_8_ = extraout_XMM0_Qb,
              auVar14._0_4_ = (int)((ulonglong)auVar4._0_8_ >> 0x20),
              auVar35._0_8_ = auVar14._0_8_ << 0x20, auVar35._8_4_ = (int)auVar4._8_8_,
              auVar35._12_4_ = (int)((ulonglong)auVar4._8_8_ >> 0x20),
              auVar35._8_8_ != (pFVar27->CachedRotator).Yaw)) ||
             (local_158 != (pFVar27->CachedRotator).Roll)) {
            auVar35 = divpd(auVar4,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
            auVar35 = roundpd(auVar36,auVar35,3);
            auVar36._8_8_ = 0;
            auVar36._0_8_ = dVar2;
            auVar36 = divpd(auVar36,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64)
            ;
            dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
            auVar42._0_8_ = auVar35._0_8_ * dVar9;
            dVar10 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
            auVar42._8_8_ = auVar35._8_8_ * dVar10;
            dVar12 = (double)auVar4._0_8_ - auVar42._0_8_;
            dVar13 = (double)auVar4._8_8_ - auVar42._8_8_;
            auVar36 = roundpd(auVar42,auVar36,3);
            dVar11 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
            auVar37._8_4_ = SUB84(dVar13,0);
            auVar37._0_8_ = dVar12;
            auVar37._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            dVar40 = auVar37._8_8_ + dVar10;
            dVar2 = dVar2 - auVar36._0_8_ * dVar11;
            dVar41 = 0.0 - auVar36._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
            uVar30 = -(ulonglong)(0.0 <= dVar2);
            uVar33 = -(ulonglong)(0.0 <= dVar41);
            auVar44._0_8_ = uVar30 & (ulonglong)dVar2;
            auVar44._8_4_ = (undefined4)(uVar33 & (ulonglong)dVar41);
            auVar44._12_4_ = (undefined4)((uVar33 & (ulonglong)dVar41) >> 0x20);
            uVar32 = -(ulonglong)(0.0 <= dVar12);
            uVar34 = -(ulonglong)(0.0 <= dVar13);
            auVar43._0_8_ = uVar32 & (ulonglong)dVar12;
            auVar43._8_4_ = (undefined4)(uVar34 & (ulonglong)dVar13);
            auVar43._12_4_ = (undefined4)((uVar34 & (ulonglong)dVar13) >> 0x20);
            auVar46._0_4_ = ~(uint)uVar32 & SUB84(dVar12 + dVar9,0);
            auVar46._4_4_ = ~(uint)(uVar32 >> 0x20) & (uint)((ulonglong)(dVar12 + dVar9) >> 0x20);
            auVar46._8_4_ = ~(uint)uVar34 & SUB84(dVar40,0);
            auVar46._12_4_ = ~(uint)(uVar34 >> 0x20) & (uint)((ulonglong)dVar40 >> 0x20);
            auVar38._8_4_ = SUB84(dVar41,0);
            auVar38._0_8_ = dVar2;
            auVar38._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
            dVar41 = auVar38._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
            auVar46 = auVar46 | auVar43;
            auVar47._0_4_ = ~(uint)uVar30 & SUB84(dVar2 + dVar11,0);
            auVar47._4_4_ = ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar11) >> 0x20);
            auVar47._8_4_ = ~(uint)uVar33 & SUB84(dVar41,0);
            auVar47._12_4_ = ~(uint)(uVar33 >> 0x20) & (uint)((ulonglong)dVar41 >> 0x20);
            auVar47 = auVar47 | auVar44;
            uVar32 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar46._0_8_);
            uVar34 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar46._8_8_);
            uVar33 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar47._0_8_);
            auVar45._0_8_ = uVar32 & (ulonglong)(auVar46._0_8_ - dVar9);
            uVar30 = uVar34 & (ulonglong)(auVar46._8_8_ - dVar10);
            auVar45._8_4_ = (undefined4)uVar30;
            auVar45._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar39._0_4_ = ~(uint)uVar32 & auVar46._0_4_;
            auVar39._4_4_ = ~(uint)(uVar32 >> 0x20) & auVar46._4_4_;
            auVar39._8_4_ = ~(uint)uVar34 & auVar46._8_4_;
            auVar39._12_4_ = ~(uint)(uVar34 >> 0x20) & auVar46._12_4_;
            this_00->Pitch = (double)SUB168(auVar45 | auVar39,0);
            this_00->Yaw = (double)SUB168(auVar45 | auVar39,8);
            (pFVar27->CachedRotator).Roll =
                 (double)((ulonglong)(auVar47._0_8_ - dVar11) & uVar33 |
                         CONCAT44(~(uint)(uVar33 >> 0x20) & auVar47._4_4_,
                                  ~(uint)uVar33 & auVar47._0_4_));
            local_168 = auVar4;
            pTVar28 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_168);
            dVar2 = pTVar28->Y;
            (pFVar27->CachedQuat).X = pTVar28->X;
            (pFVar27->CachedQuat).Y = dVar2;
            dVar2 = pTVar28->W;
            (pFVar27->CachedQuat).Z = pTVar28->Z;
            (pFVar27->CachedQuat).W = dVar2;
          }
          local_148.X = (pFVar27->CachedQuat).X;
          local_148.Y = (pFVar27->CachedQuat).Y;
          local_148.Z = (pFVar27->CachedQuat).Z;
          local_148.W = (pFVar27->CachedQuat).W;
          local_188._s_0.X = dVar16;
          local_188._s_0.Y = dVar17;
          local_188._s_0.Z = dVar3;
          USceneComponent::SetRelativeLocationAndRotation
                    ((USceneComponent *)this_01,(TVector<double> *)&local_188._s_0,&local_148,false,
                     (FHitResult *)0x0,None);
          FVar22 = FColor::Red.field0_0x0;
          if (*pFVar31 != (FScriptContainerElement)0x0) {
            FVar22 = FColor::Yellow.field0_0x0;
          }
          *(FColor_u_0 *)&this_01->_padding_ = (FColor_u_0_s_0)FVar22;
          fVar15 = fVar19;
          if (*pFVar31 != (FScriptContainerElement)0x0) {
            fVar15 = fVar18;
          }
          UShapeComponent::SetLineThickness((UShapeComponent *)this_01,fVar15);
          pUVar24 = (UWorld *)this->_padding_;
          if ((((pUVar24 != (UWorld *)0x0) ||
               (pUVar24 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
               pUVar24 != (UWorld *)0x0)) && (uVar5 = (pUVar24->WorldType).Value, uVar5 != '\x02'))
             && (uVar5 != '\x04')) {
            pbVar1 = (byte *)((longlong)&this_01->_padding_ + 3);
            *pbVar1 = *pbVar1 & 0xfe;
            pbVar1 = (byte *)((longlong)&this_01->_padding_ + 2);
            *pbVar1 = *pbVar1 & 0xf9;
            USceneComponent::SetHiddenInGame((USceneComponent *)this_01,true,DirtyOnly);
            UActorComponent::RegisterComponent((UActorComponent *)this_01);
            (**(code **)(this_01->_padding_ + 1000))(this_01);
          }
          pFVar31 = pFVar31 + 0x50;
          uVar30 = (ulonglong)local_1a8;
        }
      }
    }
  }
  return;
}

// SetServerHitCapsuleCompList @ 14bc64240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_MultiHitCollisionComponent::SetServerHitCapsuleCompList(UDS_MultiHitCollisionComponent *this)

{
  TRotator<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uchar uVar5;
  int iVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [12];
  float fVar17;
  float fVar18;
  bool bVar19;
  FColor_u_0 FVar20;
  UWorld *pUVar21;
  UClass *pUVar22;
  UObject *pUVar23;
  FWeakObjectPtr *pFVar24;
  UCapsuleComponent *this_01;
  FPayload *pFVar25;
  TQuat<double> *pTVar26;
  longlong *plVar27;
  FScriptContainerElement *pFVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStackY_208 [32];
  undefined1 local_1d8 [8];
  UObject *local_1d0;
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  TVector<double>_u_0 local_1a8;
  undefined1 local_188 [16];
  double local_178;
  TQuat<double> local_168;
  double local_138;
  undefined1 local_128 [128];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pUVar21 = (UWorld *)this->_padding_;
  if ((((pUVar21 == (UWorld *)0x0) &&
       (pUVar21 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar21 == (UWorld *)0x0)) || (uVar5 = (pUVar21->WorldType).Value, uVar5 == '\x02')) ||
     (uVar5 == '\x04')) {
    ResetServerHitCapsuleCompList(this);
    pUVar7 = (UObject *)this->_padding_;
    if (pUVar7 != (UObject *)0x0) {
      pUVar22 = Z_Construct_UClass_ADS_NPC_NoRegister();
      iVar6 = (int)pUVar22->_padding_;
      if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar6) ||
         (pUVar23 = pUVar7,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
         &pUVar22->_padding_)) {
        pUVar23 = (UObject *)0x0;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar23);
      }
      local_1c0.ObjectIndex = 0;
      local_1c0.ObjectSerialNumber = 0;
      local_1d0 = pUVar23;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar23);
      }
      FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_1d0);
      bVar19 = TWeakObjectPtr<ADS_NPC,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<ADS_NPC,FWeakObjectPtr> *)&local_1c0,(void *)0x0);
      if (!bVar19) {
        local_1c8.ObjectIndex = 0;
        local_1c8.ObjectSerialNumber = 0;
        local_1d0 = (UObject *)0x0;
        FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_1d0);
        pUVar21 = (UWorld *)this->_padding_;
        if ((((pUVar21 != (UWorld *)0x0) ||
             (pUVar21 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
             pUVar21 != (UWorld *)0x0)) && (uVar5 = (pUVar21->WorldType).Value, uVar5 != '\x02')) &&
           (uVar5 != '\x04')) {
          pUVar23 = FWeakObjectPtr::Get(&local_1c0);
          pFVar24 = (FWeakObjectPtr *)(**(code **)(*(longlong *)&pUVar23[0x11].field_0x18 + 0x80))()
          ;
          local_1c8 = *pFVar24;
        }
        bVar19 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_1c8,
                            (void *)0x0);
        fVar18 = __real_40a00000;
        fVar17 = __real_41200000;
        if (!bVar19) {
          pFVar8 = (this->ServerHitCapsuleInfoArray).AllocatorInstance.Data;
          iVar6 = (this->ServerHitCapsuleInfoArray).ArrayNum;
          pFVar28 = pFVar8 + 8;
          while( true ) {
            if ((this->ServerHitCapsuleInfoArray).ArrayNum != iVar6) {
              `TCheckedPointerIterator<FDS_CS_ServerHitCapsuleInfo,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1d8);
            }
            if (pFVar28 + -8 == pFVar8 + (longlong)iVar6 * 0x50) break;
            if (pFVar28[-8] == (FScriptContainerElement)0x0) {
LAB_14bc6473a:
              pFVar28 = pFVar28 + 0x50;
            }
            else {
              local_1b8 = 0;
              local_1b0 = 0;
              FObjectInitializer::AssertIfInConstructor
                        (pUVar7,
                         L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                        );
              pUVar22 = Z_Construct_UClass_UDS_MultiHitCapsuleComponent_NoRegister();
              FStaticConstructObjectParameters::FStaticConstructObjectParameters
                        ((FStaticConstructObjectParameters *)local_128,pUVar22);
              local_128._48_8_ = (FObjectInstancingGraph *)0x0;
              local_128._56_8_ = (UPackage *)0x0;
              local_128._16_4_ = 0;
              local_128._20_4_ = 0;
              local_128._24_4_ = RF_DuplicateTransient|RF_TextExportTransient|RF_Transient;
              local_128._40_8_ = (UObject *)0x0;
              local_128[0x20] = false;
              local_128._8_8_ = pUVar7;
              this_01 = (UCapsuleComponent *)
                        StaticConstructObject_Internal
                                  ((FStaticConstructObjectParameters *)local_128);
              if (local_128._64_8_ != 0) {
                plVar27 = (longlong *)(local_128 + 0x50);
                if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
                  plVar27 = (longlong *)local_128._104_8_;
                }
                (**(code **)(*plVar27 + 0x10))();
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this_01 != (UCapsuleComponent *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this_01);
              }
              UCapsuleComponent::SetCapsuleSize
                        (this_01,this_01->CapsuleRadius,*(float *)(pFVar28 + -4),true);
              auVar35 = ZEXT416((uint)*(float *)pFVar28);
              UCapsuleComponent::SetCapsuleSize
                        (this_01,*(float *)pFVar28,this_01->CapsuleHalfHeight,true);
              pcVar9 = *(code **)(this_01->_padding_ + 0x508);
              local_1d0 = (UObject *)0x0;
              pUVar23 = FWeakObjectPtr::Get(&local_1c8);
              (*pcVar9)(this_01,pUVar23,&FAttachmentTransformRules::KeepRelativeTransform);
              local_138 = *(double *)(pFVar28 + 0x18);
              dVar1 = (double)this_01->_padding_;
              dVar2 = *(double *)(pFVar28 + 0x10);
              dVar3 = *(double *)(pFVar28 + 8);
              auVar4._0_8_ = this_01->_padding_;
              auVar4._8_8_ = this_01->_padding_;
              local_178 = dVar1;
              pFVar25 = FRotationConversionCache::GetOrCreatePayload
                                  ((FRotationConversionCache *)&this_01->_padding_);
              this_00 = &pFVar25->CachedRotator;
              if ((((double)auVar4._0_8_ != (pFVar25->CachedRotator).Pitch) ||
                  (auVar16._4_8_ = extraout_XMM0_Qb,
                  auVar16._0_4_ = (int)((ulonglong)auVar4._0_8_ >> 0x20),
                  auVar33._0_8_ = auVar16._0_8_ << 0x20, auVar33._8_4_ = (int)auVar4._8_8_,
                  auVar33._12_4_ = (int)((ulonglong)auVar4._8_8_ >> 0x20),
                  auVar33._8_8_ != (pFVar25->CachedRotator).Yaw)) ||
                 (local_178 != (pFVar25->CachedRotator).Roll)) {
                auVar33 = divpd(auVar4,(undefined1  [16])
                                       GlobalVectorConstants::Double360.XY.m128d_f64);
                auVar33 = roundpd(auVar35,auVar33,3);
                auVar34._8_8_ = 0;
                auVar34._0_8_ = dVar1;
                auVar35 = divpd(auVar34,(undefined1  [16])
                                        GlobalVectorConstants::Double360.ZW.m128d_f64);
                dVar10 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
                auVar41._0_8_ = auVar33._0_8_ * dVar10;
                dVar11 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
                auVar41._8_8_ = auVar33._8_8_ * dVar11;
                dVar40 = (double)auVar4._0_8_ - auVar41._0_8_;
                dVar15 = (double)auVar4._8_8_ - auVar41._8_8_;
                auVar35 = roundpd(auVar41,auVar35,3);
                dVar12 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
                auVar36._8_4_ = SUB84(dVar15,0);
                auVar36._0_8_ = dVar40;
                auVar36._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                dVar39 = auVar36._8_8_ + dVar11;
                dVar1 = dVar1 - auVar35._0_8_ * dVar12;
                dVar13 = 0.0 - auVar35._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
                uVar29 = -(ulonglong)(0.0 <= dVar1);
                uVar31 = -(ulonglong)(0.0 <= dVar13);
                uVar30 = -(ulonglong)(0.0 <= dVar40);
                uVar32 = -(ulonglong)(0.0 <= dVar15);
                auVar43._0_4_ = ~(uint)uVar30 & SUB84(dVar40 + dVar10,0);
                auVar43._4_4_ =
                     ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)(dVar40 + dVar10) >> 0x20);
                auVar43._8_4_ = ~(uint)uVar32 & SUB84(dVar39,0);
                auVar43._12_4_ = ~(uint)(uVar32 >> 0x20) & (uint)((ulonglong)dVar39 >> 0x20);
                auVar14._8_4_ = (int)((ulonglong)dVar15 & uVar32);
                auVar14._0_8_ = (ulonglong)dVar40 & uVar30;
                auVar14._12_4_ = (int)(((ulonglong)dVar15 & uVar32) >> 0x20);
                auVar43 = auVar43 | auVar14;
                auVar37._8_4_ = SUB84(dVar13,0);
                auVar37._0_8_ = dVar1;
                auVar37._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                dVar40 = auVar37._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
                auVar44._0_4_ = ~(uint)uVar29 & SUB84(dVar1 + dVar12,0);
                auVar44._4_4_ =
                     ~(uint)(uVar29 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar12) >> 0x20);
                auVar44._8_4_ = ~(uint)uVar31 & SUB84(dVar40,0);
                auVar44._12_4_ = ~(uint)(uVar31 >> 0x20) & (uint)((ulonglong)dVar40 >> 0x20);
                uVar30 = -(ulonglong)
                          (GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar43._0_8_);
                uVar32 = -(ulonglong)
                          (GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar43._8_8_);
                auVar35._8_4_ = (int)((ulonglong)dVar13 & uVar31);
                auVar35._0_8_ = (ulonglong)dVar1 & uVar29;
                auVar35._12_4_ = (int)(((ulonglong)dVar13 & uVar31) >> 0x20);
                auVar44 = auVar44 | auVar35;
                uVar31 = -(ulonglong)
                          (GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar44._0_8_);
                auVar42._0_8_ = uVar30 & (ulonglong)(auVar43._0_8_ - dVar10);
                uVar29 = uVar32 & (ulonglong)(auVar43._8_8_ - dVar11);
                auVar42._8_4_ = (undefined4)uVar29;
                auVar42._12_4_ = (undefined4)(uVar29 >> 0x20);
                auVar38._0_4_ = ~(uint)uVar30 & auVar43._0_4_;
                auVar38._4_4_ = ~(uint)(uVar30 >> 0x20) & auVar43._4_4_;
                auVar38._8_4_ = ~(uint)uVar32 & auVar43._8_4_;
                auVar38._12_4_ = ~(uint)(uVar32 >> 0x20) & auVar43._12_4_;
                this_00->Pitch = (double)SUB168(auVar42 | auVar38,0);
                this_00->Yaw = (double)SUB168(auVar42 | auVar38,8);
                (pFVar25->CachedRotator).Roll =
                     (double)((ulonglong)(auVar44._0_8_ - dVar12) & uVar31 |
                             CONCAT44(~(uint)(uVar31 >> 0x20) & auVar44._4_4_,
                                      ~(uint)uVar31 & auVar44._0_4_));
                local_188 = auVar4;
                pTVar26 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)local_188)
                ;
                dVar1 = pTVar26->Y;
                (pFVar25->CachedQuat).X = pTVar26->X;
                (pFVar25->CachedQuat).Y = dVar1;
                dVar1 = pTVar26->W;
                (pFVar25->CachedQuat).Z = pTVar26->Z;
                (pFVar25->CachedQuat).W = dVar1;
              }
              local_168.X = (pFVar25->CachedQuat).X;
              local_168.Y = (pFVar25->CachedQuat).Y;
              local_168.Z = (pFVar25->CachedQuat).Z;
              local_168.W = (pFVar25->CachedQuat).W;
              local_1a8._s_0.Z = local_138;
              local_1a8._s_0.X = dVar2;
              local_1a8._s_0.Y = dVar3;
              USceneComponent::SetRelativeLocationAndRotation
                        ((USceneComponent *)this_01,(TVector<double> *)&local_1a8._s_0,&local_168,
                         false,(FHitResult *)0x0,None);
              FVar20 = FColor::Blue.field0_0x0;
              if (pFVar28[0x20] != (FScriptContainerElement)0x0) {
                FVar20 = FColor::Yellow.field0_0x0;
              }
              *(FColor_u_0 *)&this_01->_padding_ = (FColor_u_0_s_0)FVar20;
              if (pFVar28[0x20] == (FScriptContainerElement)0x0) {
                UShapeComponent::SetLineThickness((UShapeComponent *)this_01,fVar18);
                goto LAB_14bc6473a;
              }
              UShapeComponent::SetLineThickness((UShapeComponent *)this_01,fVar17);
              pFVar28 = pFVar28 + 0x50;
            }
          }
        }
      }
    }
  }
  return;
}

