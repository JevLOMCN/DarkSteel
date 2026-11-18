// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 80

// ULandscapeComponent @ 145f02980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULandscapeComponent * __thiscall
ULandscapeComponent::ULandscapeComponent(ULandscapeComponent *this,FObjectInitializer *param_1)

{
  TArray<TObjectPtr<UMaterialInstanceConstant>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar2;
  byte *pbVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  pTVar1 = &this->MaterialInstances;
  (this->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pTVar2 = &this->LODIndexToMaterialIndex;
  (this->OverrideHoleMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  (this->MaterialInstances).ArrayNum = 0;
  (this->MaterialInstances).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->GrassTypeSummary).MaxInstanceDiscardDistance = 1.7976931348623157e+308;
  (this->MaterialInstancesDynamic).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstancesDynamic).ArrayNum = 0;
  (this->MaterialInstancesDynamic).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LODIndexToMaterialIndex).ArrayNum = 0;
  (this->LODIndexToMaterialIndex).ArrayMax = 0;
  (this->XYOffsetmapTexture_DEPRECATED).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->WeightmapScaleBias).field0_0x0._s_0.X = 0.0;
  (this->WeightmapScaleBias).field0_0x0._s_0.Y = 0.0;
  (this->WeightmapScaleBias).field0_0x0._s_0.Z = 0.0;
  (this->WeightmapScaleBias).field0_0x0._s_0.W = 1.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.X = 0.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.Y = 0.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.Z = 0.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.W = 1.0;
  (this->CachedLocalBox).IsValid = '\0';
  (this->MipToMipMaxDeltas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MipToMipMaxDeltas).ArrayNum = 0;
  (this->MipToMipMaxDeltas).ArrayMax = 0;
  (this->CollisionComponentRef).field0_0x0.DebugPtr = (ULandscapeHeightfieldCollisionComponent *)0x0
  ;
  this->bUserTriggeredChangeRequested = false;
  this->bNaniteActive = false;
  (this->HeightmapTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->WeightmapLayerAllocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightmapLayerAllocations).ArrayNum = 0;
  (this->WeightmapLayerAllocations).ArrayMax = 0;
  (this->WeightmapTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightmapTextures).ArrayNum = 0;
  (this->WeightmapTextures).ArrayMax = 0;
  (this->PerLODOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerLODOverrideMaterials).ArrayNum = 0;
  (this->PerLODOverrideMaterials).ArrayMax = 0;
  (this->GrassTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrassTypes).ArrayNum = 0;
  (this->GrassTypes).ArrayMax = 0;
  (this->GrassTypeSummary).bInvalid = true;
  (this->GrassTypeSummary).bHasAnyGrass = true;
  (this->MapBuildDataId).A = 0;
  (this->MapBuildDataId).B = 0;
  (this->MapBuildDataId).C = 0;
  (this->MapBuildDataId).D = 0;
  (this->RegisteredEdgeFixup).field0_0x0.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
  (this->MobileMaterialInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MobileMaterialInterfaces).ArrayNum = 0;
  (this->MobileMaterialInterfaces).ArrayMax = 0;
  (this->MobileWeightmapTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MobileWeightmapTextures).ArrayNum = 0;
  (this->MobileWeightmapTextures).ArrayMax = 0;
  (this->MobileWeightmapTextureArray).field0_0x0.DebugPtr = (UTexture2DArray *)0x0;
  (this->MobileWeightmapLayerAllocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MobileWeightmapLayerAllocations).ArrayNum = 0;
  (this->MobileWeightmapLayerAllocations).ArrayMax = 0;
  MakeShared<FLandscapeComponentGrassData,1>(&this->GrassData);
  (this->ActiveExcludedBoxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveExcludedBoxes).ArrayNum = 0;
  (this->ActiveExcludedBoxes).ArrayMax = 0;
  this->ChangeTag = 0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  pbVar3 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar3 = *pbVar3 | 8;
  pbVar3 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar3 = *pbVar3 & 0xfe;
  this->CollisionMipLevel = 0;
  this->StaticLightingResolution = 0.0;
  iVar5 = (this->MaterialInstances).ArrayNum;
  if (iVar5 == (this->MaterialInstances).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->MaterialInstances).ArrayMax);
  }
  (this->MaterialInstances).ArrayNum = iVar5 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
  iVar5 = (this->LODIndexToMaterialIndex).ArrayNum;
  if (iVar5 == (this->LODIndexToMaterialIndex).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,&(this->LODIndexToMaterialIndex).ArrayMax);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  (this->LODIndexToMaterialIndex).ArrayNum = iVar5 + 1;
  pFVar4[iVar5] = (FScriptContainerElement)0x0;
  (this->HeightmapScaleBias).field0_0x0._s_0.X = 0.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.Y = 0.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.Z = 0.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.W = 1.0;
  (this->WeightmapScaleBias).field0_0x0._s_0.X = 0.0;
  (this->WeightmapScaleBias).field0_0x0._s_0.Y = 0.0;
  (this->WeightmapScaleBias).field0_0x0._s_0.Z = 0.0;
  (this->WeightmapScaleBias).field0_0x0._s_0.W = 1.0;
  pbVar3 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar3 = *pbVar3 | 0x10;
  pbVar3 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar3 = *pbVar3 & 0xf7;
  this->LODBias = 0;
  this->ForcedLOD = -1;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  return this;
}

// AddReferencedObjects @ 145f08a90

void __cdecl
ULandscapeComponent::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  UActorComponent::AddReferencedObjects(param_1,param_2);
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_ULandscapeComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_145f08acf;
  }
  param_1 = (UObject *)0x0;
LAB_145f08acf:
  FReferenceCollector::
  AddReferencedObjects<ULandscapeGrassType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_>
            (param_2,(TMapBase<TObjectPtr<ULandscapeGrassType>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_>
                      *)(*(longlong *)&param_1[0x2d].field_0x20 + 8),param_1,(FProperty *)0x0);
  return;
}

// BeginDestroy @ 145f091a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapeComponent::BeginDestroy(ULandscapeComponent *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FStreamingManagerCollection *pFVar4;
  char *pcVar5;
  char *pcVar6;
  FName FStackX_8;
  
  if (((this->_padding_ & 0x300000) != 0) || ((this->_padding_ & 0x1000000) != 0)) {
    pFVar4 = IStreamingManager::Get();
    (**(code **)(pFVar4->_padding_ + 0x68))(pFVar4,this);
  }
  pcVar5 = strstr("&UPrimitiveComponent::HandlePostMigrationPhysicsStateChanged","::");
  if (pcVar5 == (char *)0x0) {
LAB_1478b644b:
    pcVar6 = &DAT_00000002;
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_1478b644b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 != '0') goto LAB_1478b647e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1478b647e:
  ::FName::FName(&FStackX_8,pcVar6);
  if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnComponentPhysicsStateChanged");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar3 = FSparseDelegateStorage::Remove((UObject *)this,FVar2,(UObject *)this,FStackX_8);
    *(bool *)((longlong)&this->_padding_ + 6) = bVar3;
  }
  USceneComponent::BeginDestroy((USceneComponent *)this);
  FRenderCommandFence::BeginFence((FRenderCommandFence *)&this->_padding_,RenderThread);
  if (this->_padding_ == 0) {
    return;
  }
  FRenderCommandFence::BeginFence((FRenderCommandFence *)(this->_padding_ + 0x2b8),RenderThread);
  return;
}

// CalcBounds @ 145f09270

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

TBoxSphereBounds<double,double> * __thiscall
ULandscapeComponent::CalcBounds
          (ULandscapeComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TMatrix<double> *pTVar4;
  ALandscapeProxy *pAVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_198 [80];
  undefined1 local_148;
  TBox<double> local_140;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_198;
  pTVar4 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_108);
  UE::Math::TBox<double>::TransformBy(&this->CachedLocalBox,&local_140,pTVar4);
  uVar13 = SUB84(local_140.Min.field0_0x0._s_0.X,0);
  uVar14 = (undefined4)((ulonglong)local_140.Min.field0_0x0._0_8_ >> 0x20);
  uVar11 = SUB84(local_140.Max.field0_0x0._s_0.Y,0);
  uVar12 = (undefined4)((ulonglong)local_140.Max.field0_0x0._8_8_ >> 0x20);
  local_148 = 1;
  dVar3 = local_140.Min.field0_0x0._s_0.Z - (double)this->NegativeZBoundsExtension;
  dVar6 = (double)this->PositiveZBoundsExtension + local_140.Max.field0_0x0._s_0.Z;
  pAVar5 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if (pAVar5 != (ALandscapeProxy *)0x0) {
    uVar13 = SUB84(local_140.Min.field0_0x0._s_0.X,0);
    uVar14 = (undefined4)((ulonglong)local_140.Min.field0_0x0._0_8_ >> 0x20);
    uVar11 = SUB84(local_140.Max.field0_0x0._s_0.Y,0);
    uVar12 = (undefined4)((ulonglong)local_140.Max.field0_0x0._8_8_ >> 0x20);
    dVar6 = (double)pAVar5->PositiveZBoundsExtension + dVar6;
    dVar3 = dVar3 - (double)pAVar5->NegativeZBoundsExtension;
  }
  dVar6 = dVar6 - dVar3;
  dVar2 = (double)CONCAT44(uVar12,uVar11) - local_140.Min.field0_0x0._s_0.Y;
  dVar9 = dVar6 * __real_3fe0000000000000;
  dVar1 = (local_140.Max.field0_0x0._s_0.X - (double)CONCAT44(uVar14,uVar13)) *
          __real_3fe0000000000000;
  dVar10 = dVar2 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar1 + (double)CONCAT44(uVar14,uVar13);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar10 + local_140.Min.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar9 + dVar3;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar10;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar9;
  dVar3 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar7._0_8_ = dVar3 * dVar3;
  auVar7._8_8_ = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (dVar6 * dVar6 + dVar2 * dVar2) * __real_3fd0000000000000 + auVar7._0_8_;
  auVar8 = sqrtpd(auVar7,auVar8);
  __return_storage_ptr__->SphereRadius = auVar8._0_8_;
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 145f0b1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall ULandscapeComponent::CreateSceneProxy(ULandscapeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FName *pFVar4;
  FModuleManager *this_00;
  FPrimitiveSceneProxy *pFVar5;
  IModuleInterface *pIVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  FLandscapeComponentSceneProxy *pFVar7;
  atomic<unsigned___int64> aVar8;
  FName local_res10;
  FName local_res18;
  FString local_58;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  pFVar4 = ::FName::FName(&local_res18,"Landscape");
  local_res10 = *pFVar4;
  this_00 = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(this_00,local_res10);
  if (!bVar2) {
    ::FName::ToString(&local_res10,&local_58);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPrimitiveSceneProxy *)(*pcVar1)();
      return pFVar5;
    }
  }
  pIVar6 = FModuleManager::GetModule(this_00,local_res10);
  this_01 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
            (**(code **)((longlong)*pIVar6 + 0x60))(pIVar6);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_01,&local_48);
  if (((*(int *)&this_01[2].AccessDetector.State == 0) ||
      (aVar8 = this_01[1].AccessDetector.State, aVar8 == (atomic<unsigned___int64>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)aVar8 + 0x38))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_01,&local_30);
    if (*(int *)&this_01[2].AccessDetector.State == 0) {
      aVar8 = (atomic<unsigned___int64>)0x0;
    }
    else {
      aVar8 = this_01[1].AccessDetector.State;
    }
    pFVar5 = (FPrimitiveSceneProxy *)(**(code **)(*(longlong *)aVar8 + 0x60))(aVar8,this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    if (pFVar5 != (FPrimitiveSceneProxy *)0x0) {
      return pFVar5;
    }
  }
  pFVar7 = ::operator_new(0x6b0);
  if (pFVar7 != (FLandscapeComponentSceneProxy *)0x0) {
    pFVar7 = FLandscapeComponentSceneProxy::FLandscapeComponentSceneProxy(pFVar7,this);
    return (FPrimitiveSceneProxy *)pFVar7;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// DestroyComponent @ 145f0b4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeComponent::DestroyComponent(ULandscapeComponent *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ALandscapeProxy *pAVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ULandscapeComponent *pUVar9;
  int iVar10;
  ULandscapeComponent *local_48 [2];
  
  pAVar5 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if (pAVar5 != (ALandscapeProxy *)0x0) {
    local_48[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pFVar2 = (pAVar5->LandscapeComponents).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 <
         pFVar2 + (longlong)(pAVar5->LandscapeComponents).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (pAVar5->LandscapeComponents).ArrayNum;
    if (iVar1 != 0) {
      iVar10 = 0;
      pFVar2 = (pAVar5->LandscapeComponents).AllocatorInstance.Data;
      bVar4 = *(ULandscapeComponent **)pFVar2 != local_48[0];
      lVar6 = 0;
      pUVar9 = local_48[0];
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        do {
          lVar6 = lVar6 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar6) break;
        } while (bVar4 == (*(ULandscapeComponent **)(pFVar2 + lVar6 * 8) != pUVar9));
        if (bVar4 != false) {
          if (iVar10 != iVar7) {
            memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar7 * 8,
                    (longlong)(iVar8 - iVar7) << 3);
            pUVar9 = local_48[0];
          }
          iVar10 = iVar10 + (iVar8 - iVar7);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < iVar1);
      (pAVar5->LandscapeComponents).ArrayNum = iVar10;
    }
  }
  USceneComponent::DestroyComponent((USceneComponent *)this,param_1);
  return;
}

// EditorGetPaintLayerWeightAtLocation @ 145f0bde0

float __thiscall
ULandscapeComponent::EditorGetPaintLayerWeightAtLocation
          (ULandscapeComponent *this,TVector<double> *param_1,ULandscapeLayerInfoObject *param_2)

{
  return 0.0;
}

// EditorGetPaintLayerWeightByNameAtLocation @ 145f0bdf0

float __thiscall
ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation
          (ULandscapeComponent *this,TVector<double> *param_1,FName param_2)

{
  return 0.0;
}

// GetCurrentRuntimeMaterialInstanceCount @ 145f0ec10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
ULandscapeComponent::GetCurrentRuntimeMaterialInstanceCount(ULandscapeComponent *this)

{
  bool bVar1;
  ALandscapeProxy *pAVar2;
  UWorld *pUVar3;
  
  pAVar2 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  pUVar3 = AActor::GetWorld((AActor *)pAVar2);
  if ((pUVar3->FeatureLevel).Value == '\x01') {
    return (this->MobileMaterialInterfaces).ArrayNum;
  }
  bVar1 = pAVar2->bUseDynamicMaterialInstance;
  pAVar2 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if (((pAVar2 != (ALandscapeProxy *)0x0) && (pAVar2->bUseDynamicMaterialInstance != false)) &&
     (bVar1 != false)) {
    return (this->MaterialInstancesDynamic).ArrayNum;
  }
  return (this->MaterialInstances).ArrayNum;
}

// GetCurrentRuntimeMaterialInterface @ 145f0eca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInterface * __thiscall
ULandscapeComponent::GetCurrentRuntimeMaterialInterface(ULandscapeComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ALandscapeProxy *pAVar3;
  ALandscapeProxy *this_00;
  UWorld *pUVar4;
  UMaterialInterface *pUVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  pAVar3 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  this_00 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  pUVar4 = AActor::GetWorld((AActor *)this_00);
  if ((pUVar4->FeatureLevel).Value == '\x01') {
    uVar7 = 0;
    if (param_1 < (this->MobileMaterialInterfaces).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar1)();
        return pUVar5;
      }
    }
    pFVar6 = (this->MobileMaterialInterfaces).AllocatorInstance.Data;
  }
  else {
    bVar2 = pAVar3->bUseDynamicMaterialInstance;
    pAVar3 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
    if (((pAVar3 == (ALandscapeProxy *)0x0) || (pAVar3->bUseDynamicMaterialInstance == false)) ||
       (bVar2 == false)) {
      if ((param_1 < 0) || ((this->MaterialInstances).ArrayNum <= param_1)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaterialInstances.IsValidIndex(InIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                           ,0x16e,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UMaterialInterface *)(*pcVar1)();
          return pUVar5;
        }
      }
      uVar7 = 0;
      if (param_1 < (this->MaterialInstances).ArrayNum) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UMaterialInterface *)(*pcVar1)();
          return pUVar5;
        }
      }
      pFVar6 = (this->MaterialInstances).AllocatorInstance.Data;
    }
    else {
      if ((param_1 < 0) || ((this->MaterialInstancesDynamic).ArrayNum <= param_1)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaterialInstancesDynamic.IsValidIndex(InIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                           ,0x16a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UMaterialInterface *)(*pcVar1)();
          return pUVar5;
        }
      }
      uVar7 = 0;
      if (param_1 < (this->MaterialInstancesDynamic).ArrayNum) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UMaterialInterface *)(*pcVar1)();
          return pUVar5;
        }
      }
      pFVar6 = (this->MaterialInstancesDynamic).AllocatorInstance.Data;
    }
  }
  return *(UMaterialInterface **)(pFVar6 + (longlong)param_1 * 8);
}

// GetCurrentRuntimeWeightmapLayerAllocations @ 145f0ee90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetCurrentRuntimeWeightmapLayerAllocations(ULandscapeComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  longlong lVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar2 != (UWorld *)0x0) goto LAB_145f0eeaf;
  }
  else {
LAB_145f0eeaf:
    if ((pUVar2->FeatureLevel).Value == '\x01') {
      bVar1 = true;
      goto LAB_145f0eebe;
    }
  }
  bVar1 = false;
LAB_145f0eebe:
  lVar3 = 0x718;
  if (!bVar1) {
    lVar3 = 0x660;
  }
  return (TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> *)
         ((longlong)&this->_padding_ + lVar3);
}

// GetCurrentRuntimeWeightmapLayerAllocations @ 145f0eee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetCurrentRuntimeWeightmapLayerAllocations(ULandscapeComponent *this)

{
  bool bVar1;
  UWorld *pUVar2;
  longlong lVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar2 != (UWorld *)0x0) goto LAB_145f0eeff;
  }
  else {
LAB_145f0eeff:
    if ((pUVar2->FeatureLevel).Value == '\x01') {
      bVar1 = true;
      goto LAB_145f0ef0e;
    }
  }
  bVar1 = false;
LAB_145f0ef0e:
  lVar3 = 0x718;
  if (!bVar1) {
    lVar3 = 0x660;
  }
  return (TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> *)
         ((longlong)&this->_padding_ + lVar3);
}

// GetHeightmap @ 145f0fb40

UTexture2D * __thiscall ULandscapeComponent::GetHeightmap(ULandscapeComponent *this,FGuid *param_1)

{
  return (this->HeightmapTexture).field0_0x0.DebugPtr;
}

// GetHeightmap @ 145f0fb50

UTexture2D * __thiscall ULandscapeComponent::GetHeightmap(ULandscapeComponent *this,bool param_1)

{
  return (this->HeightmapTexture).field0_0x0.DebugPtr;
}

// GetLandscapeActor @ 145f0fff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscape * __thiscall ULandscapeComponent::GetLandscapeActor(ULandscapeComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  ALandscapeProxy *pAVar1;
  ALandscape *pAVar2;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if (pAVar1 != (ALandscapeProxy *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pAVar1->_padding_ + 0x778);
                    /* WARNING: Could not recover jumptable at 0x000145f10013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pAVar2 = (ALandscape *)(*UNRECOVERED_JUMPTABLE)(pAVar1,UNRECOVERED_JUMPTABLE);
    return pAVar2;
  }
  return (ALandscape *)0x0;
}

// GetLandscapeHoleMaterial @ 145f100e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInterface * __thiscall
ULandscapeComponent::GetLandscapeHoleMaterial(ULandscapeComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  ALandscapeProxy *pAVar1;
  UMaterialInterface *pUVar2;
  
  pUVar2 = (this->OverrideHoleMaterial).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInterface *)0x0) {
    pAVar1 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
    pUVar2 = (UMaterialInterface *)0x0;
    if (pAVar1 != (ALandscapeProxy *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(pAVar1->_padding_ + 0x788);
                    /* WARNING: Could not recover jumptable at 0x000145f1010f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar2 = (UMaterialInterface *)(*UNRECOVERED_JUMPTABLE)(pAVar1,UNRECOVERED_JUMPTABLE);
      return pUVar2;
    }
  }
  return pUVar2;
}

// GetLandscapeInfo @ 145f101f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeInfo * __thiscall ULandscapeComponent::GetLandscapeInfo(ULandscapeComponent *this)

{
  ALandscapeProxy *pAVar1;
  ULandscapeInfo *pUVar2;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x000145f1020b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (ULandscapeInfo *)(**(code **)(pAVar1->_padding_ + 0x18))();
  return pUVar2;
}

// GetLandscapeMaterial @ 145f103e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInterface * __thiscall
ULandscapeComponent::GetLandscapeMaterial(ULandscapeComponent *this,schar param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UWorld *pUVar1;
  FScriptContainerElement *pFVar2;
  ALandscapeProxy *pAVar3;
  UMaterialInterface *pUVar4;
  UMaterial *pUVar5;
  FScriptContainerElement *pFVar6;
  
  if ((param_1 != -1) &&
     ((this->_padding_ != 0 ||
      (pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar1 != (UWorld *)0x0
      )))) {
    pFVar2 = (this->PerLODOverrideMaterials).AllocatorInstance.Data;
    pFVar6 = pFVar2 + (longlong)(this->PerLODOverrideMaterials).ArrayNum * 0x10;
    for (; pFVar2 != pFVar6; pFVar2 = pFVar2 + 0x10) {
      if ((*(int *)pFVar2 == (int)param_1) &&
         (*(UMaterialInterface **)(pFVar2 + 8) != (UMaterialInterface *)0x0)) {
        return *(UMaterialInterface **)(pFVar2 + 8);
      }
    }
  }
  pUVar5 = (UMaterial *)(this->OverrideMaterial).field0_0x0.DebugPtr;
  if (pUVar5 == (UMaterial *)0x0) {
    pAVar3 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
    if (pAVar3 != (ALandscapeProxy *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(pAVar3->_padding_ + 0x780);
                    /* WARNING: Could not recover jumptable at 0x000145f1046f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar4 = (UMaterialInterface *)(*UNRECOVERED_JUMPTABLE)(pAVar3,param_1,UNRECOVERED_JUMPTABLE);
      return pUVar4;
    }
    pUVar5 = UMaterial::GetDefaultMaterial(MD_Surface);
  }
  return (UMaterialInterface *)pUVar5;
}

// GetLandscapeProxy @ 145f104a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscapeProxy * __thiscall ULandscapeComponent::GetLandscapeProxy(ULandscapeComponent *this)

{
  ALandscapeProxy *pAVar1;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  return pAVar1;
}

// GetLevel @ 145f10640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall ULandscapeComponent::GetLevel(ULandscapeComponent *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  ULevel *pUVar2;
  
  this_00 = (UObjectBaseUtility *)this->_padding_;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    return (ULevel *)0x0;
  }
  pUVar1 = Z_Construct_UClass_ULevel_NoRegister();
  pUVar2 = (ULevel *)UObjectBaseUtility::GetTypedOuter(this_00,pUVar1);
  return pUVar2;
}

// GetMaterialInstance @ 145f10b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInstance * __thiscall
ULandscapeComponent::GetMaterialInstance(ULandscapeComponent *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  ALandscapeProxy *pAVar3;
  UMaterialInstance *pUVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  
  pAVar3 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if (((pAVar3 == (ALandscapeProxy *)0x0) || (pAVar3->bUseDynamicMaterialInstance == false)) ||
     (!param_2)) {
    if ((param_1 < 0) || ((this->MaterialInstances).ArrayNum <= param_1)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialInstances.IsValidIndex(InIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x16e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMaterialInstance *)(*pcVar1)();
        return pUVar4;
      }
    }
    uVar6 = 0;
    if (param_1 < (this->MaterialInstances).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMaterialInstance *)(*pcVar1)();
        return pUVar4;
      }
    }
    pFVar5 = (this->MaterialInstances).AllocatorInstance.Data;
  }
  else {
    if ((param_1 < 0) || ((this->MaterialInstancesDynamic).ArrayNum <= param_1)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialInstancesDynamic.IsValidIndex(InIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x16a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMaterialInstance *)(*pcVar1)();
        return pUVar4;
      }
    }
    uVar6 = 0;
    if (param_1 < (this->MaterialInstancesDynamic).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMaterialInstance *)(*pcVar1)();
        return pUVar4;
      }
    }
    pFVar5 = (this->MaterialInstancesDynamic).AllocatorInstance.Data;
  }
  return *(UMaterialInstance **)(pFVar5 + (longlong)param_1 * 8);
}

// GetMaterialInstanceCount @ 145f10ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall ULandscapeComponent::GetMaterialInstanceCount(ULandscapeComponent *this,bool param_1)

{
  ALandscapeProxy *pAVar1;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if (((pAVar1 != (ALandscapeProxy *)0x0) && (pAVar1->bUseDynamicMaterialInstance != false)) &&
     (param_1)) {
    return (this->MaterialInstancesDynamic).ArrayNum;
  }
  return (this->MaterialInstances).ArrayNum;
}

// GetMaterialInstanceDynamic @ 145f10d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInstanceDynamic * __thiscall
ULandscapeComponent::GetMaterialInstanceDynamic(ULandscapeComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ALandscapeProxy *pAVar4;
  UMaterialInstanceDynamic *pUVar5;
  
  pAVar4 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if ((((pAVar4 != (ALandscapeProxy *)0x0) && (pAVar4->bUseDynamicMaterialInstance != false)) &&
      (-1 < param_1)) && (param_1 < (this->MaterialInstancesDynamic).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->MaterialInstancesDynamic).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMaterialInstanceDynamic *)(*pcVar1)();
        return pUVar5;
      }
    }
    return *(UMaterialInstanceDynamic **)
            ((this->MaterialInstancesDynamic).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetMeshMapBuildData @ 145f10e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMeshMapBuildData * __thiscall ULandscapeComponent::GetMeshMapBuildData(ULandscapeComponent *this)

{
  ULevel *pUVar1;
  UMapBuildDataRegistry *this_00;
  FMeshMapBuildData *pFVar2;
  FGuid local_18;
  
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar1 = AActor::GetLevel((AActor *)this->_padding_);
    if ((pUVar1 != (ULevel *)0x0) && ((pUVar1->OwningWorld).field0_0x0.DebugPtr != (UWorld *)0x0)) {
      this_00 = UMapBuildDataRegistry::Get((UActorComponent *)this);
      if (this_00 != (UMapBuildDataRegistry *)0x0) {
        local_18.A = (this->MapBuildDataId).A;
        local_18.B = (this->MapBuildDataId).B;
        local_18.C = (this->MapBuildDataId).C;
        local_18.D = (this->MapBuildDataId).D;
        pFVar2 = UMapBuildDataRegistry::GetMeshBuildData(this_00,&local_18);
        return pFVar2;
      }
    }
  }
  return (FMeshMapBuildData *)0x0;
}

// GetNumRelevantMips @ 145f11530

int __thiscall ULandscapeComponent::GetNumRelevantMips(ULandscapeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = (this->SubsectionSizeQuads + 1) * this->NumSubsections;
  iVar4 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar5 = 0;
  if (uVar3 != 0) {
    iVar5 = iVar4;
  }
  if (1 < this->NumSubsections) {
    iVar5 = iVar5 + -1;
  }
  if (iVar5 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRelevantMips > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                       ,0x7ad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return iVar5;
}

// GetRenderedWeightmapTexturesForFeatureLevel @ 145f132a0

TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetRenderedWeightmapTexturesForFeatureLevel
          (ULandscapeComponent *this,Type param_1)

{
  TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = (TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)&this->WeightmapTextures;
  if (param_1 == ES3_1) {
    pTVar1 = (TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)&this->MobileWeightmapTextures;
  }
  return pTVar1;
}

// GetResourceSizeEx @ 145f13590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ULandscapeComponent::GetResourceSizeEx(ULandscapeComponent *this,FResourceSizeEx *param_1)

{
  ulong64 uVar1;
  
  UPrimitiveComponent::GetResourceSizeEx((UPrimitiveComponent *)this,param_1);
  uVar1 = FLandscapeComponentGrassData::GetAllocatedSize((this->GrassData).Object);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar1);
  return;
}

// GetRuntimeVirtualTextures @ 145f13630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<URuntimeVirtualTexture_*,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetRuntimeVirtualTextures(ULandscapeComponent *this)

{
  ALandscapeProxy *pAVar1;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  return (TArray<URuntimeVirtualTexture_*,TSizedDefaultAllocator<32>_> *)
         &pAVar1->RuntimeVirtualTextures;
}

// GetVirtualTextureRenderPassType @ 145f145f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ERuntimeVirtualTextureMainPassType __thiscall
ULandscapeComponent::GetVirtualTextureRenderPassType(ULandscapeComponent *this)

{
  ALandscapeProxy *pAVar1;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  return pAVar1->VirtualTextureRenderPassType;
}

// GetWeightmapLayerAllocations @ 145f14610

TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetWeightmapLayerAllocations(ULandscapeComponent *this,FGuid *param_1)

{
  return &this->WeightmapLayerAllocations;
}

// GetWeightmapLayerAllocations @ 145f14620

TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetWeightmapLayerAllocations(ULandscapeComponent *this,bool param_1)

{
  return &this->WeightmapLayerAllocations;
}

// GetWeightmapLayerAllocations @ 145f14630

TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetWeightmapLayerAllocations(ULandscapeComponent *this,FGuid *param_1)

{
  return &this->WeightmapLayerAllocations;
}

// GetWeightmapLayerAllocations @ 145f14640

TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetWeightmapLayerAllocations(ULandscapeComponent *this,bool param_1)

{
  return &this->WeightmapLayerAllocations;
}

// GetWeightmapTextures @ 145f14650

TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetWeightmapTextures(ULandscapeComponent *this,FGuid *param_1)

{
  return &this->WeightmapTextures;
}

// GetWeightmapTextures @ 145f14660

TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetWeightmapTextures(ULandscapeComponent *this,bool param_1)

{
  return &this->WeightmapTextures;
}

// GetWeightmapTextures @ 145f14670

TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetWeightmapTextures(ULandscapeComponent *this,FGuid *param_1)

{
  return (TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)&this->WeightmapTextures;
}

// GetWeightmapTextures @ 145f14680

TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeComponent::GetWeightmapTextures(ULandscapeComponent *this,bool param_1)

{
  return (TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *)&this->WeightmapTextures;
}

// InstallOrUpdateTextureUserDatas @ 145f15230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeHeightmapTextureEdgeFixup * __thiscall
ULandscapeComponent::InstallOrUpdateTextureUserDatas
          (ULandscapeComponent *this,bool param_1,bool param_2,bool param_3,int param_4)

{
  UTexture2D *pUVar1;
  code *pcVar2;
  bool bVar3;
  ALandscapeProxy *this_00;
  ULandscapeHeightmapTextureEdgeFixup *pUVar4;
  ULandscapeHeightmapTextureEdgeFixup *this_01;
  ULandscapeTextureStorageProviderFactory *this_02;
  UClass *local_res8;
  UClass *local_68;
  UClass *local_60;
  UClass *local_58;
  UClass *local_50;
  FString local_48;
  FString local_38;
  
  if ((this->HeightmapTexture).field0_0x0.DebugPtr == (UTexture2D *)0x0) {
    if (2 < (byte)LogLandscape._0_1_) {
      this_00 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    return (ULandscapeHeightmapTextureEdgeFixup *)0x0;
  }
  CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if ((param_1) && (bVar3 = UE::Landscape::ShouldInstallEdgeFixup(), bVar3)) {
    pUVar4 = ULandscapeHeightmapTextureEdgeFixup::FindOrCreateFor
                       ((this->HeightmapTexture).field0_0x0.DebugPtr);
  }
  else {
    pUVar1 = (this->HeightmapTexture).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x38);
    local_res8 = Z_Construct_UClass_ULandscapeHeightmapTextureEdgeFixup_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    (*pcVar2)(&pUVar1->_padding_,&local_res8);
    pUVar4 = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
  }
  pUVar1 = (this->HeightmapTexture).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x18);
  local_68 = Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68);
  }
  this_01 = (ULandscapeHeightmapTextureEdgeFixup *)(*pcVar2)(&pUVar1->_padding_,&local_68);
  pUVar1 = (this->HeightmapTexture).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x18);
  local_60 = Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_60);
  }
  this_02 = (ULandscapeTextureStorageProviderFactory *)(*pcVar2)(&pUVar1->_padding_);
  if (((this_01 != (ULandscapeHeightmapTextureEdgeFixup *)0x0) &&
      (this_02 != (ULandscapeTextureStorageProviderFactory *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OverrideFactory || !StorageFactory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x88c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (ULandscapeHeightmapTextureEdgeFixup *)(*pcVar2)();
    return pUVar4;
  }
  if ((param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bUseCompression == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x891,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (ULandscapeHeightmapTextureEdgeFixup *)(*pcVar2)();
    return pUVar4;
  }
  if (this_02 != (ULandscapeTextureStorageProviderFactory *)0x0) {
    if (this_01 != (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
      ULandscapeTextureMipEdgeOverrideFactory::SetupEdgeFixup
                ((ULandscapeTextureMipEdgeOverrideFactory *)this_01,
                 (ULandscapeHeightmapTextureEdgeFixup *)0x0);
      pUVar1 = (this->HeightmapTexture).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x38);
      local_58 = Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_58);
      }
      (*pcVar2)(&pUVar1->_padding_,&local_58);
      this_01 = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
    }
    ULandscapeTextureStorageProviderFactory::SetupEdgeFixup(this_02,pUVar4);
  }
  if (pUVar4 == (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
    if (this_01 != (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
      ULandscapeTextureMipEdgeOverrideFactory::SetupEdgeFixup
                ((ULandscapeTextureMipEdgeOverrideFactory *)this_01,
                 (ULandscapeHeightmapTextureEdgeFixup *)0x0);
      pUVar1 = (this->HeightmapTexture).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x38);
      local_50 = Z_Construct_UClass_ULandscapeTextureMipEdgeOverrideFactory_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_50);
      }
      (*pcVar2)(&pUVar1->_padding_,&local_50);
    }
  }
  else {
    if (this_02 == (ULandscapeTextureStorageProviderFactory *)0x0) {
      if (this_01 == (ULandscapeHeightmapTextureEdgeFixup *)0x0) {
        this_01 = (ULandscapeHeightmapTextureEdgeFixup *)
                  ULandscapeTextureMipEdgeOverrideFactory::AddTo
                            ((this->HeightmapTexture).field0_0x0.DebugPtr);
      }
      ULandscapeTextureMipEdgeOverrideFactory::SetupEdgeFixup
                ((ULandscapeTextureMipEdgeOverrideFactory *)this_01,pUVar4);
    }
    if (((this_01 != (ULandscapeHeightmapTextureEdgeFixup *)0x0) !=
         (this_02 == (ULandscapeTextureStorageProviderFactory *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!OverrideFactory == !StorageFactory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                           ,0x8cd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (ULandscapeHeightmapTextureEdgeFixup *)(*pcVar2)();
      return pUVar4;
    }
  }
  return pUVar4;
}

// IsHLODRelevant @ 145f15a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULandscapeComponent::IsHLODRelevant(ULandscapeComponent *this)

{
  UActorComponent::CanBeHLODRelevant((UActorComponent *)this);
  return false;
}

// IsPrecomputedLightingValid @ 145f15a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULandscapeComponent::IsPrecomputedLightingValid(ULandscapeComponent *this)

{
  ULevel *pUVar1;
  UMapBuildDataRegistry *this_00;
  FMeshMapBuildData *pFVar2;
  FGuid local_18;
  
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar1 = AActor::GetLevel((AActor *)this->_padding_);
    if ((pUVar1 != (ULevel *)0x0) && ((pUVar1->OwningWorld).field0_0x0.DebugPtr != (UWorld *)0x0)) {
      this_00 = UMapBuildDataRegistry::Get((UActorComponent *)this);
      if (this_00 != (UMapBuildDataRegistry *)0x0) {
        local_18.A = (this->MapBuildDataId).A;
        local_18.B = (this->MapBuildDataId).B;
        local_18.C = (this->MapBuildDataId).C;
        local_18.D = (this->MapBuildDataId).D;
        pFVar2 = UMapBuildDataRegistry::GetMeshBuildData(this_00,&local_18);
        return pFVar2 != (FMeshMapBuildData *)0x0;
      }
    }
  }
  return false;
}

// IsShown @ 145f15c40

bool __thiscall ULandscapeComponent::IsShown(ULandscapeComponent *this,FEngineShowFlags *param_1)

{
  return param_1->Landscape;
}

// OnRegister @ 145f163b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULandscapeComponent::OnRegister(ULandscapeComponent *this)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInstanceDynamic>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ALandscapeProxy *pAVar8;
  UWorld *this_00;
  ULandscapeInfo *this_01;
  ULandscapeSubsystem *this_02;
  uint uVar9;
  longlong lVar10;
  UMaterialInstanceDynamic *local_38 [2];
  
  UPrimitiveComponent::OnRegister((UPrimitiveComponent *)this);
  pAVar8 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if (pAVar8 != (ALandscapeProxy *)0x0) {
    if (pAVar8->bUseDynamicMaterialInstance != false) {
      uVar9 = (this->MaterialInstances).ArrayNum;
      pTVar2 = &this->MaterialInstancesDynamic;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      piVar1 = &(this->MaterialInstancesDynamic).ArrayMax;
      if (*piVar1 < (int)uVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar9,&pTVar2->AllocatorInstance,(this->MaterialInstancesDynamic).ArrayNum,
                   piVar1);
      }
      uVar9 = 0;
      if (0 < (this->MaterialInstances).ArrayNum) {
        lVar10 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar9 < (this->MaterialInstances).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          local_38[0] = UMaterialInstanceDynamic::Create
                                  (*(UMaterialInterface **)
                                    ((this->MaterialInstances).AllocatorInstance.Data + lVar10),
                                   (UObject *)this,(FName)0x0);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_38[0] != (UMaterialInstanceDynamic *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_38[0]);
          }
          pFVar3 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (this->MaterialInstancesDynamic).ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
            (this->MaterialInstancesDynamic).ArrayNum = iVar7;
          }
          (this->MaterialInstancesDynamic).ArrayNum = iVar7 + 1;
          *(UMaterialInstanceDynamic **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               local_38[0];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_38[0] != (UMaterialInstanceDynamic *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_38[0]);
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 8;
        } while ((int)uVar9 < (this->MaterialInstances).ArrayNum);
      }
    }
    this_00 = AActor::GetWorld((AActor *)pAVar8);
    if (this_00 != (UWorld *)0x0) {
      pAVar8 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
      this_01 = (ULandscapeInfo *)(**(code **)(pAVar8->_padding_ + 0x18))();
      if (this_01 != (ULandscapeInfo *)0x0) {
        ULandscapeInfo::RegisterActorComponent(this_01,this,false);
      }
      this_02 = UWorld::GetSubsystem<ULandscapeSubsystem>(this_00);
      if (this_02 != (ULandscapeSubsystem *)0x0) {
        ULandscapeSubsystem::RegisterComponent(this_02,this);
      }
    }
  }
  return;
}

// OnUnregister @ 145f16870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULandscapeComponent::OnUnregister(ULandscapeComponent *this)

{
  int *piVar1;
  ALandscapeProxy *pAVar2;
  UWorld *this_00;
  ULandscapeInfo *this_01;
  ULandscapeSubsystem *this_02;
  
  UPrimitiveComponent::OnUnregister((UPrimitiveComponent *)this);
  pAVar2 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  if (pAVar2 != (ALandscapeProxy *)0x0) {
    if (pAVar2->bUseDynamicMaterialInstance != false) {
      piVar1 = &(this->MaterialInstancesDynamic).ArrayMax;
      (this->MaterialInstancesDynamic).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->MaterialInstancesDynamic).AllocatorInstance,0,piVar1);
      }
    }
    this_00 = AActor::GetWorld((AActor *)pAVar2);
    if (this_00 != (UWorld *)0x0) {
      pAVar2 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
      this_01 = (ULandscapeInfo *)(**(code **)(pAVar2->_padding_ + 0x18))();
      if (this_01 != (ULandscapeInfo *)0x0) {
        ULandscapeInfo::UnregisterActorComponent(this_01,this);
      }
      this_02 = UWorld::GetSubsystem<ULandscapeSubsystem>(this_00);
      if (this_02 != (ULandscapeSubsystem *)0x0) {
        ULandscapeSubsystem::UnregisterComponent(this_02,this);
      }
    }
  }
  return;
}

// OnUpdateTransform @ 145f16ac0

void __thiscall
ULandscapeComponent::OnUpdateTransform
          (ULandscapeComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  if (this->RegisteredLandscapeGroup != (FLandscapeGroup *)0x0) {
    FLandscapeGroup::OnTransformUpdated(this->RegisteredLandscapeGroup,this);
    return;
  }
  return;
}

// PostInitProperties @ 145f16ae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULandscapeComponent::PostInitProperties(ULandscapeComponent *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UPrimitiveComponent::PostInitProperties((UPrimitiveComponent *)this);
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->MapBuildDataId).A = pFVar4->A;
  (this->MapBuildDataId).B = uVar1;
  (this->MapBuildDataId).C = uVar2;
  (this->MapBuildDataId).D = uVar3;
  return;
}

// PostLoad @ 145f16f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall ULandscapeComponent::PostLoad(ULandscapeComponent *this)

{
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar7;
  TRefCountPtr<FBaseGraphTask> *pTVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_148 [32];
  ForElementType<FPSOPrecacheVertexFactoryData> *local_128;
  ForElementType<FPSOPrecacheVertexFactoryData> local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_f8 [8];
  ulonglong local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  ForElementType<FPSOPrecacheVertexFactoryData> FStack_d0;
  ForElementType<FPSOPrecacheVertexFactoryData> local_c8;
  ForElementType<FPSOPrecacheVertexFactoryData> FStack_c0;
  ForElementType<FPSOPrecacheVertexFactoryData> local_b8;
  ForElementType<FPSOPrecacheVertexFactoryData> FStack_b0;
  void *local_a8;
  undefined8 local_a0;
  ForElementType<FPSOPrecacheVertexFactoryData> local_98;
  int local_70;
  int local_6c;
  TRefCountPtr<FBaseGraphTask> local_68 [4];
  TRefCountPtr<FBaseGraphTask> *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1235,"ULandscapeComponent::PostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
               ,0x4d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1235);
  }
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  bVar5 = IsComponentPSOPrecachingEnabled();
  if (bVar5) {
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    (**(code **)(this->_padding_ + 0x7f0))(this,&local_e8,0);
    local_f0 = (ulonglong)((uint)local_f0 & 0x8000) | 0x13c00;
    (**(code **)(this->_padding_ + 0x660))(this,&local_f0);
    local_98.SecondaryData = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
    local_d8 = (undefined1  [8])&FLandscapeVertexFactory::StaticType;
    local_6c = 2;
    FStack_d0 = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
    local_70 = 0;
    iVar6 = 0;
    if ((&local_98 <= (ForElementType<FPSOPrecacheVertexFactoryData> *)local_d8) &&
       (local_d8 < &local_98.SecondaryData)) {
      local_108 = 0x10;
      local_120 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
      local_110 = 0;
      local_118 = 2;
      local_128 = (ForElementType<FPSOPrecacheVertexFactoryData> *)local_d8;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = local_70;
      if (local_70 == local_6c) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                          (0x810,&local_98,&local_6c);
      }
    }
    local_70 = iVar6 + 1;
    FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
    if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      FVar7 = local_98.SecondaryData;
    }
    pFVar1 = (ForElementType<FPSOPrecacheVertexFactoryData> *)
             ((longlong)FVar7 + (longlong)iVar6 * 0x10);
    *pFVar1 = (ForElementType<FPSOPrecacheVertexFactoryData>)local_d8;
    pFVar1[1] = FStack_d0;
    bVar5 = UE::Landscape::NeedsFixedGridVertexFactory(GMaxRHIShaderPlatform);
    if (bVar5) {
      local_c8 = (ForElementType<FPSOPrecacheVertexFactoryData>)
                 &FLandscapeFixedGridVertexFactory::StaticType;
      FStack_c0 = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
      FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar7 = local_98.SecondaryData;
      }
      if ((ulonglong)FVar7 <= &local_c8) {
        FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
        if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
          FVar7 = local_98.SecondaryData;
        }
        if (&local_c8 <
            (ForElementType<FPSOPrecacheVertexFactoryData> *)
            ((longlong)local_6c * 0x10 + (longlong)FVar7)) {
          local_110 = (longlong)local_70;
          local_108 = 0x10;
          local_128 = &local_c8;
          local_120 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
          if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
            local_120 = local_98.SecondaryData;
          }
          local_118 = (longlong)local_6c;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if (local_70 == local_6c) {
        local_70 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                             (0x810,&local_98,&local_6c);
      }
      FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar7 = local_98.SecondaryData;
      }
      pFVar1 = (ForElementType<FPSOPrecacheVertexFactoryData> *)
               ((longlong)FVar7 + (longlong)local_70 * 0x10);
      local_70 = local_70 + 1;
      *pFVar1 = local_c8;
      pFVar1[1] = FStack_c0;
    }
    bVar5 = UE::Landscape::Culling::UseCulling(GMaxRHIShaderPlatform);
    if (bVar5) {
      local_b8 = (ForElementType<FPSOPrecacheVertexFactoryData>)
                 UE::Landscape::Culling::GetTileVertexFactoryType();
      FStack_b0 = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
      FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar7 = local_98.SecondaryData;
      }
      if ((ulonglong)FVar7 <= &local_b8) {
        FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
        if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
          FVar7 = local_98.SecondaryData;
        }
        if (&local_b8 <
            (ForElementType<FPSOPrecacheVertexFactoryData> *)
            ((longlong)local_6c * 0x10 + (longlong)FVar7)) {
          local_110 = (longlong)local_70;
          local_108 = 0x10;
          local_128 = &local_b8;
          local_120 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
          if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
            local_120 = local_98.SecondaryData;
          }
          local_118 = (longlong)local_6c;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if (local_70 == local_6c) {
        local_70 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                             (0x810,&local_98,&local_6c);
      }
      FVar7 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar7 = local_98.SecondaryData;
      }
      pFVar1 = (ForElementType<FPSOPrecacheVertexFactoryData> *)
               ((longlong)FVar7 + (longlong)local_70 * 0x10);
      local_70 = local_70 + 1;
      *pFVar1 = local_b8;
      pFVar1[1] = FStack_b0;
    }
    iVar6 = (int)local_e0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    plVar2 = local_e8 + (int)local_e0;
    plVar9 = local_e8;
    while( true ) {
      if ((int)local_e0 != iVar6) {
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (plVar9 == plVar2) break;
      plVar3 = (longlong *)*plVar9;
      if ((plVar3 != (longlong *)0x0) && (bVar5 = IsComponentPSOPrecachingEnabled(), bVar5)) {
        local_120 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_a8;
        local_128 = (ForElementType<FPSOPrecacheVertexFactoryData> *)CONCAT71(local_128._1_7_,1);
        (**(code **)(*plVar3 + 0x3b0))(plVar3,local_68,&local_98,&local_f0);
        pTVar8 = local_68;
        if (local_48 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          pTVar8 = local_48;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar8,local_40);
        if (local_48 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          FMemory::Free(local_48);
        }
      }
      plVar9 = plVar9 + 1;
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_98.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
      FMemory::Free((void *)local_98.SecondaryData);
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  FLandscapeComponentGrassData::ConditionalDiscardDataOnLoad((this->GrassData).Object);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PropagateLightingScenarioChange @ 145f17e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapeComponent::PropagateLightingScenarioChange(ULandscapeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  FString local_38;
  FComponentRecreateRenderStateContext local_28;
  
  local_28.ScenesToUpdateAllPrimitiveSceneInfos =
       (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)0x0;
  local_28.Component = (UActorComponent *)0x0;
  local_28.ComponentInterface = (IPrimitiveComponent *)0x0;
  if ((this == (ULandscapeComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                         ,0x28,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponent->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ComponentRecreateRenderStateContext.h"
                       ,0x29,L"%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->_padding_ & 3) == 3) {
    (**(code **)(this->_padding_ + 0x3a8))(this);
    local_28.Component = (UActorComponent *)this;
    UpdateAllPrimitiveSceneInfosForSingleComponent
              ((UActorComponent *)this,local_28.ScenesToUpdateAllPrimitiveSceneInfos);
  }
  FComponentRecreateRenderStateContext::~FComponentRecreateRenderStateContext(&local_28);
  return;
}

// Serialize @ 145f1d6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULandscapeComponent::Serialize(ULandscapeComponent *this,FArchive *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLandscapeComponentGrassData *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FMeshMapBuildData *pFVar9;
  char cVar10;
  bool local_c8 [4];
  FLLMScope local_c4;
  FMeshMapBuildLegacyData local_c0;
  TSharedRef<FLandscapeComponentGrassData,1> *local_b0;
  undefined8 *local_a8;
  FName local_a0;
  FName local_98;
  FMemScope local_90;
  FString local_88;
  FString local_78;
  FLandscapeComponentGrassData *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  
  FLLMScope::FLLMScope(&local_c4,Landscape,false,None,Default,true);
  FMemScope::FMemScope(&local_90,Landscape,true);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  UPrimitiveComponent::Serialize((UPrimitiveComponent *)this,param_1);
  dVar6 = __real_406fffc000000000;
  if (((param_1->field_0x28 & 2) != 0) &&
     (((this->CachedLocalBox).Max.field0_0x0._s_0.Y - (this->CachedLocalBox).Min.field0_0x0._s_0.Y)
      * ((this->CachedLocalBox).Max.field0_0x0._s_0.X - (this->CachedLocalBox).Min.field0_0x0._s_0.X
        ) * ((this->CachedLocalBox).Max.field0_0x0._s_0.Z -
            (this->CachedLocalBox).Min.field0_0x0._s_0.Z) <= 0.0)) {
    iVar8 = this->ComponentSizeQuads;
    (this->CachedLocalBox).Min.field0_0x0._s_0.X = 0.0;
    (this->CachedLocalBox).Min.field0_0x0._s_0.Y = 0.0;
    uStack_44 = __real_c070000000000000._4_4_;
    local_48 = (undefined4)__real_c070000000000000;
    local_28 = 1;
    local_58 = 0;
    uStack_50 = 0;
    dStack_40 = (double)(iVar8 + 1);
    *(undefined4 *)((longlong)&(this->CachedLocalBox).Min.field0_0x0 + 0x10) =
         (undefined4)__real_c070000000000000;
    *(undefined4 *)((longlong)&(this->CachedLocalBox).Min.field0_0x0 + 0x14) = uStack_44;
    (this->CachedLocalBox).Max.field0_0x0._s_0.X = dStack_40;
    (this->CachedLocalBox).Max.field0_0x0._s_0.Y = dStack_40;
    (this->CachedLocalBox).Max.field0_0x0._s_0.Z = dVar6;
    (this->CachedLocalBox).IsValid = 1;
    (this->CachedLocalBox).Pad[0] = (char)uStack_27;
    (this->CachedLocalBox).Pad[1] = (char)((uint7)uStack_27 >> 8);
    (this->CachedLocalBox).Pad[2] = (char)((uint7)uStack_27 >> 0x10);
    (this->CachedLocalBox).Pad[3] = (char)((uint7)uStack_27 >> 0x18);
    (this->CachedLocalBox).Pad[4] = (char)((uint7)uStack_27 >> 0x20);
    (this->CachedLocalBox).Pad[5] = (char)((uint7)uStack_27 >> 0x28);
    (this->CachedLocalBox).Pad[6] = (char)((uint7)uStack_27 >> 0x30);
    dStack_30 = dVar6;
    local_38 = dStack_40;
    if (1 < (byte)LogLandscape._0_1_) {
      local_a0 = (FName)this->_padding_;
      ::FName::ToString(&local_a0,&local_88);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
     iVar8 < 9)) {
    pFVar9 = ::operator_new(0x38);
    if (pFVar9 == (FMeshMapBuildData *)0x0) {
      pFVar9 = (FMeshMapBuildData *)0x0;
    }
    else {
      pFVar9 = FMeshMapBuildData::FMeshMapBuildData(pFVar9);
    }
    operator<<<FLightMap>(param_1,&pFVar9->LightMap);
    operator<<<FShadowMap>(param_1,&pFVar9->ShadowMap);
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)&local_c0,&local_c0.Data.ArrayMax);
    uVar5 = *(undefined8 *)&(this->MapBuildDataId).C;
    local_c0.Data.ArrayNum = iVar8 + 1;
    *(undefined8 *)(local_c0.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x18) =
         *(undefined8 *)&this->MapBuildDataId;
    *(undefined8 *)(local_c0.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x18 + 8) = uVar5;
    *(FMeshMapBuildData **)(local_c0.Data.AllocatorInstance.Data + (longlong)iVar8 * 0x18 + 0x10) =
         pFVar9;
    FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::AddAnnotation
              (&GComponentsWithLegacyLightmaps,(UObjectBase *)this,&local_c0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  if (0x1b2 < *(int *)&param_1->field_0x40) {
    if ((*(uint *)&param_1->field_0x34 & 0x400000) == 0) {
      ::operator<<(param_1,(this->GrassData).Object);
    }
    else {
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((param_1->field_0x28 & 4) == 0) {
        if ((undefined8 *)plVar1[1] < (undefined8 *)*plVar1 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a8,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_a8);
          }
        }
        else {
          local_a8 = *(undefined8 **)*plVar1;
          *plVar1 = *plVar1 + 8;
        }
        pTVar2 = (TReferenceControllerBase<1> *)local_a8[1];
        pFVar3 = (FLandscapeComponentGrassData *)*local_a8;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68 = (this->GrassData).Object;
        pTStack_60 = (this->GrassData).SharedReferenceCount.ReferenceController;
        (this->GrassData).Object = pFVar3;
        (this->GrassData).SharedReferenceCount.ReferenceController = pTVar2;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_60);
      }
      else {
        local_b0 = &this->GrassData;
        if ((longlong *)plVar1[1] < (longlong *)*plVar1 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b0,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_b0);
          }
        }
        else {
          local_b0 = *(TSharedRef<FLandscapeComponentGrassData,1> **)*plVar1;
          *plVar1 = *plVar1 + 8;
        }
      }
    }
    bVar7 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if ((((!bVar7) && ((param_1->field_0x28 & 5) == 5)) &&
        (bVar7 = FLandscapeComponentGrassData::HasValidData((this->GrassData).Object), !bVar7)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsTemplate() || !Ar.IsLoading() || !Ar.IsSaving() || GrassData->HasValidData()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                           ,0x3f9,
                           L"If this asserts, then serialization occurred on grass data that wasn\'t properly loaded/computed. It\'s a problem"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar10 = '\0';
  if ((0x122 < *(int *)&param_1->field_0x40) && ((this->_padding_ & 0x10) == 0)) {
    if (((*(longlong *)&param_1->field_0x68 == 0) ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) &&
       ((param_1->field_0x28 & 4) == 0)) {
      local_c8[0] = false;
    }
    else {
      local_c8[0] = true;
    }
    ::operator<<(param_1,local_c8);
    cVar10 = local_c8[0];
  }
  if ((cVar10 == '\0') && ((param_1->field_0x28 & 1) != 0)) {
    local_98 = (FName)this->_padding_;
    ::FName::ToString(&local_98,&local_78);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(&local_c4);
  return;
}

// SetForcedLOD @ 145f1dda0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapeComponent::SetForcedLOD(ULandscapeComponent *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 0) {
    iVar4 = -1;
  }
  else {
    iVar3 = this->SubsectionSizeQuads + 1;
    iVar4 = 1;
    if (iVar3 != 0) {
      iVar4 = iVar3;
    }
    uVar1 = (ulonglong)(iVar4 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar3 = (int)lVar2 + -1;
    if (param_1 < iVar3) {
      iVar3 = param_1;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
  }
  this->ForcedLOD = iVar4;
  (**(code **)(this->_padding_ + 0x440))(this,1,0);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetHeightmap @ 145f1de10

void __thiscall ULandscapeComponent::SetHeightmap(ULandscapeComponent *this,UTexture2D *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UTexture2D *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewHeightmap != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                       ,0xb37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->HeightmapTexture).field0_0x0.DebugPtr = param_1;
  return;
}

// SetLOD @ 145f1de80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapeComponent::SetLOD(ULandscapeComponent *this,bool param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1) {
    if (param_2 < 0) {
      this->ForcedLOD = -1;
    }
    else {
      iVar3 = this->SubsectionSizeQuads + 1;
      iVar5 = 1;
      if (iVar3 != 0) {
        iVar5 = iVar3;
      }
      uVar1 = (ulonglong)(iVar5 - 1) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar5 = (int)lVar2 + -1;
      if (param_2 < iVar5) {
        iVar5 = param_2;
      }
      iVar3 = 0;
      if (0 < iVar5) {
        iVar3 = iVar5;
      }
      this->ForcedLOD = iVar3;
    }
  }
  else {
    iVar3 = this->SubsectionSizeQuads + 1;
    iVar5 = 1;
    if (iVar3 != 0) {
      iVar5 = iVar3;
    }
    uVar1 = (ulonglong)(iVar5 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar3 = (int)lVar2 + -1;
    iVar5 = iVar3;
    if (param_2 < iVar3) {
      iVar5 = param_2;
    }
    iVar4 = -iVar3;
    if (-iVar3 < iVar5) {
      iVar4 = iVar5;
    }
    this->LODBias = iVar4;
  }
  (**(code **)(this->_padding_ + 0x440))(this,1,0);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetLODBias @ 145f1df40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapeComponent::SetLODBias(ULandscapeComponent *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = this->SubsectionSizeQuads + 1;
  iVar5 = 1;
  if (iVar4 != 0) {
    iVar5 = iVar4;
  }
  uVar1 = (ulonglong)(iVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = (int)lVar2 + -1;
  iVar5 = iVar4;
  if (param_1 < iVar4) {
    iVar5 = param_1;
  }
  iVar3 = -iVar4;
  if (-iVar4 < iVar5) {
    iVar3 = iVar5;
  }
  this->LODBias = iVar3;
  (**(code **)(this->_padding_ + 0x440))(this,1,0);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetNaniteActive @ 145f1e400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapeComponent::SetNaniteActive(ULandscapeComponent *this,bool param_1)

{
  if (this->bNaniteActive != param_1) {
    this->bNaniteActive = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetWeightmapTextures @ 145f1e4d0

void __thiscall
ULandscapeComponent::SetWeightmapTextures
          (ULandscapeComponent *this,TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_>::
  operator=<TSizedDefaultAllocator<32>,TObjectPtr<UTexture2D>_>(&this->WeightmapTextures,param_1);
  return;
}

// SetWeightmapTexturesInternal @ 145f1e4f0

void __thiscall
ULandscapeComponent::SetWeightmapTexturesInternal
          (ULandscapeComponent *this,TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *param_1,
          FGuid *param_2)

{
  if (((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) {
    TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_>::
    operator=<TSizedDefaultAllocator<32>,TObjectPtr<UTexture2D>_>(&this->WeightmapTextures,param_1);
    return;
  }
  return;
}

// SupportsStaticLighting @ 145f1eff0

bool __thiscall ULandscapeComponent::SupportsStaticLighting(ULandscapeComponent *this)

{
  return true;
}

// UpdatedSharedPropertiesFromActor @ 145f20450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeComponent::UpdatedSharedPropertiesFromActor(ULandscapeComponent *this)

{
  ALandscapeProxy *pAVar1;
  byte bVar2;
  byte bVar3;
  
  pAVar1 = CastChecked<ALandscapeProxy,UObject>((UObject *)this->_padding_);
  bVar3 = *(byte *)((longlong)&this->_padding_ + 6);
  bVar3 = (bVar3 ^ pAVar1->CastShadow) & 1 ^ bVar3;
  *(byte *)((longlong)&this->_padding_ + 6) = bVar3;
  bVar3 = (pAVar1->field_0x574 << 4 ^ bVar3) & 0x20 ^ bVar3;
  *(byte *)((longlong)&this->_padding_ + 6) = bVar3;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 7);
  bVar3 = (pAVar1->field_0x574 << 4 ^ bVar3) & 0x40 ^ bVar3;
  *(byte *)((longlong)&this->_padding_ + 6) = bVar3;
  bVar2 = (bVar2 ^ pAVar1->bCastContactShadow) & 1 ^ bVar2;
  *(byte *)((longlong)&this->_padding_ + 7) = bVar2;
  bVar2 = (pAVar1->field_0x578 << 2 ^ bVar2) & 4 ^ bVar2;
  *(byte *)((longlong)&this->_padding_ + 7) = bVar2;
  bVar2 = (pAVar1->field_0x57c << 5 ^ bVar2) & 0x20 ^ bVar2;
  *(byte *)((longlong)&this->_padding_ + 7) = bVar2;
  *(byte *)((longlong)&this->_padding_ + 7) = (pAVar1->field_0x580 << 6 ^ bVar2) & 0x40 ^ bVar2;
  bVar3 = (pAVar1->field_0x584 << 4 ^ bVar3) & 0x10 ^ bVar3;
  *(byte *)((longlong)&this->_padding_ + 6) = bVar3;
  bVar3 = (pAVar1->field_0x584 * '\x02' ^ bVar3) & 4 ^ bVar3;
  *(byte *)((longlong)&this->_padding_ + 6) = bVar3;
  *(byte *)((longlong)&this->_padding_ + 6) = (pAVar1->field_0x584 * '\x02' ^ bVar3) & 8 ^ bVar3;
  bVar3 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)((longlong)&this->_padding_ + 1) = (pAVar1->field_0x59c << 6 ^ bVar3) & 0x40 ^ bVar3;
  *(ERendererStencilMask *)((longlong)&this->_padding_ + 2) = pAVar1->CustomDepthStencilWriteMask;
  *(int *)((longlong)&this->_padding_ + 4) = pAVar1->CustomDepthStencilValue;
  UPrimitiveComponent::SetCullDistance((UPrimitiveComponent *)this,pAVar1->LDMaxDrawDistance);
  *(FLightingChannels *)&this->_padding_ = pAVar1->LightingChannels;
  *(EShadowCacheInvalidationBehavior *)((longlong)&this->_padding_ + 1) =
       pAVar1->ShadowCacheInvalidationBehavior;
  *(byte *)((longlong)&this->_padding_ + 4) =
       pAVar1->field_0x598 << 7 | *(byte *)((longlong)&this->_padding_ + 4) & 0x7f;
  UpdateNavigationRelevance(this);
  UpdateRejectNavmeshUnderneath(this);
  return;
}

// StaticClass @ 145f23f30

UClass * __cdecl ULandscapeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeComponent",
               &Z_Registration_Info_UClass_ULandscapeComponent.InnerSingleton,
               StaticRegisterNativesULandscapeComponent,0x750,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeComponent>,
               InternalVTableHelperCtorCaller<ULandscapeComponent>,local_res8,
               UPrimitiveComponent::StaticClass,ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeComponent.InnerSingleton;
}

// ULandscapeComponent @ 145f27490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULandscapeComponent * __thiscall
ULandscapeComponent::ULandscapeComponent(ULandscapeComponent *this,FVTableHelper *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLandscapeComponentGrassData *pFVar3;
  FLandscapeComponentGrassData *pFVar4;
  ULandscapeComponent *pUVar5;
  FLandscapeComponentGrassData *pFVar6;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  pFVar4 = (FLandscapeComponentGrassData *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->WeightmapScaleBias).field0_0x0._s_0.W = 1.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.W = 1.0;
  (this->GrassTypeSummary).MaxInstanceDiscardDistance = 1.7976931348623157e+308;
  (this->OverrideHoleMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstances).ArrayNum = 0;
  (this->MaterialInstances).ArrayMax = 0;
  (this->MaterialInstancesDynamic).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstancesDynamic).ArrayNum = 0;
  (this->MaterialInstancesDynamic).ArrayMax = 0;
  (this->LODIndexToMaterialIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODIndexToMaterialIndex).ArrayNum = 0;
  (this->LODIndexToMaterialIndex).ArrayMax = 0;
  (this->XYOffsetmapTexture_DEPRECATED).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->WeightmapScaleBias).field0_0x0._s_0.X = 0.0;
  (this->WeightmapScaleBias).field0_0x0._s_0.Y = 0.0;
  (this->WeightmapScaleBias).field0_0x0._s_0.Z = 0.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.X = 0.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.Y = 0.0;
  (this->HeightmapScaleBias).field0_0x0._s_0.Z = 0.0;
  (this->CachedLocalBox).IsValid = '\0';
  (this->MipToMipMaxDeltas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MipToMipMaxDeltas).ArrayNum = 0;
  (this->MipToMipMaxDeltas).ArrayMax = 0;
  (this->CollisionComponentRef).field0_0x0.DebugPtr = (ULandscapeHeightfieldCollisionComponent *)0x0
  ;
  this->bUserTriggeredChangeRequested = false;
  (this->HeightmapTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->WeightmapLayerAllocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightmapLayerAllocations).ArrayNum = 0;
  (this->WeightmapLayerAllocations).ArrayMax = 0;
  (this->WeightmapTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightmapTextures).ArrayNum = 0;
  (this->WeightmapTextures).ArrayMax = 0;
  (this->PerLODOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerLODOverrideMaterials).ArrayNum = 0;
  (this->PerLODOverrideMaterials).ArrayMax = 0;
  (this->GrassTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrassTypes).ArrayNum = 0;
  (this->GrassTypes).ArrayMax = 0;
  (this->GrassTypeSummary).bInvalid = true;
  (this->GrassTypeSummary).bHasAnyGrass = true;
  (this->MapBuildDataId).A = 0;
  (this->MapBuildDataId).B = 0;
  (this->MapBuildDataId).C = 0;
  (this->MapBuildDataId).D = 0;
  (this->RegisteredEdgeFixup).field0_0x0.DebugPtr = (ULandscapeHeightmapTextureEdgeFixup *)0x0;
  (this->MobileMaterialInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MobileMaterialInterfaces).ArrayNum = 0;
  (this->MobileMaterialInterfaces).ArrayMax = 0;
  (this->MobileWeightmapTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MobileWeightmapTextures).ArrayNum = 0;
  (this->MobileWeightmapTextures).ArrayMax = 0;
  (this->MobileWeightmapTextureArray).field0_0x0.DebugPtr = (UTexture2DArray *)0x0;
  (this->MobileWeightmapLayerAllocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MobileWeightmapLayerAllocations).ArrayNum = 0;
  (this->MobileWeightmapLayerAllocations).ArrayMax = 0;
  pFVar3 = ::operator_new(0x68);
  pFVar6 = pFVar4;
  if (pFVar3 != (FLandscapeComponentGrassData *)0x0) {
    pFVar3->_padding_ = 0;
    *(undefined8 *)&(pFVar3->WeightOffsets).field_0x10 = 0;
    *(undefined8 *)&(pFVar3->WeightOffsets).field_0x18 = 0;
    *(undefined8 *)&(pFVar3->WeightOffsets).field_0x38 = 0;
    *(undefined8 *)&(pFVar3->WeightOffsets).field_0x48 = 0;
    pFVar3->NumElements = -1;
    *(undefined8 *)&pFVar3->WeightOffsets = 0;
    *(undefined8 *)&(pFVar3->WeightOffsets).field_0x8 = 0;
    *(undefined8 *)&(pFVar3->WeightOffsets).field_0x20 = 0;
    *(undefined4 *)&(pFVar3->WeightOffsets).field_0x28 = 0;
    *(undefined4 *)&(pFVar3->WeightOffsets).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar3->WeightOffsets).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->WeightOffsets).field_0x34 = 0;
    *(undefined8 *)&(pFVar3->WeightOffsets).field_0x40 = 0;
    (pFVar3->HeightWeightData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->HeightWeightData).ArrayNum = 0;
    (pFVar3->HeightWeightData).ArrayMax = 0;
    pFVar6 = pFVar3;
  }
  (this->GrassData).Object = pFVar6;
  pFVar3 = ::operator_new(0x18);
  if (pFVar3 != (FLandscapeComponentGrassData *)0x0) {
    *(undefined4 *)&pFVar3->WeightOffsets = 1;
    *(undefined ***)&pFVar3->NumElements =
         &
         ___7__TReferenceControllerWithDeleter_UFLandscapeComponentGrassData__U__DefaultDeleter_UFLandscapeComponentGrassData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&(pFVar3->WeightOffsets).field_0x4 = 1;
    *(FLandscapeComponentGrassData **)&(pFVar3->WeightOffsets).field_0x8 = pFVar6;
    pFVar4 = pFVar3;
  }
  (this->GrassData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar4
  ;
  EnsureRetrievingVTablePtrDuringCtor(L"TSharedRef()");
  if (((this->GrassData).Object == (FLandscapeComponentGrassData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (ULandscapeComponent *)(*pcVar1)();
    return pUVar5;
  }
  (this->ActiveExcludedBoxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveExcludedBoxes).ArrayNum = 0;
  (this->ActiveExcludedBoxes).ArrayMax = 0;
  return this;
}

// ~ULandscapeComponent @ 145f27b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ULandscapeComponent::~ULandscapeComponent(ULandscapeComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->ActiveExcludedBoxes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GrassData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->MobileWeightmapLayerAllocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MobileWeightmapTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MobileMaterialInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GrassTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerLODOverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WeightmapTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WeightmapLayerAllocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MipToMipMaxDeltas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LODIndexToMaterialIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialInstancesDynamic).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// ComputeApproximateBounds @ 145f2ac00

TBox<double> * __thiscall
ULandscapeComponent::ComputeApproximateBounds
          (ULandscapeComponent *this,TBox<double> *__return_storage_ptr__)

{
  int iVar1;
  double dVar2;
  
  iVar1 = this->ComponentSizeQuads;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = -256.0;
  dVar2 = (double)(iVar1 + 1);
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 255.9921875;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 145f2ec50

UClass * __cdecl ULandscapeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeComponent",
               &Z_Registration_Info_UClass_ULandscapeComponent.InnerSingleton,
               StaticRegisterNativesULandscapeComponent,0x750,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeComponent>,
               InternalVTableHelperCtorCaller<ULandscapeComponent>,local_res8,
               UPrimitiveComponent::StaticClass,ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeComponent.InnerSingleton;
}

// GetStaticLightingType @ 145f2f170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ELightMapInteractionType __thiscall
ULandscapeComponent::GetStaticLightingType(ULandscapeComponent *this)

{
  ELightmapType EVar1;
  
  EVar1 = UPrimitiveComponent::GetLightmapType((UPrimitiveComponent *)this);
  return (EVar1 != ForceVolumetric) + LMIT_GlobalVolume;
}

// Init @ 145f2faa0

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

void __thiscall
ULandscapeComponent::Init
          (ULandscapeComponent *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  TArray<TObjectPtr<ULandscapeComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  int iVar7;
  ALandscapeProxy *pAVar8;
  ALandscapeProxy *this_00;
  TIntPoint<int> TVar9;
  TQuat<double> *pTVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  undefined1 auStackY_128 [32];
  ULandscapeComponent *local_d8;
  undefined8 local_d0;
  TVector<double>_u_0 local_c8;
  TRotator<double> local_a0;
  TQuat<double> local_88;
  undefined7 uStack_57;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pAVar8 = GetLandscapeProxy(this);
  if (pAVar8 == (ALandscapeProxy *)0x0) {
LAB_145f2fb27:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("LandscapeProxy && !LandscapeProxy->LandscapeComponents.Contains(this)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdit.cpp"
                        ,0x8e,L"");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pFVar11 = (pAVar8->LandscapeComponents).AllocatorInstance.Data;
    pFVar4 = pFVar11 + (longlong)(pAVar8->LandscapeComponents).ArrayNum * 8;
    for (; pFVar11 != pFVar4; pFVar11 = pFVar11 + 8) {
      if (*(ULandscapeComponent **)pFVar11 == (ULandscapeComponent *)0x0) {
        bVar12 = this == (ULandscapeComponent *)0x0;
      }
      else {
        bVar12 = *(ULandscapeComponent **)pFVar11 == this;
      }
      if (bVar12) goto LAB_145f2fb27;
    }
  }
  pTVar2 = &pAVar8->LandscapeComponents;
  local_d8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULandscapeComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
      ((FScriptContainerElement *)&local_d8 <
       pFVar4 + (longlong)(pAVar8->LandscapeComponents).ArrayMax * 8)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (pAVar8->LandscapeComponents).ArrayNum;
  piVar1 = &(pAVar8->LandscapeComponents).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pAVar8->LandscapeComponents).ArrayNum = iVar7 + 1;
  *(ULandscapeComponent **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_d8 != (ULandscapeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  this->SectionBaseX = param_1;
  this->SectionBaseY = param_2;
  this_00 = GetLandscapeProxy(this);
  TVar9 = ALandscapeProxy::GetSectionBase(this_00);
  local_a0.Pitch = (double)this->_padding_;
  local_a0.Yaw = (double)this->_padding_;
  local_a0.Roll = (double)this->_padding_;
  iVar7 = *(int *)TVar9.field0_0x0;
  iVar3 = *(int *)((longlong)TVar9.field0_0x0 + 4);
  pTVar10 = FRotationConversionCache::RotatorToQuat
                      ((FRotationConversionCache *)&this->_padding_,&local_88,&local_a0);
  local_c8._s_0.Z = 0.0;
  local_c8._s_0.X = (double)(param_1 - iVar7);
  local_c8._s_0.Y = (double)(param_2 - iVar3);
  USceneComponent::SetRelativeLocationAndRotation
            ((USceneComponent *)this,(TVector<double> *)&local_c8._s_0,pTVar10,false,
             (FHitResult *)0x0,None);
  this->NumSubsections = param_4;
  this->ComponentSizeQuads = param_3;
  this->SubsectionSizeQuads = param_5;
  if ((param_4 * param_5 != param_3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSubsections * SubsectionSizeQuads == ComponentSizeQuads",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEdit.cpp"
                          ,0x96,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_d0 = 0;
  (**(code **)(this->_padding_ + 0x508))
            (this,pAVar8->_padding_,&FAttachmentTransformRules::KeepRelativeTransform,0);
  iVar7 = this->SubsectionSizeQuads + 1;
  fVar15 = __real_3f800000 / (float)(iVar7 * this->NumSubsections);
  fVar13 = fVar15 * __real_3f000000;
  (this->WeightmapScaleBias).field0_0x0._s_0.X = (double)fVar15;
  (this->WeightmapScaleBias).field0_0x0._s_0.Y = (double)fVar15;
  (this->WeightmapScaleBias).field0_0x0._s_0.Z = (double)fVar13;
  (this->WeightmapScaleBias).field0_0x0._s_0.W = (double)fVar13;
  this->WeightmapSubsectionOffset = (float)iVar7 * fVar15;
  UpdatedSharedPropertiesFromActor(this);
  dVar6 = __real_406fffc000000000;
  iVar7 = this->ComponentSizeQuads;
  (this->CachedLocalBox).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedLocalBox).Min.field0_0x0._s_0.Y = 0.0;
  dVar14 = (double)(iVar7 + 1);
  (this->CachedLocalBox).Min.field0_0x0._s_0.Z = __real_c070000000000000;
  (this->CachedLocalBox).Max.field0_0x0._s_0.X = dVar14;
  (this->CachedLocalBox).Max.field0_0x0._s_0.Y = dVar14;
  (this->CachedLocalBox).Max.field0_0x0._s_0.Z = dVar6;
  (this->CachedLocalBox).IsValid = 1;
  (this->CachedLocalBox).Pad[0] = (char)uStack_57;
  (this->CachedLocalBox).Pad[1] = (char)((uint7)uStack_57 >> 8);
  (this->CachedLocalBox).Pad[2] = (char)((uint7)uStack_57 >> 0x10);
  (this->CachedLocalBox).Pad[3] = (char)((uint7)uStack_57 >> 0x18);
  (this->CachedLocalBox).Pad[4] = (char)((uint7)uStack_57 >> 0x20);
  (this->CachedLocalBox).Pad[5] = (char)((uint7)uStack_57 >> 0x28);
  (this->CachedLocalBox).Pad[6] = (char)((uint7)uStack_57 >> 0x30);
  return;
}

// Serialize @ 145f33170

void __thiscall
ULandscapeComponent::Serialize(ULandscapeComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesULandscapeComponent @ 145f338a0

void __cdecl ULandscapeComponent::StaticRegisterNativesULandscapeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_ULandscapeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateNavigationRelevance @ 145f34180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeComponent::UpdateNavigationRelevance(ULandscapeComponent *this)

{
  ULandscapeHeightfieldCollisionComponent *this_00;
  ALandscapeProxy *pAVar1;
  
  pAVar1 = GetLandscapeProxy(this);
  this_00 = (this->CollisionComponentRef).field0_0x0.DebugPtr;
  if ((this_00 != (ULandscapeHeightfieldCollisionComponent *)0x0) &&
     (pAVar1 != (ALandscapeProxy *)0x0)) {
    UActorComponent::SetCanEverAffectNavigation
              ((UActorComponent *)this_00,pAVar1->bUsedForNavigation);
    return;
  }
  return;
}

// UpdateRejectNavmeshUnderneath @ 145f341c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeComponent::UpdateRejectNavmeshUnderneath(ULandscapeComponent *this)

{
  ULandscapeHeightfieldCollisionComponent *pUVar1;
  ALandscapeProxy *pAVar2;
  
  pAVar2 = GetLandscapeProxy(this);
  pUVar1 = (this->CollisionComponentRef).field0_0x0.DebugPtr;
  if ((pUVar1 != (ULandscapeHeightfieldCollisionComponent *)0x0) &&
     (pAVar2 != (ALandscapeProxy *)0x0)) {
    pUVar1->field_0x281 =
         (pAVar2->bFillCollisionUnderLandscapeForNavmesh ^ pUVar1->field_0x281) & 1 ^
         pUVar1->field_0x281;
  }
  return;
}

// execEditorGetPaintLayerWeightAtLocation @ 145f34890

void __cdecl
ULandscapeComponent::execEditorGetPaintLayerWeightAtLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  float fVar3;
  ULandscapeLayerInfoObject *local_res10;
  TVector<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = (ULandscapeLayerInfoObject *)0x0;
  pTVar2 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
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
  fVar3 = EditorGetPaintLayerWeightAtLocation((ULandscapeComponent *)param_1,pTVar2,local_res10);
  *(float *)param_3 = fVar3;
  return;
}

// execEditorGetPaintLayerWeightByNameAtLocation @ 145f34980

void __cdecl
ULandscapeComponent::execEditorGetPaintLayerWeightByNameAtLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  float fVar3;
  FName local_res10;
  TVector<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pTVar2 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = EditorGetPaintLayerWeightByNameAtLocation
                    ((ULandscapeComponent *)param_1,pTVar2,local_res10);
  *(float *)param_3 = fVar3;
  return;
}

// execGetGrassTypesBP @ 145f34a70

void __cdecl
ULandscapeComponent::execGetGrassTypesBP(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  UObject *pUVar2;
  longlong lVar3;
  int iVar4;
  void *_Src;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  pUVar2 = param_1 + 0x2a;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = *(longlong *)pUVar2;
  iVar4 = *(int *)&param_1[0x2a].field_0x8;
  lVar3 = lVar5 + (longlong)iVar4 * 8;
  while( true ) {
    if (*(int *)&param_1[0x2a].field_0x8 != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeGrassType>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar5 == lVar3) break;
    lVar5 = lVar5 + 8;
  }
  if (param_3 != pUVar2) {
    iVar4 = *(int *)&param_1[0x2a].field_0x8;
    piVar1 = (int *)((longlong)param_3 + 0xc);
    _Src = *(void **)pUVar2;
    *(int *)((longlong)param_3 + 8) = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,param_3,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy(*(void **)param_3,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  return;
}

// execGetMaterialInstanceDynamic @ 145f34b40

void __cdecl
ULandscapeComponent::execGetMaterialInstanceDynamic(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInstanceDynamic *pUVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetMaterialInstanceDynamic((ULandscapeComponent *)param_1,local_res10[0]);
  *(UMaterialInstanceDynamic **)param_3 = pUVar2;
  return;
}

// execSetForcedLOD @ 145f34be0

void __cdecl ULandscapeComponent::execSetForcedLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetForcedLOD((ULandscapeComponent *)param_1,local_res10[0]);
  return;
}

// execSetLODBias @ 145f34c70

void __cdecl ULandscapeComponent::execSetLODBias(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLODBias((ULandscapeComponent *)param_1,local_res10[0]);
  return;
}

// CanRenderGrassMap @ 145f4e2d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ULandscapeComponent::CanRenderGrassMap(ULandscapeComponent *this)

{
  if (this->_padding_ == 0) {
    UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  return false;
}

// InvalidateGrassTypeSummary @ 145f58c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeComponent::InvalidateGrassTypeSummary(ULandscapeComponent *this)

{
  ALandscapeProxy *pAVar1;
  
  (this->GrassTypeSummary).bInvalid = true;
  pAVar1 = GetLandscapeProxy(this);
  (pAVar1->GrassTypeSummary).LandscapeComponentCount = -1;
  return;
}

// RemoveGrassMap @ 145f5c9a0

void __thiscall ULandscapeComponent::RemoveGrassMap(ULandscapeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLandscapeComponentGrassData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = ::operator_new(0x78);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pFVar4 = (FLandscapeComponentGrassData *)&DAT_00000010;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pFVar4 = (FLandscapeComponentGrassData *)(pTVar3 + 1);
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFLandscapeComponentGrassData___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar3[1]._padding_ + 4) = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[5]._padding_ = 0;
    pTVar3[6]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[1]._padding_ = 0xffffffff;
    *(undefined4 *)&pTVar3[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[4]._padding_ + 4) = 0x80;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar5 = pTVar3;
    if (pFVar4 == (FLandscapeComponentGrassData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pTVar3 = (this->GrassData).SharedReferenceCount.ReferenceController;
  (this->GrassData).Object = pFVar4;
  (this->GrassData).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// UpdateGrassTypes @ 145f640e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULandscapeComponent::UpdateGrassTypes(ULandscapeComponent *this,bool param_1)

{
  int *piVar1;
  TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  TObjectPtr<ULandscapeGrassType> *pTVar5;
  UMaterialInterface *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  ALandscapeProxy *pAVar9;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_1) && (pUVar6 = GetLandscapeMaterial(this,-1), pUVar6 != (UMaterialInterface *)0x0)) {
    plVar7 = (longlong *)(**(code **)(pUVar6->_padding_ + 0x2d8))(pUVar6);
    local_18 = 0;
    uStack_10 = 0;
    lVar8 = (**(code **)(*plVar7 + 0x2f0))(plVar7,&local_18);
    pTVar2 = &this->GrassTypes;
    if (pTVar2 != (TArray<TObjectPtr<ULandscapeGrassType>,TSizedDefaultAllocator<32>_> *)
                  (lVar8 + 0x458)) {
      iVar3 = (this->GrassTypes).ArrayMax;
      piVar1 = &(this->GrassTypes).ArrayMax;
      pTVar5 = *(TObjectPtr<ULandscapeGrassType> **)(lVar8 + 0x458);
      iVar4 = *(int *)(lVar8 + 0x460);
      (this->GrassTypes).ArrayNum = iVar4;
      if ((iVar4 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
        ConstructItems<TObjectPtr<ULandscapeGrassType>,TObjectPtr<ULandscapeGrassType>,int>
                  ((pTVar2->AllocatorInstance).Data,pTVar5,iVar4);
      }
    }
    (this->GrassTypeSummary).bInvalid = true;
    pAVar9 = GetLandscapeProxy(this);
    (pAVar9->GrassTypeSummary).LandscapeComponentCount = -1;
    return true;
  }
  return false;
}

// GetStreamingRenderAssetInfo @ 145f94950

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ULandscapeComponent::GetStreamingRenderAssetInfo
          (ULandscapeComponent *this,FStreamingTextureLevelContext *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  FGenericStaticFeatureLevel FVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  UObject *pUVar8;
  FLightMap *pFVar9;
  FShadowMap *pFVar10;
  TObjectPtr<UTexture2D>_u_0 TVar11;
  TObjectPtr<UTexture2D>_u_0 TVar12;
  TObjectPtr<UTexture2D>_u_0 TVar13;
  float fVar14;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *pTVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  UClass *pUVar21;
  UMaterialInterface *pUVar22;
  FMeshMapBuildData *pFVar23;
  FLightMap2D *this_00;
  UTexture2D *pUVar24;
  FShadowMap2D *this_01;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  TObjectPtr<UTexture2D>_u_0 *pTVar27;
  TObjectPtr<UTexture2D>_u_0 *pTVar28;
  FScriptContainerElement *pFVar29;
  TObjectPtr<UTexture2D> *pTVar30;
  longlong *plVar31;
  int *piVar32;
  UMaterialInterface *pUVar33;
  longlong *plVar34;
  TObjectPtr<UTexture2D>_u_0 TVar35;
  TObjectPtr<UTexture2D>_u_0 TVar36;
  undefined1 auVar37 [16];
  double dVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 local_res10 [8];
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *local_res18;
  Type local_res20 [8];
  EShaderPlatform local_124;
  undefined1 local_122;
  int local_120;
  int local_11c;
  void *local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_c8;
  
  lVar5 = this->_padding_;
  local_res18 = param_2;
  if (lVar5 != 0) {
    pUVar21 = ALandscapeProxy::StaticClass();
    iVar20 = (int)pUVar21->_padding_;
    if ((iVar20 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar20 * 8)
        == &pUVar21->_padding_)) {
      lVar6 = *(longlong *)(lVar5 + 0x1b8);
      uVar43 = (undefined4)this->_padding_;
      uVar44 = (undefined4)((ulonglong)this->_padding_ >> 0x20);
      uVar40 = (undefined4)this->_padding_;
      uVar41 = (undefined4)((ulonglong)this->_padding_ >> 0x20);
      uVar45 = (undefined4)this->_padding_;
      uVar46 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      uVar47 = (undefined4)this->_padding_;
      uVar48 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      dVar38 = __real_3ff0000000000000;
      if (lVar6 != 0) {
        local_108 = *(undefined8 *)(lVar6 + 0x188);
        dVar38 = (double)CONCAT44(*(uint *)(lVar6 + 0x17c) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  *(uint *)(lVar6 + 0x178) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      }
      fVar42 = *(float *)(lVar5 + 0x470);
      if (fVar42 <= 0.0) {
        fVar42 = 0.0;
      }
      fVar42 = (float)((double)(fVar42 * (float)this->ComponentSizeQuads * __real_3f400000) * dVar38
                      );
      goto LAB_145f94a5f;
    }
  }
  fVar42 = 0.0;
  uVar45 = (undefined4)this->_padding_;
  uVar46 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uVar47 = (undefined4)this->_padding_;
  uVar48 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uVar43 = (undefined4)this->_padding_;
  uVar44 = (undefined4)((ulonglong)this->_padding_ >> 0x20);
  uVar40 = (undefined4)this->_padding_;
  uVar41 = (undefined4)((ulonglong)this->_padding_ >> 0x20);
LAB_145f94a5f:
  plVar34 = &this->_padding_;
  FVar4.FeatureLevel = param_1->FeatureLevel;
  local_11c = GetCurrentRuntimeMaterialInstanceCount(this);
  fVar14 = __real_3f800000;
  dVar38 = __real_3e45798ee0000000;
  local_120 = 0;
  if (0 < local_11c) {
    do {
      pUVar33 = (UMaterialInterface *)0x0;
      pUVar22 = GetCurrentRuntimeMaterialInterface(this,local_120);
      if (pUVar22 != (UMaterialInterface *)0x0) {
        local_118 = (void *)0x0;
        local_110 = 0;
        pcVar7 = *(code **)(pUVar22->_padding_ + 0x330);
        if (FVar4.FeatureLevel == Num) {
          local_124 = SP_NumPlatforms;
        }
        else {
          local_124 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)FVar4.FeatureLevel];
        }
        local_122 = 1;
        local_res20[0] = GetCurrentMaterialQualityLevelChecked();
        local_res20[1] = 1;
        (*pcVar7)(pUVar22,&local_118,local_res20,&local_124);
        pUVar21 = Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
        iVar20 = (int)pUVar21->_padding_;
        if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar20) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
            &pUVar21->_padding_)) {
          pUVar22 = pUVar33;
        }
        if (0 < (int)local_110) {
          local_100 = 0;
          do {
            lVar5 = local_100;
            pFVar26 = (FScriptContainerElement *)0x0;
            uVar19 = (uint)pUVar33;
            uVar18 = 0;
            if ((int)uVar19 < (int)local_110) {
              uVar18 = ~uVar19 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar8 = *(UObject **)(lVar5 + (longlong)local_118);
            if (pUVar8 != (UObject *)0x0) {
              pUVar21 = Z_Construct_UClass_UTexture2D_NoRegister();
              iVar20 = (int)pUVar21->_padding_;
              if ((iVar20 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar20 * 8)
                  == &pUVar21->_padding_)) {
                uVar18 = param_2->ArrayNum;
                if (uVar18 == param_2->ArrayMax) {
                  uVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                param_2->ArrayNum = uVar18 + 1;
                uVar25 = 0;
                if ((int)uVar18 < (int)(uVar18 + 1)) {
                  uVar25 = ~uVar18 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar29 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x50;
                if (pFVar29 != (FScriptContainerElement *)0x0) {
                  *(uint *)(pFVar29 + 0x48) = *(uint *)(pFVar29 + 0x48) & 0xfffffffe;
                  *(uint *)(pFVar29 + 0x48) = *(uint *)(pFVar29 + 0x48) | 2;
                  *(undefined8 *)pFVar29 = 0;
                  *(undefined8 *)(pFVar29 + 8) = 0;
                  *(undefined8 *)(pFVar29 + 0x10) = 0;
                  *(undefined8 *)(pFVar29 + 0x18) = 0;
                  *(undefined8 *)(pFVar29 + 0x20) = 0;
                  *(undefined8 *)(pFVar29 + 0x28) = 0;
                  *(undefined8 *)(pFVar29 + 0x30) = 0;
                  *(undefined8 *)(pFVar29 + 0x38) = 0;
                  *(undefined8 *)(pFVar29 + 0x40) = 0x3f800000;
                  pFVar26 = pFVar29;
                }
                *(undefined4 *)(pFVar26 + 8) = uVar45;
                *(undefined4 *)(pFVar26 + 0xc) = uVar46;
                *(undefined4 *)(pFVar26 + 0x10) = uVar47;
                *(undefined4 *)(pFVar26 + 0x14) = uVar48;
                *(float *)(pFVar26 + 0x40) = fVar42;
                auVar37._4_4_ = uVar41;
                auVar37._0_4_ = uVar40;
                *(ulonglong *)(pFVar26 + 0x18) = CONCAT44(uVar44,uVar43);
                *(ulonglong *)(pFVar26 + 0x20) = CONCAT44(uVar41,uVar40);
                auVar37._12_4_ = uVar41;
                auVar37._8_4_ = uVar40;
                *(undefined1 (*) [16])(pFVar26 + 0x28) = auVar37;
                *(ulonglong *)(pFVar26 + 0x38) = CONCAT44(uVar41,uVar40);
                local_c8 = CONCAT44(uVar41,uVar40);
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar8);
                }
                *(UObject **)pFVar26 = pUVar8;
                if (pUVar22 != (UMaterialInterface *)0x0) {
                  iVar20 = *(int *)&pUVar22[3].SubsurfaceProfile.field0_0x0;
                  lVar5 = *(longlong *)&pUVar8->field_0x18;
                  plVar31 = (longlong *)pUVar22[3]._padding_;
                  plVar1 = (longlong *)((longlong)plVar31 + (longlong)iVar20 * 0xc);
                  while( true ) {
                    if (*(int *)&pUVar22[3].SubsurfaceProfile.field0_0x0 != iVar20) {
                      local_res10[0] = 0;
                      `TCheckedPointerIterator<FLandscapeMaterialTextureStreamingInfo_const_,int,0>
                      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
                    }
                    fVar39 = fVar14;
                    if (plVar31 == plVar1) goto LAB_145f94d5e;
                    if (*plVar31 == lVar5) break;
                    plVar31 = (longlong *)((longlong)plVar31 + 0xc);
                  }
                  fVar39 = *(float *)(plVar31 + 1);
LAB_145f94d5e:
                  *(float *)(pFVar26 + 0x40) = fVar39 * *(float *)(pFVar26 + 0x40);
                  param_2 = local_res18;
                }
              }
            }
            pUVar33 = (UMaterialInterface *)(ulonglong)(uVar19 + 1);
            local_100 = local_100 + 8;
          } while ((int)(uVar19 + 1) < (int)local_110);
        }
        pFVar23 = GetMeshMapBuildData(this);
        if ((pFVar23 == (FMeshMapBuildData *)0x0) ||
           (pFVar9 = (pFVar23->LightMap).Reference, pFVar9 == (FLightMap *)0x0)) {
          this_00 = (FLightMap2D *)0x0;
        }
        else {
          this_00 = (FLightMap2D *)(**(code **)(pFVar9->_padding_ + 0x30))();
        }
        bVar16 = AllowHighQualityLightmaps(FVar4);
        uVar18 = 0;
        param_2 = local_res18;
        if ((((this_00 != (FLightMap2D *)0x0) &&
             (bVar17 = FLightMap2D::IsValid(this_00,bVar16 ^ 1), pTVar15 = local_res18,
             param_2 = local_res18, bVar17)) &&
            (dVar2 = (this_00->CoordinateScale).field0_0x0._s_0.X, dVar38 < dVar2)) &&
           (dVar3 = (this_00->CoordinateScale).field0_0x0._s_0.Y, dVar38 < dVar3)) {
          if (dVar3 <= dVar2) {
            dVar2 = dVar3;
          }
          piVar32 = &local_res18->ArrayMax;
          uVar19 = local_res18->ArrayNum;
          fVar39 = (float)((double)fVar42 / dVar2);
          if (uVar19 == *piVar32) {
            uVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&local_res18->AllocatorInstance,piVar32);
          }
          pTVar15->ArrayNum = uVar19 + 1;
          uVar25 = 0;
          if ((int)uVar19 < (int)(uVar19 + 1)) {
            uVar25 = ~uVar19 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar26 = (pTVar15->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x50;
          if (pFVar26 != (FScriptContainerElement *)0x0) {
            pUVar24 = FLightMap2D::GetTexture(this_00,bVar16 ^ 1);
            *(UTexture2D **)pFVar26 = pUVar24;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar24 != (UTexture2D *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar24);
            }
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 8) = *plVar34;
            *(longlong *)(pFVar26 + 0x10) = lVar5;
            lVar5 = this->_padding_;
            piVar32 = &local_res18->ArrayMax;
            *(longlong *)(pFVar26 + 0x18) = this->_padding_;
            *(longlong *)(pFVar26 + 0x20) = lVar5;
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 0x28) = this->_padding_;
            *(longlong *)(pFVar26 + 0x30) = lVar5;
            lVar5 = this->_padding_;
            *(uint *)(pFVar26 + 0x48) = *(uint *)(pFVar26 + 0x48) & 0xfffffffe;
            *(uint *)(pFVar26 + 0x48) = *(uint *)(pFVar26 + 0x48) | 2;
            *(float *)(pFVar26 + 0x40) = fVar39;
            *(longlong *)(pFVar26 + 0x38) = lVar5;
            *(undefined4 *)(pFVar26 + 0x44) = 0;
          }
          param_2 = local_res18;
          uVar19 = local_res18->ArrayNum;
          if (uVar19 == *piVar32) {
            uVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&local_res18->AllocatorInstance,piVar32);
            param_2->ArrayNum = uVar19;
          }
          param_2->ArrayNum = uVar19 + 1;
          uVar25 = uVar18;
          if ((int)uVar19 < (int)(uVar19 + 1)) {
            uVar25 = ~uVar19 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar26 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x50;
          if (pFVar26 != (FScriptContainerElement *)0x0) {
            pUVar24 = FLightMap2D::GetAOMaterialMaskTexture(this_00);
            *(UTexture2D **)pFVar26 = pUVar24;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar24 != (UTexture2D *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar24);
            }
            lVar5 = this->_padding_;
            piVar32 = &param_2->ArrayMax;
            *(longlong *)(pFVar26 + 8) = *plVar34;
            *(longlong *)(pFVar26 + 0x10) = lVar5;
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 0x18) = this->_padding_;
            *(longlong *)(pFVar26 + 0x20) = lVar5;
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 0x28) = this->_padding_;
            *(longlong *)(pFVar26 + 0x30) = lVar5;
            lVar5 = this->_padding_;
            *(uint *)(pFVar26 + 0x48) = *(uint *)(pFVar26 + 0x48) & 0xfffffffe;
            *(uint *)(pFVar26 + 0x48) = *(uint *)(pFVar26 + 0x48) | 2;
            *(float *)(pFVar26 + 0x40) = fVar39;
            *(longlong *)(pFVar26 + 0x38) = lVar5;
            *(undefined4 *)(pFVar26 + 0x44) = 0;
          }
          uVar19 = param_2->ArrayNum;
          if (uVar19 == *piVar32) {
            uVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&param_2->AllocatorInstance,piVar32);
            param_2->ArrayNum = uVar19;
          }
          param_2->ArrayNum = uVar19 + 1;
          uVar25 = uVar18;
          if ((int)uVar19 < (int)(uVar19 + 1)) {
            uVar25 = ~uVar19 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar26 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x50;
          if (pFVar26 != (FScriptContainerElement *)0x0) {
            pUVar24 = FLightMap2D::GetSkyOcclusionTexture(this_00);
            *(UTexture2D **)pFVar26 = pUVar24;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar24 != (UTexture2D *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar24);
            }
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 8) = *plVar34;
            *(longlong *)(pFVar26 + 0x10) = lVar5;
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 0x18) = this->_padding_;
            *(longlong *)(pFVar26 + 0x20) = lVar5;
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 0x28) = this->_padding_;
            *(longlong *)(pFVar26 + 0x30) = lVar5;
            lVar5 = this->_padding_;
            *(uint *)(pFVar26 + 0x48) = *(uint *)(pFVar26 + 0x48) & 0xfffffffe;
            *(uint *)(pFVar26 + 0x48) = *(uint *)(pFVar26 + 0x48) | 2;
            *(float *)(pFVar26 + 0x40) = fVar39;
            *(longlong *)(pFVar26 + 0x38) = lVar5;
            *(undefined4 *)(pFVar26 + 0x44) = 0;
          }
        }
        if ((((pFVar23 != (FMeshMapBuildData *)0x0) &&
             (pFVar10 = (pFVar23->ShadowMap).Reference, pFVar10 != (FShadowMap *)0x0)) &&
            (this_01 = (FShadowMap2D *)(**(code **)(pFVar10->_padding_ + 0x28))(),
            this_01 != (FShadowMap2D *)0x0)) &&
           ((((this_01->Texture).field0_0x0.DebugPtr != (UShadowMapTexture2D *)0x0 &&
             (dVar2 = (this_01->CoordinateScale).field0_0x0._s_0.X, dVar38 < dVar2)) &&
            (dVar3 = (this_01->CoordinateScale).field0_0x0._s_0.Y, dVar38 < dVar3)))) {
          uVar19 = param_2->ArrayNum;
          if (dVar2 <= dVar3) {
            dVar3 = dVar2;
          }
          if (uVar19 == param_2->ArrayMax) {
            uVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = uVar19 + 1;
          if ((int)uVar19 < (int)(uVar19 + 1)) {
            uVar18 = ~uVar19 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar26 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x50;
          if (pFVar26 != (FScriptContainerElement *)0x0) {
            pUVar24 = FShadowMap2D::GetTexture(this_01);
            *(UTexture2D **)pFVar26 = pUVar24;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar24 != (UTexture2D *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar24);
            }
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 8) = *plVar34;
            *(longlong *)(pFVar26 + 0x10) = lVar5;
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 0x18) = this->_padding_;
            *(longlong *)(pFVar26 + 0x20) = lVar5;
            lVar5 = this->_padding_;
            *(longlong *)(pFVar26 + 0x28) = this->_padding_;
            *(longlong *)(pFVar26 + 0x30) = lVar5;
            lVar5 = this->_padding_;
            *(uint *)(pFVar26 + 0x48) = *(uint *)(pFVar26 + 0x48) & 0xfffffffe;
            *(uint *)(pFVar26 + 0x48) = *(uint *)(pFVar26 + 0x48) | 2;
            *(float *)(pFVar26 + 0x40) = (float)((double)fVar42 / dVar3);
            *(longlong *)(pFVar26 + 0x38) = lVar5;
            *(undefined4 *)(pFVar26 + 0x44) = 0;
          }
        }
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
      }
      local_120 = local_120 + 1;
    } while (local_120 < local_11c);
  }
  pTVar28 = (TObjectPtr<UTexture2D>_u_0 *)0x0;
  if ((this->HeightmapTexture).field0_0x0.DebugPtr != (UTexture2D *)0x0) {
    uVar18 = param_2->ArrayNum;
    if (uVar18 == param_2->ArrayMax) {
      uVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    pTVar30 = &this->HeightmapTexture;
    param_2->ArrayNum = uVar18 + 1;
    uVar19 = 0;
    if ((int)uVar18 < (int)(uVar18 + 1)) {
      uVar19 = ~uVar18 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar27 = (TObjectPtr<UTexture2D>_u_0 *)
              ((param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x50);
    if (pTVar27 != (TObjectPtr<UTexture2D>_u_0 *)0x0) {
      *(uint *)(pTVar27 + 9) = *(uint *)(pTVar27 + 9) & 0xfffffffe;
      *(uint *)(pTVar27 + 9) = *(uint *)(pTVar27 + 9) | 2;
      pTVar27->DebugPtr = (UTexture2D *)0x0;
      pTVar27[1].DebugPtr = (UTexture2D *)0x0;
      pTVar27[2].DebugPtr = (UTexture2D *)0x0;
      pTVar27[3].DebugPtr = (UTexture2D *)0x0;
      pTVar27[4].DebugPtr = (UTexture2D *)0x0;
      pTVar27[5].DebugPtr = (UTexture2D *)0x0;
      pTVar27[6].DebugPtr = (UTexture2D *)0x0;
      pTVar27[7].DebugPtr = (UTexture2D *)0x0;
      pTVar27[8] = (TObjectPtr<UTexture2D>_u_0)0x3f800000;
      pTVar28 = pTVar27;
    }
    *(undefined4 *)(pTVar28 + 1) = uVar45;
    *(undefined4 *)((longlong)pTVar28 + 0xc) = uVar46;
    *(undefined4 *)(pTVar28 + 2) = uVar47;
    *(undefined4 *)((longlong)pTVar28 + 0x14) = uVar48;
    TVar35._4_4_ = uVar44;
    TVar35._0_4_ = uVar43;
    TVar36._4_4_ = uVar41;
    TVar36._0_4_ = uVar40;
    TVar11._4_4_ = uVar41;
    TVar11._0_4_ = uVar40;
    pTVar28[3] = TVar35;
    pTVar28[4] = TVar11;
    TVar12._4_4_ = uVar41;
    TVar12._0_4_ = uVar40;
    pTVar28[5] = TVar36;
    pTVar28[6] = TVar12;
    TVar13._4_4_ = uVar41;
    TVar13._0_4_ = uVar40;
    pTVar28[7] = TVar13;
    iVar20 = UTexture2D::GetSizeY((pTVar30->field0_0x0).DebugPtr);
    fVar42 = ((float)iVar20 / (float)(this->ComponentSizeQuads + 1)) * fVar42;
    if (-1 < this->ForcedLOD) {
      fVar42 = (float)(-1 << (0xdU - (char)this->ForcedLOD & 0x1f));
    }
    *(float *)(pTVar28 + 8) = fVar42;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((pTVar30->field0_0x0).DebugPtr != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)(pTVar30->field0_0x0).DebugPtr);
    }
    pTVar28->DebugPtr = (UTexture2D *)*(UTexture2D **)&pTVar30->field0_0x0;
  }
  return;
}

// GetUsedMaterials @ 145f96310

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
ULandscapeComponent::GetUsedMaterials
          (ULandscapeComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  TObjectPtr<UMaterialInterface>_u_0 TVar3;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ALandscapeProxy *pAVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  TObjectPtr<UMaterialInterface>_u_0 local_58;
  TObjectPtr<UMaterialInterface>_u_0 local_50;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_28;
  
  pAVar9 = GetLandscapeProxy(this);
  if (1 < (int)GMaxRHIFeatureLevel) {
    if ((pAVar9 == (ALandscapeProxy *)0x0) || (pAVar9->bUseDynamicMaterialInstance == false)) {
      pFVar12 = (this->MaterialInstances).AllocatorInstance.Data;
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      pFVar1 = pFVar12 + (longlong)(this->MaterialInstances).ArrayNum * 8;
      for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
        if (*(longlong *)pFVar12 != 0) {
          if (((local_38.AllocatorInstance.Data <= pFVar12) &&
              (local_38.ArrayMax = (int)((ulonglong)local_38._8_8_ >> 0x20),
              lVar11 = (longlong)local_38.ArrayMax,
              pFVar12 < local_38.AllocatorInstance.Data + lVar11 * 8)) &&
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
          if (local_38.ArrayNum == local_38.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
            local_38.ArrayNum = iVar7;
          }
          lVar11 = (longlong)local_38.ArrayNum;
          local_38.ArrayNum = local_38.ArrayNum + 1;
          pUVar2 = *(UObject **)pFVar12;
          *(UObject **)(local_38.AllocatorInstance.Data + lVar11 * 8) = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
        }
      }
      if ((param_1 == &local_38) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = local_38.ArrayNum;
      FVar10.Data = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,local_38.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        RelocateConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceConstant>,int>
                  ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8,
                   (TObjectPtr<UMaterialInstanceConstant> *)local_38.AllocatorInstance.Data,iVar7);
        local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
        FVar10.Data = local_38.AllocatorInstance.Data;
      }
    }
    else {
      pFVar12 = (this->MaterialInstancesDynamic).AllocatorInstance.Data;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      pFVar1 = pFVar12 + (longlong)(this->MaterialInstancesDynamic).ArrayNum * 8;
      for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
        if (*(longlong *)pFVar12 != 0) {
          if (((local_48.AllocatorInstance.Data <= pFVar12) &&
              (local_48.ArrayMax = (int)((ulonglong)local_48._8_8_ >> 0x20),
              lVar11 = (longlong)local_48.ArrayMax,
              pFVar12 < local_48.AllocatorInstance.Data + lVar11 * 8)) &&
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
          if (local_48.ArrayNum == local_48.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_48.AllocatorInstance,&local_48.ArrayMax);
            local_48.ArrayNum = iVar7;
          }
          lVar11 = (longlong)local_48.ArrayNum;
          local_48.ArrayNum = local_48.ArrayNum + 1;
          pUVar2 = *(UObject **)pFVar12;
          *(UObject **)(local_48.AllocatorInstance.Data + lVar11 * 8) = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
        }
      }
      if ((param_1 == &local_48) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = local_48.ArrayNum;
      FVar10.Data = local_48.AllocatorInstance.Data;
      if (local_48.ArrayNum != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,local_48.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                           &param_1->ArrayMax);
        RelocateConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInstanceDynamic>,int>
                  ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8,
                   (TObjectPtr<UMaterialInstanceDynamic> *)local_48.AllocatorInstance.Data,iVar7);
        local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
        FVar10.Data = local_48.AllocatorInstance.Data;
      }
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
  iVar7 = (this->MobileMaterialInterfaces).ArrayNum;
  if (iVar7 != 0) {
    pFVar12 = (this->MobileMaterialInterfaces).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar1 = pFVar12 + (longlong)iVar7 * 8;
    for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
      if (*(longlong *)pFVar12 != 0) {
        if (((local_28.AllocatorInstance.Data <= pFVar12) &&
            (local_28.ArrayMax = (int)((ulonglong)local_28._8_8_ >> 0x20),
            lVar11 = (longlong)local_28.ArrayMax,
            pFVar12 < local_28.AllocatorInstance.Data + lVar11 * 8)) &&
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
        if (local_28.ArrayNum == local_28.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_28.AllocatorInstance,&local_28.ArrayMax);
          local_28.ArrayNum = iVar7;
        }
        lVar11 = (longlong)local_28.ArrayNum;
        local_28.ArrayNum = local_28.ArrayNum + 1;
        pUVar2 = *(UObject **)pFVar12;
        *(UObject **)(local_28.AllocatorInstance.Data + lVar11 * 8) = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
      }
    }
    if ((param_1 == &local_28) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = local_28.ArrayNum;
    if (local_28.ArrayNum != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_28.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                         &param_1->ArrayMax);
      RelocateConstructItems<UMaterialInterface_*,TObjectPtr<UMaterialInterface>,int>
                ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8,
                 (TObjectPtr<UMaterialInterface> *)local_28.AllocatorInstance.Data,iVar7);
      local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  TVar3 = (TObjectPtr<UMaterialInterface>_u_0)(this->OverrideMaterial).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr != (UMaterialInterface *)0x0) {
    pTVar4 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    local_58 = TVar3;
    if (((pTVar4 <= &local_58) && (&local_58 < pTVar4 + param_1->ArrayMax)) &&
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
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    ((TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8)
    )->DebugPtr = (UMaterialInterface *)local_58;
  }
  piVar13 = &param_1->ArrayMax;
  local_50 = (TObjectPtr<UMaterialInterface>_u_0)(this->OverrideHoleMaterial).field0_0x0.DebugPtr;
  if (local_50.DebugPtr != (UMaterialInterface *)0x0) {
    pTVar4 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
    if (((pTVar4 <= &local_50) && (&local_50 < pTVar4 + *piVar13)) &&
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
    iVar7 = param_1->ArrayNum;
    if (iVar7 == *piVar13) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar13);
    }
    param_1->ArrayNum = iVar7 + 1;
    ((TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8)
    )->DebugPtr = (UMaterialInterface *)local_50;
  }
  return;
}

