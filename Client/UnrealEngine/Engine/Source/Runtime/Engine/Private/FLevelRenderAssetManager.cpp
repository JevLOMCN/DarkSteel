// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FLevelRenderAssetManager @ 148777980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLevelRenderAssetManager * __thiscall
FLevelRenderAssetManager::FLevelRenderAssetManager
          (FLevelRenderAssetManager *this,ULevel *param_1,FDoWorkTask *param_2)

{
  undefined1 *puVar1;
  
  this->Level = param_1;
  this->bIsInitialized = false;
  this->bHasBeenReferencedToStreamedTextures = false;
  FStaticRenderAssetInstanceManager::FStaticRenderAssetInstanceManager
            (&this->StaticInstances,param_2);
  this->BuildStep = BuildTextureLookUpMap;
  (this->UnprocessedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnprocessedComponents).ArrayNum = 0;
  (this->UnprocessedComponents).ArrayMax = 0;
  (this->PendingComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingComponents).ArrayNum = 0;
  (this->PendingComponents).ArrayMax = 0;
  *(undefined8 *)&this->TextureGuidToLevelIndex = 0;
  *(undefined8 *)&(this->TextureGuidToLevelIndex).field_0x8 = 0;
  *(undefined8 *)&(this->TextureGuidToLevelIndex).field_0x20 = 0;
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x28 = 0;
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x34 = 0;
  *(undefined8 *)&(this->TextureGuidToLevelIndex).field_0x40 = 0;
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x48 = 0;
  (this->SetAsLock).State = (atomic<unsigned_char>)0x0;
  if (this->Level != (ULevel *)0x0) {
    this->Level->bStaticComponentsRegisteredInStreamingManager = '\0';
  }
  return this;
}

// operator() @ 148782db0

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
`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>::operator()
          (void *this,FProcessActorContext *param_1,int param_2)

{
  longlong lVar1;
  AActor *this_00;
  FLevelRenderAssetManager *pFVar2;
  FDynamicRenderAssetInstanceManager *pFVar3;
  FStreamingTextureLevelContext *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  int iVar12;
  UClass *pUVar13;
  int local_res8 [2];
  bool local_res18 [8];
  UClass *local_res20;
  undefined7 uStack_b7;
  UClass *local_b0;
  <lambda_1> local_a8;
  <lambda_1> local_68;
  
  pUVar11 = (UClass *)0x0;
  pUVar13 = (UClass *)0x0;
  lVar1 = **(longlong **)this;
  uVar8 = 0;
  if (param_2 < *(int *)(lVar1 + 0xa8)) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = *(AActor **)(*(longlong *)(lVar1 + 0xa0) + (longlong)param_2 * 8);
  if (this_00 == (AActor *)0x0) {
    return;
  }
  local_res8[0] = 0;
  local_res18[0] = AActor::IsRootComponentStatic(this_00);
  pFVar2 = *(FLevelRenderAssetManager **)this;
  pFVar3 = *(FDynamicRenderAssetInstanceManager **)((longlong)this + 8);
  pFVar4 = *(FStreamingTextureLevelContext **)((longlong)this + 0x10);
  bVar7 = *(bool *)((longlong)this + 0x18);
  pUVar9 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar9 == (UClass *)0x0) goto LAB_148782ed2;
  }
  else {
    pUVar13 = pUVar11;
    if (pUVar9 == (UClass *)0x0) goto LAB_148782ed2;
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar13 = pUVar11;
  if (pUVar10 != (UClass *)0x0) {
    iVar12 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar12) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar12 * 8) !=
        &pUVar10->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar13 = pUVar9;
    }
  }
LAB_148782ed2:
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == pUVar11) {
    local_res20 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    local_a8._49_7_ = uStack_b7;
    local_a8.bIsParallelForAllowed = bVar7;
    local_a8.__this = pFVar2;
    local_a8.DynamicComponentManager = pFVar3;
    local_a8.Context = param_1;
    local_a8.LevelContext = pFVar4;
    local_a8.NumSteps = local_res8;
    local_a8.bIsStaticActor = local_res18;
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,0,__FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>::operator()_::__l5::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res20,&local_a8);
  }
  else {
    local_b0 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    local_68._49_7_ = uStack_b7;
    local_68.bIsParallelForAllowed = bVar7;
    local_68.__this = pFVar2;
    local_68.DynamicComponentManager = pFVar3;
    local_68.Context = param_1;
    local_68.LevelContext = pFVar4;
    local_68.NumSteps = local_res8;
    local_68.bIsStaticActor = local_res18;
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,0,__FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>::operator()_::__l5::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_b0,&local_68);
  }
  iVar12 = 1;
  if (1 < local_res8[0]) {
    iVar12 = local_res8[0];
  }
  param_1->NumSteps = param_1->NumSteps + iVar12;
  return;
}

// operator() @ 1487836a0

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
`FLevelRenderAssetManager::IncrementalBuild'::__l24::<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  UPrimitiveComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FTaskTagScope local_28;
  
  FTaskTagScope::FTaskTagScope(&local_28,EParallelGameThread);
  lVar1 = *(longlong *)this;
  uVar7 = **(int **)((longlong)this + 8) + ~param_1;
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar1 + 0x50)) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)((longlong)this + 0x20);
  pUVar3 = *(UPrimitiveComponent **)(*(longlong *)(lVar1 + 0x48) + (longlong)(int)uVar7 * 8);
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FRenderAssetInstanceState::PreAddComponent
            (pUVar3,*(FStreamingTextureLevelContext **)((longlong)this + 0x10),
             **(float **)((longlong)this + 0x18),
             (FPreAddComponentPayload *)((longlong)param_1 * 0x20 + *plVar2));
  FTaskTagScope::~FTaskTagScope(&local_28);
  return;
}

// operator() @ 148783860

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
`FLevelRenderAssetManager::IncrementalBuild'::__l23::<lambda_3>::operator()
          (void *this,FPreAddComponentPayload *param_1,EAddComponentResult param_2)

{
  UPrimitiveComponent *pUVar1;
  FStreamingTextureLevelContext *pFVar2;
  FDynamicRenderAssetInstanceManager *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if (param_2 == Success) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AddResult != EAddComponentResult::Success",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                       ,0xdd,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((param_2 == Fail) && (*(char *)((longlong)this + 0x18) == '\0')) {
    lVar3 = *(longlong *)this;
    if ((*(FPreAddComponentPayload **)(lVar3 + 0x58) <= param_1) &&
       (param_1 < (FPreAddComponentPayload *)
                  (&(*(FPreAddComponentPayload **)(lVar3 + 0x58))->Component + *(int *)(lVar3 + 100)
                  ))) {
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
    iVar6 = *(int *)(lVar3 + 0x60);
    if (iVar6 == *(int *)(lVar3 + 100)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(lVar3 + 0x58),(int *)(lVar3 + 100));
    }
    *(int *)(lVar3 + 0x60) = iVar6 + 1;
    *(UPrimitiveComponent **)(*(longlong *)(lVar3 + 0x58) + (longlong)iVar6 * 8) =
         param_1->Component;
    return;
  }
  pUVar1 = param_1->Component;
  pFVar2 = *(FStreamingTextureLevelContext **)((longlong)this + 0x10);
  this_00 = *(FDynamicRenderAssetInstanceManager **)((longlong)this + 8);
  if (pUVar1 == (UPrimitiveComponent *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Primitive",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                       ,100,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar1->bAttachedToStreamingManagerAsStatic = '\0';
  if (pUVar1->bHandledByStreamingManagerAsDynamic == '\0') {
    FDynamicRenderAssetInstanceManager::Add(this_00,pUVar1,pFVar2,0.0);
  }
  return;
}

// operator() @ 1487839c0

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
`FLevelRenderAssetManager::IncrementalBuild'::__l51::<lambda_4>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong *plVar2;
  FStreamingTextureLevelContext *pFVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FTaskTagScope local_48 [2];
  
  FTaskTagScope::FTaskTagScope(local_48,EParallelGameThread);
  plVar2 = *(longlong **)((longlong)this + 0x18);
  uVar8 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = *(FStreamingTextureLevelContext **)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  lVar5 = *plVar2;
  fVar1 = **(float **)((longlong)this + 0x10);
  uVar8 = 0;
  if (param_1 < *(int *)(lVar4 + 0x60)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FRenderAssetInstanceState::PreAddComponent
            (*(UPrimitiveComponent **)(*(longlong *)(lVar4 + 0x58) + (longlong)param_1 * 8),pFVar3,
             fVar1,(FPreAddComponentPayload *)((longlong)param_1 * 0x20 + lVar5));
  FTaskTagScope::~FTaskTagScope(local_48);
  return;
}

// operator() @ 148783af0

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
`FLevelRenderAssetManager::IncrementalBuild'::__l50::<lambda_5>::operator()
          (void *this,FPreAddComponentPayload *param_1,EAddComponentResult param_2)

{
  UPrimitiveComponent *pUVar1;
  FStreamingTextureLevelContext *pFVar2;
  FDynamicRenderAssetInstanceManager *this_00;
  code *pcVar3;
  bool bVar4;
  
  if (param_2 == Success) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AddResult != EAddComponentResult::Success",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                       ,0x13d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = param_1->Component;
  pFVar2 = *(FStreamingTextureLevelContext **)((longlong)this + 0x10);
  this_00 = *(FDynamicRenderAssetInstanceManager **)((longlong)this + 8);
  if (pUVar1 == (UPrimitiveComponent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Primitive",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                       ,100,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1->bAttachedToStreamingManagerAsStatic = '\0';
  if (pUVar1->bHandledByStreamingManagerAsDynamic == '\0') {
    FDynamicRenderAssetInstanceManager::Add(this_00,pUVar1,pFVar2,0.0);
  }
  return;
}

// GetAllocatedSize @ 14879b5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FLevelRenderAssetManager::GetAllocatedSize(FLevelRenderAssetManager *this)

{
  FRenderAssetInstanceState *this_00;
  uint uVar1;
  
  this_00 = (this->StaticInstances).StateSync.State.Reference;
  if (this_00 != (FRenderAssetInstanceState *)0x0) {
    uVar1 = FRenderAssetInstanceState::GetAllocatedSize(this_00);
    return uVar1 + 0x1d8 +
           ((this->PendingComponents).ArrayMax + (this->UnprocessedComponents).ArrayMax) * 8;
  }
  return ((this->PendingComponents).ArrayMax + (this->UnprocessedComponents).ArrayMax) * 8;
}

// GetWorldTime @ 1487a6dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall FLevelRenderAssetManager::GetWorldTime(FLevelRenderAssetManager *this)

{
  bool bVar1;
  UWorld *this_00;
  
  if (this->Level == (ULevel *)0x0) {
    return 0.0;
  }
  this_00 = ULevel::GetWorld(this->Level);
  if (this_00 != (UWorld *)0x0) {
    bVar1 = UWorld::IsPaused(this_00);
    if (!bVar1) {
      return (float)this_00->TimeSeconds;
    }
  }
  return 0.0;
}

// IncrementalBuild @ 1487ab5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FLevelRenderAssetManager::IncrementalBuild
          (FLevelRenderAssetManager *this,FDynamicRenderAssetInstanceManager *param_1,
          FStreamingTextureLevelContext *param_2,bool param_3,long64 *param_4)

{
  EStaticBuildStep *pEVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  FProcessActorContext *pFVar5;
  FScriptContainerElement *pFVar6;
  FRenderAssetInstanceState *pFVar7;
  TDoWorkTask<RenderAssetInstanceTask::FNormalizeLightmapTexelFactor> *pTVar8;
  FRenderAssetInstanceState *pFVar9;
  UPrimitiveComponent *pUVar10;
  code *pcVar11;
  <lambda_1> <Var12;
  bool bVar13;
  TConsoleVariableData<float> *pTVar14;
  float fVar15;
  <lambda_1> <Var16;
  bool bVar17;
  bool bVar18;
  Type TVar19;
  byte bVar20;
  bool bVar21;
  EAddComponentResult EVar22;
  FNameEntryId FVar23;
  int iVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_2_::FStat_FLevelRenderAssetManager_IncrementalBuild>
  FVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ForAnyElementType FVar30;
  FName FVar31;
  uint uVar32;
  FProcessActorContext *pFVar33;
  int iVar34;
  ULevel *pUVar35;
  EParallelForFlags EVar36;
  uint uVar37;
  undefined1 local_256 [6];
  ForAnyElementType local_250;
  uint local_248;
  int local_244;
  float local_240;
  undefined1 local_23c [4];
  uint local_238 [2];
  FName local_230;
  int local_228 [2];
  UPrimitiveComponent *local_220;
  TArray<FRenderAssetInstanceState::FPreAddComponentPayload,TSizedDefaultAllocator<32>_> local_218;
  TArray<FRenderAssetInstanceState::FPreAddComponentPayload,TSizedDefaultAllocator<32>_> local_208;
  FColor_u_0 local_1f8;
  undefined1 local_1f4 [12];
  ulonglong local_1e8;
  FName local_1e0;
  FName local_1d8;
  TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *local_1c8;
  FScriptContainerElement *local_1c0;
  uint *local_1b8;
  TArrayView<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,int>
  local_1b0;
  TArrayView<std::nullptr_t,int> local_1a0;
  code *local_190;
  FLevelRenderAssetManager **local_188;
  code *local_180;
  FLevelRenderAssetManager **local_178;
  TArrayView<std::nullptr_t,int> local_170;
  code *local_160;
  FLevelRenderAssetManager **local_158;
  code *local_150;
  FLevelRenderAssetManager **local_148;
  FLevelRenderAssetManager *local_140;
  FDynamicRenderAssetInstanceManager *pFStack_138;
  FStreamingTextureLevelContext *local_130;
  bool bStack_128;
  undefined7 uStack_127;
  FLevelRenderAssetManager *local_120;
  FDynamicRenderAssetInstanceManager *local_118;
  FStreamingTextureLevelContext *local_110;
  FLevelRenderAssetManager *local_108;
  FDynamicRenderAssetInstanceManager *local_100;
  FStreamingTextureLevelContext *local_f8;
  byte local_f0;
  FLevelRenderAssetManager *local_e8;
  FStreamingTextureLevelContext *local_e0;
  float *local_d8;
  TArray<FRenderAssetInstanceState::FPreAddComponentPayload,TSizedDefaultAllocator<32>_> *local_d0;
  FLevelRenderAssetManager *local_c8;
  int *local_c0;
  FStreamingTextureLevelContext *local_b8;
  float *local_b0;
  TArray<FRenderAssetInstanceState::FPreAddComponentPayload,TSizedDefaultAllocator<32>_> *local_a8;
  FName local_a0;
  FName local_98 [2];
  <lambda_1> local_88 [2];
  
  uVar29 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_FLevelRenderAssetManager_IncrementalBuild ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_2_::FStat_FLevelRenderAssetManager_IncrementalBuild>
         )0x0) {
      pFVar26 = ::FName::FName(&local_a0,"FLevelRenderAssetManager_IncrementalBuild");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_FLevelRenderAssetManager_IncrementalBuild,
                 *pFVar26,L"FLevelRenderAssetManager_IncrementalBuild","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar27 = StatPtr_FLevelRenderAssetManager_IncrementalBuild;
  if (StatPtr_FLevelRenderAssetManager_IncrementalBuild ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_2_::FStat_FLevelRenderAssetManager_IncrementalBuild>
       )0x0) {
    pFVar26 = ::FName::FName(local_98,"FLevelRenderAssetManager_IncrementalBuild");
    FVar27 = (FThreadSafeStaticStat<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_2_::FStat_FLevelRenderAssetManager_IncrementalBuild>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_FLevelRenderAssetManager_IncrementalBuild,*pFVar26,
                          L"FLevelRenderAssetManager_IncrementalBuild","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar27;
  bVar13 = false;
  <Var12 = (<lambda_1>)0x0;
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  bVar17 = false;
  <Var16 = (<lambda_1>)0x0;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_1487ab74f:
    bVar13 = bVar17;
    <Var12 = <Var16;
    bVar17 = false;
    local_230 = local_1d8;
    FVar31 = local_1d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f8._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar13 = false;
      <Var12 = (<lambda_1>)0x1;
      bVar17 = false;
      <Var16 = (<lambda_1>)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_1e0.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_1e0.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e0,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                   ,0x77);
        bVar13 = true;
        <Var12 = (<lambda_1>)0x1;
        bVar17 = true;
        <Var16 = (<lambda_1>)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1487ab74f;
    local_230 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar17 = true;
  }
  if ((this->Level == (ULevel *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Level",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                          ,0x78,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar14 = CVarStreamingMaxTextureUVDensity.Ref;
  bVar18 = IsInParallelGameThread();
  if (bVar18) {
LAB_1487ab7a0:
    uVar28 = uVar29;
  }
  else {
    bVar18 = IsInGameThread();
    uVar28 = 4;
    if (bVar18) goto LAB_1487ab7a0;
  }
  local_240 = *(float *)((longlong)pTVar14->ShadowedValue + uVar28);
  pEVar1 = &this->BuildStep;
  switch(*pEVar1) {
  case BuildTextureLookUpMap:
    bVar18 = CpuChannel->Enabled < 0;
    if (!bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId128,
                 "FLevelRenderAssetManager::IncrementalBuild_BuildTextureLookUpMap",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                 ,0x80);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId128);
    }
    local_1c8 = &this->TextureGuidToLevelIndex;
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::Reserve
              ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                *)local_1c8,(this->Level->StreamingTextureGuids).ArrayNum);
    pUVar35 = this->Level;
    local_238[0] = 0;
    if (0 < (pUVar35->StreamingTextureGuids).ArrayNum) {
      do {
        uVar32 = (uint)uVar29;
        uVar37 = 0;
        if ((int)uVar32 < (pUVar35->StreamingTextureGuids).ArrayNum) {
          uVar37 = ~uVar32 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_1c0 = (pUVar35->StreamingTextureGuids).AllocatorInstance.Data +
                    (longlong)(int)uVar32 * 0x10;
        local_1b8 = local_238;
        TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FGuid_const_&,int_const_&>_>
                  ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                    *)&this->TextureGuidToLevelIndex,
                   (TPairInitializer<FGuid_const_&,int_const_&> *)local_1f4,(bool *)&local_1c0);
        pUVar35 = this->Level;
        local_238[0] = local_238[0] + 1;
        uVar29 = (ulonglong)local_238[0];
        FVar31 = local_230;
      } while ((int)local_238[0] < (pUVar35->StreamingTextureGuids).ArrayNum);
    }
    *param_4 = *param_4 - (longlong)(pUVar35->StreamingTextureGuids).ArrayNum;
    pUVar35 = this->Level;
    *pEVar1 = ProcessActors;
    TVar19 = GetCurrentMaterialQualityLevelChecked();
    FStreamingTextureLevelContext::UpdateContext(param_2,TVar19,pUVar35,local_1c8);
    goto joined_r0x0001487ac19f;
  case ProcessActors:
    bVar18 = CpuChannel->Enabled < 0;
    if (!bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId144,
                 "FLevelRenderAssetManager::IncrementalBuild_ProcessActors",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                 ,0x90);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId144);
    }
    iVar25 = (this->Level->Actors).ArrayNum;
    if (((UE::Private::RenderAssetStreamingManager::bAllowParallelForDuringIncrementalUpdate ==
          false) || (bVar21 = FApp::ShouldUseThreadingForPerformance(), !bVar21)) ||
       (iVar25 < MinNumElementsToProcess)) {
      bVar20 = 0;
LAB_1487ab9c7:
      bStack_128 = (bool)bVar20;
      iVar25 = 1;
    }
    else {
      bStack_128 = true;
      bVar20 = 1;
      if ((UE::Private::RenderAssetStreamingManager::
           GWorkerCountForParallelForDuringIncrementalUpdate < 1) ||
         (iVar25 <= UE::Private::RenderAssetStreamingManager::
                    GWorkerCountForParallelForDuringIncrementalUpdate)) goto LAB_1487ab9c7;
      iVar25 = (UE::Private::RenderAssetStreamingManager::
                GWorkerCountForParallelForDuringIncrementalUpdate + -1 + iVar25) /
               UE::Private::RenderAssetStreamingManager::
               GWorkerCountForParallelForDuringIncrementalUpdate;
    }
    local_250.Data = (FScriptContainerElement *)0x0;
    EVar36 = (EParallelForFlags)bStack_128;
    local_248 = 0;
    local_244 = 0;
    iVar34 = (this->Level->Actors).ArrayNum;
    local_140 = this;
    pFStack_138 = param_1;
    local_130 = param_2;
    if (0 < iVar34) {
      FVar23.Value = ParallelForImpl::GetNumberOfThreadTasks
                               (iVar34,iVar25,EVar36 ^ ForceSingleThread);
      local_230.ComparisonIndex.Value = FVar23.Value;
      if (local_244 < 0) {
        DestructItems<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,int>
                  ((FProcessActorContext *)local_250.Data,local_248);
        if (local_244 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&local_250,0,&local_244);
        }
      }
      else {
        DestructItems<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,int>
                  ((FProcessActorContext *)local_250.Data,local_248);
      }
      iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x18,8,local_230.ComparisonIndex.Value,&local_250,(int *)&local_248,
                          &local_244);
      DefaultConstructItems<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,int>
                (local_250.Data + (longlong)iVar24 * 0x18,local_230.ComparisonIndex.Value);
      local_1b0.ArrayNum = local_248;
      local_1b0.DataPtr = (FProcessActorContext *)local_250.Data;
      if (((int)local_248 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_88[0]._25_7_ = uStack_127;
      local_88[0].bIsParallelForAllowed = bStack_128;
      local_88[0].__this = local_140;
      local_88[0].DynamicComponentManager = pFStack_138;
      local_88[0].LevelContext = local_130;
      ParallelForImpl::
      ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>
                (L"ProcessActors",iVar34,iVar25,local_88,<Var12,EVar36 ^ ForceSingleThread,
                 &local_1b0);
      uVar29 = (ulonglong)local_248;
    }
    iVar25 = (int)uVar29;
    pFVar5 = (FProcessActorContext *)(local_250.Data + (longlong)iVar25 * 0x18);
    FVar30.Data = local_250.Data;
    while( true ) {
      if ((int)uVar29 != iVar25) {
        `TCheckedPointerIterator<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_23c);
      }
      if ((FProcessActorContext *)FVar30.Data == pFVar5) break;
      TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>::
      Append<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>
                (&this->UnprocessedComponents,
                 (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)FVar30.Data);
      *param_4 = *param_4 - (longlong)((FProcessActorContext *)FVar30.Data)->NumSteps;
      uVar29 = (ulonglong)local_248;
      FVar30.Data = FVar30.Data + 0x18;
    }
    iVar25 = (this->Level->Actors).ArrayNum;
    iVar34 = 1;
    if (1 < iVar25) {
      iVar34 = iVar25;
    }
    *param_4 = *param_4 - (longlong)iVar34;
    this->Level->bStaticComponentsRegisteredInStreamingManager = '\x01';
    this->BuildStep = ProcessComponents;
    DestructItems<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,int>
              ((FProcessActorContext *)local_250.Data,local_248);
    FVar30.Data = local_250.Data;
    goto LAB_1487ac67b;
  case ProcessComponents:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId197,
                 "FLevelRenderAssetManager::IncrementalBuild_ProcessComponents",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                 ,0xc5);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId197);
    }
    local_228[0] = (this->UnprocessedComponents).ArrayNum;
    bVar20 = this->Level->bIsVisible;
    iVar25 = local_228[0];
    if ((!param_3) && ((int)*param_4 < local_228[0])) {
      iVar25 = (int)*param_4;
    }
    if (((UE::Private::RenderAssetStreamingManager::bAllowParallelForDuringIncrementalUpdate ==
          false) || (bVar21 = FApp::ShouldUseThreadingForPerformance(), !bVar21)) ||
       (iVar25 < MinNumElementsToProcess)) {
LAB_1487abed0:
      while (((FVar31 = local_230, param_3 || (0 < *param_4)) &&
             (iVar25 = (this->UnprocessedComponents).ArrayNum, iVar25 != 0))) {
        if ((iVar25 < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        fVar15 = local_240;
        iVar25 = (this->UnprocessedComponents).ArrayNum;
        pUVar10 = *(UPrimitiveComponent **)
                   ((this->UnprocessedComponents).AllocatorInstance.Data + (longlong)iVar25 * 8 + -8
                   );
        (this->UnprocessedComponents).ArrayNum = iVar25 + -1;
        local_220 = pUVar10;
        if ((this->StaticInstances).AsyncView.Reference == (FRenderAssetInstanceView *)0x0) {
          FStaticRenderAssetInstanceManager::FTasks::SyncResults
                    (&(this->StaticInstances).StateSync.Tasks);
          EVar22 = FRenderAssetInstanceState::AddComponent
                             ((this->StaticInstances).StateSync.State.Reference,pUVar10,param_2,
                              fVar15);
          if (EVar22 == Fail) goto LAB_1487abfdd;
          if (EVar22 != Success) goto LAB_1487abf6f;
LAB_1487abfc5:
          *param_4 = *param_4 + -1;
        }
        else {
LAB_1487abfdd:
          if (bVar20 != 0) {
LAB_1487abf6f:
            pUVar10 = local_220;
            if ((local_220 == (UPrimitiveComponent *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Primitive",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                                    ,100,L""), bVar21)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pUVar10->bAttachedToStreamingManagerAsStatic = '\0';
            if (pUVar10->bHandledByStreamingManagerAsDynamic == '\0') {
              FDynamicRenderAssetInstanceManager::Add(param_1,pUVar10,param_2,0.0);
            }
            goto LAB_1487abfc5;
          }
          pFVar6 = (this->PendingComponents).AllocatorInstance.Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_220) &&
              ((FScriptContainerElement *)&local_220 <
               pFVar6 + (longlong)(this->PendingComponents).ArrayMax * 8)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar25 = (this->PendingComponents).ArrayNum;
          piVar2 = &(this->PendingComponents).ArrayMax;
          if (iVar25 == *piVar2) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->PendingComponents).AllocatorInstance,piVar2);
          }
          (this->PendingComponents).ArrayNum = iVar25 + 1;
          *(UPrimitiveComponent **)
           ((this->PendingComponents).AllocatorInstance.Data + (longlong)iVar25 * 8) = local_220;
          *param_4 = *param_4 + -1;
        }
      }
    }
    else {
      if ((UE::Private::RenderAssetStreamingManager::
           GWorkerCountForParallelForDuringIncrementalUpdate < 1) ||
         (iVar25 <= UE::Private::RenderAssetStreamingManager::
                    GWorkerCountForParallelForDuringIncrementalUpdate)) {
        iVar34 = 1;
      }
      else {
        iVar34 = (UE::Private::RenderAssetStreamingManager::
                  GWorkerCountForParallelForDuringIncrementalUpdate + -1 + iVar25) /
                 UE::Private::RenderAssetStreamingManager::
                 GWorkerCountForParallelForDuringIncrementalUpdate;
      }
      if ((this->StaticInstances).AsyncView.Reference != (FRenderAssetInstanceView *)0x0)
      goto LAB_1487abed0;
      local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.ArrayNum = 0;
      local_208.ArrayMax = 0;
      TArray<FRenderAssetInstanceState::FPreAddComponentPayload,TSizedDefaultAllocator<32>_>::SetNum
                (&local_208,iVar25,Default);
      local_c0 = local_228;
      param_2->bForceNoUseBuiltData = true;
      local_b0 = &local_240;
      local_1a0.DataPtr = (void **)0x0;
      local_a8 = &local_208;
      local_190 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLevelRenderAssetManager::IncrementalBuild'::__l24::<lambda_2>,void,int>
                  ::Call;
      local_188 = &local_c8;
      local_1a0.ArrayNum = 0;
      local_c8 = this;
      local_b8 = param_2;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"PreAddComponents",iVar25,iVar34,(TFunctionRef<void___cdecl(int)> *)&local_190,
                 (<lambda_1>)<Var12,None,&local_1a0);
      param_2->bForceNoUseBuiltData = false;
      local_108 = this;
      local_100 = param_1;
      local_f8 = param_2;
      local_f0 = bVar20;
      if ((this->StaticInstances).AsyncView.Reference == (FRenderAssetInstanceView *)0x0) {
        FStaticRenderAssetInstanceManager::FTasks::SyncResults
                  (&(this->StaticInstances).StateSync.Tasks);
        local_180 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLevelRenderAssetManager::IncrementalBuild'::__l23::<lambda_3>,void,FRenderAssetInstanceState::FPreAddComponentPayload_const_&,enum_EAddComponentResult>
                    ::Call;
        local_178 = &local_108;
        FRenderAssetInstanceState::AddComponents
                  ((this->StaticInstances).StateSync.State.Reference,&local_208,
                   (TFunctionRef<void___cdecl(FRenderAssetInstanceState::FPreAddComponentPayload_const_&,EAddComponentResult)>
                    *)&local_180);
      }
      uVar37 = local_228[0] - iVar25;
      *param_4 = *param_4 - (longlong)iVar25;
      iVar25 = (this->UnprocessedComponents).ArrayNum;
      if (iVar25 < (int)uVar37) {
        iVar34 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,uVar37 - iVar25,&(this->UnprocessedComponents).AllocatorInstance,
                            &(this->UnprocessedComponents).ArrayNum,
                            &(this->UnprocessedComponents).ArrayMax);
        memset((this->UnprocessedComponents).AllocatorInstance.Data + (longlong)iVar34 * 8,0,
               (longlong)(int)(uVar37 - iVar25) << 3);
      }
      else {
        if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
        }
        if ((int)uVar37 < iVar25) {
          uVar32 = iVar25 - uVar37;
          if (((int)(uVar32 | uVar37) < 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (uVar32 != 0) {
            pFVar6 = (this->UnprocessedComponents).AllocatorInstance.Data +
                     (longlong)(int)uVar37 * 8;
            iVar25 = ((this->UnprocessedComponents).ArrayNum - uVar37) - uVar32;
            if (iVar25 != 0) {
              memmove(pFVar6,pFVar6 + (longlong)(int)uVar32 * 8,(longlong)iVar25 << 3);
            }
            piVar2 = &(this->UnprocessedComponents).ArrayNum;
            *piVar2 = *piVar2 - uVar32;
          }
        }
      }
      DestructItems<FRenderAssetInstanceState::FPreAddComponentPayload,int>
                ((FPreAddComponentPayload *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
      if ((FPreAddComponentPayload *)local_208.AllocatorInstance.Data !=
          (FPreAddComponentPayload *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
    }
    if ((this->UnprocessedComponents).ArrayNum == 0) {
      piVar2 = &(this->UnprocessedComponents).ArrayMax;
      (this->UnprocessedComponents).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->UnprocessedComponents).AllocatorInstance,0,piVar2);
      }
      this->BuildStep = NormalizeLightmapTexelFactors;
    }
    break;
  case NormalizeLightmapTexelFactors:
    bVar18 = CpuChannel->Enabled < 0;
    if (!bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId268,
                 "FLevelRenderAssetManager::IncrementalBuild_NormalizeLightmapTexelFactors",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                 ,0x10c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId268);
    }
    if ((this->StaticInstances).AsyncView.Reference == (FRenderAssetInstanceView *)0x0) {
      FStaticRenderAssetInstanceManager::FTasks::SyncResults
                (&(this->StaticInstances).StateSync.Tasks);
      pFVar7 = (this->StaticInstances).StateSync.State.Reference;
      if (0 < (pFVar7->Bounds4Components).ArrayNum) {
        pTVar8 = (this->StaticInstances).StateSync.Tasks.NormalizeLightmapTexelFactorTask.Reference;
        if ((pTVar8->TaskState != 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskState == TS_Done",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.h"
                                ,0x3f,L""), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar9 = (pTVar8->Work).State.Reference;
        if (pFVar9 != pFVar7) {
          (pTVar8->Work).State.Reference = pFVar7;
          *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
          if (pFVar9 != (FRenderAssetInstanceState *)0x0) {
            plVar3 = &pFVar9->_padding_;
            *(int *)plVar3 = (int)*plVar3 + -1;
            if ((int)*plVar3 == 0) {
              (**(code **)pFVar9->_padding_)(pFVar9,1);
            }
          }
        }
        pTVar8->TaskState = 1;
      }
    }
    this->BuildStep = CompileElements;
joined_r0x0001487ac19f:
    if (bVar18) goto switchD_1487ab7e1_default;
    goto LAB_1487ac689;
  case CompileElements:
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId276,
                 "FLevelRenderAssetManager::IncrementalBuild_CompileElements",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                 ,0x114);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId276);
    }
    FStaticRenderAssetInstanceManager::FTasks::SyncResults(&(this->StaticInstances).StateSync.Tasks)
    ;
    iVar25 = FRenderAssetInstanceState::CompileElements
                       ((this->StaticInstances).StateSync.State.Reference);
    *param_4 = *param_4 - (longlong)iVar25;
    *pEVar1 = WaitForRegistration;
    break;
  case WaitForRegistration:
    if (this->Level->bIsVisible == '\0') goto switchD_1487ab7e1_default;
    bVar18 = CpuChannel->Enabled < 0;
    if (!bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId286,
                 "FLevelRenderAssetManager::IncrementalBuild_WaitForRegistration",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                 ,0x11e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId286);
    }
    local_1f4._4_8_ = (FProcessActorContext *)0x0;
    local_1e8 = 0;
    FStaticRenderAssetInstanceManager::FTasks::SyncResults(&(this->StaticInstances).StateSync.Tasks)
    ;
    iVar25 = FRenderAssetInstanceState::CheckRegistrationAndUnpackBounds
                       ((this->StaticInstances).StateSync.State.Reference,
                        (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)
                        (local_1f4 + 4));
    *param_4 = *param_4 - (longlong)iVar25;
    iVar25 = (int)local_1e8;
    uVar29 = (ulonglong)(int)local_1e8;
    pFVar5 = (FProcessActorContext *)
             (&((TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)local_1f4._4_8_)
               ->AllocatorInstance + uVar29);
    pFVar33 = (FProcessActorContext *)local_1f4._4_8_;
    while( true ) {
      if ((int)uVar29 != iVar25) {
        local_256[0] = 0;
        `TCheckedPointerIterator<UPrimitiveComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_256);
      }
      FVar31 = local_230;
      if (pFVar33 == pFVar5) break;
      pUVar10 = (UPrimitiveComponent *)(pFVar33->UnprocessedComponents).AllocatorInstance.Data;
      if ((pUVar10 == (UPrimitiveComponent *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Primitive",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                              ,100,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pUVar10->bAttachedToStreamingManagerAsStatic = '\0';
      if (pUVar10->bHandledByStreamingManagerAsDynamic == '\0') {
        FDynamicRenderAssetInstanceManager::Add(param_1,pUVar10,param_2,0.0);
      }
      uVar29 = local_1e8 & 0xffffffff;
      pFVar33 = (FProcessActorContext *)&(pFVar33->UnprocessedComponents).ArrayNum;
    }
    *param_4 = *param_4 - (longlong)(this->PendingComponents).ArrayNum;
    iVar25 = (this->PendingComponents).ArrayNum;
    if (((UE::Private::RenderAssetStreamingManager::bAllowParallelForDuringIncrementalUpdate ==
          false) || (bVar21 = FApp::ShouldUseThreadingForPerformance(), !bVar21)) ||
       (iVar25 < MinNumElementsToProcess)) {
LAB_1487ac4c1:
      iVar25 = (this->PendingComponents).ArrayNum;
      while (iVar25 != 0) {
        if (((this->PendingComponents).ArrayNum < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        fVar15 = local_240;
        iVar25 = (this->PendingComponents).ArrayNum;
        pUVar10 = *(UPrimitiveComponent **)
                   ((this->PendingComponents).AllocatorInstance.Data + (longlong)iVar25 * 8 + -8);
        (this->PendingComponents).ArrayNum = iVar25 + -1;
        if ((this->StaticInstances).AsyncView.Reference == (FRenderAssetInstanceView *)0x0) {
          FStaticRenderAssetInstanceManager::FTasks::SyncResults
                    (&(this->StaticInstances).StateSync.Tasks);
          EVar22 = FRenderAssetInstanceState::AddComponent
                             ((this->StaticInstances).StateSync.State.Reference,pUVar10,param_2,
                              fVar15);
          if (EVar22 != Success) goto LAB_1487ac556;
        }
        else {
LAB_1487ac556:
          if ((pUVar10 == (UPrimitiveComponent *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Primitive",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                                  ,100,L""), bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pUVar10->bAttachedToStreamingManagerAsStatic = '\0';
          if (pUVar10->bHandledByStreamingManagerAsDynamic == '\0') {
            FDynamicRenderAssetInstanceManager::Add(param_1,pUVar10,param_2,0.0);
          }
        }
        FVar31 = local_230;
        iVar25 = (this->PendingComponents).ArrayNum;
      }
    }
    else {
      if ((UE::Private::RenderAssetStreamingManager::
           GWorkerCountForParallelForDuringIncrementalUpdate < 1) ||
         (iVar25 <= UE::Private::RenderAssetStreamingManager::
                    GWorkerCountForParallelForDuringIncrementalUpdate)) {
        iVar34 = 1;
      }
      else {
        iVar34 = (UE::Private::RenderAssetStreamingManager::
                  GWorkerCountForParallelForDuringIncrementalUpdate + -1 + iVar25) /
                 UE::Private::RenderAssetStreamingManager::
                 GWorkerCountForParallelForDuringIncrementalUpdate;
      }
      if ((this->StaticInstances).AsyncView.Reference != (FRenderAssetInstanceView *)0x0)
      goto LAB_1487ac4c1;
      local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.ArrayNum = 0;
      local_218.ArrayMax = 0;
      TArray<FRenderAssetInstanceState::FPreAddComponentPayload,TSizedDefaultAllocator<32>_>::SetNum
                (&local_218,iVar25,Default);
      local_170.DataPtr = (void **)0x0;
      param_2->bForceNoUseBuiltData = true;
      local_d8 = &local_240;
      local_d0 = &local_218;
      local_160 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLevelRenderAssetManager::IncrementalBuild'::__l51::<lambda_4>,void,int>
                  ::Call;
      local_158 = &local_e8;
      local_170.ArrayNum = 0;
      local_e8 = this;
      local_e0 = param_2;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"PreAddComponents",iVar25,iVar34,(TFunctionRef<void___cdecl(int)> *)&local_160,
                 (<lambda_1>)<Var12,None,&local_170);
      param_2->bForceNoUseBuiltData = false;
      local_120 = this;
      local_118 = param_1;
      local_110 = param_2;
      if ((this->StaticInstances).AsyncView.Reference == (FRenderAssetInstanceView *)0x0) {
        FStaticRenderAssetInstanceManager::FTasks::SyncResults
                  (&(this->StaticInstances).StateSync.Tasks);
        local_150 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLevelRenderAssetManager::IncrementalBuild'::__l50::<lambda_5>,void,FRenderAssetInstanceState::FPreAddComponentPayload_const_&,enum_EAddComponentResult>
                    ::Call;
        local_148 = &local_120;
        FRenderAssetInstanceState::AddComponents
                  ((this->StaticInstances).StateSync.State.Reference,&local_218,
                   (TFunctionRef<void___cdecl(FRenderAssetInstanceState::FPreAddComponentPayload_const_&,EAddComponentResult)>
                    *)&local_150);
      }
      DestructItems<FRenderAssetInstanceState::FPreAddComponentPayload,int>
                ((FPreAddComponentPayload *)local_218.AllocatorInstance.Data,local_218.ArrayNum);
      if ((FPreAddComponentPayload *)local_218.AllocatorInstance.Data !=
          (FPreAddComponentPayload *)0x0) {
        FMemory::Free(local_218.AllocatorInstance.Data);
      }
    }
    piVar2 = &(this->PendingComponents).ArrayMax;
    (this->PendingComponents).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PendingComponents).AllocatorInstance,0,piVar2);
    }
    bVar21 = 1 < *(int *)&(this->TextureGuidToLevelIndex).field_0x48;
    if (!bVar21) {
      TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                      *)&this->TextureGuidToLevelIndex);
    }
    puVar4 = &(this->TextureGuidToLevelIndex).field_0xc;
    *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x8 = 0;
    if (*(int *)puVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,(ForAnyElementType *)&this->TextureGuidToLevelIndex,0,(int *)puVar4);
    }
    *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x34 = 0;
    iVar25 = *(int *)&(this->TextureGuidToLevelIndex).field_0x2c;
    *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x28 = 0;
    if ((iVar25 < 0) || (0x80 < iVar25)) {
      *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TextureGuidToLevelIndex).field_0x10
                 ,0);
    }
    if (bVar21) {
      *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x48 = 1;
      TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                  *)&this->TextureGuidToLevelIndex);
    }
    this->BuildStep = Done;
    FVar30.Data = (FScriptContainerElement *)local_1f4._4_8_;
LAB_1487ac67b:
    bVar18 = !bVar18;
    if ((FProcessActorContext *)FVar30.Data != (FProcessActorContext *)0x0) {
      FMemory::Free(FVar30.Data);
    }
    break;
  default:
    goto switchD_1487ab7e1_default;
  }
  if (bVar18) {
LAB_1487ac689:
    FCpuProfilerTrace::OutputEndEvent();
  }
switchD_1487ab7e1_default:
  if ((bool)<Var12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return;
}

// IncrementalUpdate @ 1487acba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLevelRenderAssetManager::IncrementalUpdate
          (FLevelRenderAssetManager *this,FDynamicRenderAssetInstanceManager *param_1,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_2,long64 *param_3,float param_4,bool param_5)

{
  int iVar1;
  ULevel *pUVar2;
  FRenderAssetInstanceState *pFVar3;
  TDoWorkTask<RenderAssetInstanceTask::FRefreshVisibility> *pTVar4;
  ForElementType<UStreamableRenderAsset_const_*> FVar5;
  code *pcVar6;
  long64 lVar7;
  bool bVar8;
  Type TVar9;
  ForElementType<UStreamableRenderAsset_const_*> FVar10;
  int iVar11;
  undefined8 local_88;
  longlong *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  FStreamingTextureLevelContext local_58;
  
  if ((this->Level == (ULevel *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Level",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                         ,0x171,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = NeedsIncrementalBuild(this,(int)*param_3);
  if (bVar8) {
    pUVar2 = this->Level;
    TVar9 = GetCurrentMaterialQualityLevelChecked();
    FStreamingTextureLevelContext::FStreamingTextureLevelContext
              (&local_58,TVar9,pUVar2,&this->TextureGuidToLevelIndex);
    do {
      IncrementalBuild(this,param_1,&local_58,this->Level->bIsVisible,param_3);
      lVar7 = *param_3;
      if ((this->Level == (ULevel *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Level",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                             ,0x15a,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    } while ((this->BuildStep != Done) &&
            ((this->Level->bIsVisible != '\0' ||
             ((this->BuildStep != WaitForRegistration && (0 < (int)lVar7))))));
    FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_58);
  }
  if (this->BuildStep == Done) {
    if (this->Level->bIsVisible == '\0') {
      if (this->bIsInitialized != false) {
        FStaticRenderAssetInstanceManager::FTasks::SyncResults
                  (&(this->StaticInstances).StateSync.Tasks);
        FRenderAssetInstanceView::FRenderAssetIterator::FRenderAssetIterator
                  ((FRenderAssetIterator *)&local_80,
                   (FRenderAssetInstanceView *)(this->StaticInstances).StateSync.State.Reference);
        if (local_78.CurrentBitIndex < (local_78.Array)->NumBits) {
          do {
            local_88 = *(undefined8 *)(*local_80 + (longlong)local_78.CurrentBitIndex * 0x18);
            FVar5 = (param_2->AllocatorInstance).SecondaryData;
            FVar10 = (ForElementType<UStreamableRenderAsset_const_*>)param_2;
            if (FVar5 != (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
              FVar10 = FVar5;
            }
            if ((ulonglong)FVar10 <= &local_88) {
              FVar10 = (ForElementType<UStreamableRenderAsset_const_*>)param_2;
              if (FVar5 != (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
                FVar10 = FVar5;
              }
              if ((&local_88 < (undefined8 *)((longlong)FVar10 + (longlong)param_2->ArrayMax * 8))
                 && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar11 = param_2->ArrayNum;
            if (iVar11 == param_2->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UStreamableRenderAsset_const_*>_>
                                 (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar11 + 1;
            FVar5 = (param_2->AllocatorInstance).SecondaryData;
            FVar10 = (ForElementType<UStreamableRenderAsset_const_*>)param_2;
            if (FVar5 != (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
              FVar10 = FVar5;
            }
            *(undefined8 *)((longlong)FVar10 + (longlong)iVar11 * 8) = local_88;
            local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
          } while (local_78.CurrentBitIndex < (local_78.Array)->NumBits);
        }
        this->bIsInitialized = false;
      }
    }
    else {
      this->bIsInitialized = true;
      FStaticRenderAssetInstanceManager::FTasks::SyncResults
                (&(this->StaticInstances).StateSync.Tasks);
      pFVar3 = (this->StaticInstances).StateSync.State.Reference;
      iVar11 = (this->StaticInstances).DirtyIndex;
      iVar1 = (pFVar3->Bounds4Components).ArrayNum;
      if (iVar11 < iVar1) {
        pTVar4 = (this->StaticInstances).StateSync.Tasks.RefreshVisibilityTask.Reference;
        iVar11 = iVar11 - ((int)ROUND(__real_bf000000 - (param_4 + param_4) * (float)iVar1) >> 1);
        if (iVar1 < iVar11) {
          iVar11 = iVar1;
        }
        if ((pTVar4->TaskState != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TaskState == TS_Done",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.h"
                               ,0x3f,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        RenderAssetInstanceTask::FRefreshVisibility::Init
                  (&pTVar4->Work,pFVar3,(this->StaticInstances).DirtyIndex,iVar11);
        pTVar4->TaskState = 1;
      }
    }
  }
  return;
}

// NeedsIncrementalBuild @ 1487b0220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FLevelRenderAssetManager::NeedsIncrementalBuild(FLevelRenderAssetManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Level == (ULevel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Level",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                       ,0x15a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->BuildStep != Done) &&
     ((this->Level->bIsVisible != '\0' ||
      ((this->BuildStep != WaitForRegistration && (0 < param_1)))))) {
    return true;
  }
  return false;
}

// NotifyLevelOffset @ 1487b0860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLevelRenderAssetManager::NotifyLevelOffset(FLevelRenderAssetManager *this,TVector<double> *param_1)

{
  FRenderAssetInstanceState *this_00;
  
  if (this->BuildStep == Done) {
    FStaticRenderAssetInstanceManager::FTasks::SyncResults(&(this->StaticInstances).StateSync.Tasks)
    ;
    this_00 = (this->StaticInstances).StateSync.State.Reference;
    if (this_00 != (FRenderAssetInstanceState *)0x0) {
      FRenderAssetInstanceState::OffsetBounds(this_00,param_1);
    }
  }
  return;
}

// Remove @ 1487b8090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLevelRenderAssetManager::Remove
          (FLevelRenderAssetManager *this,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  FScriptContainerElement *pFVar5;
  UObjectBase *this_00;
  ForElementType<UStreamableRenderAsset_const_*> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ForElementType<UStreamableRenderAsset_const_*> FVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  undefined8 local_68;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> local_60;
  longlong *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_48;
  
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  FRenderAssetInstanceState::GetReferencedComponents
            ((this->StaticInstances).StateSync.State.Reference,&local_60);
  if ((&local_60 == &this->UnprocessedComponents) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (this->UnprocessedComponents).ArrayNum;
  if (iVar10 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar10,&local_60.AllocatorInstance,&local_60.ArrayNum,&local_60.ArrayMax)
    ;
    memcpy(local_60.AllocatorInstance.Data + (longlong)iVar9 * 8,
           (this->UnprocessedComponents).AllocatorInstance.Data,(longlong)iVar10 << 3);
  }
  pTVar1 = &this->PendingComponents;
  if ((&local_60 == pTVar1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (this->PendingComponents).ArrayNum;
  if (iVar10 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar10,&local_60.AllocatorInstance,&local_60.ArrayNum,&local_60.ArrayMax)
    ;
    memcpy(local_60.AllocatorInstance.Data + (longlong)iVar9 * 8,(pTVar1->AllocatorInstance).Data,
           (longlong)iVar10 << 3);
  }
  iVar10 = local_60.ArrayNum;
  pFVar5 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 8;
  FVar12.Data = local_60.AllocatorInstance.Data;
  while( true ) {
    if (local_60.ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UPrimitiveComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar12.Data == pFVar5) break;
    this_00 = *(UObjectBase **)FVar12.Data;
    if (this_00 != (UObjectBase *)0x0) {
      bVar8 = UObjectBase::IsValidLowLevelFast(this_00,true);
      if ((!bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Component->IsValidLowLevelFast()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\LevelTextureManager.cpp"
                             ,0x2a,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pbVar4 = (byte *)((longlong)&this_00[0xf].OuterPrivate.ObjectPtr.field0_0x0 + 2);
      *pbVar4 = *pbVar4 & 0xef;
    }
    FVar12.Data = FVar12.Data + 8;
  }
  if (param_1 !=
      (TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    FStaticRenderAssetInstanceManager::FTasks::SyncResults(&(this->StaticInstances).StateSync.Tasks)
    ;
    FRenderAssetInstanceView::FRenderAssetIterator::FRenderAssetIterator
              ((FRenderAssetIterator *)&local_50,
               (FRenderAssetInstanceView *)(this->StaticInstances).StateSync.State.Reference);
    if (local_48.CurrentBitIndex < (local_48.Array)->NumBits) {
      do {
        local_68 = *(undefined8 *)(*local_50 + (longlong)local_48.CurrentBitIndex * 0x18);
        FVar6 = (param_1->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<UStreamableRenderAsset_const_*>)param_1;
        if (FVar6 != (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
          FVar11 = FVar6;
        }
        if ((ulonglong)FVar11 <= &local_68) {
          FVar11 = (ForElementType<UStreamableRenderAsset_const_*>)param_1;
          if (FVar6 != (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
            FVar11 = FVar6;
          }
          if ((&local_68 < (undefined8 *)((longlong)FVar11 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UStreamableRenderAsset_const_*>_>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        FVar6 = (param_1->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<UStreamableRenderAsset_const_*>)param_1;
        if (FVar6 != (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
          FVar11 = FVar6;
        }
        *(undefined8 *)((longlong)FVar11 + (longlong)iVar10 * 8) = local_68;
        local_48.UnvisitedBitMask = local_48.UnvisitedBitMask & ~local_48._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_48);
      } while (local_48.CurrentBitIndex < (local_48.Array)->NumBits);
    }
  }
  this->BuildStep = BuildTextureLookUpMap;
  piVar2 = &(this->UnprocessedComponents).ArrayMax;
  (this->UnprocessedComponents).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->UnprocessedComponents).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->PendingComponents).ArrayMax;
  (this->PendingComponents).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  bVar8 = 1 < *(int *)&(this->TextureGuidToLevelIndex).field_0x48;
  if (!bVar8) {
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                    *)&this->TextureGuidToLevelIndex);
  }
  puVar3 = &(this->TextureGuidToLevelIndex).field_0xc;
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)&this->TextureGuidToLevelIndex,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x34 = 0;
  iVar10 = *(int *)&(this->TextureGuidToLevelIndex).field_0x2c;
  *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TextureGuidToLevelIndex).field_0x10,0
              );
  }
  if (bVar8) {
    *(undefined4 *)&(this->TextureGuidToLevelIndex).field_0x48 = 1;
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,0>,FDefaultSetAllocator>
                *)&this->TextureGuidToLevelIndex);
  }
  this->bIsInitialized = false;
  if (this->Level != (ULevel *)0x0) {
    this->Level->bStaticComponentsRegisteredInStreamingManager = '\0';
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return;
}

