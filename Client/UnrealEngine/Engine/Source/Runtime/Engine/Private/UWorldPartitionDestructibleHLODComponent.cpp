// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 148a29050

UClass * __cdecl UWorldPartitionDestructibleHLODComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionDestructibleHLODComponent",
               &Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.InnerSingleton,
               StaticRegisterNativesUWorldPartitionDestructibleHLODComponent,0x440,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionDestructibleHLODComponent>,
               InternalVTableHelperCtorCaller<UWorldPartitionDestructibleHLODComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.InnerSingleton;
}

// UWorldPartitionDestructibleHLODComponent @ 148a43120

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorldPartitionDestructibleHLODComponent * __thiscall
UWorldPartitionDestructibleHLODComponent::UWorldPartitionDestructibleHLODComponent
          (UWorldPartitionDestructibleHLODComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->DestructibleHLODMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->DestructibleHLODInstancesMappingData).ISMCs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DestructibleHLODInstancesMappingData).ISMCs.ArrayNum = 0;
  (this->DestructibleHLODInstancesMappingData).ISMCs.ArrayMax = 0;
  (this->DestructibleHLODInstancesMappingData).ComponentsMapping.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestructibleHLODInstancesMappingData).ComponentsMapping.ArrayNum = 0;
  (this->DestructibleHLODInstancesMappingData).ComponentsMapping.ArrayMax = 0;
  *(undefined8 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData = 0;
  *(undefined8 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x8 = 0;
  *(undefined8 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x20 = 0;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x28 = 0;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x2c = 0x80
  ;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x34 = 0;
  *(undefined8 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x40 = 0;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x48 = 0;
  FFastArraySerializer::FFastArraySerializer((FFastArraySerializer *)&this->DestructibleHLODState);
  (this->DestructibleHLODState).DamagedActors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestructibleHLODState).DamagedActors.ArrayNum = 0;
  (this->DestructibleHLODState).DamagedActors.ArrayMax = 0;
  (this->DestructibleHLODState).OwnerComponent.field0_0x0.DebugPtr =
       (UWorldPartitionDestructibleHLODComponent *)0x0;
  (this->DestructibleHLODState).ActorsToDamagedActorsMapping.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestructibleHLODState).ActorsToDamagedActorsMapping.ArrayNum = 0;
  (this->DestructibleHLODState).ActorsToDamagedActorsMapping.ArrayMax = 0;
  (this->DestructibleHLODState).bIsServer = false;
  (this->DestructibleHLODState).bIsClient = false;
  (this->DestructibleHLODState).NumDestructibleActors = 0;
  (this->VisibilityMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->VisibilityTexture).field0_0x0.DebugPtr = (UTexture2DDynamic *)0x0;
  (this->VisibilityBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilityBuffer).ArrayNum = 0;
  (this->VisibilityBuffer).ArrayMax = 0;
  (this->DestructibleActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestructibleActors).ArrayNum = 0;
  (this->DestructibleActors).ArrayMax = 0;
  return this;
}

// UWorldPartitionDestructibleHLODComponent @ 148a43240

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorldPartitionDestructibleHLODComponent * __thiscall
UWorldPartitionDestructibleHLODComponent::UWorldPartitionDestructibleHLODComponent
          (UWorldPartitionDestructibleHLODComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->DestructibleHLODMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  (this->DestructibleHLODInstancesMappingData).ISMCs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->DestructibleHLODInstancesMappingData).ISMCs.ArrayNum = 0;
  (this->DestructibleHLODInstancesMappingData).ISMCs.ArrayMax = 0;
  (this->DestructibleHLODInstancesMappingData).ComponentsMapping.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestructibleHLODInstancesMappingData).ComponentsMapping.ArrayNum = 0;
  (this->DestructibleHLODInstancesMappingData).ComponentsMapping.ArrayMax = 0;
  *(undefined8 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData = 0;
  *(undefined8 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x8 = 0;
  *(undefined8 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x20 = 0;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x28 = 0;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x2c = 0x80
  ;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x34 = 0;
  *(undefined8 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x40 = 0;
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x48 = 0;
  FFastArraySerializer::FFastArraySerializer((FFastArraySerializer *)&this->DestructibleHLODState);
  (this->DestructibleHLODState).DamagedActors.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestructibleHLODState).DamagedActors.ArrayNum = 0;
  (this->DestructibleHLODState).DamagedActors.ArrayMax = 0;
  (this->DestructibleHLODState).OwnerComponent.field0_0x0.DebugPtr =
       (UWorldPartitionDestructibleHLODComponent *)0x0;
  (this->DestructibleHLODState).ActorsToDamagedActorsMapping.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DestructibleHLODState).ActorsToDamagedActorsMapping.ArrayNum = 0;
  (this->DestructibleHLODState).ActorsToDamagedActorsMapping.ArrayMax = 0;
  (this->DestructibleHLODState).bIsServer = false;
  (this->DestructibleHLODState).bIsClient = false;
  (this->DestructibleHLODState).NumDestructibleActors = 0;
  (this->VisibilityMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->VisibilityTexture).field0_0x0.DebugPtr = (UTexture2DDynamic *)0x0;
  this->VisibilityTextureSize = 0;
  (this->VisibilityBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilityBuffer).ArrayNum = 0;
  (this->VisibilityBuffer).ArrayMax = 0;
  (this->DestructibleActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestructibleActors).ArrayNum = 0;
  (this->DestructibleActors).ArrayMax = 0;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  return this;
}

// ~UWorldPartitionDestructibleHLODComponent @ 148a44ac0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
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
UWorldPartitionDestructibleHLODComponent::~UWorldPartitionDestructibleHLODComponent
          (UWorldPartitionDestructibleHLODComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->DestructibleActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisibilityBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestructibleHLODState).ActorsToDamagedActorsMapping.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestructibleHLODState).DamagedActors.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FFastArraySerializer::~FFastArraySerializer((FFastArraySerializer *)&this->DestructibleHLODState);
  *(undefined4 *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x48 = 0;
  pvVar2 = *(void **)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FActorInstanceMappingsRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FActorInstanceMappingsRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FActorInstanceMappingsRef>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DestructibleHLODInstancesMappingData).PerActorMappingData);
  pFVar1 = (this->DestructibleHLODInstancesMappingData).ComponentsMapping.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestructibleHLODInstancesMappingData).ISMCs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// operator() @ 148a46190

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FRHITexture> TVar6;
  uint uVar7;
  FLLMScope local_res8 [5];
  FLLMScope local_res18 [2];
  FRHIResource *local_res20;
  FMemScope local_78;
  FMemScope local_70;
  void *local_68 [2];
  uint local_58;
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  TVar6 = FTexture2DDynamicResource::GetTexture2DRHI(*(FTexture2DDynamicResource **)this);
  lVar3 = (TVar6.Reference)->_padding_;
  if (local_res20 != (FRHIResource *)0x0) {
    LOCK();
    pFVar1 = &local_res20->AtomicFlags;
    aVar2 = pFVar1->Packed;
    pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
    UNLOCK();
    if (((int)aVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OldPacked & DeletingBit) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa2,L"Resource is being deleted."), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = (uint)aVar2 & 0x3fffffff;
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xa4,L"Reference count has underflowed.");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewValue >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x53,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (uVar7 == 1) {
      FRHIResource::MarkForDelete(local_res20);
    }
  }
  local_50[1] = 0;
  local_40 = 0;
  local_34 = 0;
  local_38 = 1;
  local_50[0] = lVar3;
  FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_78,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_68,param_1);
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res8);
  if ((local_58 < *(uint *)((longlong)this + 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("VisibilityTextureSize <= LockResult.Stride",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                         ,0x124,
                         L"UpdateVisibilityTexture: copy dest (%d) is smaller than source (%d)"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(uint *)((longlong)this + 0x18) < *(uint *)((longlong)this + 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("VisibilityTextureSize <= (uint32)VisibilityBuffer.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                         ,0x125,
                         L"UpdateVisibilityTexture: Visibility texture size (%d) is greater than the visibility buffer size (%d)"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)((longlong)this + 0x18);
  if (local_58 < *(uint *)((longlong)this + 0x18)) {
    uVar7 = local_58;
  }
  if (*(uint *)((longlong)this + 8) < uVar7) {
    uVar7 = *(uint *)((longlong)this + 8);
  }
  memcpy(local_68[0],*(void **)((longlong)this + 0x10),(ulonglong)uVar7);
  FLLMScope::FLLMScope(local_res18,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_70,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1,local_50);
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// ApplyDamagedActorState @ 148a49e70

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UWorldPartitionDestructibleHLODComponent::ApplyDamagedActorState
          (UWorldPartitionDestructibleHLODComponent *this,int param_1,uchar param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  undefined1 local_res18 [8];
  code *local_38;
  undefined1 *local_30;
  
  if ((-1 < param_1) && (param_1 < (this->VisibilityBuffer).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->VisibilityBuffer).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->VisibilityBuffer).AllocatorInstance.Data[param_1] = (FScriptContainerElement)param_2;
  }
  if (param_2 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ZeroedTransform.Rotation.XY = UE::Math::TTransform<double>::Identity.Rotation.XY;
        ZeroedTransform.Translation.XY = UE::Math::TTransform<double>::Identity.Translation.XY;
        dVar2 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1] * 0.0;
        dVar3 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1] * 0.0;
        ZeroedTransform.Rotation.ZW = UE::Math::TTransform<double>::Identity.Rotation.ZW;
        ZeroedTransform.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
        ZeroedTransform.Scale3D.ZW.m128d_f64[0] =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0] * 0.0;
        ZeroedTransform.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
        ZeroedTransform.Translation.ZW = UE::Math::TTransform<double>::Identity.Translation.ZW;
        ZeroedTransform.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
        ZeroedTransform.Scale3D.XY.m128d_f64[0] =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0] * 0.0;
        ZeroedTransform.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
        _Init_thread_footer(&::_TSS0);
      }
    }
    local_30 = local_res18;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWorldPartitionDestructibleHLODComponent::ApplyDamagedActorState'::__l8::<lambda_1>,void,UHLODInstancedStaticMeshComponent_*,unsigned_int,unsigned_int>
               ::Call;
    FHLODInstancingPackedMappingData::ForEachActorInstancingMapping
              (&this->DestructibleHLODInstancesMappingData,param_1,
               (TFunctionRef<void___cdecl(UHLODInstancedStaticMeshComponent_*,unsigned_int,unsigned_int)>
                *)&local_38);
  }
  return;
}

// BeginPlay @ 148a4a380

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
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
UWorldPartitionDestructibleHLODComponent::BeginPlay(UWorldPartitionDestructibleHLODComponent *this)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ENetMode EVar7;
  int iVar8;
  FScriptContainerElement *_Dst;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  EVar7 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
  if (EVar7 != NM_DedicatedServer) {
    iVar8 = (this->DestructibleActors).ArrayNum;
    pTVar2 = &this->VisibilityBuffer;
    piVar1 = &(this->VisibilityBuffer).ArrayNum;
    iVar9 = 1;
    if (iVar8 != 0) {
      iVar9 = iVar8;
    }
    uVar3 = (ulonglong)(iVar9 - 1) * 2 + 1;
    iVar8 = *piVar1;
    lVar4 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar4 & 0x1f);
    if (iVar8 < (int)uVar10) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar10 - iVar8,&pTVar2->AllocatorInstance,piVar1,
                 &(this->VisibilityBuffer).ArrayMax);
    }
    else {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar8) {
        uVar11 = iVar8 - uVar10;
        if (((int)(uVar11 | uVar10) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar11 != 0) {
          _Dst = (pTVar2->AllocatorInstance).Data + (int)uVar10;
          iVar8 = (*piVar1 - uVar11) - uVar10;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (int)uVar11,(longlong)iVar8);
          }
          *piVar1 = *piVar1 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&pTVar2->AllocatorInstance,*piVar1,&(this->VisibilityBuffer).ArrayMax);
        }
      }
    }
    memset((pTVar2->AllocatorInstance).Data,0xff,(longlong)(this->VisibilityBuffer).ArrayNum);
  }
  FWorldPartitionDestructibleHLODState::Initialize(&this->DestructibleHLODState,this);
  return;
}

// DamageActor @ 148a4f1c0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
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
UWorldPartitionDestructibleHLODComponent::DamageActor
          (UWorldPartitionDestructibleHLODComponent *this,int param_1,float param_2)

{
  ENetMode EVar1;
  wchar_t *pwVar2;
  uchar uVar3;
  
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  uVar3 = (uchar)(int)(param_2 * __real_437f0000);
  FWorldPartitionDestructibleHLODState::SetActorHealth(&this->DestructibleHLODState,param_1,uVar3);
  EVar1 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
  if (EVar1 != NM_DedicatedServer) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar2 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar2,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      ApplyDamagedActorState(this,param_1,uVar3);
      UpdateVisibilityTexture(this);
    }
  }
  return;
}

// DestroyActor @ 148a4fdc0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
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
UWorldPartitionDestructibleHLODComponent::DestroyActor
          (UWorldPartitionDestructibleHLODComponent *this,int param_1)

{
  ENetMode EVar1;
  wchar_t *pwVar2;
  
  FWorldPartitionDestructibleHLODState::SetActorHealth(&this->DestructibleHLODState,param_1,'\0');
  EVar1 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
  if (EVar1 != NM_DedicatedServer) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar2 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar2,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      ApplyDamagedActorState(this,param_1,'\0');
      UpdateVisibilityTexture(this);
    }
  }
  return;
}

// GetDestructibleActors @ 148a573d0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionDestructibleHLODComponent::GetDestructibleActors
          (UWorldPartitionDestructibleHLODComponent *this)

{
  return &this->DestructibleActors;
}

// GetLifetimeReplicatedProps @ 148a59140

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
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
UWorldPartitionDestructibleHLODComponent::GetLifetimeReplicatedProps
          (UWorldPartitionDestructibleHLODComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepPropertyDescriptor local_48;
  undefined8 local_38;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  code *local_28;
  FDoRepLifetimeParams local_20;
  
  USceneComponent::GetLifetimeReplicatedProps((USceneComponent *)this,param_1);
  uStack_30 = 1;
  local_48.PropertyName = L"DestructibleHLODState";
  local_48.RepIndex = 0x11;
  local_38 = 0;
  local_20._9_4_ = uStack_2f;
  local_20.bIsPushBased = true;
  local_20._13_2_ = uStack_2b;
  local_20._15_1_ = uStack_29;
  local_28 = `FWorldPartitionDestructibleHLODState::GetFastArrayCreateReplicationFragmentFunction'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_20.CreateAndRegisterReplicationFragmentFunction =
       `FWorldPartitionDestructibleHLODState::GetFastArrayCreateReplicationFragmentFunction'::__l2::
       <lambda_1>::<lambda_invoker_cdecl>;
  local_48.ArrayDim = 1;
  local_20.Condition = COND_None;
  local_20.RepNotifyCondition = REPNOTIFY_OnChanged;
  RegisterReplicatedLifetimeProperty(&local_48,param_1,&local_20);
  return;
}

// GetPrivateStaticClass @ 148a5ad80

UClass * __cdecl UWorldPartitionDestructibleHLODComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionDestructibleHLODComponent",
               &Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.InnerSingleton,
               StaticRegisterNativesUWorldPartitionDestructibleHLODComponent,0x440,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionDestructibleHLODComponent>,
               InternalVTableHelperCtorCaller<UWorldPartitionDestructibleHLODComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.InnerSingleton;
}

// OnDestructionStateUpdated @ 148a5fa60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UWorldPartitionDestructibleHLODComponent::OnDestructionStateUpdated
          (UWorldPartitionDestructibleHLODComponent *this)

{
  int iVar1;
  UTexture2DDynamic *this_00;
  FScriptContainerElement *_Src;
  FCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTextureResource *pFVar6;
  FRenderCommandList *this_01;
  FRenderCommandTag *pFVar7;
  wchar_t *pwVar8;
  code **ppcVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined1 auStackY_e8 [32];
  ForAnyElementType FStack_98;
  undefined8 uStack_90;
  code *apcStack_88 [2];
  code *apcStack_78 [3];
  code **ppcStack_60;
  undefined1 auStack_58 [40];
  code **ppcStack_30;
  byte bStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((this->DestructibleHLODState).bIsClient != false) {
    piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar12 <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar8 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar8,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      SetupVisibilityTexture(this);
      this_00 = (this->VisibilityTexture).field0_0x0.DebugPtr;
      if (this_00 != (UTexture2DDynamic *)0x0) {
        pFVar6 = UTexture::GetResource((UTexture *)this_00);
        if ((*piVar12 <
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          pwVar8 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar8,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
        if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)
            ) && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                  bHasNullRHIOnCommandline == false)) {
          if (pFVar6 == (FTextureResource *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<5212805655445897499>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                               ,0x11b,"TextureResource");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            uVar5 = this->VisibilityTextureSize;
            iVar1 = (this->VisibilityBuffer).ArrayNum;
            _Src = (this->VisibilityBuffer).AllocatorInstance.Data;
            FStack_98.Data = (FScriptContainerElement *)0x0;
            uStack_90 = CONCAT44(uStack_90._4_4_,iVar1);
            if (iVar1 == 0) {
              uStack_90 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar1,0,&FStack_98,iVar1,(int *)((longlong)&uStack_90 + 4));
              memcpy(FStack_98.Data,_Src,(longlong)iVar1);
            }
            apcStack_88[0] = (code *)0x0;
            ppcStack_60 = FMemory::Malloc(0x28,8);
            *ppcStack_60 = (code *)&UE::Core::Private::Function::
                                    TFunction_OwnedObject<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::`11'::<lambda_1>,1,1>
                                    ::_vftable_;
            ppcStack_60[1] = (code *)pFVar6;
            *(uint *)(ppcStack_60 + 2) = uVar5;
            ppcStack_60[3] = (code *)0x0;
            ppcStack_60[3] = (code *)FStack_98.Data;
            FStack_98.Data = (FScriptContainerElement *)0x0;
            *(undefined4 *)(ppcStack_60 + 4) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)ppcStack_60 + 0x24) = uStack_90._4_4_;
            if (ppcStack_60 + 1 != (code **)0x0) {
              apcStack_88[0] =
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
            }
            uStack_90 = 0;
            this_01 = FRenderCommandList::GetInstanceTLS();
            if (this_01 == (FRenderCommandList *)0x0) {
              FRenderThreadCommandPipe::
              Enqueue<TRenderCommandTag<_UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture_::__l11::TSTR_FUpdateHLODVisibilityTexture285>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_88);
            }
            else {
              if (this_01->bInitialized == 0) {
                FRenderCommandList::Init(this_01);
              }
              iVar1 = (this_01->CommandLists).ArrayNum;
              uVar10 = iVar1 - 1;
              uVar5 = 0;
              if ((int)uVar10 < iVar1) {
                uVar5 = ~uVar10 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar1 = (this_01->CommandLists).ArrayNum;
              auStack_58._16_8_ = apcStack_78[0];
              auStack_58._24_8_ = apcStack_78[1];
              auStack_58._32_8_ = apcStack_78[2];
              bStack_28 = 2;
              pFVar2 = (this_01->CommandLists).AllocatorInstance.Data;
              auStack_58._0_8_ = apcStack_88[0];
              ppcStack_30 = ppcStack_60;
              ppcStack_60 = (code **)0x0;
              apcStack_88[0] = (code *)0x0;
              pFVar7 = (FRenderCommandTag *)
                       TRenderCommandTag<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::TSTR_FUpdateHLODVisibilityTexture285>
                       ::Get();
              UE::RenderCommandPipe::FCommandList::Enqueue
                        (pFVar2 + (iVar1 + -1),
                         (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_58,pFVar7);
              uVar11 = (ulonglong)bStack_28;
              if ((2 < uVar11) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar11] ==
                  UE::Core::Private::
                  TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                  Destruct) {
                if ((code *)auStack_58._0_8_ != (code *)0x0) {
                  ppcVar9 = (code **)(auStack_58 + 0x10);
                  if (ppcStack_30 != (code **)0x0) {
                    ppcVar9 = ppcStack_30;
                  }
                  (**(code **)(*ppcVar9 + 0x10))();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar11])(auStack_58);
              }
            }
            if (apcStack_88[0] != (code *)0x0) {
              ppcVar9 = apcStack_88 + 2;
              if (ppcStack_60 != (code **)0x0) {
                ppcVar9 = ppcStack_60;
              }
              (**(code **)(*ppcVar9 + 0x10))();
            }
            if (FStack_98.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_98.Data);
            }
          }
        }
      }
    }
  }
  return;
}

// SetupVisibilityTexture @ 148a69f20

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
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
UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture
          (UWorldPartitionDestructibleHLODComponent *this)

{
  int iVar1;
  UMaterialInterface *this_00;
  AActor *this_01;
  bool bVar2;
  FName *pFVar3;
  UTexture2DDynamic *pUVar4;
  UMaterialInstanceDynamic *this_02;
  FName FVar5;
  UClass *pUVar6;
  FName FVar7;
  FName FVar8;
  uint uVar9;
  float local_res8 [2];
  FName local_res10;
  FMemoryImageMaterialParameterInfo local_38;
  
  if ((this->VisibilityTexture).field0_0x0.DebugPtr != (UTexture2DDynamic *)0x0) {
    return;
  }
  this_00 = (this->DestructibleHLODMaterial).field0_0x0.DebugPtr;
  if (this_00 == (UMaterialInterface *)0x0) {
    return;
  }
  local_res8[0] = 0.0;
  pFVar3 = ::FName::FName(&local_res10,"NumInstances");
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  local_38.Name.ComparisonIndex = (*pFVar3).ComparisonIndex;
  local_38.Name.Number = (*pFVar3).Number;
  local_38.Name.DisplayIndex.Value = 0;
  local_38.Index = -1;
  local_38.Association.Value = '\x02';
  bVar2 = UMaterialInterface::GetScalarParameterValue(this_00,&local_38,local_res8,true);
  if (!bVar2) {
    return;
  }
  uVar9 = (uint)local_res8[0];
  local_38.Name.DisplayIndex.Value = 0;
  local_38.Name.Number = 1;
  local_38.Name.ComparisonIndex.Value._0_3_ = 3;
  pUVar4 = UTexture2DDynamic::Create(uVar9,1,(FTexture2DDynamicCreateInfo *)&local_38);
  if (pUVar4 != (UTexture2DDynamic *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VisibilityTexture).field0_0x0.DebugPtr = pUVar4;
    this->VisibilityTextureSize = uVar9;
  }
  if ((this->VisibilityTexture).field0_0x0.DebugPtr != (UTexture2DDynamic *)0x0) {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    this_02 = UMaterialInstanceDynamic::Create
                        ((this->DestructibleHLODMaterial).field0_0x0.DebugPtr,(UObject *)this,
                         (FName)0x0);
    pUVar4 = (this->VisibilityTexture).field0_0x0.DebugPtr;
    pFVar3 = ::FName::FName(&local_res10,"InstanceVisibilityTexture");
    UMaterialInstanceDynamic::SetTextureParameterValue(this_02,*pFVar3,(UTexture *)pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_02 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    (this->VisibilityMaterial).field0_0x0.DebugPtr = this_02;
  }
  if ((this->VisibilityMaterial).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0) {
    return;
  }
  this_01 = *(AActor **)&this->field_0xa8;
  FVar5 = (FName)Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (FVar5 == (FName)0x0) goto LAB_148a6a0df;
  }
  else {
    FVar8 = FVar7;
    if (FVar5 == (FName)0x0) goto LAB_148a6a0df;
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  FVar8 = FVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)((longlong)FVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FVar8 = FVar5;
    }
  }
LAB_148a6a0df:
  FVar7 = (FName)Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = FVar5;
  if (FVar8 != FVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar5);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,0,0,_UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture_::__l17::<lambda_1>_>
              (this_01,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)this);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar5);
  }
  AActor::
  ForEachComponent_Internal<UStaticMeshComponent,1,0,_UWorldPartitionDestructibleHLODComponent::SetupVisibilityTexture_::__l17::<lambda_1>_>
            (this_01,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)this);
  return;
}

// StaticRegisterNativesUWorldPartitionDestructibleHLODComponent @ 148a6a570

void __cdecl
UWorldPartitionDestructibleHLODComponent::
StaticRegisterNativesUWorldPartitionDestructibleHLODComponent(void)

{
  return;
}

// UpdateVisibilityTexture @ 148a6c560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture
          (UWorldPartitionDestructibleHLODComponent *this)

{
  int iVar1;
  UTexture2DDynamic *this_00;
  FScriptContainerElement *_Src;
  FCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTextureResource *pFVar6;
  FRenderCommandList *this_01;
  FRenderCommandTag *pFVar7;
  wchar_t *pwVar8;
  code **ppcVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined1 auStackY_e8 [32];
  ForAnyElementType local_98;
  undefined8 local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((this->DestructibleHLODState).bIsClient != false) {
    piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar12 <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar8 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar8,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      SetupVisibilityTexture(this);
      this_00 = (this->VisibilityTexture).field0_0x0.DebugPtr;
      if (this_00 != (UTexture2DDynamic *)0x0) {
        pFVar6 = UTexture::GetResource((UTexture *)this_00);
        if ((*piVar12 <
             `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
             _thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                                 _thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          pwVar8 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar8,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
        if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)
            ) && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                  bHasNullRHIOnCommandline == false)) {
          if (pFVar6 == (FTextureResource *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<5212805655445897499>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                               ,0x11b,"TextureResource");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            uVar5 = this->VisibilityTextureSize;
            iVar1 = (this->VisibilityBuffer).ArrayNum;
            _Src = (this->VisibilityBuffer).AllocatorInstance.Data;
            local_98.Data = (FScriptContainerElement *)0x0;
            local_90 = CONCAT44(local_90._4_4_,iVar1);
            if (iVar1 == 0) {
              local_90 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar1,0,&local_98,iVar1,(int *)((longlong)&local_90 + 4));
              memcpy(local_98.Data,_Src,(longlong)iVar1);
            }
            local_88[0] = (code *)0x0;
            local_60 = FMemory::Malloc(0x28,8);
            *local_60 = (code *)&UE::Core::Private::Function::
                                 TFunction_OwnedObject<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::`11'::<lambda_1>,1,1>
                                 ::_vftable_;
            local_60[1] = (code *)pFVar6;
            *(uint *)(local_60 + 2) = uVar5;
            local_60[3] = (code *)0x0;
            local_60[3] = (code *)local_98.Data;
            local_98.Data = (FScriptContainerElement *)0x0;
            *(undefined4 *)(local_60 + 4) = (undefined4)local_90;
            *(undefined4 *)((longlong)local_60 + 0x24) = local_90._4_4_;
            if (local_60 + 1 != (code **)0x0) {
              local_88[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                            ::Call;
            }
            local_90 = 0;
            this_01 = FRenderCommandList::GetInstanceTLS();
            if (this_01 == (FRenderCommandList *)0x0) {
              FRenderThreadCommandPipe::
              Enqueue<TRenderCommandTag<_UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture_::__l11::TSTR_FUpdateHLODVisibilityTexture285>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
            }
            else {
              if (this_01->bInitialized == 0) {
                FRenderCommandList::Init(this_01);
              }
              iVar1 = (this_01->CommandLists).ArrayNum;
              uVar10 = iVar1 - 1;
              uVar5 = 0;
              if ((int)uVar10 < iVar1) {
                uVar5 = ~uVar10 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar1 = (this_01->CommandLists).ArrayNum;
              local_58._16_8_ = local_78[0];
              local_58._24_8_ = local_78[1];
              local_58._32_8_ = local_78[2];
              local_28 = 2;
              pFVar2 = (this_01->CommandLists).AllocatorInstance.Data;
              local_58._0_8_ = local_88[0];
              local_30 = local_60;
              local_60 = (code **)0x0;
              local_88[0] = (code *)0x0;
              pFVar7 = (FRenderCommandTag *)
                       TRenderCommandTag<`UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture'::__l11::TSTR_FUpdateHLODVisibilityTexture285>
                       ::Get();
              UE::RenderCommandPipe::FCommandList::Enqueue
                        (pFVar2 + (iVar1 + -1),
                         (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar7);
              uVar11 = (ulonglong)local_28;
              if ((2 < uVar11) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar11] ==
                  UE::Core::Private::
                  TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                  Destruct) {
                if ((code *)local_58._0_8_ != (code *)0x0) {
                  ppcVar9 = (code **)(local_58 + 0x10);
                  if (local_30 != (code **)0x0) {
                    ppcVar9 = local_30;
                  }
                  (**(code **)(*ppcVar9 + 0x10))();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar11])(local_58);
              }
            }
            if (local_88[0] != (code *)0x0) {
              ppcVar9 = local_88 + 2;
              if (local_60 != (code **)0x0) {
                ppcVar9 = local_60;
              }
              (**(code **)(*ppcVar9 + 0x10))();
            }
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data);
            }
          }
        }
      }
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 148a6ccc0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UWorldPartitionDestructibleHLODComponent::ValidateGeneratedRepEnums
          (UWorldPartitionDestructibleHLODComponent *this,
          TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_DestructibleHLODState,L"DestructibleHLODState");
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
  if (Name_DestructibleHLODState != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\DestructibleHLODComponent.gen.cpp"
                       ,0x236,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWorldPartitionDestructibleHLODComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

