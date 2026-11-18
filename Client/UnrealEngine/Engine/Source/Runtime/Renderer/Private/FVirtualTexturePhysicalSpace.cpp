// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// FVirtualTexturePhysicalSpace @ 1458cd090

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVirtualTexturePhysicalSpace * __thiscall
FVirtualTexturePhysicalSpace::FVirtualTexturePhysicalSpace
          (FVirtualTexturePhysicalSpace *this,ushort param_1,FVTPhysicalSpaceDescription *param_2,
          FVTPhysicalSpaceDescriptionExt *param_3)

{
  int *piVar1;
  int *piVar2;
  uchar uVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  undefined8 uVar7;
  uchar uVar8;
  TEnumAsByte<EPixelFormat> TVar9;
  TEnumAsByte<EPixelFormat> TVar10;
  bool bVar11;
  undefined3 uVar12;
  int iVar13;
  size_t sVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  int iVar17;
  wchar_t *pwVar18;
  FScriptContainerElement *pFVar19;
  FString *pFVar20;
  FScriptContainerElement *pFVar21;
  FString local_48;
  FString local_38;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  pFVar21 = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FVirtualTexturePhysicalSpace__6B_;
  uVar3 = param_2->Dimensions;
  uVar8 = param_2->NumLayers;
  TVar9.Value = param_2->Format[0].Value;
  TVar10.Value = param_2->Format[1].Value;
  uVar7 = *(undefined8 *)(param_2->Format + 2);
  (this->Description).TileSize = param_2->TileSize;
  (this->Description).Dimensions = uVar3;
  (this->Description).NumLayers = uVar8;
  (this->Description).Format[0] = (TEnumAsByte<EPixelFormat>)TVar9.Value;
  (this->Description).Format[1] = (TEnumAsByte<EPixelFormat>)TVar10.Value;
  *(undefined8 *)((this->Description).Format + 2) = uVar7;
  *(undefined8 *)((this->Description).bHasLayerSrgbView + 2) =
       *(undefined8 *)(param_2->bHasLayerSrgbView + 2);
  iVar13 = param_3->PoolCount;
  bVar11 = param_3->bEnableResidencyMipMapBias;
  uVar12 = *(undefined3 *)&param_3->field_0x9;
  iVar17 = param_3->ResidencyMipMapBiasGroup;
  (this->DescriptionExt).TileWidthHeight = param_3->TileWidthHeight;
  (this->DescriptionExt).PoolCount = iVar13;
  (this->DescriptionExt).bEnableResidencyMipMapBias = bVar11;
  *(undefined3 *)&(this->DescriptionExt).field_0x9 = uVar12;
  (this->DescriptionExt).ResidencyMipMapBiasGroup = iVar17;
  (this->FormatString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FormatString).Data.ArrayNum = 0;
  (this->FormatString).Data.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Pool,4000);
  (this->Pool).FreeHeap.HeapNum = 0;
  (this->Pool).FreeHeap.HeapSize = 0;
  (this->Pool).FreeHeap.IndexSize = 0;
  (this->Pool).FreeHeap.Heap = (ushort *)0x0;
  (this->Pool).FreeHeap.Keys = (uint *)0x0;
  (this->Pool).FreeHeap.HeapIndexes = (ushort *)0x0;
  FHashTable::FHashTable(&(this->Pool).PageHash,0x4000,0);
  FHashTable::FHashTable(&(this->Pool).ProducerToPageIndex,0x400,0);
  (this->Pool).Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pool).NumPagesAllocated = 1;
  (this->Pool).Pages.ArrayNum = 0;
  (this->Pool).Pages.ArrayMax = 0;
  (this->Pool).PageMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pool).PageMapping.ArrayNum = 0;
  (this->Pool).PageMapping.ArrayMax = 0;
  (this->Pool).NumPages = 0;
  (this->Pool).NumPagesMapped = 0;
  this->PooledRenderTarget[0].Reference = (IPooledRenderTarget *)0x0;
  this->PooledRenderTarget[1].Reference = (IPooledRenderTarget *)0x0;
  this->PooledRenderTarget[2].Reference = (IPooledRenderTarget *)0x0;
  this->PooledRenderTarget[3].Reference = (IPooledRenderTarget *)0x0;
  this->PooledRenderTarget[4].Reference = (IPooledRenderTarget *)0x0;
  this->PooledRenderTarget[5].Reference = (IPooledRenderTarget *)0x0;
  this->PooledRenderTarget[6].Reference = (IPooledRenderTarget *)0x0;
  this->PooledRenderTarget[7].Reference = (IPooledRenderTarget *)0x0;
  this->TextureSRV[0].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV[1].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV[2].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV[3].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV[4].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV[5].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV[6].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV[7].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV_SRGB[0].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV_SRGB[1].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV_SRGB[2].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV_SRGB[3].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV_SRGB[4].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV_SRGB[5].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV_SRGB[6].Reference = (FRHIShaderResourceView *)0x0;
  this->TextureSRV_SRGB[7].Reference = (FRHIShaderResourceView *)0x0;
  this->PooledRenderTargetDebugNames[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PooledRenderTargetDebugNames[0].Data.ArrayNum = 0;
  this->PooledRenderTargetDebugNames[0].Data.ArrayMax = 0;
  this->PooledRenderTargetDebugNames[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PooledRenderTargetDebugNames[1].Data.ArrayNum = 0;
  this->PooledRenderTargetDebugNames[1].Data.ArrayMax = 0;
  this->PooledRenderTargetDebugNames[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PooledRenderTargetDebugNames[2].Data.ArrayNum = 0;
  this->PooledRenderTargetDebugNames[2].Data.ArrayMax = 0;
  this->PooledRenderTargetDebugNames[3].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PooledRenderTargetDebugNames[3].Data.ArrayNum = 0;
  this->PooledRenderTargetDebugNames[3].Data.ArrayMax = 0;
  this->PooledRenderTargetDebugNames[4].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PooledRenderTargetDebugNames[4].Data.ArrayNum = 0;
  this->PooledRenderTargetDebugNames[4].Data.ArrayMax = 0;
  this->PooledRenderTargetDebugNames[5].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PooledRenderTargetDebugNames[5].Data.ArrayNum = 0;
  this->PooledRenderTargetDebugNames[5].Data.ArrayMax = 0;
  this->PooledRenderTargetDebugNames[6].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PooledRenderTargetDebugNames[6].Data.ArrayNum = 0;
  this->PooledRenderTargetDebugNames[6].Data.ArrayMax = 0;
  this->PooledRenderTargetDebugNames[7].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->PooledRenderTargetDebugNames[7].Data.ArrayNum = 0;
  this->PooledRenderTargetDebugNames[7].Data.ArrayMax = 0;
  this->ID = param_1;
  this->NumRefs = 0;
  this->NumResourceRefs = 0;
  piVar1 = &(this->VisibleHistory).Elements.ArrayNum;
  this->ResidencyMipMapBias = 0.0;
  this->LastFrameOversubscribed = 0;
  piVar2 = &(this->VisibleHistory).Elements.ArrayMax;
  *piVar1 = 0;
  for (lVar6 = 0x3f; 0x3ffUL >> lVar6 == 0; lVar6 = lVar6 + -1) {
  }
  (this->VisibleHistory).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  iVar17 = 1 << ((byte)lVar6 & 0x1f);
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar17,&(this->VisibleHistory).Elements.AllocatorInstance,piVar1,piVar2);
  memset((this->VisibleHistory).Elements.AllocatorInstance.Data + (longlong)iVar13 * 4,0,
         (longlong)iVar17 << 2);
  piVar1 = &(this->LockedHistory).Elements.ArrayNum;
  for (lVar6 = 0x3f; 0x3ffUL >> lVar6 == 0; lVar6 = lVar6 + -1) {
  }
  (this->VisibleHistory).IndexMask = (this->VisibleHistory).Elements.ArrayNum - 1;
  piVar2 = &(this->LockedHistory).Elements.ArrayMax;
  iVar17 = 1 << ((byte)lVar6 & 0x1f);
  *piVar1 = 0;
  (this->LockedHistory).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar17,&(this->LockedHistory).Elements.AllocatorInstance,piVar1,piVar2);
  memset((this->LockedHistory).Elements.AllocatorInstance.Data + (longlong)iVar13 * 4,0,
         (longlong)iVar17 << 2);
  piVar1 = &(this->MipMapBiasHistory).Elements.ArrayNum;
  for (lVar6 = 0x3f; 0x3ffUL >> lVar6 == 0; lVar6 = lVar6 + -1) {
  }
  (this->LockedHistory).IndexMask = (this->LockedHistory).Elements.ArrayNum - 1;
  piVar2 = &(this->MipMapBiasHistory).Elements.ArrayMax;
  iVar17 = 1 << ((byte)lVar6 & 0x1f);
  *piVar1 = 0;
  (this->MipMapBiasHistory).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar17,&(this->MipMapBiasHistory).Elements.AllocatorInstance,piVar1,piVar2
                     );
  memset((this->MipMapBiasHistory).Elements.AllocatorInstance.Data + (longlong)iVar13 * 4,0,
         (longlong)iVar17 << 2);
  (this->MipMapBiasHistory).IndexMask = (this->MipMapBiasHistory).Elements.ArrayNum - 1;
  iVar13 = (this->DescriptionExt).TileWidthHeight;
  this->HistoryIndex = 0;
  FTexturePagePool::Initialize(&this->Pool,iVar13 * iVar13);
  uVar3 = (this->Description).NumLayers;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = (undefined1)GMaxRHIFeatureLevel;
  bVar4 = 0;
  pFVar19 = pFVar21;
  if (uVar3 != '\0') {
    do {
      pwVar18 = GPixelFormats[(byte)(pFVar19 + 0x26)[(longlong)this]].Name;
      sVar14 = wcslen(pwVar18);
      ::FString::AppendChars(&this->FormatString,pwVar18,(int)sVar14);
      if (GRHIGlobals.SupportsTextureViews == false) {
        pwVar18 = L" (Linear)";
        if ((pFVar19 + 0x2e)[(longlong)this] != (FScriptContainerElement)0x0) {
          pwVar18 = L" (sRGB)";
        }
        sVar14 = wcslen(pwVar18);
        ::FString::AppendChars(&this->FormatString,pwVar18,(int)sVar14);
      }
      uVar15 = (int)pFVar19 + 1;
      if (uVar15 < (this->Description).NumLayers) {
        ::FString::AppendChars(&this->FormatString,L", ",2);
      }
      bVar4 = (this->Description).NumLayers;
      pFVar19 = (FScriptContainerElement *)(ulonglong)uVar15;
    } while (uVar15 < bVar4);
  }
  pFVar19 = pFVar21;
  if (bVar4 != 0) {
    do {
      if (bVar4 < 2) {
        ::FString::PrintfImpl(&local_38,L"VirtualTexture_Physical (%s)");
        pFVar20 = this->PooledRenderTargetDebugNames + (longlong)pFVar19;
        FVar16.Data = local_38.Data.AllocatorInstance.Data;
        if (pFVar20 != &local_38) {
          pFVar5 = (pFVar20->Data).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (pFVar20->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          this->PooledRenderTargetDebugNames[(longlong)pFVar19].Data.ArrayNum =
               local_38.Data.ArrayNum;
          this->PooledRenderTargetDebugNames[(longlong)pFVar19].Data.ArrayMax =
               local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar16.Data = (FScriptContainerElement *)0x0;
        }
      }
      else {
        ::FString::PrintfImpl(&local_48,L"VirtualTexture_Physical (%s) %d/%d");
        pFVar20 = this->PooledRenderTargetDebugNames + (longlong)pFVar19;
        FVar16.Data = local_48.Data.AllocatorInstance.Data;
        if (pFVar20 != &local_48) {
          pFVar5 = (pFVar20->Data).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (pFVar20->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
          this->PooledRenderTargetDebugNames[(longlong)pFVar19].Data.ArrayNum =
               local_48.Data.ArrayNum;
          this->PooledRenderTargetDebugNames[(longlong)pFVar19].Data.ArrayMax =
               local_48.Data.ArrayMax;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar16.Data = pFVar21;
        }
      }
      if (FVar16.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar16.Data);
      }
      bVar4 = (this->Description).NumLayers;
      uVar15 = (int)pFVar19 + 1;
      pFVar19 = (FScriptContainerElement *)(ulonglong)uVar15;
    } while (uVar15 < bVar4);
  }
  return this;
}

// ~FVirtualTexturePhysicalSpace @ 1458d1250

void __thiscall
FVirtualTexturePhysicalSpace::~FVirtualTexturePhysicalSpace(FVirtualTexturePhysicalSpace *this)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FString *pFVar5;
  TRefCountPtr<FRHIShaderResourceView> *pTVar6;
  longlong lVar7;
  
  this->_padding_ = (longlong)&___7FVirtualTexturePhysicalSpace__6B_;
  pFVar3 = (this->MipMapBiasHistory).Elements.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->LockedHistory).Elements.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->VisibleHistory).Elements.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  lVar4 = 8;
  pFVar5 = (FString *)&this->ID;
  lVar7 = 8;
  do {
    pFVar3 = pFVar5[-1].Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar7 = lVar7 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  } while (lVar7 != 0);
  pFVar5 = this->PooledRenderTargetDebugNames;
  lVar7 = 8;
  do {
    pTVar6 = (TRefCountPtr<FRHIShaderResourceView> *)(pFVar5 + -1);
    pFVar5 = (FString *)((TRefCountPtr<FRHIShaderResourceView> *)(pFVar5 + -1) + 1);
    lVar7 = lVar7 + -1;
    if (pTVar6[1].Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pTVar6[1].Reference);
    }
  } while (lVar7 != 0);
  pTVar6 = this->TextureSRV_SRGB;
  lVar7 = 8;
  do {
    pTVar1 = pTVar6 + -1;
    pTVar6 = pTVar6 + -1;
    lVar7 = lVar7 + -1;
    if (pTVar1->Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pTVar1->Reference);
    }
  } while (lVar7 != 0);
  pTVar6 = this->TextureSRV;
  do {
    pTVar2 = (TRefCountPtr<IPooledRenderTarget> *)(pTVar6 + -1);
    pTVar6 = pTVar6 + -1;
    lVar4 = lVar4 + -1;
    if (pTVar2->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar2->Reference->_padding_ + 0x38))();
    }
  } while (lVar4 != 0);
  FTexturePagePool::~FTexturePagePool(&this->Pool);
  pFVar3 = (this->FormatString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// DrawResidencyGraph @ 1458ea620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FVirtualTexturePhysicalSpace::DrawResidencyGraph
          (FVirtualTexturePhysicalSpace *this,FCanvas *param_1,TBox2<double> *param_2,bool param_3)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  HHitProxy *pHVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UFont *pUVar11;
  size_t sVar12;
  FBatchedElements *this_00;
  uint uVar13;
  FHitProxyId FVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  FScriptContainerElement *local_348;
  undefined4 uStack_33c;
  FString local_338;
  TVector2<double>_u_0 local_328;
  wchar_t *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  wchar_t *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  wchar_t *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  FLinearColor_u_0 local_2e8;
  FLinearColor_u_0 local_2d8;
  FLinearColor_u_0 local_2c8;
  FLinearColor_u_0 local_2b8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_260;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  FLinearColor_u_0 local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  FDepthFieldGlowInfo local_168;
  FCanvasTileItem local_128;
  
  local_1b8._0_8_ = ___xmm_3f333333000000000000000000000000;
  local_1b8._8_8_ = _UNK_15104e498;
  local_2d8._0_8_ = ___xmm_3f8000003dcccccd3dcccccd3f4ccccd;
  local_2d8._8_8_ = _UNK_15104e4a8;
  local_2b8._0_8_ = ___xmm_3f8000003dcccccd3f4ccccd3dcccccd;
  local_2b8._8_8_ = _UNK_15104e4b8;
  local_328._s_0.X = (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
  local_2e8._0_8_ = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
  local_2e8._8_8_ = _UNK_1509252c8;
  local_328._s_0.Y = (param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y;
  local_2c8._0_8_ = ___xmm_3f8000003dcccccd3f4ccccd3f4ccccd;
  local_2c8._8_8_ = _UNK_15104e4c8;
  FCanvasTileItem::FCanvasTileItem
            (&local_128,&param_2->Min,(TVector2<double> *)&local_328._s_0,
             (FLinearColor *)&local_1b8._s_0);
  local_128._padding_._4_4_ = 0xb;
  FCanvas::DrawItem(param_1,(FCanvasItem *)&local_128);
  GetSizeInBytes(this);
  ::FString::PrintfImpl(&local_338,L"%s (%dPages, %dMB)");
  pUVar11 = UEngine::GetSmallFont();
  if (local_338.Data.ArrayNum == 0) {
    local_348 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    iVar9 = 0;
    local_348 = local_338.Data.AllocatorInstance.Data;
    if (local_338.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1458ea77f;
  }
  sVar12 = wcslen((wchar_t *)local_348);
  iVar9 = (int)sVar12;
LAB_1458ea77f:
  dVar3 = _UNK_15104e4d8;
  dVar7 = ___xmm_40240000000000004024000000000000;
  local_1a8._12_4_ = uStack_33c;
  local_1a8.Size = iVar9;
  local_1a8.DataPtr = (wchar_t *)local_348;
  FCanvas::DrawShadowedString
            (param_1,(param_2->Min).field0_0x0._s_0.X + ___xmm_40240000000000004024000000000000,
             (param_2->Min).field0_0x0._s_0.Y,&local_1a8,pUVar11,&FLinearColor::White,
             &FLinearColor::Black);
  if (param_3) {
    pUVar11 = UEngine::GetSmallFont();
    pdVar1 = &(param_2->Max).field0_0x0._s_0.Y;
    local_318 = L"Page Residency";
    uStack_310 = 0xe;
    local_198._12_4_ = uStack_30c;
    local_198.Size = 0xe;
    local_198.DataPtr = L"Page Residency";
    FCanvas::DrawShadowedString
              (param_1,(param_2->Min).field0_0x0._s_0.X,(param_2->Max).field0_0x0._s_0.Y + dVar7,
               &local_198,pUVar11,(FLinearColor *)&local_2d8._s_0,&FLinearColor::Black);
    pUVar11 = UEngine::GetSmallFont();
    local_308 = L"MipMap Bias";
    uStack_300 = 0xb;
    local_188._12_4_ = uStack_2fc;
    local_188.Size = 0xb;
    local_188.DataPtr = L"MipMap Bias";
    FCanvas::DrawShadowedString
              (param_1,(param_2->Min).field0_0x0._s_0.X + __real_4059000000000000,*pdVar1 + dVar7,
               &local_188,pUVar11,(FLinearColor *)&local_2b8._s_0,&FLinearColor::Black);
    pUVar11 = UEngine::GetSmallFont();
    local_2f8 = L"LockedPage Residency";
    uStack_2f0 = 0x14;
    local_178._12_4_ = uStack_2ec;
    local_178.Size = 0x14;
    local_178.DataPtr = L"LockedPage Residency";
    FCanvas::DrawShadowedString
              (param_1,(param_2->Min).field0_0x0._s_0.X + __real_4066800000000000,*pdVar1 + dVar7,
               &local_178,pUVar11,(FLinearColor *)&local_2c8._s_0,&FLinearColor::Black);
  }
  dVar16 = (param_2->Min).field0_0x0._s_0.Y;
  uVar4 = this->HistoryIndex;
  (param_2->Min).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X + dVar7;
  (param_2->Min).field0_0x0._s_0.Y = dVar16 + dVar3;
  pdVar1 = &(param_2->Max).field0_0x0._s_0.Y;
  dVar3 = *pdVar1;
  dVar16 = (param_2->Max).field0_0x0._s_0.X - dVar7;
  (param_2->Max).field0_0x0._s_0.X = dVar16;
  (param_2->Max).field0_0x0._s_0.Y = dVar3 - dVar7;
  uVar10 = (uint)(longlong)(dVar16 - (param_2->Min).field0_0x0._s_0.X);
  uVar15 = 0x200;
  if (uVar10 < 0x200) {
    uVar15 = uVar10;
  }
  pHVar5 = (param_1->CurrentHitProxy).Reference;
  if (uVar15 < uVar4) {
    uVar4 = uVar15;
  }
  if (pHVar5 == (HHitProxy *)0x0) {
    FVar14.Index = -1;
  }
  else {
    FVar14.Index = (pHVar5->Id).Index;
  }
  local_168.bEnableGlow = 0;
  local_168.GlowColor.field0_0x0._0_8_ = 0;
  local_168.GlowColor.field0_0x0._8_8_ = 0;
  local_168.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_168.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_168.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_168.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  this_00 = FCanvas::GetBatchedElements
                      (param_1,ET_Line,(FBatchedElementParameters *)0x0,(FTexture *)0x0,SE_BLEND_MAX
                       ,&local_168,true);
  FBatchedElements::AddReserveLines(this_00,uVar4 * 3 + 2,false,false);
  dVar7 = __real_3ff0000000000000;
  local_2a8._s_0.Y = (param_2->Min).field0_0x0._s_0.Y - __real_3ff0000000000000;
  local_2a8._s_0.X = (param_2->Min).field0_0x0._s_0.X - __real_3ff0000000000000;
  local_290._s_0.Y = *pdVar1;
  local_2a8._s_0.Z = 0.0;
  local_290._s_0.Z = 0.0;
  local_290._s_0.X = local_2a8._s_0.X;
  FBatchedElements::AddLine
            (this_00,(TVector<double> *)&local_290._s_0,(TVector<double> *)&local_2a8._s_0,
             (FLinearColor *)&local_2e8._s_0,FVar14,0.0,0.0,false);
  local_278._s_0.X = (param_2->Max).field0_0x0._s_0.X;
  local_278._s_0.Y = *pdVar1 - dVar7;
  local_260._s_0.X = (param_2->Min).field0_0x0._s_0.X;
  local_278._s_0.Z = 0.0;
  local_260._s_0.Z = 0.0;
  local_260._s_0.Y = local_278._s_0.Y;
  FBatchedElements::AddLine
            (this_00,(TVector<double> *)&local_260._s_0,(TVector<double> *)&local_278._s_0,
             (FLinearColor *)&local_2e8._s_0,FVar14,0.0,0.0,false);
  uVar15 = 0;
  if (uVar4 != 0) {
    do {
      uVar13 = (this->HistoryIndex - uVar4) + uVar15 & (this->VisibleHistory).IndexMask;
      uVar10 = 0;
      if ((int)uVar13 < (this->VisibleHistory).Elements.ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar2 = *(float *)((this->VisibleHistory).Elements.AllocatorInstance.Data +
                        (longlong)(int)uVar13 * 4);
      uVar13 = (this->HistoryIndex - uVar4) + 1 + uVar15 & (this->VisibleHistory).IndexMask;
      uVar10 = 0;
      if ((int)uVar13 < (this->VisibleHistory).Elements.ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      dVar3 = *pdVar1;
      dVar17 = dVar3 - (param_2->Min).field0_0x0._s_0.Y;
      dVar16 = (double)uVar15;
      local_230._s_0.X = dVar16 + (param_2->Min).field0_0x0._s_0.X;
      local_248._s_0.X = local_230._s_0.X + dVar7;
      local_248._s_0.Z = 0.0;
      local_248._s_0.Y =
           dVar3 - (double)*(float *)((this->VisibleHistory).Elements.AllocatorInstance.Data +
                                     (longlong)(int)uVar13 * 4) * dVar17;
      local_230._s_0.Z = 0.0;
      local_230._s_0.Y = dVar3 - (double)fVar2 * dVar17;
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_230._s_0,(TVector<double> *)&local_248._s_0,
                 (FLinearColor *)&local_2d8._s_0,FVar14,0.0,0.0,false);
      uVar13 = (this->HistoryIndex - uVar4) + uVar15 & (this->LockedHistory).IndexMask;
      uVar10 = 0;
      if ((int)uVar13 < (this->LockedHistory).Elements.ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar2 = *(float *)((this->LockedHistory).Elements.AllocatorInstance.Data +
                        (longlong)(int)uVar13 * 4);
      uVar13 = (this->HistoryIndex - uVar4) + 1 + uVar15 & (this->LockedHistory).IndexMask;
      uVar10 = 0;
      if ((int)uVar13 < (this->LockedHistory).Elements.ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      dVar3 = *pdVar1;
      local_200._s_0.X = dVar16 + (param_2->Min).field0_0x0._s_0.X;
      dVar17 = dVar3 - (param_2->Min).field0_0x0._s_0.Y;
      local_218._s_0.X = local_200._s_0.X + dVar7;
      local_218._s_0.Z = 0.0;
      local_200._s_0.Z = 0.0;
      local_218._s_0.Y =
           dVar3 - (double)*(float *)((this->LockedHistory).Elements.AllocatorInstance.Data +
                                     (longlong)(int)uVar13 * 4) * dVar17;
      local_200._s_0.Y = dVar3 - (double)fVar2 * dVar17;
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_200._s_0,(TVector<double> *)&local_218._s_0,
                 (FLinearColor *)&local_2c8._s_0,FVar14,0.0,0.0,false);
      uVar13 = (this->HistoryIndex - uVar4) + uVar15 & (this->MipMapBiasHistory).IndexMask;
      uVar10 = 0;
      if ((int)uVar13 < (this->MipMapBiasHistory).Elements.ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar2 = *(float *)((this->MipMapBiasHistory).Elements.AllocatorInstance.Data +
                        (longlong)(int)uVar13 * 4);
      uVar13 = (this->HistoryIndex - uVar4) + 1 + uVar15 & (this->MipMapBiasHistory).IndexMask;
      uVar10 = 0;
      if ((int)uVar13 < (this->MipMapBiasHistory).Elements.ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      dVar3 = *pdVar1;
      local_1d0._s_0.X = dVar16 + (param_2->Min).field0_0x0._s_0.X;
      dVar16 = dVar3 - (param_2->Min).field0_0x0._s_0.Y;
      local_1e8._s_0.X = local_1d0._s_0.X + dVar7;
      local_1e8._s_0.Z = 0.0;
      local_1e8._s_0.Y =
           dVar3 - (double)*(float *)((this->MipMapBiasHistory).Elements.AllocatorInstance.Data +
                                     (longlong)(int)uVar13 * 4) * dVar16;
      local_1d0._s_0.Z = 0.0;
      local_1d0._s_0.Y = dVar3 - (double)fVar2 * dVar16;
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_1d0._s_0,(TVector<double> *)&local_1e8._s_0,
                 (FLinearColor *)&local_2b8._s_0,FVar14,0.0,0.0,false);
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar4);
  }
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  return;
}

// FinalizeTextures @ 1458f6380

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTexturePhysicalSpace::FinalizeTextures
          (FVirtualTexturePhysicalSpace *this,FRDGBuilder *param_1,FRDGExternalAccessQueue *param_2)

{
  int *piVar1;
  FResource *pFVar2;
  int iVar3;
  FRDGTexture *pFVar4;
  TRefCountPtr<IPooledRenderTarget> *pTVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((this->Description).NumLayers != '\0') {
    pTVar5 = this->PooledRenderTarget;
    do {
      if ((pTVar5->Reference != (IPooledRenderTarget *)0x0) &&
         (pFVar4 = FRDGBuilder::FindExternalTexture
                             (param_1,(pTVar5->Reference->RenderTargetItem).TargetableTexture.
                                      Reference), pFVar4 != (FRDGTexture *)0x0)) {
        iVar3 = (param_2->Resources).ArrayNum;
        piVar1 = &(param_2->Resources).ArrayMax;
        if (iVar3 == *piVar1) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                            (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,
                             piVar1);
        }
        (param_2->Resources).ArrayNum = iVar3 + 1;
        pFVar2 = (param_2->Resources).AllocatorInstance.Data;
        pFVar2[iVar3].Resource = (FRDGViewableResource *)pFVar4;
        pFVar2[iVar3].Access = SRVMask;
        pFVar2[iVar3].Pipelines = Graphics;
      }
      iVar6 = iVar6 + 1;
      pTVar5 = pTVar5 + 1;
    } while (iVar6 < (int)(uint)(this->Description).NumLayers);
  }
  return;
}

// GetSizeInBytes @ 145903050

uint __thiscall FVirtualTexturePhysicalSpace::GetSizeInBytes(FVirtualTexturePhysicalSpace *this)

{
  ulong64 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  TEnumAsByte<EPixelFormat> *pTVar6;
  uint uVar7;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar2 = 0;
  uVar7 = (this->DescriptionExt).TileWidthHeight * (this->Description).TileSize;
  if ((this->Description).NumLayers != '\0') {
    pTVar6 = (this->Description).Format;
    uVar5 = uVar3;
    do {
      uVar1 = CalculateImageBytes(uVar7,uVar7,0,pTVar6->Value);
      uVar3 = uVar3 + uVar1;
      uVar2 = (uint)uVar3;
      pTVar6 = pTVar6 + 1;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)(uint)(this->Description).NumLayers);
  }
  return uVar2;
}

// GetTileSizeInBytes @ 1459081d0

uint __thiscall FVirtualTexturePhysicalSpace::GetTileSizeInBytes(FVirtualTexturePhysicalSpace *this)

{
  ulong64 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  TEnumAsByte<EPixelFormat> *pTVar6;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar2 = 0;
  if ((this->Description).NumLayers != '\0') {
    pTVar6 = (this->Description).Format;
    uVar5 = uVar3;
    do {
      uVar2 = (this->Description).TileSize;
      uVar1 = CalculateImageBytes(uVar2,uVar2,0,pTVar6->Value);
      uVar3 = uVar3 + uVar1;
      uVar2 = (uint)uVar3;
      pTVar6 = pTVar6 + 1;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)(uint)(this->Description).NumLayers);
  }
  return uVar2;
}

// InitRHI @ 14590cbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualTexturePhysicalSpace::InitRHI
          (FVirtualTexturePhysicalSpace *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  byte bVar2;
  FRHITexture *pFVar3;
  FRHIShaderResourceView *pFVar4;
  FName FVar5;
  code *pcVar6;
  void *pvVar7;
  FRHICommandListBase *pFVar8;
  FVirtualTexturePhysicalSpace *pFVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  FRHITextureDesc *pFVar13;
  longlong lVar14;
  ulong64 uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_TotalPhysicalMemory> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TIntPoint<int>_u_0 TVar18;
  TEnumAsByte<EPixelFormat> *pTVar19;
  uint uVar20;
  bool *pbVar21;
  EPixelFormat EVar22;
  uint uVar23;
  ETextureCreateFlags EVar25;
  EPixelFormat EVar26;
  ETextureCreateFlags EVar27;
  ulonglong uVar28;
  undefined1 auStackY_1e8 [32];
  int local_184;
  TRefCountPtr<FRHIShaderResourceView> *local_180;
  FLLMScope local_158;
  FLLMScope local_154;
  TRefCountPtr<FRHIShaderResourceView> local_150;
  TRefCountPtr<FRHIShaderResourceView> local_148;
  bool *local_140;
  FRHICommandListBase *local_138;
  FMemScope local_130;
  FMemScope local_128;
  FVirtualTexturePhysicalSpace *local_120;
  FName local_118;
  FStatMessage local_110;
  FName local_100;
  FPooledRenderTargetDesc local_f8;
  undefined1 local_98 [80];
  ulonglong local_48;
  ulonglong uVar24;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_184 = 0;
  uVar28 = 0;
  local_138 = param_1;
  local_120 = this;
  if ((this->Description).NumLayers != '\0') {
    pbVar21 = (this->Description).bHasLayerSrgbView;
    local_180 = this->TextureSRV;
    do {
      pFVar9 = local_120;
      EVar26 = ((TEnumAsByte<EPixelFormat> *)(pbVar21 + -8))->Value;
      local_140 = pbVar21;
      if ((EVar26 == PF_B8G8R8A8) &&
         (bVar10 = IsOpenGLPlatform((FStaticShaderPlatform)GMaxRHIShaderPlatform), bVar10)) {
        uVar28 = (ulonglong)GMaxRHIShaderPlatform;
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar28].bContainsValidPlatformInfo == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid(Platform)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                ,0xe2,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar28].MaxFeatureLevel == ES3_1) {
          EVar26 = PF_R8G8B8A8;
        }
      }
      bVar10 = IsBlockCompressedFormat(EVar26);
      EVar22 = EVar26;
      if ((((bVar10) || (bVar10 = IsASTCBlockCompressedTextureFormat(EVar26), bVar10)) ||
          (EVar26 == PF_ETC2_RGB)) ||
         (((EVar26 == PF_ETC2_RGBA || (EVar26 == PF_ETC2_R11_EAC)) || (EVar26 == PF_ETC2_RG11_EAC)))
         ) {
        if (GRHIGlobals.SupportsUAVFormatAliasing == false) goto LAB_14590cd25;
        switch(EVar26) {
        case PF_DXT1:
        case PF_BC4:
        case PF_ETC1:
        case PF_ETC2_RGB:
        case PF_ETC2_R11_EAC:
          EVar22 = PF_R32G32_UINT;
          break;
        case PF_DXT3:
        case PF_DXT5:
        case PF_BC5:
        case PF_ETC2_RGBA:
        case PF_BC6H:
        case PF_BC7:
        case PF_ETC2_RG11_EAC:
          EVar22 = PF_R32G32B32A32_UINT;
          break;
        default:
        }
LAB_14590cd28:
        cVar11 = *pbVar21;
        if ((EVar26 != PF_R5G6B5_UNORM) && (EVar26 != PF_B5G5R5A1_UNORM)) goto LAB_14590cd37;
LAB_14590cd41:
        bVar10 = false;
      }
      else {
        if ((EVar26 == PF_B5G5R5A1_UNORM) || (EVar26 == PF_R5G6B5_UNORM)) {
LAB_14590cd25:
          EVar22 = PF_Unknown;
          goto LAB_14590cd28;
        }
        cVar11 = *pbVar21;
LAB_14590cd37:
        if (EVar26 == PF_G16) goto LAB_14590cd41;
        bVar10 = true;
      }
      if ((cVar11 == '\0') || (EVar25 = SRGB, !bVar10)) {
        EVar25 = None;
      }
      iVar12 = (pFVar9->Description).TileSize * (pFVar9->DescriptionExt).TileWidthHeight;
      EVar27 = UAV|ShaderResource;
      if (EVar22 == PF_Unknown) {
        EVar27 = ShaderResource;
      }
      TVar18._s_0.Y = iVar12;
      TVar18._s_0.X = iVar12;
      if (iVar12 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InExtent.X",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                            ,0x6b,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InExtent.Y",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                            ,0x6c,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_f8.Flags = EVar27 | EVar25;
      local_f8.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
      local_f8.UAVFormat = PF_Unknown;
      local_f8.DebugName = L"UnknownTexture2D";
      local_f8.NumSamples = '\x01';
      local_f8.FastVRAMPercentage = 0xff;
      local_f8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
      local_f8.AliasableFormats.ArrayNum = 0;
      local_f8.AliasableFormats.ArrayMax = 1;
      local_f8.Depth = 0;
      local_f8.ArraySize = 1;
      local_f8.field13_0x58.PackedBits = '\0';
      local_f8.NumMips = '\x01';
      local_f8.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
      local_f8.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
      local_f8.Format = EVar26;
      local_f8.Extent.field0_0x0 = TVar18;
      if (((iVar12 == 0) || (iVar12 == 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewDesc.Is2DTexture()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                              ,0x7a,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_f8.UAVFormat = PF_Unknown;
      if (EVar22 != PF_Unknown) {
        local_f8.UAVFormat = EVar22;
      }
      pFVar13 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_98,&local_f8);
      pFVar8 = local_138;
      FRenderTargetPool::FindFreeElement
                ((FRenderTargetPool *)&GRenderTargetPool,local_138,pFVar13,
                 (TRefCountPtr<IPooledRenderTarget> *)(local_180 + -8),L"VirtualTexture_Physical");
      if ((void *)local_98._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._64_8_);
      }
      pFVar3 = (((TRefCountPtr<IPooledRenderTarget> *)(local_180 + -8))->Reference->RenderTargetItem
               ).TargetableTexture.Reference;
      if ((pFVar3 == (FRHITexture *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TargetTexture",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,0xbb1,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      cVar11 = *(char *)(lVar14 + 0x32);
      if (((cVar11 != '\0') && (cVar11 != '\x01')) &&
         ((cVar11 != '\x02' &&
          (((cVar11 != '\x03' && (cVar11 != '\x04')) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                ,0xba1,L""), bVar10)))))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = ThreadLocalStoragePointer;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name983,L"RHIMisc/CreateShaderResourceView");
        _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (&local_158,
                 `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                 ::__l2::LLMScope_Name983,false,None,Default,true);
      FMemScope::FMemScope
                (&local_130,
                 &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                  ::__l2::LLMScope_Name983,true);
      lVar14 = (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3);
      if ((lVar14 != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Texture->GetTextureReference() == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x3d8,
                              L"Creating a shader resource view of an FRHITextureReference is not supported."
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_150);
      FMemScope::~FMemScope(&local_130);
      FLLMScope::~FLLMScope(&local_158);
      uVar24 = 0;
      if (local_180 == &local_150) {
LAB_14590d0a3:
        if (local_150.Reference != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_150.Reference);
        }
      }
      else {
        pFVar4 = local_180->Reference;
        local_180->Reference = local_150.Reference;
        local_150.Reference = (FRHIShaderResourceView *)0x0;
        if (pFVar4 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar4);
          goto LAB_14590d0a3;
        }
      }
      lVar14 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      cVar11 = *(char *)(lVar14 + 0x32);
      if (((((cVar11 != '\0') && (cVar11 != '\x01')) && (cVar11 != '\x02')) &&
          ((cVar11 != '\x03' && (cVar11 != '\x04')))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,0xba1,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)pvVar7 + (ulonglong)_tls_index * 8) + 0x9d4c) <
           `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name983,L"RHIMisc/CreateShaderResourceView");
        _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (&local_154,
                 `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                 ::__l2::LLMScope_Name983,false,None,Default,true);
      FMemScope::FMemScope
                (&local_128,
                 &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                  ::__l2::LLMScope_Name983,true);
      lVar14 = (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3);
      if ((lVar14 != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Texture->GetTextureReference() == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x3d8,
                              L"Creating a shader resource view of an FRHITextureReference is not supported."
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_148,pFVar8,pFVar3);
      FMemScope::~FMemScope(&local_128);
      FLLMScope::~FLLMScope(&local_154);
      pTVar1 = local_180 + 8;
      if (pTVar1 == &local_148) {
LAB_14590d251:
        if (local_148.Reference != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_148.Reference);
        }
      }
      else {
        pFVar4 = pTVar1->Reference;
        pTVar1->Reference = local_148.Reference;
        local_148.Reference = (FRHIShaderResourceView *)0x0;
        if (pFVar4 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar4);
          goto LAB_14590d251;
        }
      }
      if (local_f8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_f8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      pFVar9 = local_120;
      local_180 = local_180 + 1;
      local_184 = local_184 + 1;
      pbVar21 = local_140 + 1;
      bVar2 = (local_120->Description).NumLayers;
    } while (local_184 < (int)(uint)bVar2);
    uVar20 = (local_120->Description).TileSize * (local_120->DescriptionExt).TileWidthHeight;
    uVar28 = uVar24;
    local_140 = pbVar21;
    if (bVar2 != 0) {
      pTVar19 = (local_120->Description).Format;
      do {
        uVar15 = CalculateImageBytes(uVar20,uVar20,0,pTVar19->Value);
        uVar28 = uVar28 + uVar15;
        pTVar19 = pTVar19 + 1;
        uVar23 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uVar23;
      } while ((int)uVar23 < (int)(uint)(pFVar9->Description).NumLayers);
    }
  }
  if ((int)uVar28 != 0) {
    FVar17 = StatPtr_STAT_TotalPhysicalMemory;
    if (StatPtr_STAT_TotalPhysicalMemory ==
        (FThreadSafeStaticStat<FStat_STAT_TotalPhysicalMemory>)0x0) {
      pFVar16 = ::FName::FName(&local_100,"STAT_TotalPhysicalMemory");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_TotalPhysicalMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPhysicalMemory,*pFVar16,
                          L"Total Physical Memory","STATGROUP_VirtualTextureMemory",
                          "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                          false,MCR_GPU);
    }
    FVar5 = *(FName *)FVar17;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_110.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_118 = FVar5;
      local_110.StatData.Pad = (uchar  [8])(uVar28 & 0xffffffff);
      local_110.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_110);
      FStatsTrace::Add(&local_118,uVar28 & 0xffffffff);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ReleaseRHI @ 145916850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTexturePhysicalSpace::ReleaseRHI(FVirtualTexturePhysicalSpace *this)

{
  FName FVar1;
  FRHIShaderResourceView *pFVar2;
  uint uVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_TotalPhysicalMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TRefCountPtr<FRHIShaderResourceView> *pTVar6;
  uchar auVar7 [8];
  int iVar8;
  FName local_res8;
  FStatMessage local_28;
  
  uVar3 = GetSizeInBytes(this);
  auVar7[4] = '\0';
  auVar7[5] = '\0';
  auVar7[6] = '\0';
  auVar7[7] = '\0';
  auVar7[0] = (char)uVar3;
  auVar7[1] = (char)(uVar3 >> 8);
  auVar7[2] = (char)(uVar3 >> 0x10);
  auVar7[3] = (char)(uVar3 >> 0x18);
  if (uVar3 != 0) {
    FVar5 = StatPtr_STAT_TotalPhysicalMemory;
    if (StatPtr_STAT_TotalPhysicalMemory ==
        (FThreadSafeStaticStat<FStat_STAT_TotalPhysicalMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_TotalPhysicalMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_TotalPhysicalMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalPhysicalMemory,*pFVar4,
                         L"Total Physical Memory","STATGROUP_VirtualTextureMemory",
                         "STATCAT_Advanced",L"Virtual Texture Memory",true,false,ST_int64,false,
                         false,MCR_GPU);
    }
    FVar1 = *(FName *)FVar5;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar7;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar7);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  iVar8 = 0;
  if ((this->Description).NumLayers != '\0') {
    pTVar6 = this->TextureSRV_SRGB;
    do {
      FRenderTargetPool::FreeUnusedResource
                ((FRenderTargetPool *)&GRenderTargetPool,this->PooledRenderTarget + iVar8);
      pFVar2 = pTVar6[-8].Reference;
      if (pFVar2 != (FRHIShaderResourceView *)0x0) {
        pTVar6[-8].Reference = (FRHIShaderResourceView *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
      pFVar2 = pTVar6->Reference;
      if (pFVar2 != (FRHIShaderResourceView *)0x0) {
        pTVar6->Reference = (FRHIShaderResourceView *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
      iVar8 = iVar8 + 1;
      pTVar6 = pTVar6 + 1;
    } while (iVar8 < (int)(uint)(this->Description).NumLayers);
  }
  return;
}

// UpdateCsvStats @ 145928a30

void __thiscall FVirtualTexturePhysicalSpace::UpdateCsvStats(FVirtualTexturePhysicalSpace *this)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  FCsvProfiler *this_00;
  uint uVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  this_00 = FCsvProfiler::Get();
  bVar3 = FCsvProfiler::IsCapturing_Renderthread(this_00);
  if (bVar3) {
    ::FString::PrintfImpl(local_38,L"%s_%d/LockedPages");
    uVar6 = this->HistoryIndex & (this->LockedHistory).IndexMask;
    uVar4 = 0;
    if ((int)uVar6 < (this->LockedHistory).Elements.ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = _GCsvCategory_VirtualTexturing.Index;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38[0].Data.ArrayNum != 0) {
      FVar5.Data = local_38[0].Data.AllocatorInstance.Data;
    }
    fVar1 = *(float *)((this->LockedHistory).Elements.AllocatorInstance.Data +
                      (longlong)(int)uVar6 * 4);
    ::FName::FName(&local_res10,(wchar_t *)FVar5.Data);
    FCsvProfiler::RecordCustomStat(&local_res10,uVar4,fVar1,Set);
    ::FString::PrintfImpl(&local_48,L"%s_%d/VisiblePages");
    uVar6 = this->HistoryIndex & (this->VisibleHistory).IndexMask;
    uVar4 = 0;
    if ((int)uVar6 < (this->VisibleHistory).Elements.ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = _GCsvCategory_VirtualTexturing.Index;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    fVar1 = *(float *)((this->VisibleHistory).Elements.AllocatorInstance.Data +
                      (longlong)(int)uVar6 * 4);
    ::FName::FName(&local_res18,(wchar_t *)FVar5.Data);
    FCsvProfiler::RecordCustomStat(&local_res18,uVar4,fVar1,Set);
    ::FString::PrintfImpl(&local_58,L"%s_%d/MipBias");
    uVar6 = this->HistoryIndex & (this->MipMapBiasHistory).IndexMask;
    uVar4 = 0;
    if ((int)uVar6 < (this->MipMapBiasHistory).Elements.ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = _GCsvCategory_VirtualTexturing.Index;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar5.Data = local_58.Data.AllocatorInstance.Data;
    }
    fVar1 = *(float *)((this->MipMapBiasHistory).Elements.AllocatorInstance.Data +
                      (longlong)(int)uVar6 * 4);
    ::FName::FName(&local_res20,(wchar_t *)FVar5.Data);
    FCsvProfiler::RecordCustomStat(&local_res20,uVar4,fVar1,Set);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateResidencyTracking @ 145928ec0

void __thiscall
FVirtualTexturePhysicalSpace::UpdateResidencyTracking
          (FVirtualTexturePhysicalSpace *this,uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  TConsoleVariableData<float> *pTVar7;
  TConsoleVariableData<float> *pTVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pTVar7 = CVarVTResidencyLockedUpperBound.Ref;
  bVar9 = IsInParallelRenderingThread();
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar8 = CVarVTResidencyLowerBound.Ref;
  fVar1 = pTVar7->ShadowedValue[1];
  bVar9 = IsInParallelRenderingThread();
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar7 = CVarVTResidencyUpperBound.Ref;
  fVar2 = pTVar8->ShadowedValue[1];
  bVar9 = IsInParallelRenderingThread();
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar8 = CVarVTResidencyAdjustmentRate.Ref;
  fVar3 = pTVar7->ShadowedValue[1];
  bVar9 = IsInParallelRenderingThread();
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar7 = CVarVTResidencyMaxMipMapBias.Ref;
  fVar4 = pTVar8->ShadowedValue[1];
  bVar9 = IsInParallelRenderingThread();
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar11 = (this->Pool).NumPages;
  fVar5 = pTVar7->ShadowedValue[1];
  uVar10 = 1;
  if (1 < uVar11) {
    uVar10 = uVar11;
  }
  fVar13 = __real_3f800000 / (float)(uVar10 - 1);
  fVar14 = (float)((uVar10 - (this->Pool).FreeHeap.HeapNum) - 1) * fVar13;
  uVar10 = VirtualTextureScalability::GetPageFreeThreshold();
  uVar11 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10;
  }
  uVar10 = param_1 - uVar11;
  if (param_1 <= uVar11) {
    uVar10 = 0;
  }
  uVar11 = FTexturePagePool::GetNumVisiblePages(&this->Pool,uVar10);
  fVar12 = this->ResidencyMipMapBias;
  fVar13 = (float)uVar11 * fVar13;
  if ((fVar12 <= 0.0) || (fVar2 <= fVar13)) {
    if (fVar3 < fVar13) {
      fVar12 = (fVar13 - fVar3) * fVar4 + fVar12;
    }
  }
  else {
    fVar12 = fVar12 - (fVar2 - fVar13) * fVar4;
  }
  if (0.0 < fVar12) {
    this->LastFrameOversubscribed = param_1;
  }
  if (fVar5 <= fVar12) {
    fVar12 = fVar5;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  this->ResidencyMipMapBias = fVar12;
  if (((this->DescriptionExt).bEnableResidencyMipMapBias == false) || (fVar1 < fVar14)) {
    this->ResidencyMipMapBias = 0.0;
  }
  uVar10 = this->HistoryIndex + 1 & (this->LockedHistory).IndexMask;
  uVar11 = 0;
  if ((int)uVar10 < (this->LockedHistory).Elements.ArrayNum) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(float *)((this->LockedHistory).Elements.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
       fVar14;
  uVar10 = this->HistoryIndex + 1 & (this->VisibleHistory).IndexMask;
  uVar11 = 0;
  if ((int)uVar10 < (this->VisibleHistory).Elements.ArrayNum) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(float *)((this->VisibleHistory).Elements.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
       fVar13;
  uVar10 = this->HistoryIndex + 1 & (this->MipMapBiasHistory).IndexMask;
  fVar1 = this->ResidencyMipMapBias;
  uVar11 = 0;
  if ((int)uVar10 < (this->MipMapBiasHistory).Elements.ArrayNum) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(float *)((this->MipMapBiasHistory).Elements.AllocatorInstance.Data + (longlong)(int)uVar10 * 4)
       = fVar1 / fVar5;
  this->HistoryIndex = this->HistoryIndex + 1;
  return;
}

