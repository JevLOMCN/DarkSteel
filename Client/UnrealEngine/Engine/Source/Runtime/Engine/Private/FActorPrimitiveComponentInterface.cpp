// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// CreateRenderState @ 1478c1960

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
FActorPrimitiveComponentInterface::CreateRenderState
          (FActorPrimitiveComponentInterface *this,FRegisterComponentContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478c196a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this[-0x65] + 0x388))();
  return;
}

// CreateSceneProxy @ 1478c1d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FActorPrimitiveComponentInterface::CreateSceneProxy(FActorPrimitiveComponentInterface *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FActorPrimitiveComponentInterface FVar4;
  FPrimitiveSceneProxy *pFVar5;
  FActorPrimitiveComponentInterface FVar6;
  
  FVar4 = (FActorPrimitiveComponentInterface)
          (**(code **)((longlong)this[-0x65] + 0x828))(this + -0x65);
  if (((this[0x41] != (FActorPrimitiveComponentInterface)0x0) ||
      (this[1] != (FActorPrimitiveComponentInterface)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxy == nullptr && SceneData.SceneProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PrimitiveComponent.cpp"
                         ,0x14e9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FPrimitiveSceneProxy *)(*pcVar1)();
    return pFVar5;
  }
  this[0x41] = FVar4;
  this[1] = FVar4;
  if (FVar4 != (FActorPrimitiveComponentInterface)0x0) {
    uVar3 = (uint)(*(byte *)((longlong)FVar4 + 0x81) >> 2);
    uVar3 = (uVar3 ^ *(uint *)(this + 4)) & 0xfffffffe ^ uVar3;
    *(uint *)(this + 4) = uVar3;
    FVar6 = (FActorPrimitiveComponentInterface)((longlong)this[-0x50] + 0x198);
    if (this[-0x50] == (FActorPrimitiveComponentInterface)0x0) {
      FVar6 = (FActorPrimitiveComponentInterface)0x0;
    }
    this[5] = FVar6;
    if (((uVar3 & 1) != 0) && (FVar6 != (FActorPrimitiveComponentInterface)0x0)) {
      LOCK();
      *(int *)((longlong)FVar6 + 4) = *(int *)((longlong)FVar6 + 4) + 1;
      UNLOCK();
    }
  }
  return (FPrimitiveSceneProxy *)FVar4;
}

// DestroyRenderState @ 1478c31d0

void __thiscall
FActorPrimitiveComponentInterface::DestroyRenderState(FActorPrimitiveComponentInterface *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001478c31da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this[-0x65] + 0x3a8))();
  return;
}

// GetBounds @ 1478d0100

TBoxSphereBounds<double,double> * __thiscall
FActorPrimitiveComponentInterface::GetBounds
          (FActorPrimitiveComponentInterface *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  FActorPrimitiveComponentInterface FVar1;
  FActorPrimitiveComponentInterface FVar2;
  FActorPrimitiveComponentInterface FVar3;
  FActorPrimitiveComponentInterface FVar4;
  FActorPrimitiveComponentInterface FVar5;
  
  FVar1 = this[-0x42];
  FVar2 = this[-0x41];
  FVar3 = this[-0x40];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (double)this[-0x43];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)FVar1;
  FVar4 = this[-0x3f];
  FVar5 = this[-0x3e];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (double)FVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = (double)FVar3;
  FVar1 = this[-0x3d];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = (double)FVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = (double)FVar5;
  __return_storage_ptr__->SphereRadius = (double)FVar1;
  return __return_storage_ptr__;
}

// GetFullName @ 1478d47b0

FString * __thiscall
FActorPrimitiveComponentInterface::GetFullName
          (FActorPrimitiveComponentInterface *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)(this + -0x65),__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetLastRenderTimeOnScreen @ 1478d4fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
FActorPrimitiveComponentInterface::GetLastRenderTimeOnScreen
          (FActorPrimitiveComponentInterface *this)

{
  FActorPrimitiveComponentInterface FVar1;
  
  if ((*(byte *)(this + 4) & 1) != 0) {
    FVar1 = this[-0x4f];
    if (FVar1 == (FActorPrimitiveComponentInterface)0x0) {
      FVar1 = (FActorPrimitiveComponentInterface)
              UActorComponent::GetWorld_Uncached((UActorComponent *)(this + -0x65));
    }
    return (float)*(double *)((longlong)FVar1 + 0x8f8);
  }
  return *(float *)&this[2].field_0x4;
}

// GetName @ 1478d6500

FString * __thiscall
FActorPrimitiveComponentInterface::GetName
          (FActorPrimitiveComponentInterface *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = *(FName *)(this + -0x62);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOwner @ 1478d7690

UObject * __thiscall
FActorPrimitiveComponentInterface::GetOwner(FActorPrimitiveComponentInterface *this)

{
  return (UObject *)this[-0x50];
}

// GetOwnerName @ 1478d76a0

FString * __thiscall
FActorPrimitiveComponentInterface::GetOwnerName
          (FActorPrimitiveComponentInterface *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FActorPrimitiveComponentInterface FVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FString *pFVar6;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  FVar2 = this[-0x50];
  if (FVar2 == (FActorPrimitiveComponentInterface)0x0) {
    local_res8 = *(FName *)(this + -0x62);
    ::FName::ToString(&local_res8,&local_28);
    pFVar6 = &local_28;
    bVar4 = false;
    bVar3 = true;
    FVar5.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    if (*(int *)((longlong)FVar2 + 0x1f0) < 2) {
      local_res8 = *(FName *)((longlong)FVar2 + 0x18);
      ::FName::ToString(&local_res8,&local_38);
    }
    else {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = *(int *)((longlong)FVar2 + 0x1f0);
      _Src = *(void **)((longlong)FVar2 + 0x1e8);
      local_38.Data.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
    }
    pFVar6 = &local_38;
    bVar4 = true;
    bVar3 = false;
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar5.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  iVar1 = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrimitiveStats @ 1478d8c00

void __thiscall
FActorPrimitiveComponentInterface::GetPrimitiveStats
          (FActorPrimitiveComponentInterface *this,FPrimitiveStats *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478d8c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this[-0x65] + 0x8e8))();
  return;
}

// GetScene @ 1478da4e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneInterface * __thiscall
FActorPrimitiveComponentInterface::GetScene(FActorPrimitiveComponentInterface *this)

{
  FSceneInterface *pFVar1;
  
  pFVar1 = UActorComponent::GetScene((UActorComponent *)(this + -0x65));
  return pFVar1;
}

// GetSceneProxy @ 1478da500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FActorPrimitiveComponentInterface::GetSceneProxy(FActorPrimitiveComponentInterface *this)

{
  return (FPrimitiveSceneProxy *)this[0x41];
}

// GetStreamableRenderAssetInfo @ 1478dc110

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
FActorPrimitiveComponentInterface::GetStreamableRenderAssetInfo
          (FActorPrimitiveComponentInterface *this,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  Type TVar1;
  FStreamingTextureLevelContext local_58;
  
  TVar1 = GetCurrentMaterialQualityLevelChecked();
  FStreamingTextureLevelContext::FStreamingTextureLevelContext
            (&local_58,TVar1,(UPrimitiveComponent *)(this + -0x65));
  (**(code **)((longlong)this[-0x65] + 0x7d8))(this + -0x65,&local_58,param_1);
  FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_58);
  return;
}

// GetTransform @ 1478dd960

TTransform<double> * __thiscall
FActorPrimitiveComponentInterface::GetTransform
          (FActorPrimitiveComponentInterface *this,TTransform<double> *__return_storage_ptr__)

{
  FActorPrimitiveComponentInterface FVar1;
  FActorPrimitiveComponentInterface FVar2;
  FActorPrimitiveComponentInterface FVar3;
  FActorPrimitiveComponentInterface FVar4;
  
  FVar1 = this[-0x26];
  FVar2 = this[-0x25];
  FVar3 = this[-0x24];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)this[-0x27];
  *(FActorPrimitiveComponentInterface *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) =
       FVar1;
  FVar1 = this[-0x23];
  FVar4 = this[-0x22];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)FVar2;
  *(FActorPrimitiveComponentInterface *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) =
       FVar3;
  FVar2 = this[-0x21];
  FVar3 = this[-0x20];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)FVar1;
  *(FActorPrimitiveComponentInterface *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) =
       FVar4;
  FVar1 = this[-0x1f];
  FVar4 = this[-0x1e];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)FVar2;
  *(FActorPrimitiveComponentInterface *)((__return_storage_ptr__->Translation).ZW.m128d_f64 + 1) =
       FVar3;
  FVar2 = this[-0x1d];
  FVar3 = this[-0x1c];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)FVar1;
  *(FActorPrimitiveComponentInterface *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) = FVar4
  ;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)FVar2;
  *(FActorPrimitiveComponentInterface *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = FVar3
  ;
  return __return_storage_ptr__;
}

// GetUObject @ 1478ddb00

UObject * __thiscall
FActorPrimitiveComponentInterface::GetUObject(FActorPrimitiveComponentInterface *this)

{
  return (UObject *)(this + -0x65);
}

// GetUObject @ 1478ddb10

UObject * __thiscall
FActorPrimitiveComponentInterface::GetUObject(FActorPrimitiveComponentInterface *this)

{
  return (UObject *)(this + -0x65);
}

// GetUsedMaterials @ 1478ddd60

void __thiscall
FActorPrimitiveComponentInterface::GetUsedMaterials
          (FActorPrimitiveComponentInterface *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001478ddd6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this[-0x65] + 0x7f0))();
  return;
}

// GetWorld @ 1478df140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
FActorPrimitiveComponentInterface::GetWorld(FActorPrimitiveComponentInterface *this)

{
  int iVar1;
  FActorPrimitiveComponentInterface FVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  
  if (this[-0x4f] != (FActorPrimitiveComponentInterface)0x0) {
    return (UWorld *)this[-0x4f];
  }
  FVar2 = this[-0x50];
  if (((FVar2 == (FActorPrimitiveComponentInterface)0x0) ||
      ((*(uint *)((longlong)FVar2 + 8) >> 4 & 1) != 0)) ||
     (pUVar3 = AActor::GetWorld((AActor *)FVar2), pUVar3 == (UWorld *)0x0)) {
    FVar2 = this[-0x61];
    if (FVar2 != (FActorPrimitiveComponentInterface)0x0) {
      pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar2 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return (UWorld *)FVar2;
      }
    }
    pUVar3 = (UWorld *)0x0;
  }
  return pUVar3;
}

// IsRegistered @ 1478e1990

bool __thiscall
FActorPrimitiveComponentInterface::IsRegistered(FActorPrimitiveComponentInterface *this)

{
  return (bool)(*(byte *)(this + -0x52) & 1);
}

// IsRenderStateCreated @ 1478e19a0

bool __thiscall
FActorPrimitiveComponentInterface::IsRenderStateCreated(FActorPrimitiveComponentInterface *this)

{
  return (bool)(*(byte *)(this + -0x52) >> 1 & 1);
}

// IsRenderStateDirty @ 1478e19c0

bool __thiscall
FActorPrimitiveComponentInterface::IsRenderStateDirty(FActorPrimitiveComponentInterface *this)

{
  return (bool)(this[-0x52].field_0x1 & 1);
}

// IsUnreachable @ 1478e1a90

bool __thiscall
FActorPrimitiveComponentInterface::IsUnreachable(FActorPrimitiveComponentInterface *this)

{
  FUObjectItem *pFVar1;
  
  pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this[-100].field_0x4);
  return (bool)((byte)((ulonglong)((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c) & 1);
}

// MarkRenderStateDirty @ 1478e2e50

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
FActorPrimitiveComponentInterface::MarkRenderStateDirty(FActorPrimitiveComponentInterface *this)

{
  UActorComponent::MarkRenderStateDirty((UActorComponent *)(this + -0x65));
  return;
}

// PrecachePSOs @ 1478e7c40

void __thiscall
FActorPrimitiveComponentInterface::PrecachePSOs(FActorPrimitiveComponentInterface *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001478e7c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this[-0x65] + 0x378))();
  return;
}

// ShouldCreateRenderState @ 1478f6f70

bool __thiscall
FActorPrimitiveComponentInterface::ShouldCreateRenderState(FActorPrimitiveComponentInterface *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001478f6f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)this[-0x65] + 0x380))();
  return (bool)uVar1;
}

// CreatePrimitiveHitProxies @ 1483f9750

HHitProxy * __thiscall
FActorPrimitiveComponentInterface::CreatePrimitiveHitProxies
          (FActorPrimitiveComponentInterface *this,
          TArray<TRefCountPtr<HHitProxy>,TSizedDefaultAllocator<32>_> *param_1)

{
  UObject *pUVar1;
  FActorPrimitiveComponentInterface FVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  HHitProxy *pHVar9;
  HHitProxy *local_18 [2];
  
  FVar2 = this[-0x50];
  pUVar1 = (UObject *)(this + -0x65);
  if (FVar2 == (FActorPrimitiveComponentInterface)0x0) {
    return (HHitProxy *)0x0;
  }
  pUVar8 = Z_Construct_UClass_ABrush_NoRegister();
  lVar3 = *(longlong *)((longlong)FVar2 + 0x10);
  iVar7 = (int)pUVar8->_padding_;
  if ((iVar7 <= *(int *)(lVar3 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) ==
      &pUVar8->_padding_)) {
    pUVar8 = Z_Construct_UClass_UBrushComponent_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((iVar7 <= *(int *)((longlong)this[-99] + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((longlong)this[-99] + 0x30) + (longlong)iVar7 * 8) ==
        &pUVar8->_padding_)) {
      pHVar9 = ::operator_new(0x38);
      if (pHVar9 == (HHitProxy *)0x0) {
        pHVar9 = (HHitProxy *)0x0;
      }
      else {
        FVar2 = this[-0x50];
        HHitProxy::HHitProxy(pHVar9,HPP_Wireframe);
        pHVar9->_padding_ = (longlong)&___7HActor__6B_;
        pHVar9[1]._padding_ = (longlong)FVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar2 != (FActorPrimitiveComponentInterface)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar2);
        }
        pHVar9[1]._padding_ = (longlong)pUVar1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        pHVar9[1].Priority = ~HPP_World;
        pHVar9[1].OrthoPriority = ~HPP_World;
      }
      local_18[0] = pHVar9;
      if (pHVar9 != (HHitProxy *)0x0) {
        *(int *)&pHVar9->_padding_ = (int)pHVar9->_padding_ + 1;
      }
      goto LAB_1483f98bf;
    }
  }
  pHVar9 = ::operator_new(0x38);
  if (pHVar9 == (HHitProxy *)0x0) {
    local_18[0] = (HHitProxy *)0x0;
  }
  else {
    FVar2 = this[-0x50];
    HHitProxy::HHitProxy(pHVar9,HPP_World);
    pHVar9->_padding_ = (longlong)&___7HActor__6B_;
    pHVar9[1]._padding_ = (longlong)FVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FVar2 != (FActorPrimitiveComponentInterface)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar2);
    }
    pHVar9[1]._padding_ = (longlong)pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pHVar9[1].Priority = ~HPP_World;
    pHVar9[1].OrthoPriority = ~HPP_World;
    *(int *)&pHVar9->_padding_ = (int)pHVar9->_padding_ + 1;
    local_18[0] = pHVar9;
  }
LAB_1483f98bf:
  pHVar9 = local_18[0];
  pFVar4 = (param_1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)param_1->ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pHVar9 = (HHitProxy *)(*pcVar5)();
      return pHVar9;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 8) = 0;
  *(HHitProxy **)(pFVar4 + (longlong)iVar7 * 8) = local_18[0];
  return pHVar9;
}

