// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// ConsumePerInstanceDataFromGameThread @ 14e0da8b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNDIHairStrandsProxy::ConsumePerInstanceDataFromGameThread
          (FNDIHairStrandsProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNDIHairStrandsData *this_00;
  FString local_18;
  
  this_00 = TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
                        *)&this->SystemInstancesToProxyData,
                       (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  if (this_00 == (FNDIHairStrandsData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6480668172885164717>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                       ,0x2ad,"TargetData");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (4 < (byte)LogHairStrands._0_1_) {
      FNiagaraUtilities::SystemInstanceIDToString(&local_18,*param_2);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    FNDIHairStrandsData::CopyDatas(this_00,param_1);
  }
  return;
}

// DestroyPerInstanceData @ 14e0e4b80

void __thiscall
FNDIHairStrandsProxy::DestroyPerInstanceData(FNDIHairStrandsProxy *this,ulong64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                       ,0x2c4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<unsigned___int64,FNDIHairStrandsData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,FNDIHairStrandsData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>,FDefaultSetAllocator>
            *)&this->SystemInstancesToProxyData,*param_1);
  return;
}

// InitializePerInstanceData @ 14e0f2c80

void __thiscall
FNDIHairStrandsProxy::InitializePerInstanceData(FNDIHairStrandsProxy *this,ulong64 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulong64 *local_res10;
  
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,699,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *param_1;
  if (*(int *)&(this->SystemInstancesToProxyData).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SystemInstancesToProxyData).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SystemInstancesToProxyData).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + ((ulonglong)
                               (*(int *)&(this->SystemInstancesToProxyData).field_0x48 - 1) &
                              (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x450 + *(longlong *)&this->SystemInstancesToProxyData)
            == uVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SystemInstancesToProxyData.Contains(SystemInstance)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                             ,700,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x450 + 0x440 +
                        *(longlong *)&this->SystemInstancesToProxyData);
      } while (iVar4 != -1);
    }
  }
  local_res10 = param_1;
  TSet<TTuple<unsigned___int64,FNDIHairStrandsData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIHairStrandsData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>,FDefaultSetAllocator>
              *)&this->SystemInstancesToProxyData,&local_res8,(bool *)&local_res10);
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14e0f3f60

int __thiscall
FNDIHairStrandsProxy::PerInstanceDataPassedToRenderThreadSize(FNDIHairStrandsProxy *this)

{
  return 0x430;
}

// PostSimulate @ 14e0f4670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNDIHairStrandsProxy::PostSimulate
          (FNDIHairStrandsProxy *this,FNDIGpuComputePostSimulateContext *param_1)

{
  int *piVar1;
  int iVar2;
  FNDIHairStrandsBuffer *pFVar3;
  longlong lVar4;
  FNDIHairStrandsData *pFVar5;
  UObject *pUVar6;
  TRefCountPtr<FHairGroupInstance> TVar7;
  undefined8 *puVar8;
  undefined8 *local_res8;
  
  pFVar5 = TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
                   *)&this->SystemInstancesToProxyData,param_1->SystemInstanceID);
  if (((pFVar5 != (FNDIHairStrandsData *)0x0) &&
      (pFVar3 = pFVar5->HairStrandsBuffer, pFVar3 != (FNDIHairStrandsBuffer *)0x0)) &&
     ((int)pFVar3->_padding_ != -1)) {
    pUVar6 = FWeakObjectPtr::Get(&(pFVar5->HairGroupInstSource).WeakPtr);
    TVar7 = GetRefCountedHairGroupInstance((UGroomComponent *)&local_res8,(int)pUVar6);
    puVar8 = *(undefined8 **)TVar7.Reference;
    *(undefined8 *)TVar7.Reference = 0;
    if (local_res8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_res8 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (piVar1 == (int *)0x0) {
          local_res8 = (undefined8 *)0x0;
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
    if (((puVar8 != (undefined8 *)0x0) && (lVar4 = puVar8[4], lVar4 != 0)) &&
       ((*(int *)(lVar4 + 0x18) != -1 &&
        ((lVar4 = *(longlong *)(((ulonglong)*(uint *)(lVar4 + 0x198) + 3) * 0x20 + lVar4),
         lVar4 != 0 && (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 != 0)))))) {
      (**(code **)(*(longlong *)param_1->_padding_ + 0x138))
                ((longlong *)param_1->_padding_,param_1->_padding_,lVar4,0,1);
    }
    if (param_1->bFinalPostSimulate != false) {
      FNiagaraPooledRWBuffer::EndGraphUsage(&pFVar3->BoundingBoxBuffer);
      FNiagaraPooledRWBuffer::EndGraphUsage(&pFVar3->ParamsScaleBuffer);
    }
    if (puVar8 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar8 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (piVar1 == (int *)0x0) {
          puVar8 = (undefined8 *)0x0;
        }
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
    }
  }
  return;
}

// PreStage @ 14e0f48a0

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
FNDIHairStrandsProxy::PreStage(FNDIHairStrandsProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  int iVar1;
  FNDIHairStrandsBuffer *pFVar2;
  FRDGBuilder *this_00;
  ulong64 uVar3;
  FNDIHairStrandsData *pFVar4;
  FRDGBuffer *pFVar5;
  
  if ((**(byte **)&param_1->field_0x20 & 1) != 0) {
    uVar3 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                      ((FNDIGpuComputePrePostStageContext *)param_1);
    pFVar4 = TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
             ::Find((TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
                     *)&this->SystemInstancesToProxyData,uVar3);
    if ((pFVar4 != (FNDIHairStrandsData *)0x0) &&
       (pFVar2 = pFVar4->HairStrandsBuffer, pFVar2 != (FNDIHairStrandsBuffer *)0x0)) {
      iVar1 = (pFVar2->BoundingBoxOffsets).field0_0x0._s_0.X;
      (pFVar2->BoundingBoxOffsets).field0_0x0._s_0.X =
           (pFVar2->BoundingBoxOffsets).field0_0x0._s_0.Y;
      (pFVar2->BoundingBoxOffsets).field0_0x0._s_0.Y =
           (pFVar2->BoundingBoxOffsets).field0_0x0._s_0.Z;
      (pFVar2->BoundingBoxOffsets).field0_0x0._s_0.Z =
           (pFVar2->BoundingBoxOffsets).field0_0x0._s_0.W;
      (pFVar2->BoundingBoxOffsets).field0_0x0._s_0.W = iVar1;
      pFVar2 = pFVar4->HairStrandsBuffer;
      if ((pFVar2->bNeedResouces != false) &&
         ((pFVar2->ParamsScaleBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0)) {
        this_00 = *(FRDGBuilder **)param_1;
        FNiagaraPooledRWBuffer::InitializeInternal
                  (&pFVar2->ParamsScaleBuffer,this_00,L"ParamsScaleBuffer",PF_R32_FLOAT,4,0x80,None)
        ;
        pFVar5 = FNiagaraPooledRWBuffer::GetOrCreateBuffer(&pFVar2->ParamsScaleBuffer,this_00);
        FRDGBuilder::QueueBufferUpload(this_00,pFVar5,&pFVar2->ParamsScale,0x200,None);
      }
    }
  }
  return;
}

