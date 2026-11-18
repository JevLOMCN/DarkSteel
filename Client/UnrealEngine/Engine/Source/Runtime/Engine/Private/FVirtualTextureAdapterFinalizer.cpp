// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FVirtualTextureAdapterFinalizer @ 1489b43f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVirtualTextureAdapterFinalizer * __thiscall
FVirtualTextureAdapterFinalizer::FVirtualTextureAdapterFinalizer
          (FVirtualTextureAdapterFinalizer *this,FRHICommandListBase *param_1,FRHITexture *param_2,
          FVTProducerDescription *param_3)

{
  int *piVar1;
  TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  FRHITexture *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  ushort uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  TEnumAsByte<EPixelFormat> TVar23;
  TEnumAsByte<EPixelFormat> TVar24;
  TEnumAsByte<EPixelFormat> TVar25;
  TEnumAsByte<EPixelFormat> TVar26;
  TEnumAsByte<EPixelFormat> TVar27;
  uchar uVar28;
  void *pvVar29;
  bool bVar30;
  bool bVar31;
  byte bVar32;
  int iVar33;
  longlong lVar34;
  FVirtualTextureAdapterFinalizer *pFVar35;
  EPixelFormat EVar36;
  uint uVar37;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  this->SourceTexture = param_2;
  pTVar2 = &this->SourceSRVs;
  uVar37 = 0;
  this->_padding_ = (longlong)&___7FVirtualTextureAdapterFinalizer__6B_;
  piVar1 = &(this->SourceSRVs).ArrayMax;
  uVar13 = param_3->FullNameHash;
  bVar31 = param_3->bPersistentHighestMip;
  bVar30 = param_3->bContinuousUpdate;
  bVar14 = param_3->bRequiresSinglePhysicalPool;
  bVar15 = param_3->bNotifyCompleted;
  (this->ProducerDesc).Name = param_3->Name;
  (this->ProducerDesc).FullNameHash = uVar13;
  (this->ProducerDesc).bPersistentHighestMip = bVar31;
  (this->ProducerDesc).bContinuousUpdate = bVar30;
  (this->ProducerDesc).bRequiresSinglePhysicalPool = bVar14;
  (this->ProducerDesc).bNotifyCompleted = bVar15;
  uVar13 = param_3->TileBorderSize;
  uVar16 = param_3->BlockWidthInTiles;
  uVar17 = param_3->BlockHeightInTiles;
  (this->ProducerDesc).TileSize = param_3->TileSize;
  (this->ProducerDesc).TileBorderSize = uVar13;
  (this->ProducerDesc).BlockWidthInTiles = uVar16;
  (this->ProducerDesc).BlockHeightInTiles = uVar17;
  uVar18 = param_3->WidthInBlocks;
  uVar19 = param_3->HeightInBlocks;
  uVar20 = param_3->Dimensions;
  uVar21 = param_3->MaxLevel;
  uVar22 = param_3->NumTextureLayers;
  TVar23.Value = param_3->LayerFormat[0].Value;
  TVar24.Value = param_3->LayerFormat[1].Value;
  TVar25.Value = param_3->LayerFormat[2].Value;
  TVar26.Value = param_3->LayerFormat[3].Value;
  TVar27.Value = param_3->LayerFormat[4].Value;
  (this->ProducerDesc).DepthInTiles = param_3->DepthInTiles;
  (this->ProducerDesc).WidthInBlocks = uVar18;
  (this->ProducerDesc).HeightInBlocks = uVar19;
  (this->ProducerDesc).Dimensions = uVar20;
  (this->ProducerDesc).MaxLevel = uVar21;
  (this->ProducerDesc).NumTextureLayers = uVar22;
  (this->ProducerDesc).LayerFormat[0] = (TEnumAsByte<EPixelFormat>)TVar23.Value;
  (this->ProducerDesc).LayerFormat[1] = (TEnumAsByte<EPixelFormat>)TVar24.Value;
  (this->ProducerDesc).LayerFormat[2] = (TEnumAsByte<EPixelFormat>)TVar25.Value;
  (this->ProducerDesc).LayerFormat[3] = (TEnumAsByte<EPixelFormat>)TVar26.Value;
  (this->ProducerDesc).LayerFormat[4] = (TEnumAsByte<EPixelFormat>)TVar27.Value;
  uVar12 = *(undefined8 *)((longlong)&param_3->LayerFallbackColor[0].field0_0x0 + 4);
  *(undefined8 *)((this->ProducerDesc).LayerFormat + 5) = *(undefined8 *)(param_3->LayerFormat + 5);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[0].field0_0x0 + 4) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&param_3->LayerFallbackColor[1].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[0].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_3->LayerFallbackColor[0].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[1].field0_0x0 + 4) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&param_3->LayerFallbackColor[2].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[1].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_3->LayerFallbackColor[1].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[2].field0_0x0 + 4) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&param_3->LayerFallbackColor[3].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[2].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_3->LayerFallbackColor[2].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[3].field0_0x0 + 4) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&param_3->LayerFallbackColor[4].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[3].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_3->LayerFallbackColor[3].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[4].field0_0x0 + 4) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&param_3->LayerFallbackColor[5].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[4].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_3->LayerFallbackColor[4].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[5].field0_0x0 + 4) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&param_3->LayerFallbackColor[6].field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[5].field0_0x0 + 0xc) =
       *(undefined8 *)((longlong)&param_3->LayerFallbackColor[5].field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->ProducerDesc).LayerFallbackColor[6].field0_0x0 + 4) = uVar12;
  fVar7 = param_3->LayerFallbackColor[7].field0_0x0._s_0.R;
  fVar8 = param_3->LayerFallbackColor[7].field0_0x0._s_0.G;
  fVar9 = param_3->LayerFallbackColor[7].field0_0x0._s_0.B;
  (this->ProducerDesc).LayerFallbackColor[6].field0_0x0._s_0.A =
       param_3->LayerFallbackColor[6].field0_0x0._s_0.A;
  (this->ProducerDesc).LayerFallbackColor[7].field0_0x0._s_0.R = fVar7;
  (this->ProducerDesc).LayerFallbackColor[7].field0_0x0._s_0.G = fVar8;
  (this->ProducerDesc).LayerFallbackColor[7].field0_0x0._s_0.B = fVar9;
  uVar10 = *(undefined4 *)param_3->bIsLayerSRGB;
  uVar11 = *(undefined4 *)(param_3->bIsLayerSRGB + 4);
  uVar20 = param_3->NumPhysicalGroups;
  uVar21 = param_3->PhysicalGroupIndex[0];
  uVar22 = param_3->PhysicalGroupIndex[1];
  uVar28 = param_3->PhysicalGroupIndex[2];
  (this->ProducerDesc).LayerFallbackColor[7].field0_0x0._s_0.A =
       param_3->LayerFallbackColor[7].field0_0x0._s_0.A;
  *(undefined4 *)(this->ProducerDesc).bIsLayerSRGB = uVar10;
  *(undefined4 *)((this->ProducerDesc).bIsLayerSRGB + 4) = uVar11;
  (this->ProducerDesc).NumPhysicalGroups = uVar20;
  (this->ProducerDesc).PhysicalGroupIndex[0] = uVar21;
  (this->ProducerDesc).PhysicalGroupIndex[1] = uVar22;
  (this->ProducerDesc).PhysicalGroupIndex[2] = uVar28;
  *(undefined8 *)((this->ProducerDesc).PhysicalGroupIndex + 3) =
       *(undefined8 *)(param_3->PhysicalGroupIndex + 3);
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  bVar31 = false;
  (this->SourceSRVs).ArrayNum = 0;
  *piVar1 = 0;
  (this->TilesToRender).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TilesToRender).ArrayNum = 0;
  (this->TilesToRender).ArrayMax = 0;
  lVar34 = (**(code **)(this->SourceTexture->_padding_ + 0x20))();
  EVar36 = *(EPixelFormat *)(lVar34 + 0x33);
  this->DestFormat = (this->ProducerDesc).LayerFormat[0].Value;
  this->SourceFormat = EVar36;
  bVar30 = IsBlockCompressedFormat(EVar36);
  if (bVar30) {
    if (((EVar36 < PF_BC7) && ((0x80000000202402U >> ((ulonglong)EVar36 & 0x3f) & 1) != 0)) ||
       ((byte)(EVar36 + ~PF_B5G5R5A1_UNORM) < 5)) {
      bVar31 = true;
    }
    EVar36 = PF_R8G8B8A8;
    if (bVar31) {
      EVar36 = PF_FloatRGBA;
    }
  }
  this->IntermediateFormat = EVar36;
  lVar34 = (**(code **)(this->SourceTexture->_padding_ + 0x20))();
  if (*piVar1 < (int)(uint)*(byte *)(lVar34 + 0x30)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(uint)*(byte *)(lVar34 + 0x30),&pTVar2->AllocatorInstance,
               (this->SourceSRVs).ArrayNum,piVar1);
  }
  lVar34 = (**(code **)(this->SourceTexture->_padding_ + 0x20))();
  pvVar29 = ThreadLocalStoragePointer;
  if (*(char *)(lVar34 + 0x30) != '\0') {
    do {
      pFVar4 = this->SourceTexture;
      uStack_48 = 0;
      local_50 = 2;
      if ((pFVar4 == (FRHITexture *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("TargetTexture",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,0xbb1,L""), bVar31)) {
        pcVar6 = (code *)swi(3);
        pFVar35 = (FVirtualTextureAdapterFinalizer *)(*pcVar6)();
        return pFVar35;
      }
      lVar34 = (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4);
      cVar3 = *(char *)(lVar34 + 0x32);
      if (cVar3 == '\0') {
        bVar32 = local_50._2_1_ & 0x9f | 0x10;
LAB_1489b4638:
        local_50._0_3_ = CONCAT12(bVar32,(undefined2)local_50);
      }
      else {
        if (cVar3 == '\x01') {
          bVar32 = local_50._2_1_ & 0xaf | 0x20;
          goto LAB_1489b4638;
        }
        if (cVar3 == '\x02') {
          bVar32 = local_50._2_1_ & 0xdf | 0x50;
          goto LAB_1489b4638;
        }
        if (cVar3 == '\x03') {
          bVar32 = local_50._2_1_ & 0xbf | 0x30;
          goto LAB_1489b4638;
        }
        if (cVar3 == '\x04') {
          bVar32 = local_50._2_1_ & 0xcf | 0x40;
          goto LAB_1489b4638;
        }
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                            ,0xba1,L"");
        if (bVar31) {
          pcVar6 = (code *)swi(3);
          pFVar35 = (FVirtualTextureAdapterFinalizer *)(*pcVar6)();
          return pFVar35;
        }
      }
      uVar12 = local_50;
      pFVar4 = this->SourceTexture;
      local_50._5_3_ = SUB83(uVar12,5);
      local_50._0_5_ = CONCAT14(1,CONCAT13((char)uVar37,(undefined3)local_50));
      if ((*(int *)(*(longlong *)((longlong)pvVar29 + (ulonglong)_tls_index * 8) + 0x9d4c) <
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
                (local_res8,
                 `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                 ::__l2::LLMScope_Name983,false,None,Default,true);
      FMemScope::FMemScope
                (local_res18,
                 &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                  ::__l2::LLMScope_Name983,true);
      lVar34 = (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4);
      if ((lVar34 != 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Texture->GetTextureReference() == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                              ,0x3d8,
                              L"Creating a shader resource view of an FRHITextureReference is not supported."
                             ), bVar31)) {
        pcVar6 = (code *)swi(3);
        pFVar35 = (FVirtualTextureAdapterFinalizer *)(*pcVar6)();
        return pFVar35;
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_58,param_1,pFVar4,&local_50);
      FMemScope::~FMemScope(local_res18);
      FLLMScope::~FLLMScope(local_res8);
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar31)) {
        pcVar6 = (code *)swi(3);
        pFVar35 = (FVirtualTextureAdapterFinalizer *)(*pcVar6)();
        return pFVar35;
      }
      iVar33 = (this->SourceSRVs).ArrayNum;
      if (iVar33 == *piVar1) {
        iVar33 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      uVar37 = uVar37 + 1;
      (this->SourceSRVs).ArrayNum = iVar33 + 1;
      pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)iVar33 * 8;
      *(undefined8 *)pFVar5 = 0;
      *(undefined8 *)pFVar5 = local_58;
      local_58 = 0;
      lVar34 = (**(code **)(this->SourceTexture->_padding_ + 0x20))();
    } while (uVar37 < *(byte *)(lVar34 + 0x30));
  }
  return this;
}

// ~FVirtualTextureAdapterFinalizer @ 1489b9c60

void __thiscall
FVirtualTextureAdapterFinalizer::~FVirtualTextureAdapterFinalizer
          (FVirtualTextureAdapterFinalizer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TilesToRender).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FRHIShaderResourceView>,int>
            ((TRefCountPtr<FRHIShaderResourceView> *)(this->SourceSRVs).AllocatorInstance.Data,
             (this->SourceSRVs).ArrayNum);
  pFVar1 = (this->SourceSRVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Finalize @ 1489e0160

/* WARNING: Removing unreachable block (ram,0x0001489e030f) */
/* WARNING: Removing unreachable block (ram,0x0001489e035a) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureAdapterFinalizer::Finalize
          (FVirtualTextureAdapterFinalizer *this,FRDGBuilder *param_1)

{
  FScriptContainerElement FVar1;
  EPixelFormat EVar2;
  EPixelFormat EVar3;
  EPixelFormat EVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  uint local_res18;
  IPooledRenderTarget *local_res20;
  TIntRect<int>_u_0 local_a0;
  TVector2<float>_u_0 local_90;
  float local_88;
  float local_84;
  undefined1 local_80;
  
  fVar6 = __real_3f800000;
  local_res18 = (this->TilesToRender).ArrayNum;
  uVar8 = (ulonglong)(int)local_res18;
  pFVar13 = (this->TilesToRender).AllocatorInstance.Data;
  pFVar15 = pFVar13 + uVar8 * 0x30;
  local_res10 = param_1;
  while( true ) {
    if ((this->TilesToRender).ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVirtualTextureAdapterFinalizer::FTileEntry,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar15) {
      (this->TilesToRender).ArrayNum = 0;
      if ((this->TilesToRender).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&(this->TilesToRender).AllocatorInstance,0,
                   &(this->TilesToRender).ArrayMax);
      }
      return;
    }
    local_res20 = *(IPooledRenderTarget **)pFVar13;
    uVar8 = *(ulonglong *)(pFVar13 + 0x20) & 0x5555555555555555;
    uVar11 = *(ulonglong *)(pFVar13 + 0x20) >> 1 & 0x5555555555555555;
    FVar1 = pFVar13[0x28];
    uVar8 = (uVar8 >> 1 ^ uVar8) & 0x3333333333333333;
    uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f0f0f0f0f;
    uVar9 = (uVar8 >> 4 ^ uVar8) & 0xff00ff00ff00ff;
    uVar8 = (uVar11 >> 1 ^ uVar11) & 0x3333333333333333;
    uVar9 = (uVar9 >> 8 ^ uVar9) & 0xffff0000ffff;
    uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f0f0f0f0f;
    uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff00ff00ff;
    uVar8 = (uVar8 >> 8 ^ uVar8) & 0xffff0000ffff;
    fVar16 = fVar6 / (float)(1 << ((byte)FVar1 & 0x1f));
    fVar19 = fVar6 / ((float)(this->ProducerDesc).BlockWidthInTiles * fVar16);
    fVar17 = (float)((uint)(uVar9 >> 0x10) ^ (uint)uVar9) * fVar19;
    fVar18 = fVar6 / ((float)(this->ProducerDesc).BlockHeightInTiles * fVar16);
    uVar14 = (this->ProducerDesc).TileSize;
    uVar12 = (this->ProducerDesc).TileBorderSize;
    fVar16 = (float)((uint)(uVar8 >> 0x10) ^ (uint)uVar8) * fVar18;
    local_80 = 1;
    iVar10 = uVar14 + uVar12 * 2;
    local_a0._4_4_ = iVar10 * *(int *)(pFVar13 + 0xc);
    local_a0._0_4_ = iVar10 * *(int *)(pFVar13 + 8);
    local_88 = (float)uVar12 / (float)uVar14;
    local_a0._8_4_ = local_a0._0_4_ + iVar10;
    local_a0._12_4_ = local_a0._4_4_ + iVar10;
    local_84 = local_88 * fVar18;
    local_88 = local_88 * fVar19;
    local_90._s_0.Y = fVar16 - local_84;
    local_84 = fVar16 + fVar18 + local_84;
    local_90._s_0.X = fVar17 - local_88;
    local_88 = fVar17 + fVar19 + local_88;
    bVar7 = (this->SourceSRVs).ArrayNum <= (int)(uint)(byte)FVar1;
    uVar14 = (uint)(byte)FVar1;
    if (bVar7) {
      uVar14 = 0;
    }
    EVar2 = this->DestFormat;
    EVar3 = this->IntermediateFormat;
    EVar4 = this->SourceFormat;
    uVar12 = 0;
    if (bVar7) {
      uVar12 = (uint)(byte)FVar1;
    }
    if (((this->SourceSRVs).ArrayNum <= (int)uVar14) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    VirtualTextureAdapter::RenderTile
              (local_res10,
               (TRefCountPtr<FRHIShaderResourceView> *)
               ((this->SourceSRVs).AllocatorInstance.Data + (ulonglong)uVar14 * 8),local_res20,EVar4
               ,EVar3,EVar2,uVar12,(TBox2<float> *)&local_90._s_0,(TIntRect<int> *)&local_a0._s_0);
    uVar8 = (ulonglong)local_res18;
    pFVar13 = pFVar13 + 0x30;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

