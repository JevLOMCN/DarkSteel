// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// FLightPrimitiveInteraction @ 1454772b0

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

FLightPrimitiveInteraction * __thiscall
FLightPrimitiveInteraction::FLightPrimitiveInteraction
          (FLightPrimitiveInteraction *this,FLightSceneInfo *param_1,FPrimitiveSceneInfo *param_2,
          bool param_3,bool param_4,bool param_5,bool param_6,bool param_7)

{
  TArray<FLightPrimitiveInteraction_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uchar uVar3;
  undefined4 uVar4;
  FPrimitiveSceneProxy *pFVar5;
  FPrimitiveSceneInfo *pFVar6;
  FLightSceneProxy *pFVar7;
  FLightSceneInfo *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  uint uVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  FStaticShaderPlatform FVar15;
  EShadingPath EVar16;
  int iVar17;
  FLightPrimitiveInteraction *pFVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  FLightPrimitiveInteraction **ppFVar22;
  undefined1 *puVar23;
  uint uVar24;
  FLightPrimitiveInteraction *local_18 [2];
  
  this->LightSceneInfo = param_1;
  this->PrimitiveSceneInfo = param_2;
  this->LightId = param_1->Id;
  uVar11 = (((uint)param_5 * 2 | (uint)param_3) * 2 | (uint)param_4) * 2;
  uVar20 = *(uint *)&this->field_0x34;
  uVar19 = ((uint)param_6 | (uint)param_7 * 2) << 5;
  *(uint *)&this->field_0x34 = uVar11 | uVar19 | uVar20 & 0xfffffe01;
  pFVar5 = param_2->Proxy;
  if (pFVar5->bStaticLighting == '\0') {
    if ((param_1->Proxy->bCastDynamicShadow == '\0') || (pFVar5->bCastDynamicShadow == '\0')) {
      uVar24 = 0;
    }
    else {
      uVar24 = 1;
    }
  }
  else {
    if ((param_1->Proxy->bStaticShadowing == '\x01' && param_1->Proxy->bCastStaticShadow == '\x01')
       && ((bool)pFVar5->bCastStaticShadow)) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if ((param_1->Proxy->bStaticLighting == '\0' && param_1->Proxy->bCastDynamicShadow == '\x01') &&
       (pFVar5->bCastDynamicShadow != '\0')) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if ((bVar14) || (bVar12)) {
      uVar24 = 1;
    }
    else {
      uVar24 = 0;
    }
  }
  puVar23 = &this->field_0x34;
  uVar24 = uVar11 | uVar19 | uVar20 & 0xfffffe00 | uVar24;
  *(uint *)puVar23 = uVar24;
  uVar20 = ((uint)(byte)param_2->Proxy->field_0x81 << 8 ^ uVar24) & 0x200 ^ uVar24;
  *(uint *)puVar23 = uVar20;
  uVar20 = ((uint)(byte)param_2->Proxy->field_0x81 << 4 ^ uVar20) & 0x400 ^ uVar20;
  *(uint *)puVar23 = uVar20;
  if (((((((byte)uVar24 & 5) == 5) && (pFVar5 = param_2->Proxy, pFVar5->bStaticLighting != '\0')) &&
       ((bool)pFVar5->bCastStaticShadow)) && (pFVar5->LightmapType != ForceSurface)) &&
     ((this->LightSceneInfo->Proxy->bStaticLighting != '\0' ||
      ((this->LightSceneInfo->Proxy->bStaticShadowing != '\0' && (!param_5)))))) {
    puVar23 = &this->field_0x34;
    *(uint *)puVar23 = uVar20 | 0x10;
    if ((GUnbuiltPreviewShadowsInGame == 0) &&
       (cVar13 = (**(code **)(*(longlong *)param_1->Scene + 0x4b8))(), cVar13 == '\0')) {
      this->bCastShadow = 0;
    }
    piVar2 = &this->LightSceneInfo->NumUnbuiltInteractions;
    *piVar2 = *piVar2 + 1;
    LOCK();
    piVar2 = &this->PrimitiveSceneInfo->Scene->NumUncachedStaticLightingInteractions;
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  pFVar6 = this->PrimitiveSceneInfo;
  this->bSelfShadowOnly = pFVar6->Proxy->bSelfShadowOnly;
  if (this->bIsDynamic != 0) {
    if (((pFVar6->Proxy->Mobility).Value == '\x02') ||
       (lVar21 = 0x20, pFVar6->Proxy->bGoodCandidateForCachedShadowmap == '\0')) {
      lVar21 = 0x18;
    }
    this->PrevPrimitiveLink =
         (FLightPrimitiveInteraction **)
         (&this->LightSceneInfo->bRecordInteractionShadowPrimitives + lVar21);
    EVar16 = FSceneInterface::GetShadingPath(*(Type *)&pFVar6->Scene->field_0x8);
    if ((EVar16 == Mobile) &&
       (bVar14 = FLightSceneInfo::ShouldRenderLightViewIndependent(this->LightSceneInfo), bVar14)) {
      uVar3 = this->LightSceneInfo->Proxy->LightType;
      if ((uVar3 == '\x03') || ((byte)(uVar3 - 1) < 2)) {
        this->bMobileDynamicLocalLight = 1;
        piVar2 = &this->PrimitiveSceneInfo->NumMobileDynamicLocalLights;
        *piVar2 = *piVar2 + 1;
        if (this->PrimitiveSceneInfo->NumMobileDynamicLocalLights == 1) {
          FVar15.Platform =
               FSceneInterface::GetShaderPlatform
                         ((FSceneInterface *)this->PrimitiveSceneInfo->Scene);
          bVar14 = MobileRequiresStaticMeshUpdateOnLocalLightChange(FVar15);
          if (bVar14) {
            FPrimitiveSceneInfo::RequestStaticMeshUpdate(this->PrimitiveSceneInfo);
          }
        }
      }
      pFVar7 = this->LightSceneInfo->Proxy;
      if (((pFVar7->bCastModulatedShadows != '\0') &&
          (cVar13 = (**(code **)(pFVar7->_padding_ + 0xb0))(), cVar13 == '\0')) &&
         (this->LightSceneInfo->Proxy->bStaticShadowing != '\0')) {
        this->PrimitiveSceneInfo->Proxy->bCastInsetShadow = '\x01';
        this->bHasInsetObjectShadow = 1;
      }
    }
  }
  FlushCachedShadowMapData(this);
  this->NextPrimitive = *this->PrevPrimitiveLink;
  pFVar18 = *this->PrevPrimitiveLink;
  if (pFVar18 != (FLightPrimitiveInteraction *)0x0) {
    pFVar18->PrevPrimitiveLink = &this->NextPrimitive;
  }
  *this->PrevPrimitiveLink = this;
  ppFVar22 = &this->PrimitiveSceneInfo->LightList;
  this->PrevLightLink = ppFVar22;
  this->NextLight = *ppFVar22;
  if (*ppFVar22 != (FLightPrimitiveInteraction *)0x0) {
    (*ppFVar22)->PrevLightLink = &this->NextLight;
  }
  *this->PrevLightLink = this;
  if (((this->bCastShadow != 0) &&
      (this->LightSceneInfo->bRecordInteractionShadowPrimitives != false)) &&
     ((this->bHasTranslucentObjectShadow != 0 || this->bHasInsetObjectShadow != 0 ||
      (bVar14 = ShouldCreateObjectShadowForStationaryLight
                          (this->LightSceneInfo,this->PrimitiveSceneInfo->Proxy,
                           this->bIsShadowMapped), bVar14)))) {
    pFVar8 = this->LightSceneInfo;
    if ((pFVar8->InteractionShadowPrimitives).ArrayNum < 0x10) {
      pTVar1 = &pFVar8->InteractionShadowPrimitives;
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      local_18[0] = this;
      if (((pFVar9 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar9 + (longlong)(pFVar8->InteractionShadowPrimitives).ArrayMax * 8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        pFVar18 = (FLightPrimitiveInteraction *)(*pcVar10)();
        return pFVar18;
      }
      iVar17 = (pFVar8->InteractionShadowPrimitives).ArrayNum;
      piVar2 = &(pFVar8->InteractionShadowPrimitives).ArrayMax;
      if (iVar17 == *piVar2) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (pFVar8->InteractionShadowPrimitives).ArrayNum = iVar17 + 1;
      *(FLightPrimitiveInteraction **)((pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           local_18[0];
    }
    else {
      pFVar8->bRecordInteractionShadowPrimitives = false;
      pFVar8 = this->LightSceneInfo;
      (pFVar8->InteractionShadowPrimitives).ArrayNum = 0;
      if ((pFVar8->InteractionShadowPrimitives).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(pFVar8->InteractionShadowPrimitives).AllocatorInstance,0,
                   &(pFVar8->InteractionShadowPrimitives).ArrayMax);
      }
    }
  }
  return this;
}

// ~FLightPrimitiveInteraction @ 145479010

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

void __thiscall
FLightPrimitiveInteraction::~FLightPrimitiveInteraction(FLightPrimitiveInteraction *this)

{
  int *piVar1;
  int iVar2;
  FLightSceneInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EShaderPlatform EVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCore.cpp"
                       ,0x143,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->bUncachedStaticLighting != 0) {
    piVar1 = &this->LightSceneInfo->NumUnbuiltInteractions;
    *piVar1 = *piVar1 + -1;
    LOCK();
    piVar1 = &this->PrimitiveSceneInfo->Scene->NumUncachedStaticLightingInteractions;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  FlushCachedShadowMapData(this);
  if (this->bMobileDynamicLocalLight != 0) {
    piVar1 = &this->PrimitiveSceneInfo->NumMobileDynamicLocalLights;
    *piVar1 = *piVar1 + -1;
    if (this->PrimitiveSceneInfo->NumMobileDynamicLocalLights == 0) {
      EVar7 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->PrimitiveSceneInfo->Scene)
      ;
      if (((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
          (FReadOnlyCVARCache::bMobileHDR == false)) &&
         (0 < FReadOnlyCVARCache::MobileForwardLocalLightsValue)) {
        bVar6 = MobileLocalLightsUseSinglePermutation(EVar7);
        if (!bVar6) {
          FPrimitiveSceneInfo::RequestStaticMeshUpdate(this->PrimitiveSceneInfo);
        }
      }
    }
  }
  if (this->NextPrimitive != (FLightPrimitiveInteraction *)0x0) {
    this->NextPrimitive->PrevPrimitiveLink = this->PrevPrimitiveLink;
  }
  *this->PrevPrimitiveLink = this->NextPrimitive;
  if (this->NextLight != (FLightPrimitiveInteraction *)0x0) {
    this->NextLight->PrevLightLink = this->PrevLightLink;
  }
  *this->PrevLightLink = this->NextLight;
  pFVar3 = this->LightSceneInfo;
  pFVar4 = (pFVar3->InteractionShadowPrimitives).AllocatorInstance.Data;
  iVar11 = (pFVar3->InteractionShadowPrimitives).ArrayNum;
  pFVar10 = pFVar4;
  if (pFVar4 != pFVar4 + (longlong)iVar11 * 8) {
    while (*(FLightPrimitiveInteraction **)pFVar10 != this) {
      pFVar10 = pFVar10 + 8;
      if (pFVar10 == pFVar4 + (longlong)iVar11 * 8) {
        return;
      }
    }
    uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar4 >> 3);
    if (uVar9 != 0xffffffff) {
      uVar8 = 0;
      if ((int)(uVar9 + 1) <= iVar11) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar2 = (pFVar3->InteractionShadowPrimitives).ArrayNum;
      pFVar4 = (pFVar3->InteractionShadowPrimitives).AllocatorInstance.Data;
      iVar11 = iVar2 + ~uVar9;
      if (1 < iVar11) {
        iVar11 = 1;
      }
      if (iVar11 != 0) {
        memmove(pFVar4 + (longlong)(int)uVar9 * 8,pFVar4 + (longlong)(iVar2 - iVar11) * 8,
                (longlong)iVar11 << 3);
      }
      iVar11 = (pFVar3->InteractionShadowPrimitives).ArrayNum + -1;
      (pFVar3->InteractionShadowPrimitives).ArrayNum = iVar11;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(pFVar3->InteractionShadowPrimitives).AllocatorInstance,iVar11,
                 &(pFVar3->InteractionShadowPrimitives).ArrayMax);
    }
  }
  return;
}

// operator_new @ 145479a30

void * __cdecl FLightPrimitiveInteraction::operator_new(ulong64 param_1)

{
  int iVar1;
  FreeListNode *pFVar2;
  FreeListNode *pFVar3;
  uint uVar4;
  FreeListNode *pFVar5;
  
  pFVar2 = GLightPrimitiveInteractionAllocator.FreeList;
  if (GLightPrimitiveInteractionAllocator.FreeList == (FreeListNode *)0x0) {
    pFVar2 = FMemory::Malloc(0x3fe0,0);
    uVar4 = 0;
    pFVar5 = pFVar2;
    do {
      iVar1 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      pFVar3 = (FreeListNode *)
               ((longlong)&pFVar2->NextFreeAllocation + (ulonglong)(uint)(iVar1 * 0x38));
      pFVar5->NextFreeAllocation = pFVar3;
      pFVar5 = pFVar3;
    } while (uVar4 < 0x123);
    pFVar3->NextFreeAllocation = GLightPrimitiveInteractionAllocator.FreeList;
    GLightPrimitiveInteractionAllocator.NumAllocated =
         GLightPrimitiveInteractionAllocator.NumAllocated + 0x124;
  }
  GLightPrimitiveInteractionAllocator.NumLive = GLightPrimitiveInteractionAllocator.NumLive + 1;
  GLightPrimitiveInteractionAllocator.FreeList = pFVar2->NextFreeAllocation;
  return pFVar2;
}

// operator_delete @ 145479ac0

void __cdecl FLightPrimitiveInteraction::operator_delete(void *param_1)

{
  GLightPrimitiveInteractionAllocator.NumLive = GLightPrimitiveInteractionAllocator.NumLive - 1;
  *(FreeListNode **)param_1 = GLightPrimitiveInteractionAllocator.FreeList;
  GLightPrimitiveInteractionAllocator.FreeList = param_1;
  return;
}

// Create @ 14549b7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
FLightPrimitiveInteraction::Create(FLightSceneInfo *param_1,FPrimitiveSceneInfo *param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  FShouldCreateResult *pFVar4;
  FLightSceneInfo *this;
  int iVar5;
  FLightSceneInfo *pFVar6;
  FLightSceneInfo *pFVar7;
  FLLMScope local_res18 [2];
  undefined4 local_res20;
  undefined2 local_res24;
  FShouldCreateResult local_28;
  FMemScope local_20;
  
  FLLMScope::FLLMScope(local_res18,SceneRender,false,None,Default,true);
  FMemScope::FMemScope(&local_20,SceneRender,true);
  pFVar4 = ShouldCreate(&local_28,param_1,param_2);
  local_res20._0_1_ = pFVar4->bShouldCreate;
  local_res20._1_1_ = pFVar4->bDynamic;
  local_res20._2_1_ = pFVar4->bRelevant;
  local_res20._3_1_ = pFVar4->bIsLightMapped;
  uVar2._0_1_ = pFVar4->bShadowMapped;
  uVar2._1_1_ = pFVar4->bTranslucentObjectShadow;
  bVar1 = pFVar4->bInsetObjectShadow;
  local_res24 = uVar2;
  if ((undefined1)local_res20 != '\0') {
    this = (FLightSceneInfo *)GLightPrimitiveInteractionAllocator.FreeList;
    if (GLightPrimitiveInteractionAllocator.FreeList == (FreeListNode *)0x0) {
      this = FMemory::Malloc(0x3fe0,0);
      uVar3 = 0;
      pFVar7 = this;
      do {
        iVar5 = uVar3 + 1;
        uVar3 = uVar3 + 1;
        pFVar6 = (FLightSceneInfo *)
                 (&this->bRecordInteractionShadowPrimitives + (uint)(iVar5 * 0x38));
        *(FLightSceneInfo **)&pFVar7->bRecordInteractionShadowPrimitives = pFVar6;
        pFVar7 = pFVar6;
      } while (uVar3 < 0x123);
      *(FreeListNode **)&pFVar6->bRecordInteractionShadowPrimitives =
           GLightPrimitiveInteractionAllocator.FreeList;
      GLightPrimitiveInteractionAllocator.NumAllocated =
           GLightPrimitiveInteractionAllocator.NumAllocated + 0x124;
    }
    GLightPrimitiveInteractionAllocator.FreeList =
         *(FreeListNode **)&this->bRecordInteractionShadowPrimitives;
    GLightPrimitiveInteractionAllocator.NumLive = GLightPrimitiveInteractionAllocator.NumLive + 1;
    if (this != (FLightSceneInfo *)0x0) {
      FLightPrimitiveInteraction
                ((FLightPrimitiveInteraction *)this,param_1,param_2,(bool)local_res20._1_1_,
                 (bool)local_res20._3_1_,(bool)(undefined1)uVar2,local_res24._1_1_,bVar1);
    }
  }
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// Destroy @ 1454a0390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FLightPrimitiveInteraction::Destroy(FLightPrimitiveInteraction *param_1)

{
  if (param_1 != (FLightPrimitiveInteraction *)0x0) {
    ~FLightPrimitiveInteraction(param_1);
    GLightPrimitiveInteractionAllocator.NumLive = GLightPrimitiveInteractionAllocator.NumLive - 1;
    param_1->LightSceneInfo = (FLightSceneInfo *)GLightPrimitiveInteractionAllocator.FreeList;
    GLightPrimitiveInteractionAllocator.FreeList = (FreeListNode *)param_1;
  }
  return;
}

// FlushCachedShadowMapData @ 1454a62d0

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
FLightPrimitiveInteraction::FlushCachedShadowMapData(FLightPrimitiveInteraction *this)

{
  uint uVar1;
  FPrimitiveSceneInfo *pFVar2;
  FPrimitiveSceneProxy *pFVar3;
  FScene *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  uint *puVar10;
  TRefCountPtr<IPooledRenderTarget> *pTVar11;
  int iVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  uint *puVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 local_res8 [8];
  uint *puVar17;
  
  if (((((this->LightSceneInfo != (FLightSceneInfo *)0x0) &&
        (pFVar2 = this->PrimitiveSceneInfo, pFVar2 != (FPrimitiveSceneInfo *)0x0)) &&
       (pFVar3 = pFVar2->Proxy, pFVar3 != (FPrimitiveSceneProxy *)0x0)) &&
      ((pFVar4 = pFVar2->Scene, pFVar4 != (FScene *)0x0 && (this->bCastShadow != 0)))) &&
     (((pFVar3->Mobility).Value != '\x02' &&
      ((pFVar3->bGoodCandidateForCachedShadowmap != '\0' &&
       (uVar1 = this->LightSceneInfo->Id,
       *(int *)&(pFVar4->CachedShadowMaps).field_0x8 !=
       *(int *)&(pFVar4->CachedShadowMaps).field_0x34)))))) {
    puVar13 = *(undefined1 **)&(pFVar4->CachedShadowMaps).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(pFVar4->CachedShadowMaps).field_0x38;
    }
    uVar8 = *(uint *)(puVar13 +
                     (ulonglong)(*(int *)&(pFVar4->CachedShadowMaps).field_0x48 - 1U & uVar1) * 4);
    if (uVar8 != 0xffffffff) {
      while (puVar10 = (uint *)((longlong)(int)uVar8 * 0x20 + *(longlong *)&pFVar4->CachedShadowMaps
                               ), *puVar10 != uVar1) {
        uVar8 = puVar10[6];
        if (uVar8 == 0xffffffff) {
          return;
        }
      }
      puVar18 = (uint *)0x0;
      puVar19 = puVar10 + 2;
      if (puVar10 == (uint *)0x0) {
        puVar19 = puVar18;
      }
      if (puVar19 != (uint *)0x0) {
        lVar15 = *(longlong *)puVar19;
        uVar1 = puVar19[2];
        plVar14 = (longlong *)(lVar15 + 0x3d0);
        lVar20 = (longlong)(int)uVar1 * 0x430 + lVar15;
        while( true ) {
          if (puVar19[2] != uVar1) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FCachedShadowMapData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (lVar15 == lVar20) break;
          iVar12 = (int)plVar14[-1];
          puVar10 = puVar18;
          puVar17 = puVar18;
          if (0 < iVar12) {
            do {
              uVar16 = (uint)puVar17;
              uVar8 = 0;
              if ((int)uVar16 < iVar12) {
                uVar8 = ~uVar16 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              plVar9 = (longlong *)plVar14[-2];
              if (plVar9 == (longlong *)0x0) {
                plVar9 = plVar14 + -6;
              }
              plVar5 = *(longlong **)((longlong)plVar9 + (longlong)puVar10);
              if (plVar5 != (longlong *)0x0) {
                *(undefined8 *)((longlong)plVar9 + (longlong)puVar10) = 0;
                (**(code **)(*plVar5 + 0x38))();
              }
              iVar12 = (int)plVar14[-1];
              puVar10 = puVar10 + 2;
              puVar17 = (uint *)(ulonglong)(uVar16 + 1);
            } while ((int)(uVar16 + 1) < iVar12);
          }
          pTVar11 = (TRefCountPtr<IPooledRenderTarget> *)plVar14[-2];
          if (pTVar11 == (TRefCountPtr<IPooledRenderTarget> *)0x0) {
            pTVar11 = (TRefCountPtr<IPooledRenderTarget> *)(plVar14 + -6);
          }
          DestructItems<TRefCountPtr<IPooledRenderTarget>,int>(pTVar11,iVar12);
          *(undefined4 *)(plVar14 + -1) = 0;
          if (*(int *)((longlong)plVar14 + -4) != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
                      (8,8,0,(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)(plVar14 + -6),0,
                       (int *)((longlong)plVar14 + -4));
          }
          plVar9 = (longlong *)*plVar14;
          if (plVar9 != (longlong *)0x0) {
            *plVar14 = 0;
            (**(code **)(*plVar9 + 0x38))();
          }
          TBitArray<FDefaultBitArrayAllocator>::SetRange
                    ((TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2),0,(int)plVar14[5],false);
          lVar15 = lVar15 + 0x430;
          plVar14 = plVar14 + 0x86;
        }
      }
    }
  }
  return;
}

// GetMemoryPoolSize @ 1454a78c0

uint __cdecl FLightPrimitiveInteraction::GetMemoryPoolSize(void)

{
  return GLightPrimitiveInteractionAllocator.NumAllocated * 0x38;
}

// InitializeMemoryPool @ 1454ab760

void __cdecl FLightPrimitiveInteraction::InitializeMemoryPool(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FreeListNode *pFVar5;
  uint uVar6;
  uint uVar7;
  FreeListNode *pFVar8;
  FreeListNode *pFVar9;
  int local_res8 [2];
  
  if (!bAlreadyInitialized) {
    uVar6 = 0;
    local_res8[0] = 0;
    bAlreadyInitialized = true;
    FConfigCacheIni::GetInt
              (GConfig,L"MemoryPools",L"FLightPrimitiveInteractionInitialBlockSize",local_res8,
               &GEngineIni);
    iVar3 = local_res8[0];
    if (local_res8[0] != 0) {
      uVar7 = local_res8[0] * 0x38;
      if ((uVar7 < 8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationSize*NumElements >= sizeof(FreeListNode)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\AllocatorFixedSizeFreeList.h"
                             ,0x74,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FMemory::Malloc((ulonglong)uVar7,0);
      pFVar8 = pFVar5;
      pFVar9 = pFVar5;
      if (iVar3 != 1) {
        do {
          iVar1 = uVar6 + 1;
          uVar6 = uVar6 + 1;
          pFVar9 = (FreeListNode *)
                   ((longlong)&pFVar5->NextFreeAllocation + (ulonglong)(uint)(iVar1 * 0x38));
          pFVar8->NextFreeAllocation = pFVar9;
          pFVar8 = pFVar9;
        } while (uVar6 < iVar3 - 1U);
      }
      pFVar9->NextFreeAllocation = GLightPrimitiveInteractionAllocator.FreeList;
      GLightPrimitiveInteractionAllocator.NumAllocated =
           GLightPrimitiveInteractionAllocator.NumAllocated + iVar3;
      GLightPrimitiveInteractionAllocator.FreeList = pFVar5;
    }
  }
  return;
}

// ShouldCreate @ 1454baff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FShouldCreateResult * __cdecl
FLightPrimitiveInteraction::ShouldCreate
          (FShouldCreateResult *__return_storage_ptr__,FLightSceneInfo *param_1,
          FPrimitiveSceneInfo *param_2)

{
  bool *pbVar1;
  FLightSceneProxy **ppFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  EShadingPath EVar8;
  FShouldCreateResult *pFVar9;
  
  pbVar1 = &__return_storage_ptr__->bShadowMapped;
  __return_storage_ptr__->bShouldCreate = false;
  __return_storage_ptr__->bDynamic = true;
  __return_storage_ptr__->bRelevant = false;
  __return_storage_ptr__->bIsLightMapped = true;
  *pbVar1 = false;
  ppFVar2 = &param_1->Proxy;
  __return_storage_ptr__->bTranslucentObjectShadow = false;
  __return_storage_ptr__->bInsetObjectShadow = false;
  if ((param_2->Proxy == (FPrimitiveSceneProxy *)0x0) || (*ppFVar2 == (FLightSceneProxy *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrimitiveSceneInfo->Proxy && LightSceneInfo->Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCore.cpp"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FShouldCreateResult *)(*pcVar3)();
      return pFVar9;
    }
  }
  (**(code **)(param_2->Proxy->_padding_ + 0xe0))
            (param_2->Proxy,*ppFVar2,&__return_storage_ptr__->bDynamic,
             &__return_storage_ptr__->bRelevant,&__return_storage_ptr__->bIsLightMapped,pbVar1);
  bVar4 = __return_storage_ptr__->bDynamic;
  EVar8 = FSceneInterface::GetShadingPath(*(Type *)&param_2->Scene->field_0x8);
  if ((EVar8 == Mobile) && (*pbVar1 != false)) {
    cVar5 = (**(code **)((*ppFVar2)->_padding_ + 0x40))();
    if (cVar5 != '\0') {
      bVar6 = 1;
      goto LAB_1454bb0b5;
    }
  }
  bVar6 = 0;
LAB_1454bb0b5:
  bVar4 = (bool)(bVar4 | bVar6);
  __return_storage_ptr__->bDynamic = bVar4;
  if (((__return_storage_ptr__->bRelevant != false) && (bVar4 != false)) &&
     (((*ppFVar2)->bStaticShadowing == '\0' ||
      ((param_2->Proxy->bStaticLighting == '\0' ||
       ((bool)param_2->Proxy->bHasValidSettingsForStaticLighting)))))) {
    if (((*ppFVar2)->bCastTranslucentShadows == '\0') ||
       (param_2->Proxy->bCastVolumetricTranslucentShadow == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    __return_storage_ptr__->bTranslucentObjectShadow = bVar4;
    if ((param_1->Proxy->LightType == '\0') && (param_2->Proxy->bCastInsetShadow != 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    __return_storage_ptr__->bInsetObjectShadow = bVar7;
    if ((((param_1->Proxy->LightType != '\0') || (param_1->Proxy->bStaticShadowing != '\0')) ||
        (bVar4 != false)) || (bVar7 != false)) {
      __return_storage_ptr__->bShouldCreate = true;
    }
  }
  return __return_storage_ptr__;
}

