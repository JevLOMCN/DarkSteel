// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// GetDispatchArgs @ 1491c7990

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRasterizationGrid3D::GetDispatchArgs
          (FNiagaraDataInterfaceProxyRasterizationGrid3D *this,
          FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  RasterizationGrid3DRWInstanceData *pRVar1;
  
  pRVar1 = TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
                   *)&this->SystemInstancesToProxyData,param_1->SystemInstanceID);
  if (pRVar1 != (RasterizationGrid3DRWInstanceData *)0x0) {
    FNDIGpuComputeDispatchArgsGenContext::SetDirect(param_1,&pRVar1->NumCells,0xffffffff);
    return;
  }
  return;
}

// PostSimulate @ 1491d7f90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRasterizationGrid3D::PostSimulate
          (FNiagaraDataInterfaceProxyRasterizationGrid3D *this,
          FNDIGpuComputePostSimulateContext *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  if (param_1->bFinalPostSimulate != false) {
    TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
                *)&this->SystemInstancesToProxyData);
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_10 = 0;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar3 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
                *)&this->SystemInstancesToProxyData;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        FNiagaraPooledRWTexture::EndGraphUsage
                  ((FNiagaraPooledRWTexture *)(*local_48 + 0x38 + (longlong)(int)uVar3 * 0x80));
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar3 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar4 < 4) {
          iVar2 = 1;
        }
        else {
          uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar2 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
          local_18->HashSize = iVar2;
          TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  return;
}

// PreStage @ 1491d8d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRasterizationGrid3D::PreStage
          (FNiagaraDataInterfaceProxyRasterizationGrid3D *this,
          FNDIGpuComputePreStageContext *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  FRHICommandListBase *pFVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  longlong lVar10;
  FRDGTextureUAV *pFVar11;
  int iVar12;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar13;
  ulong64 *puVar14;
  int iVar15;
  uint uVar16;
  ulong64 *puVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulong64 *puVar24;
  undefined1 auStackY_168 [32];
  FResourceArrayUploadInterface local_128;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_120;
  uint local_118 [2];
  undefined1 local_110;
  int local_108;
  int local_100;
  int iStack_fc;
  FNDIGpuComputePrePostStageContext *local_f8;
  FRDGBuilder *local_f0;
  TIntVector4<unsigned_int>_u_0 local_e8;
  FRHICommandListBase *local_d8;
  undefined1 local_c8 [24];
  float local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined2 local_9c;
  undefined4 local_9a;
  undefined4 local_96;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_f8 = (FNDIGpuComputePrePostStageContext *)param_1;
  uVar9 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  puVar17 = (ulong64 *)0x0;
  puVar14 = puVar17;
  if (*(int *)&(this->SystemInstancesToProxyData).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData).field_0x34) {
    puVar19 = *(undefined1 **)&(this->SystemInstancesToProxyData).field_0x40;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->SystemInstancesToProxyData).field_0x38;
    }
    iVar15 = *(int *)(puVar19 +
                     ((uVar9 >> 0x20) * 0x17 + uVar9 &
                     (ulonglong)(*(int *)&(this->SystemInstancesToProxyData).field_0x48 - 1)) * 4);
    if (iVar15 != -1) {
      do {
        puVar14 = (ulong64 *)
                  ((longlong)iVar15 * 0x80 + *(longlong *)&this->SystemInstancesToProxyData);
        if (*puVar14 == uVar9) {
          if (puVar14 != (ulong64 *)0x0) goto LAB_1491d8dc4;
          break;
        }
        iVar15 = (int)puVar14[0xf];
        puVar14 = puVar17;
      } while (iVar15 != -1);
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1491d8dc4:
  local_f0 = *(FRDGBuilder **)param_1;
  local_d8 = (FRHICommandListBase *)local_f0->_padding_;
  uVar20 = *(int *)((longlong)puVar14 + 0xc) * *(int *)((longlong)puVar14 + 0x14) * (int)puVar14[3]
           * (int)puVar14[2];
  uVar18 = 0;
  if (((((char)puVar14[6] != '\0') || (puVar14[7] == 0)) &&
      (*(undefined1 *)(puVar14 + 6) = 0,
      uVar20 <= (uint)NDIRasterizationGrid3DLocal::GMaxNiagaraRasterizationGridCells)) &&
     (uVar20 != 0)) {
    FReadBuffer::Release((FReadBuffer *)(puVar14 + 0xc));
    local_b0 = FClearValueBinding::Black.Value.Color[3];
    local_c8._16_8_ = FClearValueBinding::Black.Value._4_8_;
    local_c8._8_8_ = FClearValueBinding::Black._0_8_;
    iVar15 = *(int *)((longlong)puVar14 + 0x24) * (int)puVar14[3];
    local_100 = *(int *)((longlong)puVar14 + 0x1c) * (int)puVar14[2];
    iStack_fc = (int)puVar14[4] * *(int *)((longlong)puVar14 + 0x14);
    if ((0xffff < iVar15) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                           ,0x29e,L"Depth parameter (Size.Z) exceeds valid range"), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_ac = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_a4._4_4_ = iStack_fc;
    local_a4._0_4_ = local_100;
    local_c8._0_8_ = 0x20008;
    local_a8 = 0;
    local_9c = (undefined2)iVar15;
    local_9a = 0x1010001;
    local_96 = 0xff001d02;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_7c = 1;
    FNiagaraPooledRWTexture::InitializeInternal
              ((FNiagaraPooledRWTexture *)(puVar14 + 7),(FRDGBuilder *)local_f8->_padding_,
               L"NiagaraRasterizationGrid3D::IntGrid",(FRDGTextureDesc *)local_c8);
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
  }
  if ((int)puVar14[0xe] == 0) {
    local_128 = (FResourceArrayUploadInterface)
                &___7__TResourceArray_U__TVector4_M_Math_UE___0A___6B_;
    local_120.Packed = 0;
    local_118[0] = 0;
    local_118[1] = 0;
    local_110 = 0;
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x10,0x10,*(int *)((longlong)puVar14 + 0xc) * 2 + 1,
               (ForAnyElementType *)&local_120.Frozen,(int *)local_118,(int *)(local_118 + 1));
    iVar15 = *(int *)((longlong)puVar14 + 0xc);
    puVar24 = puVar17;
    if (0 < iVar15) {
      do {
        uVar16 = (uint)puVar17;
        uVar1 = (longlong)(int)uVar16 / (longlong)*(int *)((longlong)puVar14 + 0x1c);
        iVar22 = (int)uVar16 % *(int *)((longlong)puVar14 + 0x1c);
        local_108 = (int)uVar16 / ((int)puVar14[4] * *(int *)((longlong)puVar14 + 0x1c));
        uVar9 = puVar14[2];
        iVar21 = (int)((longlong)
                       ((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
                      (longlong)(int)puVar14[4]);
        iVar15 = *(int *)((longlong)puVar14 + 0x14);
        iVar12 = local_108 * (int)puVar14[3];
        uVar8 = uVar18;
        if ((int)uVar16 < (int)local_118[0]) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = local_108;
        TVar13 = local_120;
        if ((local_120.Packed & 1) != 0) {
          TVar13.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_120 + ((longlong)local_120.Packed >> 0x18));
        }
        *(float *)(TVar13.UnfrozenPtr + (longlong)puVar24) = (float)(iVar22 * (int)uVar9);
        *(float *)(TVar13.Packed + 4 + (longlong)puVar24) = (float)(iVar21 * iVar15);
        *(float *)(TVar13.Packed + 8 + (longlong)puVar24) = (float)iVar12;
        *(undefined4 *)(TVar13.Packed + 0xc + (longlong)puVar24) = 0;
        iVar15 = *(int *)((longlong)puVar14 + 0x1c);
        uVar23 = *(int *)((longlong)puVar14 + 0xc) + uVar16;
        uVar8 = uVar18;
        if ((int)uVar23 < (int)local_118[0]) {
          uVar8 = ~uVar23 >> 0x1f;
        }
        uVar9 = puVar14[4];
        iVar12 = *(int *)((longlong)puVar14 + 0x24);
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TVar13 = local_120;
        if ((local_120.Packed & 1) != 0) {
          TVar13.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_120 + ((longlong)local_120.Packed >> 0x18));
        }
        lVar10 = (longlong)(int)uVar23;
        puVar17 = (ulong64 *)(ulonglong)(uVar16 + 1);
        *(float *)(TVar13.UnfrozenPtr + lVar10 * 0x10) = (float)iVar22 / (float)iVar15;
        *(float *)(TVar13.Packed + 4 + lVar10 * 0x10) = (float)iVar21 / (float)(int)uVar9;
        *(float *)(TVar13.Packed + 8 + lVar10 * 0x10) = (float)iVar5 / (float)iVar12;
        *(undefined4 *)(TVar13.Packed + 0xc + lVar10 * 0x10) = 0;
        iVar15 = *(int *)((longlong)puVar14 + 0xc);
        puVar24 = puVar24 + 2;
      } while ((int)(uVar16 + 1) < iVar15);
    }
    uVar4 = _UNK_151d9b518;
    uVar3 = ___xmm_477fff00477fff00477fff00477fff00;
    uVar8 = iVar15 * 2;
    if ((int)uVar8 < (int)local_118[0]) {
      uVar18 = ~uVar8 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = local_d8;
    TVar13 = local_120;
    if ((local_120.Packed & 1) != 0) {
      TVar13.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_120 + ((longlong)local_120.Packed >> 0x18));
    }
    *(undefined8 *)(TVar13.UnfrozenPtr + (longlong)(int)uVar8 * 0x10) = uVar3;
    *(undefined8 *)(TVar13.UnfrozenPtr + (longlong)(int)uVar8 * 0x10 + 8) = uVar4;
    FReadBuffer::Initialize
              ((FReadBuffer *)(puVar14 + 0xc),pFVar6,L"Grid3D::PerAttributeData",0x10,local_118[0],
               PF_A32B32G32R32F,Static,&local_128);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_120.Frozen);
  }
  bVar7 = FNDIGpuComputePrePostStageContext::IsOutputStage(local_f8);
  if (((bVar7) && (uVar20 != 0)) && ((char)puVar14[1] != '\0')) {
    local_e8._s_0.X = *(uint *)((longlong)puVar14 + 0x2c);
    local_e8._s_0.Y = local_e8._s_0.X;
    local_e8._s_0.Z = local_e8._s_0.X;
    local_e8._s_0.W = local_e8._s_0.X;
    pFVar11 = FNiagaraPooledRWTexture::GetOrCreateUAV
                        ((FNiagaraPooledRWTexture *)(puVar14 + 7),local_f0);
    AddClearUAVPass(local_f0,pFVar11,(TIntVector4<unsigned_int> *)&local_e8._s_0,Compute);
  }
  return;
}

// ResetData @ 1491df070

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyRasterizationGrid3D::ResetData
          (FNiagaraDataInterfaceProxyRasterizationGrid3D *this,FNDIGpuComputeResetContext *param_1)

{
  FRDGBuilder *pFVar1;
  RasterizationGrid3DRWInstanceData *pRVar2;
  FRDGTextureUAV *pFVar3;
  TIntVector4<unsigned_int>_u_0 local_18;
  
  pRVar2 = TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
                   *)&this->SystemInstancesToProxyData,param_1->SystemInstanceID);
  if (((pRVar2 != (RasterizationGrid3DRWInstanceData *)0x0) && (pRVar2->NeedsRealloc == false)) &&
     ((pRVar2->RasterizationTexture).Texture.Reference != (IPooledRenderTarget *)0x0)) {
    local_18._s_0.X = pRVar2->ResetValue;
    pFVar1 = (FRDGBuilder *)param_1->_padding_;
    local_18._s_0.Y = local_18._s_0.X;
    local_18._s_0.Z = local_18._s_0.X;
    local_18._s_0.W = local_18._s_0.X;
    pFVar3 = FNiagaraPooledRWTexture::GetOrCreateUAV(&pRVar2->RasterizationTexture,pFVar1);
    AddClearUAVPass(pFVar1,pFVar3,(TIntVector4<unsigned_int> *)&local_18._s_0,Compute);
  }
  return;
}

