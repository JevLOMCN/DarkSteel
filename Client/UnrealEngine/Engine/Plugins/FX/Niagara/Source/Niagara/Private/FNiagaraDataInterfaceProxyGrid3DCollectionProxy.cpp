// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// GetDispatchArgs @ 14917df70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyGrid3DCollectionProxy::GetDispatchArgs
          (FNiagaraDataInterfaceProxyGrid3DCollectionProxy *this,
          FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FGrid3DCollectionRWInstanceData_RenderThread *)0x0) {
    if (pFVar1->OtherProxy != (FNiagaraDataInterfaceProxy *)0x0) {
      pFVar1 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
               ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                       *)(pFVar1->OtherProxy + 1),param_1->SystemInstanceID);
    }
    FNDIGpuComputeDispatchArgsGenContext::SetDirect(param_1,&pFVar1->NumCells,0xffffffff);
    return;
  }
  return;
}

// PostSimulate @ 149188f30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyGrid3DCollectionProxy::PostSimulate
          (FNiagaraDataInterfaceProxyGrid3DCollectionProxy *this,
          FNDIGpuComputePostSimulateContext *param_1)

{
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar1;
  ulonglong *puVar2;
  int iVar3;
  FRHITexture *pFVar4;
  FNiagaraPooledRWTexture *this_00;
  FNiagaraDataInterfaceProxy *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar10;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  FName *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pFVar10 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                    *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  pFVar4 = (pFVar10->RenderTargetToCopyTo).Reference;
  if (((pFVar4 != (FRHITexture *)0x0) &&
      (this_00 = pFVar10->CurrentData, this_00 != (FNiagaraPooledRWTexture *)0x0)) &&
     ((this_00->Texture).Reference != (IPooledRenderTarget *)0x0)) {
    FNiagaraPooledRWTexture::CopyToTexture
              (this_00,(FRDGBuilder *)param_1->_padding_,pFVar4,L"NiagaraRenderTargetToCopyTo");
  }
  if (param_1->bFinalPostSimulate != false) {
    FVar11 = (pFVar10->Buffers).AllocatorInstance.SecondaryData;
    iVar3 = (pFVar10->Buffers).ArrayNum;
    if (FVar11 == (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                   )0x0) {
      FVar11 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )&pFVar10->Buffers;
    }
    FVar1 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
             )((longlong)FVar11 + (longlong)iVar3 * 8);
    while( true ) {
      if ((pFVar10->Buffers).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar11 == FVar1) break;
      FNiagaraPooledRWTexture::EndGraphUsage(*(FNiagaraPooledRWTexture **)FVar11);
      FVar11 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )((longlong)FVar11 + 8);
    }
    pFVar5 = pFVar10->OtherProxy;
    if (pFVar5 != (FNiagaraDataInterfaceProxy *)0x0) {
      uVar6 = param_1->SystemInstanceID;
      if (pFVar5[1].SourceDIName.ComparisonIndex.Value !=
          *(uint *)((longlong)&pFVar5[4]._padding_ + 4)) {
        pFVar14 = (FName *)pFVar5[5]._padding_;
        if ((FName *)pFVar5[5]._padding_ == (FName *)0x0) {
          pFVar14 = &pFVar5[4].SourceDIName;
        }
        uVar9 = (&pFVar14->ComparisonIndex)
                [(uVar6 >> 0x20) * 0x17 + uVar6 &
                 (ulonglong)(pFVar5[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
        if (uVar9 != 0xffffffff) {
          do {
            puVar12 = (ulonglong *)((longlong)(int)uVar9 * 0x120 + pFVar5[1]._padding_);
            if (*puVar12 == uVar6) {
              if (puVar12 == (ulonglong *)0x0) goto LAB_14918904f;
              goto LAB_149189075;
            }
            uVar9 = (uint)puVar12[0x23];
          } while (uVar9 != 0xffffffff);
        }
      }
      puVar12 = (ulonglong *)0x0;
LAB_14918904f:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_149189075:
      uVar6 = puVar12[0x19];
      puVar13 = (ulonglong *)puVar12[0x18];
      if ((ulonglong *)puVar12[0x18] == (ulonglong *)0x0) {
        puVar13 = puVar12 + 0x16;
      }
      puVar2 = puVar13 + (int)uVar6;
      while( true ) {
        if ((int)puVar12[0x19] != (int)uVar6) {
          `TCheckedPointerIterator<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (puVar13 == puVar2) break;
        FNiagaraPooledRWTexture::EndGraphUsage((FNiagaraPooledRWTexture *)*puVar13);
        puVar13 = puVar13 + 1;
      }
    }
  }
  return;
}

// PostStage @ 149189270

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

void __thiscall
FNiagaraDataInterfaceProxyGrid3DCollectionProxy::PostStage
          (FNiagaraDataInterfaceProxyGrid3DCollectionProxy *this,
          FNDIGpuComputePostStageContext *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar3;
  
  bVar1 = FNDIGpuComputePrePostStageContext::IsOutputStage
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  if (bVar1) {
    uVar2 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                      ((FNDIGpuComputePrePostStageContext *)param_1);
    pFVar3 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
             ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                     *)&this->SystemInstancesToProxyData_RT,uVar2);
    pFVar3->CurrentData = pFVar3->DestinationData;
    pFVar3->DestinationData = (FNiagaraPooledRWTexture *)0x0;
  }
  return;
}

// PreStage @ 1491893a0

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
FNiagaraDataInterfaceProxyGrid3DCollectionProxy::PreStage
          (FNiagaraDataInterfaceProxyGrid3DCollectionProxy *this,
          FNDIGpuComputePreStageContext *param_1)

{
  FRDGBuilder *pFVar1;
  longlong lVar2;
  bool bVar3;
  ulong64 uVar4;
  FGrid3DCollectionRWInstanceData_RenderThread *this_00;
  FRDGTextureUAV *pFVar5;
  TVector4<float>_u_0 local_28;
  FLinearColor local_18;
  
  bVar3 = FNDIGpuComputePrePostStageContext::IsOutputStage
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  if (bVar3) {
    uVar4 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                      ((FNDIGpuComputePrePostStageContext *)param_1);
    this_00 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
              ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                      *)&this->SystemInstancesToProxyData_RT,uVar4);
    pFVar1 = *(FRDGBuilder **)param_1;
    bVar3 = FNDIGpuComputePrePostStageContext::IsInputStage
                      ((FNDIGpuComputePrePostStageContext *)param_1);
    FGrid3DCollectionRWInstanceData_RenderThread::BeginSimulate(this_00,pFVar1,bVar3);
    lVar2 = *(longlong *)&param_1->field_0x20;
    if (((this_00->ClearBeforeNonIterationStage != false) &&
        (this_00->DestinationData != (FNiagaraPooledRWTexture *)0x0)) &&
       ((*(int *)(lVar2 + 0x10) != (this_00->NumCells).field0_0x0._s_0.X ||
        ((*(int *)(lVar2 + 0x14) != (this_00->NumCells).field0_0x0._s_0.Y ||
         (*(int *)(lVar2 + 0x18) != (this_00->NumCells).field0_0x0._s_0.Z)))))) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      FLinearColor::FLinearColor(&local_18,(TVector4<float> *)&local_28._s_0);
      pFVar5 = FNiagaraPooledRWTexture::GetOrCreateUAV(this_00->DestinationData,pFVar1);
      AddClearUAVPass(pFVar1,pFVar5,&local_18,Compute);
    }
  }
  return;
}

// ResetData @ 14918b520

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyGrid3DCollectionProxy::ResetData
          (FNiagaraDataInterfaceProxyGrid3DCollectionProxy *this,FNDIGpuComputeResetContext *param_1
          )

{
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar1;
  int iVar2;
  FRDGBuilder *pFVar3;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar4;
  FRDGTextureUAV *pFVar5;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar6;
  undefined1 local_res8 [8];
  TVector4<float>_u_0 local_38;
  FLinearColor local_28;
  
  pFVar4 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar4 != (FGrid3DCollectionRWInstanceData_RenderThread *)0x0) {
    iVar2 = (pFVar4->Buffers).ArrayNum;
    pFVar3 = (FRDGBuilder *)param_1->_padding_;
    FVar6 = (pFVar4->Buffers).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                  )0x0) {
      FVar6 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
               )&pFVar4->Buffers;
    }
    FVar1 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
             )((longlong)FVar6 + (longlong)iVar2 * 8);
    while( true ) {
      if ((pFVar4->Buffers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar6 == FVar1) break;
      local_38._0_8_ = 0;
      local_38._8_8_ = 0;
      FLinearColor::FLinearColor(&local_28,(TVector4<float> *)&local_38._s_0);
      pFVar5 = FNiagaraPooledRWTexture::GetOrCreateUAV(*(FNiagaraPooledRWTexture **)FVar6,pFVar3);
      AddClearUAVPass(pFVar3,pFVar5,&local_28,Compute);
      FVar6 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
               )((longlong)FVar6 + 8);
    }
  }
  return;
}

