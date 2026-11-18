// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 4

// AddMotionVectorPass @ 14e9de350

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNFORDenoiser::AddMotionVectorPass
          (FNFORDenoiser *this,FRDGBuilder *param_1,FSceneView *param_2,FMotionVectorInputs *param_3
          )

{
  AddClearRenderTargetPass(param_1,param_3->OutputTex,&FLinearColor::Black);
  return;
}

// AddPasses @ 14e9ded10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FOutputs __thiscall
FNFORDenoiser::AddPasses
          (FNFORDenoiser *this,FRDGBuilder *param_1,FSceneView *param_2,FInputs *param_3)

{
  int iVar1;
  code *pcVar2;
  IPooledRenderTarget *pIVar3;
  TRefCountPtr<IPooledRenderTarget> TVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FRDGTexture *pFVar8;
  FOutputs FVar9;
  FRDGTexture *pFVar10;
  FRDGTexture *pFVar11;
  wchar_t *pwVar12;
  uint uVar13;
  FRDGTexture *pFVar14;
  char cStack0000000000000028;
  undefined7 uStack0000000000000029;
  TArray<NFORDenoise::FFeatureDesc,TSizedDefaultAllocator<32>_> local_48;
  TArray<NFORDenoise::FFeatureDesc,TSizedDefaultAllocator<32>_> local_38;
  
  TVar4.Reference = _cStack0000000000000028;
  pIVar3 = _cStack0000000000000028 + 1;
  AddCopyTexturePass((FRDGBuilder *)param_2,(FRDGTexture *)_cStack0000000000000028->_padding_,
                     (FRDGTexture *)
                     _cStack0000000000000028[1].RenderTargetItem.TargetableTexture.Reference,
                     UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue,
                     UE::Math::TIntPoint<int>::ZeroValue);
  pFVar11 = (FRDGTexture *)TVar4.Reference[2].RenderTargetItem.TargetableTexture.Reference;
  pFVar10 = (FRDGTexture *)0x0;
  pFVar14 = pFVar10;
  if (pFVar11 != (FRDGTexture *)0x0) {
    pFVar14 = pFVar11;
  }
  if ((FRDGTexture *)TVar4.Reference[1]._padding_ == (FRDGTexture *)0x0) {
    param_1->_padding_ = (longlong)pFVar14;
    if (pFVar14 != (FRDGTexture *)0x0) {
      LOCK();
      *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
      UNLOCK();
    }
  }
  else {
    pwVar12 = L"";
    if (DebugName.Data.ArrayNum != 0) {
      pwVar12 = (wchar_t *)DebugName.Data.AllocatorInstance;
    }
    pFVar8 = ::operator_new(0x28);
    pFVar11 = pFVar10;
    if (pFVar8 != (FRDGTexture *)0x0) {
      *(undefined4 *)&pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)&___7FHistory_FNFORDenoiser__6B_;
      pFVar8->_padding_ = (longlong)pwVar12;
      (((TArray<FExternalFrameCache,TSizedDefaultAllocator<32>_> *)&pFVar8->_padding_)->
      AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar8->_padding_ = 0;
      pFVar11 = pFVar8;
    }
    pFVar8 = pFVar11;
    if (((pFVar14 != (FRDGTexture *)0x0) && (pFVar11 != pFVar14)) &&
       (pFVar8 = pFVar14, pFVar11 != (FRDGTexture *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
    FHistory::AddFrame((FHistory *)pFVar8,(FRDGBuilder *)param_2,(FSceneView *)param_3,
                       (FInputs *)TVar4.Reference);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    FHistory::FetchFrames
              ((FHistory *)pFVar8,(FRDGBuilder *)param_2,(FSceneView *)param_3,&local_48,&local_38,
               true);
    bVar5 = NFORDenoise::FilterMain
                      ((FRDGBuilder *)param_2,(FSceneView *)param_3,&local_48,&local_38,
                       (FRDGTexture **)&pIVar3->RenderTargetItem);
    cStack0000000000000028 = bVar5;
    if (4 < (byte)LogNFORDenoise._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_virtual_struct_UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FOutputs___cdecl_FNFORDenoiser::AddPasses(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)const___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogNFORDenoise);
    }
    iVar1 = (int)pFVar8->_padding_;
    if (((cStack0000000000000028 != '\0') &&
        (iVar6 = NFORDenoise::GetFrameCount((FSceneView *)param_3), 1 < iVar6)) &&
       (iVar6 = NFORDenoise::GetDenoisingFrameIndex((FSceneView *)param_3,iVar1), 0 < iVar6)) {
      iVar6 = NFORDenoise::GetDenoisingFrameIndex((FSceneView *)param_3,iVar1);
      uVar13 = (iVar1 - iVar6) - 1;
      if (-1 < (int)uVar13) {
        if (((int)pFVar8->_padding_ <= (int)uVar13) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("FrameIndex >=0 && FrameIndex < Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\NFORDenoise\\Source\\NFORDenoise\\Private\\NFORDenoise.cpp"
                               ,0xac,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          FVar9.NewHistory.Reference =
               (TRefCountPtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::IHistory>)
               (*pcVar2)();
          return (FOutputs)FVar9.NewHistory.Reference;
        }
        uVar7 = 0;
        if ((int)uVar13 < (int)pFVar8->_padding_) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          FVar9.NewHistory.Reference =
               (TRefCountPtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::IHistory>)
               (*pcVar2)();
          return (FOutputs)FVar9.NewHistory.Reference;
        }
        _cStack0000000000000028 =
             *(IPooledRenderTarget **)
              ((((TArray<FExternalFrameCache,TSizedDefaultAllocator<32>_> *)&pFVar8->_padding_)->
               AllocatorInstance).Data + (longlong)(int)uVar13 * 0x28 + 0x20);
        if (((_cStack0000000000000028 != (IPooledRenderTarget *)0x0) &&
            ((**(code **)(_cStack0000000000000028->_padding_ + 0x30))(_cStack0000000000000028),
            _cStack0000000000000028 != (IPooledRenderTarget *)0x0)) &&
           (pFVar10 = FRDGBuilder::RegisterExternalTexture
                                ((FRDGBuilder *)param_2,
                                 (TRefCountPtr<IPooledRenderTarget> *)&stack0x00000028,None),
           _cStack0000000000000028 != (IPooledRenderTarget *)0x0)) {
          (**(code **)(_cStack0000000000000028->_padding_ + 0x38))();
        }
        AddCopyTexturePass((FRDGBuilder *)param_2,pFVar10,
                           (FRDGTexture *)((TVar4.Reference)->RenderTargetItem).UAV.Reference,
                           UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue,
                           UE::Math::TIntPoint<int>::ZeroValue);
      }
    }
    param_1->_padding_ = (longlong)pFVar8;
    LOCK();
    *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
    UNLOCK();
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return (FOutputs)
         (TRefCountPtr<UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::IHistory>)param_1
  ;
}

// GetDebugName @ 14e9f0be0

wchar_t * __thiscall FNFORDenoiser::GetDebugName(FNFORDenoiser *this)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"";
  if (DebugName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)DebugName.Data.AllocatorInstance.Data;
  }
  return pwVar1;
}

// NeedVarianceTexture @ 14e9fa630

bool __thiscall FNFORDenoiser::NeedVarianceTexture(FNFORDenoiser *this)

{
  return true;
}

