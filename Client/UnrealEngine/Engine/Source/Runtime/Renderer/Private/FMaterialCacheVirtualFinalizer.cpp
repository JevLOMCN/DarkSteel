// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FMaterialCacheVirtualFinalizer @ 144e72840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMaterialCacheVirtualFinalizer * __thiscall
FMaterialCacheVirtualFinalizer::FMaterialCacheVirtualFinalizer
          (FMaterialCacheVirtualFinalizer *this,FScene *param_1,FPrimitiveComponentId param_2,
          FMaterialCacheTagLayout *param_3,FVTProducerDescription *param_4)

{
  TArray<FMaterialCacheLayer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ushort uVar12;
  ushort uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  TEnumAsByte<EPixelFormat> TVar17;
  TEnumAsByte<EPixelFormat> TVar18;
  TEnumAsByte<EPixelFormat> TVar19;
  TEnumAsByte<EPixelFormat> TVar20;
  TEnumAsByte<EPixelFormat> TVar21;
  ForElementType<FMaterialCacheLayer> FVar22;
  ForElementType<FMaterialCacheLayer> FVar23;
  
  this->Scene = param_1;
  pTVar1 = &(this->TagLayout).Layers;
  (this->PrimitiveComponentId).PrimIDValue = param_2.PrimIDValue;
  this->_padding_ = (longlong)&___7FMaterialCacheVirtualFinalizer__6B_;
  uVar5 = (param_3->Guid).B;
  uVar6 = (param_3->Guid).C;
  uVar7 = (param_3->Guid).D;
  (this->TagLayout).Guid.A = (param_3->Guid).A;
  (this->TagLayout).Guid.B = uVar5;
  (this->TagLayout).Guid.C = uVar6;
  (this->TagLayout).Guid.D = uVar7;
  (this->TagLayout).Layers.AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialCacheLayer>)0x0;
  FVar23 = (param_3->Layers).AllocatorInstance.SecondaryData;
  iVar3 = (param_3->Layers).ArrayNum;
  (this->TagLayout).Layers.ArrayNum = iVar3;
  if (FVar23 == (ForElementType<FMaterialCacheLayer>)0x0) {
    FVar23 = (ForElementType<FMaterialCacheLayer>)&param_3->Layers;
  }
  piVar2 = &(this->TagLayout).Layers.ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
              (0x18,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    FVar22 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
    if (FVar22 == (ForElementType<FMaterialCacheLayer>)0x0) {
      FVar22 = (ForElementType<FMaterialCacheLayer>)pTVar1;
    }
    ConstructItems<FMaterialCacheLayer,FMaterialCacheLayer,int>
              ((void *)FVar22,(FMaterialCacheLayer *)FVar23,iVar3);
  }
  uVar5 = param_4->FullNameHash;
  bVar8 = param_4->bPersistentHighestMip;
  bVar9 = param_4->bContinuousUpdate;
  bVar10 = param_4->bRequiresSinglePhysicalPool;
  bVar11 = param_4->bNotifyCompleted;
  (this->ProducerDesc).Name = param_4->Name;
  (this->ProducerDesc).FullNameHash = uVar5;
  (this->ProducerDesc).bPersistentHighestMip = bVar8;
  (this->ProducerDesc).bContinuousUpdate = bVar9;
  (this->ProducerDesc).bRequiresSinglePhysicalPool = bVar10;
  (this->ProducerDesc).bNotifyCompleted = bVar11;
  uVar5 = param_4->TileBorderSize;
  uVar6 = param_4->BlockWidthInTiles;
  uVar7 = param_4->BlockHeightInTiles;
  (this->ProducerDesc).TileSize = param_4->TileSize;
  (this->ProducerDesc).TileBorderSize = uVar5;
  (this->ProducerDesc).BlockWidthInTiles = uVar6;
  (this->ProducerDesc).BlockHeightInTiles = uVar7;
  uVar12 = param_4->WidthInBlocks;
  uVar13 = param_4->HeightInBlocks;
  uVar14 = param_4->Dimensions;
  uVar15 = param_4->MaxLevel;
  uVar16 = param_4->NumTextureLayers;
  TVar17.Value = param_4->LayerFormat[0].Value;
  TVar18.Value = param_4->LayerFormat[1].Value;
  TVar19.Value = param_4->LayerFormat[2].Value;
  TVar20.Value = param_4->LayerFormat[3].Value;
  TVar21.Value = param_4->LayerFormat[4].Value;
  (this->ProducerDesc).DepthInTiles = param_4->DepthInTiles;
  (this->ProducerDesc).WidthInBlocks = uVar12;
  (this->ProducerDesc).HeightInBlocks = uVar13;
  (this->ProducerDesc).Dimensions = uVar14;
  (this->ProducerDesc).MaxLevel = uVar15;
  (this->ProducerDesc).NumTextureLayers = uVar16;
  (this->ProducerDesc).LayerFormat[0] = (TEnumAsByte<EPixelFormat>)TVar17.Value;
  (this->ProducerDesc).LayerFormat[1] = (TEnumAsByte<EPixelFormat>)TVar18.Value;
  (this->ProducerDesc).LayerFormat[2] = (TEnumAsByte<EPixelFormat>)TVar19.Value;
  (this->ProducerDesc).LayerFormat[3] = (TEnumAsByte<EPixelFormat>)TVar20.Value;
  (this->ProducerDesc).LayerFormat[4] = (TEnumAsByte<EPixelFormat>)TVar21.Value;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[0].field0_0x0 + 4);
  *(undefined8 *)((this->ProducerDesc).LayerFormat + 5) = *(undefined8 *)(param_4->LayerFormat + 5);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[0].field0_0x0 + 4) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[1].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[0].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_4->LayerFallbackColor[0].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[1].field0_0x0 + 4) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[2].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[1].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_4->LayerFallbackColor[1].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[2].field0_0x0 + 4) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[3].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[2].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_4->LayerFallbackColor[2].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[3].field0_0x0 + 4) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[4].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[3].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_4->LayerFallbackColor[3].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[4].field0_0x0 + 4) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[5].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[4].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_4->LayerFallbackColor[4].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[5].field0_0x0 + 4) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[6].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[5].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_4->LayerFallbackColor[5].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[6].field0_0x0 + 4) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[7].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[6].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_4->LayerFallbackColor[6].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[7].field0_0x0 + 4) = uVar4;
  uVar4 = *(undefined8 *)(param_4->bIsLayerSRGB + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[7].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_4->LayerFallbackColor[7].field0_0x0 + 0xc);
  *(undefined8 *)((this->ProducerDesc).bIsLayerSRGB + 4) = uVar4;
  *(undefined8 *)((this->ProducerDesc).PhysicalGroupIndex + 3) =
       *(undefined8 *)(param_4->PhysicalGroupIndex + 3);
  this->DestFormat = (this->ProducerDesc).LayerFormat[0].Value;
  (this->TilesToRender).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TilesToRender).ArrayNum = 0;
  (this->TilesToRender).ArrayMax = 0;
  this->SourceFormat = PF_B8G8R8A8;
  this->IntermediateFormat = PF_B8G8R8A8;
  return this;
}

// ~FMaterialCacheVirtualFinalizer @ 144e74530

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
FMaterialCacheVirtualFinalizer::~FMaterialCacheVirtualFinalizer
          (FMaterialCacheVirtualFinalizer *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FMaterialCacheLayer> FVar2;
  
  DestructItems<FMaterialCacheTileEntry,int>
            ((FMaterialCacheTileEntry *)(this->TilesToRender).AllocatorInstance.Data,
             (this->TilesToRender).ArrayNum);
  pFVar1 = (this->TilesToRender).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FMaterialCacheLayer>)0x0) {
    FVar2 = (ForElementType<FMaterialCacheLayer>)&(this->TagLayout).Layers;
  }
  DestructItems<FMaterialCacheLayer,int>
            ((FMaterialCacheLayer *)FVar2,(this->TagLayout).Layers.ArrayNum);
  FVar2 = (this->TagLayout).Layers.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FMaterialCacheLayer>)0x0) {
    FMemory::Free((void *)FVar2);
    return;
  }
  return;
}

// AddTile @ 144e7bf50

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
FMaterialCacheVirtualFinalizer::AddTile
          (FMaterialCacheVirtualFinalizer *this,FMaterialCacheTileEntry *param_1)

{
  int *piVar1;
  TArray<FMaterialCacheTileEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  FMaterialCacheTileEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->TilesToRender;
  pFVar3 = (FMaterialCacheTileEntry *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->TilesToRender).ArrayMax)) {
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
  iVar6 = (this->TilesToRender).ArrayNum;
  piVar1 = &(this->TilesToRender).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x120,8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TilesToRender).ArrayNum = iVar6 + 1;
  FMaterialCacheTileEntry::FMaterialCacheTileEntry
            ((FMaterialCacheTileEntry *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x120)
             ,param_1);
  return;
}

// Finalize @ 144e8dba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialCacheVirtualFinalizer::Finalize(FMaterialCacheVirtualFinalizer *this,FRDGBuilder *param_1)

{
  MaterialCacheRenderPages(param_1);
  return;
}

// RenderFinalize @ 144ea78e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144ea7aaa) */
/* WARNING: Removing unreachable block (ram,0x000144ea7af9) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialCacheVirtualFinalizer::RenderFinalize
          (FMaterialCacheVirtualFinalizer *this,FRDGBuilder *param_1,ISceneRenderer *param_2)

{
  TArray<FMaterialCacheTileEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  float fVar6;
  ForElementType<FMaterialCachePageEntry> FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ForElementType<IPooledRenderTarget_*> FVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ForElementType<IPooledRenderTarget_*> FVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  TIntPoint<int>_u_0 TVar22;
  TIntPoint<int>_u_0 TVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_188 [32];
  undefined1 local_138 [8];
  ForElementType<FMaterialCachePageEntry> local_130;
  int local_128;
  int local_124;
  uint local_120;
  int iStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  FRDGBuilder *local_f0;
  TArrayView<FMaterialCachePageEntry,int> local_e8;
  FMaterialCacheSetup local_d8;
  ulonglong local_78;
  
  fVar6 = __real_3f800000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = &this->TilesToRender;
  pFVar18 = (pTVar1->AllocatorInstance).Data;
  local_120 = (this->TilesToRender).ArrayNum;
  uVar13 = (ulonglong)(int)local_120;
  pFVar21 = pFVar18 + uVar13 * 0x120;
  local_130.Data = (FMaterialCachePageEntry *)0x0;
  local_124 = 0;
  iVar10 = 0;
  local_f0 = param_1;
  while( true ) {
    uVar16 = 0;
    local_128 = iVar10;
    if ((this->TilesToRender).ArrayNum != (int)uVar13) {
      local_138[0] = 0;
      `TCheckedPointerIterator<FMaterialCacheTileEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_138);
    }
    if (pFVar18 == pFVar21) break;
    uVar13 = *(ulonglong *)(pFVar18 + 0x110) & 0x5555555555555555;
    uVar16 = *(ulonglong *)(pFVar18 + 0x110) >> 1 & 0x5555555555555555;
    uVar13 = (uVar13 >> 1 ^ uVar13) & 0x3333333333333333;
    uVar13 = (uVar13 >> 2 ^ uVar13) & 0xf0f0f0f0f0f0f0f;
    uVar13 = (uVar13 >> 4 ^ uVar13) & 0xff00ff00ff00ff;
    uVar20 = (uVar13 >> 8 ^ uVar13) & 0xffff0000ffff;
    uVar13 = (uVar16 >> 1 ^ uVar16) & 0x3333333333333333;
    uVar13 = (uVar13 >> 2 ^ uVar13) & 0xf0f0f0f0f0f0f0f;
    uVar13 = (uVar13 >> 4 ^ uVar13) & 0xff00ff00ff00ff;
    uVar13 = (uVar13 >> 8 ^ uVar13) & 0xffff0000ffff;
    fVar24 = fVar6 / (float)(1 << ((byte)pFVar18[0x118] & 0x1f));
    fVar27 = fVar6 / ((float)(this->ProducerDesc).BlockWidthInTiles * fVar24);
    fVar25 = (float)((uint)(uVar20 >> 0x10) ^ (uint)uVar20) * fVar27;
    fVar26 = fVar6 / ((float)(this->ProducerDesc).BlockHeightInTiles * fVar24);
    fVar24 = (float)((uint)(uVar13 >> 0x10) ^ (uint)uVar13) * fVar26;
    local_108 = CONCAT31(local_108._1_3_,1);
    fStack_10c = (float)(this->ProducerDesc).TileBorderSize / (float)(this->ProducerDesc).TileSize;
    fStack_110 = fVar27 * fStack_10c;
    fStack_10c = fVar26 * fStack_10c;
    local_118 = fVar25 - fStack_110;
    fStack_114 = fVar24 - fStack_10c;
    fStack_110 = fVar25 + fVar27 + fStack_110;
    fStack_10c = fVar24 + fVar26 + fStack_10c;
    if ((*(int *)(pFVar18 + 0x108) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar14 = pFVar18;
    if (*(FScriptContainerElement **)(pFVar18 + 0x100) != (FScriptContainerElement *)0x0) {
      pFVar14 = *(FScriptContainerElement **)(pFVar18 + 0x100);
    }
    local_f8 = *(undefined4 *)(pFVar14 + 0x10);
    local_100 = *(undefined8 *)(pFVar14 + 8);
    iVar2 = (this->ProducerDesc).TileSize + (this->ProducerDesc).TileBorderSize * 2;
    iVar9 = (int)((ulonglong)local_100 >> 0x20) * iVar2;
    TVar22._s_0.Y = iVar9;
    TVar22._s_0.X = iVar2 * (int)local_100;
    TVar23._s_0.Y = iVar9 + iVar2;
    TVar23._s_0.X = iVar2 * (int)local_100 + iVar2;
    if (iVar10 == local_124) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMaterialCachePageEntry>_>
                         (0x424,&local_130,&local_124);
    }
    pFVar18 = pFVar18 + 0x120;
    TVar4._s_0.Y = fStack_114;
    TVar4._s_0.X = local_118;
    TVar5._s_0.Y = fStack_10c;
    TVar5._s_0.X = fStack_110;
    local_130.Data[iVar10].TileRect.field0_0x0._s_0.Max.field0_0x0 = TVar23;
    local_130.Data[iVar10].TileRect.field0_0x0._s_0.Min.field0_0x0 = TVar22;
    local_130.Data[iVar10].UVRect.Min.field0_0x0 = TVar4;
    local_130.Data[iVar10].UVRect.Max.field0_0x0 = TVar5;
    *(undefined4 *)&local_130.Data[iVar10].UVRect.bIsValid = local_108;
    uVar13 = (ulonglong)local_120;
    iVar10 = iVar10 + 1;
  }
  local_d8.PrimitiveComponentId.PrimIDValue = (this->PrimitiveComponentId).PrimIDValue;
  local_d8.PhysicalRenderTargets.AllocatorInstance.SecondaryData =
       (ForElementType<IPooledRenderTarget_*>)0x0;
  local_d8.PhysicalRenderTargets.ArrayNum = 0;
  local_d8.PhysicalRenderTargets.ArrayMax = 8;
  local_120 = (this->ProducerDesc).TileSize + (this->ProducerDesc).TileBorderSize * 2;
  local_d8.TileSize.field0_0x0._s_0.Y = local_120;
  local_d8.TileSize.field0_0x0._s_0.X = local_120;
  uVar13 = uVar16;
  iStack_11c = local_120;
  while( true ) {
    if (((this->TilesToRender).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = local_128;
    FVar7.Data = local_130.Data;
    uVar17 = (uint)uVar16;
    if (*(int *)((pTVar1->AllocatorInstance).Data + 0x108) <= (int)uVar17) {
      local_e8.DataPtr = local_130.Data;
      if ((local_128 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_e8.ArrayNum = iVar10;
      MaterialCacheEnqueuePages(local_f0,&this->TagLayout,&local_d8,&local_e8);
      DestructItems<FMaterialCacheTileEntry,int>
                ((FMaterialCacheTileEntry *)(pTVar1->AllocatorInstance).Data,
                 (this->TilesToRender).ArrayNum);
      (this->TilesToRender).ArrayNum = 0;
      if ((this->TilesToRender).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x120,8,0,&pTVar1->AllocatorInstance,0,&(this->TilesToRender).ArrayMax);
      }
      if (local_d8.PhysicalRenderTargets.AllocatorInstance.SecondaryData !=
          (ForElementType<IPooledRenderTarget_*>)0x0) {
        FMemory::Free((void *)local_d8.PhysicalRenderTargets.AllocatorInstance.SecondaryData);
      }
      if (FVar7.Data != (FMaterialCachePageEntry *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar7.Data);
      }
      return;
    }
    if (((this->TilesToRender).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar18 = (pTVar1->AllocatorInstance).Data;
    uVar11 = 0;
    if ((int)uVar17 < *(int *)(pFVar18 + 0x108)) {
      uVar11 = ~uVar17 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    if (*(FScriptContainerElement **)(pFVar18 + 0x100) != (FScriptContainerElement *)0x0) {
      pFVar18 = *(FScriptContainerElement **)(pFVar18 + 0x100);
    }
    FVar19 = (ForElementType<IPooledRenderTarget_*>)((longlong)pFVar18 + uVar13);
    FVar12 = (ForElementType<IPooledRenderTarget_*>)&local_d8.PhysicalRenderTargets;
    if (local_d8.PhysicalRenderTargets.AllocatorInstance.SecondaryData !=
        (ForElementType<IPooledRenderTarget_*>)0x0) {
      FVar12 = local_d8.PhysicalRenderTargets.AllocatorInstance.SecondaryData;
    }
    if ((ulonglong)FVar12 <= (ulonglong)FVar19) {
      FVar12 = (ForElementType<IPooledRenderTarget_*>)&local_d8.PhysicalRenderTargets;
      if (local_d8.PhysicalRenderTargets.AllocatorInstance.SecondaryData !=
          (ForElementType<IPooledRenderTarget_*>)0x0) {
        FVar12 = local_d8.PhysicalRenderTargets.AllocatorInstance.SecondaryData;
      }
      if (((ulonglong)FVar19 <
           (ulonglong)((longlong)FVar12 + (longlong)local_d8.PhysicalRenderTargets.ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_d8.PhysicalRenderTargets.ArrayNum == local_d8.PhysicalRenderTargets.ArrayMax) {
      local_d8.PhysicalRenderTargets.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<IPooledRenderTarget_*>_>
                     (0x808,&local_d8.PhysicalRenderTargets.AllocatorInstance,
                      &local_d8.PhysicalRenderTargets.ArrayMax);
    }
    lVar15 = (longlong)local_d8.PhysicalRenderTargets.ArrayNum;
    FVar12 = (ForElementType<IPooledRenderTarget_*>)&local_d8.PhysicalRenderTargets;
    if (local_d8.PhysicalRenderTargets.AllocatorInstance.SecondaryData !=
        (ForElementType<IPooledRenderTarget_*>)0x0) {
      FVar12 = local_d8.PhysicalRenderTargets.AllocatorInstance.SecondaryData;
    }
    local_d8.PhysicalRenderTargets.ArrayNum = local_d8.PhysicalRenderTargets.ArrayNum + 1;
    uVar16 = (ulonglong)(uVar17 + 1);
    uVar13 = uVar13 + 0x20;
    *(undefined8 *)((longlong)FVar12 + lVar15 * 8) = *(undefined8 *)FVar19;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

