// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FTextureCollectionVirtualRedirector @ 1489b9650

void __thiscall
FTextureCollectionVirtualRedirector::~FTextureCollectionVirtualRedirector
          (FTextureCollectionVirtualRedirector *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FTextureCollectionPendingAdapterTile,int>
            ((FTextureCollectionPendingAdapterTile *)
             (this->Finalizer).PendingTiles.AllocatorInstance.Data,
             (this->Finalizer).PendingTiles.ArrayNum);
  pFVar1 = (this->Finalizer).PendingTiles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Finalizer).PendingFinalizers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).BlockCoordinates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).BlockVirtualPageTable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).Textures.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IVirtualTexture__6B_;
  return;
}

// IsPageStreamed @ 1489f9530

bool __thiscall
FTextureCollectionVirtualRedirector::IsPageStreamed
          (FTextureCollectionVirtualRedirector *this,uchar param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar4 = (ulonglong)(param_2 >> 1) & 0x5555555555555555;
  uVar4 = (uVar4 >> 1 ^ uVar4) & 0x3333333333333333;
  uVar4 = (uVar4 >> 2 ^ uVar4) & 0xf0f0f0f0f0f0f0f;
  uVar6 = (uVar4 >> 4 ^ uVar4) & 0xff00ff00ff00ff;
  uVar4 = (((ulonglong)param_2 & 0x5555555555555555) >> 1 ^ (ulonglong)param_2 & 0x5555555555555555)
          & 0x3333333333333333;
  uVar4 = (uVar4 >> 2 ^ uVar4) & 0xf0f0f0f0f0f0f0f;
  uVar4 = (uVar4 >> 4 ^ uVar4) & 0xff00ff00ff00ff;
  uVar7 = ((((uint)(uVar6 >> 8) ^ (uint)uVar6) & 0xffff) << (param_1 & 0x1f)) *
          (this->Data).BlockCount.field0_0x0._s_0.X +
          ((((uint)(uVar4 >> 8) ^ (uint)uVar4) & 0xffff) << (param_1 & 0x1f));
  uVar5 = 0;
  if ((int)uVar7 < (this->Data).BlockVirtualPageTable.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar5 = *(uint *)((this->Data).BlockVirtualPageTable.AllocatorInstance.Data +
                   (longlong)(int)uVar7 * 4);
  if (uVar5 == 0xffffffff) {
    return false;
  }
  uVar7 = 0;
  if ((int)uVar5 < (this->Data).Textures.ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (this->Data).Textures.AllocatorInstance.Data[(longlong)(int)uVar5 * 0x20 + 0x10] ==
         (FScriptContainerElement)0x0;
}

// ProducePageData @ 148a02980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

IVirtualTextureFinalizer * __thiscall
FTextureCollectionVirtualRedirector::ProducePageData
          (FTextureCollectionVirtualRedirector *this,FRHICommandListBase *param_1,Type param_2,
          EVTProducePageFlags param_3,FVirtualTextureProducerHandle *param_4,uchar param_5,
          uchar param_6,ulong64 param_7,ulong64 param_8,FVTProduceTargetLayer *param_9)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  IVirtualTextureFinalizer *pIVar8;
  IRendererModule *pIVar9;
  longlong *plVar10;
  FRHITextureDesc *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TIntPoint<int>_u_0 TVar15;
  longlong lVar16;
  TArray<FTextureCollectionPendingAdapterTile,TSizedDefaultAllocator<32>_> *pTVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_278 [32];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  FRHITransitionInfo_u_8 FStack_1e0;
  int local_1d8;
  ERHIAccess EStack_1d4;
  undefined8 uStack_1d0;
  IVirtualTextureFinalizer *local_1c8;
  TRefCountPtr<IPooledRenderTarget> TStack_1c0;
  ulonglong local_1b8;
  FScriptContainerElement local_1b0;
  EClearBinding local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  float fStack_198;
  FRHITransitionInfo *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulong64 local_178;
  FRHITransitionInfo local_170;
  IPooledRenderTarget *local_140;
  FRHITransitionInfo_u_8 FStack_138;
  int local_130;
  ERHIAccess EStack_12c;
  ERHIAccess EStack_128;
  undefined4 uStack_124;
  TArrayView<FRHITransitionInfo_const_,int> local_118;
  FPooledRenderTargetDesc local_108;
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_178 = param_8;
  local_188 = (FRHITransitionInfo *)param_9;
  uVar7 = param_7 >> 1 & 0x55555555;
  uVar7 = (uVar7 >> 1 ^ uVar7) & 0x3333333333333333;
  uVar7 = (uVar7 >> 2 ^ uVar7) & 0xf0f0f0f0f0f0f0f;
  uVar18 = (uVar7 >> 4 ^ uVar7) & 0xff00ff00ff00ff;
  uVar7 = ((param_7 & 0x55555555) >> 1 ^ param_7 & 0x55555555) & 0x3333333333333333;
  uVar7 = (uVar7 >> 2 ^ uVar7) & 0xf0f0f0f0f0f0f0f;
  uVar7 = (uVar7 >> 4 ^ uVar7) & 0xff00ff00ff00ff;
  uVar19 = ((uint)(uVar7 >> 8) ^ (uint)uVar7) & 0xffff;
  uVar13 = ((uint)(uVar18 >> 8) ^ (uint)uVar18) & 0xffff;
  uVar14 = (uVar19 << (param_6 & 0x1f)) +
           (uVar13 << (param_6 & 0x1f)) * (this->Data).BlockCount.field0_0x0._s_0.X;
  uVar12 = 0;
  if ((int)uVar14 < (this->Data).BlockVirtualPageTable.ArrayNum) {
    uVar12 = ~uVar14 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pIVar8 = (IVirtualTextureFinalizer *)(*pcVar5)();
    return pIVar8;
  }
  uVar12 = *(uint *)((this->Data).BlockVirtualPageTable.AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 4);
  if (uVar12 == 0xffffffff) {
    pIVar8 = (IVirtualTextureFinalizer *)0x0;
  }
  else {
    uVar14 = 0;
    if ((int)uVar12 < (this->Data).BlockCoordinates.ArrayNum) {
      uVar14 = ~uVar12 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pIVar8 = (IVirtualTextureFinalizer *)(*pcVar5)();
      return pIVar8;
    }
    uVar3 = *(undefined8 *)
             ((this->Data).BlockCoordinates.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
    uVar14 = 0;
    if ((int)uVar12 < (this->Data).Textures.ArrayNum) {
      uVar14 = ~uVar12 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pIVar8 = (IVirtualTextureFinalizer *)(*pcVar5)();
      return pIVar8;
    }
    local_1c8 = (IVirtualTextureFinalizer *)0x0;
    TStack_1c0.Reference = (IPooledRenderTarget *)0x0;
    pFVar21 = (this->Data).Textures.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
    local_208 = *(undefined8 *)pFVar21;
    uStack_200 = *(undefined8 *)(pFVar21 + 8);
    local_1f8 = *(undefined8 *)(pFVar21 + 0x10);
    uStack_1f0 = *(undefined8 *)(pFVar21 + 0x18);
    local_1b0 = (FScriptContainerElement)param_6;
    local_1e8 = (IPooledRenderTarget *)local_188->_padding_;
    FStack_1e0 = local_188->field1_0x8;
    local_1d8 = *(int *)&local_188->Type;
    EStack_1d4 = local_188->AccessBefore;
    EStack_128 = local_188->AccessAfter;
    uStack_124 = *(undefined4 *)&local_188->Flags;
    uStack_1d0._0_4_ = local_188->AccessAfter;
    uStack_1d0._4_1_ = local_188->Flags;
    uStack_1d0._5_3_ = *(undefined3 *)&local_188->field_0x1d;
    uVar7 = (ulonglong)(uVar19 - ((uint)uVar3 >> (param_6 & 0x1f))) & 0xffff0000ffff;
    uVar7 = (uVar7 << 8 ^ uVar7) & 0xff00ff00ff00ff;
    uVar7 = (uVar7 << 4 ^ uVar7) & 0xf0f0f0f0f0f0f0f;
    local_1b8 = (uVar7 * 4 ^ uVar7) & 0x3333333333333333;
    uVar7 = (ulonglong)(uVar13 - ((uint)((ulonglong)uVar3 >> 0x20) >> (param_6 & 0x1f))) &
            0xffff0000ffff;
    uVar7 = (uVar7 << 8 ^ uVar7) & 0xff00ff00ff00ff;
    local_1b8 = local_1b8 * 2 ^ local_1b8;
    uVar7 = (uVar7 << 4 ^ uVar7) & 0xf0f0f0f0f0f0f0f;
    uVar7 = (uVar7 * 4 ^ uVar7) & 0x3333333333333333;
    local_1b8 = (uVar7 * 4 ^ uVar7 * 2 ^ local_1b8) & 0xaaaaaaaa ^ local_1b8;
    local_140 = local_1e8;
    FStack_138 = FStack_1e0;
    local_130 = local_1d8;
    EStack_12c = EStack_1d4;
    if (*(int *)pFVar21 != 0) {
      pIVar9 = GetRendererModule();
      plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x188))(pIVar9,pFVar21);
      if (plVar10 != (longlong *)0x0) {
        if (pFVar21[0x10] != (FScriptContainerElement)0x0) {
          local_1a8 = EColorBound;
          FVar2 = pFVar21[0x11];
          iVar20 = (this->ProducerDesc).TileSize + (this->ProducerDesc).TileBorderSize * 2;
          TVar15._s_0.Y = iVar20;
          TVar15._s_0.X = iVar20;
          uStack_1a4 = FLinearColor::Black.field0_0x0._0_4_;
          uStack_1a0 = FLinearColor::Black.field0_0x0._4_8_;
          fStack_198 = FLinearColor::Black.field0_0x0._12_4_;
          if (iVar20 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InExtent.X",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                               ,0x6b,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              pIVar8 = (IVirtualTextureFinalizer *)(*pcVar5)();
              return pIVar8;
            }
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InExtent.Y",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                               ,0x6c,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              pIVar8 = (IVirtualTextureFinalizer *)(*pcVar5)();
              return pIVar8;
            }
          }
          local_108.ClearValue.Value.Color[3] = fStack_198;
          local_108.DebugName = L"UnknownTexture2D";
          local_108.UAVFormat = PF_Unknown;
          local_108.NumSamples = '\x01';
          local_108.FastVRAMPercentage = 0xff;
          local_108.AliasableFormats.AllocatorInstance.SecondaryData =
               (ForElementType<EPixelFormat>)0x0;
          local_108.AliasableFormats.ArrayNum = 0;
          local_108.AliasableFormats.ArrayMax = 1;
          local_108.Depth = 0;
          local_108.ArraySize = 1;
          local_108.field13_0x58.PackedBits = '\0';
          local_108.NumMips = '\x01';
          local_108.Flags = ShaderResource;
          local_108.ClearValue.Value._0_4_ = uStack_1a4;
          local_108.ClearValue.ColorBinding = local_1a8;
          local_108.ClearValue.Value._4_8_ = uStack_1a0;
          local_108.Format = (EPixelFormat)FVar2;
          local_108.Extent.field0_0x0 = TVar15;
          if (((iVar20 == 0) || (iVar20 == 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewDesc.Is2DTexture()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                                 ,0x7a,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pIVar8 = (IVirtualTextureFinalizer *)(*pcVar5)();
            return pIVar8;
          }
          pFVar11 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_a8,&local_108);
          FRenderTargetPool::FindFreeElement
                    ((FRenderTargetPool *)&GRenderTargetPool,param_1,pFVar11,&TStack_1c0,
                     L"VirtualRenderTarget");
          if ((void *)local_a8._64_8_ != (void *)0x0) {
            FMemory::Free((void *)local_a8._64_8_);
          }
          if (local_108.AliasableFormats.AllocatorInstance.SecondaryData !=
              (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)local_108.AliasableFormats.AllocatorInstance.SecondaryData);
          }
          uStack_180 = 1;
          local_170.field1_0x8 =
               (FRHITransitionInfo_u_8)
               ((TStack_1c0.Reference)->RenderTargetItem).TargetableTexture.Reference;
          local_170._padding_._4_2_ = 0xffff;
          local_188 = &local_170;
          local_118._12_4_ = uStack_17c;
          local_118.ArrayNum = 1;
          local_170._padding_._0_4_ = 0xffffffff;
          local_170.Type = Texture;
          local_170.AccessBefore = None;
          local_170.AccessAfter = SRVMask;
          local_170.Flags = None;
          local_170.CommitInfo.bIsSet = false;
          local_118.DataPtr = local_188;
          FRHICommandListBase::TransitionInternal(param_1,&local_118,None);
          local_140 = TStack_1c0.Reference;
          FStack_138 = (FRHITransitionInfo_u_8)
                       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
          local_130 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        }
        local_1c8 = (IVirtualTextureFinalizer *)
                    (**(code **)(*plVar10 + 0x20))(plVar10,param_1,param_2,param_3);
      }
    }
    pIVar8 = local_1c8;
    if (pFVar21[0x10] != (FScriptContainerElement)0x0) {
      pIVar8 = (IVirtualTextureFinalizer *)&this->Finalizer;
      if (local_1c8 != (IVirtualTextureFinalizer *)0x0) {
        TArray<IVirtualTextureFinalizer_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<IVirtualTextureFinalizer_*_const_&>
                  (&(this->Finalizer).PendingFinalizers,&local_1c8);
      }
      pTVar17 = &(this->Finalizer).PendingTiles;
      pFVar21 = (pTVar17->AllocatorInstance).Data;
      if (((pFVar21 <= (FScriptContainerElement *)&local_208) &&
          ((FScriptContainerElement *)&local_208 <
           pFVar21 + (longlong)(this->Finalizer).PendingTiles.ArrayMax * 0x60)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pIVar8 = (IVirtualTextureFinalizer *)(*pcVar5)();
        return pIVar8;
      }
      iVar20 = (this->Finalizer).PendingTiles.ArrayNum;
      piVar1 = &(this->Finalizer).PendingTiles.ArrayMax;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,&pTVar17->AllocatorInstance,piVar1);
      }
      (this->Finalizer).PendingTiles.ArrayNum = iVar20 + 1;
      pFVar4 = (pTVar17->AllocatorInstance).Data;
      lVar16 = (longlong)iVar20 * 0x60;
      *(undefined8 *)(pFVar4 + lVar16) = local_208;
      *(undefined8 *)(pFVar4 + lVar16 + 8) = uStack_200;
      *(undefined8 *)(pFVar4 + lVar16 + 0x10) = local_1f8;
      *(undefined8 *)(pFVar4 + lVar16 + 0x10 + 8) = uStack_1f0;
      pFVar21 = pFVar4 + lVar16 + 0x20;
      *(undefined4 *)pFVar21 = (undefined4)local_1e8;
      *(undefined4 *)(pFVar21 + 4) = local_1e8._4_4_;
      *(undefined4 *)(pFVar21 + 8) = FStack_1e0._0_4_;
      *(undefined4 *)(pFVar21 + 0xc) = FStack_1e0._4_4_;
      pFVar21 = pFVar4 + lVar16 + 0x30;
      *(int *)pFVar21 = local_1d8;
      *(ERHIAccess *)(pFVar21 + 4) = EStack_1d4;
      *(int *)(pFVar21 + 8) = (int)uStack_1d0;
      *(int *)(pFVar21 + 0xc) = uStack_1d0._4_4_;
      *(IVirtualTextureFinalizer **)(pFVar4 + lVar16 + 0x40) = local_1c8;
      *(undefined8 *)(pFVar4 + lVar16 + 0x48) = 0;
      *(IPooledRenderTarget **)(pFVar4 + lVar16 + 0x48) = TStack_1c0.Reference;
      if (TStack_1c0.Reference != (IPooledRenderTarget *)0x0) {
        (**(code **)((TStack_1c0.Reference)->_padding_ + 0x30))();
      }
      *(ulonglong *)(pFVar4 + lVar16 + 0x50) = local_1b8;
      pFVar4[lVar16 + 0x58] = local_1b0;
    }
    if (TStack_1c0.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((TStack_1c0.Reference)->_padding_ + 0x38))();
    }
  }
  return pIVar8;
}

// RequestPageData @ 148a0e290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVTRequestPageResult * __thiscall
FTextureCollectionVirtualRedirector::RequestPageData
          (FTextureCollectionVirtualRedirector *this,FVTRequestPageResult *__return_storage_ptr__,
          FRHICommandListBase *param_1,FVirtualTextureProducerHandle *param_2,uchar param_3,
          uchar param_4,ulong64 param_5,EVTRequestPagePriority param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  FVTRequestPageResult *pFVar6;
  IRendererModule *pIVar7;
  longlong *plVar8;
  ulong64 *puVar9;
  FTextureResource *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint local_78;
  int local_74;
  int iStack_70;
  TIntVector2<unsigned_int>_u_0 local_6c;
  ulong64 local_60;
  ulonglong uStack_58;
  undefined1 local_50 [24];
  
  uVar5 = param_5 >> 1 & 0x55555555;
  uVar5 = (uVar5 >> 1 ^ uVar5) & 0x3333333333333333;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f0f0f0f0f;
  uVar15 = (uVar5 >> 4 ^ uVar5) & 0xff00ff00ff00ff;
  uVar5 = ((param_5 & 0x55555555) >> 1 ^ param_5 & 0x55555555) & 0x3333333333333333;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f0f0f0f0f;
  uVar5 = (uVar5 >> 4 ^ uVar5) & 0xff00ff00ff00ff;
  uVar16 = ((uint)(uVar5 >> 8) ^ (uint)uVar5) & 0xffff;
  uVar12 = ((uint)(uVar15 >> 8) ^ (uint)uVar15) & 0xffff;
  uVar13 = (uVar16 << (param_4 & 0x1f)) +
           (uVar12 << (param_4 & 0x1f)) * (this->Data).BlockCount.field0_0x0._s_0.X;
  uVar4 = 0;
  if ((int)uVar13 < (this->Data).BlockVirtualPageTable.ArrayNum) {
    uVar4 = ~uVar13 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVTRequestPageResult *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar4 = *(uint *)((this->Data).BlockVirtualPageTable.AllocatorInstance.Data +
                   (longlong)(int)uVar13 * 4);
  if (uVar4 == 0xffffffff) {
    __return_storage_ptr__->Handle = 0;
    __return_storage_ptr__->Status = Invalid;
    return __return_storage_ptr__;
  }
  uVar13 = 0;
  if ((int)uVar4 < (this->Data).BlockCoordinates.ArrayNum) {
    uVar13 = ~uVar4 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVTRequestPageResult *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_60 = 0;
  uVar17 = 1;
  uStack_58 = CONCAT44(uStack_58._4_4_,1);
  uVar1 = *(undefined8 *)
           ((this->Data).BlockCoordinates.AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  uVar13 = 0;
  if ((int)uVar4 < (this->Data).Textures.ArrayNum) {
    uVar13 = ~uVar4 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVTRequestPageResult *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar14 = (this->Data).Textures.AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
  if (*(int *)pFVar14 == 0) {
    if (*(UTexture **)(pFVar14 + 8) != (UTexture *)0x0) {
      pFVar10 = UTexture::GetResource(*(UTexture **)(pFVar14 + 8));
      if (pFVar10 != (FTextureResource *)0x0) {
        lVar11 = (**(code **)(pFVar10->_padding_ + 0x58))(pFVar10);
        if (lVar11 != 0) {
          if (((*(int *)(lVar11 + 0x18) == -1) ||
              (lVar11 = *(longlong *)(lVar11 + 0x68), lVar11 == 0)) ||
             ((byte)((ulonglong)lVar11 >> 0x18) <= param_4)) {
            uStack_58 = CONCAT44(uStack_58._4_4_,3);
          }
          else {
            if ((int)(((uint)((ulonglong)lVar11 >> 0x18) & 0xff) -
                     ((uint)((ulonglong)lVar11 >> 0x28) & 0xff)) <= (int)(uint)param_4) {
              uVar17 = 3;
            }
            uStack_58 = CONCAT44(uStack_58._4_4_,uVar17);
          }
          goto LAB_148a0e622;
        }
      }
    }
    uStack_58 = uStack_58 & 0xffffffff00000000;
  }
  else {
    pIVar7 = GetRendererModule();
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x188))(pIVar7,pFVar14);
    if (plVar8 != (longlong *)0x0) {
      local_74 = uVar16 - ((uint)uVar1 >> (param_4 & 0x1f));
      iStack_70 = uVar12 - ((uint)((ulonglong)uVar1 >> 0x20) >> (param_4 & 0x1f));
      local_6c._s_0.Y = iStack_70;
      local_6c._s_0.X = local_74;
      local_78 = uVar4 * 0x400000 + param_2->PackedValue;
      local_78 = (local_78 ^ param_2->PackedValue) & 0x3fffff ^ local_78;
      uVar4 = EncodeBlockAddress((TIntVector2<unsigned_int> *)&local_6c._s_0);
      puVar9 = (ulong64 *)
               (**(code **)(*plVar8 + 0x18))
                         (plVar8,local_50,param_1,&local_78,param_3,param_4,uVar4,param_6);
      local_60 = *puVar9;
      uStack_58 = puVar9[1];
    }
  }
LAB_148a0e622:
  __return_storage_ptr__->Handle = local_60;
  *(ulonglong *)&__return_storage_ptr__->Status = uStack_58;
  return __return_storage_ptr__;
}

