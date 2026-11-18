// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FPrecomputedVolumetricLightmapData @ 14834b3d0

FPrecomputedVolumetricLightmapData * __thiscall
FPrecomputedVolumetricLightmapData::FPrecomputedVolumetricLightmapData
          (FPrecomputedVolumetricLightmapData *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FPrecomputedVolumetricLightmapData__6B_;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  *(undefined4 *)((this->Bounds).Pad + 4) = 0x1000000;
  (this->IndirectionTexture)._padding_ = (longlong)&___7FVolumetricLightmapDataLayer__6B_;
  *(undefined8 *)&(this->IndirectionTextureDimensions).field0_0x0 = 0;
  (this->IndirectionTextureDimensions).field0_0x0._s_0.Z = 0;
  (this->IndirectionTexture).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndirectionTexture).Data.ArrayNum = 0;
  (this->IndirectionTexture).Data.ArrayMax = 0;
  (this->IndirectionTexture).DataSize = 0;
  (this->IndirectionTexture).Format = PF_Unknown;
  (this->IndirectionTexture).Texture.Reference = (FRHITexture *)0x0;
  (this->IndirectionTexture).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->IndirectionTexture).bNeedsCPUAccess = false;
  *(undefined8 *)&this->BrickSize = 0;
  *(undefined8 *)((longlong)&(this->BrickDataDimensions).field0_0x0 + 4) = 0;
  FVolumetricLightmapBasicBrickDataLayers::FVolumetricLightmapBasicBrickDataLayers
            ((FVolumetricLightmapBasicBrickDataLayers *)&this->BrickData);
  (this->SubLevelBrickPositions)._padding_ = 0;
  (this->SubLevelBrickPositions)._padding_ =
       (longlong)&___7__TResourceArray_U__TIntVector3_H_Math_UE___0A___6B_;
  (this->IndirectionTextureOriginalValues)._padding_ =
       (longlong)&___7__TResourceArray_UFColor___0A___6B_;
  (this->SubLevelBrickPositions)._padding_ = 0;
  (this->SubLevelBrickPositions).bNeedsCPUAccess = false;
  (this->IndirectionTextureOriginalValues)._padding_ = 0;
  (this->IndirectionTextureOriginalValues)._padding_ = 0;
  (this->IndirectionTextureOriginalValues).bNeedsCPUAccess = false;
  (this->SubLevelBrickPositionsBuffer).Reference = (FRHIBuffer *)0x0;
  (this->SubLevelBrickPositionsSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->IndirectionTextureOriginalValuesBuffer).Reference = (FRHIBuffer *)0x0;
  (this->IndirectionTextureOriginalValuesSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->BrickDataBaseOffsetInAtlas = 0;
  (this->SceneDataAdded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneDataAdded).ArrayNum = 0;
  (this->SceneDataAdded).ArrayMax = 0;
  (this->CPUSubLevelIndirectionTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CPUSubLevelIndirectionTable).ArrayNum = 0;
  (this->CPUSubLevelIndirectionTable).ArrayMax = 0;
  (this->CPUSubLevelBrickDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CPUSubLevelBrickDataList).ArrayNum = 0;
  (this->CPUSubLevelBrickDataList).ArrayMax = 0;
  return this;
}

// ~FPrecomputedVolumetricLightmapData @ 14834d6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmapData::~FPrecomputedVolumetricLightmapData
          (FPrecomputedVolumetricLightmapData *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FRHIShaderResourceView *pFVar3;
  FRHIBuffer *pFVar4;
  FRHIUnorderedAccessView *this_00;
  FRHITexture *this_01;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_VolumetricLightmapBuildData> FVar6;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uchar auVar7 [8];
  FName local_res8;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&___7FPrecomputedVolumetricLightmapData__6B_;
  if ((this->bTransient == false) &&
     (auVar7 = (uchar  [8])
               ((longlong)
                (*(int *)&(this->BrickData).field_0x1d8 + *(int *)&(this->BrickData).field_0x1a0 +
                *(int *)&(this->BrickData).field_0x18) +
                (ulonglong)(uint)((int)(this->IndirectionTextureOriginalValues)._padding_ << 2) +
                (ulonglong)(uint)((int)(this->SubLevelBrickPositions)._padding_ * 0xc) +
                (longlong)*(int *)&(this->BrickData).field_0x168 +
                (longlong)*(int *)&(this->BrickData).field_0x130 +
                (longlong)*(int *)&(this->BrickData).field_0xf8 +
                (longlong)*(int *)&(this->BrickData).field_0xc0 +
                (longlong)*(int *)&(this->BrickData).field_0x88 +
                (longlong)*(int *)&(this->BrickData).field_0x50 +
               (longlong)(this->IndirectionTexture).DataSize), auVar7 != (uchar  [8])0x0)) {
    FVar6 = StatPtr_STAT_VolumetricLightmapBuildData;
    if (StatPtr_STAT_VolumetricLightmapBuildData ==
        (FThreadSafeStaticStat<FStat_STAT_VolumetricLightmapBuildData>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_VolumetricLightmapBuildData");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_VolumetricLightmapBuildData>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VolumetricLightmapBuildData,
                         *pFVar5,L"Volumetric Lightmap","STATGROUP_MapBuildData","STATCAT_Advanced",
                         L"MapBuildData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar7;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_02,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar7);
      if (this_02->ScopeCount == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  pFVar2 = (this->CPUSubLevelBrickDataList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CPUSubLevelIndirectionTable).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SceneDataAdded).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->IndirectionTextureOriginalValuesSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->IndirectionTextureOriginalValuesBuffer).Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->SubLevelBrickPositionsSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->SubLevelBrickPositionsBuffer).Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->IndirectionTextureOriginalValues)._padding_);
  (this->IndirectionTextureOriginalValues)._padding_ =
       (longlong)&___7FResourceArrayUploadInterface__6B_;
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->SubLevelBrickPositions)._padding_);
  (this->SubLevelBrickPositions)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FVolumetricLightmapBasicBrickDataLayers::~FVolumetricLightmapBasicBrickDataLayers
            ((FVolumetricLightmapBasicBrickDataLayers *)&this->BrickData);
  this_00 = (this->IndirectionTexture).UAV.Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->IndirectionTexture).Texture.Reference;
  if (this_01 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar2 = (this->IndirectionTexture).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->IndirectionTexture)._padding_ = (longlong)&___7FResourceBulkDataInterface__6B_;
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// AddToSceneData @ 148355ea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmapData::AddToSceneData
          (FPrecomputedVolumetricLightmapData *this,FPrecomputedVolumetricLightmapData *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  double dVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  FPrecomputedVolumetricLightmapData *pFVar16;
  FPrecomputedVolumetricLightmapData *pFVar17;
  bool bVar18;
  int iVar19;
  Type TVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  FGlobalShaderMap *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  TArray<FPrecomputedVolumetricLightmapData_*,TSizedDefaultAllocator<32>_> *pTVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 local_res8 [8];
  FPrecomputedVolumetricLightmapData *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_2dc;
  longlong local_2d8;
  FPrecomputedVolumetricLightmapData *local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  int local_2bc;
  int local_2b8;
  uint local_2b4;
  uint local_2b0;
  TIntVector3<int>_u_0 local_2a8;
  TIntVector3<int>_u_0 local_298;
  undefined8 local_288;
  int local_280;
  TIntVector3<int>_u_0 local_278;
  FRHITransitionInfo local_268;
  FRHITransitionInfo local_238;
  FRHITransitionInfo local_208;
  FRHITransitionInfo local_1d8;
  FRHITransitionInfo local_1a8;
  FRHITransitionInfo local_178;
  FVolumetricLightmapDataLayer local_148;
  FParameters local_108;
  FParameters local_e8;
  TArrayView<FRHITransitionInfo_const_,int> local_c8;
  TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable> local_b8;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable> local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  
  pTVar30 = &this->SceneDataAdded;
  pFVar5 = (pTVar30->AllocatorInstance).Data;
  for (pFVar26 = pFVar5; pFVar26 != pFVar5 + (longlong)(this->SceneDataAdded).ArrayNum * 8;
      pFVar26 = pFVar26 + 8) {
    if (*(FPrecomputedVolumetricLightmapData **)pFVar26 == param_1) {
      if ((int)((longlong)pFVar26 - (longlong)pFVar5 >> 3) != -1) {
        return;
      }
      break;
    }
  }
  iVar19 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Y;
  iVar29 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z;
  if (iVar19 < (this->IndirectionTextureDimensions).field0_0x0._s_0.X) {
    iVar19 = (this->IndirectionTextureDimensions).field0_0x0._s_0.X;
  }
  if (iVar29 < iVar19) {
    iVar29 = iVar19;
  }
  local_res10 = param_1;
  if (iVar29 < 1) {
    bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
    TVar20 = (uint)bVar3;
    if (bVar3 == 5) {
      TVar20 = GMaxRHIFeatureLevel;
    }
    if ((int)TVar20 < 3) {
      if (0 < (param_1->IndirectionTexture).Data.ArrayNum) {
        if (((pFVar5 <= (FScriptContainerElement *)&local_res10) &&
            ((FScriptContainerElement *)&local_res10 <
             pFVar5 + (longlong)(this->SceneDataAdded).ArrayMax * 8)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (this->SceneDataAdded).ArrayNum;
        piVar1 = &(this->SceneDataAdded).ArrayMax;
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar30->AllocatorInstance,piVar1);
        }
        pFVar16 = local_res10;
        uVar28 = 0;
        (this->SceneDataAdded).ArrayNum = iVar19 + 1;
        *(FPrecomputedVolumetricLightmapData **)
         ((pTVar30->AllocatorInstance).Data + (longlong)iVar19 * 8) = local_res10;
        pTVar30 = &local_res10->CPUSubLevelBrickDataList;
        pFVar5 = (pTVar30->AllocatorInstance).Data;
        for (pFVar26 = pFVar5;
            pFVar26 != pFVar5 + (longlong)(local_res10->CPUSubLevelBrickDataList).ArrayNum * 8;
            pFVar26 = pFVar26 + 8) {
          if (*(longlong *)pFVar26 == 0) {
            uVar23 = (uint)((longlong)pFVar26 - (longlong)pFVar5 >> 3);
            if (uVar23 != 0xffffffff) goto LAB_14835697f;
            break;
          }
        }
        local_2c8 = 0;
        if (((pFVar5 <= (FScriptContainerElement *)&local_2c8) &&
            ((FScriptContainerElement *)&local_2c8 <
             pFVar5 + (longlong)(local_res10->CPUSubLevelBrickDataList).ArrayMax * 8)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar23 = (pFVar16->CPUSubLevelBrickDataList).ArrayNum;
        piVar1 = &(pFVar16->CPUSubLevelBrickDataList).ArrayMax;
        if (uVar23 == *piVar1) {
          uVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar30->AllocatorInstance,piVar1);
        }
        pFVar5 = (pTVar30->AllocatorInstance).Data;
        (pFVar16->CPUSubLevelBrickDataList).ArrayNum = uVar23 + 1;
        *(undefined8 *)(pFVar5 + (longlong)(int)uVar23 * 8) = local_2c8;
LAB_14835697f:
        if ((0xfe < (int)uVar23) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IndexInCPUSubLevelBrickDataList < 0xffui8",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                                ,0x22b,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar16 = local_res10;
        uVar25 = 0;
        if ((int)uVar23 < (local_res10->CPUSubLevelBrickDataList).ArrayNum) {
          uVar25 = ~uVar23 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(FPrecomputedVolumetricLightmapData **)
         ((pFVar16->CPUSubLevelBrickDataList).AllocatorInstance.Data + (longlong)(int)uVar23 * 8) =
             this;
        local_280 = (this->BrickDataDimensions).field0_0x0._s_0.Z;
        uVar2 = *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
        iVar19 = (int)(this->SubLevelBrickPositions)._padding_;
        iVar29 = this->BrickSize + 1;
        local_288._0_4_ = (int)uVar2;
        uVar27 = (longlong)(int)local_288 / (longlong)iVar29;
        local_2b4 = (uint)uVar27;
        uVar27 = uVar27 & 0xffffffff;
        local_288._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
        uVar31 = (longlong)local_288._4_4_ / (longlong)iVar29;
        local_2b0 = (uint)uVar31;
        uVar31 = uVar31 & 0xffffffff;
        if (0 < iVar19) {
          local_2b8 = local_2b0 * local_2b4;
          local_2d8 = 0;
          local_288 = uVar2;
          do {
            uVar6 = (longlong)(int)uVar28 / (longlong)(int)uVar27;
            local_res20 = (int)uVar28 % (int)uVar27;
            local_2c0 = (undefined4)
                        ((longlong)
                         ((ulonglong)(uint)((int)uVar6 >> 0x1f) << 0x20 | uVar6 & 0xffffffff) %
                        (longlong)(int)uVar31);
            local_2bc = (int)uVar28 / local_2b8;
            uVar25 = 0;
            if ((int)uVar28 < iVar19) {
              uVar25 = ~uVar28 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar16 = local_res10;
            uVar27 = (this->SubLevelBrickPositions)._padding_;
            if ((uVar27 & 1) != 0) {
              uVar27 = (longlong)&(this->SubLevelBrickPositions)._padding_ +
                       ((longlong)uVar27 >> 0x18);
            }
            uVar33 = (*(int *)(local_2d8 + 8 + uVar27) *
                      (local_res10->IndirectionTextureDimensions).field0_0x0._s_0.Y +
                     (int)((ulonglong)*(undefined8 *)(local_2d8 + uVar27) >> 0x20)) *
                     (local_res10->IndirectionTextureDimensions).field0_0x0._s_0.X +
                     (int)*(undefined8 *)(local_2d8 + uVar27);
            uVar32 = uVar33 * GPixelFormats[(local_res10->IndirectionTexture).Format].BlockBytes;
            uVar25 = 0;
            if ((int)uVar32 < (local_res10->IndirectionTexture).Data.ArrayNum) {
              uVar25 = ~uVar32 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar17 = local_res10;
            pFVar5 = (pFVar16->IndirectionTexture).Data.AllocatorInstance.Data;
            pFVar5[(int)uVar32] = SUB41(local_res20,0);
            pFVar5[(longlong)(int)uVar32 + 1] = SUB41(local_2c0,0);
            pFVar5[(longlong)(int)uVar32 + 2] = SUB41(local_2bc,0);
            pFVar5[(longlong)(int)uVar32 + 3] = (FScriptContainerElement)0x1;
            uVar25 = 0;
            if ((int)uVar33 < (local_res10->CPUSubLevelIndirectionTable).ArrayNum) {
              uVar25 = ~uVar33 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_2d8 = local_2d8 + 0xc;
            uVar27 = (ulonglong)local_2b4;
            uVar28 = uVar28 + 1;
            uVar31 = (ulonglong)local_2b0;
            (pFVar17->CPUSubLevelIndirectionTable).AllocatorInstance.Data[(int)uVar33] =
                 SUB41(uVar23,0);
            iVar19 = (int)(this->SubLevelBrickPositions)._padding_;
          } while ((int)uVar28 < iVar19);
        }
      }
    }
    else if ((param_1->IndirectionTexture).Texture.Reference != (FRHITexture *)0x0) {
      if (((pFVar5 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 <
           pFVar5 + (longlong)(this->SceneDataAdded).ArrayMax * 8)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar19 = (this->SceneDataAdded).ArrayNum;
      piVar1 = &(this->SceneDataAdded).ArrayMax;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar30->AllocatorInstance,piVar1);
      }
      (this->SceneDataAdded).ArrayNum = iVar19 + 1;
      *(FPrecomputedVolumetricLightmapData **)
       ((pTVar30->AllocatorInstance).Data + (longlong)iVar19 * 8) = local_res10;
      InitRHIForSubLevelResources(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate)
      ;
      bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
      TVar20 = (uint)bVar3;
      if (bVar3 == 5) {
        TVar20 = GMaxRHIFeatureLevel;
      }
      pFVar24 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar20]);
      TShaderMapRef<FPatchIndirectionTextureCS>::TShaderMapRef<FPatchIndirectionTextureCS>
                ((TShaderMapRef<FPatchIndirectionTextureCS> *)&local_68,pFVar24);
      local_e8.StartPosInNewVolume = this->BrickDataBaseOffsetInAtlas;
      uVar28 = (uint)(this->SubLevelBrickPositions)._padding_;
      local_e8.IndirectionTexture = (local_res10->IndirectionTexture).UAV.Reference;
      local_e8.SubLevelBrickPositions = (this->SubLevelBrickPositionsSRV).Reference;
      local_1a8.field1_0x8 = (FRHITransitionInfo_u_8)(local_res10->IndirectionTexture).UAV.Reference
      ;
      local_78.DataPtr = &local_1a8;
      local_78._12_4_ = uStack_2dc;
      local_78.ArrayNum = 1;
      local_1a8._padding_._0_4_ = 0xffffffff;
      local_1a8._padding_._4_2_ = 0xffff;
      local_1a8.Type = UAV;
      local_1a8.AccessBefore = None;
      local_1a8.AccessAfter = UAVCompute;
      local_1a8.Flags = None;
      local_1a8.CommitInfo.bIsSet = false;
      local_e8.NumBricks = uVar28;
      FRHIComputeCommandList::Transition
                ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_78,None);
      iVar19 = uVar28 + 0x3f;
      local_298._s_0.Y = 1;
      local_298._s_0.Z = 1;
      local_298._s_0.X = (int)(iVar19 + (iVar19 >> 0x1f & 0x3fU)) >> 6;
      FComputeShaderUtils::Dispatch<FPatchIndirectionTextureCS>
                ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_68,&local_e8
                 ,(TIntVector3<int> *)&local_298._s_0);
      local_178.field1_0x8 = (FRHITransitionInfo_u_8)(local_res10->IndirectionTexture).UAV.Reference
      ;
      local_58.DataPtr = &local_178;
      local_58._12_4_ = uStack_2dc;
      local_58.ArrayNum = 1;
      local_178._padding_._0_4_ = 0xffffffff;
      local_178._padding_._4_2_ = 0xffff;
      local_178.Type = UAV;
      local_178.AccessBefore = UAVCompute;
      local_178.AccessAfter = SRVMask;
      local_178.Flags = None;
      local_178.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition
                ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_58,None);
      ReleaseRHIForSubLevelResources(this);
    }
  }
  else {
    if (((pFVar5 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar5 + (longlong)(this->SceneDataAdded).ArrayMax * 8)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar19 = (this->SceneDataAdded).ArrayNum;
    piVar1 = &(this->SceneDataAdded).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar30->AllocatorInstance,piVar1);
    }
    (this->SceneDataAdded).ArrayNum = iVar19 + 1;
    *(FPrecomputedVolumetricLightmapData **)
     ((pTVar30->AllocatorInstance).Data + (longlong)iVar19 * 8) = local_res10;
    dVar8 = (this->Bounds).Min.field0_0x0._s_0.Y;
    (local_res10->Bounds).Min.field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
    (local_res10->Bounds).Min.field0_0x0._s_0.Y = dVar8;
    dVar8 = (this->Bounds).Max.field0_0x0._s_0.X;
    (local_res10->Bounds).Min.field0_0x0._s_0.Z = (this->Bounds).Min.field0_0x0._s_0.Z;
    (local_res10->Bounds).Max.field0_0x0._s_0.X = dVar8;
    dVar8 = (this->Bounds).Max.field0_0x0._s_0.Z;
    (local_res10->Bounds).Max.field0_0x0._s_0.Y = (this->Bounds).Max.field0_0x0._s_0.Y;
    (local_res10->Bounds).Max.field0_0x0._s_0.Z = dVar8;
    uVar9 = (this->Bounds).Pad[0];
    uVar10 = (this->Bounds).Pad[1];
    uVar11 = (this->Bounds).Pad[2];
    uVar12 = (this->Bounds).Pad[3];
    uVar13 = (this->Bounds).Pad[4];
    uVar14 = (this->Bounds).Pad[5];
    uVar15 = (this->Bounds).Pad[6];
    (local_res10->Bounds).IsValid = (this->Bounds).IsValid;
    (local_res10->Bounds).Pad[0] = uVar9;
    (local_res10->Bounds).Pad[1] = uVar10;
    (local_res10->Bounds).Pad[2] = uVar11;
    (local_res10->Bounds).Pad[3] = uVar12;
    (local_res10->Bounds).Pad[4] = uVar13;
    (local_res10->Bounds).Pad[5] = uVar14;
    (local_res10->Bounds).Pad[6] = uVar15;
    local_res10->BrickSize = this->BrickSize;
    *(undefined8 *)&(local_res10->BrickDataDimensions).field0_0x0 =
         *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
    (local_res10->BrickDataDimensions).field0_0x0._s_0.Z =
         (this->BrickDataDimensions).field0_0x0._s_0.Z;
    (local_res10->IndirectionTexture).Format = (this->IndirectionTexture).Format;
    *(undefined8 *)&(local_res10->IndirectionTextureDimensions).field0_0x0 =
         *(undefined8 *)&(this->IndirectionTextureDimensions).field0_0x0;
    (local_res10->IndirectionTextureDimensions).field0_0x0._s_0.Z =
         (this->IndirectionTextureDimensions).field0_0x0._s_0.Z;
    bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
    TVar20 = (uint)bVar3;
    if (bVar3 == 5) {
      TVar20 = GMaxRHIFeatureLevel;
    }
    if ((int)TVar20 < 3) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                (&(local_res10->IndirectionTexture).Data,&(this->IndirectionTexture).Data);
      piVar1 = &(local_res10->CPUSubLevelIndirectionTable).ArrayMax;
      (local_res10->CPUSubLevelIndirectionTable).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(local_res10->CPUSubLevelIndirectionTable).AllocatorInstance,0,piVar1);
      }
      pFVar16 = local_res10;
      iVar29 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z *
               (this->IndirectionTextureDimensions).field0_0x0._s_0.Y *
               (this->IndirectionTextureDimensions).field0_0x0._s_0.X;
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar29,&(local_res10->CPUSubLevelIndirectionTable).AllocatorInstance,
                          &(local_res10->CPUSubLevelIndirectionTable).ArrayNum,
                          &(local_res10->CPUSubLevelIndirectionTable).ArrayMax);
      memset((pFVar16->CPUSubLevelIndirectionTable).AllocatorInstance.Data + iVar19,0,
             (longlong)iVar29);
      piVar1 = &(local_res10->CPUSubLevelBrickDataList).ArrayMax;
      (local_res10->CPUSubLevelBrickDataList).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(local_res10->CPUSubLevelBrickDataList).AllocatorInstance,0,piVar1);
      }
      pFVar16 = local_res10;
      pTVar30 = &local_res10->CPUSubLevelBrickDataList;
      pFVar5 = (pTVar30->AllocatorInstance).Data;
      local_2d0 = this;
      if (((pFVar5 <= (FScriptContainerElement *)&local_2d0) &&
          ((FScriptContainerElement *)&local_2d0 <
           pFVar5 + (longlong)(local_res10->CPUSubLevelBrickDataList).ArrayMax * 8)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar19 = (pFVar16->CPUSubLevelBrickDataList).ArrayNum;
      piVar1 = &(pFVar16->CPUSubLevelBrickDataList).ArrayMax;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar30->AllocatorInstance,piVar1);
      }
      (pFVar16->CPUSubLevelBrickDataList).ArrayNum = iVar19 + 1;
      *(FPrecomputedVolumetricLightmapData **)
       ((pTVar30->AllocatorInstance).Data + (longlong)iVar19 * 8) = local_2d0;
    }
    else {
      if (((int)this->_padding_ == -1) &&
         (`FPrecomputedVolumetricLightmapData::AddToSceneData'::__l11::<lambda_1>::operator()
                    (local_res8), (int)this->_padding_ == -1)) {
        (**(code **)(this->_padding_ + 0x18))(this,0x154be5ed0);
      }
      if ((this->IndirectionTexture).Texture.Reference == (FRHITexture *)0x0) {
        if ((int)this->_padding_ == -1) {
          `FPrecomputedVolumetricLightmapData::AddToSceneData'::__l17::<lambda_2>::operator()
                    (local_res18);
        }
      }
      else {
        iVar19 = (this->BrickDataDimensions).field0_0x0._s_0.Z;
        iVar21 = this->BrickSize + 1;
        iVar29 = (this->BrickDataDimensions).field0_0x0._s_0.Y;
        iVar4 = (this->BrickDataDimensions).field0_0x0._s_0.X;
        bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
        TVar20 = (uint)bVar3;
        if (bVar3 == 5) {
          TVar20 = GMaxRHIFeatureLevel;
        }
        pFVar24 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar20]);
        TShaderMapRef<FMoveWholeIndirectionTextureCS>::TShaderMapRef<FMoveWholeIndirectionTextureCS>
                  ((TShaderMapRef<FMoveWholeIndirectionTextureCS> *)&local_b8,pFVar24);
        FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
                  (&local_148,&local_res10->IndirectionTexture);
        local_278._0_8_ = *(undefined8 *)&(this->IndirectionTextureDimensions).field0_0x0;
        local_278._s_0.Z = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z;
        FVolumetricLightmapDataLayer::CreateTargetTexture
                  (&local_148,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                   (TIntVector3<int> *)&local_278._s_0);
        FVolumetricLightmapDataLayer::CreateUAV
                  (&local_148,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
        local_268.field1_0x8.UAV = local_148.UAV.Reference;
        local_c8.DataPtr = &local_268;
        local_c8._12_4_ = uStack_2dc;
        local_c8.ArrayNum = 1;
        local_268._padding_._0_4_ = 0xffffffff;
        local_268._padding_._4_2_ = 0xffff;
        local_268.Type = UAV;
        local_268.AccessBefore = None;
        local_268.AccessAfter = UAVCompute;
        local_268.Flags = None;
        local_268.CommitInfo.bIsSet = false;
        FRHIComputeCommandList::Transition
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_c8,None);
        local_108.StartPosInNewVolume = this->BrickDataBaseOffsetInAtlas;
        local_108.OldIndirectionTexture = (this->IndirectionTexture).Texture.Reference;
        local_108.IndirectionTexture = local_148.UAV.Reference;
        iVar22 = (this->IndirectionTextureDimensions).field0_0x0._s_0.X + 3;
        local_108.StartPosInOldVolume = 0;
        local_2a8._s_0.X = (int)(iVar22 + (iVar22 >> 0x1f & 3U)) >> 2;
        iVar22 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Y + 3;
        local_2a8._s_0.Y = (int)(iVar22 + (iVar22 >> 0x1f & 3U)) >> 2;
        iVar22 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z + 3;
        local_2a8._s_0.Z = (int)(iVar22 + (iVar22 >> 0x1f & 3U)) >> 2;
        local_108.NumBricks = (iVar19 * iVar29 * iVar4) / (iVar21 * iVar21 * iVar21);
        FComputeShaderUtils::Dispatch<FMoveWholeIndirectionTextureCS>
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_b8,
                   &local_108,(TIntVector3<int> *)&local_2a8._s_0);
        local_238.field1_0x8.UAV = local_148.UAV.Reference;
        local_a8._12_4_ = uStack_2dc;
        local_a8.ArrayNum = 1;
        local_238._padding_._0_4_ = 0xffffffff;
        local_238._padding_._4_2_ = 0xffff;
        local_238.Type = UAV;
        local_238.AccessBefore = UAVCompute;
        local_238.AccessAfter = SRVMask;
        local_238.Flags = None;
        local_238.CommitInfo.bIsSet = false;
        local_a8.DataPtr = &local_238;
        FRHIComputeCommandList::Transition
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_a8,None);
        FVolumetricLightmapDataLayer::operator=(&local_res10->IndirectionTexture,&local_148);
        FVolumetricLightmapDataLayer::operator=
                  (&this->IndirectionTexture,&local_res10->IndirectionTexture);
        local_208.field1_0x8 = (FRHITransitionInfo_u_8)(this->IndirectionTexture).Texture.Reference;
        local_98.DataPtr = &local_208;
        local_98._12_4_ = uStack_2dc;
        local_98.ArrayNum = 1;
        local_208._padding_._0_4_ = 0xffffffff;
        local_208._padding_._4_2_ = 0xffff;
        local_208.Type = Texture;
        local_208.AccessBefore = None;
        local_208.AccessAfter = SRVMask;
        local_208.Flags = None;
        local_208.CommitInfo.bIsSet = false;
        FRHIComputeCommandList::Transition
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_98,None);
        local_1d8.field1_0x8.UAV = local_148.UAV.Reference;
        local_88.DataPtr = &local_1d8;
        local_88._12_4_ = uStack_2dc;
        local_88.ArrayNum = 1;
        local_1d8._padding_._0_4_ = 0xffffffff;
        local_1d8._padding_._4_2_ = 0xffff;
        local_1d8.Type = UAV;
        local_1d8.AccessBefore = None;
        local_1d8.AccessAfter = SRVMask;
        local_1d8.Flags = None;
        local_1d8.CommitInfo.bIsSet = false;
        FRHIComputeCommandList::Transition
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_88,None);
        if (local_148.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_148.UAV.Reference);
        }
        if (local_148.Texture.Reference != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_148.Texture.Reference);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// FinalizeImport @ 14837ba70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmapData::FinalizeImport(FPrecomputedVolumetricLightmapData *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_VolumetricLightmapBuildData> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar4 [8];
  FName local_res8;
  FStatMessage local_18;
  
  this->bTransient = false;
  auVar4 = (uchar  [8])
           ((longlong)
            (*(int *)&(this->BrickData).field_0x1d8 + *(int *)&(this->BrickData).field_0x1a0 +
            *(int *)&(this->BrickData).field_0x18) +
            (ulonglong)(uint)((int)(this->IndirectionTextureOriginalValues)._padding_ << 2) +
            (ulonglong)(uint)((int)(this->SubLevelBrickPositions)._padding_ * 0xc) +
            (longlong)*(int *)&(this->BrickData).field_0x168 +
            (longlong)*(int *)&(this->BrickData).field_0x130 +
            (longlong)*(int *)&(this->BrickData).field_0xf8 +
            (longlong)*(int *)&(this->BrickData).field_0xc0 +
            (longlong)*(int *)&(this->BrickData).field_0x88 +
            (longlong)*(int *)&(this->BrickData).field_0x50 +
           (longlong)(this->IndirectionTexture).DataSize);
  if (auVar4 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_VolumetricLightmapBuildData;
    if (StatPtr_STAT_VolumetricLightmapBuildData ==
        (FThreadSafeStaticStat<FStat_STAT_VolumetricLightmapBuildData>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_VolumetricLightmapBuildData");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_VolumetricLightmapBuildData>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VolumetricLightmapBuildData,
                         *pFVar2,L"Volumetric Lightmap","STATGROUP_MapBuildData","STATCAT_Advanced",
                         L"MapBuildData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_18.StatData.Pad = auVar4;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res8,(long64)auVar4);
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

// GetAllocatedBytes @ 14837e540

ulong64 __thiscall
FPrecomputedVolumetricLightmapData::GetAllocatedBytes(FPrecomputedVolumetricLightmapData *this)

{
  return (longlong)*(int *)&(this->BrickData).field_0x130 +
         (longlong)
         (*(int *)&(this->BrickData).field_0x1d8 + *(int *)&(this->BrickData).field_0x1a0 +
         *(int *)&(this->BrickData).field_0x18) +
         (ulonglong)(uint)((int)(this->IndirectionTextureOriginalValues)._padding_ << 2) +
         (ulonglong)(uint)((int)(this->SubLevelBrickPositions)._padding_ * 0xc) +
         (longlong)*(int *)&(this->BrickData).field_0x168 +
         (longlong)*(int *)&(this->BrickData).field_0xf8 +
         (longlong)*(int *)&(this->BrickData).field_0xc0 +
         (longlong)*(int *)&(this->BrickData).field_0x88 +
         (longlong)*(int *)&(this->BrickData).field_0x50 +
         (longlong)(this->IndirectionTexture).DataSize;
}

// HandleDataMovementInAtlas @ 14838b6a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmapData::HandleDataMovementInAtlas
          (FPrecomputedVolumetricLightmapData *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  longlong lVar3;
  void *_Src;
  FRHITexture *this_00;
  FRHIUnorderedAccessView *this_01;
  code *pcVar4;
  FShader *pFVar5;
  FShaderMapBase *pFVar6;
  bool bVar7;
  int iVar8;
  Type TVar9;
  int iVar10;
  ulonglong uVar11;
  FGlobalShaderMap *pFVar12;
  FShaderType *pFVar13;
  FName FVar14;
  FShaderParametersMetadata *pFVar15;
  FRHIComputeShader *pFVar16;
  FRHIBatchedShaderUnbinds *pFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  size_t _Size;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 local_res8 [8];
  int local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  FVolumetricLightmapDataLayer local_228;
  FRHITransitionInfo *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  TIntVector3<int>_u_0 local_1d8;
  TIntVector3<int>_u_0 local_1c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  TIntVector3<int>_u_0 local_1a8;
  TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable> local_198;
  undefined4 local_188;
  int local_184;
  int local_180;
  undefined8 local_178;
  FRHITransitionInfo_u_8 local_170;
  FRHITransitionInfo local_168;
  FRHITransitionInfo local_138;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_108;
  TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable> local_f8;
  int local_e8;
  int local_e4;
  FRHIShaderResourceView *local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  FString local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  FString local_88;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  TArrayView<FRHITransitionInfo_const_,int> local_68 [2];
  
  this->BrickDataBaseOffsetInAtlas = param_2;
  iVar8 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Y;
  iVar10 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z;
  if (iVar8 < (this->IndirectionTextureDimensions).field0_0x0._s_0.X) {
    iVar8 = (this->IndirectionTextureDimensions).field0_0x0._s_0.X;
  }
  if (iVar10 < iVar8) {
    iVar10 = iVar8;
  }
  local_res10 = param_1;
  if (iVar10 < 1) {
    InitRHIForSubLevelResources(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    local_res20 = (this->SceneDataAdded).ArrayNum;
    uVar18 = (ulonglong)(int)local_res20;
    pFVar19 = (this->SceneDataAdded).AllocatorInstance.Data;
    pFVar1 = pFVar19 + uVar18 * 8;
    while( true ) {
      if ((this->SceneDataAdded).ArrayNum != (int)uVar18) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPrecomputedVolumetricLightmapData_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar19 == pFVar1) break;
      lVar3 = *(longlong *)pFVar19;
      if (*(longlong *)(lVar3 + 0x88) != 0) {
        bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
        TVar9 = (uint)bVar2;
        if (bVar2 == 5) {
          TVar9 = GMaxRHIFeatureLevel;
        }
        pFVar12 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar9]);
        pFVar13 = (FShaderType *)FPatchIndirectionTextureCS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar12,&local_1b8,pFVar13,0);
        if (local_1b8.ShaderContent == (FShader *)0x0) {
          FVar14 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c0);
          ::FName::ToString((FName *)FVar14,&local_88);
          FPatchIndirectionTextureCS::GetStaticType();
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FPatchIndirectionTextureCS::GetStaticType();
        pFVar5 = local_1b8.ShaderContent;
        local_e8 = (int)(this->SubLevelBrickPositions)._padding_;
        local_198.ShaderMap = local_1b8.ShaderMap;
        local_e4 = this->BrickDataBaseOffsetInAtlas;
        local_d8 = *(undefined8 *)(lVar3 + 0x90);
        local_e0 = (this->SubLevelBrickPositionsSRV).Reference;
        local_198.ShaderContent = (FPatchIndirectionTextureCS *)local_1b8.ShaderContent;
        uVar20 = (int)((local_e8 + 0x3f >> 0x1f & 0x3fU) + local_e8 + 0x3f) >> 6;
        pFVar15 = FPatchIndirectionTextureCS::FParameters::FTypeInfo::GetStructMetadata();
        local_1c8._s_0.Y = 1;
        local_1c8._s_0.Z = 1;
        local_1c8._s_0.X = uVar20;
        FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_1c8._s_0);
        pFVar16 = TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable>::
                  GetComputeShader(&local_198);
        SetComputePipelineState
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar16);
        local_78.ShaderContent = local_1b8.ShaderContent;
        local_78.ShaderMap = local_1b8.ShaderMap;
        ValidateShaderParameters(&local_78,pFVar15,&local_e8);
        ::SetShaderParameters
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar16,
                   &pFVar5->Bindings,pFVar15,&local_e8);
        FRHIComputeCommandList::DispatchComputeShader
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,uVar20,1,1);
        pFVar16 = TShaderRefBase<FPatchIndirectionTextureCS,FShaderMapPointerTable>::
                  GetComputeShader(&local_198);
        if (GRHIGlobals.NeedsShaderUnbinds != false) {
          pFVar17 = FRHICommandListBase::GetScratchShaderUnbinds
                              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
          if (((pFVar5->Bindings).RootParameterBufferIndex != 0xffff) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                 ,0xb3,
                                 L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UnsetShaderUAVs(pFVar17,&pFVar5->Bindings);
          FRHIComputeCommandList::SetBatchedShaderUnbinds
                    ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar16,pFVar17
                    );
        }
        uStack_1e0 = 1;
        local_138._padding_._0_4_ = 0xffffffff;
        local_138._padding_._4_2_ = 0xffff;
        local_138.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar3 + 0x90);
        local_1e8 = &local_138;
        local_68[0]._12_4_ = uStack_1dc;
        local_68[0].ArrayNum = 1;
        local_138.Type = UAV;
        local_138.AccessBefore = None;
        local_138.AccessAfter = SRVMask;
        local_138.Flags = None;
        local_138.CommitInfo.bIsSet = false;
        local_68[0].DataPtr = local_1e8;
        FRHIComputeCommandList::Transition
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,local_68,None);
      }
      uVar18 = (ulonglong)local_res20;
      pFVar19 = pFVar19 + 8;
    }
    ReleaseRHIForSubLevelResources(this);
  }
  else {
    iVar8 = this->BrickSize + 1;
    pFVar19 = (this->SceneDataAdded).AllocatorInstance.Data;
    uVar18 = (longlong)
             ((this->BrickDataDimensions).field0_0x0._s_0.Z *
              (this->BrickDataDimensions).field0_0x0._s_0.Y *
             (this->BrickDataDimensions).field0_0x0._s_0.X) / (longlong)(iVar8 * iVar8 * iVar8);
    local_res20 = (uint)uVar18;
    uVar18 = uVar18 & 0xffffffff;
    uVar20 = (this->SceneDataAdded).ArrayNum;
    uVar11 = (ulonglong)(int)uVar20;
    pFVar1 = pFVar19 + uVar11 * 8;
    while( true ) {
      if ((this->SceneDataAdded).ArrayNum != (int)uVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPrecomputedVolumetricLightmapData_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar19 == pFVar1) break;
      lVar3 = *(longlong *)pFVar19;
      if (*(longlong *)(lVar3 + 0x88) != 0) {
        bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
        TVar9 = (uint)bVar2;
        if (bVar2 == 5) {
          TVar9 = GMaxRHIFeatureLevel;
        }
        pFVar12 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar9]);
        pFVar13 = (FShaderType *)FMoveWholeIndirectionTextureCS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar12,&local_108,pFVar13,0);
        if (local_108.ShaderContent == (FShader *)0x0) {
          FVar14 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c8);
          ::FName::ToString((FName *)FVar14,&local_b8);
          FMoveWholeIndirectionTextureCS::GetStaticType();
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FMoveWholeIndirectionTextureCS::GetStaticType();
        pFVar6 = local_108.ShaderMap;
        pFVar5 = local_108.ShaderContent;
        local_228.Data.ArrayNum = *(int *)(lVar3 + 0x78);
        _Size = (size_t)local_228.Data.ArrayNum;
        local_228._padding_ = (longlong)&___7FVolumetricLightmapDataLayer__6B_;
        _Src = *(void **)(lVar3 + 0x70);
        local_f8.ShaderContent = (FMoveWholeIndirectionTextureCS *)local_108.ShaderContent;
        local_f8.ShaderMap = local_108.ShaderMap;
        local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_228.Data.ArrayNum == 0) {
          local_228.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_228.Data.ArrayNum,0,&local_228.Data.AllocatorInstance,
                     local_228.Data.ArrayNum,&local_228.Data.ArrayMax);
          memcpy(local_228.Data.AllocatorInstance.Data,_Src,_Size);
        }
        local_228.DataSize = *(int *)(lVar3 + 0x80);
        local_228.Texture.Reference = *(FRHITexture **)(lVar3 + 0x88);
        local_228.Format = *(EPixelFormat *)(lVar3 + 0x84);
        if (local_228.Texture.Reference != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_228.Texture.Reference);
        }
        local_228.UAV.Reference =
             (FRHIUnorderedAccessView *)((FRHITransitionInfo_u_8 *)(lVar3 + 0x90))->Resource;
        if (local_228.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_228.UAV.Reference);
        }
        local_228.bNeedsCPUAccess = *(bool *)(lVar3 + 0x98);
        local_1a8._0_8_ = *(undefined8 *)&(this->IndirectionTextureDimensions).field0_0x0;
        local_1a8._s_0.Z = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z;
        FVolumetricLightmapDataLayer::CreateTargetTexture
                  (&local_228,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                   (TIntVector3<int> *)&local_1a8._s_0);
        FVolumetricLightmapDataLayer::CreateUAV
                  (&local_228,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
        local_180 = this->BrickDataBaseOffsetInAtlas;
        local_178 = *(undefined8 *)(lVar3 + 0x88);
        local_170.UAV = local_228.UAV.Reference;
        iVar8 = (this->IndirectionTextureDimensions).field0_0x0._s_0.X + 3;
        local_188 = (undefined4)uVar18;
        iVar10 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Y + 3;
        uVar21 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
        iVar8 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z + 3;
        uVar23 = (int)((iVar10 >> 0x1f & 3U) + iVar10) >> 2;
        uVar22 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
        local_184 = param_1;
        pFVar15 = FMoveWholeIndirectionTextureCS::FParameters::FTypeInfo::GetStructMetadata();
        local_1d8._s_0.X = uVar21;
        local_1d8._s_0.Y = uVar23;
        local_1d8._s_0.Z = uVar22;
        FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_1d8._s_0);
        pFVar16 = TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable>::
                  GetComputeShader(&local_f8);
        SetComputePipelineState
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar16);
        local_a8.ShaderContent = pFVar5;
        local_a8.ShaderMap = pFVar6;
        ValidateShaderParameters(&local_a8,pFVar15,&local_188);
        ::SetShaderParameters
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar16,
                   &pFVar5->Bindings,pFVar15,&local_188);
        FRHIComputeCommandList::DispatchComputeShader
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,uVar21,uVar23,
                   uVar22);
        pFVar16 = TShaderRefBase<FMoveWholeIndirectionTextureCS,FShaderMapPointerTable>::
                  GetComputeShader(&local_f8);
        if (GRHIGlobals.NeedsShaderUnbinds != false) {
          pFVar17 = FRHICommandListBase::GetScratchShaderUnbinds
                              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
          if (((pFVar5->Bindings).RootParameterBufferIndex != 0xffff) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                 ,0xb3,
                                 L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UnsetShaderUAVs(pFVar17,&pFVar5->Bindings);
          FRHIComputeCommandList::SetBatchedShaderUnbinds
                    ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar16,pFVar17
                    );
        }
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x70),
                   &local_228.Data);
        *(int *)(lVar3 + 0x80) = local_228.DataSize;
        *(EPixelFormat *)(lVar3 + 0x84) = local_228.Format;
        this_00 = *(FRHITexture **)(lVar3 + 0x88);
        if (this_00 != local_228.Texture.Reference) {
          *(FRHITexture **)(lVar3 + 0x88) = local_228.Texture.Reference;
          if (local_228.Texture.Reference != (FRHITexture *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_228.Texture.Reference);
          }
          if (this_00 != (FRHITexture *)0x0) {
            FRHIResource::Release((FRHIResource *)this_00);
          }
        }
        this_01 = *(FRHIUnorderedAccessView **)(lVar3 + 0x90);
        if (this_01 != local_228.UAV.Reference) {
          ((FRHITransitionInfo_u_8 *)(lVar3 + 0x90))->Resource =
               (FRHIResource *)local_228.UAV.Reference;
          if (local_228.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_228.UAV.Reference);
          }
          if (this_01 != (FRHIUnorderedAccessView *)0x0) {
            FRHIResource::Release((FRHIResource *)this_01);
          }
        }
        *(bool *)(lVar3 + 0x98) = local_228.bNeedsCPUAccess;
        local_1e8 = &local_168;
        uStack_1e0 = 1;
        local_98._12_4_ = uStack_1dc;
        local_98.ArrayNum = 1;
        local_168._padding_._0_4_ = 0xffffffff;
        local_168._padding_._4_2_ = 0xffff;
        local_168.Type = UAV;
        local_168.AccessBefore = None;
        local_168.AccessAfter = SRVMask;
        local_168.Flags = None;
        local_168.CommitInfo.bIsSet = false;
        local_168.field1_0x8.UAV = local_228.UAV.Reference;
        local_98.DataPtr = local_1e8;
        FRHIComputeCommandList::Transition
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_98,None);
        if (local_228.UAV.Reference != (FRHIUnorderedAccessView *)0x0) {
          FRHIResource::Release((FRHIResource *)local_228.UAV.Reference);
        }
        if (local_228.Texture.Reference != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_228.Texture.Reference);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        uVar18 = (ulonglong)local_res20;
        param_1 = local_res10;
      }
      uVar11 = (ulonglong)uVar20;
      pFVar19 = pFVar19 + 8;
    }
  }
  return;
}

// InitRHI @ 14838dd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmapData::InitRHI
          (FPrecomputedVolumetricLightmapData *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  Type TVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  TIntVector3<int>_u_0 local_18;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar2 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar2 = GMaxRHIFeatureLevel;
  }
  if (2 < (int)TVar2) {
    iVar4 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z;
    iVar3 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Y;
    if (iVar3 < (this->IndirectionTextureDimensions).field0_0x0._s_0.X) {
      iVar3 = (this->IndirectionTextureDimensions).field0_0x0._s_0.X;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    if (0 < iVar4) {
      local_18._0_8_ = *(undefined8 *)&(this->IndirectionTextureDimensions).field0_0x0;
      local_18._s_0.Z = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z;
      FVolumetricLightmapDataLayer::CreateTexture
                (&this->IndirectionTexture,param_1,(TIntVector3<int> *)&local_18._s_0);
    }
    iVar4 = (this->BrickDataDimensions).field0_0x0._s_0.Y;
    iVar3 = (this->BrickDataDimensions).field0_0x0._s_0.X;
    iVar5 = (this->BrickDataDimensions).field0_0x0._s_0.Z;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    if (0 < iVar5) {
      local_18._0_8_ = *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
      local_18._s_0.Z = (this->BrickDataDimensions).field0_0x0._s_0.Z;
      FVolumetricLightmapDataLayer::CreateTexture
                ((FVolumetricLightmapDataLayer *)&this->BrickData,param_1,
                 (TIntVector3<int> *)&local_18._s_0);
      uVar6 = 0;
      do {
        local_18._s_0.Z = (this->BrickDataDimensions).field0_0x0._s_0.Z;
        local_18._0_8_ = *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
        FVolumetricLightmapDataLayer::CreateTexture
                  ((FVolumetricLightmapDataLayer *)
                   (&(this->BrickData).field_0x38 + (longlong)(int)uVar6 * 0x38),param_1,
                   (TIntVector3<int> *)&local_18._s_0);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 6);
      if (0 < *(int *)&(this->BrickData).field_0x198) {
        local_18._0_8_ = *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
        local_18._s_0.Z = (this->BrickDataDimensions).field0_0x0._s_0.Z;
        FVolumetricLightmapDataLayer::CreateTexture
                  ((FVolumetricLightmapDataLayer *)&(this->BrickData).field_0x188,param_1,
                   (TIntVector3<int> *)&local_18._s_0);
      }
      local_18._0_8_ = *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
      local_18._s_0.Z = (this->BrickDataDimensions).field0_0x0._s_0.Z;
      FVolumetricLightmapDataLayer::CreateTexture
                ((FVolumetricLightmapDataLayer *)&(this->BrickData).field_0x1c0,param_1,
                 (TIntVector3<int> *)&local_18._s_0);
    }
    FVolumetricLightmapBrickAtlas::Insert
              ((FVolumetricLightmapBrickAtlas *)&GVolumetricLightmapBrickAtlas,0x7fffffff,this);
    FVolumetricLightmapBrickData::ReleaseRHI(&this->BrickData);
  }
  return;
}

// InitRHIForSubLevelResources @ 14838df60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmapData::InitRHIForSubLevelResources
          (FPrecomputedVolumetricLightmapData *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  FRHIBuffer *pFVar2;
  FRHIShaderResourceView *pFVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  TRefCountPtr<FRHIShaderResourceView> TVar5;
  TRefCountPtr<FRHIShaderResourceView> *pTVar6;
  FRHIResource *local_res8;
  
  if (0 < (int)(this->SubLevelBrickPositions)._padding_) {
    (**(code **)((this->SubLevelBrickPositions)._padding_ + 0x38))(&this->SubLevelBrickPositions,1);
    (**(code **)((this->IndirectionTextureOriginalValues)._padding_ + 0x38))
              (&this->IndirectionTextureOriginalValues);
    RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
    TVar4 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
    pTVar1 = &this->SubLevelBrickPositionsBuffer;
    if ((FRHIBuffer *)pTVar1 != TVar4.Reference) {
      pFVar2 = pTVar1->Reference;
      pTVar1->Reference = (FRHIBuffer *)(TVar4.Reference)->_padding_;
      (TVar4.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    TVar5 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)pTVar1->Reference);
    pTVar6 = &this->SubLevelBrickPositionsSRV;
    if ((FRHIShaderResourceView *)pTVar6 != TVar5.Reference) {
      pFVar3 = pTVar6->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar6->Reference = *TVar5.Reference;
      *(undefined8 *)TVar5.Reference = 0;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
    TVar4 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
    pTVar1 = &this->IndirectionTextureOriginalValuesBuffer;
    if ((FRHIBuffer *)pTVar1 != TVar4.Reference) {
      pFVar2 = pTVar1->Reference;
      pTVar1->Reference = (FRHIBuffer *)(TVar4.Reference)->_padding_;
      (TVar4.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    TVar5 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)pTVar1->Reference);
    pTVar6 = &this->IndirectionTextureOriginalValuesSRV;
    if ((FRHIShaderResourceView *)pTVar6 != TVar5.Reference) {
      pFVar3 = pTVar6->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar6->Reference = *TVar5.Reference;
      *(undefined8 *)TVar5.Reference = 0;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  return;
}

// InitRHIForSubLevelResources @ 14838e200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmapData::InitRHIForSubLevelResources
          (FPrecomputedVolumetricLightmapData *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  InitRHIForSubLevelResources(this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// InitializeOnImport @ 14838f130

void __thiscall
FPrecomputedVolumetricLightmapData::InitializeOnImport
          (FPrecomputedVolumetricLightmapData *this,TBox<double> *param_1,int param_2)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = param_1->Pad[0];
  uVar3 = param_1->Pad[1];
  uVar4 = param_1->Pad[2];
  uVar5 = param_1->Pad[3];
  uVar6 = param_1->Pad[4];
  uVar7 = param_1->Pad[5];
  uVar8 = param_1->Pad[6];
  (this->Bounds).IsValid = param_1->IsValid;
  (this->Bounds).Pad[0] = uVar2;
  (this->Bounds).Pad[1] = uVar3;
  (this->Bounds).Pad[2] = uVar4;
  (this->Bounds).Pad[3] = uVar5;
  (this->Bounds).Pad[4] = uVar6;
  (this->Bounds).Pad[5] = uVar7;
  (this->Bounds).Pad[6] = uVar8;
  this->BrickSize = param_2;
  return;
}

// ReleaseRHI @ 14839deb0

void __thiscall
FPrecomputedVolumetricLightmapData::ReleaseRHI(FPrecomputedVolumetricLightmapData *this)

{
  byte bVar1;
  FRHITexture *this_00;
  FRHIUnorderedAccessView *this_01;
  Type TVar2;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar2 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar2 = GMaxRHIFeatureLevel;
  }
  if (2 < (int)TVar2) {
    FVolumetricLightmapBrickAtlas::Remove
              ((FVolumetricLightmapBrickAtlas *)&GVolumetricLightmapBrickAtlas,this);
    this_00 = (this->IndirectionTexture).Texture.Reference;
    if (this_00 != (FRHITexture *)0x0) {
      (this->IndirectionTexture).Texture.Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this_01 = (this->IndirectionTexture).UAV.Reference;
    if (this_01 != (FRHIUnorderedAccessView *)0x0) {
      (this->IndirectionTexture).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    FVolumetricLightmapBrickData::ReleaseRHI(&this->BrickData);
    return;
  }
  return;
}

// ReleaseRHIForSubLevelResources @ 14839e0c0

void __thiscall
FPrecomputedVolumetricLightmapData::ReleaseRHIForSubLevelResources
          (FPrecomputedVolumetricLightmapData *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  
  pFVar1 = (this->SubLevelBrickPositionsBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->SubLevelBrickPositionsBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SubLevelBrickPositionsSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->SubLevelBrickPositionsSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->IndirectionTextureOriginalValuesBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->IndirectionTextureOriginalValuesBuffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->IndirectionTextureOriginalValuesSRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->IndirectionTextureOriginalValuesSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  return;
}

// RemoveFromSceneData @ 1483a0210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FPrecomputedVolumetricLightmapData::RemoveFromSceneData
          (FPrecomputedVolumetricLightmapData *this,FPrecomputedVolumetricLightmapData *param_1,
          int param_2)

{
  TArray<FPrecomputedVolumetricLightmapData_*,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  code *pcVar3;
  FPrecomputedVolumetricLightmapData *pFVar4;
  ulonglong uVar5;
  bool bVar6;
  Type TVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar10;
  FName this_01;
  FShaderParametersMetadata *pFVar11;
  FRHIComputeShader *pFVar12;
  FRHIBatchedShaderUnbinds *pFVar13;
  byte bVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FPrecomputedVolumetricLightmapData *pFVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  byte bVar26;
  FScriptContainerElement FStackX_9;
  FScriptContainerElement FStackX_a;
  FScriptContainerElement FStackX_b;
  FPrecomputedVolumetricLightmapData *local_res10;
  int local_res18;
  ulonglong local_res20;
  TShaderRefBase<FRemoveSubLevelBricksCS,FShaderMapPointerTable> local_1a8;
  TIntVector3<int>_u_0 local_198;
  FRHITransitionInfo *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  int local_174;
  FRHIShaderResourceView *local_170;
  FRHIShaderResourceView *local_168;
  FRHIUnorderedAccessView *local_160;
  FRHITransitionInfo local_158;
  undefined1 local_128 [16];
  undefined1 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_100;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_f8;
  TOptional<FRHIBreadcrumbScope> local_e8;
  undefined1 local_d0 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_c8;
  FString local_b8;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  undefined1 local_88 [28];
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  pFVar16 = (this->SceneDataAdded).AllocatorInstance.Data;
  pFVar9 = pFVar16;
  if (pFVar16 != pFVar16 + (longlong)(this->SceneDataAdded).ArrayNum * 8) {
    while (*(FPrecomputedVolumetricLightmapData **)pFVar9 != param_1) {
      pFVar9 = pFVar9 + 8;
      if (pFVar9 == pFVar16 + (longlong)(this->SceneDataAdded).ArrayNum * 8) {
        return;
      }
    }
    if ((int)((longlong)pFVar9 - (longlong)pFVar16 >> 3) != -1) {
      local_res10 = param_1;
      local_res18 = param_2;
      if (((pFVar16 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 <
           pFVar16 + (longlong)(this->SceneDataAdded).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (this->SceneDataAdded).ArrayNum;
      pFVar22 = local_res10;
      if (iVar8 != 0) {
        pFVar16 = (this->SceneDataAdded).AllocatorInstance.Data;
        iVar23 = 0;
        bVar26 = *(FPrecomputedVolumetricLightmapData **)pFVar16 != local_res10;
        lVar25 = 0;
        local_res20 = CONCAT71(local_res20._1_7_,bVar26);
        iVar17 = 0;
        do {
          iVar18 = iVar17;
          do {
            lVar25 = lVar25 + 1;
            iVar18 = iVar18 + 1;
            if (iVar8 <= lVar25) break;
          } while ((bool)bVar26 ==
                   (*(FPrecomputedVolumetricLightmapData **)(pFVar16 + lVar25 * 8) != pFVar22));
          bVar14 = bVar26;
          if (bVar26 != 0) {
            if (iVar23 != iVar17) {
              memmove(pFVar16 + (longlong)iVar23 * 8,pFVar16 + (longlong)iVar17 * 8,
                      (longlong)(iVar18 - iVar17) << 3);
              pFVar22 = local_res10;
              bVar14 = (byte)local_res20;
            }
            iVar23 = iVar23 + (iVar18 - iVar17);
          }
          uVar5 = local_res20;
          bVar26 = bVar14 ^ 1;
          local_res20 = CONCAT71(local_res20._1_7_,bVar14) ^ 1;
          iVar17 = iVar18;
        } while (lVar25 < iVar8);
        local_res20 = CONCAT44(SUB84(uVar5,4),iVar23);
        (this->SceneDataAdded).ArrayNum = iVar23;
        param_2 = local_res18;
      }
      iVar8 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Y;
      iVar17 = (this->IndirectionTextureDimensions).field0_0x0._s_0.Z;
      if (iVar8 < (this->IndirectionTextureDimensions).field0_0x0._s_0.X) {
        iVar8 = (this->IndirectionTextureDimensions).field0_0x0._s_0.X;
      }
      if (iVar17 < iVar8) {
        iVar17 = iVar8;
      }
      if (iVar17 < 1) {
        bVar26 = *(byte *)((longlong)&this->_padding_ + 4);
        TVar7 = (uint)bVar26;
        if (bVar26 == 5) {
          TVar7 = GMaxRHIFeatureLevel;
        }
        if ((int)TVar7 < 3) {
          if ((0 < (pFVar22->IndirectionTexture).Data.ArrayNum) &&
             (uVar19 = 0, 0 < (pFVar22->CPUSubLevelBrickDataList).ArrayNum)) {
            lVar25 = 0;
            do {
              pTVar1 = &pFVar22->CPUSubLevelBrickDataList;
              uVar21 = 0;
              if ((int)uVar19 < (pFVar22->CPUSubLevelBrickDataList).ArrayNum) {
                uVar21 = ~uVar19 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 pFVar22 = local_res10, bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(FPrecomputedVolumetricLightmapData **)
                   ((pTVar1->AllocatorInstance).Data + lVar25) == this) {
                uVar21 = 0;
                if ((int)uVar19 < (pFVar22->CPUSubLevelBrickDataList).ArrayNum) {
                  uVar21 = ~uVar19 >> 0x1f;
                }
                if ((uVar21 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar21 = 0;
                *(undefined8 *)
                 ((pFVar22->CPUSubLevelBrickDataList).AllocatorInstance.Data +
                 (longlong)(int)uVar19 * 8) = 0;
                if ((int)(this->SubLevelBrickPositions)._padding_ < 1) {
                  return;
                }
                local_res20 = 0;
                lVar25 = 0;
                while( true ) {
                  uVar5 = local_res20;
                  uVar19 = 0;
                  if ((int)uVar21 < (int)(this->IndirectionTextureOriginalValues)._padding_) {
                    uVar19 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar15 = (this->IndirectionTextureOriginalValues)._padding_;
                  if ((uVar15 & 1) != 0) {
                    uVar15 = (longlong)&(this->IndirectionTextureOriginalValues)._padding_ +
                             ((longlong)uVar15 >> 0x18);
                  }
                  uVar2 = *(undefined4 *)(lVar25 + uVar15);
                  uVar19 = 0;
                  if ((int)uVar21 < (int)(this->SubLevelBrickPositions)._padding_) {
                    uVar19 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) break;
                  pFVar22 = local_res10;
                  uVar15 = (this->SubLevelBrickPositions)._padding_;
                  if ((uVar15 & 1) != 0) {
                    uVar15 = (longlong)&(this->SubLevelBrickPositions)._padding_ +
                             ((longlong)uVar15 >> 0x18);
                  }
                  local_188 = *(FRHITransitionInfo **)(uVar5 + uVar15);
                  uVar20 = (*(int *)(uVar5 + 8 + uVar15) *
                            (local_res10->IndirectionTextureDimensions).field0_0x0._s_0.Y +
                           (int)((ulonglong)local_188 >> 0x20)) *
                           (local_res10->IndirectionTextureDimensions).field0_0x0._s_0.X +
                           (int)local_188;
                  uVar24 = uVar20 * GPixelFormats[(local_res10->IndirectionTexture).Format].
                                    BlockBytes;
                  uVar19 = 0;
                  if ((int)uVar24 < (local_res10->IndirectionTexture).Data.ArrayNum) {
                    uVar19 = ~uVar24 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar4 = local_res10;
                  FStackX_a = SUB41((uint)uVar2 >> 0x10,0);
                  pFVar16 = (pFVar22->IndirectionTexture).Data.AllocatorInstance.Data + (int)uVar24;
                  *pFVar16 = FStackX_a;
                  FStackX_9 = SUB41((uint)uVar2 >> 8,0);
                  pFVar16[1] = FStackX_9;
                  FStackX_b = SUB41((uint)uVar2 >> 0x18,0);
                  pFVar16[3] = FStackX_b;
                  pFVar16[2] = SUB41(uVar2,0);
                  uVar19 = 0;
                  if ((int)uVar20 < (local_res10->CPUSubLevelIndirectionTable).ArrayNum) {
                    uVar19 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  uVar21 = uVar21 + 1;
                  local_res20 = local_res20 + 0xc;
                  lVar25 = lVar25 + 4;
                  (pFVar4->CPUSubLevelIndirectionTable).AllocatorInstance.Data[(int)uVar20] =
                       (FScriptContainerElement)0x0;
                  if ((int)(this->SubLevelBrickPositions)._padding_ <= (int)uVar21) {
                    return;
                  }
                }
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar19 = uVar19 + 1;
              lVar25 = lVar25 + 8;
            } while ((int)uVar19 < (pFVar22->CPUSubLevelBrickDataList).ArrayNum);
          }
        }
        else if ((pFVar22->IndirectionTexture).Texture.Reference != (FRHITexture *)0x0) {
          local_e8.bIsSet = false;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_68 = 0;
            uStack_64 = 0;
            ::Desc._12_8_ = ZEXT48(uStack_6c);
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_RemoveSubLevelB;
            ::Desc._padding_._0_4_ = 0x262;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(``FPrecomputedVolumetricLightmapData::RemoveFromSceneData'::__l21::<lambda_1>::
                   operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_c8._Myfirst._Val = &::Desc;
          TOptional<FRHIBreadcrumbScope>::
          Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
                    (&local_e8,(FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,
                     &local_c8);
          InitRHIForSubLevelResources
                    (this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
          bVar26 = *(byte *)((longlong)&this->_padding_ + 4);
          TVar7 = (uint)bVar26;
          if (bVar26 == 5) {
            TVar7 = GMaxRHIFeatureLevel;
          }
          this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar7]);
          pFVar10 = (FShaderType *)FRemoveSubLevelBricksCS::GetStaticType();
          FGlobalShaderMap::GetShader(this_00,&local_f8,pFVar10,0);
          if (local_f8.ShaderContent == (FShader *)0x0) {
            this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d0);
            ::FName::ToString((FName *)this_01,&local_b8);
            FRemoveSubLevelBricksCS::GetStaticType();
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Shader.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                               ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FRemoveSubLevelBricksCS::GetStaticType();
          local_178 = (undefined4)(this->SubLevelBrickPositions)._padding_;
          local_160 = (local_res10->IndirectionTexture).UAV.Reference;
          local_170 = (this->SubLevelBrickPositionsSRV).Reference;
          local_168 = (this->IndirectionTextureOriginalValuesSRV).Reference;
          local_158.field1_0x8 =
               (FRHITransitionInfo_u_8)(local_res10->IndirectionTexture).UAV.Reference;
          local_188 = &local_158;
          uStack_180 = 1;
          local_a8._12_4_ = uStack_17c;
          local_a8.ArrayNum = 1;
          local_1a8.ShaderContent = (FRemoveSubLevelBricksCS *)local_f8.ShaderContent;
          local_1a8.ShaderMap = local_f8.ShaderMap;
          local_158._padding_._0_4_ = 0xffffffff;
          local_158._padding_._4_2_ = 0xffff;
          local_158.Type = UAV;
          local_158.AccessBefore = None;
          local_158.AccessAfter = UAVCompute;
          local_158.Flags = None;
          local_158.CommitInfo.bIsSet = false;
          local_174 = param_2;
          local_a8.DataPtr = local_188;
          FRHIComputeCommandList::Transition
                    ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_a8,None)
          ;
          iVar8 = (int)(this->SubLevelBrickPositions)._padding_ + 0x3f;
          uVar19 = (int)((iVar8 >> 0x1f & 0x3fU) + iVar8) >> 6;
          pFVar11 = FRemoveSubLevelBricksCS::FParameters::FTypeInfo::GetStructMetadata();
          local_198._s_0.Y = 1;
          local_198._s_0.Z = 1;
          local_198._s_0.X = uVar19;
          FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_198._s_0);
          pFVar12 = TShaderRefBase<FRemoveSubLevelBricksCS,FShaderMapPointerTable>::GetComputeShader
                              (&local_1a8);
          SetComputePipelineState
                    ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar12);
          local_98.ShaderContent = local_f8.ShaderContent;
          local_98.ShaderMap = local_f8.ShaderMap;
          ValidateShaderParameters(&local_98,pFVar11,&local_178);
          ::SetShaderParameters
                    ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar12,
                     &(local_f8.ShaderContent)->Bindings,pFVar11,&local_178);
          FRHIComputeCommandList::DispatchComputeShader
                    ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,uVar19,1,1);
          pFVar12 = TShaderRefBase<FRemoveSubLevelBricksCS,FShaderMapPointerTable>::GetComputeShader
                              (&local_1a8);
          if (GRHIGlobals.NeedsShaderUnbinds != false) {
            pFVar13 = FRHICommandListBase::GetScratchShaderUnbinds
                                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
            if ((((local_f8.ShaderContent)->Bindings).RootParameterBufferIndex != 0xffff) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                   ,0xb3,
                                   L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
               , bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            UnsetShaderUAVs(pFVar13,&(local_f8.ShaderContent)->Bindings);
            FRHIComputeCommandList::SetBatchedShaderUnbinds
                      ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar12,
                       pFVar13);
          }
          local_1a8.ShaderMap = (FShaderMapBase *)CONCAT44(local_1a8.ShaderMap._4_4_,1);
          local_128._8_8_ = (local_res10->IndirectionTexture).UAV.Reference;
          local_1a8.ShaderContent = (FRemoveSubLevelBricksCS *)local_128;
          local_88._8_8_ = local_1a8.ShaderMap;
          local_128._0_4_ = 0xffffffff;
          local_128._4_2_ = 0xffff;
          local_118 = 3;
          local_114 = 0x400;
          local_110 = 0x70;
          local_10c = 0;
          local_100 = 0;
          local_88._0_8_ = local_1a8.ShaderContent;
          FRHIComputeCommandList::Transition
                    ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,
                     (TArrayView<FRHITransitionInfo_const_,int> *)local_88,None);
          ReleaseRHIForSubLevelResources(this);
          if (local_e8.bIsSet != false) {
            FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_e8.TypedValue);
          }
        }
      }
    }
  }
  return;
}

// operator() @ 15052a400

bool __thiscall
`FPrecomputedVolumetricLightmapData::AddToSceneData'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_191228561246387778>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_191228561246387778>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15052a490

bool __thiscall
`FPrecomputedVolumetricLightmapData::AddToSceneData'::__l17::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_191228561246387769>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_191228561246387769>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

