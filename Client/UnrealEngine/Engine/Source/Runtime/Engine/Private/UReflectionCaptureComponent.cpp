// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// StaticClass @ 147270920

UClass * __cdecl UReflectionCaptureComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UReflectionCaptureComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReflectionCaptureComponent",
               &Z_Registration_Info_UClass_UReflectionCaptureComponent.InnerSingleton,
               StaticRegisterNativesUReflectionCaptureComponent,0x2c0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReflectionCaptureComponent>,
               InternalVTableHelperCtorCaller<UReflectionCaptureComponent>,aFStackX_8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReflectionCaptureComponent.InnerSingleton;
}

// UReflectionCaptureComponent @ 14792a1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UReflectionCaptureComponent * __thiscall
UReflectionCaptureComponent::UReflectionCaptureComponent
          (UReflectionCaptureComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CaptureOffsetComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->Cubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  (this->MapBuildDataId).A = 0;
  (this->MapBuildDataId).B = 0;
  (this->MapBuildDataId).C = 0;
  (this->MapBuildDataId).D = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  return this;
}

// UReflectionCaptureComponent @ 14792a250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UReflectionCaptureComponent * __thiscall
UReflectionCaptureComponent::UReflectionCaptureComponent
          (UReflectionCaptureComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->CaptureOffsetComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->Cubemap).field0_0x0.DebugPtr = (UTextureCube *)0x0;
  (this->MapBuildDataId).A = 0;
  (this->MapBuildDataId).B = 0;
  (this->MapBuildDataId).C = 0;
  (this->MapBuildDataId).D = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  this->Brightness = 1.0;
  this->field_0x1ab = 0;
  this->EncodedHDRCubemapTexture = (FReflectionTextureCubeResource *)0x0;
  this->CachedAverageBrightness = 1.0;
  this->bNeedsRecaptureOrUpload = false;
  return this;
}

// ~UReflectionCaptureComponent @ 14792ce20

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
UReflectionCaptureComponent::~UReflectionCaptureComponent(UReflectionCaptureComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// BeginDestroy @ 147934950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReflectionCaptureComponent::BeginDestroy(UReflectionCaptureComponent *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  IRendererModule *pIVar4;
  longlong *plVar5;
  longlong lVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  UReflectionCaptureComponent *local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  TBitArray<FDefaultBitArrayAllocator> *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  if (this->bNeedsRecaptureOrUpload != false) {
    EnterCriticalSection((LPCRITICAL_SECTION)&ReflectionCapturesToUpdateForLoadLock);
    local_res8 = this;
    TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>::Remove
              (&ReflectionCapturesToUpdate,&local_res8);
    local_res8 = this;
    TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>::Remove
              (&ReflectionCapturesToUpdateForLoad,&local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&ReflectionCapturesToUpdateForLoadLock);
  }
  pIVar4 = GetRendererModule();
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4);
  iVar2 = (int)plVar5[5];
  iStack_48 = 0;
  uStack_44 = 1;
  local_30 = 0;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar5 + 2);
  iStack_34 = 0;
  if (iVar2 != 0) {
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)plVar5[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar5[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar7 = TStack_70.Array;
    }
    uVar3 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_147934a4c;
      uVar3 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar6 * 4 + 4);
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar6;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_147934a4c:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = plVar5;
  local_40 = TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      (**(code **)(**(longlong **)(*plVar5 + (longlong)TStack_70.CurrentBitIndex * 0x10) + 0x180))()
      ;
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  if (this->EncodedHDRCubemapTexture != (FReflectionTextureCubeResource *)0x0) {
    BeginReleaseResource
              ((FRenderResource *)this->EncodedHDRCubemapTexture,(FRenderCommandPipe *)0x0);
  }
  FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
  USceneComponent::BeginDestroy((USceneComponent *)this);
  return;
}

// CreateRenderState_Concurrent @ 14793d280

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
UReflectionCaptureComponent::CreateRenderState_Concurrent
          (UReflectionCaptureComponent *this,FRegisterComponentContext *param_1)

{
  byte bVar1;
  bool bVar2;
  FCachedSystemScalabilityCVars *pFVar3;
  UWorld *pUVar4;
  
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  (**(code **)(*(longlong *)this + 0x640))(this);
  bVar1 = this->field_0x1ac;
  pFVar3 = GetCachedScalabilityCVars();
  if ((int)(uint)bVar1 <= pFVar3->DetailMode) {
    bVar2 = USceneComponent::ShouldRender((USceneComponent *)this);
    if (bVar2) {
      pUVar4 = *(UWorld **)&this->field_0xb0;
      if (pUVar4 == (UWorld *)0x0) {
        pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      (**(code **)(pUVar4->Scene->_padding_ + 0x158))(pUVar4->Scene,this);
    }
  }
  return;
}

// CreateSceneProxy @ 14793e080

FReflectionCaptureProxy * __thiscall
UReflectionCaptureComponent::CreateSceneProxy(UReflectionCaptureComponent *this)

{
  FReflectionCaptureProxy *pFVar1;
  
  pFVar1 = ::operator_new(0xf0);
  if (pFVar1 != (FReflectionCaptureProxy *)0x0) {
    pFVar1 = FReflectionCaptureProxy::FReflectionCaptureProxy(pFVar1,this);
    return pFVar1;
  }
  return (FReflectionCaptureProxy *)0x0;
}

// DestroyRenderState_Concurrent @ 14793f5a0

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
UReflectionCaptureComponent::DestroyRenderState_Concurrent(UReflectionCaptureComponent *this)

{
  UWorld *pUVar1;
  
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  pUVar1 = *(UWorld **)&this->field_0xb0;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x00014793f5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->Scene->_padding_ + 0x160))(pUVar1->Scene,this);
  return;
}

// FinishDestroy @ 147943a90

void __thiscall UReflectionCaptureComponent::FinishDestroy(UReflectionCaptureComponent *this)

{
  FReflectionTextureCubeResource *pFVar1;
  
  pFVar1 = this->EncodedHDRCubemapTexture;
  if (pFVar1 != (FReflectionTextureCubeResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->EncodedHDRCubemapTexture = (FReflectionTextureCubeResource *)0x0;
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetInfluenceBoundingRadius @ 147949510

float __thiscall
UReflectionCaptureComponent::GetInfluenceBoundingRadius(UReflectionCaptureComponent *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\ReflectionCaptureComponent.h"
             ,0x57,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetMapBuildData @ 147949ef0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FReflectionCaptureMapBuildData * __thiscall
UReflectionCaptureComponent::GetMapBuildData(UReflectionCaptureComponent *this)

{
  UWorld *this_00;
  TRHIGlobal<int> TVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  ULevel *pUVar4;
  ULevel *pUVar5;
  UWorldPartition *pUVar6;
  FReflectionCaptureMapBuildData *pFVar7;
  int iVar8;
  UMapBuildDataRegistry *this_01;
  FReflectionCaptureMapBuildData *pFVar9;
  FGuid local_18;
  
  if (*(AActor **)&this->field_0xa8 == (AActor *)0x0) {
    return (FReflectionCaptureMapBuildData *)0x0;
  }
  pUVar4 = AActor::GetLevel(*(AActor **)&this->field_0xa8);
  if (pUVar4 == (ULevel *)0x0) {
    return (FReflectionCaptureMapBuildData *)0x0;
  }
  this_00 = (pUVar4->OwningWorld).field0_0x0.DebugPtr;
  if (this_00 == (UWorld *)0x0) {
    return (FReflectionCaptureMapBuildData *)0x0;
  }
  pUVar5 = UWorld::GetActiveLightingScenario(this_00);
  if (((pUVar5 == (ULevel *)0x0) ||
      (this_01 = (pUVar5->MapBuildData).field0_0x0.DebugPtr, this_01 == (UMapBuildDataRegistry *)0x0
      )) && (this_01 = (pUVar4->MapBuildData).field0_0x0.DebugPtr,
            this_01 == (UMapBuildDataRegistry *)0x0)) {
    pUVar6 = UWorld::GetWorldPartition((pUVar4->OwningWorld).field0_0x0.DebugPtr);
    if (pUVar6 == (UWorldPartition *)0x0) {
      return (FReflectionCaptureMapBuildData *)0x0;
    }
    this_01 = (((((pUVar4->OwningWorld).field0_0x0.DebugPtr)->PersistentLevel).field0_0x0.DebugPtr)
              ->MapBuildData).field0_0x0.DebugPtr;
    if (this_01 == (UMapBuildDataRegistry *)0x0) {
      return (FReflectionCaptureMapBuildData *)0x0;
    }
  }
  local_18.A = (this->MapBuildDataId).A;
  local_18.B = (this->MapBuildDataId).B;
  local_18.C = (this->MapBuildDataId).C;
  local_18.D = (this->MapBuildDataId).D;
  pFVar7 = UMapBuildDataRegistry::GetReflectionCaptureBuildData(this_01,&local_18);
  pTVar2 = CVarReflectionCaptureSize.Ref;
  if (pFVar7 == (FReflectionCaptureMapBuildData *)0x0) {
    return (FReflectionCaptureMapBuildData *)0x0;
  }
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    pFVar9 = (FReflectionCaptureMapBuildData *)&DAT_00000004;
    if (!bVar3) goto LAB_147949fc6;
  }
  pFVar9 = (FReflectionCaptureMapBuildData *)0x0;
LAB_147949fc6:
  TVar1.Value = GRHIGlobals.MaxCubeTextureDimensions.Value;
  if (*(int *)((longlong)&pFVar9->_padding_ + (longlong)pTVar2->ShadowedValue) <
      GRHIGlobals.MaxCubeTextureDimensions.Value) {
    TVar1.Value = *(int *)((longlong)&pFVar9->_padding_ + (longlong)pTVar2->ShadowedValue);
  }
  iVar8 = 1;
  if (1 < TVar1.Value) {
    iVar8 = TVar1.Value;
  }
  if ((int)pFVar7->_padding_ == iVar8) {
    return pFVar7;
  }
  pFVar9 = (FReflectionCaptureMapBuildData *)0x0;
  if ((char)pFVar7->_padding_ != '\0') {
    pFVar9 = pFVar7;
  }
  return pFVar9;
}

// GetPrivateStaticClass @ 14794c2e0

UClass * __cdecl UReflectionCaptureComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReflectionCaptureComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReflectionCaptureComponent",
               &Z_Registration_Info_UClass_UReflectionCaptureComponent.InnerSingleton,
               StaticRegisterNativesUReflectionCaptureComponent,0x2c0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReflectionCaptureComponent>,
               InternalVTableHelperCtorCaller<UReflectionCaptureComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReflectionCaptureComponent.InnerSingleton;
}

// GetReflectionCaptureSize @ 14794cc10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __cdecl UReflectionCaptureComponent::GetReflectionCaptureSize(void)

{
  TRHIGlobal<int> TVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  
  pTVar2 = CVarReflectionCaptureSize.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar5 = 4;
      goto LAB_14794cc38;
    }
  }
  lVar5 = 0;
LAB_14794cc38:
  TVar1.Value = GRHIGlobals.MaxCubeTextureDimensions.Value;
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) < GRHIGlobals.MaxCubeTextureDimensions.Value
     ) {
    TVar1.Value = *(int *)((longlong)pTVar2->ShadowedValue + lVar5);
  }
  iVar4 = 1;
  if (1 < TVar1.Value) {
    iVar4 = TVar1.Value;
  }
  return iVar4;
}

// InvalidateLightingCacheDetailed @ 147955de0

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
UReflectionCaptureComponent::InvalidateLightingCacheDetailed
          (UReflectionCaptureComponent *this,bool param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->MapBuildDataId).A = pFVar4->A;
  (this->MapBuildDataId).B = uVar1;
  (this->MapBuildDataId).C = uVar2;
  (this->MapBuildDataId).D = uVar3;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// IsReadyForFinishDestroy @ 147956640

bool __thiscall
UReflectionCaptureComponent::IsReadyForFinishDestroy(UReflectionCaptureComponent *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
  return bVar1;
}

// MarkDirtyForRecapture @ 147957530

void __thiscall
UReflectionCaptureComponent::MarkDirtyForRecapture(UReflectionCaptureComponent *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  UReflectionCaptureComponent *local_res8 [4];
  FGuid local_18;
  
  if ((this->field_0x1a8 & 0x20) != 0) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->MapBuildDataId).A = pFVar4->A;
    (this->MapBuildDataId).B = uVar1;
    (this->MapBuildDataId).C = uVar2;
    (this->MapBuildDataId).D = uVar3;
    local_res8[0] = this;
    TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<UReflectionCaptureComponent_*>(&ReflectionCapturesToUpdate,local_res8);
    this->bNeedsRecaptureOrUpload = true;
  }
  return;
}

// MarkDirtyForRecaptureOrUpload @ 147957590

void __thiscall
UReflectionCaptureComponent::MarkDirtyForRecaptureOrUpload(UReflectionCaptureComponent *this)

{
  UReflectionCaptureComponent *local_res8 [4];
  
  if ((this->field_0x1a8 & 0x20) != 0) {
    local_res8[0] = this;
    TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<UReflectionCaptureComponent_*>(&ReflectionCapturesToUpdate,local_res8);
    this->bNeedsRecaptureOrUpload = true;
  }
  return;
}

// OnRegister @ 147959d50

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UReflectionCaptureComponent::OnRegister(UReflectionCaptureComponent *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  EShaderPlatform EVar7;
  int iVar8;
  UWorld *pUVar9;
  FReflectionCaptureMapBuildData *pFVar10;
  FReflectionTextureCubeResource *pFVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  EPixelFormat EVar15;
  undefined1 auStack_c8 [32];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_a8;
  code *local_98 [2];
  undefined **local_88;
  FReflectionTextureCubeResource *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FReflectionTextureCubeResource *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar9 = *(UWorld **)&this->field_0xb0;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  EVar7 = GMaxRHIShaderPlatform;
  if (pUVar9->Scene != (FSceneInterface *)0x0) {
    EVar7 = FSceneInterface::GetShaderPlatform(pUVar9->Scene);
  }
  bVar6 = IsEncodedHDRCubemapTextureRequired(EVar7);
  if (bVar6) {
    pFVar10 = GetMapBuildData(this);
    if (pFVar10 != (FReflectionCaptureMapBuildData *)0x0) {
      if (this->EncodedHDRCubemapTexture == (FReflectionTextureCubeResource *)0x0) {
        pFVar11 = ::operator_new(0x80);
        if (pFVar11 == (FReflectionTextureCubeResource *)0x0) {
          pFVar11 = (FReflectionTextureCubeResource *)0x0;
        }
        else {
          FTexture::FTexture((FTexture *)pFVar11);
          pFVar11->_padding_ = (longlong)&___7FReflectionTextureCubeResource__6B_;
          (pFVar11->TextureCubeRHI).Reference = (FRHITexture *)0x0;
          (pFVar11->SourceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->SourceData).ArrayNum = 0;
          (pFVar11->SourceData).ArrayMax = 0;
          pFVar11->Size = 0;
          pFVar11->NumMips = 0;
          pFVar11->Format = PF_Unknown;
        }
        this->EncodedHDRCubemapTexture = pFVar11;
        local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
        if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
           (FReadOnlyCVARCache::bMobileHDR == false)) {
          EVar15 = PF_FloatR11G11B10;
          local_a8.AllocatorInstance.Data = (FScriptContainerElement *)pFVar10->_padding_;
          local_a8._8_8_ = pFVar10->_padding_;
          pFVar10->_padding_ = 0;
          pFVar10->_padding_ = 0;
        }
        else {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                    (&local_a8,
                     (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar10->_padding_);
          EVar15 = PF_FloatRGBA;
        }
        iVar2 = (int)pFVar10->_padding_;
        pFVar11 = this->EncodedHDRCubemapTexture;
        iVar8 = 1;
        if (iVar2 != 0) {
          iVar8 = iVar2;
        }
        pTVar1 = &pFVar11->SourceData;
        pFVar11->Size = iVar2;
        pFVar11->Format = EVar15;
        uVar14 = (ulonglong)(iVar8 - 1) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        pFVar11->NumMips = (int)lVar4 + 1;
        if (pTVar1 != &local_a8) {
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pTVar1->AllocatorInstance).Data = local_a8.AllocatorInstance.Data;
          local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->SourceData).ArrayNum = local_a8.ArrayNum;
          (pFVar11->SourceData).ArrayMax = local_a8.ArrayMax;
          local_a8.ArrayNum = 0;
          local_a8.ArrayMax = 0;
        }
        BeginInitResource((FRenderResource *)this->EncodedHDRCubemapTexture,
                          (FRenderCommandPipe *)0x0);
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.AllocatorInstance.Data);
        }
      }
      this->CachedAverageBrightness = *(float *)((longlong)&pFVar10->_padding_ + 4);
    }
  }
  else {
    if (this->EncodedHDRCubemapTexture != (FReflectionTextureCubeResource *)0x0) {
      BeginReleaseResource
                ((FRenderResource *)this->EncodedHDRCubemapTexture,(FRenderCommandPipe *)0x0);
      local_70 = (undefined ***)0x0;
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UReflectionCaptureComponent::SafeReleaseEncodedHDRCubemapTexture'::`5'::<lambda_1>,1,0>
                  ::_vftable_;
      pFStack_80 = this->EncodedHDRCubemapTexture;
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UReflectionCaptureComponent::SafeReleaseEncodedHDRCubemapTexture'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UReflectionCaptureComponent::SafeReleaseEncodedHDRCubemapTexture_::__l5::TSTR_DeleteEncodedHDRCubemapTexture742>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_58 = local_88;
        pFStack_50 = pFStack_80;
        local_48 = local_78;
        local_98[0] = (code *)0x0;
        local_38 = 2;
        pFVar12 = (FRenderCommandTag *)
                  TRenderCommandTag<`UReflectionCaptureComponent::SafeReleaseEncodedHDRCubemapTexture'::__l5::TSTR_DeleteEncodedHDRCubemapTexture742>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar12);
        uVar14 = (ulonglong)local_38;
        if ((2 < uVar14) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            pppuVar13 = (undefined ***)(local_68 + 0x10);
            if (local_40 != (undefined ***)0x0) {
              pppuVar13 = local_40;
            }
            (*(code *)(*pppuVar13)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        pppuVar13 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar13 = local_70;
        }
        (*(code *)(*pppuVar13)[2])();
      }
      this->EncodedHDRCubemapTexture = (FReflectionTextureCubeResource *)0x0;
    }
    this->CachedAverageBrightness = 0.0;
  }
  USceneComponent::OnRegister((USceneComponent *)this);
  return;
}

// PostInitProperties @ 14795cc10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReflectionCaptureComponent::PostInitProperties(UReflectionCaptureComponent *this)

{
  bool bVar1;
  UReflectionCaptureComponent *local_res8 [4];
  
  UActorComponent::PostInitProperties((UActorComponent *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    FWindowsPlatformMisc::CreateGuid(&this->MapBuildDataId);
  }
  if ((*(uint *)&this->field_0x8 & 0x30) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&ReflectionCapturesToUpdateForLoadLock);
    local_res8[0] = this;
    TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<UReflectionCaptureComponent_*>(&ReflectionCapturesToUpdateForLoad,local_res8);
    this->bNeedsRecaptureOrUpload = true;
                    /* WARNING: Could not recover jumptable at 0x00014795cc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&ReflectionCapturesToUpdateForLoadLock);
    return;
  }
  return;
}

// PropagateLightingScenarioChange @ 14795d8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UReflectionCaptureComponent::PropagateLightingScenarioChange(UReflectionCaptureComponent *this)

{
  bool bVar1;
  EShaderPlatform EVar2;
  UWorld *pUVar3;
  UReflectionCaptureComponent *local_res8 [4];
  
  pUVar3 = *(UWorld **)&this->field_0xb0;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  EVar2 = GMaxRHIShaderPlatform;
  if (pUVar3->Scene != (FSceneInterface *)0x0) {
    EVar2 = FSceneInterface::GetShaderPlatform(pUVar3->Scene);
  }
  bVar1 = IsEncodedHDRCubemapTextureRequired(EVar2);
  if ((bVar1) && (this->EncodedHDRCubemapTexture == (FReflectionTextureCubeResource *)0x0)) {
    UActorComponent::ReregisterComponent((UActorComponent *)this);
    return;
  }
  if ((this->field_0x1a8 & 0x20) != 0) {
    local_res8[0] = this;
    TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<UReflectionCaptureComponent_*>(&ReflectionCapturesToUpdate,local_res8);
    this->bNeedsRecaptureOrUpload = true;
  }
  return;
}

// SafeReleaseEncodedHDRCubemapTexture @ 147964770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UReflectionCaptureComponent::SafeReleaseEncodedHDRCubemapTexture(UReflectionCaptureComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FReflectionTextureCubeResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FReflectionTextureCubeResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->EncodedHDRCubemapTexture != (FReflectionTextureCubeResource *)0x0) {
    BeginReleaseResource
              ((FRenderResource *)this->EncodedHDRCubemapTexture,(FRenderCommandPipe *)0x0);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UReflectionCaptureComponent::SafeReleaseEncodedHDRCubemapTexture'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = this->EncodedHDRCubemapTexture;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UReflectionCaptureComponent::SafeReleaseEncodedHDRCubemapTexture'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UReflectionCaptureComponent::SafeReleaseEncodedHDRCubemapTexture_::__l5::TSTR_DeleteEncodedHDRCubemapTexture742>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UReflectionCaptureComponent::SafeReleaseEncodedHDRCubemapTexture'::__l5::TSTR_DeleteEncodedHDRCubemapTexture742>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    this->EncodedHDRCubemapTexture = (FReflectionTextureCubeResource *)0x0;
  }
  return;
}

// SendRenderTransform_Concurrent @ 147965790

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
UReflectionCaptureComponent::SendRenderTransform_Concurrent(UReflectionCaptureComponent *this)

{
  byte bVar1;
  bool bVar2;
  FCachedSystemScalabilityCVars *pFVar3;
  UWorld *pUVar4;
  
  if (this->bNeedsRecaptureOrUpload == false) {
    (**(code **)(*(longlong *)this + 0x640))();
    bVar1 = this->field_0x1ac;
    pFVar3 = GetCachedScalabilityCVars();
    if ((int)(uint)bVar1 <= pFVar3->DetailMode) {
      bVar2 = USceneComponent::ShouldRender((USceneComponent *)this);
      if (bVar2) {
        pUVar4 = *(UWorld **)&this->field_0xb0;
        if (pUVar4 == (UWorld *)0x0) {
          pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        (**(code **)(pUVar4->Scene->_padding_ + 0x170))(pUVar4->Scene,this);
      }
    }
  }
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 147965a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReflectionCaptureComponent::Serialize(UReflectionCaptureComponent *this,FArchive *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UReflectionCaptureComponent::Serialize(FArchive_&)_::_2_::FStat_STAT_ReflectionCaptureComponent_Serialize>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_ReflectionCaptureComponent_Serialize ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UReflectionCaptureComponent::Serialize(FArchive_&)_::_2_::FStat_STAT_ReflectionCaptureComponent_Serialize>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res18.s,"STAT_ReflectionCaptureComponent_Serialize")
        ;
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReflectionCaptureComponent_Serialize,
                   *pFVar4,L"UReflectionCaptureComponent::Serialize","STATGROUP_LoadTime",
                   "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_ReflectionCaptureComponent_Serialize;
  if (StatPtr_STAT_ReflectionCaptureComponent_Serialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UReflectionCaptureComponent::Serialize(FArchive_&)_::_2_::FStat_STAT_ReflectionCaptureComponent_Serialize>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res20,"STAT_ReflectionCaptureComponent_Serialize");
    FVar5 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UReflectionCaptureComponent::Serialize(FArchive_&)_::_2_::FStat_STAT_ReflectionCaptureComponent_Serialize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_ReflectionCaptureComponent_Serialize,*pFVar4,
                         L"UReflectionCaptureComponent::Serialize","STATGROUP_LoadTime",
                         "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    USceneComponent::Serialize((USceneComponent *)this,param_1);
    SerializeLegacyData(this,param_1);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar7.Value;
        local_res18.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ReflectionCaptureComponent.cpp"
                   ,0x3a6);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res18.s.LowPart = FVar7.Value;
      local_res18.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    USceneComponent::Serialize((USceneComponent *)this,param_1);
    SerializeLegacyData(this,param_1);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res18);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_38);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// Serialize @ 147965dc0

void __thiscall
UReflectionCaptureComponent::Serialize
          (UReflectionCaptureComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeLegacyData @ 1479665a0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UReflectionCaptureComponent::SerializeLegacyData
          (UReflectionCaptureComponent *this,FArchive *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined4 uVar6;
  code *pcVar7;
  FName FVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  UReflectionCaptureComponent *pUVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FNameEntryId FVar15;
  FReflectionCaptureMapBuildData *pFVar16;
  undefined4 extraout_var;
  longlong lVar17;
  longlong lVar18;
  FReflectionCaptureMapBuildData *pFVar19;
  FScriptContainerElement *pFVar20;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_178;
  uint local_174;
  uint local_170 [2];
  FGuid local_168;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_158;
  uint local_148;
  undefined4 uStack_144;
  UReflectionCaptureComponent *local_140;
  undefined1 local_138 [4];
  undefined1 local_134 [20];
  FReflectionCaptureMapBuildData *local_120;
  UReflectionCaptureComponent **local_118;
  undefined1 *local_110;
  FMemoryReader local_108;
  FReflectionCaptureMapBuildData *local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReflectionCaptureObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReflectionCaptureObjectVersion::GUID)
  ;
  if (iVar13 < 1) {
    pFVar19 = (FReflectionCaptureMapBuildData *)0x0;
    if (0x11c < *(int *)&param_1->field_0x40) {
      puVar3 = *(ulonglong **)&param_1->field_0x8;
      if (puVar3[1] < *puVar3 + 4) {
        local_170[0] = 0;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_170,4);
        if (1 < local_170[0]) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
      }
      else {
        *puVar3 = *puVar3 + 4;
      }
    }
    if (0x15d < *(int *)&param_1->field_0x40) {
      local_168.A = 0;
      local_168.B = 0;
      local_168.C = 0;
      local_168.D = 0;
      ::operator<<(param_1,&local_168);
      local_178 = 0x3f800000;
      iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
      if (4 < iVar13) {
        plVar4 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_178,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_178);
          }
        }
        else {
          local_178 = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      if (((local_168.C == 0x9f4120ff && local_168.D == 0x5812f4d3) && local_168.A == 0xc669396) &&
          local_168.B == 0x9cb849ae) {
        puVar3 = *(ulonglong **)&param_1->field_0x8;
        puVar1 = (uint *)*puVar3 + 1;
        if ((uint *)puVar3[1] < puVar1) {
          local_174 = 0;
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_174,4);
          if (1 < local_174) {
            FArchiveState::SetError((FArchiveState *)param_1);
          }
          uVar14 = local_174;
          if ((param_1->field_0x28 & 1) == 0) {
            return;
          }
        }
        else {
          uVar14 = *(uint *)*puVar3;
          *puVar3 = (ulonglong)puVar1;
        }
        if (uVar14 != 0) {
          pFVar16 = ::operator_new(0x38);
          if (pFVar16 != (FReflectionCaptureMapBuildData *)0x0) {
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            pFVar16->_padding_ = 0;
            *(undefined1 *)&pFVar16->_padding_ = 0;
            pFVar16->AllocatedSize = 0;
            pFVar19 = pFVar16;
          }
          iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID)
          ;
          if (iVar13 < 2) {
            *(undefined4 *)&pFVar19->_padding_ = 0x80;
          }
          else {
            ::operator<<(param_1,(int *)pFVar19);
          }
          local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_158.ArrayNum = 0;
          local_158.ArrayMax = 0;
          TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                    (param_1,&local_158);
          if ((local_158.ArrayNum < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CompressedCapturedData.Num() > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ReflectionCaptureComponent.cpp"
                                  ,0x388,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          local_108._padding_ = 0;
          FArchiveState::FArchiveState((FArchiveState *)&local_108);
          local_108._padding_ = 0;
          local_108._padding_ = (longlong)&___7FMemoryReader__6B_;
          local_108.Bytes = &local_158;
          local_108.LimitSize = 0x7fffffffffffffff;
          FArchiveState::SetIsLoading((FArchiveState *)&local_108,true);
          (**(code **)(local_108._padding_ + 0x108))(&local_108,0);
          if (*(uint **)(local_108._padding_ + 8) < *(uint **)local_108._padding_ + 1) {
            if ((local_108._padding_ & 0x10000U) == 0) {
              if (*(code **)(local_108._padding_ + 0x188) == FMemoryReader::Serialize) {
                FMemoryReader::Serialize(&local_108,local_res10,4);
              }
              else {
                (**(code **)(local_108._padding_ + 0x188))();
              }
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)&local_108,local_res10);
            }
          }
          else {
            local_res10[0] = **(uint **)local_108._padding_;
            *(longlong *)local_108._padding_ = *(longlong *)local_108._padding_ + 4;
          }
          if (*(uint **)(local_108._padding_ + 8) < *(uint **)local_108._padding_ + 1) {
            if ((local_108._padding_ & 0x10000U) == 0) {
              if (*(code **)(local_108._padding_ + 0x188) == FMemoryReader::Serialize) {
                FMemoryReader::Serialize(&local_108,local_res20,4);
              }
              else {
                (**(code **)(local_108._padding_ + 0x188))();
              }
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)&local_108,local_res20);
            }
          }
          else {
            local_res20[0] = **(uint **)local_108._padding_;
            *(longlong *)local_108._padding_ = *(longlong *)local_108._padding_ + 4;
          }
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Empty
                    ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar19->_padding_,
                     local_res10[0]);
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_res10[0],(ForAnyElementType *)&pFVar19->_padding_,
                     (int *)&pFVar19->_padding_,(int *)((longlong)&pFVar19->_padding_ + 4));
          lVar17 = (longlong)(int)(uint)local_108._padding_;
          uVar14 = 0;
          if ((int)(uint)local_108._padding_ < local_158.ArrayNum) {
            uVar14 = ~(uint)local_108._padding_ >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar18 = (longlong)(int)local_res10[0];
          pvVar5 = (void *)pFVar19->_padding_;
          pFVar20 = local_158.AllocatorInstance.Data + lVar17;
          lVar17 = (longlong)(int)local_res20[0];
          FVar15 = FNameEntryId::FromValidEName((EName)local_138);
          uStack_144 = 0;
          local_148 = *(uint *)CONCAT44(extraout_var,FVar15.Value);
          FVar8.Number = 0;
          FVar8.ComparisonIndex.Value = local_148;
          bVar12 = FCompression::UncompressMemory
                             (FVar8,pvVar5,lVar18,pFVar20,lVar17,COMPRESS_NoFlags,0);
          if ((!bVar12) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FCompression::UncompressMemory(NAME_Zlib, LegacyMapBuildData->FullHDRCapturedData.GetData(), UncompressedSize, SourceData, CompressedSize)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ReflectionCaptureComponent.cpp"
                                  ,0x395,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FArchive::~FArchive((FArchive *)&local_108);
          if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.AllocatorInstance.Data);
          }
          *(uint *)((longlong)&pFVar19->_padding_ + 4) = local_178;
          local_134._4_16_ = *(undefined1 (*) [16])&this->MapBuildDataId;
          uVar2 = (this->MapBuildDataId).C;
          uVar6 = (this->MapBuildDataId).D;
          local_140 = this;
          local_120 = pFVar19;
          local_48 = pFVar19;
          if (((local_134._8_4_ == 0 && uVar6 == 0) && uVar2 == 0) && local_134._4_4_ == 0) {
            FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::RemoveAnnotation
                      (&GReflectionCapturesWithLegacyBuildData,(UObjectBase *)this);
          }
          else {
            AcquireSRWLockExclusive
                      ((PSRWLOCK)&GReflectionCapturesWithLegacyBuildData.AnnotationMapCritical);
            uVar10 = GReflectionCapturesWithLegacyBuildData.AnnotationMap._52_4_;
            uVar9 = GReflectionCapturesWithLegacyBuildData.AnnotationMap._8_4_;
            local_118 = &local_140;
            local_110 = local_134 + 4;
            TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<UObjectBase_const_*_const_&,FReflectionCaptureMapBuildLegacyData_const_&>_>
                      ((TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
                        *)&GReflectionCapturesWithLegacyBuildData.AnnotationMap,
                       (TPairInitializer<UObjectBase_const_*_const_&,FReflectionCaptureMapBuildLegacyData_const_&>
                        *)local_134,(bool *)&local_118);
            pUVar11 = local_140;
            AcquireSRWLockExclusive
                      ((PSRWLOCK)&GReflectionCapturesWithLegacyBuildData.AnnotationCacheCritical);
            GReflectionCapturesWithLegacyBuildData.AnnotationCacheKey = (UObjectBase *)pUVar11;
            GReflectionCapturesWithLegacyBuildData.AnnotationCacheValue.Id.A = local_134._4_4_;
            GReflectionCapturesWithLegacyBuildData.AnnotationCacheValue.Id.B = local_134._8_4_;
            GReflectionCapturesWithLegacyBuildData.AnnotationCacheValue.Id.C = local_134._12_4_;
            GReflectionCapturesWithLegacyBuildData.AnnotationCacheValue.Id.D = local_134._16_4_;
            GReflectionCapturesWithLegacyBuildData.AnnotationCacheValue.MapBuildData = local_120;
            ReleaseSRWLockExclusive
                      ((PSRWLOCK)&GReflectionCapturesWithLegacyBuildData.AnnotationCacheCritical);
            ReleaseSRWLockExclusive
                      ((PSRWLOCK)&GReflectionCapturesWithLegacyBuildData.AnnotationMapCritical);
            if (uVar9 == uVar10) {
              FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::ProcessRegistration
                        (&GReflectionCapturesWithLegacyBuildData);
            }
          }
        }
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,(longlong)(int)local_res18[0]);
      }
    }
  }
  return;
}

// StaticRegisterNativesUReflectionCaptureComponent @ 1479707e0

void __cdecl UReflectionCaptureComponent::StaticRegisterNativesUReflectionCaptureComponent(void)

{
  return;
}

// UpdatePreviewShape @ 14797ada0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReflectionCaptureComponent::UpdatePreviewShape(UReflectionCaptureComponent *this)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  UBillboardComponent *pUVar4;
  double dVar5;
  double dVar6;
  
  pUVar4 = (this->CaptureOffsetComponent).field0_0x0.DebugPtr;
  if (pUVar4 == (UBillboardComponent *)0x0) {
    return;
  }
  dVar5 = *(double *)&this->field_0x238;
  dVar6 = *(double *)&this->field_0x240;
  dVar1 = (this->CaptureOffset).field0_0x0._s_0.Z;
  dVar2 = (this->CaptureOffset).field0_0x0._s_0.Y;
  pUVar4->_padding_ =
       (longlong)((this->CaptureOffset).field0_0x0._s_0.X / *(double *)&this->field_0x230);
  pUVar4->_padding_ = (longlong)(dVar2 / dVar5);
  pUVar4->_padding_ = (longlong)(dVar1 / dVar6);
  uVar3 = *(undefined8 *)&(this->CaptureOffset).field0_0x0;
  if ((((double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (uVar3 = *(undefined8 *)((longlong)&(this->CaptureOffset).field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (uVar3 = *(undefined8 *)((longlong)&(this->CaptureOffset).field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar3 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    USceneComponent::SetVisibility
              ((USceneComponent *)(this->CaptureOffsetComponent).field0_0x0.DebugPtr,false,DirtyOnly
              );
    return;
  }
  USceneComponent::SetVisibility
            ((USceneComponent *)(this->CaptureOffsetComponent).field0_0x0.DebugPtr,true,DirtyOnly);
  return;
}

// UpdateReflectionCaptureContents @ 14797aeb0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UReflectionCaptureComponent::UpdateReflectionCaptureContents
          (UWorld *param_1,wchar_t *param_2,bool param_3,bool param_4,bool param_5)

{
  UReflectionCaptureComponent *this;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  TConsoleVariableData<int> *pTVar4;
  int iVar5;
  FShaderCompilingManager *this_00;
  bool bVar6;
  int iVar7;
  uint uVar8;
  AActor *this_01;
  ForElementType<UReflectionCaptureComponent_*> FVar9;
  FGuid *pFVar10;
  UWorld *pUVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1d0;
  int local_1c8;
  int iStack_1c4;
  UActorComponent *local_1c0;
  UActorComponent *local_1b8;
  UClass *local_1b0;
  UReflectionCaptureComponent *local_1a8;
  wchar_t *local_1a0;
  TActorIteratorBase<FActorIterator> local_198;
  FGuid local_138;
  undefined1 local_128 [192];
  ForElementType<UReflectionCaptureComponent_*> local_68;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  this_00 = GShaderCompilingManager;
  if (param_1 != (UWorld *)0x0) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
    if ((param_1->Scene != (FSceneInterface *)0x0) &&
       ((local_1a0 = param_2, GShaderCompilingManager == (FShaderCompilingManager *)0x0 ||
        ((((iVar7 = FShaderCompilingManager::GetNumOutstandingJobs(GShaderCompilingManager),
           iVar7 < 1 &&
           (*(int *)&(this_00->ShaderMapJobs).field_0x8 -
            *(int *)&(this_00->ShaderMapJobs).field_0x34 < 1)) &&
          (*(int *)&(this_00->PendingFinalizeShaderMaps).field_0x8 -
           *(int *)&(this_00->PendingFinalizeShaderMaps).field_0x34 < 1)) &&
         ((iVar7 = FShaderCompilingManager::GetNumPendingJobs(this_00), iVar7 < 1 &&
          (this_00->NumExternalJobs < 1)))))))) {
      iVar5 = ReflectionCapturesToUpdateForLoad.ArrayNum;
      iVar7 = ReflectionCapturesToUpdate.ArrayNum;
      pTVar4 = CVarReflectionCaptureUpdateEveryFrame.Ref;
      bVar6 = IsInParallelGameThread();
      if ((!bVar6) &&
         ((bVar6 = IsInGameThread(), !bVar6 &&
          (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar6)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((0 < iVar7) || (0 < iVar5)) || (pTVar4->ShadowedValue[0] != 0)) {
        UWorld::SendAllEndOfFrameUpdates(param_1);
        pTVar4 = CVarReflectionCaptureUpdateEveryFrame.Ref;
        bVar6 = IsInParallelGameThread();
        if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (pTVar4->ShadowedValue[0] != 0) {
          local_1b0 = Z_Construct_UClass_AActor_NoRegister();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b0 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_1b0);
          }
          local_198.Flags = OnlyActiveLevels|SkipPendingKill;
          local_198.State.bIsSet = false;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b0 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_1b0);
          }
          FActorIteratorState::FActorIteratorState
                    (&local_198.State.TypedValue,param_1,(TSubclassOf<AActor>)&local_1b0);
          local_198.State.bIsSet = true;
          while( true ) {
            TActorIteratorBase<FActorIterator>::operator++(&local_198);
            if ((local_198.State.bIsSet == false) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (local_198.State.TypedValue.ReachedEnd != false) break;
            local_68 = (ForElementType<UReflectionCaptureComponent_*>)0x0;
            local_60 = 0;
            local_5c = 0x18;
            if ((local_198.State.bIsSet == false) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            this_01 = FActorIteratorState::GetActorChecked(&local_198.State.TypedValue);
            AActor::
            GetComponents<UReflectionCaptureComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                      (this_01,(TArray<UReflectionCaptureComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                                *)local_128,false);
            uVar13 = 0;
            if (0 < local_60) {
              lVar14 = 0;
              iVar7 = local_60;
              do {
                uVar8 = 0;
                if ((int)uVar13 < iVar7) {
                  uVar8 = ~uVar13 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), iVar7 = local_60, bVar6)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                FVar9 = (ForElementType<UReflectionCaptureComponent_*>)local_128;
                if (local_68 != (ForElementType<UReflectionCaptureComponent_*>)0x0) {
                  FVar9 = local_68;
                }
                this = *(UReflectionCaptureComponent **)(lVar14 + (longlong)FVar9);
                if ((this->field_0x1a8 & 0x20) != 0) {
                  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
                  pFVar10 = FGuid::NewGuid(&local_138);
                  uVar8 = pFVar10->B;
                  uVar2 = pFVar10->C;
                  uVar3 = pFVar10->D;
                  (this->MapBuildDataId).A = pFVar10->A;
                  (this->MapBuildDataId).B = uVar8;
                  (this->MapBuildDataId).C = uVar2;
                  (this->MapBuildDataId).D = uVar3;
                  local_1a8 = this;
                  TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>::
                  AddUniqueImpl<UReflectionCaptureComponent_*>
                            (&ReflectionCapturesToUpdate,&local_1a8);
                  this->bNeedsRecaptureOrUpload = true;
                  iVar7 = local_60;
                }
                uVar13 = uVar13 + 1;
                lVar14 = lVar14 + 8;
              } while ((int)uVar13 < iVar7);
            }
            if (local_68 != (ForElementType<UReflectionCaptureComponent_*>)0x0) {
              FMemory::Free((void *)local_68);
            }
          }
          if (local_198.State.bIsSet != false) {
            UWorld::RemoveOnActorSpawnedHandler
                      (local_198.State.TypedValue.CurrentWorld,
                       local_198.State.TypedValue.ActorSpawnedDelegateHandle);
            if (local_198.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
            }
            if (local_198.State.TypedValue.ActorArray.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.State.TypedValue.ActorArray.AllocatorInstance.Data);
            }
          }
        }
        uVar13 = ReflectionCapturesToUpdate.ArrayNum - 1;
        local_1d0.Data = (FScriptContainerElement *)0x0;
        local_1c8 = 0;
        iStack_1c4 = 0;
        if (-1 < (int)uVar13) {
          lVar14 = (longlong)(int)uVar13 * 8;
          do {
            uVar8 = 0;
            if ((int)uVar13 < ReflectionCapturesToUpdate.ArrayNum) {
              uVar8 = ~uVar13 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_1c0 = *(UActorComponent **)
                         (ReflectionCapturesToUpdate.AllocatorInstance.Data + lVar14);
            pUVar11 = local_1c0->WorldPrivate;
            if (pUVar11 == (UWorld *)0x0) {
              pUVar11 = UActorComponent::GetWorld_Uncached(local_1c0);
            }
            if (pUVar11 == param_1) {
              if (((local_1d0.Data <= (FScriptContainerElement *)&local_1c0) &&
                  ((FScriptContainerElement *)&local_1c0 < local_1d0.Data + (longlong)iStack_1c4 * 8
                  )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              if (local_1c8 == iStack_1c4) {
                local_1c8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&local_1d0,&iStack_1c4);
              }
              lVar12 = (longlong)local_1c8;
              local_1c8 = local_1c8 + 1;
              *(UActorComponent **)(local_1d0.Data + lVar12 * 8) = local_1c0;
              TArray<UReflectionCaptureComponent_*,TSizedDefaultAllocator<32>_>::RemoveAt
                        (&ReflectionCapturesToUpdate,uVar13,Default);
            }
            lVar14 = lVar14 + -8;
            uVar13 = uVar13 - 1;
          } while (-1 < (int)uVar13);
        }
        if (0 < ReflectionCapturesToUpdateForLoad.ArrayNum) {
          EnterCriticalSection((LPCRITICAL_SECTION)&ReflectionCapturesToUpdateForLoadLock);
          uVar13 = ReflectionCapturesToUpdateForLoad.ArrayNum - 1;
          if (-1 < (int)uVar13) {
            lVar12 = (longlong)(int)uVar13;
            lVar14 = lVar12 * 8;
            do {
              uVar8 = 0;
              if ((int)uVar13 < ReflectionCapturesToUpdateForLoad.ArrayNum) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              local_1b8 = *(UActorComponent **)
                           (ReflectionCapturesToUpdateForLoad.AllocatorInstance.Data + lVar14);
              pUVar11 = local_1b8->WorldPrivate;
              if (pUVar11 == (UWorld *)0x0) {
                pUVar11 = UActorComponent::GetWorld_Uncached(local_1b8);
              }
              if (pUVar11 == param_1) {
                if (((local_1d0.Data <= (FScriptContainerElement *)&local_1b8) &&
                    ((FScriptContainerElement *)&local_1b8 <
                     local_1d0.Data + (longlong)iStack_1c4 * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                if (local_1c8 == iStack_1c4) {
                  local_1c8 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x808,&local_1d0,&iStack_1c4);
                }
                iVar7 = local_1c8 + 1;
                *(UActorComponent **)(local_1d0.Data + (longlong)local_1c8 * 8) = local_1b8;
                uVar8 = 0;
                if ((int)uVar13 < ReflectionCapturesToUpdateForLoad.ArrayNum) {
                  uVar8 = ~uVar13 >> 0x1f;
                }
                local_1c8 = iVar7;
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar7 = (ReflectionCapturesToUpdateForLoad.ArrayNum - uVar13) + -1;
                if (iVar7 != 0) {
                  memmove(ReflectionCapturesToUpdateForLoad.AllocatorInstance.Data + lVar12 * 8,
                          ReflectionCapturesToUpdateForLoad.AllocatorInstance.Data + lVar12 * 8 + 8,
                          (longlong)iVar7 << 3);
                }
                ReflectionCapturesToUpdateForLoad.ArrayNum =
                     ReflectionCapturesToUpdateForLoad.ArrayNum + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,&ReflectionCapturesToUpdateForLoad.AllocatorInstance,
                           ReflectionCapturesToUpdateForLoad.ArrayNum,
                           &ReflectionCapturesToUpdateForLoad.ArrayMax);
              }
              lVar12 = lVar12 + -1;
              lVar14 = lVar14 + -8;
              uVar13 = uVar13 - 1;
              param_2 = local_1a0;
            } while (-1 < (int)uVar13);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&ReflectionCapturesToUpdateForLoadLock);
        }
        (**(code **)(param_1->Scene->_padding_ + 0x178))(param_1->Scene,&local_1d0,param_2,param_3);
        if (local_1d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data);
        }
      }
    }
  }
  return;
}

