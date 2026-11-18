// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 20

// FAllocatedVirtualTexture @ 1458caf70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FAllocatedVirtualTexture * __thiscall
FAllocatedVirtualTexture::FAllocatedVirtualTexture
          (FAllocatedVirtualTexture *this,FRHICommandListBase *param_1,
          FVirtualTextureSystem *param_2,uint param_3,FAllocatedVTDescription *param_4,
          FVirtualTextureProducer **param_5,uint param_6,uint param_7,uint param_8,uint param_9,
          uint param_10)

{
  ulonglong uVar1;
  byte bVar2;
  FScriptContainerElement FVar3;
  FVirtualTextureProducer *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  FAllocatedVirtualTexture *pFVar12;
  FVirtualTextureSpace *pFVar13;
  FVirtualTexturePhysicalSpace *pFVar14;
  int iVar15;
  FVirtualTexturePhysicalSpace *pFVar16;
  FVirtualTexturePhysicalSpace *pFVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  FVTSpaceDescription local_98 [4];
  
  uVar18 = param_6;
  this->_padding_ = (longlong)&___7IAllocatedVirtualTexture__6B_;
  pFVar14 = (FVirtualTexturePhysicalSpace *)0x0;
  param_6._0_1_ = '\0';
  lVar20 = *(longlong *)&param_4->TileSize;
  param_6 = 0;
  this->_padding_ = (longlong)param_4->Name;
  this->_padding_ = lVar20;
  lVar20 = *(longlong *)&param_4->Dimensions;
  this->_padding_ = *(longlong *)&param_4->MaxSpaceSize;
  this->_padding_ = lVar20;
  lVar20 = *(longlong *)(param_4->ProducerHandle + 3);
  this->_padding_ = *(longlong *)(param_4->ProducerHandle + 1);
  this->_padding_ = lVar20;
  lVar20 = *(longlong *)(param_4->ProducerHandle + 7);
  this->_padding_ = *(longlong *)(param_4->ProducerHandle + 5);
  this->_padding_ = lVar20;
  lVar20 = *(longlong *)(param_4->ProducerLayerIndex + 4);
  *(uint *)&this->_padding_ = uVar18;
  *(uint *)((longlong)&this->_padding_ + 4) = param_7;
  *(uint *)&this->_padding_ = param_8;
  *(uint *)((longlong)&this->_padding_ + 4) = param_9;
  this->_padding_ = lVar20;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->Space = (FVirtualTextureSpace *)0x0;
  *(uint *)&this->_padding_ = param_10;
  (this->UniqueProducers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueProducers).ArrayNum = 0;
  (this->UniqueProducers).ArrayMax = 0;
  (this->UniquePageTableLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniquePageTableLayers).ArrayNum = 0;
  (this->UniquePageTableLayers).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FAllocatedVirtualTexture__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x100;
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->FrameAllocated = param_3;
  this->TextureLayers[0].UniquePageTableLayerIndex = '\0';
  this->TextureLayers[0].PhysicalTextureIndex = '\0';
  this->TextureLayers[1].UniquePageTableLayerIndex = '\0';
  this->TextureLayers[1].PhysicalTextureIndex = '\0';
  this->TextureLayers[2].UniquePageTableLayerIndex = '\0';
  this->TextureLayers[2].PhysicalTextureIndex = '\0';
  this->TextureLayers[3].UniquePageTableLayerIndex = '\0';
  this->TextureLayers[3].PhysicalTextureIndex = '\0';
  this->TextureLayers[4].UniquePageTableLayerIndex = '\0';
  this->TextureLayers[4].PhysicalTextureIndex = '\0';
  this->TextureLayers[5].UniquePageTableLayerIndex = '\0';
  this->TextureLayers[5].PhysicalTextureIndex = '\0';
  this->TextureLayers[6].UniquePageTableLayerIndex = '\0';
  this->TextureLayers[6].PhysicalTextureIndex = '\0';
  this->TextureLayers[7].UniquePageTableLayerIndex = '\0';
  this->TextureLayers[7].PhysicalTextureIndex = '\0';
  this->FallbackColorPerTextureLayer[0] = 0;
  this->FallbackColorPerTextureLayer[1] = 0;
  this->FallbackColorPerTextureLayer[2] = 0;
  this->FallbackColorPerTextureLayer[3] = 0;
  this->FallbackColorPerTextureLayer[4] = 0;
  this->FallbackColorPerTextureLayer[5] = 0;
  this->FallbackColorPerTextureLayer[6] = 0;
  fVar9 = __real_437f0000;
  fVar8 = __real_3f000000;
  fVar7 = __real_3f800000;
  this->FallbackColorPerTextureLayer[7] = 0;
  pFVar16 = pFVar14;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    do {
      pFVar4 = param_5[(longlong)pFVar16];
      if ((pFVar4 != (FVirtualTextureProducer *)0x0) || ((this->_padding_ & 0x200000000) == 0)) {
        uVar11 = AddUniqueProducer(this,param_4->ProducerHandle + (longlong)pFVar16,pFVar4);
        bVar2 = *(byte *)((longlong)&(pFVar16->DescriptionExt).PoolCount + (longlong)param_4);
        uVar19 = (uint)bVar2;
        pFVar17 = pFVar14;
        uVar18 = 0;
        if (pFVar4 != (FVirtualTextureProducer *)0x0) {
          if (((pFVar4->Description).NumTextureLayers <= uVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LayerIndex < Description.NumTextureLayers",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                  ,0x1f,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FAllocatedVirtualTexture *)(*pcVar6)();
            return pFVar12;
          }
          bVar2 = (pFVar4->Description).PhysicalGroupIndex[bVar2];
          uVar18 = (uint)bVar2;
          if (((uint)(pFVar4->Description).NumPhysicalGroups <= (uint)bVar2) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GroupIndex < Description.NumPhysicalGroups",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureProducer.h"
                                  ,0x22,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FAllocatedVirtualTexture *)(*pcVar6)();
            return pFVar12;
          }
          if (((pFVar4->PhysicalGroups).ArrayNum <= (int)(uint)bVar2) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar12 = (FAllocatedVirtualTexture *)(*pcVar6)();
            return pFVar12;
          }
          pFVar17 = *(FVirtualTexturePhysicalSpace **)
                     ((pFVar4->PhysicalGroups).AllocatorInstance.Data + (ulonglong)bVar2 * 8);
          param_6 = (uint)((byte)param_6 | (pFVar4->Description).bContinuousUpdate);
        }
        uVar11 = AddUniquePhysicalSpace(this,param_1,pFVar17,uVar11,uVar18);
        lVar20 = (longlong)(int)uVar11;
        uVar18 = 0;
        if ((int)uVar11 < (this->UniquePageTableLayers).ArrayNum) {
          uVar18 = ~uVar11 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FAllocatedVirtualTexture *)(*pcVar6)();
          return pFVar12;
        }
        pFVar5 = (this->UniquePageTableLayers).AllocatorInstance.Data;
        *(ushort *)(pFVar5 + lVar20 * 0x10 + 10) =
             *(ushort *)(pFVar5 + lVar20 * 0x10 + 10) | (ushort)(1 << (uVar19 & 0x1f));
        uVar18 = 0;
        if ((int)uVar11 < (this->UniquePageTableLayers).ArrayNum) {
          uVar18 = ~uVar11 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FAllocatedVirtualTexture *)(*pcVar6)();
          return pFVar12;
        }
        pFVar5 = (this->UniquePageTableLayers).AllocatorInstance.Data;
        FVar3 = pFVar5[lVar20 * 0x10 + 0xc];
        pFVar5[lVar20 * 0x10 + 0xc] = (FScriptContainerElement)((char)FVar3 + '\x01');
        this->TextureLayers[(longlong)pFVar16].UniquePageTableLayerIndex = (uchar)uVar11;
        this->TextureLayers[(longlong)pFVar16].PhysicalTextureIndex = (uchar)FVar3;
        if (pFVar4 != (FVirtualTextureProducer *)0x0) {
          fVar21 = (pFVar4->Description).LayerFallbackColor[(int)uVar19].field0_0x0._s_0.B;
          fVar23 = (pFVar4->Description).LayerFallbackColor[(int)uVar19].field0_0x0._s_0.G;
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          if (fVar7 <= fVar21) {
            fVar21 = fVar7;
          }
          if (fVar7 <= fVar23) {
            fVar23 = fVar7;
          }
          fVar22 = (pFVar4->Description).LayerFallbackColor[(int)uVar19].field0_0x0._s_0.R;
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          fVar24 = (pFVar4->Description).LayerFallbackColor[(int)uVar19].field0_0x0._s_0.A;
          if (fVar7 <= fVar22) {
            fVar22 = fVar7;
          }
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          if (fVar7 <= fVar24) {
            fVar24 = fVar7;
          }
          this->FallbackColorPerTextureLayer[(longlong)pFVar16] =
               CONCAT13((char)(int)(fVar24 * fVar9 + fVar8),
                        CONCAT12((char)(int)(fVar22 * fVar9 + fVar8),
                                 CONCAT11((char)(int)(fVar23 * fVar9 + fVar8),
                                          (char)(int)(fVar21 * fVar9 + fVar8))));
        }
      }
      uVar18 = (int)pFVar16 + 1;
      pFVar16 = (FVirtualTexturePhysicalSpace *)(ulonglong)uVar18;
    } while (uVar18 < *(byte *)((longlong)&this->_padding_ + 1));
  }
  if (((this->UniqueProducers).ArrayNum == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("UniqueProducers.Num() > 0u",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                          ,0x3f,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocatedVirtualTexture *)(*pcVar6)();
    return pFVar12;
  }
  uVar18 = *(int *)((longlong)&this->_padding_ + 4) * *(int *)((longlong)&this->_padding_ + 4);
  uVar11 = (int)this->_padding_ * (int)this->_padding_;
  if (uVar11 < uVar18) {
    uVar18 = uVar11;
  }
  uVar11 = 1;
  if (uVar18 != 0) {
    uVar11 = uVar18;
  }
  uVar1 = (ulonglong)(uVar11 - 1) * 2 + 1;
  lVar20 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
    }
  }
  uVar18 = (uint)lVar20;
  if (*(uint *)((longlong)&this->_padding_ + 4) < (uint)lVar20) {
    uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
  }
  uVar11 = 0xb;
  if (uVar18 < 0xb) {
    uVar11 = uVar18;
  }
  *(uint *)((longlong)&this->_padding_ + 4) = uVar11;
  uVar18 = CalculatePersistentHash(this,param_4,param_5);
  this->PersistentHash = uVar18;
  LockOrUnlockTiles(this,param_2,true);
  bVar10 = VirtualTexturePool::Support16BitPageTables();
  if ((bVar10) || (((param_4->field11_0x44).PackedFlags & 1) != 0)) {
    pFVar16 = pFVar14;
    while( true ) {
      local_98[0].PageTableFormat = UInt16;
      iVar15 = (int)pFVar16;
      if ((this->UniquePageTableLayers).ArrayNum <= iVar15) break;
      if ((iVar15 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FAllocatedVirtualTexture *)(*pcVar6)();
        return pFVar12;
      }
      lVar20 = *(longlong *)
                ((this->UniquePageTableLayers).AllocatorInstance.Data + -0x20 +
                (longlong)((pFVar14->Description).Format + -6));
      if ((lVar20 != 0) && (0x40 < *(uint *)(lVar20 + 0x38))) goto LAB_1458cb496;
      pFVar16 = (FVirtualTexturePhysicalSpace *)(ulonglong)(iVar15 + 1);
      pFVar14 = (FVirtualTexturePhysicalSpace *)&pFVar14->_padding_;
    }
  }
  else {
LAB_1458cb496:
    local_98[0].PageTableFormat = UInt32;
  }
  local_98[0].Dimensions = param_4->Dimensions;
  local_98[0].NumPageTableLayers = (uchar)(this->UniquePageTableLayers).ArrayNum;
  local_98[0].TileSize = param_4->TileSize;
  local_98[0].TileBorderSize = param_4->TileBorderSize;
  local_98[0].bPrivateSpace = (param_4->field11_0x44).PackedFlags & 1;
  local_98[0].MaxSpaceSize = 0x1000;
  if (param_4->MaxSpaceSize != 0) {
    local_98[0].MaxSpaceSize = param_4->MaxSpaceSize;
  }
  local_98[0].IndirectionTextureSize = param_4->IndirectionTextureSize;
  local_98[0].bContinuousUpdate = (byte)param_6;
  pFVar13 = FVirtualTextureSystem::AcquireSpace(param_2,param_1,local_98,param_4->ForceSpaceID,this)
  ;
  this->Space = pFVar13;
  *(uint *)&this->_padding_ = (uint)pFVar13->ID;
  *(EVTPageTableFormat *)((longlong)&this->_padding_ + 5) = (pFVar13->Description).PageTableFormat;
  return this;
}

// ~FAllocatedVirtualTexture @ 1458cf540

void __thiscall FAllocatedVirtualTexture::~FAllocatedVirtualTexture(FAllocatedVirtualTexture *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAllocatedVirtualTexture__6B_;
  DestructItems<FAllocatedVirtualTexture::FPageTableLayerDesc,int>
            ((FPageTableLayerDesc *)(this->UniquePageTableLayers).AllocatorInstance.Data,
             (this->UniquePageTableLayers).ArrayNum);
  pFVar1 = (this->UniquePageTableLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UniqueProducers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAllocatedVirtualTexture__6B_;
  return;
}

// AddUniquePhysicalSpace @ 1458d9b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

uint __thiscall
FAllocatedVirtualTexture::AddUniquePhysicalSpace
          (FAllocatedVirtualTexture *this,FRHICommandListBase *param_1,
          FVirtualTexturePhysicalSpace *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FVirtualTexturePhysicalSpace *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  TArray<FAllocatedVirtualTexture::FPageTableLayerDesc,TSizedDefaultAllocator<32>_> *pTVar10;
  
  if (((this->_padding_ & 0x200000000) != 0) &&
     (uVar7 = 0, 0 < (this->UniquePageTableLayers).ArrayNum)) {
    lVar8 = 0;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar7 < (this->UniquePageTableLayers).ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      if (*(FVirtualTexturePhysicalSpace **)
           ((this->UniquePageTableLayers).AllocatorInstance.Data + lVar8) == param_2) {
        uVar6 = 0;
        if ((int)uVar7 < (this->UniquePageTableLayers).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        if ((byte)(this->UniquePageTableLayers).AllocatorInstance.Data[lVar8 + 8] == param_3) {
          uVar6 = 0;
          if ((int)uVar7 < (this->UniquePageTableLayers).ArrayNum) {
            uVar6 = uVar9;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return uVar7;
          }
          if ((byte)(this->UniquePageTableLayers).AllocatorInstance.Data[lVar8 + 9] == param_4) {
            return uVar7;
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (this->UniquePageTableLayers).ArrayNum);
  }
  pTVar10 = &this->UniquePageTableLayers;
  uVar7 = (this->UniquePageTableLayers).ArrayNum;
  piVar1 = &(this->UniquePageTableLayers).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->UniquePageTableLayers).ArrayNum = uVar7 + 1;
  lVar8 = (longlong)(int)uVar7 * 0x10;
  DefaultConstructItems<FAllocatedVirtualTexture::FPageTableLayerDesc,int>
            ((pTVar10->AllocatorInstance).Data + lVar8,1);
  if ((7 < uVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                         ,0x184,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  uVar9 = ~uVar7 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar7 < (this->UniquePageTableLayers).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  pFVar2 = (pTVar10->AllocatorInstance).Data;
  pFVar3 = *(FVirtualTexturePhysicalSpace **)(pFVar2 + lVar8);
  if (pFVar3 != param_2) {
    *(FVirtualTexturePhysicalSpace **)(pFVar2 + lVar8) = param_2;
    if (param_2 != (FVirtualTexturePhysicalSpace *)0x0) {
      param_2->NumRefs = param_2->NumRefs + 1;
    }
    if (pFVar3 != (FVirtualTexturePhysicalSpace *)0x0) {
      if ((pFVar3->NumRefs == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumRefs > 0u",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTexturePhysicalSpace.h"
                             ,0x75,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      pFVar3->NumRefs = pFVar3->NumRefs - 1;
    }
  }
  uVar6 = 0;
  if ((int)uVar7 < (this->UniquePageTableLayers).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  (pTVar10->AllocatorInstance).Data[lVar8 + 8] = SUB41(param_3,0);
  uVar6 = 0;
  if ((int)uVar7 < (this->UniquePageTableLayers).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  (pTVar10->AllocatorInstance).Data[lVar8 + 9] = SUB41(param_4,0);
  uVar6 = 0;
  if ((int)uVar7 < (this->UniquePageTableLayers).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  *(undefined2 *)((pTVar10->AllocatorInstance).Data + lVar8 + 10) = 0;
  uVar6 = 0;
  if ((int)uVar7 < (this->UniquePageTableLayers).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  (pTVar10->AllocatorInstance).Data[lVar8 + 0xc] = (FScriptContainerElement)0x0;
  if ((param_2 != (FVirtualTexturePhysicalSpace *)0x0) &&
     (param_2->NumResourceRefs = param_2->NumResourceRefs + 1, param_2->NumResourceRefs == 1)) {
    FRenderResource::InitResource((FRenderResource *)param_2,param_1);
  }
  return uVar7;
}

// AddUniqueProducer @ 1458d9f10

uint __thiscall
FAllocatedVirtualTexture::AddUniqueProducer
          (FAllocatedVirtualTexture *this,FVirtualTextureProducerHandle *param_1,
          FVirtualTextureProducer *param_2)

{
  int *piVar1;
  TArray<FAllocatedVirtualTexture::FProducerDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  FVirtualTextureProducerHandle FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  
  pTVar2 = &this->UniqueProducers;
  uVar7 = 0;
  if (0 < (this->UniqueProducers).ArrayNum) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar7 < (this->UniqueProducers).ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return uVar7;
        }
      }
      if (*(uint *)((pTVar2->AllocatorInstance).Data + lVar12) == param_1->PackedValue) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar7 < (this->UniqueProducers).ArrayNum);
  }
  uVar7 = (this->UniqueProducers).ArrayNum;
  piVar1 = &(this->UniqueProducers).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
    (this->UniqueProducers).ArrayNum = uVar7;
  }
  (this->UniqueProducers).ArrayNum = uVar7 + 1;
  DefaultConstructItems<FAllocatedVirtualTexture::FProducerDesc,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 8,1);
  if (7 < uVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                       ,0x155,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  iVar11 = 0;
  if (param_2 != (FVirtualTextureProducer *)0x0) {
    if ((param_2->Description).Dimensions != (uchar)this->_padding_) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProducerDesc.Dimensions == Description.Dimensions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                         ,0x15c,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    if ((param_2->Description).TileSize != (uint)this->_padding_) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProducerDesc.TileSize == Description.TileSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                         ,0x15d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    if ((param_2->Description).TileBorderSize != *(uint *)((longlong)&this->_padding_ + 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProducerDesc.TileBorderSize == Description.TileBorderSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                         ,0x15e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    uVar10 = (param_2->Description).BlockWidthInTiles;
    uVar8 = (uint)this->_padding_ / uVar10;
    uVar13 = 1;
    if (uVar8 != 0) {
      uVar13 = uVar8;
    }
    uVar3 = (ulonglong)(uVar13 - 1) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar9 = 0x20 - (int)lVar12;
    uVar14 = 0x20 - iVar9;
    uVar8 = *(uint *)((longlong)&this->_padding_ + 4) / (param_2->Description).BlockHeightInTiles;
    uVar13 = 1;
    if (uVar8 != 0) {
      uVar13 = uVar8;
    }
    uVar3 = (ulonglong)(uVar13 - 1) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = 0x20 - (int)lVar12;
    uVar13 = 0x20 - iVar11;
    if (uVar10 << ((byte)uVar14 & 0x1f) != (int)this->_padding_) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProducerDesc.BlockWidthInTiles << MipBiasX == BlockWidthInTiles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                         ,0x162,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    if ((param_2->Description).BlockHeightInTiles << ((byte)uVar13 & 0x1f) !=
        *(int *)((longlong)&this->_padding_ + 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProducerDesc.BlockHeightInTiles << MipBiasY == BlockHeightInTiles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                         ,0x163,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    if (uVar14 < uVar13) {
      iVar11 = iVar9;
    }
    iVar11 = 0x20 - iVar11;
    uVar10 = (uint)(param_2->Description).MaxLevel + iVar11;
    if (uVar10 < *(uint *)((longlong)&this->_padding_ + 4)) {
      uVar10 = *(uint *)((longlong)&this->_padding_ + 4);
    }
    *(uint *)((longlong)&this->_padding_ + 4) = uVar10;
  }
  FVar4 = *param_1;
  uVar10 = 0;
  if ((int)uVar7 < (this->UniqueProducers).ArrayNum) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  *(FVirtualTextureProducerHandle *)
   ((this->UniqueProducers).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = FVar4;
  uVar10 = 0;
  if ((int)uVar7 < (this->UniqueProducers).ArrayNum) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  (this->UniqueProducers).AllocatorInstance.Data[(longlong)(int)uVar7 * 8 + 4] = SUB41(iVar11,0);
  return uVar7;
}

// AssignVirtualAddress @ 1458de7c0

void __thiscall
FAllocatedVirtualTexture::AssignVirtualAddress(FAllocatedVirtualTexture *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if ((int)this->_padding_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VirtualAddress == ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                       ,0x73,L"Trying to assign vAddress to AllocatedVT, already assigned");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("vAddress != ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)&this->_padding_ = param_1;
  uVar4 = param_1 >> 1 & 0x55555555;
  uVar3 = ((param_1 & 0x55555555) >> 1 ^ param_1 & 0x55555555) & 0x33333333;
  uVar3 = (uVar3 >> 2 ^ uVar3) & 0xf0f0f0f;
  uVar3 = (uVar3 >> 4 ^ uVar3) & 0xff00ff;
  *(uint *)((longlong)&this->_padding_ + 4) = (uVar3 >> 8 ^ uVar3) & 0xffff;
  uVar3 = (uVar4 >> 1 ^ uVar4) & 0x33333333;
  uVar3 = (uVar3 >> 2 ^ uVar3) & 0xf0f0f0f;
  uVar3 = (uVar3 >> 4 ^ uVar3) & 0xff00ff;
  *(uint *)&this->_padding_ = (uVar3 >> 8 ^ uVar3) & 0xffff;
  return;
}

// CalculatePersistentHash @ 1458e0ab0

uint __thiscall
FAllocatedVirtualTexture::CalculatePersistentHash
          (FAllocatedVirtualTexture *this,FAllocatedVTDescription *param_1,
          FVirtualTextureProducer **param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = 0;
  uVar7 = 0;
  uVar5 = (uint)param_1->NumTextureLayers;
  if (param_1->NumTextureLayers != 0) {
    do {
      if (*param_2 != (FVirtualTextureProducer *)0x0) {
        uVar1 = uVar1 - uVar7 ^ uVar7 >> 0xd;
        uVar3 = (-0x61c88647 - uVar1) - uVar7 ^ uVar1 << 8;
        uVar6 = (uVar7 - uVar3) - uVar1 ^ uVar3 >> 0xd;
        uVar1 = (uVar1 - uVar6) - uVar3 ^ uVar6 >> 0xc;
        uVar4 = (uVar3 - uVar1) - uVar6 ^ uVar1 << 0x10;
        uVar6 = (uVar6 - uVar4) - uVar1 ^ uVar4 >> 5;
        uVar3 = (uVar1 - uVar6) - uVar4 ^ uVar6 >> 3;
        uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
        uVar1 = ((*param_2)->Description).FullNameHash;
        uVar4 = ((uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
        uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
        uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
        uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xc;
        uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 0x10;
        uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 5;
        uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 3;
        uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 10;
        uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xf;
      }
      uVar7 = uVar7 + 1;
      param_2 = param_2 + 1;
    } while (uVar7 < uVar5);
  }
  uVar7 = param_1->TileSize;
  uVar3 = param_1->TileBorderSize;
  uVar1 = uVar1 - uVar7 ^ uVar7 >> 0xd;
  uVar4 = (-0x61c88647 - uVar1) - uVar7 ^ uVar1 << 8;
  uVar6 = (uVar7 - uVar4) - uVar1 ^ uVar4 >> 0xd;
  uVar1 = (uVar1 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar7 = (uVar4 - uVar1) - uVar6 ^ uVar1 << 0x10;
  uVar4 = (uVar6 - uVar7) - uVar1 ^ uVar7 >> 5;
  uVar1 = (uVar1 - uVar4) - uVar7 ^ uVar4 >> 3;
  uVar7 = (uVar7 - uVar1) - uVar4 ^ uVar1 << 10;
  uVar4 = ((uVar4 - uVar7) - uVar1 ^ uVar7 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar7 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar3 = (uVar4 - uVar7) - uVar1 ^ uVar7 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar7 = (uVar7 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar7) - uVar1 ^ uVar7 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar1 = (uVar7 - uVar1) - uVar3 ^ uVar1 >> 0xf;
  iVar2 = uVar1 - param_1->Dimensions;
  uVar7 = 0x9e3779b9 - uVar1 ^ iVar2 * 0x100;
  uVar3 = (param_1->Dimensions - uVar7) - iVar2 ^ uVar7 >> 0xd;
  uVar1 = (iVar2 - uVar3) - uVar7 ^ uVar3 >> 0xc;
  uVar7 = (uVar7 - uVar1) - uVar3 ^ uVar1 << 0x10;
  uVar3 = (uVar3 - uVar7) - uVar1 ^ uVar7 >> 5;
  uVar1 = (uVar1 - uVar3) - uVar7 ^ uVar3 >> 3;
  uVar7 = (uVar7 - uVar1) - uVar3 ^ uVar1 << 10;
  uVar1 = (uVar3 - uVar7) - uVar1 ^ uVar7 >> 0xf;
  iVar2 = uVar1 - uVar5;
  uVar7 = 0x9e3779b9 - uVar1 ^ iVar2 * 0x100;
  uVar3 = (uVar5 - uVar7) - iVar2 ^ uVar7 >> 0xd;
  uVar1 = (iVar2 - uVar3) - uVar7 ^ uVar3 >> 0xc;
  uVar5 = (uVar7 - uVar1) - uVar3 ^ uVar1 << 0x10;
  uVar7 = (uVar3 - uVar5) - uVar1 ^ uVar5 >> 5;
  uVar1 = (uVar1 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar1) - uVar7 ^ uVar1 << 10;
  uVar1 = (uVar7 - uVar5) - uVar1 ^ uVar5 >> 0xf;
  iVar2 = uVar1 - (param_1->field11_0x44).PackedFlags;
  uVar5 = 0x9e3779b9 - uVar1 ^ iVar2 * 0x100;
  uVar7 = ((param_1->field11_0x44).PackedFlags - uVar5) - iVar2 ^ uVar5 >> 0xd;
  uVar1 = (iVar2 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  uVar5 = (uVar5 - uVar1) - uVar7 ^ uVar1 << 0x10;
  uVar7 = (uVar7 - uVar1) - uVar5 ^ uVar5 >> 5;
  uVar1 = (uVar1 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar1) - uVar7 ^ uVar1 << 10;
  return (uVar7 - uVar5) - uVar1 ^ uVar5 >> 0xf;
}

// Destroy @ 1458e8b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAllocatedVirtualTexture::Destroy(FAllocatedVirtualTexture *this,FVirtualTextureSystem *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  FVirtualTextureSpace *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_10f8 [32];
  undefined1 local_10a8;
  undefined1 local_10a7;
  undefined1 local_10a6 [6];
  ForAnyElementType local_10a0;
  uint local_1098;
  uint uStack_1094;
  longlong local_1090;
  TArray<FMappedTexturePage,TSizedDefaultAllocator<32>_> local_1088;
  FVirtualTextureSystem *local_1070;
  TStringBuilderBase<wchar_t> local_1068;
  wchar_t local_1048 [2048];
  ulonglong local_48 [2];
  
  local_48[1] = 0x1458e8b72;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  local_1070 = param_1;
  if (((int)this->_padding_ != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                         ,0x7c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LockOrUnlockTiles(this,param_1,false);
  uVar9 = 0;
  uVar13 = (int)this->_padding_ * (int)this->_padding_;
  uVar14 = *(int *)((longlong)&this->_padding_ + 4) * *(int *)((longlong)&this->_padding_ + 4);
  local_10a0.Data = (FScriptContainerElement *)0x0;
  local_1098 = 0;
  uStack_1094 = 0;
  if (0 < (this->UniquePageTableLayers).ArrayNum) {
    lVar16 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->UniquePageTableLayers).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->UniquePageTableLayers).AllocatorInstance.Data + lVar16) != 0) {
        uVar6 = 0;
        if ((int)uVar9 < (this->UniquePageTableLayers).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_1090 = *(longlong *)((this->UniquePageTableLayers).AllocatorInstance.Data + lVar16);
        if (((local_10a0.Data <= (FScriptContainerElement *)&local_1090) &&
            ((FScriptContainerElement *)&local_1090 <
             local_10a0.Data + (longlong)(int)uStack_1094 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_1098 == uStack_1094) {
          local_1098 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_10a0,(int *)&uStack_1094);
        }
        lVar7 = (longlong)(int)local_1098;
        local_1098 = local_1098 + 1;
        *(longlong *)(local_10a0.Data + lVar7 * 8) = local_1090;
      }
      uVar9 = uVar9 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar9 < (this->UniquePageTableLayers).ArrayNum);
  }
  uVar9 = local_1098;
  pFVar2 = local_10a0.Data + (longlong)(int)local_1098 * 8;
  FVar10.Data = local_10a0.Data;
  while( true ) {
    if (local_1098 != uVar9) {
      local_10a8 = 0;
      `TCheckedPointerIterator<FVirtualTexturePhysicalSpace_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_10a8);
    }
    if (FVar10.Data == pFVar2) break;
    FTexturePagePool::UnmapAllPagesForSpace
              ((FTexturePagePool *)(*(longlong *)FVar10.Data + 0x58),param_1,this->Space->ID,
               (uint)this->_padding_,uVar13,uVar14,*(uint *)((longlong)&this->_padding_ + 4));
    FVar10.Data = FVar10.Data + 8;
  }
  uVar9 = 0;
  if (0 < (this->UniquePageTableLayers).ArrayNum) {
    lVar16 = 0;
    do {
      uVar15 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->UniquePageTableLayers).ArrayNum) {
        uVar6 = uVar15;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->UniquePageTableLayers).AllocatorInstance.Data + lVar16) != 0) {
        uVar6 = 0;
        if ((int)uVar9 < (this->UniquePageTableLayers).ArrayNum) {
          uVar6 = uVar15;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar7 = *(longlong *)((this->UniquePageTableLayers).AllocatorInstance.Data + lVar16);
        if ((*(int *)(lVar7 + 0x260) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumResourceRefs > 0u",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTexturePhysicalSpace.h"
                               ,0x7b,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        piVar1 = (int *)(lVar7 + 0x260);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uVar6 = 0;
          if ((int)uVar9 < (this->UniquePageTableLayers).ArrayNum) {
            uVar6 = uVar15;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FRenderResource::ReleaseResource
                    (*(FRenderResource **)
                      ((this->UniquePageTableLayers).AllocatorInstance.Data + lVar16));
        }
        uVar6 = 0;
        if ((int)uVar9 < (this->UniquePageTableLayers).ArrayNum) {
          uVar6 = uVar15;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->UniquePageTableLayers).AllocatorInstance.Data;
        lVar7 = *(longlong *)(pFVar2 + lVar16);
        if (lVar7 != 0) {
          *(undefined8 *)(pFVar2 + lVar16) = 0;
          if ((*(int *)(lVar7 + 0x25c) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumRefs > 0u",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTexturePhysicalSpace.h"
                                 ,0x75,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(int *)(lVar7 + 0x25c) = *(int *)(lVar7 + 0x25c) + -1;
        }
      }
      uVar9 = uVar9 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar9 < (this->UniquePageTableLayers).ArrayNum);
  }
  uVar12 = 0;
  pFVar11 = this->Space;
  if ((pFVar11->Description).NumPageTableLayers != '\0') {
    do {
      if (((uint)(pFVar11->Description).NumPageTableLayers <= (uint)uVar12) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PageTableLayerIndex < Description.NumPageTableLayers",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.h"
                             ,0x43,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_1088.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1088.ArrayNum = 0;
      local_1088.ArrayMax = 0;
      FTexturePageMap::GetMappedPagesInRange
                (pFVar11->PhysicalPageMap + uVar12,(uint)this->_padding_,uVar13,uVar14,&local_1088);
      if (0 < local_1088.ArrayNum) {
        local_1068.Base = local_1048;
        local_1068.CurPos = local_1048;
        local_1068.bIsDynamic = false;
        local_1068.bIsExternal = false;
        local_1068.End = (wchar_t *)local_48;
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_1068,
                   L"Mapped pages remain after releasing AllocatedVT - vAddress: %d, Size: %d x %d, PhysicalSpaces: ["
                  );
        uVar9 = local_1098;
        uVar8 = (ulonglong)(int)local_1098;
        pFVar2 = local_10a0.Data + uVar8 * 8;
        FVar10.Data = local_10a0.Data;
        while( true ) {
          if ((uint)uVar8 != uVar9) {
            local_10a7 = 0;
            `TCheckedPointerIterator<FVirtualTexturePhysicalSpace_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_10a7);
          }
          if (FVar10.Data == pFVar2) break;
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_1068,L"%d ");
          uVar8 = (ulonglong)local_1098;
          FVar10.Data = FVar10.Data + 8;
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_1068,L"], MappedPages: [");
        iVar4 = local_1088.ArrayNum;
        uVar8 = (ulonglong)local_1088.ArrayNum;
        pFVar2 = local_1088.AllocatorInstance.Data + uVar8 * 8;
        FVar10.Data = local_1088.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar8 != iVar4) {
            local_10a6[0] = 0;
            `TCheckedPointerIterator<FMappedTexturePage,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_10a6);
          }
          if (FVar10.Data == pFVar2) break;
          TStringBuilderBase<wchar_t>::AppendfImpl
                    (&local_1068,L"(vAddress: %d, PhysicalSpace: %d) ");
          uVar8 = local_1088._8_8_ & 0xffffffff;
          FVar10.Data = FVar10.Data + 8;
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_1068,L"]");
        if (2 < (byte)LogVirtualTexturing._0_1_) {
          if (local_1068.End < local_1068.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1068,1);
          }
          *local_1068.CurPos = L'\0';
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1068);
      }
      if (local_1088.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1088.AllocatorInstance.Data);
      }
      pFVar11 = this->Space;
      uVar9 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar9;
    } while (uVar9 < (pFVar11->Description).NumPageTableLayers);
  }
  if (local_10a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10a0.Data);
  }
  FVirtualTextureAllocator::Free(&this->Space->Allocator,this);
  FVirtualTextureSystem::ReleaseSpace(local_1070,this->Space);
  return;
}

// GetNumPageTableTextures @ 145900f10

uint __thiscall FAllocatedVirtualTexture::GetNumPageTableTextures(FAllocatedVirtualTexture *this)

{
  return (this->Space->Description).NumPageTableLayers + 3 >> 2;
}

// GetPackedPageTableUniform @ 145901530

void __thiscall
FAllocatedVirtualTexture::GetPackedPageTableUniform
          (FAllocatedVirtualTexture *this,TIntVector4<unsigned_int> *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  uint uVar10;
  FVirtualTexturePhysicalSpace *pFVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  if (0xf < (uint)this->_padding_) {
    *(undefined8 *)&param_1[1].field0_0x0 = 0;
    *(undefined8 *)((longlong)&param_1[1].field0_0x0 + 8) = 0;
    *(undefined8 *)&param_1->field0_0x0 = 0;
    *(undefined8 *)((longlong)&param_1->field0_0x0 + 8) = 0;
    return;
  }
  uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
  lVar6 = this->_padding_;
  lVar7 = this->_padding_;
  lVar8 = this->_padding_;
  iVar3 = *(int *)((longlong)&this->_padding_ + 4);
  iVar4 = *(int *)((longlong)&this->_padding_ + 4);
  uVar12 = 0x1f;
  bVar15 = (int)this->_padding_ != 0;
  if (bVar15) {
    for (; (uint)this->_padding_ >> uVar12 == 0; uVar12 = uVar12 - 1) {
    }
  }
  uVar14 = 0;
  if (bVar15) {
    uVar14 = uVar12;
  }
  pFVar11 = GetPhysicalSpaceForPageTableLayer(this,0);
  if (pFVar11 == (FVirtualTexturePhysicalSpace *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (pFVar11->DescriptionExt).ResidencyMipMapBiasGroup;
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 3);
  uVar10 = VirtualTextureScalability::GetMaxAnisotropy();
  fVar9 = __real_3f800000;
  uVar12 = 0;
  if (uVar10 != 0) {
    uVar5 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = uVar5;
    }
  }
  *(float *)&param_1->field0_0x0 = __real_3f800000 / (float)(uint)this->_padding_;
  uVar10 = *(uint *)((longlong)&this->_padding_ + 4);
  param_1[1].field0_0x0._s_0.Y = ((iVar13 << 4 | uVar14) << 0xc | (uint)lVar6) << 0xc | uVar2;
  *(float *)((longlong)&param_1->field0_0x0 + 8) = (float)(uint)((int)lVar7 * (int)lVar8);
  *(float *)((longlong)&param_1->field0_0x0 + 4) = fVar9 / (float)uVar10;
  *(float *)((longlong)&param_1->field0_0x0 + 0xc) = (float)(uint)(iVar3 * iVar4);
  *(float *)&param_1[1].field0_0x0 = (float)uVar12;
  param_1[1].field0_0x0._s_0.Z = (uint)bVar1 << 4 | *(uint *)((longlong)&this->_padding_ + 4);
  param_1[1].field0_0x0._s_0.W = (int)this->_padding_ << 0x1c;
  return;
}

// GetPackedUniform @ 1459016a0

void __thiscall
FAllocatedVirtualTexture::GetPackedUniform
          (FAllocatedVirtualTexture *this,TIntVector4<unsigned_int> *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  
  uVar7 = 0;
  if (param_2 < *(byte *)((longlong)&this->_padding_ + 1)) {
    bVar1 = this->TextureLayers[param_2].UniquePageTableLayerIndex;
    if (((this->UniquePageTableLayers).ArrayNum <= (int)(uint)bVar1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar8 = __real_3f800000;
    lVar4 = *(longlong *)
             ((this->UniquePageTableLayers).AllocatorInstance.Data + (ulonglong)bVar1 * 0x10);
    if (lVar4 != 0) {
      uVar7 = *(int *)(lVar4 + 0x38) * *(int *)(lVar4 + 0x20);
    }
    if (uVar7 != 0) {
      uVar2 = (uint)this->_padding_;
      uVar3 = *(uint *)((longlong)&this->_padding_ + 4);
      (param_1->field0_0x0)._s_0.X = this->FallbackColorPerTextureLayer[param_2];
      fVar8 = fVar8 / (float)uVar7;
      *(float *)((longlong)&param_1->field0_0x0 + 4) = (float)uVar2 * fVar8;
      *(float *)((longlong)&param_1->field0_0x0 + 8) = (float)uVar3 * fVar8;
      if (*(char *)((longlong)&this->_padding_ + 5) != '\x01') {
        fVar8 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
      }
      *(float *)((longlong)&param_1->field0_0x0 + 0xc) = (float)(uVar2 + uVar3 * 2) * fVar8;
      return;
    }
  }
  *(undefined8 *)&param_1->field0_0x0 = 0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 8) = 0;
  return;
}

// GetPageTableIndirectionTexture @ 145901820

FRHITexture * __thiscall
FAllocatedVirtualTexture::GetPageTableIndirectionTexture(FAllocatedVirtualTexture *this)

{
  return (FRHITexture *)(this->Space->PageTableIndirection).TextureReferenceRHI.Reference;
}

// GetPageTableTexture @ 145901840

FRHITexture * __thiscall
FAllocatedVirtualTexture::GetPageTableTexture(FAllocatedVirtualTexture *this,uint param_1)

{
  FVirtualTextureSpace *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHITexture *pFVar4;
  
  pFVar1 = this->Space;
  if ((pFVar1->Description).NumPageTableLayers + 3 >> 2 <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PageTableIndex < GetNumPageTableTextures()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRHITexture *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FRHITexture *)pFVar1->PageTable[param_1].TextureReferenceRHI.Reference;
}

// GetPersistentHash @ 1459018b0

uint __thiscall FAllocatedVirtualTexture::GetPersistentHash(FAllocatedVirtualTexture *this)

{
  return this->PersistentHash;
}

// GetPhysicalSpaceForPageTableLayer @ 145901d60

FVirtualTexturePhysicalSpace * __thiscall
FAllocatedVirtualTexture::GetPhysicalSpaceForPageTableLayer
          (FAllocatedVirtualTexture *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVirtualTexturePhysicalSpace *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->UniquePageTableLayers).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVirtualTexturePhysicalSpace *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FVirtualTexturePhysicalSpace **)
          ((this->UniquePageTableLayers).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10);
}

// GetPhysicalTexture @ 145901de0

FRHITexture * __thiscall
FAllocatedVirtualTexture::GetPhysicalTexture(FAllocatedVirtualTexture *this,uint param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FRHITexture *pFVar6;
  
  if (param_1 < *(byte *)((longlong)&this->_padding_ + 1)) {
    bVar1 = this->TextureLayers[param_1].UniquePageTableLayerIndex;
    if ((this->UniquePageTableLayers).ArrayNum <= (int)(uint)bVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FRHITexture *)(*pcVar4)();
        return pFVar6;
      }
    }
    lVar2 = *(longlong *)
             ((this->UniquePageTableLayers).AllocatorInstance.Data + (ulonglong)bVar1 * 0x10);
    if ((lVar2 != 0) &&
       (plVar3 = *(longlong **)
                  (lVar2 + 0x118 + (ulonglong)this->TextureLayers[param_1].PhysicalTextureIndex * 8)
       , plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3);
      pFVar6 = (FRHITexture *)plVar3[1];
      (**(code **)(*plVar3 + 0x38))(plVar3);
      return pFVar6;
    }
  }
  return (FRHITexture *)0x0;
}

// GetPhysicalTextureSRV @ 145901eb0

FRHIShaderResourceView * __thiscall
FAllocatedVirtualTexture::GetPhysicalTextureSRV
          (FAllocatedVirtualTexture *this,uint param_1,bool param_2)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FRHIShaderResourceView *pFVar5;
  ulonglong uVar6;
  
  if (*(byte *)((longlong)&this->_padding_ + 1) <= param_1) {
    return (FRHIShaderResourceView *)0x0;
  }
  bVar1 = this->TextureLayers[param_1].UniquePageTableLayerIndex;
  if ((this->UniquePageTableLayers).ArrayNum <= (int)(uint)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRHIShaderResourceView *)(*pcVar3)();
      return pFVar5;
    }
  }
  lVar2 = *(longlong *)
           ((this->UniquePageTableLayers).AllocatorInstance.Data + (ulonglong)bVar1 * 0x10);
  if (lVar2 != 0) {
    uVar6 = (ulonglong)this->TextureLayers[param_1].PhysicalTextureIndex;
    if (param_2) {
      return *(FRHIShaderResourceView **)(lVar2 + (uVar6 + 0x33) * 8);
    }
    return *(FRHIShaderResourceView **)(lVar2 + (uVar6 + 0x2b) * 8);
  }
  return (FRHIShaderResourceView *)0x0;
}

// GetPhysicalTextureSize @ 145901fa0

uint __thiscall
FAllocatedVirtualTexture::GetPhysicalTextureSize(FAllocatedVirtualTexture *this,uint param_1)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (param_1 < *(byte *)((longlong)&this->_padding_ + 1)) {
    bVar1 = this->TextureLayers[param_1].UniquePageTableLayerIndex;
    if ((this->UniquePageTableLayers).ArrayNum <= (int)(uint)bVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    lVar2 = *(longlong *)
             ((this->UniquePageTableLayers).AllocatorInstance.Data + (ulonglong)bVar1 * 0x10);
    if (lVar2 != 0) {
      return *(int *)(lVar2 + 0x38) * *(int *)(lVar2 + 0x20);
    }
  }
  return 0;
}

// GetResidencyMipMapBiasGroup @ 145902e30

uint __thiscall
FAllocatedVirtualTexture::GetResidencyMipMapBiasGroup(FAllocatedVirtualTexture *this)

{
  FVirtualTexturePhysicalSpace *pFVar1;
  
  pFVar1 = GetPhysicalSpaceForPageTableLayer(this,0);
  if (pFVar1 != (FVirtualTexturePhysicalSpace *)0x0) {
    return (pFVar1->DescriptionExt).ResidencyMipMapBiasGroup;
  }
  return 0;
}

// LockOrUnlockTiles @ 1459100f0

void __thiscall
FAllocatedVirtualTexture::LockOrUnlockTiles
          (FAllocatedVirtualTexture *this,FVirtualTextureSystem *param_1,bool param_2)

{
  FScriptContainerElement FVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FVirtualTextureProducer *this_00;
  uint local_78;
  uint local_74;
  FVirtualTextureProducerHandle local_70;
  uint local_6c;
  uint local_68;
  FVirtualTextureLocalTile local_60;
  longlong local_58;
  FString local_50;
  
  local_78 = 0;
  if (0 < (this->UniqueProducers).ArrayNum) {
    local_58 = 0;
    do {
      lVar5 = local_58;
      uVar13 = 0;
      if ((int)local_78 < (this->UniqueProducers).ArrayNum) {
        uVar13 = ~local_78 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = (param_1->Producers).Producers.ArrayNum;
      uVar3 = *(uint *)((this->UniqueProducers).AllocatorInstance.Data + lVar5);
      uVar11 = uVar3 & 0x3fffff;
      if (uVar11 < uVar13) {
        if (((int)uVar13 <= (int)uVar11) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FVirtualTextureProducer *)
                  ((param_1->Producers).Producers.AllocatorInstance.Data + (ulonglong)uVar11 * 0xf8)
        ;
        uVar2._0_1_ = this_00[1].Description.bPersistentHighestMip;
        uVar2._1_1_ = this_00[1].Description.bContinuousUpdate;
        if (((uVar2 == (ushort)(uVar3 >> 0x16)) && (this_00 != (FVirtualTextureProducer *)0x0)) &&
           ((this_00->Description).bPersistentHighestMip != false)) {
          uVar13 = 0;
          if ((int)local_78 < (this->UniqueProducers).ArrayNum) {
            uVar13 = ~local_78 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar1 = (this->UniqueProducers).AllocatorInstance.Data[local_58 + 4];
          if ((*(uint *)((longlong)&this->_padding_ + 4) < (uint)(byte)FVar1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("MipBias <= MaxLevel",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                                 ,0xcc,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar13 = *(int *)((longlong)&this->_padding_ + 4) - (uint)(byte)FVar1;
          if ((this_00->Description).MaxLevel < uVar13) {
            ::FName::ToString((FName *)this_00,&local_50);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Local_vLevel <= Producer->GetMaxLevel()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\AllocatedVirtualTexture.cpp"
                               ,0xd3,
                               L"Invalid Local_vLevel %d for VT producer %s, Producer MaxLevel %d, MipBias %d, AllocatedVT MaxLevel %d"
                              );
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar12 = 1 << ((byte)uVar13 & 0x1f);
          local_74 = 0;
          uVar11 = ((uint)(this_00->Description).WidthInBlocks *
                    (this_00->Description).BlockWidthInTiles + -1 + uVar12) / uVar12;
          uVar9 = (ulonglong)
                  ((uint)(this_00->Description).HeightInBlocks *
                   (this_00->Description).BlockHeightInTiles + -1 + uVar12) / (ulonglong)uVar12;
          local_68 = (uint)uVar9;
          if (local_68 != 0) {
            do {
              uVar12 = 0;
              if (uVar11 != 0) {
                local_6c = uVar13 & 0xff;
                uVar7 = ((local_74 & 0xffff) << 8 ^ local_74 & 0xffff) & 0xff00ff;
                uVar7 = (uVar7 << 4 ^ uVar7) & 0xf0f0f0f;
                uVar7 = (uVar7 * 4 ^ uVar7) & 0x33333333;
                do {
                  uVar10 = ((uVar12 & 0xffff) << 8 ^ uVar12 & 0xffff) & 0xff00ff;
                  uVar10 = (uVar10 << 4 ^ uVar10) & 0xf0f0f0f;
                  uVar10 = (uVar10 * 4 ^ uVar10) & 0x33333333;
                  local_60.PackedValue._4_4_ =
                       ((uVar10 * 2 ^ uVar10) & 0x55555555 | ((uVar7 * 2 ^ uVar7) & 0xd5555555) * 2)
                       & 0xffffff | (uVar13 & 0xf) << 0x18;
                  local_60._s_1.PackedProducerHandle = uVar3;
                  iVar8 = (**(code **)((longlong)*this_00->VirtualTexture + 8))
                                    (this_00->VirtualTexture,local_6c & 0xff);
                  if (iVar8 != 0) {
                    uVar10 = (local_60.PackedValue._4_4_ & 0xffffff) >>
                             ((char)this->_padding_ * (char)iVar8 & 0x1fU) |
                             local_60.PackedValue._4_4_ & 0xff000000;
                    local_60.PackedValue._4_4_ =
                         (iVar8 * 0x1000000 + uVar10 ^ uVar10) & 0xf000000 ^ uVar10;
                  }
                  if (param_2) {
                    FVirtualTextureSystem::LockTile(param_1,&local_60);
                  }
                  else {
                    if ((param_1->bUpdating != false) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("!bUpdating",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                           ,0x4cc,L""), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    bVar6 = FTexturePageLocks::Unlock(&param_1->TileLocks,&local_60);
                    if (bVar6) {
                      iVar8 = TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_>::Remove
                                        (&param_1->TilesToLock,&local_60);
                      if (iVar8 < 2) {
                        if (iVar8 == 0) {
                          local_70.PackedValue = local_60._s_1.PackedProducerHandle;
                          UnlockTileInternal(&local_70,this_00,&local_60,param_1->Frame);
                        }
                      }
                      else {
                        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("NumTilesRemoved <= 1",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSystem.cpp"
                                           ,0x4d2,L"");
                        if (bVar6) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                      }
                    }
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar11);
                uVar9 = (ulonglong)local_68;
              }
              local_74 = local_74 + 1;
            } while (local_74 < (uint)uVar9);
          }
        }
      }
      local_78 = local_78 + 1;
      local_58 = local_58 + 8;
    } while ((int)local_78 < (this->UniqueProducers).ArrayNum);
  }
  return;
}

// TryMapLockedTiles @ 1459253c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAllocatedVirtualTexture::TryMapLockedTiles
          (FAllocatedVirtualTexture *this,FVirtualTextureSystem *param_1)

{
  FVirtualTextureProducerHandle *pFVar1;
  FScriptContainerElement FVar2;
  uchar uVar3;
  FVirtualTextureSpace *pFVar4;
  longlong lVar5;
  IVirtualTexture *pIVar6;
  FVirtualTextureSpace *this_00;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  FProducerEntry *pFVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FPhysicalTileLocation local_res18 [4];
  uint local_res20;
  uint local_84;
  uint local_7c;
  FString local_58;
  
  bVar8 = false;
  local_7c = 0;
  if (0 < (this->UniquePageTableLayers).ArrayNum) {
    bVar8 = false;
    do {
      uVar21 = 0;
      if ((int)local_7c < (this->UniquePageTableLayers).ArrayNum) {
        uVar21 = ~local_7c >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pFVar17 = (this->UniquePageTableLayers).AllocatorInstance.Data +
                (longlong)(int)local_7c * 0x10;
      FVar2 = pFVar17[8];
      if (((this->UniqueProducers).ArrayNum <= (int)(uint)(byte)FVar2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pFVar1 = (FVirtualTextureProducerHandle *)
               ((this->UniqueProducers).AllocatorInstance.Data + (ulonglong)(byte)FVar2 * 8);
      pFVar13 = FVirtualTextureProducerCollection::GetEntry(&param_1->Producers,pFVar1);
      if (pFVar13 != (FProducerEntry *)0x0) {
        pFVar4 = this->Space;
        uVar21 = *(int *)((longlong)&this->_padding_ + 4) - (uint)*(byte *)(pFVar1 + 1);
        uVar12 = (uint)(pFVar13->Producer).Description.MaxLevel;
        if (uVar12 < uVar21) {
          uVar21 = uVar12;
        }
        uVar18 = 1 << ((byte)uVar21 & 0x1f);
        uVar12 = ((uint)(pFVar13->Producer).Description.WidthInBlocks *
                  (pFVar13->Producer).Description.BlockWidthInTiles + -1 + uVar18) / uVar18;
        uVar18 = ((uint)(pFVar13->Producer).Description.HeightInBlocks *
                  (pFVar13->Producer).Description.BlockHeightInTiles + -1 + uVar18) / uVar18;
        lVar5 = *(longlong *)pFVar17;
        local_res20 = uVar21;
        if (((pFVar4->Description).NumPageTableLayers <= local_7c) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PageTableLayerIndex < Description.NumPageTableLayers",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.h"
                               ,0x43,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        local_84 = 0;
        if (uVar18 != 0) {
          do {
            uVar16 = 0;
            if (uVar12 != 0) {
              do {
                bVar14 = (byte)*(undefined4 *)((longlong)&this->_padding_ + 4);
                uVar15 = (uVar16 << (bVar14 & 0x1f)) + *(int *)((longlong)&this->_padding_ + 4) &
                         0xffff;
                uVar15 = (uVar15 << 8 ^ uVar15) & 0xff00ff;
                uVar15 = (uVar15 << 4 ^ uVar15) & 0xf0f0f0f;
                uVar19 = (uVar15 * 4 ^ uVar15) & 0x33333333;
                uVar15 = (local_84 << (bVar14 & 0x1f)) + (int)this->_padding_ & 0xffff;
                uVar15 = (uVar15 << 8 ^ uVar15) & 0xff00ff;
                uVar15 = (uVar15 << 4 ^ uVar15) & 0xf0f0f0f;
                uVar15 = (uVar15 * 4 ^ uVar15) & 0x33333333;
                uVar19 = ((uVar15 * 2 ^ uVar15) & 0xd5555555) * 2 |
                         (uVar19 * 2 ^ uVar19) & 0x55555555;
                uVar15 = FTexturePageMap::FindPageIndex
                                   (pFVar4->PhysicalPageMap + local_7c,bVar14,uVar19);
                if (uVar15 == 0xffffffff) {
                  uVar15 = ((uVar16 & 0xffff) << 8 ^ uVar16 & 0xffff) & 0xff00ff;
                  uVar15 = (uVar15 << 4 ^ uVar15) & 0xf0f0f0f;
                  uVar20 = (uVar15 * 4 ^ uVar15) & 0x33333333;
                  uVar15 = ((local_84 & 0xffff) << 8 ^ local_84 & 0xffff) & 0xff00ff;
                  uVar15 = (uVar15 << 4 ^ uVar15) & 0xf0f0f0f;
                  pIVar6 = (pFVar13->Producer).VirtualTexture;
                  uVar15 = (uVar15 * 4 ^ uVar15) & 0x33333333;
                  uVar15 = ((uVar15 * 2 ^ uVar15) & 0xd5555555) * 2 |
                           (uVar20 * 2 ^ uVar20) & 0x55555555;
                  cVar11 = (**(code **)((longlong)*pIVar6 + 8))(pIVar6,uVar21 & 0xff,uVar15);
                  uVar21 = FTexturePagePool::FindPageAddress
                                     ((FTexturePagePool *)(lVar5 + 0x58),pFVar1,(uchar)pFVar17[9],
                                      uVar15 >> ((char)this->_padding_ * cVar11 & 0x1fU),
                                      cVar11 + (char)local_res20);
                  uVar3 = *(uchar *)((longlong)&this->_padding_ + 4);
                  if (uVar21 == 0xffffffff) {
                    this_00 = this->Space;
                    bVar8 = true;
                    uVar21 = FTexturePageMap::FindPageIndex
                                       (pFVar4->PhysicalPageMap + local_7c,uVar3,uVar19);
                    if ((uVar21 != 0xffffffff) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("FindPageIndex(vLogSize, vAddress) == ~0u",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                                           ,0xe7,L""), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      uVar10 = (*pcVar7)();
                      return (bool)uVar10;
                    }
                    local_res18[0]._0_1_ =
                         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X._0_1_;
                    local_res18[0]._1_1_ =
                         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y._0_1_;
                    FVirtualTextureSpace::QueueUpdate
                              (this_00,(uchar)pFVar4->PhysicalPageMap[local_7c].LayerIndex,uVar3,
                               uVar19,cVar11 + uVar3,local_res18);
                    uVar21 = local_res20;
                  }
                  else {
                    FTexturePagePool::MapPage
                              ((FTexturePagePool *)(lVar5 + 0x58),this->Space,
                               *(FVirtualTexturePhysicalSpace **)pFVar17,(uchar)local_7c,uVar3,uVar3
                               ,uVar19,cVar11 + uVar3,(ushort)uVar21);
                    uVar21 = local_res20;
                  }
                }
                else {
                  uVar19 = 0;
                  if ((int)uVar15 < pFVar4->PhysicalPageMap[local_7c].Pages.ArrayNum) {
                    uVar19 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    uVar10 = (*pcVar7)();
                    return (bool)uVar10;
                  }
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < uVar12);
            }
            local_84 = local_84 + 1;
          } while (local_84 < uVar18);
        }
      }
      local_7c = local_7c + 1;
    } while ((int)local_7c < (this->UniquePageTableLayers).ArrayNum);
    if (((bVar8) && (this->FrameAllocated + 0x1e < param_1->Frame)) &&
       (5 < (byte)LogVirtualTexturing._0_1_)) {
      ::FName::ToString((FName *)&this->_padding_,&local_58);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return !bVar8;
}

