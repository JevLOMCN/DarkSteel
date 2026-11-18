// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetBuilderParameters @ 14487b020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FBuilderParameters * __thiscall
Froxel::FViewData::GetBuilderParameters
          (FViewData *this,FBuilderParameters *__return_storage_ptr__,FRDGBuilder *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  FRDGBufferUAV *pFVar6;
  byte bVar7;
  FRDGBufferUAVDesc local_18;
  
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)&(__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0 = 0;
  (__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FroxelParameters).FroxelToClipScaleBias.field0_0x0 + 4) = 0;
  (__return_storage_ptr__->FroxelParameters).FroxelToClipScaleBias.field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->OutFroxels = (FRDGBufferUAV *)0x0;
  __return_storage_ptr__->OutFroxelArgs = (FRDGBufferUAV *)0x0;
  uVar1 = *(undefined8 *)((longlong)&(this->SharedParameters).FroxelToViewScaleBias.field0_0x0 + 8);
  local_18._padding_._2_1_ = 0;
  *(undefined8 *)&(__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0 =
       *(undefined8 *)&(this->SharedParameters).FroxelToViewScaleBias.field0_0x0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0 + 8) =
       uVar1;
  uVar1 = *(undefined8 *)((longlong)&(this->SharedParameters).FroxelToClipScaleBias.field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->FroxelParameters).FroxelToClipScaleBias.field0_0x0 =
       *(undefined8 *)&(this->SharedParameters).FroxelToClipScaleBias.field0_0x0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FroxelParameters).FroxelToClipScaleBias.field0_0x0 + 8) =
       uVar1;
  fVar2 = (this->SharedParameters).FroxelRecLog2DepthScale1;
  fVar3 = (this->SharedParameters).FroxelRecNearScale;
  (__return_storage_ptr__->FroxelParameters).FroxelClipToViewScale.field0_0x0 =
       (this->SharedParameters).FroxelClipToViewScale.field0_0x0;
  (__return_storage_ptr__->FroxelParameters).FroxelRecLog2DepthScale1 = fVar2;
  (__return_storage_ptr__->FroxelParameters).FroxelRecNearScale = fVar3;
  fVar2 = (this->SharedParameters).FroxelNear;
  fVar3 = (this->SharedParameters).FroxelViewToClipTransformScale;
  fVar4 = (this->SharedParameters).FroxelClipToViewTransformScale;
  (__return_storage_ptr__->FroxelParameters).FroxelDepthScale1 =
       (this->SharedParameters).FroxelDepthScale1;
  (__return_storage_ptr__->FroxelParameters).FroxelNear = fVar2;
  (__return_storage_ptr__->FroxelParameters).FroxelViewToClipTransformScale = fVar3;
  (__return_storage_ptr__->FroxelParameters).FroxelClipToViewTransformScale = fVar4;
  fVar2 = (this->SharedParameters).FroxelRadius;
  fVar3 = (this->SharedParameters).FroxelInvRadius;
  uVar5 = (this->SharedParameters).bFroxelIsOrtho;
  (__return_storage_ptr__->FroxelParameters).FroxelClipToViewTransformBias =
       (this->SharedParameters).FroxelClipToViewTransformBias;
  (__return_storage_ptr__->FroxelParameters).FroxelRadius = fVar2;
  (__return_storage_ptr__->FroxelParameters).FroxelInvRadius = fVar3;
  (__return_storage_ptr__->FroxelParameters).bFroxelIsOrtho = uVar5;
  uVar5 = (this->SharedParameters).FroxelArgsStride;
  uVar1 = *(undefined8 *)&(this->SharedParameters).field_0x58;
  (__return_storage_ptr__->FroxelParameters).FroxelArgsOffset =
       (this->SharedParameters).FroxelArgsOffset;
  (__return_storage_ptr__->FroxelParameters).FroxelArgsStride = uVar5;
  *(undefined8 *)&(__return_storage_ptr__->FroxelParameters).field_0x58 = uVar1;
  local_18.Buffer = this->FroxelsRDG;
  bVar7 = 0;
  if ((((local_18.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar7 = 0x1c;
  }
  local_18._padding_._0_2_ = (ushort)bVar7;
  pFVar6 = FRDGBuilder::CreateUAV(param_1,&local_18,None);
  __return_storage_ptr__->OutFroxels = pFVar6;
  local_18.Buffer = this->FroxelArgsRDG;
  bVar7 = 0;
  local_18._padding_._2_1_ = 0;
  if ((((local_18.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar7 = 0x1c;
  }
  local_18._padding_._0_2_ = (ushort)bVar7;
  pFVar6 = FRDGBuilder::CreateUAV(param_1,&local_18,None);
  __return_storage_ptr__->OutFroxelArgs = pFVar6;
  return __return_storage_ptr__;
}

// GetShaderParameters @ 14487d8b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
Froxel::FViewData::GetShaderParameters
          (FViewData *this,FParameters *__return_storage_ptr__,FRDGBuilder *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  FRDGBufferSRV *pFVar6;
  FRDGBufferSRVDesc local_28;
  
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)&(__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0 = 0;
  (__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FroxelParameters).FroxelToClipScaleBias.field0_0x0 + 4) = 0;
  (__return_storage_ptr__->FroxelParameters).FroxelToClipScaleBias.field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->Froxels = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->FroxelArgs = (FRDGBufferSRV *)0x0;
  uVar1 = *(undefined8 *)((longlong)&(this->SharedParameters).FroxelToViewScaleBias.field0_0x0 + 8);
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  *(undefined8 *)&(__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0 =
       *(undefined8 *)&(this->SharedParameters).FroxelToViewScaleBias.field0_0x0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FroxelParameters).FroxelToViewScaleBias.field0_0x0 + 8) =
       uVar1;
  uVar1 = *(undefined8 *)((longlong)&(this->SharedParameters).FroxelToClipScaleBias.field0_0x0 + 8);
  local_28._padding_ = 0;
  *(undefined8 *)&(__return_storage_ptr__->FroxelParameters).FroxelToClipScaleBias.field0_0x0 =
       *(undefined8 *)&(this->SharedParameters).FroxelToClipScaleBias.field0_0x0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->FroxelParameters).FroxelToClipScaleBias.field0_0x0 + 8) =
       uVar1;
  fVar2 = (this->SharedParameters).FroxelRecLog2DepthScale1;
  fVar3 = (this->SharedParameters).FroxelRecNearScale;
  (__return_storage_ptr__->FroxelParameters).FroxelClipToViewScale.field0_0x0 =
       (this->SharedParameters).FroxelClipToViewScale.field0_0x0;
  (__return_storage_ptr__->FroxelParameters).FroxelRecLog2DepthScale1 = fVar2;
  (__return_storage_ptr__->FroxelParameters).FroxelRecNearScale = fVar3;
  fVar2 = (this->SharedParameters).FroxelNear;
  fVar3 = (this->SharedParameters).FroxelViewToClipTransformScale;
  fVar4 = (this->SharedParameters).FroxelClipToViewTransformScale;
  (__return_storage_ptr__->FroxelParameters).FroxelDepthScale1 =
       (this->SharedParameters).FroxelDepthScale1;
  (__return_storage_ptr__->FroxelParameters).FroxelNear = fVar2;
  (__return_storage_ptr__->FroxelParameters).FroxelViewToClipTransformScale = fVar3;
  (__return_storage_ptr__->FroxelParameters).FroxelClipToViewTransformScale = fVar4;
  fVar2 = (this->SharedParameters).FroxelRadius;
  fVar3 = (this->SharedParameters).FroxelInvRadius;
  uVar5 = (this->SharedParameters).bFroxelIsOrtho;
  (__return_storage_ptr__->FroxelParameters).FroxelClipToViewTransformBias =
       (this->SharedParameters).FroxelClipToViewTransformBias;
  (__return_storage_ptr__->FroxelParameters).FroxelRadius = fVar2;
  (__return_storage_ptr__->FroxelParameters).FroxelInvRadius = fVar3;
  (__return_storage_ptr__->FroxelParameters).bFroxelIsOrtho = uVar5;
  uVar5 = (this->SharedParameters).FroxelArgsStride;
  uVar1 = *(undefined8 *)&(this->SharedParameters).field_0x58;
  (__return_storage_ptr__->FroxelParameters).FroxelArgsOffset =
       (this->SharedParameters).FroxelArgsOffset;
  (__return_storage_ptr__->FroxelParameters).FroxelArgsStride = uVar5;
  *(undefined8 *)&(__return_storage_ptr__->FroxelParameters).field_0x58 = uVar1;
  local_28.Buffer = this->FroxelsRDG;
  local_28._padding_._0_1_ = 0;
  if ((((local_28.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  pFVar6 = FRDGBuilder::CreateSRV(param_1,&local_28);
  __return_storage_ptr__->Froxels = pFVar6;
  local_28.Buffer = this->FroxelArgsRDG;
  local_28._padding_._0_1_ = 0;
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_ = 0;
  if ((((local_28.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  pFVar6 = FRDGBuilder::CreateSRV(param_1,&local_28);
  __return_storage_ptr__->FroxelArgs = pFVar6;
  return __return_storage_ptr__;
}

// FViewData @ 1457c17c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FViewData * __thiscall FVirtualShadowMapArrayCacheManager::FViewData::FViewData(FViewData *this)

{
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)this,0x400,L"Shadow.Virtual.CacheManager.ViewState",true);
  return this;
}

