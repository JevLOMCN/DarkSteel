// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 56

// TrimHistoryRenderTargets @ 144c64f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneViewState::TrimHistoryRenderTargets(FSceneViewState *this,FScene *param_1)

{
  undefined1 *puVar1;
  TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int local_b8;
  uint uStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [12];
  uint uStack_8c;
  undefined1 *local_88;
  uint uStack_80;
  int iStack_7c;
  longlong local_78;
  TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  int iStack_4c;
  longlong local_48;
  TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
              *)&this->LightShaftBloomHistoryRTs);
  uStack_50 = uStack_80;
  auStack_60._8_8_ = local_88;
  iStack_4c = iStack_7c;
  local_30 = '\0';
  cStack_2f = '\0';
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = stack0xffffffffffffff70;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  if (iStack_7c < *(int *)((longlong)local_88 + 0x18)) {
    pTVar2 = &param_1->Lights;
    puVar1 = &(param_1->Lights).field_0x10;
    iVar11 = 1;
    iVar8 = iStack_7c;
    local_38 = (TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
                *)&this->LightShaftBloomHistoryRTs;
    do {
      plVar6 = local_68;
      iVar4 = *(int *)&(param_1->Lights).field_0x28;
      local_b8 = 0;
      uStack_b4 = 1;
      iStack_a4 = 0;
      iStack_a0 = 0;
      local_98._0_8_ = pTVar2;
      local_88 = puVar1;
      if (iVar4 == 0) {
LAB_144c651a8:
        local_98._8_4_ = local_b8;
        uStack_8c = uStack_b4;
        local_78 = CONCAT44(uStack_9c,iStack_a0);
        uStack_80 = 0xffffffff;
        iStack_7c = iStack_a4;
        if (iStack_a4 < iVar4) {
          do {
            if (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)((longlong)iStack_7c * 0x40 + 0x30 + *(longlong *)local_98._0_8_) +
                   0x28) + 8) == *(longlong *)((longlong)iVar8 * 0x18 + *plVar6))
            goto LAB_144c65102;
            uStack_80 = uStack_80 & ~uStack_8c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_98 + 8));
          } while (iStack_7c < *(int *)(local_88 + 0x18));
        }
      }
      else {
        puVar5 = *(uint **)&(param_1->Lights).field_0x20;
        puVar10 = (uint *)puVar1;
        if (puVar5 != (uint *)0x0) {
          puVar10 = puVar5;
        }
        uVar9 = *puVar10;
        iStack_a0 = 0;
        local_b8 = 0;
        while (uVar9 == 0) {
          iStack_a0 = iStack_a0 + 0x20;
          lVar7 = (longlong)local_b8;
          local_b8 = local_b8 + 1;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b8) goto LAB_144c650db;
          uVar9 = puVar10[lVar7 + 1];
        }
        uStack_b4 = -uVar9 & uVar9;
        uVar3 = (ulonglong)uStack_b4 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iStack_a4 = (int)lVar7 + -1 + iStack_a0;
        if (iStack_a4 <= iVar4) goto LAB_144c651a8;
LAB_144c650db:
        local_98._8_4_ = local_b8;
        uStack_8c = uStack_b4;
        local_78 = CONCAT44(uStack_9c,iStack_a0);
        uStack_80 = 0xffffffff;
        iStack_7c = iVar4;
      }
      TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_40,iVar8);
      local_30 = '\x01';
LAB_144c65102:
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      iVar8 = iStack_4c;
    } while (iStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar9 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (3 < uVar9) {
        uVar3 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar11 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_38->HashSize < iVar11)) || (iVar11 < local_38->HashSize)) {
        local_38->HashSize = iVar11;
        TSet<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// GetPathTracingSampleCount @ 1450d1660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FSceneViewState::GetPathTracingSampleCount(FSceneViewState *this)

{
  FPathTracingState *pFVar1;
  
  pFVar1 = (this->PathTracingState).Ptr;
  if (pFVar1 != (FPathTracingState *)0x0) {
    return (pFVar1->LastConfig).PathTracingData.MaxSamples;
  }
  return 0;
}

// GetPathTracingSampleIndex @ 1450d1680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FSceneViewState::GetPathTracingSampleIndex(FSceneViewState *this)

{
  FPathTracingState *pFVar1;
  
  pFVar1 = (this->PathTracingState).Ptr;
  if (pFVar1 != (FPathTracingState *)0x0) {
    return pFVar1->SampleIndex;
  }
  return 0;
}

// PathTracingInvalidate @ 1450e0bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneViewState::PathTracingInvalidate(FSceneViewState *this,bool param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  FPathTracingState *pFVar4;
  IPooledRenderTarget *pIVar5;
  FRDGPooledBuffer *pFVar6;
  IHistory *pIVar7;
  longlong lVar8;
  
  pFVar4 = (this->PathTracingState).Ptr;
  if (pFVar4 != (FPathTracingState *)0x0) {
    if (param_1) {
      pIVar5 = (pFVar4->LastDenoisedRadianceRT).Reference;
      if (pIVar5 != (IPooledRenderTarget *)0x0) {
        (pFVar4->LastDenoisedRadianceRT).Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar5->_padding_ + 0x38))();
      }
      pIVar5 = (pFVar4->LastRadianceRT).Reference;
      if (pIVar5 != (IPooledRenderTarget *)0x0) {
        (pFVar4->LastRadianceRT).Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar5->_padding_ + 0x38))();
      }
      pIVar5 = (pFVar4->LastNormalRT).Reference;
      if (pIVar5 != (IPooledRenderTarget *)0x0) {
        (pFVar4->LastNormalRT).Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar5->_padding_ + 0x38))();
      }
      pIVar5 = (pFVar4->LastAlbedoRT).Reference;
      if (pIVar5 != (IPooledRenderTarget *)0x0) {
        (pFVar4->LastAlbedoRT).Reference = (IPooledRenderTarget *)0x0;
        (**(code **)(pIVar5->_padding_ + 0x38))();
      }
      pFVar6 = (pFVar4->LastVarianceBuffer).Reference;
      if (pFVar6 != (FRDGPooledBuffer *)0x0) {
        (pFVar4->LastVarianceBuffer).Reference = (FRDGPooledBuffer *)0x0;
        plVar1 = &pFVar6->_padding_;
        LOCK();
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
      pIVar7 = (pFVar4->SpatialTemporalDenoiserHistory).Reference;
      if (pIVar7 != (IHistory *)0x0) {
        (pFVar4->SpatialTemporalDenoiserHistory).Reference = (IHistory *)0x0;
        puVar2 = &pIVar7->field_0x8;
        LOCK();
        iVar3 = *(int *)puVar2;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (puVar2 != (undefined1 *)0x0)) {
          (*(code *)**(undefined8 **)pIVar7)(pIVar7,1);
        }
      }
    }
    pIVar5 = (pFVar4->RadianceRT).Reference;
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (pFVar4->RadianceRT).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar5->_padding_ + 0x38))();
    }
    pIVar5 = (pFVar4->VarianceRT).Reference;
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (pFVar4->VarianceRT).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar5->_padding_ + 0x38))();
    }
    pIVar5 = (pFVar4->AlbedoRT).Reference;
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (pFVar4->AlbedoRT).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar5->_padding_ + 0x38))();
    }
    pIVar5 = (pFVar4->NormalRT).Reference;
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (pFVar4->NormalRT).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar5->_padding_ + 0x38))();
    }
    pIVar5 = (pFVar4->DepthRT).Reference;
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (pFVar4->DepthRT).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar5->_padding_ + 0x38))();
    }
    pFVar6 = (pFVar4->VarianceBuffer).Reference;
    if (pFVar6 != (FRDGPooledBuffer *)0x0) {
      (pFVar4->VarianceBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar6->_padding_;
      LOCK();
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
    pFVar4->SampleIndex = 0;
    pFVar6 = (pFVar4->AdaptiveFrustumGridParameterCache).TopLevelGridBuffer.Reference;
    if (pFVar6 != (FRDGPooledBuffer *)0x0) {
      (pFVar4->AdaptiveFrustumGridParameterCache).TopLevelGridBuffer.Reference =
           (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar6->_padding_;
      LOCK();
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  return;
}

// CreateLUTRenderTarget @ 14513e6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPooledRenderTargetDesc * __cdecl
FSceneViewState::CreateLUTRenderTarget
          (FPooledRenderTargetDesc *__return_storage_ptr__,int param_1,bool param_2,bool param_3,
          bool param_4)

{
  code *pcVar1;
  TIntPoint<int>_u_0 TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  FPooledRenderTargetDesc *pFVar7;
  TIntPoint<int>_u_0 TVar8;
  ETextureCreateFlags EVar9;
  EPixelFormat EVar10;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_58;
  EVar10 = PF_R8G8B8A8;
  if (ZPULL(GPixelFormats[0x12],0,1) != 0) {
    EVar10 = PF_A2B10G10R10;
  }
  if (param_4) {
    EVar10 = PF_FloatRGBA;
  }
  iVar6 = param_1 * param_1;
  TVar8._s_0.Y = param_1;
  TVar8._s_0.X = iVar6;
  if (iVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExtent.X",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                       ,0x6b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FPooledRenderTargetDesc *)(*pcVar1)();
      return pFVar7;
    }
  }
  if (param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExtent.Y",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                       ,0x6c,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FPooledRenderTargetDesc *)(*pcVar1)();
      return pFVar7;
    }
  }
  __return_storage_ptr__->DebugName = L"UnknownTexture";
  EVar9 = RenderTargetable;
  *(undefined8 *)&__return_storage_ptr__->ClearValue = 1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ClearValue).Value + 4) = 0;
  (__return_storage_ptr__->ClearValue).Value.Color[3] = 0.0;
  __return_storage_ptr__->Flags = None;
  __return_storage_ptr__->Format = PF_Unknown;
  __return_storage_ptr__->UAVFormat = PF_Unknown;
  (__return_storage_ptr__->Extent).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  __return_storage_ptr__->Depth = 0;
  __return_storage_ptr__->ArraySize = 1;
  __return_storage_ptr__->NumMips = '\0';
  __return_storage_ptr__->NumSamples = '\x01';
  (__return_storage_ptr__->AliasableFormats).AllocatorInstance.SecondaryData =
       (ForElementType<EPixelFormat>)0x0;
  __return_storage_ptr__->FastVRAMPercentage = 0xff;
  (__return_storage_ptr__->AliasableFormats).ArrayNum = 0;
  (__return_storage_ptr__->AliasableFormats).ArrayMax = 1;
  (__return_storage_ptr__->field13_0x58).PackedBits = '\0';
  uVar3 = FClearValueBinding::Transparent.Value._4_8_;
  *(undefined8 *)&__return_storage_ptr__->ClearValue = FClearValueBinding::Transparent._0_8_;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->ClearValue).Value + 4) = uVar3;
  uVar4 = FClearValueBinding::Transparent.Value.Color[3];
  (__return_storage_ptr__->field13_0x58).PackedBits =
       (__return_storage_ptr__->field13_0x58).PackedBits & 0xfc;
  (__return_storage_ptr__->ClearValue).Value.Color[3] = (float)uVar4;
  __return_storage_ptr__->DebugName = L"UnknownTexture2D";
  (__return_storage_ptr__->Extent).field0_0x0 = TVar8;
  __return_storage_ptr__->Depth = 0;
  __return_storage_ptr__->ArraySize = 1;
  __return_storage_ptr__->NumMips = '\x01';
  __return_storage_ptr__->NumSamples = '\x01';
  __return_storage_ptr__->Format = EVar10;
  __return_storage_ptr__->Flags = ShaderResource;
  if ((iVar6 == 0) || (param_1 == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewDesc.Is2DTexture()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                       ,0x7a,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FPooledRenderTargetDesc *)(*pcVar1)();
      return pFVar7;
    }
  }
  if (param_3) {
    EVar9 = UAV;
  }
  EVar9 = EVar9 | __return_storage_ptr__->Flags;
  __return_storage_ptr__->Flags = EVar9;
  if (param_2) {
    TVar2._s_0.Y = param_1;
    TVar2._s_0.X = param_1;
    (__return_storage_ptr__->Extent).field0_0x0 = TVar2;
    __return_storage_ptr__->Depth = (ushort)param_1;
  }
  __return_storage_ptr__->DebugName = L"CombineLUTs";
  __return_storage_ptr__->Flags = EVar9 | GFastVRamConfig.CombineLUTs;
  return __return_storage_ptr__;
}

// SetExposureCompensationCurve @ 1451e36d0

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
FSceneViewState::SetExposureCompensationCurve(FSceneViewState *this,UCurveFloat *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessEyeAdaptation.cpp"
                       ,0x2d4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateExposureCompensationCurveLUT @ 1451e6580

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
FSceneViewState::UpdateExposureCompensationCurveLUT
          (FSceneViewState *this,FRHICommandList *param_1,UCurveFloat *param_2)

{
  <unnamed_type_ExposureCompensationCurveLUT> *p<Var1;
  float fVar2;
  float fVar3;
  FRHITexture *pFVar4;
  code *pcVar5;
  int iVar6;
  TConsoleVariableData<bool> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<float> *pTVar9;
  TConsoleVariableData<float> *pTVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  TRefCountPtr<FRHITexture> TVar14;
  UCurveFloat *pUVar15;
  float in_XMM2_Da;
  FRHITexture *local_res8;
  
  pTVar7 = CVarEyeAdaptationExposureCompensationCurveLUT.Ref;
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar15 = (UCurveFloat *)0x0;
  if (pTVar7->ShadowedValue[1] != false) {
    pUVar15 = param_2;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId761,"UpdateExposureCompensationCurveLUT",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessEyeAdaptation.cpp"
               ,0x2f9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId761);
  }
  pTVar9 = CVarEyeAdaptationExposureCompensationCurveLUTMinX.Ref;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar10 = CVarEyeAdaptationExposureCompensationCurveLUTMaxX.Ref;
  fVar2 = pTVar9->ShadowedValue[1];
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar8 = CVarEyeAdaptationExposureCompensationCurveLUTNumSamples.Ref;
  fVar3 = pTVar10->ShadowedValue[1];
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  p<Var1 = &this->ExposureCompensationCurveLUT;
  pFVar4 = (p<Var1->Texture).Reference;
  iVar6 = pTVar8->ShadowedValue[1];
  if (pTVar8->ShadowedValue[1] < 1) {
    iVar6 = 1;
  }
  if ((pFVar4 == (FRHITexture *)0x0) ||
     (lVar13 = (**(code **)(pFVar4->_padding_ + 0x20))(), *(int *)(lVar13 + 0x24) != iVar6)) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if (pUVar15 == (UCurveFloat *)0x0) {
    local_res8 = (p<Var1->Texture).Reference;
    if (local_res8 == (FRHITexture *)0x0) goto LAB_1451e6789;
    (p<Var1->Texture).Reference = (FRHITexture *)0x0;
  }
  else {
    if ((this->ExposureCompensationCurveLUT).Curve != pUVar15) {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_1451e6789;
    TVar14 = CreateCurveLUT((FRHICommandList *)&local_res8,(UCurveFloat *)param_1,in_XMM2_Da,fVar2,
                            (int)fVar3);
    if ((FRHITexture *)p<Var1 != TVar14.Reference) {
      pFVar4 = (p<Var1->Texture).Reference;
      (p<Var1->Texture).Reference = (FRHITexture *)(TVar14.Reference)->_padding_;
      (TVar14.Reference)->_padding_ = 0;
      if (pFVar4 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if (local_res8 == (FRHITexture *)0x0) goto LAB_1451e6789;
  }
  FRHIResource::Release((FRHIResource *)local_res8);
LAB_1451e6789:
  (this->ExposureCompensationCurveLUT).Curve = pUVar15;
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FSceneViewState @ 145401640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

FSceneViewState * __thiscall
FSceneViewState::FSceneViewState(FSceneViewState *this,Type param_1,FSceneViewState *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  FPersistentGlobalDistanceFieldData *pFVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<FRHIRenderQuery_*> FVar8;
  code *pcVar9;
  float (*pafVar10) [4];
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar15;
  FSceneViewState *pFVar16;
  FPersistentGlobalDistanceFieldData *pFVar17;
  undefined ***pppuVar18;
  ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
  FVar19;
  ForElementType<FRHIRenderQuery_*> FVar20;
  int iVar21;
  ulonglong uVar22;
  float *pfVar23;
  FGlobalDistanceFieldStreamingReadback *pFVar24;
  ForElementType<FRHIRenderQuery_*> FVar25;
  longlong lVar26;
  TArray<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *this_02;
  FGlobalDistanceFieldClipmapState *pFVar27;
  longlong lVar28;
  undefined1 auStackY_108 [32];
  code *local_a8 [2];
  undefined **local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68 [3];
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FSceneViewStateInterface__6B_;
  FRenderResource::FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FSceneViewStateInterface__;
  (this->ShadowOcclusionQueryMaps).AllocatorInstance.SecondaryData =
       (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
        )0x0;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  (this->ShadowOcclusionQueryMaps).ArrayNum = 0;
  (this->ShadowOcclusionQueryMaps).ArrayMax = 4;
  RHICreateRenderQueryPool((int)this + 400,1);
  (this->PrimitiveOcclusionQueryPool).FrameQueries[0].Queries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[0].Queries.ArrayNum = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[0].Queries.ArrayMax = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[0].FirstFreeIndex = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[0].OcclusionFrameCounter = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[1].Queries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[1].Queries.ArrayNum = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[1].Queries.ArrayMax = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[1].FirstFreeIndex = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[1].OcclusionFrameCounter = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[2].Queries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[2].Queries.ArrayNum = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[2].Queries.ArrayMax = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[2].FirstFreeIndex = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[2].OcclusionFrameCounter = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[3].Queries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[3].Queries.ArrayNum = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[3].Queries.ArrayMax = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[3].FirstFreeIndex = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[3].OcclusionFrameCounter = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[4].Queries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[4].Queries.ArrayNum = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[4].Queries.ArrayMax = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[4].FirstFreeIndex = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[4].OcclusionFrameCounter = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[5].Queries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[5].Queries.ArrayNum = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[5].Queries.ArrayMax = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[5].FirstFreeIndex = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[5].OcclusionFrameCounter = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[6].Queries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[6].Queries.ArrayNum = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[6].Queries.ArrayMax = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[6].FirstFreeIndex = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[6].OcclusionFrameCounter = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[7].Queries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[7].Queries.ArrayNum = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[7].Queries.ArrayMax = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[7].FirstFreeIndex = 0;
  (this->PrimitiveOcclusionQueryPool).FrameQueries[7].OcclusionFrameCounter = 0;
  (this->PrimitiveOcclusionQueryPool).CurrentFrameIndex = 0;
  (this->PrimitiveOcclusionQueryPool).OcclusionFrameCounter = 0xffffffff;
  (this->PrimitiveOcclusionQueryPool).NumBufferedFrames = 0;
  FHZBOcclusionTester::FHZBOcclusionTester(&this->HZBOcclusionTests);
  FOcclusionFeedback::FOcclusionFeedback(&this->OcclusionFeedback);
  (this->PersistentSkyAtmosphereData).bInitialised = false;
  (this->PersistentSkyAtmosphereData).CurrentScreenResolution = 0;
  (this->PersistentSkyAtmosphereData).CurrentDepthResolution = 0;
  (this->PersistentSkyAtmosphereData).CurrentTextureAerialLUTFormat = PF_Unknown;
  (this->PersistentSkyAtmosphereData).CameraAerialPerspectiveVolumes[0].Reference =
       (IPooledRenderTarget *)0x0;
  (this->PersistentSkyAtmosphereData).CameraAerialPerspectiveVolumes[1].Reference =
       (IPooledRenderTarget *)0x0;
  (this->PersistentSkyAtmosphereData).CameraAerialPerspectiveVolumesMieOnly[0].Reference =
       (IPooledRenderTarget *)0x0;
  (this->PersistentSkyAtmosphereData).CameraAerialPerspectiveVolumesMieOnly[1].Reference =
       (IPooledRenderTarget *)0x0;
  (this->PersistentSkyAtmosphereData).CameraAerialPerspectiveVolumesRayOnly[0].Reference =
       (IPooledRenderTarget *)0x0;
  (this->PersistentSkyAtmosphereData).CameraAerialPerspectiveVolumesRayOnly[1].Reference =
       (IPooledRenderTarget *)0x0;
  (this->PersistentSkyAtmosphereData).CameraAerialPerspectiveVolumeIndex = '\0';
  (this->PersistentSkyAtmosphereData).bSeparatedAtmosphereMieRayLeigh = false;
  (this->DecompressedVisibilityChunk).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecompressedVisibilityChunk).ArrayNum = 0;
  (this->DecompressedVisibilityChunk).ArrayMax = 0;
  *(undefined8 *)&this->PrimitiveFadingStates = 0;
  *(undefined8 *)&(this->PrimitiveFadingStates).field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveFadingStates).field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveFadingStates).field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveFadingStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveFadingStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveFadingStates).field_0x34 = 0;
  *(undefined8 *)&(this->PrimitiveFadingStates).field_0x40 = 0;
  *(undefined4 *)&(this->PrimitiveFadingStates).field_0x48 = 0;
  *(undefined8 *)&this->PlanarReflectionOcclusionHistories = 0;
  *(undefined8 *)&(this->PlanarReflectionOcclusionHistories).field_0x8 = 0;
  *(undefined8 *)&(this->PlanarReflectionOcclusionHistories).field_0x20 = 0;
  *(undefined4 *)&(this->PlanarReflectionOcclusionHistories).field_0x28 = 0;
  *(undefined4 *)&(this->PlanarReflectionOcclusionHistories).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlanarReflectionOcclusionHistories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlanarReflectionOcclusionHistories).field_0x34 = 0;
  *(undefined8 *)&(this->PlanarReflectionOcclusionHistories).field_0x40 = 0;
  *(undefined4 *)&(this->PlanarReflectionOcclusionHistories).field_0x48 = 0;
  *(undefined8 *)&(this->FrozenPrimitives).Elements = 0;
  *(undefined8 *)&(this->FrozenPrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FrozenPrimitives).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FrozenPrimitives).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FrozenPrimitives).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FrozenPrimitives).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FrozenPrimitives).Elements.field_0x34 = 0;
  (this->FrozenPrimitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FrozenPrimitives).HashSize = 0;
  FViewMatrices::FViewMatrices(&this->CachedViewMatrices);
  (this->HLODVisibilityState).PrimitiveFadingLODMap.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->HLODVisibilityState).PrimitiveFadingLODMap.NumBits = 0;
  (this->HLODVisibilityState).PrimitiveFadingLODMap.MaxBits = 0x80;
  (this->HLODVisibilityState).PrimitiveFadingOutLODMap.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->HLODVisibilityState).PrimitiveFadingOutLODMap.NumBits = 0;
  (this->HLODVisibilityState).PrimitiveFadingOutLODMap.MaxBits = 0x80;
  (this->HLODVisibilityState).ForcedVisiblePrimitiveMap.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->HLODVisibilityState).ForcedVisiblePrimitiveMap.NumBits = 0;
  (this->HLODVisibilityState).ForcedVisiblePrimitiveMap.MaxBits = 0x80;
  (this->HLODVisibilityState).ForcedHiddenPrimitiveMap.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->HLODVisibilityState).ForcedHiddenPrimitiveMap.NumBits = 0;
  *(undefined8 *)&(this->HLODVisibilityState).ForcedHiddenPrimitiveMap.MaxBits = 0x80;
  (this->HLODVisibilityState).FOVDistanceScaleSq = 1.0;
  (this->HLODVisibilityState).UpdateCount = 0;
  *(undefined8 *)&this->HLODSceneNodeVisibilityStates = 0;
  *(undefined8 *)&(this->HLODSceneNodeVisibilityStates).field_0x8 = 0;
  *(undefined8 *)&(this->HLODSceneNodeVisibilityStates).field_0x20 = 0;
  *(undefined4 *)&(this->HLODSceneNodeVisibilityStates).field_0x28 = 0;
  *(undefined4 *)&(this->HLODSceneNodeVisibilityStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->HLODSceneNodeVisibilityStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HLODSceneNodeVisibilityStates).field_0x34 = 0;
  *(undefined8 *)&(this->HLODSceneNodeVisibilityStates).field_0x40 = 0;
  *(undefined4 *)&(this->HLODSceneNodeVisibilityStates).field_0x48 = 0;
  FEyeAdaptationManager::FEyeAdaptationManager(&this->EyeAdaptationManager);
  (this->ExposureCompensationCurveLUT).Texture.Reference = (FRHITexture *)0x0;
  (this->ExposureCompensationCurveLUT).Curve = (UCurveFloat *)0x0;
  FSubstrateViewDebugData::FSubstrateViewDebugData(&this->SubstrateViewDebugData);
  (this->CombinedLUTRenderTarget).Reference = (IPooledRenderTarget *)0x0;
  this->bValidTonemappingLUT = false;
  (this->MIDPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MIDPool).ArrayNum = 0;
  (this->MIDPool).ArrayMax = 0;
  FPreviousViewInfo::FPreviousViewInfo(&this->PrevFrameViewInfo);
  (this->LightShaftOcclusionHistory).RT.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->LightShaftOcclusionHistory).RT.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->LightShaftOcclusionHistory).ViewportRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->LightShaftOcclusionHistory).ViewportRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (this->LightShaftOcclusionHistory).OutputSliceIndex = 0;
  *(undefined8 *)&this->LightShaftBloomHistoryRTs = 0;
  *(undefined8 *)&(this->LightShaftBloomHistoryRTs).field_0x8 = 0;
  *(undefined8 *)&(this->LightShaftBloomHistoryRTs).field_0x20 = 0;
  *(undefined4 *)&(this->LightShaftBloomHistoryRTs).field_0x28 = 0;
  *(undefined4 *)&(this->LightShaftBloomHistoryRTs).field_0x2c = 0x80;
  *(undefined4 *)&(this->LightShaftBloomHistoryRTs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LightShaftBloomHistoryRTs).field_0x34 = 0;
  *(undefined8 *)&(this->LightShaftBloomHistoryRTs).field_0x40 = 0;
  *(undefined4 *)&(this->LightShaftBloomHistoryRTs).field_0x48 = 0;
  (this->DistanceFieldAOHistoryViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->DistanceFieldAOHistoryViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->DistanceFieldAOHistoryRT).Reference = (IPooledRenderTarget *)0x0;
  (this->DistanceFieldIrradianceHistoryRT).Reference = (IPooledRenderTarget *)0x0;
  (this->SubsurfaceScatteringQualityHistoryRT).Reference = (IPooledRenderTarget *)0x0;
  FLumenViewState::FLumenViewState(&this->Lumen);
  FMegaLightsViewState::FResources::FResources(&(this->MegaLights).GBuffer);
  FMegaLightsViewState::FResources::FResources(&(this->MegaLights).HairStrands);
  (this->StochasticLighting).SceneDepthHistory.Reference = (IPooledRenderTarget *)0x0;
  (this->StochasticLighting).SceneNormalHistory.Reference = (IPooledRenderTarget *)0x0;
  (this->StochasticLighting).HistoryScreenPositionScaleBias.field0_0x0._s_0.X = 1.0;
  *(undefined8 *)
   ((longlong)&(this->StochasticLighting).HistoryScreenPositionScaleBias.field0_0x0 + 4) =
       0x3f800000;
  *(undefined8 *)
   ((longlong)&(this->StochasticLighting).HistoryScreenPositionScaleBias.field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->StochasticLighting).HistoryUVMinMax.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->StochasticLighting).HistoryUVMinMax.field0_0x0 + 0xc) = 0;
  (this->TranslucencyLighting).HistoryAmbient.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->TranslucencyLighting).HistoryAmbient.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  (this->TranslucencyLighting).HistoryDirectional.Elements[0].Reference = (IPooledRenderTarget *)0x0
  ;
  (this->TranslucencyLighting).HistoryDirectional.Elements[1].Reference = (IPooledRenderTarget *)0x0
  ;
  (this->TranslucencyLighting).HistoryMark.Elements[0].Reference = (IPooledRenderTarget *)0x0;
  (this->TranslucencyLighting).HistoryMark.Elements[1].Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&this->AdaptiveVolumetricShadowMapUniformBufferMap = 0;
  *(undefined8 *)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x20 = 0;
  *(undefined8 *)((longlong)&(this->StochasticLighting).HistoryGatherUVMinMax.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->StochasticLighting).HistoryGatherUVMinMax.field0_0x0 + 0xc) = 0;
  *(undefined8 *)((longlong)&(this->StochasticLighting).HistoryBufferSizeAndInvSize.field0_0x0 + 4)
       = 0;
  (this->StochasticLighting).HistoryBufferSizeAndInvSize.field0_0x0._s_0.W = 0.0;
  *(undefined8 *)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x8 = 0;
  this->OrthoVoxelGridUniformBuffer =
       (TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters> *)0x0;
  this->FrustumVoxelGridUniformBuffer =
       (TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters> *)0x0;
  this->AdaptiveVolumetricCameraMapUniformBufferParameters =
       (FAdaptiveVolumetricShadowMapUniformBufferParameters *)0x0;
  this->AdaptiveVolumetricCameraMapUniformBuffer =
       (TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> *)0x0;
  *(undefined4 *)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x28 = 0;
  *(undefined4 *)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x34 = 0;
  *(undefined8 *)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x40 = 0;
  *(undefined4 *)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x48 = 0;
  *(undefined8 *)&(this->BeerShadowMapUniformBufferMap).field_0x8 = 0;
  *(undefined8 *)&this->BeerShadowMapUniformBufferMap = 0;
  *(undefined8 *)&(this->BeerShadowMapUniformBufferMap).field_0x20 = 0;
  *(undefined4 *)&(this->BeerShadowMapUniformBufferMap).field_0x28 = 0;
  *(undefined4 *)&(this->BeerShadowMapUniformBufferMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BeerShadowMapUniformBufferMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BeerShadowMapUniformBufferMap).field_0x34 = 0;
  *(undefined8 *)&(this->BeerShadowMapUniformBufferMap).field_0x40 = 0;
  *(undefined4 *)&(this->BeerShadowMapUniformBufferMap).field_0x48 = 0;
  *(undefined8 *)&(this->LightSceneIdToForwardLightIndex).field_0x8 = 0;
  *(undefined8 *)&this->LightSceneIdToForwardLightIndex = 0;
  *(undefined8 *)&(this->LightSceneIdToForwardLightIndex).field_0x20 = 0;
  *(undefined4 *)&(this->LightSceneIdToForwardLightIndex).field_0x28 = 0;
  *(undefined4 *)&(this->LightSceneIdToForwardLightIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->LightSceneIdToForwardLightIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LightSceneIdToForwardLightIndex).field_0x34 = 0;
  *(undefined8 *)&(this->LightSceneIdToForwardLightIndex).field_0x40 = 0;
  *(undefined4 *)&(this->LightSceneIdToForwardLightIndex).field_0x48 = 0;
  *(undefined8 *)&(this->SimpleLightIdToForwardLightIndex).field_0x8 = 0;
  *(undefined8 *)&this->SimpleLightIdToForwardLightIndex = 0;
  *(undefined8 *)&(this->SimpleLightIdToForwardLightIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SimpleLightIdToForwardLightIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SimpleLightIdToForwardLightIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SimpleLightIdToForwardLightIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SimpleLightIdToForwardLightIndex).field_0x34 = 0;
  *(undefined8 *)&(this->SimpleLightIdToForwardLightIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SimpleLightIdToForwardLightIndex).field_0x48 = 0;
  (this->BloomFFTKernel).Spectral.Reference = (IPooledRenderTarget *)0x0;
  (this->BloomFFTKernel).ConstantsBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->BloomFFTKernel).PhysicalRHI = (FRHITexture *)0x0;
  (this->BloomFFTKernel).Scale = 0.0;
  (this->FilmGrainCache).TextureRHI = (FRHITexture *)0x0;
  (this->FilmGrainCache).ConstantsBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->DepthOfFieldState).Ptr = (FDOFViewState *)0x0;
  (this->MaterialTextureBilinearWrapedSamplerCache).Reference = (FRHISamplerState *)0x0;
  (this->MaterialTextureBilinearClampedSamplerCache).Reference = (FRHISamplerState *)0x0;
  (this->LandscapeWeightmapSamplerCache).Reference = (FRHISamplerState *)0x0;
  (this->PathTracingState).Ptr = (FPathTracingState *)0x0;
  this->PathTracingInvalidationCounter = 0;
  (this->SkyLightVisibilityRaysBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->LandscapeRayTracingStates).Ptr = (FLandscapeRayTracingStateList *)0x0;
  (this->ForwardLightingResources).Ptr = (FForwardLightingViewResources *)0x0;
  (this->LightScatteringHistory).Reference = (IPooledRenderTarget *)0x0;
  (this->PrevLightScatteringConservativeDepthTexture).Reference = (IPooledRenderTarget *)0x0;
  (this->GlobalDistanceFieldData).Reference = (FPersistentGlobalDistanceFieldData *)0x0;
  (this->TemporalLODState).TemporalLODLag = 0.0;
  FVolumetricRenderTargetViewStateData::FVolumetricRenderTargetViewStateData
            (&this->VolumetricCloudRenderTarget);
  FTemporalRenderTargetState::FTemporalRenderTargetState(this->VolumetricCloudShadowRenderTarget);
  FTemporalRenderTargetState::FTemporalRenderTargetState
            (this->VolumetricCloudShadowRenderTarget + 1);
  (this->HairStrandsViewStateData).VoxelFeedbackBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->HairStrandsViewStateData).PositionsChangedDatas.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HairStrandsViewStateData).PositionsChangedDatas.ArrayNum = 0;
  (this->HairStrandsViewStateData).PositionsChangedDatas.ArrayMax = 0;
  (this->ShaderPrintStateData).StateBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->ShaderPrintStateData).EntryBuffer.Reference = (FRDGPooledBuffer *)0x0;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ShaderPrintStateData).PreViewTranslation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ShaderPrintStateData).PreViewTranslation.field0_0x0._s_0.Y = (double)uVar11;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ShaderPrintStateData).bIsLocked = false;
  (this->ShaderPrintStateData).PreViewTranslation.field0_0x0._s_0.Z = (double)uVar11;
  (this->GlintShadingLUTsData).GlintShadingLUTs.Reference = (IPooledRenderTarget *)0x0;
  (this->GlintShadingLUTsData).RHIGlintShadingLUTs = (FRHITexture *)0x0;
  (this->GlintShadingLUTsData).Dictionary_Alpha = 0.0;
  (this->GlintShadingLUTsData).Dictionary_NDistributionsPerChannel = 0;
  (this->GlintShadingLUTsData).Dictionary_N = 0;
  (this->GlintShadingLUTsData).Dictionary_NLevels = 0;
  (this->GlintShadingLUTsData).Dictionary_Pyramid0Size = 0;
  *(undefined8 *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements = 0;
  *(undefined8 *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x30 = 0xffffffff;
  (this->Occlusion).PrimitiveOcclusionHistorySet.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->Occlusion).PrimitiveOcclusionHistorySet.HashSize = 0;
  (this->Occlusion).LastOcclusionQueryArray.AllocatorInstance.SecondaryData =
       (ForElementType<FRHIRenderQuery_*>)0x0;
  piVar1 = &(this->Occlusion).LastOcclusionQueryArray.ArrayNum;
  *piVar1 = 0;
  (this->Occlusion).LastOcclusionQueryArray.ArrayMax = 4;
  (this->Occlusion).NumRequestedQueries = 0;
  *(char *)((longlong)&this->_padding_ + 4) = (char)param_1;
  LOCK();
  UNLOCK();
  uStack_90 = FSceneViewState_UniqueID.Counter + 1;
  local_80 = (undefined ***)0x0;
  FSceneViewState_UniqueID.Counter = FSceneViewState_UniqueID.Counter + 1;
  this->UniqueID = uStack_90;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSceneViewState::FSceneViewState'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSceneViewState::FSceneViewState'::`2'::<lambda_1>,1,0>::
              _vftable_;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSceneViewState::FSceneViewState_::__l2::TSTR_SceneViewStateAdddUniqueID307>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68[1]._4_4_ = uStack_8c;
    local_68[1]._0_4_ = uStack_90;
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68[0] = local_98;
    local_68[2] = (undefined **)local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar15 = (FRenderCommandTag *)
              TRenderCommandTag<`FSceneViewState::FSceneViewState'::__l2::TSTR_SceneViewStateAdddUniqueID307>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar15);
    uVar22 = (ulonglong)local_48;
    if ((2 < uVar22) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FSceneViewState *)(*pcVar9)();
      return pFVar16;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar22] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar18 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar18 = local_50;
        }
        (*(code *)(*pppuVar18)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar22])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar18 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar18 = local_80;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  *(float *)((longlong)((this->PrevViewMatrixForOcclusionQuery).M + 0) + 0) = 1.0;
  *(float *)((longlong)((this->PrevViewMatrixForOcclusionQuery).M + 0) + 4) = 0.0;
  *(float *)((longlong)((this->PrevViewMatrixForOcclusionQuery).M + 0) + 8) = 0.0;
  *(float *)((longlong)((this->PrevViewMatrixForOcclusionQuery).M + 0) + 0xc) = 0.0;
  (this->PrevViewMatrixForOcclusionQuery).M[1][0] = 0.0;
  pafVar10 = (this->PrevViewMatrixForOcclusionQuery).M;
  *(float *)((longlong)(pafVar10 + 1) + 4) = 1.0;
  *(float *)((longlong)(pafVar10 + 1) + 8) = 0.0;
  *(undefined8 *)((this->PrevViewMatrixForOcclusionQuery).M[1] + 3) = 0;
  (this->PrevViewMatrixForOcclusionQuery).M[2][1] = 0.0;
  pafVar10 = (this->PrevViewMatrixForOcclusionQuery).M;
  *(float *)((longlong)(pafVar10 + 2) + 8) = 1.0;
  *(float *)((longlong)(pafVar10 + 2) + 0xc) = 0.0;
  *(float *)((longlong)((this->PrevViewMatrixForOcclusionQuery).M + 3) + 0) = 0.0;
  *(float *)((longlong)((this->PrevViewMatrixForOcclusionQuery).M + 3) + 4) = 0.0;
  (this->PrevViewMatrixForOcclusionQuery).M[3][2] = 0.0;
  (this->PrevViewMatrixForOcclusionQuery).M[3][3] = 1.0;
  this->LastRenderTime = -3.4028234663852886e+38;
  this->Scene = (FScene *)0x0;
  this->OcclusionFrameCounter = 0;
  this->MotionBlurTimeScale = 1.0;
  this->MotionBlurTargetDeltaTime = 0.016666668;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevViewOriginForOcclusionQuery).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevViewOriginForOcclusionQuery).field0_0x0._s_0.Y = (double)uVar11;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bIsFreezing = 0;
  this->bIsFrozenViewMatricesCached = 0;
  this->bIsFrozen = 0;
  (this->PrevViewOriginForOcclusionQuery).field0_0x0._s_0.Z = (double)uVar11;
  bVar12 = IsInGameThread();
  if (bVar12) {
    BeginInitResource((FRenderResource *)&this->_padding_,(FRenderCommandPipe *)0x0);
  }
  else {
    bVar12 = IsInRenderingThread();
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                            ,0x1594,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FSceneViewState *)(*pcVar9)();
      return pFVar16;
    }
    FRenderResource::InitResource
              ((FRenderResource *)&this->_padding_,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  }
  this->CachedVisibilityChunk = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
  this->OutputFrameIndex = 0;
  this->SequencerState = ESS_None;
  this->CachedVisibilityHandlerId = -1;
  this->CachedVisibilityBucketIndex = -1;
  this->CachedVisibilityChunkIndex = -1;
  this->MIDUsedCount = 0;
  this->DistanceFieldTemporalSampleIndex = 0;
  this->TemporalAASampleIndex = 0;
  this->FrameIndex = 0;
  this->MaterialTextureCachedMipBias = 3.4e+38;
  this->LandscapeCachedMipBias = 3.4e+38;
  this->bIsStereoView = false;
  this->bRoundRobinOcclusionEnabled = false;
  if (param_2 == (FSceneViewState *)0x0) {
    pFVar17 = ::operator_new(0x3c8);
    if (pFVar17 == (FPersistentGlobalDistanceFieldData *)0x0) {
      pFVar17 = (FPersistentGlobalDistanceFieldData *)0x0;
    }
    else {
      *(undefined4 *)&pFVar17->_padding_ = 0;
      lVar26 = 6;
      pFVar17->_padding_ = (longlong)&___7FPersistentGlobalDistanceFieldData__6B_;
      lVar28 = 2;
      pFVar17->DeferredUpdates[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar17->DeferredUpdates[0].ArrayNum = 0;
      pFVar17->DeferredUpdates[0].ArrayMax = 0;
      pFVar17->DeferredUpdates[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar17->DeferredUpdates[1].ArrayNum = 0;
      pFVar17->DeferredUpdates[1].ArrayMax = 0;
      pFVar17->DeferredUpdatesForMeshSDFStreaming[0].AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      pFVar17->DeferredUpdatesForMeshSDFStreaming[0].ArrayNum = 0;
      pFVar17->DeferredUpdatesForMeshSDFStreaming[0].ArrayMax = 0;
      pFVar17->DeferredUpdatesForMeshSDFStreaming[1].AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      pFVar17->DeferredUpdatesForMeshSDFStreaming[1].ArrayNum = 0;
      pFVar17->DeferredUpdatesForMeshSDFStreaming[1].ArrayMax = 0;
      pFVar17->UpdateFrame = 0;
      pFVar17->bFirstFrame = true;
      pFVar17->bInitializedOrigins = false;
      pFVar17->bPendingReset = false;
      pfVar23 = pFVar17->ClipmapState[0].CachedClipmapCenter.field0_0x0.XYZ + 2;
      pFVar27 = pFVar17->ClipmapState;
      do {
        _vector_constructor_iterator_
                  (pfVar23 + 3,0x10,2,
                   FGlobalDistanceFieldCacheTypeState::FGlobalDistanceFieldCacheTypeState);
        uVar11 = UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.Y;
        (pFVar27->FullUpdateOriginInPages).field0_0x0._s_0.X =
             UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.X;
        (pFVar27->FullUpdateOriginInPages).field0_0x0._s_0.Y = uVar11;
        (pFVar27->FullUpdateOriginInPages).field0_0x0._s_0.Z =
             UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.Z;
        uVar11 = UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.Y;
        *(long64 *)(pfVar23 + -9) = UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.X;
        *(undefined8 *)(pfVar23 + -7) = uVar11;
        *(long64 *)(pfVar23 + -5) = UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.Z;
        pfVar23[-2] = 0.0;
        pfVar23[-1] = 0.0;
        pfVar23[0] = 0.0;
        pfVar23[1] = 0.0;
        pfVar23[2] = 0.0;
        pfVar23[-3] = 1.4013e-45;
        pfVar23[0xb] = 0.0;
        pfVar23[0xc] = 0.0;
        lVar26 = lVar26 + -1;
        pfVar23 = pfVar23 + 0x1c;
        pFVar27 = pFVar27 + 1;
      } while (lVar26 != 0);
      pFVar17->UpdateIndex = 0;
      pFVar24 = pFVar17->StreamingReadback;
      (pFVar17->CameraVelocityOffset).field0_0x0._s_0.X = 0.0;
      (pFVar17->CameraVelocityOffset).field0_0x0._s_0.Y = 0.0;
      (pFVar17->CameraVelocityOffset).field0_0x0._s_0.Z = 0.0;
      pFVar17->bUpdateViewOrigin = true;
      (pFVar17->LastViewOrigin).field0_0x0._s_0.X = 0.0;
      (pFVar17->LastViewOrigin).field0_0x0._s_0.Y = 0.0;
      (pFVar17->LastViewOrigin).field0_0x0._s_0.Z = 0.0;
      (pFVar17->LastGPUMask).GPUMask = 1;
      do {
        piVar2 = &(pFVar24->PendingStreamingReadbackBuffers).ArrayNum;
        (pFVar24->PendingStreamingReadbackBuffers).ArrayMax = 0;
        *piVar2 = 0;
        (pFVar24->PendingStreamingReadbackBuffers).AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        pFVar24->ReadbackBuffersNumPending = 0;
        pFVar24->MaxPendingStreamingReadbackBuffers = 4;
        pFVar24->ReadbackBuffersWriteIndex = 0;
        iVar21 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,4,(ForAnyElementType *)pFVar24,piVar2,
                            &(pFVar24->PendingStreamingReadbackBuffers).ArrayMax);
        pFVar7 = (pFVar24->PendingStreamingReadbackBuffers).AllocatorInstance.Data;
        pFVar24 = pFVar24 + 1;
        pFVar5 = pFVar7 + (longlong)iVar21 * 8;
        *(undefined8 *)pFVar5 = 0;
        *(undefined8 *)(pFVar5 + 8) = 0;
        pFVar7 = pFVar7 + (longlong)iVar21 * 8 + 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(undefined8 *)(pFVar7 + 8) = 0;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      (pFVar17->PageFreeListAllocatorBuffer).Reference = (FRDGPooledBuffer *)0x0;
      (pFVar17->PageFreeListBuffer).Reference = (FRDGPooledBuffer *)0x0;
      (pFVar17->PageAtlasTexture).Reference = (IPooledRenderTarget *)0x0;
      (pFVar17->CoverageAtlasTexture).Reference = (IPooledRenderTarget *)0x0;
      (pFVar17->PageObjectGridBuffer).Reference = (FRDGPooledBuffer *)0x0;
      (pFVar17->PageTableCombinedTexture).Reference = (IPooledRenderTarget *)0x0;
      pFVar17->PageTableLayerTextures[0].Reference = (IPooledRenderTarget *)0x0;
      pFVar17->PageTableLayerTextures[1].Reference = (IPooledRenderTarget *)0x0;
      (pFVar17->MipTexture).Reference = (IPooledRenderTarget *)0x0;
    }
    pFVar6 = (this->GlobalDistanceFieldData).Reference;
    if (pFVar6 != pFVar17) {
      (this->GlobalDistanceFieldData).Reference = pFVar17;
      if (pFVar17 != (FPersistentGlobalDistanceFieldData *)0x0) {
        LOCK();
        *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar6 != (FPersistentGlobalDistanceFieldData *)0x0) {
        plVar3 = &pFVar6->_padding_;
        LOCK();
        lVar26 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if (((int)lVar26 == 1) && (plVar3 != (longlong *)0x0)) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
    }
    uVar13 = this->UniqueID;
  }
  else {
    pFVar17 = (param_2->GlobalDistanceFieldData).Reference;
    pFVar6 = (this->GlobalDistanceFieldData).Reference;
    if (pFVar6 != pFVar17) {
      (this->GlobalDistanceFieldData).Reference = pFVar17;
      if (pFVar17 != (FPersistentGlobalDistanceFieldData *)0x0) {
        LOCK();
        *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar6 != (FPersistentGlobalDistanceFieldData *)0x0) {
        FThreadSafeRefCountedObject::Release((FThreadSafeRefCountedObject *)pFVar6);
      }
    }
    uVar13 = param_2->UniqueID;
  }
  this_02 = &this->ShadowOcclusionQueryMaps;
  FVar25 = (ForElementType<FRHIRenderQuery_*>)&(this->Occlusion).LastOcclusionQueryArray;
  this->ShareOriginUniqueID = uVar13;
  FVar19 = (this->ShadowOcclusionQueryMaps).AllocatorInstance.SecondaryData;
  if (FVar19 == (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                 )0x0) {
    FVar19 = (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
              )this_02;
  }
  DestructItems<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,int>
            ((TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>
              *)FVar19,(this->ShadowOcclusionQueryMaps).ArrayNum);
  piVar2 = &(this->ShadowOcclusionQueryMaps).ArrayMax;
  (this->ShadowOcclusionQueryMaps).ArrayNum = 0;
  if (*piVar2 != 4) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>_>
              (0x50,8,4,&this_02->AllocatorInstance,0,piVar2);
  }
  TArray<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  ::AddZeroed(this_02,4);
  this->PreExposure = 1.0;
  this->bUpdateLastExposure = false;
  this->bLumenSceneDataAdded = false;
  this->LumenSurfaceCacheResolution = 1.0;
  if ((param_1 == ES3_1) && (GOcclusionFeedback_Enable != 0)) {
    BeginInitResource((FRenderResource *)&this->OcclusionFeedback,(FRenderCommandPipe *)0x0);
  }
  iVar21 = *piVar1;
  if (iVar21 < 4) {
    iVar14 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIRenderQuery_*>_>
                       (8,8,4 - iVar21,(ForElementType<FRHIRenderQuery_*> *)FVar25,piVar1,
                        &(this->Occlusion).LastOcclusionQueryArray.ArrayMax);
    FVar8 = (this->Occlusion).LastOcclusionQueryArray.AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<FRHIRenderQuery_*>)0x0) {
      FVar25 = FVar8;
    }
    memset((void *)((longlong)FVar25 + (longlong)iVar14 * 8),0,(longlong)(4 - iVar21) << 3);
  }
  else if (4 < iVar21) {
    iVar21 = iVar21 + -4;
    if (iVar21 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FSceneViewState *)(*pcVar9)();
        return pFVar16;
      }
    }
    else if (iVar21 == 0) {
      return this;
    }
    FVar8 = (this->Occlusion).LastOcclusionQueryArray.AllocatorInstance.SecondaryData;
    FVar20 = FVar25;
    if (FVar8 != (ForElementType<FRHIRenderQuery_*>)0x0) {
      FVar20 = FVar8;
    }
    iVar14 = (*piVar1 - iVar21) + -4;
    if (iVar14 != 0) {
      memmove((ForElementType<FRHIRenderQuery_*> *)((longlong)FVar20 + 0x20),
              (ForElementType<FRHIRenderQuery_*> *)((longlong)FVar20 + 0x20) + iVar21,
              (longlong)iVar14 << 3);
    }
    *piVar1 = *piVar1 - iVar21;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIRenderQuery_*>_>
              (8,8,(ForElementType<FRHIRenderQuery_*> *)FVar25,*piVar1,
               &(this->Occlusion).LastOcclusionQueryArray.ArrayMax);
  }
  return this;
}

// ~FSceneViewState @ 145407260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneViewState::~FSceneViewState(FSceneViewState *this)

{
  TArray<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  longlong *plVar2;
  TRefCountPtr<IPooledRenderTarget> *pTVar3;
  int *piVar4;
  int iVar5;
  FRDGPooledBuffer *pFVar6;
  ForElementType<FRHIRenderQuery_*> FVar7;
  ForElementType<FSetElementId> FVar8;
  IPooledRenderTarget *pIVar9;
  FScriptContainerElement *pFVar10;
  FPersistentGlobalDistanceFieldData *pFVar11;
  FLandscapeRayTracingStateList *pFVar12;
  FPathTracingState *pFVar13;
  FRHIResource *pFVar14;
  FDOFViewState *pFVar15;
  void *pvVar16;
  FRHITexture *this_00;
  ForElementType<unsigned_int> FVar17;
  code *pcVar18;
  FFrameOcclusionQueries *pFVar19;
  undefined8 uVar20;
  bool bVar21;
  ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
  FVar22;
  longlong lVar23;
  FFrameOcclusionQueries *pFVar24;
  longlong lVar25;
  TRefCountPtr<IPooledRenderTarget> *pTVar26;
  uint local_res8 [2];
  
  this->_padding_ = (longlong)&_vftable__for__FSceneViewStateInterface__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  bVar21 = IsInRenderingThread();
  if (!bVar21) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInRenderingThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                        ,0x185,L"");
    if (bVar21) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  local_res8[0] = this->UniqueID;
  if (FSceneViewState_ActiveUniqueIDs.Elements._8_4_ !=
      FSceneViewState_ActiveUniqueIDs.Elements._52_4_) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    RemoveImpl<unsigned_int>(&FSceneViewState_ActiveUniqueIDs,local_res8[0],local_res8);
  }
  pTVar1 = &this->ShadowOcclusionQueryMaps;
  this->CachedVisibilityChunk = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0;
  piVar4 = &(this->ShadowOcclusionQueryMaps).ArrayMax;
  lVar25 = 8;
  iVar5 = (this->ShadowOcclusionQueryMaps).ArrayNum;
  FVar22 = (this->ShadowOcclusionQueryMaps).AllocatorInstance.SecondaryData;
  if (*piVar4 < 0) {
    if (FVar22 == (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                   )0x0) {
      FVar22 = (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                )pTVar1;
    }
    DestructItems<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,int>
              ((TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>
                *)FVar22,iVar5);
    (this->ShadowOcclusionQueryMaps).ArrayNum = 0;
    if (*piVar4 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>_>
                (0x50,8,0,&pTVar1->AllocatorInstance,0,piVar4);
    }
  }
  else {
    if (FVar22 == (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                   )0x0) {
      FVar22 = (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                )pTVar1;
    }
    DestructItems<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,int>
              ((TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>
                *)FVar22,iVar5);
    (this->ShadowOcclusionQueryMaps).ArrayNum = 0;
  }
  FHairStrandsViewStateData::Release(&this->HairStrandsViewStateData);
  (this->ShaderPrintStateData).bIsLocked = false;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ShaderPrintStateData).PreViewTranslation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ShaderPrintStateData).PreViewTranslation.field0_0x0._s_0.Y = (double)uVar20;
  (this->ShaderPrintStateData).PreViewTranslation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar6 = (this->ShaderPrintStateData).StateBuffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    (this->ShaderPrintStateData).StateBuffer.Reference = (FRDGPooledBuffer *)0x0;
    plVar2 = &pFVar6->_padding_;
    LOCK();
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar23 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar6 = (this->ShaderPrintStateData).EntryBuffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    (this->ShaderPrintStateData).EntryBuffer.Reference = (FRDGPooledBuffer *)0x0;
    plVar2 = &pFVar6->_padding_;
    LOCK();
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar23 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  if (this->Scene != (FScene *)0x0) {
    FScene::RemoveViewState_RenderThread(this->Scene,(FSceneViewStateInterface *)this);
  }
  FVar7 = (this->Occlusion).LastOcclusionQueryArray.AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FRHIRenderQuery_*>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  (this->Occlusion).PrimitiveOcclusionHistorySet.HashSize = 0;
  FVar8 = (this->Occlusion).PrimitiveOcclusionHistorySet.Hash.SecondaryData;
  if (FVar8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  TSparseArray<TSparseSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Occlusion);
  pIVar9 = (this->GlintShadingLUTsData).GlintShadingLUTs.Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  pFVar6 = (this->ShaderPrintStateData).EntryBuffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar6->_padding_;
    LOCK();
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar23 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar6 = (this->ShaderPrintStateData).StateBuffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar6->_padding_;
    LOCK();
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar23 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar10 = (this->HairStrandsViewStateData).PositionsChangedDatas.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pFVar6 = (this->HairStrandsViewStateData).VoxelFeedbackBuffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar6->_padding_;
    LOCK();
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar23 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  FTemporalRenderTargetState::~FTemporalRenderTargetState
            (this->VolumetricCloudShadowRenderTarget + 1);
  FTemporalRenderTargetState::~FTemporalRenderTargetState(this->VolumetricCloudShadowRenderTarget);
  FVolumetricRenderTargetViewStateData::~FVolumetricRenderTargetViewStateData
            (&this->VolumetricCloudRenderTarget);
  pFVar11 = (this->GlobalDistanceFieldData).Reference;
  if (pFVar11 != (FPersistentGlobalDistanceFieldData *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar23 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  pIVar9 = (this->PrevLightScatteringConservativeDepthTexture).Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  pIVar9 = (this->LightScatteringHistory).Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  ::operator_delete((this->ForwardLightingResources).Ptr,0x38);
  pFVar12 = (this->LandscapeRayTracingStates).Ptr;
  if (pFVar12 != (FLandscapeRayTracingStateList *)0x0) {
    (**(code **)(pFVar12 + -4))(pFVar12 + -4);
  }
  pFVar6 = (this->SkyLightVisibilityRaysBuffer).Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar6->_padding_;
    LOCK();
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar23 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar13 = (this->PathTracingState).Ptr;
  if (pFVar13 != (FPathTracingState *)0x0) {
    (**(code **)&pFVar13[-1].SampleIndex)(&pFVar13[-1].SampleIndex);
  }
  pFVar14 = (FRHIResource *)(this->LandscapeWeightmapSamplerCache).Reference;
  if (pFVar14 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar14);
  }
  pFVar14 = (FRHIResource *)(this->MaterialTextureBilinearClampedSamplerCache).Reference;
  if (pFVar14 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar14);
  }
  pFVar14 = (FRHIResource *)(this->MaterialTextureBilinearWrapedSamplerCache).Reference;
  if (pFVar14 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar14);
  }
  pFVar15 = (this->DepthOfFieldState).Ptr;
  if (pFVar15 != (FDOFViewState *)0x0) {
    (**(code **)&pFVar15[-1].BokehModel.DiaphragmRotation)
              (&pFVar15[-1].BokehModel.DiaphragmRotation);
  }
  pFVar6 = (this->FilmGrainCache).ConstantsBuffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar6->_padding_;
    LOCK();
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar23 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar6 = (this->BloomFFTKernel).ConstantsBuffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar6->_padding_;
    LOCK();
    lVar23 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar23 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pIVar9 = (this->BloomFFTKernel).Spectral.Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  *(undefined4 *)&(this->SimpleLightIdToForwardLightIndex).field_0x48 = 0;
  pvVar16 = *(void **)&(this->SimpleLightIdToForwardLightIndex).field_0x40;
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  TSparseArray<TSparseSetElement<TTuple<FSimpleLightId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSimpleLightId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSimpleLightId,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SimpleLightIdToForwardLightIndex);
  *(undefined4 *)&(this->LightSceneIdToForwardLightIndex).field_0x48 = 0;
  pvVar16 = *(void **)&(this->LightSceneIdToForwardLightIndex).field_0x40;
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LightSceneIdToForwardLightIndex);
  *(undefined4 *)&(this->BeerShadowMapUniformBufferMap).field_0x48 = 0;
  pvVar16 = *(void **)&(this->BeerShadowMapUniformBufferMap).field_0x40;
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BeerShadowMapUniformBufferMap);
  *(undefined4 *)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x48 = 0;
  pvVar16 = *(void **)&(this->AdaptiveVolumetricShadowMapUniformBufferMap).field_0x40;
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdaptiveVolumetricShadowMapUniformBufferMap);
  FTranslucencyLightingViewState::~FTranslucencyLightingViewState(&this->TranslucencyLighting);
  pIVar9 = (this->StochasticLighting).SceneNormalHistory.Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  pIVar9 = (this->StochasticLighting).SceneDepthHistory.Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  FMegaLightsViewState::FResources::~FResources(&(this->MegaLights).HairStrands);
  FMegaLightsViewState::FResources::~FResources(&(this->MegaLights).GBuffer);
  FLumenViewState::~FLumenViewState(&this->Lumen);
  pIVar9 = (this->SubsurfaceScatteringQualityHistoryRT).Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  pIVar9 = (this->DistanceFieldIrradianceHistoryRT).Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  pIVar9 = (this->DistanceFieldAOHistoryRT).Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  *(undefined4 *)&(this->LightShaftBloomHistoryRTs).field_0x48 = 0;
  pvVar16 = *(void **)&(this->LightShaftBloomHistoryRTs).field_0x40;
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LightShaftBloomHistoryRTs);
  pTVar26 = (TRefCountPtr<IPooledRenderTarget> *)
            &(this->LightShaftOcclusionHistory).ReferenceBufferSize;
  lVar23 = 2;
  do {
    pTVar3 = pTVar26 + -1;
    pTVar26 = pTVar26 + -1;
    lVar23 = lVar23 + -1;
    if (pTVar3->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar3->Reference->_padding_ + 0x38))();
    }
  } while (lVar23 != 0);
  FPreviousViewInfo::~FPreviousViewInfo(&this->PrevFrameViewInfo);
  pFVar10 = (this->MIDPool).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pIVar9 = (this->CombinedLUTRenderTarget).Reference;
  if (pIVar9 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar9->_padding_ + 0x38))();
  }
  FSubstrateViewDebugData::~FSubstrateViewDebugData(&this->SubstrateViewDebugData);
  this_00 = (this->ExposureCompensationCurveLUT).Texture.Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FEyeAdaptationManager::~FEyeAdaptationManager(&this->EyeAdaptationManager);
  *(undefined4 *)&(this->HLODSceneNodeVisibilityStates).field_0x48 = 0;
  pvVar16 = *(void **)&(this->HLODSceneNodeVisibilityStates).field_0x40;
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FHLODSceneNodeVisibilityState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FHLODSceneNodeVisibilityState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FHLODSceneNodeVisibilityState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HLODSceneNodeVisibilityStates);
  FVar17 = (this->HLODVisibilityState).ForcedHiddenPrimitiveMap.AllocatorInstance.SecondaryData;
  if (FVar17 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar17);
  }
  FVar17 = (this->HLODVisibilityState).ForcedVisiblePrimitiveMap.AllocatorInstance.SecondaryData;
  if (FVar17 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar17);
  }
  FVar17 = (this->HLODVisibilityState).PrimitiveFadingOutLODMap.AllocatorInstance.SecondaryData;
  if (FVar17 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar17);
  }
  FVar17 = (this->HLODVisibilityState).PrimitiveFadingLODMap.AllocatorInstance.SecondaryData;
  if (FVar17 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar17);
  }
  (this->FrozenPrimitives).HashSize = 0;
  FVar8 = (this->FrozenPrimitives).Hash.SecondaryData;
  if (FVar8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FrozenPrimitives).Elements);
  *(undefined4 *)&(this->PlanarReflectionOcclusionHistories).field_0x48 = 0;
  pvVar16 = *(void **)&(this->PlanarReflectionOcclusionHistories).field_0x40;
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlanarReflectionOcclusionHistories);
  *(undefined4 *)&(this->PrimitiveFadingStates).field_0x48 = 0;
  pvVar16 = *(void **)&(this->PrimitiveFadingStates).field_0x40;
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrimitiveFadingStates);
  pFVar10 = (this->DecompressedVisibilityChunk).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  FPersistentSkyAtmosphereData::~FPersistentSkyAtmosphereData(&this->PersistentSkyAtmosphereData);
  FOcclusionFeedback::~FOcclusionFeedback(&this->OcclusionFeedback);
  FHZBOcclusionTester::~FHZBOcclusionTester(&this->HZBOcclusionTests);
  pFVar24 = (FFrameOcclusionQueries *)&(this->PrimitiveOcclusionQueryPool).CurrentFrameIndex;
  do {
    pFVar19 = pFVar24 + -1;
    pFVar24 = pFVar24 + -1;
    lVar25 = lVar25 + -1;
    DestructItems<TRefCountPtr<FRHIRenderQuery>,int>
              ((TRefCountPtr<FRHIRenderQuery> *)(pFVar24->Queries).AllocatorInstance.Data,
               (pFVar19->Queries).ArrayNum);
    pFVar10 = (pFVar24->Queries).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
  } while (lVar25 != 0);
  pFVar14 = (FRHIResource *)(this->OcclusionQueryPool).Reference;
  if (pFVar14 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar14);
  }
  FVar22 = (this->ShadowOcclusionQueryMaps).AllocatorInstance.SecondaryData;
  if (FVar22 == (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                 )0x0) {
    FVar22 = (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
              )pTVar1;
  }
  DestructItems<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>,int>
            ((TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>
              *)FVar22,(this->ShadowOcclusionQueryMaps).ArrayNum);
  FVar22 = (this->ShadowOcclusionQueryMaps).AllocatorInstance.SecondaryData;
  if (FVar22 != (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                 )0x0) {
    FMemory::Free((void *)FVar22);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&___7FSceneViewStateInterface__6B_;
  return;
}

// operator() @ 14540b0d0

bool __thiscall
`FSceneViewState::ClearMIDPool'::__l2::<lambda_1>::operator()
          (void *this,UMaterialInstanceDynamic *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  UPackage *pUVar3;
  int iVar4;
  int iVar5;
  FName local_res10 [3];
  
  if ((UObjectBaseUtility *)param_1->_padding_ == (UObjectBaseUtility *)0x0) {
    return false;
  }
  pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1->_padding_);
  local_res10[0] = (FName)pUVar3->_padding_;
  ::FName::ToString(local_res10,*(TStringBuilderBase<wchar_t> **)this);
  pwVar1 = (wchar_t *)**(undefined8 **)this;
  iVar2 = (int)((*(undefined8 **)this)[1] - (longlong)pwVar1 >> 1);
  iVar4 = (int)*(undefined8 *)((longlong)this + 0x10);
  if (iVar4 < iVar2) {
    iVar2 = iVar4;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  if (iVar4 == iVar5) {
    if ((iVar4 != 0) && (iVar5 != 0)) {
      iVar2 = iVar5;
      if (iVar4 < iVar5) {
        iVar2 = iVar4;
      }
      iVar2 = FGenericPlatformStricmp::Strnicmp
                        (*(wchar_t **)((longlong)this + 8),pwVar1,(longlong)iVar2);
      if (iVar2 != 0) {
        return false;
      }
    }
    if (iVar4 == iVar5) {
      return true;
    }
  }
  return false;
}

// ActivateFrozenViewMatrices @ 1454193a0

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
FSceneViewState::ActivateFrozenViewMatrices(FSceneViewState *this,FSceneView *param_1)

{
  FSceneViewStateInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_888 [2176];
  
  pFVar1 = param_1->State;
  if ((pFVar1[0x5a]._padding_ & 2) != 0) {
    if ((pFVar1[0x5a]._padding_ & 4) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewState->bIsFrozenViewMatricesCached",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                         ,0x603,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memcpy(local_888,&param_1->ViewMatrices,0x880);
    memcpy(&param_1->ViewMatrices,pFVar1 + 0x60,0x880);
    memcpy(pFVar1 + 0x60,local_888,0x880);
    *(uint *)&pFVar1[0x5a]._padding_ = (uint)pFVar1[0x5a]._padding_ & 0xfffffffb;
  }
  return;
}

// AddReferencedObjects @ 14541b990

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
FSceneViewState::AddReferencedObjects(FSceneViewState *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->MIDPool).AllocatorInstance.Data,(this->MIDPool).ArrayNum,0,0);
  return;
}

// ClearMIDPool @ 1454222e0

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

void __thiscall FSceneViewState::ClearMIDPool(FSceneViewState *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TObjectPtr<UMaterialInstanceDynamic>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_8e8 [32];
  TStringBuilderBase<wchar_t> *local_8a8;
  wchar_t *pwStack_8a0;
  undefined8 local_898;
  TStringBuilderBase<wchar_t> *local_888;
  wchar_t *pwStack_880;
  undefined8 uStack_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                       ,0x5df,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = &this->MIDPool;
  piVar1 = &(this->MIDPool).ArrayNum;
  if (param_1->Size == 0) {
    piVar2 = &(this->MIDPool).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  else {
    pwStack_8a0 = param_1->DataPtr;
    local_898 = *(undefined8 *)&param_1->Size;
    local_868.Base = local_848;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    local_868.CurPos = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.End = local_32;
    local_8a8 = &local_868;
    pFVar13 = pFVar4 + (longlong)*piVar1 * 8;
    pFVar10 = pFVar4;
    local_888 = local_8a8;
    pwStack_880 = pwStack_8a0;
    uStack_878 = local_898;
    while (pFVar10 != pFVar13) {
      bVar6 = `FSceneViewState::ClearMIDPool'::__l2::<lambda_1>::operator()
                        (&local_8a8,*(UMaterialInstanceDynamic **)pFVar10);
      if (bVar6) {
        do {
          pFVar13 = pFVar13 + -8;
          if (pFVar10 == pFVar13) goto LAB_14542244b;
          bVar6 = `FSceneViewState::ClearMIDPool'::__l2::<lambda_1>::operator()
                            (&local_8a8,*(UMaterialInstanceDynamic **)pFVar13);
        } while (bVar6);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)pFVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar13);
        }
        *(undefined8 *)pFVar10 = *(undefined8 *)pFVar13;
        pFVar10 = pFVar10 + 8;
      }
      else {
        pFVar10 = pFVar10 + 8;
      }
    }
LAB_14542244b:
    iVar8 = *piVar1;
    uVar11 = (longlong)pFVar10 - (longlong)pFVar4 >> 3;
    uVar9 = (uint)uVar11;
    if (iVar8 < (int)uVar9) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar9 - iVar8,&pTVar3->AllocatorInstance,piVar1,
                         &(this->MIDPool).ArrayMax);
      memset((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8,0,
             (longlong)(int)(uVar9 - iVar8) << 3);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar11 & 0xffffffff);
      }
      if ((int)uVar9 < iVar8) {
        uVar12 = iVar8 - uVar9;
        if ((int)(uVar12 | uVar9) < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (uVar12 != 0) {
          pFVar13 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
          iVar8 = (*piVar1 - uVar12) - uVar9;
          if (iVar8 != 0) {
            memmove(pFVar13,pFVar13 + (longlong)(int)uVar12 * 8,(longlong)iVar8 << 3);
          }
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar3->AllocatorInstance,*piVar1,&(this->MIDPool).ArrayMax);
        }
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  return;
}

// GetConcreteViewState @ 14543d710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSceneViewState * __thiscall FSceneViewState::GetConcreteViewState(FSceneViewState *this)

{
  return this;
}

// GetCurrentEyeAdaptationBuffer @ 14543d8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRDGPooledBuffer * __thiscall FSceneViewState::GetCurrentEyeAdaptationBuffer(FSceneViewState *this)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRDGPooledBuffer> *pTVar3;
  FRDGPooledBuffer *pFVar4;
  
  pTVar3 = FEyeAdaptationManager::GetBuffer
                     (&this->EyeAdaptationManager,(this->EyeAdaptationManager).CurrentBufferIndex);
  pFVar4 = pTVar3->Reference;
  if (((this->_padding_ & 1) == 0) || (pFVar4 == (FRDGPooledBuffer *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bValidEyeAdaptationBuffer && Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                       ,0x50b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGPooledBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// GetCurrentTemporalAASampleIndex @ 14543d910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FSceneViewState::GetCurrentTemporalAASampleIndex(FSceneViewState *this)

{
  return this->TemporalAASampleIndex;
}

// GetDistanceFieldTemporalSampleIndex @ 14543dbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FSceneViewState::GetDistanceFieldTemporalSampleIndex(FSceneViewState *this)

{
  return this->DistanceFieldTemporalSampleIndex;
}

// GetFrozenViewMatrices @ 14543ddd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FViewMatrices * __thiscall FSceneViewState::GetFrozenViewMatrices(FSceneViewState *this)

{
  FViewMatrices *pFVar1;
  
  pFVar1 = (FViewMatrices *)0x0;
  if (this->bIsFrozen == 1 && this->bIsFrozenViewMatricesCached == 1) {
    pFVar1 = &this->CachedViewMatrices;
  }
  return pFVar1;
}

// GetLandscapeRayTracingStates @ 14543de10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLandscapeRayTracingStateList * __thiscall
FSceneViewState::GetLandscapeRayTracingStates(FSceneViewState *this)

{
  return (this->LandscapeRayTracingStates).Ptr;
}

// GetLastAverageSceneLuminance @ 14543de20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall FSceneViewState::GetLastAverageSceneLuminance(FSceneViewState *this)

{
  return (this->EyeAdaptationManager).LastAverageSceneLuminance;
}

// GetLastEyeAdaptationExposure @ 14543de30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall FSceneViewState::GetLastEyeAdaptationExposure(FSceneViewState *this)

{
  return (this->EyeAdaptationManager).LastExposure;
}

// GetOcclusionFrameCounter @ 14543dec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FSceneViewState::GetOcclusionFrameCounter(FSceneViewState *this)

{
  return this->OcclusionFrameCounter;
}

// GetPreExposure @ 14543e4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall FSceneViewState::GetPreExposure(FSceneViewState *this)

{
  return this->PreExposure;
}

// GetReusableMID @ 14543f030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMaterialInstanceDynamic * __thiscall
FSceneViewState::GetReusableMID(FSceneViewState *this,UMaterialInterface *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInstanceDynamic>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UMaterialInstanceDynamic *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  uint uVar12;
  UMaterialInterface *pUVar13;
  UMaterialInstance *pUVar14;
  UMaterialInstanceDynamic *local_28 [2];
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                         ,0x5ac,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar8 = (UMaterialInstanceDynamic *)(*pcVar5)();
    return pUVar8;
  }
  pUVar14 = (UMaterialInstance *)0x0;
  pUVar13 = param_1;
  if (param_1 == (UMaterialInterface *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                       ,0x5ad,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UMaterialInstanceDynamic *)(*pcVar5)();
      return pUVar8;
    }
  }
  else {
    pUVar9 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar7 = (int)pUVar9->_padding_;
    if ((iVar7 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar9->_padding_)) {
      pUVar13 = *(UMaterialInterface **)&param_1[1].SubsurfaceProfiles.ArrayNum;
      pUVar14 = (UMaterialInstance *)param_1;
    }
  }
  pUVar9 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
  iVar7 = (int)pUVar9->_padding_;
  if (((iVar7 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar7 * 8)
       == &pUVar9->_padding_)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ParentOfTheNewMID->IsA(UMaterialInstanceDynamic::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                         ,0x5b6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar8 = (UMaterialInstanceDynamic *)(*pcVar5)();
    return pUVar8;
  }
  uVar3 = this->MIDUsedCount;
  if (uVar3 < (uint)(this->MIDPool).ArrayNum) {
    uVar12 = 0;
    if ((int)uVar3 < (this->MIDPool).ArrayNum) {
      uVar12 = ~uVar3 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UMaterialInstanceDynamic *)(*pcVar5)();
      return pUVar8;
    }
    pUVar8 = *(UMaterialInstanceDynamic **)
              ((this->MIDPool).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    if ((UMaterialInterface *)pUVar8->_padding_ == (UMaterialInterface *)0x0) {
      bVar6 = pUVar13 == (UMaterialInterface *)0x0;
    }
    else {
      bVar6 = (UMaterialInterface *)pUVar8->_padding_ == pUVar13;
    }
    if (!bVar6) {
      pUVar8 = UMaterialInstanceDynamic::Create(pUVar13,(UObject *)0x0,(FName)0x0);
      uVar3 = this->MIDUsedCount;
      uVar12 = 0;
      if ((int)uVar3 < (this->MIDPool).ArrayNum) {
        uVar12 = ~uVar3 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UMaterialInstanceDynamic *)(*pcVar5)();
        return pUVar8;
      }
      pFVar4 = (this->MIDPool).AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      *(UMaterialInstanceDynamic **)(pFVar4 + (longlong)(int)uVar3 * 8) = pUVar8;
    }
    UMaterialInstanceDynamic::ClearParameterValues(pUVar8);
  }
  else {
    pUVar8 = UMaterialInstanceDynamic::Create(pUVar13,(UObject *)0x0,(FName)0x0);
    if ((pUVar8 == (UMaterialInstanceDynamic *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMID",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                           ,0x5cd,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UMaterialInstanceDynamic *)(*pcVar5)();
      return pUVar8;
    }
    pTVar2 = &this->MIDPool;
    local_28[0] = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->MIDPool).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UMaterialInstanceDynamic *)(*pcVar5)();
      return pUVar8;
    }
    iVar7 = (this->MIDPool).ArrayNum;
    piVar1 = &(this->MIDPool).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->MIDPool).ArrayNum = iVar7 + 1;
    *(UMaterialInstanceDynamic **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_28[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28[0] != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_28[0]);
    }
  }
  if (pUVar14 != (UMaterialInstance *)0x0) {
    UMaterialInstanceDynamic::CopyInterpParameters(pUVar8,pUVar14);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar11 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar11,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) &&
     ((lVar10 = (**(code **)(pUVar8->_padding_ + 0x310))(pUVar8), lVar10 == 0 &&
      (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("!FApp::CanEverRender() || NewMID->GetRenderProxy()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                          ,0x5d8,L""), bVar6)))) {
    pcVar5 = (code *)swi(3);
    pUVar8 = (UMaterialInstanceDynamic *)(*pcVar5)();
    return pUVar8;
  }
  this->MIDUsedCount = this->MIDUsedCount + 1;
  return pUVar8;
}

// GetSequencerState @ 14543f590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ESequencerState __thiscall FSceneViewState::GetSequencerState(FSceneViewState *this)

{
  return this->SequencerState;
}

// GetTemporalLODState @ 145442520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTemporalLODState * __thiscall FSceneViewState::GetTemporalLODState(FSceneViewState *this)

{
  return &this->TemporalLODState;
}

// GetTemporalLODState @ 145442530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTemporalLODState * __thiscall FSceneViewState::GetTemporalLODState(FSceneViewState *this)

{
  return &this->TemporalLODState;
}

// GetTemporalLODTransition @ 145442540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall FSceneViewState::GetTemporalLODTransition(FSceneViewState *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (this->TemporalLODState).TemporalLODLag;
  if (fVar2 == 0.0) {
    return 0.0;
  }
  fVar1 = (this->TemporalLODState).TemporalLODTime[0];
  fVar2 = (((float)this->LastRenderTime - fVar2) - fVar1) /
          ((this->TemporalLODState).TemporalLODTime[1] - fVar1);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}

// GetViewKey @ 145442780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FSceneViewState::GetViewKey(FSceneViewState *this)

{
  return this->UniqueID;
}

// GetVolumetricCloudTexture @ 145442830

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

FRDGTexture * __thiscall
FSceneViewState::GetVolumetricCloudTexture(FSceneViewState *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructRT
                     (&this->VolumetricCloudRenderTarget,param_1);
  return pFVar1;
}

// GetVolumetricCloudTextureUVMax @ 145442850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector2<float> __thiscall FSceneViewState::GetVolumetricCloudTextureUVMax(FSceneViewState *this)

{
  TVector2<float>_u_0 in_RDX;
  
  FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructUVMax
            (&this->VolumetricCloudRenderTarget);
  return (TVector2<float>)in_RDX;
}

// GetVolumetricCloudTextureUVScale @ 145442880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector2<float> __thiscall FSceneViewState::GetVolumetricCloudTextureUVScale(FSceneViewState *this)

{
  TVector2<float>_u_0 in_RDX;
  
  FVolumetricRenderTargetViewStateData::GetDstVolumetricReconstructUVScale
            (&this->VolumetricCloudRenderTarget);
  return (TVector2<float>)in_RDX;
}

// InitRHI @ 145443110

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

void __thiscall FSceneViewState::InitRHI(FSceneViewState *this,FRHICommandListBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014544311a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&(this->PrimitiveOcclusionQueryPool).CurrentFrameIndex + 8))();
  return;
}

// OnStartPostProcessing @ 145445510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneViewState::OnStartPostProcessing(FSceneViewState *this,FSceneView *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                       ,0x59c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MIDUsedCount = 0;
  return;
}

// ReleaseRHI @ 145448650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneViewState::ReleaseRHI(FSceneViewState *this)

{
  uint *puVar1;
  
  FRDGBuilder::WaitForAsyncExecuteTask();
  (**(code **)(*(longlong *)&(this->PrimitiveOcclusionQueryPool).CurrentFrameIndex + 0x10))();
  FEyeAdaptationManager::SafeRelease
            ((FEyeAdaptationManager *)&(this->HLODSceneNodeVisibilityStates).field_0x48);
  FSubstrateViewDebugData::SafeRelease
            ((FSubstrateViewDebugData *)&this->ExposureCompensationCurveLUT);
  (*(code *)((this->HZBOcclusionTests).ResultsReadback.Ptr)->DestinationStagingTextures[1].Reference
  )();
  puVar1 = &this[-1].Occlusion.NumRequestedQueries;
  *(byte *)puVar1 = (byte)*puVar1 & 0xfe;
  return;
}

// ResetViewState @ 14544e080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneViewState::ResetViewState(FSceneViewState *this)

{
  this->PreExposure = 1.0;
  this->TemporalAASampleIndex = 0;
  this->FrameIndex = 0;
  this->OutputFrameIndex = 0;
  this->DistanceFieldTemporalSampleIndex = 0;
                    /* WARNING: Could not recover jumptable at 0x00014544e0a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// RestoreUnfrozenViewMatrices @ 14544ea70

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
FSceneViewState::RestoreUnfrozenViewMatrices(FSceneViewState *this,FSceneView *param_1)

{
  FSceneViewStateInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_888 [2176];
  
  pFVar1 = param_1->State;
  if ((pFVar1[0x5a]._padding_ & 2) != 0) {
    if ((pFVar1[0x5a]._padding_ & 4) != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ViewState->bIsFrozenViewMatricesCached",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScenePrivate.h"
                         ,0x60f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memcpy(local_888,&param_1->ViewMatrices,0x880);
    memcpy(&param_1->ViewMatrices,pFVar1 + 0x60,0x880);
    memcpy(pFVar1 + 0x60,local_888,0x880);
    *(uint *)&pFVar1[0x5a]._padding_ = (uint)pFVar1[0x5a]._padding_ | 4;
  }
  return;
}

// SetLandscapeRayTracingStates @ 14544eb70

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
FSceneViewState::SetLandscapeRayTracingStates
          (FSceneViewState *this,TPimplPtr<FLandscapeRayTracingStateList,0> *param_1)

{
  FLandscapeRayTracingStateList *pFVar1;
  TPimplPtr<FLandscapeRayTracingStateList,0> *pTVar2;
  
  pTVar2 = &this->LandscapeRayTracingStates;
  if (param_1 != pTVar2) {
    pFVar1 = pTVar2->Ptr;
    pTVar2->Ptr = param_1->Ptr;
    param_1->Ptr = (FLandscapeRayTracingStateList *)0x0;
    if (pFVar1 != (FLandscapeRayTracingStateList *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014544eb99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pFVar1 + -4))(pFVar1 + -4);
      return;
    }
  }
  return;
}

// SetSequencerState @ 14544f3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneViewState::SetSequencerState(FSceneViewState *this,ESequencerState param_1)

{
  this->SequencerState = param_1;
  return;
}

// Destroy @ 1454a03d0

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

void __thiscall FSceneViewState::Destroy(FSceneViewState *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSceneViewState *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSceneViewState *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSceneViewState::Destroy'::`2'::<lambda_1>,1,0>::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSceneViewState::Destroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSceneViewState::Destroy_::__l2::TSTR_FSceneViewState_Destroy311>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FSceneViewState::Destroy'::__l2::TSTR_FSceneViewState_Destroy311>::
             Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// GetSizeBytes @ 1454a8970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ulong64 __thiscall FSceneViewState::GetSizeBytes(FSceneViewState *this)

{
  ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong64 uVar6;
  ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
  FVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar4 = (this->ShadowOcclusionQueryMaps).ArrayMax;
  uVar9 = 0;
  uVar10 = 0;
  if (4 < uVar4) {
    uVar10 = uVar4 * 0x50;
  }
  uVar8 = uVar9;
  uVar12 = uVar9;
  if (0 < (this->ShadowOcclusionQueryMaps).ArrayNum) {
    do {
      uVar11 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar11 < (this->ShadowOcclusionQueryMaps).ArrayNum) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      FVar1 = (this->ShadowOcclusionQueryMaps).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
               )&this->ShadowOcclusionQueryMaps;
      if (FVar1 != (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                    )0x0) {
        FVar7 = FVar1;
      }
      uVar4 = *(uint *)(uVar12 + 0x48 + (longlong)FVar7);
      iVar5 = uVar4 * 4;
      if (uVar4 < 2) {
        iVar5 = 0;
      }
      uVar10 = iVar5 + uVar10 +
               ((*(int *)(uVar12 + 0x2c + (longlong)FVar7) + 0x1fU >> 5) +
               *(int *)(uVar12 + 0xc + (longlong)FVar7) * 0xc) * 4;
      uVar8 = (ulonglong)(uVar11 + 1);
      uVar12 = uVar12 + 0x50;
    } while ((int)(uVar11 + 1) < (this->ShadowOcclusionQueryMaps).ArrayNum);
  }
  uVar4 = *(uint *)&(this->PrimitiveFadingStates).field_0x48;
  uVar8 = uVar9;
  if (1 < uVar4) {
    uVar8 = (longlong)(int)uVar4 << 2;
  }
  uVar4 = (this->Occlusion).PrimitiveOcclusionHistorySet.HashSize;
  if (1 < uVar4) {
    uVar9 = (longlong)(int)uVar4 << 2;
  }
  return (ulonglong)uVar10 + 0x2b70 +
         (longlong)*(int *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0xc * 0x68
         + uVar9 + (ulonglong)
                   ((*(int *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x2c +
                     0x1fU >> 5) << 2) +
         (longlong)*(int *)&(this->PrimitiveFadingStates).field_0xc * 0x38 +
         uVar8 + ((*(int *)&(this->PrimitiveFadingStates).field_0x2c + 0x1fU >> 5) << 2);
}

// IsShadowOccluded @ 1454ac0a0

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
FSceneViewState::IsShadowOccluded(FSceneViewState *this,FProjectedShadowKey *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  FRHIPooledRenderQuery *pFVar6;
  ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
  FVar7;
  uint uVar8;
  longlong local_res8;
  
  uVar8 = (int)this->PendingPrevFrameNumber % param_2;
  uVar5 = 0;
  if ((int)uVar8 < (this->ShadowOcclusionQueryMaps).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FVar7 = (this->ShadowOcclusionQueryMaps).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
                )0x0) {
    FVar7 = (ForElementType<TMap<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>_>
             )&this->ShadowOcclusionQueryMaps;
  }
  pFVar6 = TMapBase<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>
           ::Find((TMapBase<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,FRHIPooledRenderQuery,0>_>
                   *)((longlong)FVar7 + (longlong)(int)uVar8 * 0x50),param_1);
  local_res8 = 0;
  if ((pFVar6 != (FRHIPooledRenderQuery *)0x0) &&
     (cVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x288))
                        (GDynamicRHI,(pFVar6->Query).Reference,&local_res8,1,0xffffffff),
     cVar4 != '\0')) {
    return local_res8 == 0;
  }
  return false;
}

// ResolvePrecomputedVisibilityData @ 1454b8a00

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

uchar * __thiscall
FSceneViewState::ResolvePrecomputedVisibilityData
          (FSceneViewState *this,FViewInfo *param_1,FScene *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  FPrecomputedVisibilityHandler *pFVar4;
  void *pvVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  FName FVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FNameEntryId FVar14;
  uchar *puVar15;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar16;
  FConvexVolume *this_00;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  FLinearColor_u_0 *pFVar21;
  uchar uVar22;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_238 [32];
  FScriptContainerElement *local_1e8;
  longlong local_1d8;
  undefined1 local_1d0 [8];
  FScene *local_1c8;
  uint local_1c0;
  undefined4 uStack_1bc;
  FLinearColor_u_0 local_1b8;
  FLinearColor_u_0 local_1a8;
  FLinearColor_u_0 local_198;
  longlong local_188;
  longlong local_180;
  FScriptContainerElement *local_178;
  FPrimitiveDrawInterface local_170;
  FViewInfo *local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  double local_100;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90;
  ulonglong local_88;
  int iVar13;
  
  dVar7 = __real_3fe0000000000000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar4 = param_2->PrecomputedVisibilityHandler;
  pFVar16 = (FScriptContainerElement *)0x0;
  local_1e8 = (FScriptContainerElement *)0x0;
  if (((pFVar4 != (FPrecomputedVisibilityHandler *)0x0) && (GAllowPrecomputedVisibility != 0)) &&
     (uVar25 = *(uint *)(param_1->_padding_ + 0x58), (uVar25 >> 0x1b & 1) != 0)) {
    local_170._padding_ = (longlong)&___7FViewElementPDI__6B_;
    local_158 = (undefined8 *)0x0;
    uStack_150 = 0;
    local_148 = 0;
    local_1c8 = param_2;
    local_170.View = (FSceneView *)param_1;
    local_160 = param_1;
    if (((GShowPrecomputedVisibilityCells != 0) || ((uVar25 >> 0x1e & 1) != 0)) &&
       ((GShowRelevantPrecomputedVisibilityCells == 0 &&
        (uVar25 = 0, 0 < (pFVar4->PrecomputedVisibilityCellBuckets).ArrayNum)))) {
      local_1d8 = 0;
      do {
        uVar17 = 0;
        lVar19 = 0;
        while( true ) {
          uVar11 = 0;
          if ((int)uVar25 < (pFVar4->PrecomputedVisibilityCellBuckets).ArrayNum) {
            uVar11 = ~uVar25 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            puVar15 = (uchar *)(*pcVar6)();
            return puVar15;
          }
          if (*(int *)((pFVar4->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data +
                      local_1d8 + 0x10) <= (int)uVar17) break;
          uVar11 = 0;
          if ((int)uVar25 < (pFVar4->PrecomputedVisibilityCellBuckets).ArrayNum) {
            uVar11 = ~uVar25 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            puVar15 = (uchar *)(*pcVar6)();
            return puVar15;
          }
          pFVar16 = (pFVar4->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data;
          uVar11 = 0;
          if ((int)uVar17 < *(int *)(pFVar16 + (longlong)(int)uVar25 * 0x28 + 0x10)) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            puVar15 = (uchar *)(*pcVar6)();
            return puVar15;
          }
          lVar24 = *(longlong *)(pFVar16 + (longlong)(int)uVar25 * 0x28 + 8);
          local_f8._s_0.X = *(double *)(lVar19 + lVar24);
          local_f8._s_0.Y = ((double *)(lVar19 + lVar24))[1];
          this_00 = (FConvexVolume *)param_1->_padding_;
          local_e0 = (double)pFVar4->PrecomputedVisibilityCellSizeXY + *(double *)(lVar19 + lVar24);
          local_d8 = (double)pFVar4->PrecomputedVisibilityCellSizeXY +
                     *(double *)(lVar19 + 8 + lVar24);
          local_d0 = (double)pFVar4->PrecomputedVisibilityCellSizeZ +
                     *(double *)(lVar19 + 0x10 + lVar24);
          local_f8._s_0.Z = *(double *)(lVar19 + 0x10 + lVar24);
          local_c8 = 1;
          if (this_00 == (FConvexVolume *)0x0) {
            this_00 = (FConvexVolume *)&param_1->_padding_;
          }
          local_140._s_0.X = (local_e0 - local_f8._s_0.X) * dVar7;
          local_128._s_0.X = (local_e0 + local_f8._s_0.X) * dVar7;
          local_140._s_0.Y = (local_d8 - local_f8._s_0.Y) * dVar7;
          local_128._s_0.Y = (local_f8._s_0.Y + local_d8) * dVar7;
          local_140._s_0.Z = (local_d0 - local_f8._s_0.Z) * dVar7;
          local_128._s_0.Z = (local_d0 + local_f8._s_0.Z) * dVar7;
          bVar10 = FConvexVolume::IntersectBox
                             (this_00,(TVector<double> *)&local_128._s_0,
                              (TVector<double> *)&local_140._s_0);
          if (bVar10) {
            local_1b8._s_0.R = FLinearColor::sRGBToLinearTable[0x32];
            local_1b8._s_0.G = FLinearColor::sRGBToLinearTable[0x32];
            local_1b8._s_0.B = FLinearColor::sRGBToLinearTable[0xff];
            local_1b8._s_0.A = 1.0;
            DrawWireBox(&local_170,(TBox<double> *)&local_f8._s_0,(FLinearColor *)&local_1b8._s_0,
                        '\0',0.0,0.0,false);
          }
          uVar17 = uVar17 + 1;
          lVar19 = lVar19 + 0x20;
        }
        local_1d8 = local_1d8 + 0x28;
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (pFVar4->PrecomputedVisibilityCellBuckets).ArrayNum);
    }
    local_100 = (double)param_1->_padding_;
    uVar27 = (undefined4)param_1->_padding_;
    uVar28 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    uVar29 = (undefined4)param_1->_padding_;
    uVar30 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    lVar19 = (**(code **)(this->_padding_ + 0x38))(this);
    if (lVar19 != 0) {
      local_100 = *(double *)(lVar19 + 0x828);
      uVar27 = *(undefined4 *)(lVar19 + 0x818);
      uVar28 = *(undefined4 *)(lVar19 + 0x81c);
      uVar29 = *(undefined4 *)(lVar19 + 0x820);
      uVar30 = *(undefined4 *)(lVar19 + 0x824);
    }
    iVar3 = pFVar4->PrecomputedVisibilityCellBucketSizeXY;
    dVar8 = __real_3ff0000000000000 / (double)pFVar4->PrecomputedVisibilityCellSizeXY;
    dVar7 = ((double)CONCAT44(uVar28,uVar27) -
            (pFVar4->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.X) * dVar8;
    dVar8 = ((double)CONCAT44(uVar30,uVar29) -
            (pFVar4->PrecomputedVisibilityCellBucketOriginXY).field0_0x0._s_0.Y) * dVar8;
    uVar20 = (longlong)(int)((int)dVar8 - (uint)((float)dVar8 < 0.0)) / (longlong)iVar3;
    iVar12 = (int)((longlong)((ulonglong)(uint)((int)uVar20 >> 0x1f) << 0x20 | uVar20 & 0xffffffff)
                  % (longlong)pFVar4->PrecomputedVisibilityNumCellBuckets);
    iVar26 = -iVar12;
    if (iVar26 < 0) {
      iVar26 = iVar12;
    }
    uVar20 = (longlong)(int)((int)dVar7 - (uint)((float)dVar7 < 0.0)) / (longlong)iVar3;
    iVar13 = (int)((longlong)((ulonglong)(uint)((int)uVar20 >> 0x1f) << 0x20 | uVar20 & 0xffffffff)
                  % (longlong)pFVar4->PrecomputedVisibilityNumCellBuckets);
    iVar12 = -iVar13;
    if (iVar12 < 0) {
      iVar12 = iVar13;
    }
    uVar25 = iVar26 * iVar3 + iVar12;
    if (((pFVar4->PrecomputedVisibilityCellBuckets).ArrayNum <= (int)uVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("PrecomputedVisibilityBucketIndex < Handler.PrecomputedVisibilityCellBuckets.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                            ,0xc1,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      puVar15 = (uchar *)(*pcVar6)();
      return puVar15;
    }
    uVar17 = 0;
    if ((int)uVar25 < (pFVar4->PrecomputedVisibilityCellBuckets).ArrayNum) {
      uVar17 = ~uVar25 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      puVar15 = (uchar *)(*pcVar6)();
      return puVar15;
    }
    dVar7 = local_100;
    local_178 = (pFVar4->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data;
    uVar17 = 0;
    lVar19 = (longlong)(int)uVar25 * 5;
    local_180 = lVar19;
    if (0 < *(int *)(local_178 + (longlong)(int)uVar25 * 0x28 + 0x10)) {
      lVar24 = 0;
      do {
        pFVar16 = local_178;
        uVar11 = 0;
        if ((int)uVar17 < *(int *)(local_178 + lVar19 * 8 + 0x10)) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          puVar15 = (uchar *)(*pcVar6)();
          return puVar15;
        }
        lVar18 = *(longlong *)(pFVar16 + lVar19 * 8 + 8);
        local_c0._s_0.X = *(double *)(lVar18 + lVar24);
        local_c0._s_0.Y = ((double *)(lVar18 + lVar24))[1];
        local_a8 = (double)pFVar4->PrecomputedVisibilityCellSizeXY + *(double *)(lVar18 + lVar24);
        local_a0 = (double)pFVar4->PrecomputedVisibilityCellSizeXY +
                   *(double *)(lVar18 + 8 + lVar24);
        local_98 = (double)pFVar4->PrecomputedVisibilityCellSizeZ +
                   *(double *)(lVar18 + 0x10 + lVar24);
        local_c0._s_0.Z = *(double *)(lVar18 + 0x10 + lVar24);
        local_90 = 1;
        local_188 = lVar18;
        if ((((((double)CONCAT44(uVar28,uVar27) < local_c0._s_0.X ||
                (double)CONCAT44(uVar28,uVar27) == local_c0._s_0.X) ||
              (local_a8 <= (double)CONCAT44(uVar28,uVar27))) ||
             ((double)CONCAT44(uVar30,uVar29) < local_c0._s_0.Y ||
              (double)CONCAT44(uVar30,uVar29) == local_c0._s_0.Y)) ||
            ((local_a0 <= (double)CONCAT44(uVar30,uVar29) || (dVar7 <= local_c0._s_0.Z)))) ||
           (local_98 <= dVar7)) {
          if (GShowRelevantPrecomputedVisibilityCells != 0) {
            pFVar21 = &local_198;
            local_198._s_0.R = FLinearColor::sRGBToLinearTable[0x32];
            uVar22 = '\0';
            local_198._s_0.G = FLinearColor::sRGBToLinearTable[0x32];
            local_198._s_0.B = FLinearColor::sRGBToLinearTable[0xff];
            local_198._s_0.A = 1.0;
            goto LAB_1454b92f1;
          }
        }
        else {
          pTVar23 = this->CachedVisibilityChunk;
          if (((pTVar23 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) ||
              (this->CachedVisibilityHandlerId != local_1c8->PrecomputedVisibilityHandler->Id)) ||
             ((this->CachedVisibilityBucketIndex != uVar25 ||
              (this->CachedVisibilityChunkIndex != (uint)*(ushort *)(lVar18 + 0x18 + lVar24))))) {
            uVar11 = 0;
            if ((int)uVar25 < (pFVar4->PrecomputedVisibilityCellBuckets).ArrayNum) {
              uVar11 = ~uVar25 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              puVar15 = (uchar *)(*pcVar6)();
              return puVar15;
            }
            pFVar16 = (pFVar4->PrecomputedVisibilityCellBuckets).AllocatorInstance.Data;
            uVar2 = *(ushort *)(lVar18 + 0x18 + lVar24);
            uVar20 = (ulonglong)uVar2;
            if ((*(int *)(pFVar16 + lVar19 * 8 + 0x20) <= (int)(uint)uVar2) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              puVar15 = (uchar *)(*pcVar6)();
              return puVar15;
            }
            lVar19 = *(longlong *)(pFVar16 + lVar19 * 8 + 0x18);
            this->CachedVisibilityBucketIndex = uVar25;
            this->CachedVisibilityChunkIndex = (uint)*(ushort *)(lVar18 + 0x18 + lVar24);
            this->CachedVisibilityHandlerId = local_1c8->PrecomputedVisibilityHandler->Id;
            if (*(char *)(lVar19 + uVar20 * 0x18) == '\0') {
              pTVar23 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                        (lVar19 + (uVar20 * 3 + 1) * 8);
            }
            else {
              pTVar23 = &this->DecompressedVisibilityChunk;
              piVar1 = &(this->DecompressedVisibilityChunk).ArrayMax;
              (this->DecompressedVisibilityChunk).ArrayNum = 0;
              if ((this->DecompressedVisibilityChunk).ArrayMax < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0,&pTVar23->AllocatorInstance,0,piVar1);
              }
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,*(int *)(lVar19 + 4 + uVar20 * 0x18),&pTVar23->AllocatorInstance,
                         &(this->DecompressedVisibilityChunk).ArrayNum,piVar1);
              iVar3 = *(int *)(lVar19 + 0x10 + uVar20 * 0x18);
              pvVar5 = *(void **)(lVar19 + 8 + uVar20 * 0x18);
              iVar26 = *(int *)(lVar19 + 4 + uVar20 * 0x18);
              pFVar16 = (pTVar23->AllocatorInstance).Data;
              FVar14 = FNameEntryId::FromValidEName((EName)local_1d0);
              local_1c0 = *(uint *)CONCAT44(extraout_var,FVar14.Value);
              uStack_1bc = 0;
              FVar9.Number = 0;
              FVar9.ComparisonIndex.Value = local_1c0;
              bVar10 = FCompression::UncompressMemory
                                 (FVar9,pFVar16,(longlong)iVar26,pvVar5,(longlong)iVar3,
                                  COMPRESS_NoFlags,0);
              lVar18 = local_188;
              if ((!bVar10) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FCompression::UncompressMemory( NAME_Zlib, DecompressedVisibilityChunk.GetData(), CompressedChunk.UncompressedSize, CompressedChunk.Data.GetData(), CompressedChunk.Data.Num())"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                                      ,0xe5,L""), lVar18 = local_188, bVar10)) {
                pcVar6 = (code *)swi(3);
                puVar15 = (uchar *)(*pcVar6)();
                return puVar15;
              }
            }
            this->CachedVisibilityChunk = pTVar23;
            uVar2 = *(ushort *)(lVar18 + 0x1a + lVar24);
            if ((pTVar23->ArrayNum <= (int)(uint)uVar2) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              puVar15 = (uchar *)(*pcVar6)();
              return puVar15;
            }
            local_1e8 = (pTVar23->AllocatorInstance).Data + uVar2;
            lVar19 = local_180;
          }
          else {
            uVar2 = *(ushort *)(lVar18 + 0x1a + lVar24);
            if ((pTVar23->ArrayNum <= (int)(uint)uVar2) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              puVar15 = (uchar *)(*pcVar6)();
              return puVar15;
            }
            local_1e8 = (pTVar23->AllocatorInstance).Data + uVar2;
          }
          if (GShowRelevantPrecomputedVisibilityCells == 0) break;
          pFVar21 = &local_1a8;
          uVar22 = '\x01';
          local_1a8._s_0.R = FLinearColor::sRGBToLinearTable[0x32];
          local_1a8._s_0.G = FLinearColor::sRGBToLinearTable[0xff];
          local_1a8._s_0.B = FLinearColor::sRGBToLinearTable[0x32];
          local_1a8._s_0.A = 1.0;
LAB_1454b92f1:
          DrawWireBox(&local_170,(TBox<double> *)&local_c0._s_0,(FLinearColor *)&pFVar21->_s_0,
                      uVar22,0.0,0.0,false);
        }
        uVar17 = uVar17 + 1;
        lVar24 = lVar24 + 0x20;
      } while ((int)uVar17 < *(int *)(local_178 + lVar19 * 8 + 0x10));
    }
    pFVar16 = local_1e8;
    if (local_158 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_158 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_158)(local_158,1);
      }
    }
  }
  return (uchar *)pFVar16;
}

// TrimOcclusionHistory @ 1454bda50

/* WARNING: Type propagation algorithm not settling */
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
FSceneViewState::TrimOcclusionHistory
          (FSceneViewState *this,float param_1,float param_2,float param_3,int param_4)

{
  FOcclusion *pFVar1;
  ulonglong uVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  Type TVar7;
  longlong lVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator> *local_60
  ;
  FOcclusion *local_58;
  int iStack_50;
  uint uStack_4c;
  undefined1 *local_48;
  undefined4 uStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  
  if (param_4 ==
      (param_4 / 6 + (param_4 >> 0x1f) +
      (int)(((longlong)param_4 / 6 + ((longlong)param_4 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 6) {
    bVar4 = *(byte *)((longlong)&this->_padding_ + 4);
    TVar7 = (uint)bVar4;
    if (bVar4 == 5) {
      TVar7 = GMaxRHIFeatureLevel;
    }
    FOcclusionQueryHelpers::GetNumBufferedFrames(TVar7);
    iStack_50 = 0;
    pFVar1 = &this->Occlusion;
    iVar5 = *(int *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x28;
    TStack_80.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x10;
    uStack_4c = 1;
    local_38 = 0;
    iStack_3c = 0;
    if (iVar5 != 0) {
      puVar9 = *(uint **)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)TStack_80.Array;
      }
      uVar6 = *puVar9;
      while (uVar6 == 0) {
        lVar8 = (longlong)iStack_50;
        local_38 = local_38 + 0x20;
        iStack_50 = iStack_50 + 1;
        iStack_3c = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_50) goto LAB_1454bdb3b;
        uVar6 = puVar9[lVar8 + 1];
      }
      uStack_4c = -uVar6 & uVar6;
      uVar2 = (ulonglong)uStack_4c * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_3c = local_38 + -1 + (int)lVar8;
      if (iVar5 < iStack_3c) {
        iStack_3c = iVar5;
      }
    }
LAB_1454bdb3b:
    TStack_80._padding_ = CONCAT44(uStack_4c,iStack_50);
    uStack_40 = 0xffffffff;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iStack_34 = TStack_80.CurrentBitIndex;
    TStack_80._28_4_ = TStack_80.CurrentBitIndex;
    TStack_80.BaseBitIndex = local_38;
    local_60 = &pFVar1->PrimitiveOcclusionHistorySet;
    local_58 = pFVar1;
    local_48 = (undefined1 *)TStack_80.Array;
    TStack_80.CurrentBitIndex = iStack_3c;
    if (iStack_3c < *(int *)&(this->Occlusion).PrimitiveOcclusionHistorySet.Elements.field_0x28) {
      do {
        fVar3 = *(float *)((longlong)TStack_80.CurrentBitIndex * 0x68 + 0x48 +
                          *(longlong *)&(pFVar1->PrimitiveOcclusionHistorySet).Elements);
        if ((fVar3 < param_2) || (param_1 < fVar3)) {
          TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator>::
          RemoveByIndex(local_60,TStack_80.CurrentBitIndex);
        }
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
    }
  }
  return;
}

// operator() @ 1454d9000

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
`FSceneViewState::SystemMemoryMirrorBackup'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  
  SystemMemoryForEachTexture
            (param_1,(FSceneViewStateSystemMemoryMirror *)**(undefined8 **)this,
             *(FSceneViewState **)((longlong)this + 8),SystemMemoryBackupTextureBegin);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  FRHICommandListImmediate::FlushResources(param_1);
  lVar1 = **(longlong **)this;
  if (*(int *)(lVar1 + 0x5c) < 0) {
    DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
              (*(TRefCountPtr<IPooledRenderTarget> **)(lVar1 + 0x50),*(int *)(lVar1 + 0x58));
    *(undefined4 *)(lVar1 + 0x58) = 0;
    if (*(int *)(lVar1 + 0x5c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar1 + 0x50),0,(int *)(lVar1 + 0x5c));
    }
  }
  else {
    DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
              (*(TRefCountPtr<IPooledRenderTarget> **)(lVar1 + 0x50),*(int *)(lVar1 + 0x58));
    *(undefined4 *)(lVar1 + 0x58) = 0;
  }
  SystemMemoryForEachTexture
            (param_1,(FSceneViewStateSystemMemoryMirror *)**(undefined8 **)this,
             *(FSceneViewState **)((longlong)this + 8),SystemMemoryBackupTextureEnd);
  return;
}

// operator() @ 1454dad10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FSceneViewState::AddLumenSceneData'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  lVar2 = *(longlong *)this;
  puVar1 = (undefined8 *)((longlong)this + 8);
  if ((*(undefined8 **)(lVar2 + 0x20) <= puVar1) &&
     (puVar1 < *(undefined8 **)(lVar2 + 0x20) + *(int *)(lVar2 + 0x2c))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0x28);
  if (iVar5 == *(int *)(lVar2 + 0x2c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar2 + 0x20),(int *)(lVar2 + 0x2c));
  }
  *(int *)(lVar2 + 0x28) = iVar5 + 1;
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar5 * 8) = *puVar1;
  return;
}

// operator() @ 1454dadc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FSceneViewState::RemoveLumenSceneData'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FLumenSceneData *this_00;
  longlong lVar1;
  code *pcVar2;
  FLumenSceneDataKey FVar3;
  bool bVar4;
  uint uVar5;
  FLumenSceneData **ppFVar6;
  uint uVar7;
  uint uVar8;
  FLumenSceneDataKey local_res8;
  
  uVar5 = (**(code **)(**(longlong **)this + 0x70))();
  local_res8.GPUIndex = 0xffffffff;
  local_res8.ViewUniqueId = uVar5;
  FVar3 = local_res8;
  ppFVar6 = TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
            ::Find((TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
                    *)(*(longlong *)(*(longlong *)this + 0x38) + 0x4508),local_res8);
  if (ppFVar6 == (FLumenSceneData **)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneViewState.cpp"
                       ,0x237,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = *ppFVar6;
  if (this_00 != (FLumenSceneData *)0x0) {
    FLumenSceneData::~FLumenSceneData(this_00);
    ::operator_delete(this_00,0xe68);
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x38);
  if (*(int *)(lVar1 + 0x4510) != *(int *)(lVar1 + 0x453c)) {
    uVar8 = uVar5 + 1 ^ 0x7ffff;
    uVar5 = 0x9e3779ba - uVar8 ^ uVar8 << 8;
    uVar7 = (-1 - uVar8) - uVar5 ^ uVar5 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar8) - uVar7 ^ uVar8 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar8) - uVar7 ^ uVar8 << 10;
    local_res8 = FVar3;
    TSet<TTuple<FLumenSceneDataKey,FLumenSceneData_*>,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FLumenSceneDataKey>
              ((TSet<TTuple<FLumenSceneDataKey,FLumenSceneData_*>,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x4508),uVar5 >> 0xf ^ (uVar7 - uVar5) - uVar8,&local_res8);
  }
  return;
}

// operator() @ 1454dc670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FSceneViewState::AddLumenSceneData'::__l18::<lambda_2>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  FLumenSceneDataKey FVar2;
  bool bVar3;
  FLumenSceneData **ppFVar4;
  uint local_res18 [4];
  uint *local_18;
  undefined8 *local_10;
  
  FLumenSceneData::CopyInitialData
            (*(FLumenSceneData **)((longlong)this + 8),
             *(FLumenSceneData **)(*(longlong *)(*(longlong *)this + 0x38) + 0x4500));
  local_res18[0] = (**(code **)(**(longlong **)this + 0x70))();
  local_res18[1] = 0xffffffff;
  FVar2.GPUIndex = 0xffffffff;
  FVar2.ViewUniqueId = local_res18[0];
  ppFVar4 = TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
            ::Find((TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
                    *)(*(longlong *)(*(longlong *)this + 0x38) + 0x4508),FVar2);
  if (ppFVar4 != (FLumenSceneData **)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scene->PerViewOrGPULumenSceneData.Find(ByViewKey) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneViewState.cpp"
                       ,0x213,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = local_res18;
  local_10 = (undefined8 *)((longlong)this + 8);
  TSet<TTuple<FLumenSceneDataKey,FLumenSceneData_*>,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FLumenSceneDataKey_&,FLumenSceneData_*_const_&>_>
            ((TSet<TTuple<FLumenSceneDataKey,FLumenSceneData_*>,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)(*(longlong *)this + 0x38) + 0x4508),
             (TPairInitializer<FLumenSceneDataKey_&,FLumenSceneData_*_const_&> *)&stack0x00000008,
             (bool *)&local_18);
  return;
}

// operator() @ 1454dcc60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FSceneViewState::AddLumenSceneData'::__l22::<lambda_3>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  FLumenSceneDataKey FVar2;
  bool bVar3;
  uint uVar4;
  FLumenSceneData **ppFVar5;
  float fVar6;
  
  uVar4 = (**(code **)(**(longlong **)this + 0x70))();
  FVar2.GPUIndex = 0xffffffff;
  FVar2.ViewUniqueId = uVar4;
  ppFVar5 = TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
            ::Find((TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
                    *)(*(longlong *)(*(longlong *)this + 0x38) + 0x4508),FVar2);
  if (ppFVar5 == (FLumenSceneData **)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneViewState.cpp"
                       ,0x222,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar6 = *(float *)((longlong)this + 8);
  if (__real_3f800000 <= *(float *)((longlong)this + 8)) {
    fVar6 = __real_3f800000;
  }
  if (fVar6 <= __real_3f000000) {
    fVar6 = __real_3f000000;
  }
  (*ppFVar5)->SurfaceCacheResolution = fVar6;
  return;
}

// AddLumenSceneData @ 1454dfd10

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

void __thiscall
FSceneViewState::AddLumenSceneData(FSceneViewState *this,FSceneInterface *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *pFVar3;
  FCommandList *pFVar4;
  FRenderCommandTag *pFVar5;
  FLumenSceneData *this_00;
  FLumenSceneData *pFVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_1c8 [48];
  code *local_198 [2];
  undefined **local_188;
  FSceneViewState *pFStack_180;
  float local_178;
  undefined4 uStack_174;
  undefined ***local_170;
  code *local_168 [2];
  undefined **local_158;
  FSceneInterface *pFStack_150;
  FSceneViewState *local_148;
  undefined ***local_140;
  code *local_138 [2];
  undefined **local_128;
  FSceneViewState *pFStack_120;
  FLumenSceneData *local_118;
  undefined ***local_110;
  undefined1 local_108 [16];
  undefined **local_f8;
  FSceneInterface *pFStack_f0;
  FSceneViewState *local_e8;
  undefined ***local_e0;
  byte local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  FSceneViewState *pFStack_b0;
  FLumenSceneData *local_a8;
  undefined ***local_a0;
  byte local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  FSceneViewState *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((param_1 == (FSceneInterface *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InScene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneViewState.cpp"
                         ,0x1f2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar6 = (FLumenSceneData *)0x0;
  if (this->Scene == (FScene *)0x0) {
    this->Scene = (FScene *)param_1;
    local_158 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::`12'::<lambda_1>,1,0>::
                 _vftable_;
    local_168[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FSceneViewState::AddLumenSceneData'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    local_140 = (undefined ***)0x0;
    pFStack_150 = param_1;
    local_148 = this;
    pFVar3 = FRenderCommandList::GetInstanceTLS();
    if (pFVar3 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSceneViewState::AddLumenSceneData_::__l12::TSTR_SceneViewStateAdd504>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_168);
    }
    else {
      pFVar4 = FRenderCommandList::GetRenderThread(pFVar3);
      local_108._0_8_ = local_168[0];
      local_e0 = local_140;
      local_f8 = local_158;
      pFStack_f0 = pFStack_150;
      local_e8 = local_148;
      local_168[0] = (code *)0x0;
      local_d8 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`FSceneViewState::AddLumenSceneData'::__l12::TSTR_SceneViewStateAdd504>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar4,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_108,pFVar5);
      uVar9 = (ulonglong)local_d8;
      if ((2 < uVar9) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_108._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_108 + 0x10);
          if (local_e0 != (undefined ***)0x0) {
            pppuVar8 = local_e0;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_108);
      }
    }
    if (local_168[0] != (code *)0x0) {
      pppuVar8 = &local_158;
      if (local_140 != (undefined ***)0x0) {
        pppuVar8 = local_140;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  if (this->Scene != (FScene *)param_1) {
    return;
  }
  if (this->Scene->DefaultLumenSceneData != (FLumenSceneData *)0x0) {
    if (this->bLumenSceneDataAdded == false) {
      this->LumenSurfaceCacheResolution = param_2;
      this->bLumenSceneDataAdded = true;
      this_00 = ::operator_new(0xe68);
      if (this_00 != (FLumenSceneData *)0x0) {
        pFVar6 = FLumenSceneData::FLumenSceneData
                           (this_00,this->Scene->DefaultLumenSceneData->bTrackAllPrimitives);
      }
      if (__real_3f800000 <= param_2) {
        param_2 = __real_3f800000;
      }
      pFVar6->bViewSpecific = true;
      local_110 = (undefined ***)0x0;
      local_128 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::`18'::<lambda_2>,1,0>
                   ::_vftable_;
      if (param_2 <= __real_3f000000) {
        param_2 = __real_3f000000;
      }
      pFVar6->SurfaceCacheResolution = param_2;
      local_138[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FSceneViewState::AddLumenSceneData'::__l18::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
      pFStack_120 = this;
      local_118 = pFVar6;
      pFVar3 = FRenderCommandList::GetInstanceTLS();
      if (pFVar3 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FSceneViewState::AddLumenSceneData_::__l18::TSTR_LinkLumenSceneData524>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_138);
      }
      else {
        pFVar4 = FRenderCommandList::GetRenderThread(pFVar3);
        local_c8[0] = local_138[0];
        local_a0 = local_110;
        local_b8 = local_128;
        pFStack_b0 = pFStack_120;
        local_a8 = local_118;
        local_138[0] = (code *)0x0;
        local_98 = 2;
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSceneViewState::AddLumenSceneData'::__l18::TSTR_LinkLumenSceneData524>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar4,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_c8,pFVar5);
        uVar9 = (ulonglong)local_98;
        if ((2 < uVar9) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if (local_c8[0] != (code *)0x0) {
            pppuVar8 = (undefined ***)(local_c8 + 2);
            if (local_a0 != (undefined ***)0x0) {
              pppuVar8 = local_a0;
            }
            (*(code *)(*pppuVar8)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])
                    ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      *)local_c8);
        }
      }
      if (local_138[0] == (code *)0x0) {
        return;
      }
      pppuVar8 = &local_128;
      pppuVar7 = local_110;
    }
    else {
      if (param_2 == this->LumenSurfaceCacheResolution) {
        return;
      }
      this->LumenSurfaceCacheResolution = param_2;
      local_188 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSceneViewState::AddLumenSceneData'::`22'::<lambda_3>,1,0>
                   ::_vftable_;
      uStack_174 = auStack_1c8._44_4_;
      local_198[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FSceneViewState::AddLumenSceneData'::__l22::<lambda_3>,void,FRHICommandListImmediate_&>
                     ::Call;
      local_170 = (undefined ***)0x0;
      pFStack_180 = this;
      local_178 = param_2;
      pFVar3 = FRenderCommandList::GetInstanceTLS();
      if (pFVar3 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FSceneViewState::AddLumenSceneData_::__l22::TSTR_ChangeLumenSceneDataQuality540>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_198);
      }
      else {
        pFVar4 = FRenderCommandList::GetRenderThread(pFVar3);
        local_68._4_4_ = uStack_174;
        local_68._0_4_ = local_178;
        local_88._0_8_ = local_198[0];
        local_60 = local_170;
        local_78 = local_188;
        pFStack_70 = pFStack_180;
        local_198[0] = (code *)0x0;
        local_58 = 2;
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSceneViewState::AddLumenSceneData'::__l22::TSTR_ChangeLumenSceneDataQuality540>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar4,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_88,pFVar5);
        uVar9 = (ulonglong)local_58;
        if ((2 < uVar9) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_88._0_8_ != (code *)0x0) {
            pppuVar8 = (undefined ***)(local_88 + 0x10);
            if (local_60 != (undefined ***)0x0) {
              pppuVar8 = local_60;
            }
            (*(code *)(*pppuVar8)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])(local_88);
        }
      }
      if (local_198[0] == (code *)0x0) {
        return;
      }
      pppuVar8 = &local_188;
      pppuVar7 = local_170;
    }
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar8 = pppuVar7;
    }
    (*(code *)(*pppuVar8)[2])();
    return;
  }
  return;
}

// GetGPUSizeBytes @ 1454f5b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ulong64 __thiscall FSceneViewState::GetGPUSizeBytes(FSceneViewState *this,bool param_1)

{
  FRHIGPUTextureReadback *this_00;
  FTemporalAAHistory *this_01;
  IPooledRenderTarget *pIVar1;
  FRDGPooledBuffer *pFVar2;
  FPersistentGlobalDistanceFieldData *this_02;
  FRHITexture *this_03;
  code *pcVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  TMap<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>_>
  *pTVar5;
  TMap<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  FRHITextureDesc *this_04;
  FLumenSceneData **ppFVar20;
  byte bVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  TRefCountPtr<IPooledRenderTarget> *pTVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  undefined1 *puVar33;
  uint *puVar34;
  longlong lVar35;
  FLumenSceneDataKey local_res8;
  uint local_res10 [2];
  TRefCountPtr<IPooledRenderTarget> *local_res18;
  int local_res20;
  undefined4 uStack_bc;
  FName local_b8;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  TMap<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>_>
  *local_a8;
  FName local_a0;
  TMap<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  
  this_00 = (this->HZBOcclusionTests).ResultsReadback.Ptr;
  uVar19 = 0;
  uVar27 = 0;
  uVar28 = 0;
  if (this_00 == (FRHIGPUTextureReadback *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = FRHIGPUTextureReadback::GetGPUSizeBytes(this_00);
    if (((param_1) && (uVar13 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      local_b8 = *(FName *)(this_00->_padding_ + 0x1c);
      ::FName::ToString(&local_b8,&local_68);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Textur_150fb8768,
                 (FLogCategoryBase *)&LogRenderer);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  uVar14 = FPersistentSkyAtmosphereData::GetGPUSizeBytes(&this->PersistentSkyAtmosphereData,param_1)
  ;
  uVar15 = FEyeAdaptationManager::GetGPUSizeBytes(&this->EyeAdaptationManager,param_1);
  uVar16 = GetRenderTargetGPUSizeBytes(&this->CombinedLUTRenderTarget,param_1);
  uVar17 = FPreviousViewInfo::GetGPUSizeBytes(&this->PrevFrameViewInfo,param_1);
  uVar18 = FTemporalAAHistory::GetGPUSizeBytes(&this->LightShaftOcclusionHistory,param_1);
  local_b0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->LightShaftBloomHistoryRTs).field_0x10;
  lVar35 = uVar14 + uVar13 + uVar15 + uVar16 + uVar17 + uVar18;
  uVar25 = *(uint *)&(this->LightShaftBloomHistoryRTs).field_0x28;
  local_a8 = &this->LightShaftBloomHistoryRTs;
  uVar8 = 1;
  uVar10 = 0;
  iVar30 = 0;
  uVar9 = uVar28;
  uVar31 = uVar28;
  uVar32 = uVar10;
  if (uVar25 != 0) {
    puVar34 = *(uint **)&(this->LightShaftBloomHistoryRTs).field_0x20;
    if (puVar34 == (uint *)0x0) {
      puVar34 = (uint *)local_b0;
    }
    uVar9 = *puVar34;
    uVar13 = uVar19;
    uVar14 = uVar19;
    uVar32 = uVar27;
    uVar31 = uVar27;
    while (uVar9 == 0) {
      iVar30 = (int)uVar13;
      uVar32 = (int)uVar14 + 0x20;
      uVar14 = (ulong64)uVar32;
      uVar31 = iVar30 + 1;
      uVar13 = (ulong64)uVar31;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar31) {
        iVar30 = *(int *)&(this->LightShaftBloomHistoryRTs).field_0x28;
        uVar9 = uVar25;
        goto LAB_1454f5d14;
      }
      uVar9 = puVar34[(longlong)iVar30 + 1];
    }
    iVar30 = *(int *)&(this->LightShaftBloomHistoryRTs).field_0x28;
    uVar8 = -uVar9 & uVar9;
    uVar26 = (ulonglong)uVar8 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_res20 = (int)lVar22;
    uVar9 = (uVar32 - 1) + local_res20;
    if (iVar30 < (int)uVar9) {
      uVar9 = uVar25;
    }
  }
LAB_1454f5d14:
  local_res18._0_4_ = *(uint *)&(this->LightShaftBloomHistoryRTs).field_0x28;
  TStack_90._padding_ = CONCAT44(uVar8,uVar31);
  uVar25 = (uint)local_res18 & 0xffffffe0;
  TStack_90.CurrentBitIndex = uVar9;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)(uint)local_res18 >> 5;
  TStack_90._28_4_ = uVar9;
  TStack_90.BaseBitIndex = uVar32;
  uStack_70 = CONCAT44(uStack_bc,
                       *(int *)&(this->LightShaftBloomHistoryRTs).field_0x8 -
                       *(int *)&(this->LightShaftBloomHistoryRTs).field_0x34);
  bVar21 = (byte)(uint)local_res18;
  local_98 = local_a8;
  TStack_90.Array = local_b0;
  if ((((int)(uint)local_res18 < 0) || (iVar30 < (int)(uint)local_res18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar19 = (*pcVar3)();
    return uVar19;
  }
  pTVar5 = local_a8;
  pTVar4 = local_b0;
  uVar32 = *(uint *)&(this->LightShaftBloomHistoryRTs).field_0x28;
  uVar31 = (uint)local_res18;
  if ((uint)local_res18 != uVar32) {
    puVar33 = *(undefined1 **)&(this->LightShaftBloomHistoryRTs).field_0x20;
    if (puVar33 == (undefined1 *)0x0) {
      puVar33 = &(this->LightShaftBloomHistoryRTs).field_0x10;
    }
    uVar31 = -1 << (bVar21 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar23 * 4);
    while (uVar31 == 0) {
      lVar22 = (longlong)iVar23;
      uVar25 = uVar25 + 0x20;
      iVar23 = iVar23 + 1;
      local_res18._0_4_ = uVar32;
      uVar31 = uVar32;
      if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_1454f5e40;
      uVar31 = *(uint *)(puVar33 + lVar22 * 4 + 4);
    }
    uVar26 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_res18._0_4_ = (int)lVar22 + -1 + uVar25;
    uVar31 = (uint)local_res18;
    if ((int)uVar32 < (int)(uint)local_res18) {
      local_res18._0_4_ = uVar32;
      uVar31 = uVar32;
    }
  }
LAB_1454f5e40:
  while( true ) {
    pTVar6 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<ULightComponent_const_*,TUniquePtr<FTemporalAAHistory,TDefaultDelete<FTemporalAAHistory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar31) && (TStack_90.Array == pTVar4)) && (pTVar6 == pTVar5)
       ) break;
    this_01 = *(FTemporalAAHistory **)
               (*(longlong *)pTVar6 + 8 + (longlong)TStack_90.CurrentBitIndex * 0x18);
    if (this_01 != (FTemporalAAHistory *)0x0) {
      uVar13 = FTemporalAAHistory::GetGPUSizeBytes(this_01,param_1);
      lVar35 = lVar35 + uVar13;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  pIVar1 = (this->DistanceFieldAOHistoryRT).Reference;
  uVar25 = uVar10;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    uVar25 = (**(code **)(pIVar1->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar25 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->DistanceFieldAOHistoryRT).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar1 = (this->DistanceFieldIrradianceHistoryRT).Reference;
  uVar32 = uVar10;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    uVar32 = (**(code **)(pIVar1->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar32 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->DistanceFieldIrradianceHistoryRT).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar1 = (this->SubsurfaceScatteringQualityHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    uVar10 = (**(code **)(pIVar1->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar10 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->SubsurfaceScatteringQualityHistoryRT).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  uVar13 = FLumenViewState::GetGPUSizeBytes(&this->Lumen,param_1);
  uVar14 = FMegaLightsViewState::FResources::GetGPUSizeBytes(&(this->MegaLights).GBuffer,param_1);
  uVar15 = FMegaLightsViewState::FResources::GetGPUSizeBytes
                     (&(this->MegaLights).HairStrands,param_1);
  uVar16 = FTranslucencyLightingViewState::GetGPUSizeBytes(&this->TranslucencyLighting,param_1);
  pIVar1 = (this->BloomFFTKernel).Spectral.Reference;
  uVar31 = uVar27;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    uVar31 = (**(code **)(pIVar1->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar31 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->BloomFFTKernel).Spectral.Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->BloomFFTKernel).ConstantsBuffer.Reference;
  uVar9 = uVar28;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar9 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar9 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->FilmGrainCache).ConstantsBuffer.Reference;
  uVar8 = uVar28;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar8 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar8 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->SkyLightVisibilityRaysBuffer).Reference;
  uVar24 = uVar28;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar24 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar24 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pIVar1 = (this->LightScatteringHistory).Reference;
  uVar11 = uVar27;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    uVar11 = (**(code **)(pIVar1->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar11 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->LightScatteringHistory).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar1 = (this->PrevLightScatteringConservativeDepthTexture).Reference;
  uVar12 = uVar27;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    uVar12 = (**(code **)(pIVar1->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar12 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->PrevLightScatteringConservativeDepthTexture).Reference)->_padding_ + 0x10))
              ();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  this_02 = (this->GlobalDistanceFieldData).Reference;
  lVar35 = lVar35 + (ulonglong)uVar25 + (ulonglong)uVar32 + uVar13 + (ulonglong)uVar10 + uVar16 +
           uVar14 + uVar15 + (ulonglong)uVar31 + (ulonglong)uVar9 + (ulonglong)uVar8 +
           (ulonglong)uVar24 + (ulonglong)uVar11 + (ulonglong)uVar12;
  if (this_02 != (FPersistentGlobalDistanceFieldData *)0x0) {
    uVar13 = FPersistentGlobalDistanceFieldData::GetGPUSizeBytes(this_02,param_1);
    lVar35 = lVar35 + uVar13;
  }
  uVar13 = FVolumetricRenderTargetViewStateData::GetGPUSizeBytes
                     (&this->VolumetricCloudRenderTarget,param_1);
  lVar35 = lVar35 + uVar13;
  local_res10[0] = 0;
  pTVar29 = this->VolumetricCloudShadowRenderTarget[0].RenderTargets;
  uVar26 = uVar19;
  uVar13 = uVar19;
  local_res18 = pTVar29;
  do {
    do {
      uVar25 = uVar27;
      if (pTVar29->Reference != (IPooledRenderTarget *)0x0) {
        uVar25 = (**(code **)(pTVar29->Reference->_padding_ + 0x18))();
      }
      if (((param_1) && (uVar25 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
        (**(code **)(pTVar29->Reference->_padding_ + 0x10))();
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      uVar32 = (int)uVar26 + 1;
      uVar13 = uVar13 + uVar25;
      pTVar29 = pTVar29 + 1;
      uVar26 = (ulonglong)uVar32;
    } while (uVar32 < 2);
    lVar35 = lVar35 + uVar13;
    local_res10[0] = local_res10[0] + 1;
    pTVar29 = local_res18 + 5;
    uVar26 = uVar19;
    uVar13 = uVar19;
    local_res18 = pTVar29;
  } while (local_res10[0] < 2);
  pFVar2 = (this->HairStrandsViewStateData).VoxelFeedbackBuffer.Reference;
  uVar27 = uVar28;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar27 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar27 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->ShaderPrintStateData).EntryBuffer.Reference;
  uVar25 = uVar28;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar25 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar25 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->ShaderPrintStateData).StateBuffer.Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar28 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar28 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  this_03 = (this->GlintShadingLUTsData).RHIGlintShadingLUTs;
  if (this_03 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_03);
    this_04 = (FRHITextureDesc *)(**(code **)(this_03->_padding_ + 0x20))(this_03);
    uVar19 = FRHITextureDesc::CalcMemorySizeEstimate(this_04,0,this_04->NumMips - 1);
  }
  if (((param_1) && (uVar19 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    local_a0 = (FName)this_03->_padding_;
    ::FName::ToString(&local_a0,&local_58);
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Textur_150fb85a0,
               (FLogCategoryBase *)&LogRenderer);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (this_03 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  uVar19 = lVar35 + (ulonglong)uVar27 + (ulonglong)uVar25 + (ulonglong)uVar28 + uVar19;
  if ((this->Scene != (FScene *)0x0) && (this->bLumenSceneDataAdded != false)) {
    local_res8.ViewUniqueId = (**(code **)(this->_padding_ + 0x70))(this);
    local_res8.GPUIndex = 0xffffffff;
    ppFVar20 = TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
               ::Find((TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
                       *)&this->Scene->PerViewOrGPULumenSceneData,local_res8);
    if (ppFVar20 != (FLumenSceneData **)0x0) {
      uVar13 = FLumenSceneData::GetGPUSizeBytes(*ppFVar20,param_1);
      uVar19 = uVar13 + uVar19;
    }
  }
  return uVar19;
}

// HasLumenSceneData @ 1454fa950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FSceneViewState::HasLumenSceneData(FSceneViewState *this)

{
  return this->bLumenSceneDataAdded;
}

// RemoveLumenSceneData @ 145503150

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

void __thiscall
FSceneViewState::RemoveLumenSceneData(FSceneViewState *this,FSceneInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSceneViewState *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSceneViewState *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1 == (FSceneInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InScene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneViewState.cpp"
                       ,0x22c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Scene == (FScene *)param_1) && (this->bLumenSceneDataAdded != false)) {
    this->bLumenSceneDataAdded = false;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSceneViewState::RemoveLumenSceneData'::`12'::<lambda_1>,1,0>
                ::_vftable_;
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSceneViewState::RemoveLumenSceneData'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSceneViewState::RemoveLumenSceneData_::__l12::TSTR_RemoveLumenSceneData561>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FSceneViewState::RemoveLumenSceneData'::__l12::TSTR_RemoveLumenSceneData561>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// SystemMemoryMirrorBackup @ 14550c250

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

void __thiscall
FSceneViewState::SystemMemoryMirrorBackup
          (FSceneViewState *this,FSceneViewStateSystemMemoryMirror *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  FSceneViewStateSystemMemoryMirror *local_res10 [3];
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSceneViewStateSystemMemoryMirror **ppFStack_70;
  FSceneViewState *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSceneViewStateSystemMemoryMirror **ppFStack_40;
  FSceneViewState *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSceneViewState::SystemMemoryMirrorBackup'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  ppFStack_70 = local_res10;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSceneViewState::SystemMemoryMirrorBackup'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_res10[0] = param_1;
  local_68 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSceneViewState::SystemMemoryMirrorBackup_::__l2::TSTR_ViewStateSystemMemoryBackup832>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    ppFStack_40 = ppFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FSceneViewState::SystemMemoryMirrorBackup'::__l2::TSTR_ViewStateSystemMemoryBackup832>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  FlushRenderingCommands();
  return;
}

// SystemMemoryMirrorRestore @ 14550c3c0

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

void __thiscall
FSceneViewState::SystemMemoryMirrorRestore
          (FSceneViewState *this,FSceneViewStateSystemMemoryMirror *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  FSceneViewStateSystemMemoryMirror *local_res10 [3];
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSceneViewStateSystemMemoryMirror **ppFStack_70;
  FSceneViewState *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSceneViewStateSystemMemoryMirror **ppFStack_40;
  FSceneViewState *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSceneViewState::SystemMemoryMirrorRestore'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  ppFStack_70 = local_res10;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSceneViewState::SystemMemoryMirrorRestore'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_res10[0] = param_1;
  local_68 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSceneViewState::SystemMemoryMirrorRestore_::__l2::TSTR_ViewStateSystemMemoryRestore853>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    ppFStack_40 = ppFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FSceneViewState::SystemMemoryMirrorRestore'::__l2::TSTR_ViewStateSystemMemoryRestore853>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  FlushRenderingCommands();
  return;
}

// UpdateMotionBlurTimeScale @ 145554e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FSceneViewState::UpdateMotionBlurTimeScale(FSceneViewState *this,FViewInfo *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (int)param_1->_padding_;
  fVar4 = *(float *)(param_1->_padding_ + 0x98);
  if (fVar4 <= __real_322bcc77) {
    fVar4 = __real_322bcc77;
  }
  iVar2 = (**(code **)(this->_padding_ + 200))();
  if (iVar1 < 1) {
    if (iVar2 == 1) {
      this->MotionBlurTargetDeltaTime = fVar4;
      fVar3 = fVar4;
      goto LAB_145554f20;
    }
    fVar3 = (fVar4 - this->MotionBlurTargetDeltaTime) * __real_3dcccccd +
            this->MotionBlurTargetDeltaTime;
  }
  else {
    if (iVar2 == 1) {
      fVar4 = __real_3c888889;
    }
    fVar3 = __real_3f800000 / (float)iVar1;
  }
  this->MotionBlurTargetDeltaTime = fVar3;
LAB_145554f20:
  this->MotionBlurTimeScale = fVar3 / fVar4;
  return;
}

