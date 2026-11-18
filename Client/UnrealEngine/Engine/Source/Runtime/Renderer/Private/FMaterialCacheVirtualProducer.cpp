// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FMaterialCacheVirtualProducer @ 144e729d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMaterialCacheVirtualProducer * __thiscall
FMaterialCacheVirtualProducer::FMaterialCacheVirtualProducer
          (FMaterialCacheVirtualProducer *this,FScene *param_1,FPrimitiveComponentId param_2,
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
  
  (this->Finalizer).Scene = param_1;
  pTVar1 = &(this->Finalizer).TagLayout.Layers;
  this->_padding_ = (longlong)&___7FMaterialCacheVirtualProducer__6B_;
  (this->Finalizer).PrimitiveComponentId.PrimIDValue = param_2.PrimIDValue;
  (this->Finalizer)._padding_ = (longlong)&___7FMaterialCacheVirtualFinalizer__6B_;
  uVar5 = (param_3->Guid).B;
  uVar6 = (param_3->Guid).C;
  uVar7 = (param_3->Guid).D;
  (this->Finalizer).TagLayout.Guid.A = (param_3->Guid).A;
  (this->Finalizer).TagLayout.Guid.B = uVar5;
  (this->Finalizer).TagLayout.Guid.C = uVar6;
  (this->Finalizer).TagLayout.Guid.D = uVar7;
  (this->Finalizer).TagLayout.Layers.AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialCacheLayer>)0x0;
  FVar23 = (param_3->Layers).AllocatorInstance.SecondaryData;
  iVar3 = (param_3->Layers).ArrayNum;
  (this->Finalizer).TagLayout.Layers.ArrayNum = iVar3;
  if (FVar23 == (ForElementType<FMaterialCacheLayer>)0x0) {
    FVar23 = (ForElementType<FMaterialCacheLayer>)&param_3->Layers;
  }
  piVar2 = &(this->Finalizer).TagLayout.Layers.ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialCacheLayer>_>
              (0x18,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    FVar22 = (this->Finalizer).TagLayout.Layers.AllocatorInstance.SecondaryData;
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
  (this->Finalizer).ProducerDesc.Name = param_4->Name;
  (this->Finalizer).ProducerDesc.FullNameHash = uVar5;
  (this->Finalizer).ProducerDesc.bPersistentHighestMip = bVar8;
  (this->Finalizer).ProducerDesc.bContinuousUpdate = bVar9;
  (this->Finalizer).ProducerDesc.bRequiresSinglePhysicalPool = bVar10;
  (this->Finalizer).ProducerDesc.bNotifyCompleted = bVar11;
  uVar5 = param_4->TileBorderSize;
  uVar6 = param_4->BlockWidthInTiles;
  uVar7 = param_4->BlockHeightInTiles;
  (this->Finalizer).ProducerDesc.TileSize = param_4->TileSize;
  (this->Finalizer).ProducerDesc.TileBorderSize = uVar5;
  (this->Finalizer).ProducerDesc.BlockWidthInTiles = uVar6;
  (this->Finalizer).ProducerDesc.BlockHeightInTiles = uVar7;
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
  (this->Finalizer).ProducerDesc.DepthInTiles = param_4->DepthInTiles;
  (this->Finalizer).ProducerDesc.WidthInBlocks = uVar12;
  (this->Finalizer).ProducerDesc.HeightInBlocks = uVar13;
  (this->Finalizer).ProducerDesc.Dimensions = uVar14;
  (this->Finalizer).ProducerDesc.MaxLevel = uVar15;
  (this->Finalizer).ProducerDesc.NumTextureLayers = uVar16;
  (this->Finalizer).ProducerDesc.LayerFormat[0] = (TEnumAsByte<EPixelFormat>)TVar17.Value;
  (this->Finalizer).ProducerDesc.LayerFormat[1] = (TEnumAsByte<EPixelFormat>)TVar18.Value;
  (this->Finalizer).ProducerDesc.LayerFormat[2] = (TEnumAsByte<EPixelFormat>)TVar19.Value;
  (this->Finalizer).ProducerDesc.LayerFormat[3] = (TEnumAsByte<EPixelFormat>)TVar20.Value;
  (this->Finalizer).ProducerDesc.LayerFormat[4] = (TEnumAsByte<EPixelFormat>)TVar21.Value;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[0].field0_0x0 + 4);
  *(undefined8 *)((this->Finalizer).ProducerDesc.LayerFormat + 5) =
       *(undefined8 *)(param_4->LayerFormat + 5);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[0].field0_0x0 + 4) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[1].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[0].field0_0x0 + 0xc)
       = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[0].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[1].field0_0x0 + 4) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[2].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[1].field0_0x0 + 0xc)
       = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[1].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[2].field0_0x0 + 4) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[3].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[2].field0_0x0 + 0xc)
       = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[2].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[3].field0_0x0 + 4) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[4].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[3].field0_0x0 + 0xc)
       = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[3].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[4].field0_0x0 + 4) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[5].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[4].field0_0x0 + 0xc)
       = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[4].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[5].field0_0x0 + 4) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[6].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[5].field0_0x0 + 0xc)
       = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[5].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[6].field0_0x0 + 4) =
       uVar4;
  uVar4 = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[7].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[6].field0_0x0 + 0xc)
       = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[6].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[7].field0_0x0 + 4) =
       uVar4;
  uVar4 = *(undefined8 *)(param_4->bIsLayerSRGB + 4);
  *(undefined8 *)((longlong)&(this->Finalizer).ProducerDesc.LayerFallbackColor[7].field0_0x0 + 0xc)
       = *(undefined8 *)((longlong)&param_4->LayerFallbackColor[7].field0_0x0 + 0xc);
  *(undefined8 *)((this->Finalizer).ProducerDesc.bIsLayerSRGB + 4) = uVar4;
  *(undefined8 *)((this->Finalizer).ProducerDesc.PhysicalGroupIndex + 3) =
       *(undefined8 *)(param_4->PhysicalGroupIndex + 3);
  (this->Finalizer).DestFormat = (this->Finalizer).ProducerDesc.LayerFormat[0].Value;
  (this->Finalizer).TilesToRender.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Finalizer).TilesToRender.ArrayNum = 0;
  (this->Finalizer).TilesToRender.ArrayMax = 0;
  (this->Finalizer).SourceFormat = PF_B8G8R8A8;
  (this->Finalizer).IntermediateFormat = PF_B8G8R8A8;
  (this->PrimitiveComponentId).PrimIDValue = param_2.PrimIDValue;
  this->Scene = param_1;
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
  return this;
}

// ~FMaterialCacheVirtualProducer @ 144e745a0

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
FMaterialCacheVirtualProducer::~FMaterialCacheVirtualProducer(FMaterialCacheVirtualProducer *this)

{
  FMaterialCacheVirtualFinalizer::~FMaterialCacheVirtualFinalizer(&this->Finalizer);
  this->_padding_ = (longlong)&___7IVirtualTexture__6B_;
  return;
}

// IsPageStreamed @ 144e9cb10

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
FMaterialCacheVirtualProducer::IsPageStreamed
          (FMaterialCacheVirtualProducer *this,uchar param_1,uint param_2)

{
  return false;
}

// ProducePageData @ 144ea5ed0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IVirtualTextureFinalizer * __thiscall
FMaterialCacheVirtualProducer::ProducePageData
          (FMaterialCacheVirtualProducer *this,FRHICommandListBase *param_1,Type param_2,
          EVTProducePageFlags param_3,FVirtualTextureProducerHandle *param_4,uchar param_5,
          uchar param_6,ulong64 param_7,ulong64 param_8,FVTProduceTargetLayer *param_9)

{
  uchar *puVar1;
  int *piVar2;
  TArray<FMaterialCacheTileEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  ForElementType<FVTProduceTargetLayer> *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  ForElementType<FVTProduceTargetLayer> FVar9;
  IVirtualTextureFinalizer *pIVar10;
  longlong lVar11;
  ForElementType<FVTProduceTargetLayer> _Dst;
  ForElementType<FVTProduceTargetLayer> FVar12;
  int iVar13;
  undefined1 auStackY_198 [32];
  ForElementType<FVTProduceTargetLayer> local_148;
  int local_40;
  int local_3c;
  ulong64 local_38;
  uchar local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_38 = param_7;
  iVar13 = 0;
  local_30 = param_6;
  local_148.SecondaryData = (ForElementType<FVTProduceTargetLayer>)0x0;
  local_40 = 0;
  local_3c = 8;
  if ((this->ProducerDesc).NumTextureLayers != '\0') {
    do {
      FVar9 = (ForElementType<FVTProduceTargetLayer>)&local_148;
      if (local_148.SecondaryData != (ForElementType<FVTProduceTargetLayer>)0x0) {
        FVar9 = local_148.SecondaryData;
      }
      if ((ulonglong)FVar9 <= param_9) {
        FVar9 = (ForElementType<FVTProduceTargetLayer>)&local_148;
        if (local_148.SecondaryData != (ForElementType<FVTProduceTargetLayer>)0x0) {
          FVar9 = local_148.SecondaryData;
        }
        if ((param_9 < (ulonglong)((longlong)local_3c * 0x20 + (longlong)FVar9)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pIVar10 = (IVirtualTextureFinalizer *)(*pcVar6)();
          return pIVar10;
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>_>
                             (0x820,&local_148,&local_3c);
      }
      uVar7 = *(undefined8 *)((longlong)param_9 + 8);
      lVar11 = (longlong)local_40;
      FVar9 = (ForElementType<FVTProduceTargetLayer>)&local_148;
      if (local_148.SecondaryData != (ForElementType<FVTProduceTargetLayer>)0x0) {
        FVar9 = local_148.SecondaryData;
      }
      iVar13 = iVar13 + 1;
      puVar4 = (undefined8 *)(lVar11 * 0x20 + (longlong)FVar9);
      local_40 = local_40 + 1;
      *puVar4 = param_9->PooledRenderTarget;
      puVar4[1] = uVar7;
      puVar1 = (uchar *)((longlong)param_9 + 0x10);
      uVar7 = *(undefined8 *)((longlong)param_9 + 0x18);
      param_9 = (FVTProduceTargetLayer *)((longlong)param_9 + 0x20);
      puVar4 = (undefined8 *)(lVar11 * 0x20 + 0x10 + (longlong)FVar9);
      *puVar4 = *(undefined8 *)puVar1;
      puVar4[1] = uVar7;
    } while (iVar13 < (int)(uint)(this->ProducerDesc).NumTextureLayers);
  }
  pTVar3 = &(this->Finalizer).TilesToRender;
  pFVar5 = (ForElementType<FVTProduceTargetLayer> *)(pTVar3->AllocatorInstance).Data;
  if (((pFVar5 <= &local_148) &&
      (&local_148 <
       (ForElementType<FVTProduceTargetLayer> *)
       ((longlong)pFVar5 + (longlong)(this->Finalizer).TilesToRender.ArrayMax * 0x120))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    pIVar10 = (IVirtualTextureFinalizer *)(*pcVar6)();
    return pIVar10;
  }
  iVar13 = (this->Finalizer).TilesToRender.ArrayNum;
  piVar2 = &(this->Finalizer).TilesToRender.ArrayMax;
  if (iVar13 == *piVar2) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x120,8,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->Finalizer).TilesToRender.ArrayNum = iVar13 + 1;
  FVar12 = (ForElementType<FVTProduceTargetLayer>)
           ((longlong)(pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x120);
  *(ForElementType<FVTProduceTargetLayer> *)((longlong)FVar12 + 0x100) =
       (ForElementType<FVTProduceTargetLayer>)0x0;
  lVar11 = (longlong)local_40;
  *(int *)((ForElementType<FVTProduceTargetLayer> *)((longlong)FVar12 + 0x108))->InlineData =
       local_40;
  FVar9 = (ForElementType<FVTProduceTargetLayer>)&local_148;
  if (local_148.SecondaryData != (ForElementType<FVTProduceTargetLayer>)0x0) {
    FVar9 = local_148.SecondaryData;
  }
  puVar1 = (uchar *)((longlong)FVar12 + 0x10c);
  if (local_40 == 0) {
    puVar1[0] = '\b';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVTProduceTargetLayer>_>
              (0x20,8,local_40,0,(ForElementType<FVTProduceTargetLayer> *)FVar12,local_40,
               (int *)puVar1);
    _Dst = *(ForElementType<FVTProduceTargetLayer> *)((longlong)FVar12 + 0x100);
    if (*(ForElementType<FVTProduceTargetLayer> *)((longlong)FVar12 + 0x100) ==
        (ForElementType<FVTProduceTargetLayer>)0x0) {
      _Dst = FVar12;
    }
    memcpy((void *)_Dst,(void *)FVar9,lVar11 << 5);
  }
  *(ulong64 *)((longlong)FVar12 + 0x110) = local_38;
  *(uchar *)((longlong)FVar12 + 0x118) = local_30;
  if (local_148.SecondaryData != (ForElementType<FVTProduceTargetLayer>)0x0) {
    FMemory::Free((void *)local_148.SecondaryData);
  }
  return (IVirtualTextureFinalizer *)&this->Finalizer;
}

// RequestPageData @ 144eaa050

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

FVTRequestPageResult * __thiscall
FMaterialCacheVirtualProducer::RequestPageData
          (FMaterialCacheVirtualProducer *this,FVTRequestPageResult *__return_storage_ptr__,
          FRHICommandListBase *param_1,FVirtualTextureProducerHandle *param_2,uchar param_3,
          uchar param_4,ulong64 param_5,EVTRequestPagePriority param_6)

{
  bool bVar1;
  
  bVar1 = (this->Scene->GPUScene).bInBeginEndBlock;
  __return_storage_ptr__->Handle = 0;
  if (bVar1 == false) {
    __return_storage_ptr__->Status = Saturated;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Status = Available;
  return __return_storage_ptr__;
}

