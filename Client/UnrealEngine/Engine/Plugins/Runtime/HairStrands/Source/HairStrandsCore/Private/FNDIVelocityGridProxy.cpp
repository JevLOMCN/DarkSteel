// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 7

// ConsumePerInstanceDataFromGameThread @ 14e0da980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDIVelocityGridProxy::ConsumePerInstanceDataFromGameThread
          (FNDIVelocityGridProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FNDIVelocityGridData *pFVar4;
  FString local_18;
  
  pFVar4 = TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
                       *)&this->SystemInstancesToProxyData,
                      (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  if (pFVar4 == (FNDIVelocityGridData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_28723985361403336>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceVelocityGrid.cpp"
                       ,0x238,"TargetData");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < (byte)LogVelocityGrid._0_1_) {
      FNiagaraUtilities::SystemInstanceIDToString(&local_18,*param_2);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVelocityGrid);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    dVar2 = *(double *)((longlong)param_1 + 0x28);
    (pFVar4->WorldTransform).M[0][0] = *(double *)((longlong)param_1 + 0x20);
    (pFVar4->WorldTransform).M[0][1] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0x38);
    (pFVar4->WorldTransform).M[0][2] = *(double *)((longlong)param_1 + 0x30);
    (pFVar4->WorldTransform).M[0][3] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0x48);
    (pFVar4->WorldTransform).M[1][0] = *(double *)((longlong)param_1 + 0x40);
    (pFVar4->WorldTransform).M[1][1] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0x58);
    (pFVar4->WorldTransform).M[1][2] = *(double *)((longlong)param_1 + 0x50);
    (pFVar4->WorldTransform).M[1][3] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0x68);
    (pFVar4->WorldTransform).M[2][0] = *(double *)((longlong)param_1 + 0x60);
    (pFVar4->WorldTransform).M[2][1] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0x78);
    (pFVar4->WorldTransform).M[2][2] = *(double *)((longlong)param_1 + 0x70);
    (pFVar4->WorldTransform).M[2][3] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0x88);
    (pFVar4->WorldTransform).M[3][0] = *(double *)((longlong)param_1 + 0x80);
    (pFVar4->WorldTransform).M[3][1] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0x98);
    (pFVar4->WorldTransform).M[3][2] = *(double *)((longlong)param_1 + 0x90);
    (pFVar4->WorldTransform).M[3][3] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0xa8);
    (pFVar4->WorldInverse).M[0][0] = *(double *)((longlong)param_1 + 0xa0);
    (pFVar4->WorldInverse).M[0][1] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0xb8);
    (pFVar4->WorldInverse).M[0][2] = *(double *)((longlong)param_1 + 0xb0);
    (pFVar4->WorldInverse).M[0][3] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 200);
    (pFVar4->WorldInverse).M[1][0] = *(double *)((longlong)param_1 + 0xc0);
    (pFVar4->WorldInverse).M[1][1] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0xd8);
    (pFVar4->WorldInverse).M[1][2] = *(double *)((longlong)param_1 + 0xd0);
    (pFVar4->WorldInverse).M[1][3] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0xe8);
    (pFVar4->WorldInverse).M[2][0] = *(double *)((longlong)param_1 + 0xe0);
    (pFVar4->WorldInverse).M[2][1] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0xf8);
    (pFVar4->WorldInverse).M[2][2] = *(double *)((longlong)param_1 + 0xf0);
    (pFVar4->WorldInverse).M[2][3] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0x108);
    (pFVar4->WorldInverse).M[3][0] = *(double *)((longlong)param_1 + 0x100);
    (pFVar4->WorldInverse).M[3][1] = dVar2;
    dVar2 = *(double *)((longlong)param_1 + 0x118);
    (pFVar4->WorldInverse).M[3][2] = *(double *)((longlong)param_1 + 0x110);
    (pFVar4->WorldInverse).M[3][3] = dVar2;
    *(undefined8 *)&(pFVar4->GridSize).field0_0x0 = *(undefined8 *)param_1;
    (pFVar4->GridSize).field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 8);
    pFVar4->DestinationGridBuffer = *(FNDIVelocityGridBuffer **)((longlong)param_1 + 0x128);
    pFVar4->CurrentGridBuffer = *(FNDIVelocityGridBuffer **)((longlong)param_1 + 0x120);
  }
  return;
}

// GetDispatchArgs @ 14e0e9bf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNDIVelocityGridProxy::GetDispatchArgs
          (FNDIVelocityGridProxy *this,FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FNDIVelocityGridData *pFVar1;
  TIntVector3<int>_u_0 local_18;
  
  pFVar1 = TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
                   *)&this->SystemInstancesToProxyData,param_1->SystemInstanceID);
  if (pFVar1 != (FNDIVelocityGridData *)0x0) {
    local_18._s_0.X = (pFVar1->GridSize).field0_0x0._s_0.X + 1;
    local_18._s_0.Y = (pFVar1->GridSize).field0_0x0._s_0.Y + 1;
    local_18._s_0.Z = (pFVar1->GridSize).field0_0x0._s_0.Z + 1;
    FNDIGpuComputeDispatchArgsGenContext::SetDirect
              (param_1,(TIntVector3<int> *)&local_18._s_0,0xffffffff);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14e0f3f70

int __thiscall
FNDIVelocityGridProxy::PerInstanceDataPassedToRenderThreadSize(FNDIVelocityGridProxy *this)

{
  return 0x130;
}

// PostSimulate @ 14e0f47d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNDIVelocityGridProxy::PostSimulate
          (FNDIVelocityGridProxy *this,FNDIGpuComputePostSimulateContext *param_1)

{
  FNDIVelocityGridData *pFVar1;
  FNiagaraPooledRWBuffer *pFVar2;
  
  if ((param_1->bFinalPostSimulate != false) &&
     (pFVar1 = TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
               ::Find((TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
                       *)&this->SystemInstancesToProxyData,param_1->SystemInstanceID),
     pFVar1 != (FNDIVelocityGridData *)0x0)) {
    pFVar2 = &pFVar1->CurrentGridBuffer->GridDataBuffer;
    if ((pFVar2->Buffer).Reference != (FRDGPooledBuffer *)0x0) {
      FNiagaraPooledRWBuffer::EndGraphUsage(pFVar2);
    }
    pFVar2 = &pFVar1->DestinationGridBuffer->GridDataBuffer;
    if ((pFVar2->Buffer).Reference != (FRDGPooledBuffer *)0x0) {
      FNiagaraPooledRWBuffer::EndGraphUsage(pFVar2);
      return;
    }
  }
  return;
}

// PostStage @ 14e0f4840

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
FNDIVelocityGridProxy::PostStage
          (FNDIVelocityGridProxy *this,FNDIGpuComputePostStageContext *param_1)

{
  ulong64 uVar1;
  FNDIVelocityGridData *pFVar2;
  
  uVar1 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar2 = TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
                   *)&this->SystemInstancesToProxyData,uVar1);
  if (pFVar2 != (FNDIVelocityGridData *)0x0) {
    CopyTexture(*(FRDGBuilder **)param_1,*(Type *)(*(longlong *)&param_1->field_0x8 + 0x34),
                pFVar2->DestinationGridBuffer,pFVar2->CurrentGridBuffer,&pFVar2->GridSize);
  }
  return;
}

// PreStage @ 14e0f4a30

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
FNDIVelocityGridProxy::PreStage(FNDIVelocityGridProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  ulong64 uVar1;
  FNDIVelocityGridData *pFVar2;
  
  uVar1 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar2 = TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
                   *)&this->SystemInstancesToProxyData,uVar1);
  if ((pFVar2 != (FNDIVelocityGridData *)0x0) && ((**(byte **)&param_1->field_0x20 & 1) != 0)) {
    ClearTexture(*(FRDGBuilder **)param_1,pFVar2->DestinationGridBuffer,&pFVar2->GridSize);
  }
  return;
}

// ResetData @ 14e0f5ae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNDIVelocityGridProxy::ResetData(FNDIVelocityGridProxy *this,FNDIGpuComputeResetContext *param_1)

{
  FNDIVelocityGridData *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
                   *)&this->SystemInstancesToProxyData,param_1->SystemInstanceID);
  if (((pFVar1 != (FNDIVelocityGridData *)0x0) &&
      (pFVar1->DestinationGridBuffer != (FNDIVelocityGridBuffer *)0x0)) &&
     (pFVar1->CurrentGridBuffer != (FNDIVelocityGridBuffer *)0x0)) {
    ClearTexture((FRDGBuilder *)param_1->_padding_,pFVar1->DestinationGridBuffer,&pFVar1->GridSize);
    ClearTexture((FRDGBuilder *)param_1->_padding_,pFVar1->CurrentGridBuffer,&pFVar1->GridSize);
  }
  return;
}

