// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FRuntimeVirtualTextureFinalizer @ 1458cbe70

FRuntimeVirtualTextureFinalizer * __thiscall
FRuntimeVirtualTextureFinalizer::FRuntimeVirtualTextureFinalizer
          (FRuntimeVirtualTextureFinalizer *this,FVTProducerDescription *param_1,int param_2,
          ERuntimeVirtualTextureMaterialType param_3,bool param_4,FSceneInterface *param_5,
          TTransform<double> *param_6,TBox<double> *param_7,TVector4<float> *param_8)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  TEnumAsByte<EPixelFormat> TVar15;
  TEnumAsByte<EPixelFormat> TVar16;
  TEnumAsByte<EPixelFormat> TVar17;
  TEnumAsByte<EPixelFormat> TVar18;
  TEnumAsByte<EPixelFormat> TVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  
  this->_padding_ = (longlong)&___7FRuntimeVirtualTextureFinalizer__6B_;
  uVar3 = param_1->FullNameHash;
  bVar4 = param_1->bPersistentHighestMip;
  bVar5 = param_1->bContinuousUpdate;
  bVar6 = param_1->bRequiresSinglePhysicalPool;
  bVar7 = param_1->bNotifyCompleted;
  (this->Desc).Name = param_1->Name;
  (this->Desc).FullNameHash = uVar3;
  (this->Desc).bPersistentHighestMip = bVar4;
  (this->Desc).bContinuousUpdate = bVar5;
  (this->Desc).bRequiresSinglePhysicalPool = bVar6;
  (this->Desc).bNotifyCompleted = bVar7;
  uVar3 = param_1->TileBorderSize;
  uVar8 = param_1->BlockWidthInTiles;
  uVar9 = param_1->BlockHeightInTiles;
  (this->Desc).TileSize = param_1->TileSize;
  (this->Desc).TileBorderSize = uVar3;
  (this->Desc).BlockWidthInTiles = uVar8;
  (this->Desc).BlockHeightInTiles = uVar9;
  uVar10 = param_1->WidthInBlocks;
  uVar11 = param_1->HeightInBlocks;
  uVar12 = param_1->Dimensions;
  uVar13 = param_1->MaxLevel;
  uVar14 = param_1->NumTextureLayers;
  TVar15.Value = param_1->LayerFormat[0].Value;
  TVar16.Value = param_1->LayerFormat[1].Value;
  TVar17.Value = param_1->LayerFormat[2].Value;
  TVar18.Value = param_1->LayerFormat[3].Value;
  TVar19.Value = param_1->LayerFormat[4].Value;
  (this->Desc).DepthInTiles = param_1->DepthInTiles;
  (this->Desc).WidthInBlocks = uVar10;
  (this->Desc).HeightInBlocks = uVar11;
  (this->Desc).Dimensions = uVar12;
  (this->Desc).MaxLevel = uVar13;
  (this->Desc).NumTextureLayers = uVar14;
  (this->Desc).LayerFormat[0] = (TEnumAsByte<EPixelFormat>)TVar15.Value;
  (this->Desc).LayerFormat[1] = (TEnumAsByte<EPixelFormat>)TVar16.Value;
  (this->Desc).LayerFormat[2] = (TEnumAsByte<EPixelFormat>)TVar17.Value;
  (this->Desc).LayerFormat[3] = (TEnumAsByte<EPixelFormat>)TVar18.Value;
  (this->Desc).LayerFormat[4] = (TEnumAsByte<EPixelFormat>)TVar19.Value;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerFallbackColor[0].field0_0x0 + 4);
  *(undefined8 *)((this->Desc).LayerFormat + 5) = *(undefined8 *)(param_1->LayerFormat + 5);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[0].field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerFallbackColor[1].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[0].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_1->LayerFallbackColor[0].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[1].field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerFallbackColor[2].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[1].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_1->LayerFallbackColor[1].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[2].field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerFallbackColor[3].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[2].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_1->LayerFallbackColor[2].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[3].field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerFallbackColor[4].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[3].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_1->LayerFallbackColor[3].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[4].field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerFallbackColor[5].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[4].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_1->LayerFallbackColor[4].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[5].field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerFallbackColor[6].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[5].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_1->LayerFallbackColor[5].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[6].field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_1->LayerFallbackColor[7].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[6].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_1->LayerFallbackColor[6].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[7].field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)(param_1->bIsLayerSRGB + 4);
  *(undefined8 *)((longlong)&(this->Desc).LayerFallbackColor[7].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_1->LayerFallbackColor[7].field0_0x0 + 0xc);
  *(undefined8 *)((this->Desc).bIsLayerSRGB + 4) = uVar1;
  *(undefined8 *)((this->Desc).PhysicalGroupIndex + 3) =
       *(undefined8 *)(param_1->PhysicalGroupIndex + 3);
  this->bClearTextures = param_4;
  this->Scene = param_5;
  this->RuntimeVirtualTextureId = param_2;
  this->MaterialType = param_3;
  dVar2 = (param_6->Rotation).XY.m128d_f64[1];
  (this->UVToWorld).Rotation.XY.m128d_f64[0] = (param_6->Rotation).XY.m128d_f64[0];
  (this->UVToWorld).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_6->Rotation).ZW.m128d_f64[1];
  (this->UVToWorld).Rotation.ZW.m128d_f64[0] = (param_6->Rotation).ZW.m128d_f64[0];
  (this->UVToWorld).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_6->Translation).XY.m128d_f64[1];
  (this->UVToWorld).Translation.XY.m128d_f64[0] = (param_6->Translation).XY.m128d_f64[0];
  (this->UVToWorld).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_6->Translation).ZW.m128d_f64[1];
  (this->UVToWorld).Translation.ZW.m128d_f64[0] = (param_6->Translation).ZW.m128d_f64[0];
  (this->UVToWorld).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_6->Scale3D).XY.m128d_f64[1];
  (this->UVToWorld).Scale3D.XY.m128d_f64[0] = (param_6->Scale3D).XY.m128d_f64[0];
  (this->UVToWorld).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_6->Scale3D).ZW.m128d_f64[1];
  (this->UVToWorld).Scale3D.ZW.m128d_f64[0] = (param_6->Scale3D).ZW.m128d_f64[0];
  (this->UVToWorld).Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_7->Min).field0_0x0._s_0.Y;
  (this->WorldBounds).Min.field0_0x0._s_0.X = (param_7->Min).field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_7->Max).field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = (param_7->Min).field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_7->Max).field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = (param_7->Max).field0_0x0._s_0.Y;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar12 = param_7->Pad[0];
  uVar13 = param_7->Pad[1];
  uVar14 = param_7->Pad[2];
  uVar20 = param_7->Pad[3];
  uVar21 = param_7->Pad[4];
  uVar22 = param_7->Pad[5];
  uVar23 = param_7->Pad[6];
  (this->WorldBounds).IsValid = param_7->IsValid;
  (this->WorldBounds).Pad[0] = uVar12;
  (this->WorldBounds).Pad[1] = uVar13;
  (this->WorldBounds).Pad[2] = uVar14;
  (this->WorldBounds).Pad[3] = uVar20;
  (this->WorldBounds).Pad[4] = uVar21;
  (this->WorldBounds).Pad[5] = uVar22;
  (this->WorldBounds).Pad[6] = uVar23;
  uVar1 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 8);
  *(undefined8 *)&(this->CustomMaterialData).field0_0x0 = *(undefined8 *)&param_8->field0_0x0;
  *(undefined8 *)((longlong)&(this->CustomMaterialData).field0_0x0 + 8) = uVar1;
  (this->Tiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tiles).ArrayNum = 0;
  (this->Tiles).ArrayMax = 0;
  (this->Batches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Batches).ArrayNum = 0;
  (this->Batches).ArrayMax = 0;
  return this;
}

// ~FRuntimeVirtualTextureFinalizer @ 1458cf5c0

void __thiscall
FRuntimeVirtualTextureFinalizer::~FRuntimeVirtualTextureFinalizer
          (FRuntimeVirtualTextureFinalizer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRuntimeVirtualTextureFinalizer__6B_;
  pFVar1 = (this->Batches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddTile @ 1458d9a30

void __thiscall
FRuntimeVirtualTextureFinalizer::AddTile(FRuntimeVirtualTextureFinalizer *this,FTileEntry *param_1)

{
  int *piVar1;
  TArray<FRuntimeVirtualTextureFinalizer::FTileEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  FTileEntry *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FRHITexture *pFVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  
  pTVar2 = &this->Tiles;
  pFVar3 = (FTileEntry *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Tiles).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->Tiles).ArrayNum;
  piVar1 = &(this->Tiles).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Tiles).ArrayNum = iVar9 + 1;
  uVar6 = *(undefined8 *)&param_1->Targets[0].pPageLocation.field0_0x0;
  lVar10 = (longlong)iVar9 * 0x70;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(IPooledRenderTarget **)(pFVar4 + lVar10) = param_1->Targets[0].PooledRenderTarget;
  *(undefined8 *)(pFVar4 + lVar10 + 8) = uVar6;
  pFVar7 = param_1->Targets[0].TextureRHI;
  *(undefined8 *)(pFVar4 + lVar10 + 0x10) =
       *(undefined8 *)((longlong)&param_1->Targets[0].pPageLocation.field0_0x0 + 8);
  *(FRHITexture **)(pFVar4 + lVar10 + 0x10 + 8) = pFVar7;
  uVar6 = *(undefined8 *)&param_1->Targets[1].pPageLocation.field0_0x0;
  *(IPooledRenderTarget **)(pFVar4 + lVar10 + 0x20) = param_1->Targets[1].PooledRenderTarget;
  *(undefined8 *)(pFVar4 + lVar10 + 0x20 + 8) = uVar6;
  pFVar7 = param_1->Targets[1].TextureRHI;
  *(undefined8 *)(pFVar4 + lVar10 + 0x30) =
       *(undefined8 *)((longlong)&param_1->Targets[1].pPageLocation.field0_0x0 + 8);
  *(FRHITexture **)(pFVar4 + lVar10 + 0x30 + 8) = pFVar7;
  uVar6 = *(undefined8 *)&param_1->Targets[2].pPageLocation.field0_0x0;
  *(IPooledRenderTarget **)(pFVar4 + lVar10 + 0x40) = param_1->Targets[2].PooledRenderTarget;
  *(undefined8 *)(pFVar4 + lVar10 + 0x40 + 8) = uVar6;
  pFVar7 = param_1->Targets[2].TextureRHI;
  *(undefined8 *)(pFVar4 + lVar10 + 0x50) =
       *(undefined8 *)((longlong)&param_1->Targets[2].pPageLocation.field0_0x0 + 8);
  *(FRHITexture **)(pFVar4 + lVar10 + 0x50 + 8) = pFVar7;
  uVar6 = *(undefined8 *)&param_1->vLevel;
  *(ulong64 *)(pFVar4 + lVar10 + 0x60) = param_1->vAddress;
  *(undefined8 *)(pFVar4 + lVar10 + 0x60 + 8) = uVar6;
  return;
}

// Finalize @ 1458f5690

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRuntimeVirtualTextureFinalizer::Finalize
          (FRuntimeVirtualTextureFinalizer *this,FRDGBuilder *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FBatchRenderContext *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Batches).AllocatorInstance.Data;
  iVar2 = (this->Batches).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  do {
    if ((this->Batches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<RuntimeVirtualTexture::FBatchRenderContext_const_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) {
      (this->Tiles).ArrayNum = 0;
      (this->Batches).ArrayNum = 0;
      return;
    }
    pFVar3 = *(FBatchRenderContext **)pFVar4;
    if ((pFVar3->GraphSetup).bCompressPass == false) {
LAB_1458f56f2:
      if ((pFVar3->GraphSetup).bDirectAliasing == false) goto LAB_1458f56f8;
    }
    else {
      if ((pFVar3->GraphSetup).bDirectAliasing != false) {
        RuntimeVirtualTexture::CompressPages(param_1,pFVar3);
        goto LAB_1458f56f2;
      }
LAB_1458f56f8:
      RuntimeVirtualTexture::CopyPagesToOutput(param_1,pFVar3);
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// IsReady @ 14590edd0

bool __thiscall FRuntimeVirtualTextureFinalizer::IsReady(FRuntimeVirtualTextureFinalizer *this)

{
  FSceneInterface *pFVar1;
  longlong lVar2;
  
  pFVar1 = this->Scene;
  if (pFVar1 != (FSceneInterface *)0x0) {
    lVar2 = (**(code **)(pFVar1->_padding_ + 0x420))(pFVar1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(pFVar1->_padding_ + 0x420))(pFVar1);
      if (*(char *)(lVar2 + 0x38e1) != '\0') {
        return true;
      }
    }
  }
  return false;
}

// RenderFinalize @ 145918f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001459194b0) */
/* WARNING: Removing unreachable block (ram,0x0001459194fe) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRuntimeVirtualTextureFinalizer::RenderFinalize
          (FRuntimeVirtualTextureFinalizer *this,FRDGBuilder *param_1,ISceneRenderer *param_2)

{
  int *piVar1;
  TArray<RuntimeVirtualTexture::FBatchRenderContext_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  IPooledRenderTarget *pIVar12;
  IPooledRenderTarget *pIVar13;
  float fVar14;
  FRHIGPUMask FVar15;
  FRDGBuilder *pFVar16;
  FRDGBuilder *pFVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  IPooledRenderTarget *pIVar24;
  ulonglong uVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  undefined1 auStack_998 [32];
  FBatchRenderContext **local_978;
  FScriptContainerElement *local_970;
  longlong local_968;
  longlong local_960;
  undefined8 local_958;
  undefined1 local_948;
  undefined1 local_947 [7];
  IPooledRenderTarget *local_940;
  FBatchRenderContext *local_938;
  FBatchRenderContext *local_930;
  uint local_928;
  FRHIGPUMask local_924;
  FRDGBuilder *local_920;
  FScriptContainerElement *local_918;
  FRHIComputeCommandList *local_910;
  IPooledRenderTarget *local_908;
  undefined8 uStack_900;
  longlong local_8f8;
  longlong lStack_8f0;
  IPooledRenderTarget *local_8e8;
  undefined8 uStack_8e0;
  longlong local_8d8;
  longlong lStack_8d0;
  IPooledRenderTarget *local_8c8;
  undefined8 uStack_8c0;
  longlong local_8b8;
  longlong lStack_8b0;
  ulonglong local_8a8;
  longlong lStack_8a0;
  undefined1 local_878;
  undefined7 uStack_877;
  undefined1 local_868 [320];
  double dStack_728;
  undefined1 auStack_720 [16];
  undefined8 auStack_710 [211];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_998;
  local_910 = (FRHIComputeCommandList *)param_1->_padding_;
  local_924.GPUMask = *(uint *)&local_910->field_0x29c;
  local_920 = param_1;
  FRHIComputeCommandList::SetGPUMask
            (local_910,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  RuntimeVirtualTexture::FRenderPageBatchDesc::FRenderPageBatchDesc
            ((FRenderPageBatchDesc *)local_868);
  local_868._16_4_ = this->RuntimeVirtualTextureId;
  iVar26 = 0;
  local_868._32_8_ = (this->UVToWorld).Rotation.XY.m128d_f64[0];
  local_868._40_8_ = (this->UVToWorld).Rotation.XY.m128d_f64[1];
  local_868[0xb8] = this->MaterialType;
  local_868._48_8_ = (this->UVToWorld).Rotation.ZW.m128d_f64[0];
  local_868._56_8_ = (this->UVToWorld).Rotation.ZW.m128d_f64[1];
  local_868[0xb9] = (this->Desc).MaxLevel;
  local_868._64_8_ = (this->UVToWorld).Translation.XY.m128d_f64[0];
  local_868._72_8_ = (this->UVToWorld).Translation.XY.m128d_f64[1];
  local_868[0xba] = this->bClearTextures;
  local_868._96_8_ = (this->UVToWorld).Scale3D.XY.m128d_f64[0];
  local_868._104_8_ = (this->UVToWorld).Scale3D.XY.m128d_f64[1];
  iVar20 = (this->Tiles).ArrayNum;
  local_868[0xbb] = false;
  local_868._128_8_ = (this->WorldBounds).Min.field0_0x0._s_0.X;
  local_868._136_8_ = (this->WorldBounds).Min.field0_0x0._s_0.Y;
  local_868._80_8_ = (this->UVToWorld).Translation.ZW.m128d_f64[0];
  local_868._88_8_ = (this->UVToWorld).Translation.ZW.m128d_f64[1];
  local_868._160_8_ = (this->WorldBounds).Max.field0_0x0._s_0.Y;
  local_868._168_8_ = (this->WorldBounds).Max.field0_0x0._s_0.Z;
  local_868._112_8_ = (this->UVToWorld).Scale3D.ZW.m128d_f64[0];
  local_868._120_8_ = (this->UVToWorld).Scale3D.ZW.m128d_f64[1];
  local_868._144_8_ = (this->WorldBounds).Min.field0_0x0._s_0.Z;
  local_868._152_8_ = (this->WorldBounds).Max.field0_0x0._s_0.X;
  local_868._188_16_ = (undefined1  [16])FLinearColor::Transparent.field0_0x0;
  local_868[0xb0] = (this->WorldBounds).IsValid;
  local_868[0xb1] = (this->WorldBounds).Pad[0];
  local_868[0xb2] = (this->WorldBounds).Pad[1];
  local_868[0xb3] = (this->WorldBounds).Pad[2];
  local_868[0xb4] = (this->WorldBounds).Pad[3];
  local_868[0xb5] = (this->WorldBounds).Pad[4];
  local_868[0xb6] = (this->WorldBounds).Pad[5];
  local_868[0xb7] = (this->WorldBounds).Pad[6];
  local_868._208_8_ = *(undefined8 *)&(this->CustomMaterialData).field0_0x0;
  local_868._216_8_ = *(undefined8 *)((longlong)&(this->CustomMaterialData).field0_0x0 + 8);
  local_868._0_8_ = param_2;
  if (iVar20 < 1) {
    local_978 = (FBatchRenderContext **)0x0;
    local_970 = (FScriptContainerElement *)(longlong)iVar20;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_868._224_8_ = *(undefined8 *)(this->Tiles).AllocatorInstance.Data;
  iVar20 = (this->Tiles).ArrayNum;
  if (iVar20 < 1) {
    local_978 = (FBatchRenderContext **)0x0;
    local_970 = (FScriptContainerElement *)(longlong)iVar20;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_868._248_8_ = *(undefined8 *)((this->Tiles).AllocatorInstance.Data + 0x20);
  iVar20 = (this->Tiles).ArrayNum;
  if (iVar20 < 1) {
    local_978 = (FBatchRenderContext **)0x0;
    local_970 = (FScriptContainerElement *)(longlong)iVar20;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar16 = local_920;
  fVar14 = __real_3f800000;
  local_928 = (this->Tiles).ArrayNum;
  uVar21 = (ulonglong)(int)local_928;
  pFVar28 = (this->Tiles).AllocatorInstance.Data;
  local_868._272_8_ = *(undefined8 *)(pFVar28 + 0x40);
  local_918 = pFVar28 + uVar21 * 0x70;
  local_940 = (IPooledRenderTarget *)0x0;
  while( true ) {
    pFVar27 = local_918;
    if ((this->Tiles).ArrayNum != (int)uVar21) {
      local_948 = 0;
      `TCheckedPointerIterator<FRuntimeVirtualTextureFinalizer::FTileEntry,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_948);
    }
    pFVar17 = local_920;
    FVar15.GPUMask = local_924.GPUMask;
    if (pFVar28 == pFVar27) break;
    pIVar12 = *(IPooledRenderTarget **)(pFVar28 + 0x20);
    uStack_8e0 = *(longlong *)(pFVar28 + 0x28);
    local_908 = *(IPooledRenderTarget **)pFVar28;
    uStack_900 = *(longlong *)(pFVar28 + 8);
    local_8f8 = *(longlong *)(pFVar28 + 0x10);
    lStack_8f0 = *(longlong *)(pFVar28 + 0x18);
    pIVar13 = *(IPooledRenderTarget **)(pFVar28 + 0x40);
    uStack_8c0 = *(longlong *)(pFVar28 + 0x48);
    local_8a8 = *(ulonglong *)(pFVar28 + 0x60);
    lStack_8a0 = *(longlong *)(pFVar28 + 0x68);
    local_8d8 = *(longlong *)(pFVar28 + 0x30);
    lStack_8d0 = *(longlong *)(pFVar28 + 0x38);
    bVar18 = (IPooledRenderTarget *)local_868._248_8_ != pIVar12;
    local_8b8 = *(longlong *)(pFVar28 + 0x50);
    lStack_8b0 = *(longlong *)(pFVar28 + 0x58);
    bVar29 = (IPooledRenderTarget *)local_868._224_8_ != local_908;
    bVar30 = (IPooledRenderTarget *)local_868._272_8_ != pIVar13;
    local_8e8 = pIVar12;
    local_8c8 = pIVar13;
    if ((iVar26 == 8) || (pIVar24 = local_940, bVar30 || (bVar18 || bVar29))) {
      pTVar2 = &this->Batches;
      local_940 = local_908;
      local_868._296_4_ = iVar26;
      local_938 = RuntimeVirtualTexture::InitPageBatch(pFVar16,(FRenderPageBatchDesc *)local_868);
      pFVar27 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar27 <= (FScriptContainerElement *)&local_938) &&
         (lVar23 = (longlong)(this->Batches).ArrayMax,
         (FScriptContainerElement *)&local_938 < pFVar27 + lVar23 * 8)) {
        local_960 = (longlong)(this->Batches).ArrayNum;
        local_958 = 8;
        local_978 = &local_938;
        local_970 = pFVar27;
        local_968 = lVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar19) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar20 = (this->Batches).ArrayNum;
      piVar1 = &(this->Batches).ArrayMax;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->Batches).ArrayNum = iVar20 + 1;
      iVar26 = 0;
      *(FBatchRenderContext **)((pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 8) = local_938
      ;
      pIVar24 = (IPooledRenderTarget *)0x0;
      if (bVar30 || (bVar18 || bVar29)) {
        local_868._224_8_ = local_940;
        local_868._248_8_ = pIVar12;
        local_868._272_8_ = pIVar13;
      }
    }
    lVar23 = (longlong)pIVar24 * 0xd8;
    local_940 = (IPooledRenderTarget *)((longlong)pIVar24 + 1);
    uVar25 = local_8a8 >> 1 & 0x5555555555555555;
    iVar26 = iVar26 + 1;
    uVar21 = ((local_8a8 & 0x5555555555555555) >> 1 ^ local_8a8 & 0x5555555555555555) &
             0x3333333333333333;
    uVar21 = (uVar21 >> 2 ^ uVar21) & 0xf0f0f0f0f0f0f0f;
    uVar22 = (uVar21 >> 4 ^ uVar21) & 0xff00ff00ff00ff;
    uVar21 = (uVar25 >> 1 ^ uVar25) & 0x3333333333333333;
    uVar22 = (uVar22 >> 8 ^ uVar22) & 0xffff0000ffff;
    uVar21 = (uVar21 >> 2 ^ uVar21) & 0xf0f0f0f0f0f0f0f;
    uVar21 = (uVar21 >> 4 ^ uVar21) & 0xff00ff00ff00ff;
    uVar21 = (uVar21 >> 8 ^ uVar21) & 0xffff0000ffff;
    fVar31 = fVar14 / (float)(1 << ((byte)lStack_8a0 & 0x1f));
    fVar32 = fVar14 / ((float)(this->Desc).BlockWidthInTiles * fVar31);
    dVar11 = (double)((float)((uint)(uVar22 >> 0x10) ^ (uint)uVar22) * fVar32);
    fVar31 = fVar14 / ((float)(this->Desc).BlockHeightInTiles * fVar31);
    uVar3 = (this->Desc).TileSize;
    uVar4 = (this->Desc).TileBorderSize;
    local_868[lVar23 + 0x130] = (byte)lStack_8a0;
    iVar20 = uVar3 + uVar4 * 2;
    dVar9 = (double)fVar31;
    local_878 = 1;
    dVar33 = (double)((float)((uint)(uVar21 >> 0x10) ^ (uint)uVar21) * fVar31);
    dVar8 = (double)fVar32;
    dVar6 = (double)((float)uVar4 / (float)uVar3);
    dVar7 = dVar6 * dVar9;
    dVar6 = dVar6 * dVar8;
    dVar9 = dVar9 + dVar33 + dVar7;
    *(double *)(local_868 + lVar23 + 0x138) = dVar11 - dVar6;
    (&dStack_728)[(longlong)pIVar24 * 0x1b] = dVar33 - dVar7;
    auVar10._8_4_ = SUB84(dVar9,0);
    auVar10._0_8_ = dVar11 + dVar8 + dVar6;
    auVar10._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(auStack_720 + lVar23) = auVar10;
    auStack_710[(longlong)pIVar24 * 0x1b] = CONCAT71(uStack_877,1);
    auStack_710[(longlong)pIVar24 * 0x1b + 2] =
         CONCAT44(uStack_900._4_4_ * iVar20 + iVar20,(int)uStack_900 * iVar20 + iVar20);
    auStack_710[(longlong)pIVar24 * 0x1b + 1] =
         CONCAT44(uStack_900._4_4_ * iVar20,(int)uStack_900 * iVar20);
    auStack_710[(longlong)pIVar24 * 0x1b + 4] =
         CONCAT44(uStack_8e0._4_4_ * iVar20 + iVar20,(int)uStack_8e0 * iVar20 + iVar20);
    auStack_710[(longlong)pIVar24 * 0x1b + 3] =
         CONCAT44(uStack_8e0._4_4_ * iVar20,(int)uStack_8e0 * iVar20);
    auStack_710[(longlong)pIVar24 * 0x1b + 5] =
         CONCAT44(uStack_8c0._4_4_ * iVar20,(int)uStack_8c0 * iVar20);
    uVar21 = (ulonglong)local_928;
    auStack_710[(longlong)pIVar24 * 0x1b + 6] =
         CONCAT44(uStack_8c0._4_4_ * iVar20 + iVar20,(int)uStack_8c0 * iVar20 + iVar20);
    pFVar28 = pFVar28 + 0x70;
  }
  if (0 < iVar26) {
    pTVar2 = &this->Batches;
    local_868._296_4_ = iVar26;
    local_930 = RuntimeVirtualTexture::InitPageBatch(local_920,(FRenderPageBatchDesc *)local_868);
    pFVar28 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar28 <= (FScriptContainerElement *)&local_930) &&
       (lVar23 = (longlong)(this->Batches).ArrayMax,
       (FScriptContainerElement *)&local_930 < pFVar28 + lVar23 * 8)) {
      local_960 = (longlong)(this->Batches).ArrayNum;
      local_958 = 8;
      local_978 = &local_930;
      local_970 = pFVar28;
      local_968 = lVar23;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar20 = (this->Batches).ArrayNum;
    piVar1 = &(this->Batches).ArrayMax;
    if (iVar20 == *piVar1) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Batches).ArrayNum = iVar20 + 1;
    *(FBatchRenderContext **)((pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 8) = local_930;
  }
  pFVar27 = (this->Batches).AllocatorInstance.Data;
  iVar20 = (this->Batches).ArrayNum;
  pFVar28 = pFVar27 + (longlong)iVar20 * 8;
  while( true ) {
    if ((this->Batches).ArrayNum != iVar20) {
      `TCheckedPointerIterator<RuntimeVirtualTexture::FBatchRenderContext_const_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_947);
    }
    if (pFVar27 == pFVar28) break;
    RuntimeVirtualTexture::RenderPageBatch(pFVar17,*(FBatchRenderContext **)pFVar27);
    pFVar27 = pFVar27 + 8;
  }
  FRHIComputeCommandList::SetGPUMask(local_910,FVar15);
  return;
}

