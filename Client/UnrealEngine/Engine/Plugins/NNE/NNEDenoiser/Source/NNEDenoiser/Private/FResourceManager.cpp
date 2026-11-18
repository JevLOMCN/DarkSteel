// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 6

// AddTexture @ 14eaee150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FResourceManager::AddTexture
          (FResourceManager *this,EResourceName param_1,FRDGTexture *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  FRDGBuilder *pFVar6;
  code *pcVar7;
  TRHIGlobal<int> TVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *this_00;
  FRDGTexture *pFVar14;
  EResourceName *pEVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  ForElementType<EPixelFormat> FVar19;
  TSparseSetElement<TTuple<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>
  *pTVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ForElementType<EPixelFormat> FVar23;
  uint uVar24;
  ForElementType<EPixelFormat> FVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auStackY_1e8 [32];
  EResourceName local_198 [8];
  undefined1 local_190 [8];
  FRDGBuilder *local_188;
  wchar_t *local_180;
  int local_178 [2];
  ForAnyElementType local_170;
  undefined8 local_168;
  FRDGTexture *local_160;
  FRDGTexture *local_158;
  TRefCountPtr<IPooledRenderTarget> local_150;
  int local_148;
  int iStack_144;
  FSparseArrayAllocationInfo local_140;
  wchar_t **local_130;
  FRHITextureDesc *local_128;
  wchar_t **local_120;
  FRHITextureDesc *local_118;
  wchar_t **local_110;
  FRHITextureDesc *local_108;
  wchar_t **local_100;
  FRHITextureDesc *local_f8;
  FRHITextureDesc local_e8;
  FRHITextureDesc local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_188 = (FRDGBuilder *)CONCAT44(local_188._4_4_,param_3);
  puVar17 = &(this->TextureMap).field_0x8;
  local_198[0] = param_1;
  local_158 = param_2;
  if (*(int *)puVar17 != *(int *)&(this->TextureMap).field_0x34) {
    puVar16 = *(undefined1 **)&(this->TextureMap).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->TextureMap).field_0x38;
    }
    iVar13 = *(int *)(puVar16 +
                     ((ulonglong)(*(int *)&(this->TextureMap).field_0x48 - 1) & (ulonglong)param_1)
                     * 4);
    if (iVar13 != -1) {
      do {
        if (*(EResourceName *)((longlong)iVar13 * 0x20 + *(longlong *)&this->TextureMap) == param_1)
        {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!TextureMap.Contains(Name)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                             ,0xf,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          break;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + *(longlong *)&this->TextureMap);
      } while (iVar13 != -1);
    }
  }
  if ((param_2 == (FRDGTexture *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Current != FRDGTextureRef{}",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                         ,0x10,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_3 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFrames > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                         ,0x11,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = CONCAT44(local_168._4_4_,1);
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_170,1,(int *)((longlong)&local_168 + 4));
  *(FRDGTexture **)local_170.Data = param_2;
  iVar13 = *(int *)&(this->TextureMap).field_0x34;
  if (iVar13 == 0) {
    iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,1,(ForAnyElementType *)&this->TextureMap,(int *)puVar17,
                        (int *)&(this->TextureMap).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TextureMap).field_0x10,false);
  }
  else {
    iVar11 = *(int *)&(this->TextureMap).field_0x30;
    lVar26 = *(longlong *)&this->TextureMap;
    iVar4 = *(int *)((longlong)iVar11 * 0x20 + 4 + lVar26);
    iVar13 = iVar13 + -1;
    *(int *)&(this->TextureMap).field_0x30 = iVar4;
    *(int *)&(this->TextureMap).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + lVar26) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this->TextureMap,&local_140,iVar11);
  pTVar20 = (TSparseSetElement<TTuple<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>
             *)0x0;
  if (local_140.Pointer !=
      (TSparseSetElement<TTuple<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(undefined8 *)((longlong)local_140.Pointer + 8) = 0;
    *(EResourceName *)local_140.Pointer = local_198[0];
    *(FScriptContainerElement **)((longlong)local_140.Pointer + 8) = local_170.Data;
    local_170.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)local_140.Pointer + 0x10) = (undefined4)local_168;
    *(undefined4 *)((longlong)local_140.Pointer + 0x14) = local_168._4_4_;
    local_168 = 0;
    *(undefined4 *)((longlong)local_140.Pointer + 0x18) = 0xffffffff;
    pTVar20 = local_140.Pointer;
  }
  bVar3 = *(byte *)pTVar20;
  local_178[0] = local_140.Index;
  bVar9 = TSet<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->TextureMap,(uint)bVar3,pTVar20,local_178,(bool *)0x0);
  lVar26 = (longlong)local_178[0];
  if (!bVar9) {
    TSet<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->TextureMap,(uint)bVar3,pTVar20,local_178[0]);
  }
  lVar26 = *(longlong *)&this->TextureMap + lVar26 * 0x20;
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
  if (*(int *)&(this->ResourceMap).field_0x8 == *(int *)&(this->ResourceMap).field_0x34) {
LAB_14eaee55f:
    uVar22 = (ulonglong)local_198[0];
  }
  else {
    puVar17 = *(undefined1 **)&(this->ResourceMap).field_0x40;
    uVar22 = (ulonglong)local_198[0];
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->ResourceMap).field_0x38;
    }
    uVar10 = *(undefined4 *)(puVar17 + (*(int *)&(this->ResourceMap).field_0x48 - 1 & uVar22) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pEVar15 = (EResourceName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this->ResourceMap);
        if (*pEVar15 == local_198[0]) {
          pTVar20 = (TSparseSetElement<TTuple<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>
                     *)(pEVar15 + 8);
          if (pEVar15 == (EResourceName *)0x0) {
            pTVar20 = (TSparseSetElement<TTuple<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>
                       *)0x0;
          }
          if (pTVar20 !=
              (TSparseSetElement<TTuple<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>
               *)0x0) {
            plVar21 = *(longlong **)pTVar20;
            iVar13 = *(int *)&pTVar20->field_0x8;
            plVar2 = plVar21 + iVar13;
            while( true ) {
              if (*(int *)&pTVar20->field_0x8 != iVar13) {
                local_190[0] = 0;
                `TCheckedPointerIterator<TRefCountPtr<IPooledRenderTarget>_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_190);
              }
              param_2 = local_158;
              if (plVar21 == plVar2) break;
              local_150.Reference = (IPooledRenderTarget *)*plVar21;
              if (local_150.Reference != (IPooledRenderTarget *)0x0) {
                (**(code **)((local_150.Reference)->_padding_ + 0x30))();
              }
              pFVar14 = FRDGBuilder::RegisterExternalTexture(this->GraphBuilder,&local_150,None);
              if (local_150.Reference != (IPooledRenderTarget *)0x0) {
                (**(code **)((local_150.Reference)->_padding_ + 0x38))();
              }
              local_160 = pFVar14;
              if (((*(FRDGTexture ***)(lVar26 + 8) <= &local_160) &&
                  (&local_160 < *(FRDGTexture ***)(lVar26 + 8) + *(int *)(lVar26 + 0x14))) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar11 = *(int *)(lVar26 + 0x10);
              if (iVar11 == *(int *)(lVar26 + 0x14)) {
                iVar11 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)(lVar26 + 8),(int *)(lVar26 + 0x14));
              }
              plVar21 = plVar21 + 1;
              *(int *)(lVar26 + 0x10) = iVar11 + 1;
              *(FRDGTexture **)(*(longlong *)(lVar26 + 8) + (longlong)iVar11 * 8) = local_160;
            }
            goto LAB_14eaee55f;
          }
          break;
        }
        uVar10 = *(undefined4 *)(pEVar15 + 0x18);
      } while (uVar10 != 0xffffffff);
    }
  }
  FVar19 = (ForElementType<EPixelFormat>)0x0;
  iVar13 = *(int *)(lVar26 + 0x10);
  uVar24 = 0;
  iVar11 = (int)local_188;
  if (iVar13 < (int)local_188) {
    uVar12 = uVar24;
    if ((int)(iVar13 - 1U) < iVar13) {
      uVar12 = ~(iVar13 - 1U) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = *(int *)(lVar26 + 0x10);
    uVar22 = (ulonglong)iVar13;
    uVar5 = *(undefined8 *)(*(longlong *)(lVar26 + 8) + -8 + uVar22 * 8);
    TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *)(lVar26 + 8),(int)local_188,
               Default);
    iVar11 = *(int *)(lVar26 + 0x10);
    if (iVar13 < iVar11) {
      lVar27 = uVar22 * 8;
      do {
        uVar18 = (uint)uVar22;
        uVar12 = uVar24;
        if ((int)uVar18 < iVar11) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar22 = (ulonglong)(uVar18 + 1);
        *(undefined8 *)(lVar27 + *(longlong *)(lVar26 + 8)) = uVar5;
        lVar27 = lVar27 + 8;
        iVar11 = *(int *)(lVar26 + 0x10);
      } while ((int)(uVar18 + 1) < iVar11);
    }
    uVar22 = (ulonglong)local_198[0];
    iVar11 = (int)local_188;
  }
  if (*(int *)&(this->IntermediateTextureMap).field_0x8 !=
      *(int *)&(this->IntermediateTextureMap).field_0x34) {
    puVar17 = *(undefined1 **)&(this->IntermediateTextureMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->IntermediateTextureMap).field_0x38;
    }
    iVar13 = *(int *)(puVar17 +
                     (*(int *)&(this->IntermediateTextureMap).field_0x48 - 1 & uVar22) * 4);
    if (iVar13 != -1) {
      do {
        if (*(char *)((longlong)iVar13 * 0x20 + *(longlong *)&this->IntermediateTextureMap) ==
            (char)uVar22) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IntermediateTextureMap.Contains(Name)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                             ,0x3d,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          break;
        }
        iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 +
                         *(longlong *)&this->IntermediateTextureMap);
      } while (iVar13 != -1);
    }
  }
  local_e8.Extent.field0_0x0 =
       (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(this->Tiling).TileSize.field0_0x0._s_0;
  local_e8.ClearValue._0_8_ = *(undefined8 *)&(param_2->Desc).field_0x8;
  local_e8.ClearValue.Value._4_8_ = *(undefined8 *)&(param_2->Desc).field_0x10;
  local_148 = local_e8.Extent.field0_0x0._0_4_;
  iStack_144 = local_e8.Extent.field0_0x0._4_4_;
  local_e8.Flags = *(ETextureCreateFlags *)&param_2->Desc;
  local_e8.ClearValue.Value.Color[3] = (float)*(undefined4 *)&(param_2->Desc).field_0x18;
  local_e8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_e8.AliasableFormats.ArrayMax = 1;
  local_e8.Format = (param_2->Desc).field_0x33;
  local_e8.ExtData = 0;
  local_e8.Depth = 1;
  local_e8.ArraySize = 1;
  local_e8.NumMips = '\x01';
  local_e8.NumSamples = '\x01';
  local_e8.Dimension = Texture2D;
  local_e8.UAVFormat = PF_Unknown;
  local_e8.FastVRAMPercentage = 0xff;
  local_e8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_e8.AliasableFormats.ArrayNum = 0;
  this_00 = TMapBase<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
            ::Emplace<enum_EResourceName_const_&>(&this->IntermediateTextureMap,local_198);
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,iVar11,Default);
  FVar23 = FVar19;
  FVar25 = FVar19;
  if (0 < this_00->ArrayNum) {
    do {
      pFVar6 = this->GraphBuilder;
      local_180 = L"NNEDenoiser.IntermediateTexture";
      local_188 = pFVar6;
      FRHITextureDesc::FRHITextureDesc(&local_98,&local_e8);
      if (local_98.Extent.field0_0x0._s_0.X < 1) {
        local_130 = &local_180;
        local_128 = &local_98;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_1>::operator()(&local_130);
      }
      if (local_98.Extent.field0_0x0._s_0.Y < 1) {
        local_120 = &local_180;
        local_118 = &local_98;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_2>::operator()(&local_120);
      }
      if ((uint)GRHIGlobals.MaxTextureDimensions.Value < (uint)local_98.Extent.field0_0x0._s_0.X) {
        local_110 = &local_180;
        local_108 = &local_98;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_3>::operator()(&local_110);
      }
      if ((uint)GRHIGlobals.MaxTextureDimensions.Value < (uint)local_98.Extent.field0_0x0._s_0.Y) {
        local_100 = &local_180;
        local_f8 = &local_98;
        `FRDGBuilder::CreateTexture'::__l2::<lambda_4>::operator()(&local_100);
      }
      uVar10 = GRHIGlobals.MaxTextureDimensions.Value;
      if (local_98.Extent.field0_0x0._s_0.X < GRHIGlobals.MaxTextureDimensions.Value) {
        uVar10 = local_98.Extent.field0_0x0._s_0.X;
      }
      local_98.Extent.field0_0x0._s_0.X = 1;
      if (1 < (int)uVar10) {
        local_98.Extent.field0_0x0._s_0.X = uVar10;
      }
      TVar8.Value = GRHIGlobals.MaxTextureDimensions.Value;
      if (local_98.Extent.field0_0x0._s_0.Y < GRHIGlobals.MaxTextureDimensions.Value) {
        TVar8.Value = local_98.Extent.field0_0x0._s_0.Y;
      }
      local_98.Extent.field0_0x0._s_0.Y = 1;
      if (1 < TVar8.Value) {
        local_98.Extent.field0_0x0._s_0.Y = TVar8.Value;
      }
      local_158 = (FRDGTexture *)&pFVar6->UserValidation;
      FRDGUserValidation::ValidateCreateTexture
                ((FRDGUserValidation *)local_158,(FRDGTextureDesc *)&local_98,local_180,None);
      pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&pFVar6->_padding_,0x158,8);
      pFVar14 = FRDGTexture::FRDGTexture(pFVar14,local_180,(FRDGTextureDesc *)&local_98,None);
      piVar1 = &(pFVar6->Textures).Array.ArrayMax;
      iVar13 = (pFVar6->Textures).Array.ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTexture_*>_>
                           (0x808,(ForElementType<FRDGTexture_*> *)&pFVar6->Textures,piVar1);
      }
      (pFVar6->Textures).Array.ArrayNum = iVar13 + 1;
      (pFVar6->Textures).Array.AllocatorInstance.Data[iVar13] = pFVar14;
      (pFVar14->Handle).Index = (pFVar6->Textures).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateTexture((FRDGUserValidation *)local_158,pFVar14);
      FRDGTrace::AddResource(&local_188->Trace,(FRDGViewableResource *)pFVar14);
      if (local_98.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      uVar18 = FVar19._0_4_;
      uVar12 = uVar24;
      if ((int)uVar18 < this_00->ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar19._0_4_ = uVar18 + 1;
      FVar19._4_4_ = 0;
      *(FRDGTexture **)((this_00->AllocatorInstance).Data + (longlong)FVar23) = pFVar14;
      FVar23 = (ForElementType<EPixelFormat>)((longlong)FVar23 + 8);
      FVar25 = local_e8.AliasableFormats.AllocatorInstance.SecondaryData;
    } while ((int)FVar19._0_4_ < this_00->ArrayNum);
  }
  if (FVar25 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FVar25);
  }
  return;
}

// BeginTile @ 14eaf00d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FResourceManager::BeginTile(FResourceManager *this,int param_1)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  FRDGTexture *pFVar3;
  code *pcVar4;
  TMap<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  byte *pbVar13;
  char cVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  byte *pbVar20;
  FLinearColor_u_0 *pFVar21;
  undefined1 local_res8 [8];
  char local_res10;
  uint local_res18;
  int local_res20;
  TIntVector3<int>_u_0 local_138;
  int local_12c;
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined4 local_100;
  int local_f8;
  TMap<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TMap<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FLinearColor_u_0 local_90;
  FLinearColor_u_0 local_80 [2];
  undefined4 local_54;
  
  lVar11 = (longlong)param_1;
  if ((param_1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TileIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                         ,0x5d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->Tiling).Tiles.ArrayNum <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TileIndex < Tiling.Tiles.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                         ,0x5e,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->CurrentTileIdx = param_1;
  uVar15 = 0;
  if (param_1 < (this->Tiling).Tiles.ArrayNum) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->Tiling).Tiles.AllocatorInstance.Data;
  local_114 = 0;
  uStack_e4 = 1;
  local_10c = 1;
  local_104 = 0;
  local_100 = 1;
  local_128 = *(int *)(pFVar2 + lVar11 * 0x28 + 4) + *(int *)(pFVar2 + lVar11 * 0x28 + 0xc);
  local_12c = *(int *)(pFVar2 + lVar11 * 0x28) + *(int *)(pFVar2 + lVar11 * 0x28 + 8);
  local_124 = 0;
  local_120 = *(undefined4 *)(pFVar2 + lVar11 * 0x28 + 8);
  local_11c = *(undefined4 *)(pFVar2 + lVar11 * 0x28 + 0xc);
  local_118 = 0;
  local_138._s_0.X =
       ((this->Tiling).TileSize.field0_0x0._s_0.X - *(int *)(pFVar2 + lVar11 * 0x28 + 8)) +
       *(int *)(pFVar2 + lVar11 * 0x28 + 0x10);
  local_138._s_0.Y =
       ((this->Tiling).TileSize.field0_0x0._s_0.Y - *(int *)(pFVar2 + lVar11 * 0x28 + 0xc)) +
       *(int *)(pFVar2 + lVar11 * 0x28 + 0x14);
  local_138._s_0.Z = 1;
  if ((*(int *)(pFVar2 + lVar11 * 0x28 + 0x10) == *(int *)(pFVar2 + lVar11 * 0x28 + 8)) &&
     (*(int *)(pFVar2 + lVar11 * 0x28 + 0x14) == *(int *)(pFVar2 + lVar11 * 0x28 + 0xc))) {
    cVar14 = '\0';
  }
  else {
    cVar14 = '\x01';
  }
  puVar17 = &(this->TextureMap).field_0x10;
  local_80[0]._0_8_ = 0;
  local_80[0]._8_8_ = 0;
  local_f0 = &this->TextureMap;
  iStack_e8 = 0;
  local_90._0_8_ = ___xmm_bf800000bf800000bf800000bf800000;
  local_90._8_8_ = _UNK_15076c668;
  iVar7 = *(int *)&(this->TextureMap).field_0x28;
  iStack_d4 = iStack_e8;
  local_d0 = iStack_e8;
  if (iVar7 != 0) {
    puVar18 = *(uint **)&(this->TextureMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar17;
    }
    uVar15 = *puVar18;
    local_d0 = 0;
    iStack_e8 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_e8;
      local_d0 = local_d0 + 0x20;
      iStack_e8 = iStack_e8 + 1;
      iStack_d4 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_14eaf02d0;
      uVar15 = puVar18[lVar11 + 1];
    }
    uStack_e4 = -uVar15 & uVar15;
    uVar19 = (ulonglong)uStack_e4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_d4 = local_res20 + -1 + local_d0;
    if (iVar7 < iStack_d4) {
      iStack_d4 = iVar7;
    }
  }
LAB_14eaf02d0:
  uVar15 = *(uint *)&(this->TextureMap).field_0x28;
  uStack_cc = local_54;
  iStack_c8 = *(int *)&(this->TextureMap).field_0x8 - *(int *)&(this->TextureMap).field_0x34;
  uVar12 = uVar15 & 0xffffffe0;
  uStack_d8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_e4,iStack_e8);
  TStack_b8.CurrentBitIndex = iStack_d4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar15 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = local_d0;
  uStack_98 = CONCAT44(uStack_c4,iStack_c8);
  local_res10 = cVar14;
  local_res18 = uVar15;
  local_e0 = puVar17;
  local_c0 = local_f0;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar17;
  if ((((int)uVar15 < 0) || (iVar7 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)&(this->TextureMap).field_0x28;
  if (uVar15 != uVar8) {
    puVar16 = *(undefined1 **)&(this->TextureMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar17;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar10 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar15 = uVar8;
      local_res18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14eaf0400;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_f8 = (int)lVar11;
    uVar15 = local_f8 + -1 + uVar12;
    local_res18 = uVar15;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
      local_res18 = uVar8;
    }
  }
LAB_14eaf0400:
  pTVar5 = local_c0;
  if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
    local_res8[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((TStack_b8.CurrentBitIndex == uVar15) &&
      (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->TextureMap).field_0x10))
     && (pTVar5 == &this->TextureMap)) {
    return;
  }
  pbVar20 = (byte *)((longlong)TStack_b8.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
  bVar1 = *pbVar20;
  if (*(int *)&(this->IntermediateTextureMap).field_0x8 !=
      *(int *)&(this->IntermediateTextureMap).field_0x34) {
    puVar17 = &(this->IntermediateTextureMap).field_0x38;
    puVar16 = *(undefined1 **)&(this->IntermediateTextureMap).field_0x40;
    puVar9 = puVar17;
    if (puVar16 != (undefined1 *)0x0) {
      puVar9 = puVar16;
    }
    uVar19 = (ulonglong)(*(int *)&(this->IntermediateTextureMap).field_0x48 - 1) & (ulonglong)bVar1;
    iVar7 = *(int *)(puVar9 + uVar19 * 4);
    if (iVar7 != -1) {
      lVar11 = *(longlong *)&this->IntermediateTextureMap;
      do {
        if (*(byte *)((longlong)iVar7 * 0x20 + lVar11) == bVar1) {
          if (puVar16 != (undefined1 *)0x0) {
            puVar17 = puVar16;
          }
          iVar7 = *(int *)(puVar17 + uVar19 * 4);
          if (iVar7 == -1) goto LAB_14eaf04da;
          goto LAB_14eaf04c0;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar11);
      } while (iVar7 != -1);
    }
  }
  goto LAB_14eaf0690;
  while (iVar7 = *(int *)(pbVar13 + 0x18), iVar7 != -1) {
LAB_14eaf04c0:
    pbVar13 = (byte *)((longlong)iVar7 * 0x20 + lVar11);
    if (*pbVar13 == bVar1) {
      if (pbVar13 != (byte *)0x0) goto LAB_14eaf0502;
      goto LAB_14eaf04dc;
    }
  }
LAB_14eaf04da:
  pbVar13 = (byte *)0x0;
LAB_14eaf04dc:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14eaf0502:
  if ((*(int *)(pbVar20 + 0x10) != *(int *)(pbVar13 + 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Textures.Num() == IntermediateTextures.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                         ,0x77,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar19 = (ulonglong)(*pbVar20 == 4);
  if ((int)(uint)(*pbVar20 == 4) < *(int *)(pbVar20 + 0x10)) {
    lVar11 = uVar19 << 3;
    do {
      uVar12 = (uint)uVar19;
      uVar15 = ~uVar12 >> 0x1f;
      if (cVar14 != '\0') {
        pFVar21 = &local_90;
        if (*pbVar20 != 2) {
          pFVar21 = local_80;
        }
        uVar8 = 0;
        if ((int)uVar12 < *(int *)(pbVar13 + 0x10)) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AddClearRenderTargetPass
                  (this->GraphBuilder,*(FRDGTexture **)(lVar11 + *(longlong *)(pbVar13 + 8)),
                   (FLinearColor *)&pFVar21->_s_0);
      }
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(pbVar13 + 0x10)) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(FRDGTexture **)(lVar11 + *(longlong *)(pbVar13 + 8));
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(pbVar20 + 0x10)) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      AddCopyTexturePass(this->GraphBuilder,*(FRDGTexture **)(lVar11 + *(longlong *)(pbVar20 + 8)),
                         pFVar3,(FRHICopyTextureInfo *)&local_138._s_0);
      uVar19 = (ulonglong)(uVar12 + 1);
      lVar11 = lVar11 + 8;
      cVar14 = local_res10;
      uVar15 = local_res18;
    } while ((int)(uVar12 + 1) < *(int *)(pbVar20 + 0x10));
  }
LAB_14eaf0690:
  TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  cVar14 = local_res10;
  goto LAB_14eaf0400;
}

// EndTile @ 14eaf25e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall UE::NNEDenoiser::Private::FResourceManager::EndTile(FResourceManager *this)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  FRDGTexture *pFVar4;
  code *pcVar5;
  bool bVar6;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  TIntVector3<int>_u_0 local_48;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)&(this->IntermediateTextureMap).field_0x8 !=
      *(int *)&(this->IntermediateTextureMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->IntermediateTextureMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->IntermediateTextureMap).field_0x38;
    }
    iVar9 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->IntermediateTextureMap).field_0x48 - 1U & 4) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&this->IntermediateTextureMap;
      while (*(char *)((longlong)iVar9 * 0x20 + lVar3) != '\x04') {
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar3);
        if (iVar9 == -1) {
          return;
        }
      }
      if (this->CurrentTileIdx < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentTileIdx >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                           ,0x8c,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((this->Tiling).Tiles.ArrayNum <= this->CurrentTileIdx) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentTileIdx < Tiling.Tiles.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                           ,0x8d,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar2 = this->CurrentTileIdx;
      uVar10 = 0;
      if ((int)uVar2 < (this->Tiling).Tiles.ArrayNum) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar1 = (this->Tiling).Tiles.AllocatorInstance.Data + (longlong)(int)uVar2 * 0x28;
      local_24 = 0;
      local_1c = 1;
      local_14 = 0;
      local_10 = 1;
      local_38 = *(int *)(pFVar1 + 0x1c);
      local_3c = *(int *)(pFVar1 + 0x18);
      local_34 = 0;
      local_2c = *(int *)(pFVar1 + 4) + *(int *)(pFVar1 + 0x1c);
      local_30 = *(int *)pFVar1 + *(int *)(pFVar1 + 0x18);
      local_28 = 0;
      local_48._s_0.Y =
           (*(int *)(pFVar1 + 0x24) + (this->Tiling).TileSize.field0_0x0._s_0.Y) -
           *(int *)(pFVar1 + 0x1c);
      local_48._s_0.X =
           (*(int *)(pFVar1 + 0x20) + (this->Tiling).TileSize.field0_0x0._s_0.X) -
           *(int *)(pFVar1 + 0x18);
      local_48._s_0.Z = 1;
      pTVar7 = TMapBase<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked(&this->TextureMap,Output);
      pTVar8 = TMapBase<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked(&this->IntermediateTextureMap,Output);
      if (pTVar7->ArrayNum == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Textures.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                           ,0x98,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (pTVar7->ArrayNum != pTVar8->ArrayNum) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Textures.Num() == IntermediateTextures.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                           ,0x99,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (pTVar7->ArrayNum < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = *(FRDGTexture **)(pTVar7->AllocatorInstance).Data;
      if (pTVar8->ArrayNum < 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      AddCopyTexturePass(this->GraphBuilder,*(FRDGTexture **)(pTVar8->AllocatorInstance).Data,pFVar4
                         ,(FRHICopyTextureInfo *)&local_48._s_0);
    }
  }
  return;
}

// GetIntermediateTexture @ 14eaf9490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
UE::NNEDenoiser::Private::FResourceManager::GetIntermediateTexture
          (FResourceManager *this,EResourceName param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FRDGTexture *pFVar5;
  
  pTVar4 = TMapBase<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked(&this->IntermediateTextureMap,param_1);
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameIdx >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (pTVar4->ArrayNum <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameIdx < IntermediateTextures.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                       ,0xa3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = 0;
  if (param_2 < pTVar4->ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRDGTexture *)(*pcVar1)();
      return pFVar5;
    }
  }
  return *(FRDGTexture **)((pTVar4->AllocatorInstance).Data + (longlong)param_2 * 8);
}

// GetTexture @ 14eafa0d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
UE::NNEDenoiser::Private::FResourceManager::GetTexture
          (FResourceManager *this,EResourceName param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRDGTexture *pFVar4;
  TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *this_00;
  undefined1 *puVar8;
  
  if ((!param_3) &&
     (*(int *)&(this->IntermediateTextureMap).field_0x8 !=
      *(int *)&(this->IntermediateTextureMap).field_0x34)) {
    puVar8 = *(undefined1 **)&(this->IntermediateTextureMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->IntermediateTextureMap).field_0x38;
    }
    iVar3 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->IntermediateTextureMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(EResourceName *)((longlong)iVar3 * 0x20 + *(longlong *)&this->IntermediateTextureMap)
            == param_1) {
          bVar2 = true;
          goto LAB_14eafa14d;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this->IntermediateTextureMap)
        ;
      } while (iVar3 != -1);
    }
  }
  bVar2 = false;
LAB_14eafa14d:
  lVar7 = 200;
  if (!bVar2) {
    lVar7 = 0x78;
  }
  this_00 = (longlong *)((longlong)&this->GraphBuilder + lVar7);
  if ((int)this_00[1] != *(int *)((longlong)this_00 + 0x34)) {
    plVar6 = (longlong *)this_00[8];
    if ((longlong *)this_00[8] == (longlong *)0x0) {
      plVar6 = this_00 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 + ((ulonglong)((int)this_00[9] - 1) & (ulonglong)param_1) * 4)
    ;
    if (iVar3 != -1) {
      do {
        if (*(EResourceName *)((longlong)iVar3 * 0x20 + *this_00) == param_1) goto LAB_14eafa1ca;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *this_00);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Map.Contains(Name)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                     ,0xcf,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FRDGTexture *)(*pcVar1)();
    return pFVar4;
  }
LAB_14eafa1ca:
  pTVar5 = TMapBase<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked(this_00,param_1);
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameIdx >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                       ,0xd2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (pTVar5->ArrayNum <= param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameIdx < Textures.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceManager.cpp"
                       ,0xd3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGTexture *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((-1 < param_2) && (param_2 < pTVar5->ArrayNum)) {
    if (param_2 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRDGTexture *)(*pcVar1)();
        return pFVar4;
      }
    }
    return *(FRDGTexture **)((pTVar5->AllocatorInstance).Data + (longlong)param_2 * 8);
  }
  return (FRDGTexture *)0x0;
}

// MakeHistoryResourceMap @ 14eafb690

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
UE::NNEDenoiser::Private::FResourceManager::MakeHistoryResourceMap
          (FResourceManager *this,
          TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  FAsyncSetupQueue *this_00;
  FAsyncSetupOp *pFVar2;
  ulonglong uVar3;
  atomic<unsigned_char> aVar4;
  byte bVar5;
  uint uVar6;
  FRDGPass *pFVar7;
  undefined1 *puVar8;
  TRefCountPtr<IPooledRenderTarget> *pTVar9;
  FRDGBuilder *pFVar10;
  TRefCountPtr<IPooledRenderTarget> TVar11;
  FExtractedTexture *pFVar12;
  code *pcVar13;
  ForAnyElementType FVar14;
  TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *pTVar15;
  bool bVar16;
  int iVar17;
  TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar18;
  longlong lVar19;
  undefined1 *puVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  FScriptContainerElement local_res8 [8];
  TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
  *local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_f8;
  int local_f0 [4];
  TMap<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  TPairInitializer<EResourceName_const_&,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_&&>
  local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  FRDGPass *pFStack_60;
  FScriptContainerElement *local_58;
  ForAnyElementType *local_50;
  
  puVar8 = &(this->TextureMap).field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_e0 = &this->TextureMap;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  iStack_d8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  uStack_d4 = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  local_c0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar17 = *(int *)&(this->TextureMap).field_0x28;
  iStack_c4 = local_c0;
  if (iVar17 != 0) {
    puVar26 = *(uint **)&(this->TextureMap).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar8;
    }
    uVar25 = *puVar26;
    local_c0 = 0;
    iStack_d8 = 0;
    while (uVar25 == 0) {
      lVar19 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_14eafb75d;
      uVar25 = puVar26[lVar19 + 1];
    }
    uStack_d4 = -uVar25 & uVar25;
    uVar3 = (ulonglong)uStack_d4 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_b0 = (int)lVar19;
    iStack_c4 = local_c0 + -1 + local_b0;
    if (iVar17 < iStack_c4) {
      iStack_c4 = iVar17;
    }
  }
LAB_14eafb75d:
  uVar25 = *(uint *)&(this->TextureMap).field_0x28;
  iStack_b8 = *(int *)&(this->TextureMap).field_0x8 - *(int *)&(this->TextureMap).field_0x34;
  uVar24 = uVar25 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uStack_d4,iStack_d8);
  uStack_c8 = 0xffffffff;
  TStack_98.CurrentBitIndex = iStack_c4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar25 >> 5;
  TStack_98._28_4_ = iStack_c4;
  TStack_98.BaseBitIndex = local_c0;
  uStack_78 = CONCAT44(uStack_b4,iStack_b8);
  local_res10 = __return_storage_ptr__;
  local_f0[2] = uVar25;
  local_d0 = puVar8;
  iStack_bc = iStack_c4;
  local_a8.Value = (TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *)local_e0
  ;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  if ((((int)uVar25 < 0) || (iVar17 < (int)uVar25)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar13 = (code *)swi(3);
    pTVar18 = (TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
               *)(*pcVar13)();
    return pTVar18;
  }
  uVar6 = *(uint *)&(this->TextureMap).field_0x28;
  pTVar18 = local_res10;
  if (uVar25 != uVar6) {
    puVar20 = *(undefined1 **)&(this->TextureMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar8;
    }
    uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar22 * 4);
    while (uVar25 == 0) {
      lVar19 = (longlong)iVar22;
      uVar24 = uVar24 + 0x20;
      iVar22 = iVar22 + 1;
      uVar25 = uVar6;
      local_f0[2] = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14eafb880;
      uVar25 = *(uint *)(puVar20 + lVar19 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_ac = (int)lVar19;
    uVar25 = local_ac + -1 + uVar24;
    local_f0[2] = uVar25;
    if ((int)uVar6 < (int)uVar25) {
      uVar25 = uVar6;
      local_f0[2] = uVar6;
    }
  }
LAB_14eafb880:
  do {
    pTVar15 = local_a8.Value;
    if ((local_a8.Value)->ArrayNum -
        *(int *)((longlong)&local_a8.Value[3].AllocatorInstance.Data + 4) != (int)uStack_78) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_98.CurrentBitIndex == uVar25) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->TextureMap).field_0x10))
       && ((TMap<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_>,0>_>
            *)pTVar15 == &this->TextureMap)) {
      return __return_storage_ptr__;
    }
    pFVar23 = (pTVar15->AllocatorInstance).Data + (longlong)TStack_98.CurrentBitIndex * 0x20;
    local_res8[0] = *pFVar23;
    if ((*(int *)(pFVar23 + 0x10) < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar13 = (code *)swi(3);
      pTVar18 = (TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
                 *)(*pcVar13)();
      return pTVar18;
    }
    pFVar7 = (FRDGPass *)**(undefined8 **)(pFVar23 + 8);
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    iVar17 = 0;
    if (0 < *(int *)(pFVar23 + 0x10) + -1) {
      iVar17 = *(int *)(pFVar23 + 0x10) + -1;
    }
    if (iVar17 < 2) {
      if (iVar17 != 0) goto LAB_14eafba39;
    }
    else {
      if (*(int *)&(this->ResourceMap).field_0x8 != *(int *)&(this->ResourceMap).field_0x34) {
        puVar8 = *(undefined1 **)&(this->ResourceMap).field_0x40;
        puVar20 = &(this->ResourceMap).field_0x38;
        if (puVar8 != (undefined1 *)0x0) {
          puVar20 = puVar8;
        }
        iVar22 = *(int *)(puVar20 +
                         ((ulonglong)(*(int *)&(this->ResourceMap).field_0x48 - 1) &
                         (ulonglong)(byte)local_res8[0]) * 4);
        if (iVar22 != -1) {
          do {
            pFVar23 = (FScriptContainerElement *)
                      ((longlong)iVar22 * 0x20 + *(longlong *)&this->ResourceMap);
            if (*pFVar23 == local_res8[0]) {
              pFVar21 = pFVar23 + 8;
              if (pFVar23 == (FScriptContainerElement *)0x0) {
                pFVar21 = (FScriptContainerElement *)0x0;
              }
              if (pFVar21 != (FScriptContainerElement *)0x0) {
                pTVar9 = *(TRefCountPtr<IPooledRenderTarget> **)pFVar21;
                iVar22 = iVar17 + -1;
                if (*(int *)(pFVar21 + 8) < iVar17 + -1) {
                  iVar22 = *(int *)(pFVar21 + 8);
                }
                if (((pTVar9 == (TRefCountPtr<IPooledRenderTarget> *)0x0) && (iVar22 != 0)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Ptr != nullptr || Count == 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x9c1,L""), bVar16)) {
                  pcVar13 = (code *)swi(3);
                  pTVar18 = (TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
                             *)(*pcVar13)();
                  return pTVar18;
                }
                iVar17 = Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (8,8,iVar22,&local_f8,local_f0,local_f0 + 1);
                ConstructItems<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<IPooledRenderTarget>,int>
                          (local_f8.Data + (longlong)iVar17 * 8,pTVar9,iVar22);
              }
              break;
            }
            iVar22 = *(int *)(pFVar23 + 0x18);
          } while (iVar22 != -1);
        }
      }
LAB_14eafba39:
      pFVar10 = this->GraphBuilder;
      iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,1,&local_f8,local_f0,local_f0 + 1);
      memmove(local_f8.Data + 8,local_f8.Data,(longlong)iVar17 << 3);
      FVar14.Data = local_f8.Data;
      DefaultConstructItems<TRefCountPtr<IPooledRenderTarget>,int>(local_f8.Data,1);
      FRDGUserValidation::ValidateExtractTexture
                (&pFVar10->UserValidation,(FRDGTexture *)pFVar7,
                 (TRefCountPtr<IPooledRenderTarget> *)FVar14.Data);
      TVar11.Reference = *(IPooledRenderTarget **)FVar14.Data;
      if (TVar11.Reference != (IPooledRenderTarget *)0x0) {
        *(IPooledRenderTarget **)FVar14.Data = (IPooledRenderTarget *)0x0;
        (**(code **)((TVar11.Reference)->_padding_ + 0x38))();
      }
      bVar5 = *(undefined1 *)
               ((longlong)&(pFVar7->Name).FormattedEventName.Data.AllocatorInstance.Data + 1);
      piVar1 = &(pFVar10->ExtractedTextures).ArrayMax;
      *(undefined1 *)((longlong)&(pFVar7->Name).FormattedEventName.Data.AllocatorInstance.Data + 3)
           = 1;
      *(byte *)((longlong)&(pFVar7->Name).FormattedEventName.Data.AllocatorInstance.Data + 1) =
           bVar5 | 2;
      iVar17 = (pFVar10->ExtractedTextures).ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FExtractedTexture>_>
                           (0x810,&(pFVar10->ExtractedTextures).AllocatorInstance,piVar1);
      }
      (pFVar10->ExtractedTextures).ArrayNum = iVar17 + 1;
      pFVar12 = (pFVar10->ExtractedTextures).AllocatorInstance.Data;
      pFVar12[iVar17].Texture = (FRDGTexture *)pFVar7;
      pFVar12[iVar17].PooledTexture = (TRefCountPtr<IPooledRenderTarget> *)FVar14.Data;
      __return_storage_ptr__ = local_res10;
      if ((bVar5 & 2) == 0) {
        this_00 = &pFVar10->AsyncSetupQueue;
        pTVar18 = (TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
                   *)((ulonglong)pTVar18 & 0xff00000000000002 | 2);
        local_68 = pTVar18;
        pFStack_60 = pFVar7;
        if ((this_00 == (FAsyncSetupQueue *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar16)) {
          pcVar13 = (code *)swi(3);
          pTVar18 = (TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
                     *)(*pcVar13)();
          return pTVar18;
        }
        LOCK();
        bVar16 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
        if (bVar16) {
          (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar16) {
          FMutex::LockSlow(&this_00->Mutex);
        }
        iVar17 = (pFVar10->AsyncSetupQueue).Ops.ArrayNum;
        piVar1 = &(pFVar10->AsyncSetupQueue).Ops.ArrayMax;
        if (iVar17 == *piVar1) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FAsyncSetupOp>_>
                             (0x810,&(pFVar10->AsyncSetupQueue).Ops.AllocatorInstance,piVar1);
          (pFVar10->AsyncSetupQueue).Ops.ArrayNum = iVar17;
        }
        (pFVar10->AsyncSetupQueue).Ops.ArrayNum = iVar17 + 1;
        pFVar2 = (pFVar10->AsyncSetupQueue).Ops.AllocatorInstance.Data + iVar17;
        *(TMap<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>_>
          **)pFVar2 = local_68;
        (pFVar2->field2_0x8).Pass = pFStack_60;
        LOCK();
        aVar4 = (this_00->Mutex).State;
        (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
        UNLOCK();
        __return_storage_ptr__ = local_res10;
        if (((byte)aVar4 & 2) != 0) {
          FMutex::WakeWaitingThread(&this_00->Mutex);
          __return_storage_ptr__ = local_res10;
        }
      }
    }
    if (local_f0[0] != 0) {
      local_58 = local_res8;
      local_50 = &local_f8;
      TSet<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EResourceName_const_&,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_&&>_>
                (__return_storage_ptr__,&local_a8,(bool *)&local_58);
    }
    DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
              ((TRefCountPtr<IPooledRenderTarget> *)local_f8.Data,local_f0[0]);
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    uVar25 = local_f0[2];
  } while( true );
}

