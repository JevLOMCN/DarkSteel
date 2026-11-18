// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 17

// StaticClass @ 14da48e60

UClass * __cdecl UDynamicWindSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicWindSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DynamicWind",L"DynamicWindSubsystem",
               &Z_Registration_Info_UClass_UDynamicWindSubsystem.InnerSingleton,
               StaticRegisterNativesUDynamicWindSubsystem,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDynamicWindSubsystem>,
               InternalVTableHelperCtorCaller<UDynamicWindSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicWindSubsystem.InnerSingleton;
}

// UDynamicWindSubsystem @ 14da4d440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDynamicWindSubsystem * __thiscall
UDynamicWindSubsystem::UDynamicWindSubsystem(UDynamicWindSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->bInitialized = false;
  this->_padding_ = (longlong)&___7UDynamicWindSubsystem__6B_;
  (this->TransformProvider).Ptr = (FDynamicWindTransformProvider *)0x0;
  (this->TransformProviderId).A = 0;
  (this->TransformProviderId).B = 0;
  (this->TransformProviderId).C = 0;
  (this->TransformProviderId).D = 0;
  (this->OnCreateRenderThreadResources).ID = 0;
  (this->OnDestroyRenderThreadResources).ID = 0;
  return this;
}

// UDynamicWindSubsystem @ 14da4d490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDynamicWindSubsystem * __thiscall
UDynamicWindSubsystem::UDynamicWindSubsystem(UDynamicWindSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->bInitialized = false;
  this->_padding_ = (longlong)&___7UDynamicWindSubsystem__6B_;
  (this->TransformProvider).Ptr = (FDynamicWindTransformProvider *)0x0;
  (this->OnCreateRenderThreadResources).ID = 0;
  (this->OnDestroyRenderThreadResources).ID = 0;
  (this->TransformProviderId).A = 0xdfd4874b;
  (this->TransformProviderId).B = 0xee57466d;
  (this->TransformProviderId).C = 0x883d6419;
  (this->TransformProviderId).D = 0xafe99eac;
  return this;
}

// ~UDynamicWindSubsystem @ 14da4d960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDynamicWindSubsystem::~UDynamicWindSubsystem(UDynamicWindSubsystem *this)

{
  this->_padding_ = (longlong)&___7UDynamicWindSubsystem__6B_;
  TDefaultDelete<FDynamicWindTransformProvider>::operator()
            ((TDefaultDelete<FDynamicWindTransformProvider> *)&this->TransformProvider,
             (this->TransformProvider).Ptr);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// operator() @ 14da4e010

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_1>::operator()
          (void *this,FSkinnedSceneProxy *param_1)

{
  UWorldSubsystem *this_00;
  FSkinningSceneExtensionProxy *pFVar1;
  USkinnedAsset *pUVar2;
  UWorld *pUVar3;
  int *piVar4;
  FName local_res8;
  FString local_18;
  
  this_00 = *(UWorldSubsystem **)this;
  pUVar3 = UWorldSubsystem::GetWorld(this_00);
  if (((*(FSceneInterface **)&param_1->field_0x220 == pUVar3->Scene) &&
      ((((param_1->field_0x78 & 2) != 0 || ((param_1->field_0x7f & 0x20) != 0)) ||
       ((param_1->field_0x7c & 4) != 0)))) &&
     (((pFVar1 = (param_1->SceneExtensionProxy).Ptr, pFVar1 != (FSkinningSceneExtensionProxy *)0x0
       && (piVar4 = (int *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1),
          ((*(int *)((longlong)&this_00[1]._padding_ + 4) == piVar4[3] &&
           (int)this_00[1]._padding_ == piVar4[2]) &&
          *(int *)((longlong)&this_00[1]._padding_ + 4) == piVar4[1]) &&
          (int)this_00[1]._padding_ == *piVar4)) &&
      (pUVar2 = pFVar1->SkinnedAsset, pUVar2 != (USkinnedAsset *)0x0)))) {
    if ((char)this_00[1]._padding_ == '\0') {
      if (5 < (byte)LogDynamicWind._0_1_) {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_res8.Number = *(uint *)&pUVar2->field_0x1c;
        ::FName::ToString(&local_res8,&local_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDynamicWind);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      FDynamicWindTransformProvider::RegisterSceneProxy
                ((FDynamicWindTransformProvider *)this_00[1]._padding_,param_1);
    }
  }
  return;
}

// operator() @ 14da4e140

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UDynamicWindSubsystem::PostInitialize'::__l11::<lambda_2>::operator()
          (void *this,FSkinnedSceneProxy *param_1)

{
  UWorldSubsystem *this_00;
  FSkinningSceneExtensionProxy *pFVar1;
  USkinnedAsset *pUVar2;
  UWorld *pUVar3;
  int *piVar4;
  FName local_res8;
  FString local_18;
  
  this_00 = *(UWorldSubsystem **)this;
  pUVar3 = UWorldSubsystem::GetWorld(this_00);
  if (((*(FSceneInterface **)&param_1->field_0x220 == pUVar3->Scene) &&
      ((((param_1->field_0x78 & 2) != 0 || ((param_1->field_0x7f & 0x20) != 0)) ||
       ((param_1->field_0x7c & 4) != 0)))) &&
     (((pFVar1 = (param_1->SceneExtensionProxy).Ptr, pFVar1 != (FSkinningSceneExtensionProxy *)0x0
       && (piVar4 = (int *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1),
          ((*(int *)((longlong)&this_00[1]._padding_ + 4) == piVar4[3] &&
           (int)this_00[1]._padding_ == piVar4[2]) &&
          *(int *)((longlong)&this_00[1]._padding_ + 4) == piVar4[1]) &&
          (int)this_00[1]._padding_ == *piVar4)) &&
      (pUVar2 = pFVar1->SkinnedAsset, pUVar2 != (USkinnedAsset *)0x0)))) {
    if ((char)this_00[1]._padding_ == '\0') {
      if (5 < (byte)LogDynamicWind._0_1_) {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_res8.Number = *(uint *)&pUVar2->field_0x1c;
        ::FName::ToString(&local_res8,&local_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDynamicWind);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      FDynamicWindTransformProvider::UnregisterSceneProxy
                ((FDynamicWindTransformProvider *)this_00[1]._padding_,param_1);
    }
  }
  return;
}

// GetBlendedWindAmplitude @ 14da4fda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall UDynamicWindSubsystem::GetBlendedWindAmplitude(UDynamicWindSubsystem *this)

{
  FDynamicWindTransformProvider *pFVar1;
  
  pFVar1 = (this->TransformProvider).Ptr;
  if (pFVar1 != (FDynamicWindTransformProvider *)0x0) {
    return pFVar1->BlendedWindAmplitude;
  }
  return __real_bf800000;
}

// GetPrivateStaticClass @ 14da503c0

UClass * __cdecl UDynamicWindSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicWindSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DynamicWind",L"DynamicWindSubsystem",
               &Z_Registration_Info_UClass_UDynamicWindSubsystem.InnerSingleton,
               StaticRegisterNativesUDynamicWindSubsystem,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDynamicWindSubsystem>,
               InternalVTableHelperCtorCaller<UDynamicWindSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicWindSubsystem.InnerSingleton;
}

// PostInitialize @ 14da50e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDynamicWindSubsystem::PostInitialize(UDynamicWindSubsystem *this)

{
  TUniquePtr<FDynamicWindTransformProvider,TDefaultDelete<FDynamicWindTransformProvider>_> *this_00;
  int *piVar1;
  int iVar2;
  FDynamicWindTransformProvider *pFVar3;
  undefined8 *puVar4;
  TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
  *pTVar5;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar6;
  void *pvVar7;
  UWorld *pUVar8;
  FScene *pFVar9;
  FDynamicWindTransformProvider *pFVar10;
  FDelegateHandle FVar11;
  <lambda_1> local_res10;
  TDefaultDelete<FDynamicWindTransformProvider> local_18 [16];
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  pUVar8 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (((pUVar8 != (UWorld *)0x0) && (pUVar8->Scene != (FSceneInterface *)0x0)) &&
     (pFVar9 = (FScene *)(**(code **)(pUVar8->Scene->_padding_ + 0x420))(), pFVar9 != (FScene *)0x0)
     ) {
    pFVar10 = ::operator_new(0x1d0);
    if (pFVar10 == (FDynamicWindTransformProvider *)0x0) {
      pFVar10 = (FDynamicWindTransformProvider *)0x0;
    }
    else {
      pFVar10 = FDynamicWindTransformProvider::FDynamicWindTransformProvider(pFVar10,pFVar9);
    }
    this_00 = &this->TransformProvider;
    if ((TDefaultDelete<FDynamicWindTransformProvider> *)this_00 == local_18) {
      if (pFVar10 != (FDynamicWindTransformProvider *)0x0) {
        puVar4 = *(undefined8 **)&(pFVar10->BoneDataBuffer).field_0x18;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        pTVar5 = (pFVar10->BoneDataUploader).Ptr;
        if (pTVar5 != (TBufferScatterUploader<UE::HLSL::FDynamicWindBoneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                       *)0x0) {
          (**(code **)pTVar5->_padding_)(pTVar5,1);
        }
        FVar6 = (pFVar10->BoneDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FMemory::Free((void *)FVar6);
        }
        FVar6 = (pFVar10->BoneDataAllocator).FreeSpans.AllocatorInstance.SecondaryData;
        if (FVar6 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
          FMemory::Free((void *)FVar6);
        }
        *(undefined4 *)&(pFVar10->SkeletonLookup).field_0x48 = 0;
        pvVar7 = *(void **)&(pFVar10->SkeletonLookup).field_0x40;
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar10->SkeletonLookup);
        ::operator_delete(pFVar10,0x1d0);
      }
    }
    else {
      pFVar3 = this_00->Ptr;
      this_00->Ptr = pFVar10;
      TDefaultDelete<FDynamicWindTransformProvider>::operator()
                ((TDefaultDelete<FDynamicWindTransformProvider> *)this_00,pFVar3);
    }
    FVar11 = TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
             ::AddLambda<_UDynamicWindSubsystem::PostInitialize_::__l11::<lambda_1>_>
                       ((TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
                         *)&Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources,
                        &local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->OnCreateRenderThreadResources).ID = *FVar11.ID;
    FVar11 = TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
             ::AddLambda<_UDynamicWindSubsystem::PostInitialize_::__l11::<lambda_2>_>
                       ((TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
                         *)&Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources,
                        (<lambda_2> *)&local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->OnDestroyRenderThreadResources).ID = *FVar11.ID;
  }
  if ((((this->TransformProvider).Ptr != (FDynamicWindTransformProvider *)0x0) &&
      ((this->OnCreateRenderThreadResources).ID != 0)) &&
     ((this->OnDestroyRenderThreadResources).ID != 0)) {
    this->bInitialized = true;
    return;
  }
  this->bInitialized = false;
  return;
}

// PreDeinitialize @ 14da510d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDynamicWindSubsystem::PreDeinitialize(UDynamicWindSubsystem *this)

{
  ulong64 uVar1;
  FDynamicWindTransformProvider *pFVar2;
  
  uVar1 = (this->OnCreateRenderThreadResources).ID;
  this->bInitialized = false;
  if (uVar1 != 0) {
    TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
    ::Remove((TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
              *)&Nanite::FSkinnedSceneProxyDelegates::OnCreateRenderThreadResources,
             (FDelegateHandle)(this->OnCreateRenderThreadResources).ID);
    (this->OnCreateRenderThreadResources).ID = 0;
  }
  if ((this->OnDestroyRenderThreadResources).ID != 0) {
    TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
    ::Remove((TMulticastDelegateRegistration<void___cdecl(Nanite::FSkinnedSceneProxy_const_*),FDefaultDelegateUserPolicy>
              *)&Nanite::FSkinnedSceneProxyDelegates::OnDestroyRenderThreadResources,
             (FDelegateHandle)(this->OnDestroyRenderThreadResources).ID);
    (this->OnDestroyRenderThreadResources).ID = 0;
  }
  pFVar2 = (this->TransformProvider).Ptr;
  if (pFVar2 != (FDynamicWindTransformProvider *)0x0) {
    (this->TransformProvider).Ptr = (FDynamicWindTransformProvider *)0x0;
    TDefaultDelete<FDynamicWindTransformProvider>::operator()
              ((TDefaultDelete<FDynamicWindTransformProvider> *)&this->TransformProvider,pFVar2);
    return;
  }
  return;
}

// RegisterSceneProxy @ 14da52bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDynamicWindSubsystem::RegisterSceneProxy(UDynamicWindSubsystem *this,FSkinnedSceneProxy *param_1)

{
  FSkinningSceneExtensionProxy *pFVar1;
  USkinnedAsset *pUVar2;
  UWorld *pUVar3;
  uint *puVar4;
  FName local_res10;
  FString local_18;
  
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (((*(FSceneInterface **)&param_1->field_0x220 == pUVar3->Scene) &&
      ((((param_1->field_0x78 & 2) != 0 || ((param_1->field_0x7f & 0x20) != 0)) ||
       ((param_1->field_0x7c & 4) != 0)))) &&
     (((pFVar1 = (param_1->SceneExtensionProxy).Ptr, pFVar1 != (FSkinningSceneExtensionProxy *)0x0
       && (puVar4 = (uint *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1),
          (((this->TransformProviderId).D == puVar4[3] && (this->TransformProviderId).C == puVar4[2]
           ) && (this->TransformProviderId).B == puVar4[1]) &&
          *puVar4 == (this->TransformProviderId).A)) &&
      (pUVar2 = pFVar1->SkinnedAsset, pUVar2 != (USkinnedAsset *)0x0)))) {
    if (this->bInitialized == false) {
      if (5 < (byte)LogDynamicWind._0_1_) {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_res10.Number = *(uint *)&pUVar2->field_0x1c;
        ::FName::ToString(&local_res10,&local_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDynamicWind);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      FDynamicWindTransformProvider::RegisterSceneProxy((this->TransformProvider).Ptr,param_1);
    }
  }
  return;
}

// ShouldCreateSubsystem @ 14da53960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDynamicWindSubsystem::ShouldCreateSubsystem(UDynamicWindSubsystem *this,UObject *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarDynamicWindEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// StaticRegisterNativesUDynamicWindSubsystem @ 14da53b20

void __cdecl UDynamicWindSubsystem::StaticRegisterNativesUDynamicWindSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDynamicWindSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterSceneProxy @ 14da53f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDynamicWindSubsystem::UnregisterSceneProxy(UDynamicWindSubsystem *this,FSkinnedSceneProxy *param_1)

{
  FSkinningSceneExtensionProxy *pFVar1;
  USkinnedAsset *pUVar2;
  UWorld *pUVar3;
  uint *puVar4;
  FName local_res10;
  FString local_18;
  
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (((*(FSceneInterface **)&param_1->field_0x220 == pUVar3->Scene) &&
      ((((param_1->field_0x78 & 2) != 0 || ((param_1->field_0x7f & 0x20) != 0)) ||
       ((param_1->field_0x7c & 4) != 0)))) &&
     (((pFVar1 = (param_1->SceneExtensionProxy).Ptr, pFVar1 != (FSkinningSceneExtensionProxy *)0x0
       && (puVar4 = (uint *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1),
          (((this->TransformProviderId).D == puVar4[3] && (this->TransformProviderId).C == puVar4[2]
           ) && (this->TransformProviderId).B == puVar4[1]) &&
          *puVar4 == (this->TransformProviderId).A)) &&
      (pUVar2 = pFVar1->SkinnedAsset, pUVar2 != (USkinnedAsset *)0x0)))) {
    if (this->bInitialized == false) {
      if (5 < (byte)LogDynamicWind._0_1_) {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
        local_res10.Number = *(uint *)&pUVar2->field_0x1c;
        ::FName::ToString(&local_res10,&local_18);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDynamicWind);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      FDynamicWindTransformProvider::UnregisterSceneProxy((this->TransformProvider).Ptr,param_1);
    }
  }
  return;
}

// UpdateWindParameters @ 14da540d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDynamicWindSubsystem::UpdateWindParameters
          (UDynamicWindSubsystem *this,FDynamicWindParameters *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  FDynamicWindTransformProvider *pFVar7;
  UTexture *pUVar8;
  FCommandList *pFVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  bool bVar16;
  uint uVar17;
  code **ppcVar18;
  FRenderCommandList *this_00;
  FRenderCommandTag *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  FDynamicWindTransformProvider *local_178;
  code *local_168;
  code *pcStack_160;
  code *local_158;
  float local_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  float local_130;
  float local_12c;
  code *local_118;
  code *pcStack_110;
  code *local_108 [2];
  code *local_f8 [3];
  code **local_e0;
  undefined1 local_d8 [40];
  code **local_b0;
  byte local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (this->bInitialized != false) {
    pFVar7 = (this->TransformProvider).Ptr;
    pUVar8 = (param_1->WindTexture).field0_0x0.DebugPtr;
    pcVar10 = (code *)(param_1->SimulationCenter).field0_0x0._s_0.X;
    pcVar11 = (code *)(param_1->SimulationCenter).field0_0x0._s_0.Y;
    pcVar4 = (code *)(param_1->SimulationCenter).field0_0x0._s_0.Z;
    fVar1 = param_1->SimulationExtents;
    pcVar12 = (code *)(param_1->WindDirection).field0_0x0._s_0.X;
    pcVar13 = (code *)(param_1->WindDirection).field0_0x0._s_0.Y;
    pcVar5 = (code *)(param_1->WindDirection).field0_0x0._s_0.Z;
    fVar2 = param_1->WindSpeed;
    fVar3 = param_1->WindAmplitude;
    local_178 = pFVar7;
    local_168 = pcVar10;
    pcStack_160 = pcVar11;
    local_158 = pcVar4;
    local_150 = fVar1;
    local_148 = pcVar12;
    pcStack_140 = pcVar13;
    local_138 = pcVar5;
    local_130 = fVar2;
    local_12c = fVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar8 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    pcVar14 = *(code **)&(param_1->DebugModulation).field0_0x0;
    pcVar15 = *(code **)((longlong)&(param_1->DebugModulation).field0_0x0 + 8);
    local_108[0] = (code *)0x0;
    local_118 = pcVar14;
    pcStack_110 = pcVar15;
    ppcVar18 = FMemory::Malloc(0x80,0x10);
    ppcVar18[2] = (code *)pFVar7;
    *ppcVar18 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UDynamicWindSubsystem::UpdateWindParameters'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar18[4] = pcVar10;
    ppcVar18[5] = pcVar11;
    ppcVar18[8] = pcVar12;
    ppcVar18[9] = pcVar13;
    ppcVar18[6] = pcVar4;
    ppcVar18[10] = pcVar5;
    *(float *)(ppcVar18 + 7) = fVar1;
    *(float *)(ppcVar18 + 0xb) = fVar2;
    *(float *)((longlong)ppcVar18 + 0x5c) = fVar3;
    ppcVar18[0xc] = (code *)pUVar8;
    local_e0 = ppcVar18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    ppcVar18[0xe] = pcVar14;
    ppcVar18[0xf] = pcVar15;
    if (ppcVar18 != (code **)0xfffffffffffffff0) {
      local_108[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UDynamicWindSubsystem::UpdateWindParameters'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UDynamicWindSubsystem::UpdateWindParameters_::__l5::TSTR_UpdateFoliageWindSimulationInputs171>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_108);
    }
    else {
      if (this_00->bInitialized == 0) {
        FRenderCommandList::Init(this_00);
      }
      iVar6 = (this_00->CommandLists).ArrayNum;
      uVar20 = iVar6 - 1;
      uVar17 = 0;
      if ((int)uVar20 < iVar6) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if (uVar17 == 0) {
        local_188 = (longlong)(int)uVar20;
        local_180 = (longlong)iVar6;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this_00->CommandLists).ArrayNum;
      local_d8._16_8_ = local_f8[0];
      local_d8._24_8_ = local_f8[1];
      local_d8._32_8_ = local_f8[2];
      local_a8 = 2;
      pFVar9 = (this_00->CommandLists).AllocatorInstance.Data;
      local_d8._0_8_ = local_108[0];
      local_b0 = local_e0;
      local_e0 = (code **)0x0;
      local_108[0] = (code *)0x0;
      pFVar19 = (FRenderCommandTag *)
                TRenderCommandTag<`UDynamicWindSubsystem::UpdateWindParameters'::__l5::TSTR_UpdateFoliageWindSimulationInputs171>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar9 + (iVar6 + -1),
                 (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_d8,pFVar19);
      uVar21 = (ulonglong)local_a8;
      if (2 < uVar21) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L"");
        if (bVar16) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_d8._0_8_ != (code *)0x0) {
          ppcVar18 = (code **)(local_d8 + 0x10);
          if (local_b0 != (code **)0x0) {
            ppcVar18 = local_b0;
          }
          (**(code **)(*ppcVar18 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar21])(local_d8);
      }
    }
    if (local_108[0] != (code *)0x0) {
      ppcVar18 = local_108 + 2;
      if (local_e0 != (code **)0x0) {
        ppcVar18 = local_e0;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
  }
  return;
}

// execGetBlendedWindAmplitude @ 14da54660

void __cdecl
UDynamicWindSubsystem::execGetBlendedWindAmplitude(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[1].field_0x18 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[1].field_0x18 + 0x1c8);
    return;
  }
  *(undefined4 *)param_3 = __real_bf800000;
  return;
}

// execUpdateWindParameters @ 14da546a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UDynamicWindSubsystem::execUpdateWindParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double>_u_0 *pTVar2;
  TVector<double>_u_0 local_68;
  undefined4 local_50;
  double local_48;
  double dStack_40;
  double local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_50 = 0x3f800000;
  local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_30 = 0x41700000;
  local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_38 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  local_18 = 0;
  uStack_10 = 0;
  local_48 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  local_2c = 0x3f800000;
  local_28 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar2 = &local_68;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    pTVar2 = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateWindParameters((UDynamicWindSubsystem *)param_1,(FDynamicWindParameters *)&pTVar2->_s_0);
  return;
}

