// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 18

// SupportsComponentClass @ 14dc295a0

SupportType __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::SupportsComponentClass
          (FClothComponentCacheAdapter *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = (UClass *)(**(code **)(*(longlong *)this + 0x10))();
  if (param_1 == pUVar2) {
    return Direct;
  }
  if (pUVar2 != (UClass *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) == &pUVar2->_padding_
       )) {
      return Derived;
    }
    return None;
  }
  return None;
}

// GetDesiredClass @ 14dc29610

UClass * __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::GetDesiredClass
          (FClothComponentCacheAdapter *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothComponent",
               &Z_Registration_Info_UClass_UChaosClothComponent.InnerSingleton,
               UChaosClothComponent::StaticRegisterNativesUChaosClothComponent,0xab0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosClothComponent>,
               InternalVTableHelperCtorCaller<UChaosClothComponent>,aFStackX_8,
               USkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothComponent.InnerSingleton;
}

// GetPriority @ 14dc29620

uchar __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::GetPriority(FClothComponentCacheAdapter *this)

{
  return ::Chaos::FComponentCacheAdapter::EngineAdapterPriorityBegin;
}

// GetGuid @ 14dc29630

FGuid * __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::GetGuid
          (FClothComponentCacheAdapter *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// ValidForPlayback @ 14dc29650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::ValidForPlayback
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  bool bVar1;
  UChaosClothComponent *pUVar2;
  
  pUVar2 = GetClothComponent(this,param_1);
  if (pUVar2 != (UChaosClothComponent *)0x0) {
    bVar1 = ::Chaos::FClothingCacheSchema::CacheIsValidForPlayback(param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetComponentSolver @ 14dc29690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPBDRigidsSolver * __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::GetComponentSolver
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1)

{
  return (FPBDRigidsSolver *)0x0;
}

// BuildEventsSolver @ 14dc296a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPhysicsSolverEvents * __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::BuildEventsSolver
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  UChaosClothComponent *this_00;
  FPhysicsSolverEvents *pFVar3;
  
  this_00 = GetClothComponent(this,param_1);
  if (this_00 == (UChaosClothComponent *)0x0) {
    return (FPhysicsSolverEvents *)0x0;
  }
  UChaosClothComponent::RecreateClothSimulationProxy(this_00);
  if ((this_00->ClothSimulationProxy).Object == (FClothSimulationProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPhysicsSolverEvents *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FPhysicsSolverEvents *)(((this_00->ClothSimulationProxy).Object)->Solver).Ptr;
}

// SetRestState @ 14dc29710

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

void __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::SetRestState
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          TTransform<double> *param_3,double param_4)

{
  TUniquePtr<FClothingSimulationCacheData,TDefaultDelete<FClothingSimulationCacheData>_> *pTVar1;
  FClothSimulationProxy *pFVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  UChaosClothComponent *pUVar6;
  FClothingSimulationCacheData *pFVar7;
  FClothingSimulationCacheData *pFVar8;
  float fVar9;
  undefined1 auStackY_f8 [32];
  longlong local_c8 [2];
  undefined1 local_b8 [48];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  if (param_2 == (UChaosCache *)0x0) {
    return;
  }
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  fVar9 = UChaosCache::GetDuration(param_2);
  if (fVar9 == 0.0) {
    return;
  }
  pUVar6 = GetClothComponent(this,param_1);
  if (pUVar6 == (UChaosClothComponent *)0x0) {
    return;
  }
  pFVar2 = (pUVar6->ClothSimulationProxy).Object;
  if (pFVar2 == (FClothSimulationProxy *)0x0) {
    return;
  }
  pFVar8 = (FClothingSimulationCacheData *)0x0;
  local_5c = 0x80;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_4_ = 0;
  local_b8._12_4_ = 0;
  local_b8._16_8_ = (FScriptContainerElement *)0x0;
  local_b8._24_4_ = 0;
  local_b8._28_4_ = 0;
  local_b8._32_8_ = (FScriptContainerElement *)0x0;
  local_b8._40_4_ = 0;
  local_b8._44_4_ = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  ::Chaos::FClothingCacheSchema::LoadCacheData
            (param_2,param_4,(FClothingSimulationCacheData *)local_b8);
  pFVar7 = ::operator_new(0x80);
  if (pFVar7 != (FClothingSimulationCacheData *)0x0) {
    (pFVar7->CachedPositions).AllocatorInstance.Data = (FScriptContainerElement *)local_b8._0_8_;
    local_b8._0_8_ = (FScriptContainerElement *)0x0;
    (pFVar7->CachedPositions).ArrayNum = local_b8._8_4_;
    (pFVar7->CachedPositions).ArrayMax = local_b8._12_4_;
    local_b8._8_4_ = 0;
    local_b8._12_4_ = 0;
    (pFVar7->CachedVelocities).AllocatorInstance.Data = (FScriptContainerElement *)local_b8._16_8_;
    local_b8._16_8_ = (FScriptContainerElement *)0x0;
    (pFVar7->CachedVelocities).ArrayNum = local_b8._24_4_;
    (pFVar7->CachedVelocities).ArrayMax = local_b8._28_4_;
    local_b8._24_4_ = 0;
    local_b8._28_4_ = 0;
    (pFVar7->CacheIndices).AllocatorInstance.Data = (FScriptContainerElement *)local_b8._32_8_;
    local_b8._32_8_ = (FScriptContainerElement *)0x0;
    (pFVar7->CacheIndices).ArrayNum = local_b8._40_4_;
    (pFVar7->CacheIndices).ArrayMax = local_b8._44_4_;
    local_b8._40_4_ = 0;
    local_b8._44_4_ = 0;
    *(undefined8 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x0 = 0;
    *(undefined8 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x8 = 0;
    *(undefined8 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x20 = 0;
    *(undefined4 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x28 = 0;
    *(undefined4 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x34 = 0;
    *(undefined8 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x40 = 0;
    *(undefined4 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x48 = 0;
    TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                *)&pFVar7->CachedReferenceSpaceTransforms,
               (TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                *)local_88);
    pFVar8 = pFVar7;
  }
  pTVar1 = &pFVar2->CacheData;
  if (pTVar1 == (TUniquePtr<FClothingSimulationCacheData,TDefaultDelete<FClothingSimulationCacheData>_>
                 *)local_c8) {
    if (pFVar8 == (FClothingSimulationCacheData *)0x0) goto LAB_14dc29938;
    *(undefined4 *)&(pFVar8->CachedReferenceSpaceTransforms).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar8->CachedReferenceSpaceTransforms).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar8->CachedReferenceSpaceTransforms);
    pFVar4 = (pFVar8->CacheIndices).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar8->CachedVelocities).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar8->CachedPositions).AllocatorInstance.Data;
    pFVar7 = pFVar8;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar8;
    if (pFVar7 == (FClothingSimulationCacheData *)0x0) goto LAB_14dc29938;
    *(undefined4 *)&(pFVar7->CachedReferenceSpaceTransforms).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar7->CachedReferenceSpaceTransforms).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar7->CachedReferenceSpaceTransforms);
    pFVar4 = (pFVar7->CacheIndices).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar7->CachedVelocities).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar7->CachedPositions).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  ::operator_delete(pFVar7,0x80);
LAB_14dc29938:
  pFVar2->SolverMode = Default;
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar5 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if ((FScriptContainerElement *)local_b8._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._32_8_);
  }
  if ((FScriptContainerElement *)local_b8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  return;
}

// InitializeForRecord @ 14dc29a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::InitializeForRecord
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  FClothSimulationProxy *pFVar1;
  UChaosClothComponent *pUVar2;
  
  pUVar2 = GetClothComponent(this,param_1);
  if ((pUVar2 != (UChaosClothComponent *)0x0) &&
     (pFVar1 = (pUVar2->ClothSimulationProxy).Object, pFVar1 != (FClothSimulationProxy *)0x0)) {
    pFVar1->SolverMode = EnableSolverForSimulateRecord;
  }
  return true;
}

// InitializeForPlayback @ 14dc29a50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::InitializeForPlayback
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          float param_3)

{
  FClothSimulationProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  UChaosClothComponent *pUVar7;
  undefined1 local_28 [8];
  code *local_20;
  undefined1 *local_18;
  
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_18 = local_28;
  local_20 = Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_20,puVar5);
  bVar3 = IsInGameThread();
  if (((!bVar3) && (*(int *)&pFVar6[2].field_0x4 < 1)) || (*(char *)(pFVar6 + 3) != '\0')) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x129,"IsInGameThreadContext()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar7 = GetClothComponent(this,param_1);
  if ((pUVar7 != (UChaosClothComponent *)0x0) &&
     (pFVar1 = (pUVar7->ClothSimulationProxy).Object, pFVar1 != (FClothSimulationProxy *)0x0)) {
    pFVar1->SolverMode = DisableSolverForPlayback;
  }
  return true;
}

// Record_PostSolve @ 14dc29b10

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
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::Record_PostSolve
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1,
          TTransform<double> *param_2,FPendingFrameWrite *param_3,double param_4)

{
  FClothSimulationProxy *pFVar1;
  FClothingSimulationSolver *pFVar2;
  UChaosClothComponent *pUVar3;
  
  pUVar3 = GetClothComponent(this,param_1);
  if (((pUVar3 != (UChaosClothComponent *)0x0) &&
      (pFVar1 = (pUVar3->ClothSimulationProxy).Object, pFVar1 != (FClothSimulationProxy *)0x0)) &&
     (pFVar2 = (pFVar1->Solver).Ptr, pFVar2 != (FClothingSimulationSolver *)0x0)) {
    ::Chaos::FClothingCacheSchema::RecordPostSolve(pFVar2,param_3,param_4);
    return;
  }
  return;
}

// Playback_PreSolve @ 14dc29b60

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
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::Playback_PreSolve
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          double param_3,FPlaybackTickRecord *param_4,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_5)

{
  FClothSimulationProxy *pFVar1;
  FClothingSimulationSolver *pFVar2;
  code *pcVar3;
  bool bVar4;
  UChaosClothComponent *pUVar5;
  
  if (param_2 == (UChaosCache *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCache",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponentCacheAdapter.cpp"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = GetClothComponent(this,param_1);
  if (((pUVar5 != (UChaosClothComponent *)0x0) &&
      (pFVar1 = (pUVar5->ClothSimulationProxy).Object, pFVar1 != (FClothSimulationProxy *)0x0)) &&
     (pFVar2 = (pFVar1->Solver).Ptr, pFVar2 != (FClothingSimulationSolver *)0x0)) {
    ::Chaos::FClothingCacheSchema::PlaybackPreSolve(param_2,param_3,param_4,pFVar2);
  }
  return;
}

// WaitForSolverTasks @ 14dc29c00

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
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::WaitForSolverTasks
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1)

{
  FClothSimulationProxy *this_00;
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  UChaosClothComponent *this_01;
  UChaosClothComponent *this_02;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  puVar3 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
  bVar2 = IsInGameThread();
  if (((!bVar2) && (*(int *)&pFVar4[2].field_0x4 < 1)) || (*(char *)(pFVar4 + 3) != '\0')) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x129,"IsInGameThreadContext()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_01 = GetClothComponent(this,param_1);
  if (this_01 != (UChaosClothComponent *)0x0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothComponent.cpp"
                         ,0xa5,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this_01->bBindToLeaderComponent != '\0') {
      this_02 = (UChaosClothComponent *)
                FWeakObjectPtr::Get(&(this_01->LeaderClothComponent).WeakPtr);
      if (this_02 != (UChaosClothComponent *)0x0) {
        UChaosClothComponent::HandleExistingParallelSimulation(this_02);
      }
    }
    this_00 = (this_01->ClothSimulationProxy).Object;
    if ((this_00 != (FClothSimulationProxy *)0x0) &&
       ((this_00->ParallelTask).Reference != (FBaseGraphTask *)0x0)) {
      FClothSimulationProxy::CompleteParallelSimulation_GameThread(this_00);
      USkinnedMeshComponent::InvalidateCachedBounds((USkinnedMeshComponent *)this_01);
    }
  }
  return;
}

// ~FClothComponentCacheAdapter @ 14dc35c60

void __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::~FClothComponentCacheAdapter
          (FClothComponentCacheAdapter *this)

{
  return;
}

// GetClothComponent @ 14dc4a870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UChaosClothComponent * __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::GetClothComponent
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  UChaosClothComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UChaosClothComponent *pUVar8;
  ForAnyElementType FVar9;
  undefined1 local_res10 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_28;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar7 = UChaosClothComponent::StaticClass();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar7->_padding_)) {
      return (UChaosClothComponent *)param_1;
    }
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar7->_padding_)) {
      pUVar8 = (UChaosClothComponent *)0x0;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      USceneComponent::GetChildrenComponents((USceneComponent *)param_1,true,&local_28);
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = 0;
      pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
      FVar9.Data = local_28.AllocatorInstance.Data;
      if (local_28.AllocatorInstance.Data != pFVar1) {
        do {
          lVar2 = *(longlong *)FVar9.Data;
          pUVar7 = UChaosClothComponent::StaticClass();
          iVar6 = (int)pUVar7->_padding_;
          if ((iVar6 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar7->_padding_)) {
            if ((local_38.Data <= FVar9.Data) &&
               ((FVar9.Data < local_38.Data + (longlong)local_30._4_4_ * 8 &&
                (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)))) {
              pcVar4 = (code *)swi(3);
              pUVar8 = (UChaosClothComponent *)(*pcVar4)();
              return pUVar8;
            }
            iVar6 = (int)local_30;
            if ((int)local_30 == local_30._4_4_) {
              iVar6 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_38,(int *)((longlong)&local_30 + 4));
            }
            local_30 = CONCAT44(local_30._4_4_,iVar6 + 1);
            *(longlong *)(local_38.Data + (longlong)iVar6 * 8) = *(longlong *)FVar9.Data;
          }
          FVar9.Data = FVar9.Data + 8;
        } while (FVar9.Data != pFVar1);
        if ((int)local_30 < 2) {
          if ((int)local_30 == 1) {
            pUVar3 = *(UChaosClothComponent **)local_38.Data;
            if (pUVar3 != (UChaosClothComponent *)0x0) {
              pUVar7 = UChaosClothComponent::StaticClass();
              iVar6 = (int)pUVar7->_padding_;
              if ((iVar6 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
                  &pUVar7->_padding_)) {
                pUVar8 = pUVar3;
              }
            }
            if (local_38.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data);
            }
            if (local_28.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return pUVar8;
            }
            FMemory::Free(local_28.AllocatorInstance.Data);
            return pUVar8;
          }
        }
        else {
          `UE::Chaos::ClothAsset::FClothComponentCacheAdapter::GetClothComponent'::__l15::<lambda_2>
          ::operator()(local_res10);
        }
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  return (UChaosClothComponent *)0x0;
}

// GetClothSolver @ 14dc4b0e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FClothingSimulationSolver * __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::GetClothSolver
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1)

{
  FClothSimulationProxy *pFVar1;
  UChaosClothComponent *pUVar2;
  
  pUVar2 = GetClothComponent(this,param_1);
  if ((pUVar2 != (UChaosClothComponent *)0x0) &&
     (pFVar1 = (pUVar2->ClothSimulationProxy).Object, pFVar1 != (FClothSimulationProxy *)0x0)) {
    return (pFVar1->Solver).Ptr;
  }
  return (FClothingSimulationSolver *)0x0;
}

// GetProxy @ 14dc4ea00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FClothSimulationProxy * __thiscall
UE::Chaos::ClothAsset::FClothComponentCacheAdapter::GetProxy
          (FClothComponentCacheAdapter *this,UPrimitiveComponent *param_1)

{
  UChaosClothComponent *pUVar1;
  
  pUVar1 = GetClothComponent(this,param_1);
  if (pUVar1 != (UChaosClothComponent *)0x0) {
    return (pUVar1->ClothSimulationProxy).Object;
  }
  return (FClothSimulationProxy *)0x0;
}

// operator() @ 15058af20

bool __thiscall
`UE::Chaos::ClothAsset::FClothComponentCacheAdapter::GetClothComponent'::__l15::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3840161642679632027>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3840161642679632027>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

