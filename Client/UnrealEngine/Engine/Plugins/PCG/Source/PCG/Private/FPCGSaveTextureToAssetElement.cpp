// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 149bf4290

void __thiscall
`FPCGSaveTextureToAssetElement::ReadbackInputTexture'::__l5::<lambda_1>::operator()
          (void *this,void *param_1,int param_2,int param_3)

{
  longlong lVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  void *_Dst;
  TReferenceControllerBase<1> *pTVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId207,
               "FPCGSaveTextureToAssetElement::ReadbackInputTexture::DispatchCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSaveTextureToAsset.cpp"
               ,0xcf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId207);
  }
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149bf4320;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    if ((*(longlong *)this != 0) && (lVar1 = *(longlong *)(*(longlong *)this + 0x10), lVar1 != 0)) {
      *(int *)(lVar1 + 0x270) = param_2;
      *(int *)(lVar1 + 0x274) = param_3;
      uVar5 = param_2 * GPixelFormats[2].BlockBytes * param_3;
      _Dst = FMemory::Malloc((ulonglong)uVar5,0);
      *(void **)(lVar1 + 0x268) = _Dst;
      memcpy(_Dst,param_1,(ulonglong)uVar5);
      *(undefined1 *)(lVar1 + 0x27a) = 1;
      *(undefined1 *)(lVar1 + 0x138) = 0;
    }
  }
LAB_149bf4320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 149c01940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSaveTextureToAssetElement::CanExecuteOnlyOnMainThread
          (FPCGSaveTextureToAssetElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c1b3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSaveTextureToAssetElement::ExecuteInternal
          (FPCGSaveTextureToAssetElement *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FText *pFVar4;
  bool bVar5;
  FText local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId58,"FPCGSaveTextureToAssetElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSaveTextureToAsset.cpp"
               ,0x3a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId58);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSaveTextureToAsset.cpp"
                         ,0x3b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGSaveTextureToAsset",L"CannotExportInNonEditor",
                      L"Texture cannot be saved to an asset in non-editor builds");
  PCGLog::LogErrorOnGraph(pFVar4,param_1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ReadbackInputTexture @ 149c32480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149c325c0) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSaveTextureToAssetElement::ReadbackInputTexture
          (FPCGSaveTextureToAssetElement *this,FPCGSaveTextureToAssetContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  int iVar4;
  UPCGBaseTextureData *pUVar5;
  code *pcVar6;
  TRefCountPtr<FRHISamplerState> this_00;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  UStreamableRenderAsset *this_01;
  longlong lVar10;
  TWeakPtr<FPCGContextHandle,1> *pTVar11;
  undefined ***pppuVar12;
  bool bVar13;
  undefined1 auStackY_d8 [32];
  FRHITexture *local_a8;
  FPCGTextureReadbackDispatchParams local_a0;
  TWeakPtr<FPCGContextHandle,1> local_80;
  code *local_68 [2];
  undefined **local_58;
  FPCGContextHandle *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId155,"FPCGSaveTextureToAssetElement::ReadbackInputTexture",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSaveTextureToAsset.cpp"
               ,0x9b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId155);
  }
  if (param_1->bReadbackDispatched == false) {
    pUVar5 = (param_1->InputTextureData).field0_0x0.DebugPtr;
    if (pUVar5 != (UPCGBaseTextureData *)0x0) {
      cVar7 = (**(code **)(pUVar5->_padding_ + 0x4b0))();
      if (cVar7 == '\0') {
        this_01 = (UStreamableRenderAsset *)
                  (**(code **)(((param_1->InputTextureData).field0_0x0.DebugPtr)->_padding_ + 0x4a0)
                  )();
        if (this_01 == (UStreamableRenderAsset *)0x0) goto LAB_149c325c5;
        if (param_1->bUpdatedReadbackTextureResource == false) {
          (**(code **)(this_01->_padding_ + 0x328))(this_01);
          param_1->bUpdatedReadbackTextureResource = true;
        }
        bVar8 = UStreamableRenderAsset::HasPendingInitOrStreaming(this_01,true);
        if (bVar8) {
          uVar9 = 0;
          goto LAB_149c32731;
        }
      }
      (**(code **)(((param_1->InputTextureData).field0_0x0.DebugPtr)->_padding_ + 0x4a8))();
      if (local_a8 != (FRHITexture *)0x0) {
        lVar10 = (**(code **)(local_a8->_padding_ + 0x20))();
        iVar3 = *(int *)(lVar10 + 0x24);
        iVar4 = *(int *)(lVar10 + 0x28);
        local_a0.SourceTexture.Reference = (FRHITexture *)0x0;
        local_a0.SourceSampler.Reference = (FRHISamplerState *)0x0;
        if (local_a8 != (FRHITexture *)0x0) {
          local_a0.SourceTexture.Reference = local_a8;
          FRHIResource::AddRef((FRHIResource *)local_a8);
        }
        this_00.Reference = local_a0.SourceSampler.Reference;
        if (local_a0.SourceSampler.Reference !=
            TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
            ::StaticResource.StateRHI.Reference) {
          local_a0.SourceSampler.Reference =
               TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
          if (TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
              ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
            FRHIResource::AddRef
                      ((FRHIResource *)
                       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                       ::StaticResource.StateRHI.Reference);
          }
          if ((FRHIResource *)this_00.Reference != (FRHIResource *)0x0) {
            FRHIResource::Release((FRHIResource *)this_00.Reference);
          }
        }
        local_a0.SourceTextureIndex =
             (**(code **)(((param_1->InputTextureData).field0_0x0.DebugPtr)->_padding_ + 0x4c0))();
        param_1->bReadbackDispatched = true;
        local_a0.SourceDimensions.field0_0x0._s_0.X = iVar3;
        local_a0.SourceDimensions.field0_0x0._s_0.Y = iVar4;
        pTVar11 = FPCGContext::GetOrCreateHandle((FPCGContext *)param_1,&local_80);
        local_50 = pTVar11->Object;
        local_48 = (pTVar11->WeakReferenceCount).ReferenceController;
        (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar11->Object = (FPCGContextHandle *)0x0;
        local_58 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FPCGSaveTextureToAssetElement::ReadbackInputTexture'::`5'::<lambda_1>,0,0>
                    ::_vftable_;
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FPCGSaveTextureToAssetElement::ReadbackInputTexture'::__l5::<lambda_1>,void,void_*,int,int>
                      ::Call;
        local_40 = (undefined ***)0x0;
        FPCGTextureReadbackInterface::Dispatch
                  (&local_a0,(TFunction<void___cdecl(void_*,int,int)> *)local_68);
        if (local_68[0] != (code *)0x0) {
          pppuVar12 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar12 = local_40;
          }
          (*(code *)(*pppuVar12)[2])();
        }
        if (local_80.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_80.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_80.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_80.WeakReferenceCount.ReferenceController,1);
          }
        }
        if ((FRHIResource *)local_a0.SourceSampler.Reference != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)local_a0.SourceSampler.Reference);
        }
        if (local_a0.SourceTexture.Reference != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_a0.SourceTexture.Reference);
        }
        if (local_a8 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_a8);
        }
        goto LAB_149c3272a;
      }
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7392259017067724989>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSaveTextureToAsset.cpp"
                         ,0xbd,"TextureRHI");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
LAB_149c325c5:
    uVar9 = 1;
  }
  else {
LAB_149c3272a:
    uVar9 = param_1->bReadbackComplete;
  }
LAB_149c32731:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar9;
}

