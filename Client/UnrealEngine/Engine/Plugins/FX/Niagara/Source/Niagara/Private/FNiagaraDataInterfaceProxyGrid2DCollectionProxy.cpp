// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// GetDispatchArgs @ 14917def0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyGrid2DCollectionProxy::GetDispatchArgs
          (FNiagaraDataInterfaceProxyGrid2DCollectionProxy *this,
          FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar1;
  TIntVector3<int>_u_0 local_18;
  
  pFVar1 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FGrid2DCollectionRWInstanceData_RenderThread *)0x0) {
    if (pFVar1->OtherProxy == (FNiagaraDataInterfaceProxy *)0x0) {
      local_18._s_0.X = (pFVar1->NumCells).field0_0x0._s_0.X;
      local_18._s_0.Y = (pFVar1->NumCells).field0_0x0._s_0.Y;
    }
    else {
      pFVar1 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
               ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                       *)(pFVar1->OtherProxy + 1),param_1->SystemInstanceID);
      local_18._s_0.X = (pFVar1->NumCells).field0_0x0._s_0.X;
      local_18._s_0.Y = (pFVar1->NumCells).field0_0x0._s_0.Y;
    }
    local_18._s_0.Z = 1;
    FNDIGpuComputeDispatchArgsGenContext::SetDirect
              (param_1,(TIntVector3<int> *)&local_18._s_0,0xffffffff);
  }
  return;
}

// PostSimulate @ 149188b90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyGrid2DCollectionProxy::PostSimulate
          (FNiagaraDataInterfaceProxyGrid2DCollectionProxy *this,
          FNDIGpuComputePostSimulateContext *param_1)

{
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar1;
  ulonglong *puVar2;
  ETextureDimension EVar3;
  FRHITexture *pFVar4;
  FNiagaraPooledRWTexture *this_00;
  FRDGBuilder *this_01;
  FNiagaraDataInterfaceProxy *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar10;
  FRHITexture *pFVar11;
  longlong lVar12;
  FRDGTexture *pFVar13;
  TRefCountPtr<IPooledRenderTarget> TVar14;
  FName *pFVar15;
  int iVar16;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  undefined1 local_res8 [8];
  FNDIGpuComputePostSimulateContext *local_res10;
  FRDGTexture *local_res18;
  FGrid2DCollectionRWInstanceData_RenderThread *local_res20;
  longlong local_b8;
  undefined1 local_b0 [12];
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  TIntVector3<int>_u_0 local_88;
  undefined8 local_7c;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  
  local_res10 = param_1;
  pFVar10 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                    *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  pFVar4 = (pFVar10->RenderTargetToCopyTo).Reference;
  local_res20 = pFVar10;
  if (((pFVar4 != (FRHITexture *)0x0) &&
      (this_00 = pFVar10->CurrentData, this_00 != (FNiagaraPooledRWTexture *)0x0)) &&
     ((this_00->Texture).Reference != (IPooledRenderTarget *)0x0)) {
    EVar3 = (pFVar4->TextureDesc).Dimension;
    this_01 = (FRDGBuilder *)param_1->_padding_;
    pFVar11 = (FRHITexture *)0x0;
    if (EVar3 == Texture2DArray) {
      pFVar11 = pFVar4;
    }
    if (pFVar11 == (FRHITexture *)0x0) {
      pFVar11 = (FRHITexture *)0x0;
      if (EVar3 == Texture2D) {
        pFVar11 = pFVar4;
      }
      if (pFVar11 == (FRHITexture *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8350456814826943778>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                           ,0xade,"ProxyData->RenderTargetToCopyTo->GetTexture2D() != nullptr");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        FNiagaraGrid2DLegacyTiled2DInfo::FNiagaraGrid2DLegacyTiled2DInfo
                  ((FNiagaraGrid2DLegacyTiled2DInfo *)(local_b0 + 8),&pFVar10->NumCells,
                   pFVar10->NumAttributes);
        local_res18 = FNiagaraPooledRWTexture::GetOrCreateTexture(this_00,this_01);
        lVar12 = (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4);
        if ((*(char *)(lVar12 + 0x32) == '\0') &&
           (local_b8 = lVar12,
           bVar8 = `FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D'::__l3::<lambda_1>::operator()
                             (&local_b8), !bVar8)) {
          pFVar13 = FRDGBuilder::FindExternalTexture(this_01,pFVar4);
          if (pFVar13 == (FRDGTexture *)0x0) {
            TVar14 = CreateRenderTarget((FRHITexture *)local_b0,(wchar_t *)pFVar4);
            pFVar13 = FRDGBuilder::RegisterExternalTexture
                                (this_01,(TRefCountPtr<IPooledRenderTarget> *)TVar14.Reference,None)
            ;
            if ((longlong *)local_b0._0_8_ != (longlong *)0x0) {
              (**(code **)(*(longlong *)local_b0._0_8_ + 0x38))();
            }
          }
          iVar16 = 0;
          if (0 < local_a4) {
            do {
              local_74 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
              local_7c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
              local_60 = 0;
              local_5c = 1;
              local_70 = (iVar16 % local_98) * local_a0;
              local_6c = (iVar16 / local_98) * local_9c;
              local_54 = 0;
              local_50 = 1;
              local_88._s_0.X = local_a0;
              local_88._s_0.Y = local_9c;
              local_88._s_0.Z = 1;
              local_68 = 0;
              local_64 = iVar16;
              if ((*(int *)(lVar12 + 0x24) < local_70 + local_a0) ||
                 (*(int *)(lVar12 + 0x28) < local_6c + local_9c)) {
                local_res8[0] = 0;
                bVar8 = `FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D'::__l11::<lambda_2>::operator()
                                  (local_res8);
                if (bVar8) goto LAB_149188da0;
              }
              else {
LAB_149188da0:
                AddCopyTexturePass(this_01,local_res18,pFVar13,(FRHICopyTextureInfo *)&local_88._s_0
                                  );
              }
              iVar16 = iVar16 + 1;
              pFVar10 = local_res20;
              param_1 = local_res10;
            } while (iVar16 < local_a4);
          }
        }
      }
    }
    else {
      FNiagaraPooledRWTexture::CopyToTexture(this_00,this_01,pFVar4,L"NiagaraRenderTargetToCopyTo");
    }
  }
  if (param_1->bFinalPostSimulate != false) {
    FVar17 = (pFVar10->Buffers).AllocatorInstance.SecondaryData;
    iVar16 = (pFVar10->Buffers).ArrayNum;
    if (FVar17 == (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                   )0x0) {
      FVar17 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )&pFVar10->Buffers;
    }
    FVar1 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
             )((longlong)FVar17 + (longlong)iVar16 * 8);
    while( true ) {
      if ((pFVar10->Buffers).ArrayNum != iVar16) {
        local_res18 = (FRDGTexture *)((ulonglong)local_res18 & 0xffffffffffffff00);
        `TCheckedPointerIterator<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res18);
      }
      if (FVar17 == FVar1) break;
      FNiagaraPooledRWTexture::EndGraphUsage(*(FNiagaraPooledRWTexture **)FVar17);
      FVar17 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )((longlong)FVar17 + 8);
    }
    pFVar5 = pFVar10->OtherProxy;
    if (pFVar5 != (FNiagaraDataInterfaceProxy *)0x0) {
      uVar6 = local_res10->SystemInstanceID;
      if (pFVar5[1].SourceDIName.ComparisonIndex.Value !=
          *(uint *)((longlong)&pFVar5[4]._padding_ + 4)) {
        pFVar15 = (FName *)pFVar5[5]._padding_;
        if ((FName *)pFVar5[5]._padding_ == (FName *)0x0) {
          pFVar15 = &pFVar5[4].SourceDIName;
        }
        uVar9 = (&pFVar15->ComparisonIndex)
                [(ulonglong)(pFVar5[5].SourceDIName.ComparisonIndex.Value - 1) &
                 (uVar6 >> 0x20) * 0x17 + uVar6].Value;
        if (uVar9 != 0xffffffff) {
          do {
            puVar18 = (ulonglong *)((longlong)(int)uVar9 * 0xd0 + pFVar5[1]._padding_);
            if (*puVar18 == uVar6) {
              if (puVar18 == (ulonglong *)0x0) goto LAB_149188eae;
              goto LAB_149188ed4;
            }
            uVar9 = (uint)puVar18[0x19];
          } while (uVar9 != 0xffffffff);
        }
      }
      puVar18 = (ulonglong *)0x0;
LAB_149188eae:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_149188ed4:
      uVar6 = puVar18[0xc];
      puVar19 = (ulonglong *)puVar18[0xb];
      if ((ulonglong *)puVar18[0xb] == (ulonglong *)0x0) {
        puVar19 = puVar18 + 9;
      }
      puVar2 = puVar19 + (int)uVar6;
      while( true ) {
        if ((int)puVar18[0xc] != (int)uVar6) {
          `TCheckedPointerIterator<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_res20);
        }
        if (puVar19 == puVar2) break;
        FNiagaraPooledRWTexture::EndGraphUsage((FNiagaraPooledRWTexture *)*puVar19);
        puVar19 = puVar19 + 1;
      }
    }
  }
  return;
}

// PostStage @ 149189210

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
FNiagaraDataInterfaceProxyGrid2DCollectionProxy::PostStage
          (FNiagaraDataInterfaceProxyGrid2DCollectionProxy *this,
          FNDIGpuComputePostStageContext *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar3;
  
  bVar1 = FNDIGpuComputePrePostStageContext::IsOutputStage
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  if (bVar1) {
    uVar2 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                      ((FNDIGpuComputePrePostStageContext *)param_1);
    pFVar3 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
             ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                     *)&this->SystemInstancesToProxyData_RT,uVar2);
    pFVar3->CurrentData = pFVar3->DestinationData;
    pFVar3->DestinationData = (FNiagaraPooledRWTexture *)0x0;
  }
  return;
}

// PreStage @ 1491892d0

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
FNiagaraDataInterfaceProxyGrid2DCollectionProxy::PreStage
          (FNiagaraDataInterfaceProxyGrid2DCollectionProxy *this,
          FNDIGpuComputePreStageContext *param_1)

{
  FRDGBuilder *pFVar1;
  bool bVar2;
  ulong64 uVar3;
  FGrid2DCollectionRWInstanceData_RenderThread *this_00;
  FRDGTextureUAV *pFVar4;
  TVector4<float>_u_0 local_28;
  FLinearColor local_18;
  
  bVar2 = FNDIGpuComputePrePostStageContext::IsOutputStage
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  if (bVar2) {
    uVar3 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                      ((FNDIGpuComputePrePostStageContext *)param_1);
    this_00 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
              ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                      *)&this->SystemInstancesToProxyData_RT,uVar3);
    pFVar1 = *(FRDGBuilder **)param_1;
    bVar2 = FNDIGpuComputePrePostStageContext::IsInputStage
                      ((FNDIGpuComputePrePostStageContext *)param_1);
    FGrid2DCollectionRWInstanceData_RenderThread::BeginSimulate(this_00,pFVar1,bVar2);
    if (((this_00->ClearBeforeNonIterationStage != false) &&
        (this_00->DestinationData != (FNiagaraPooledRWTexture *)0x0)) &&
       ((*(int *)(*(longlong *)&param_1->field_0x20 + 0x10) != (this_00->NumCells).field0_0x0._s_0.X
        || (*(int *)(*(longlong *)&param_1->field_0x20 + 0x14) !=
            (this_00->NumCells).field0_0x0._s_0.Y)))) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      FLinearColor::FLinearColor(&local_18,(TVector4<float> *)&local_28._s_0);
      pFVar4 = FNiagaraPooledRWTexture::GetOrCreateUAV(this_00->DestinationData,pFVar1);
      AddClearUAVPass(pFVar1,pFVar4,&local_18,Compute);
    }
  }
  return;
}

// ResetData @ 14918b450

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyGrid2DCollectionProxy::ResetData
          (FNiagaraDataInterfaceProxyGrid2DCollectionProxy *this,FNDIGpuComputeResetContext *param_1
          )

{
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar1;
  int iVar2;
  FRDGBuilder *pFVar3;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar4;
  FRDGTextureUAV *pFVar5;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar6;
  undefined1 local_res8 [8];
  TVector4<float>_u_0 local_38;
  FLinearColor local_28;
  
  pFVar4 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar4 != (FGrid2DCollectionRWInstanceData_RenderThread *)0x0) {
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

