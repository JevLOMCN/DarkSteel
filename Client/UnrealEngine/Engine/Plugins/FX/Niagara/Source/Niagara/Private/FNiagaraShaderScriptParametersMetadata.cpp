// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// operator= @ 14938b150

FNiagaraShaderScriptParametersMetadata * __thiscall
FNiagaraShaderScriptParametersMetadata::operator=
          (FNiagaraShaderScriptParametersMetadata *this,
          FNiagaraShaderScriptParametersMetadata *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FNiagaraShaderScriptExternalConstant,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FNiagaraShaderScriptExternalConstant,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FNiagaraDataInterfaceStructIncludeInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FNiagaraDataInterfaceStructIncludeInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  TSharedPtr<FShaderParametersMetadata,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  
  if (this != param_1) {
    DestructItems<FNiagaraDataInterfaceGPUParamInfo,int>
              ((FNiagaraDataInterfaceGPUParamInfo *)
               (this->DataInterfaceParamInfo).AllocatorInstance.Data,
               (this->DataInterfaceParamInfo).ArrayNum);
    pFVar8 = (this->DataInterfaceParamInfo).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->DataInterfaceParamInfo).AllocatorInstance.Data =
         (param_1->DataInterfaceParamInfo).AllocatorInstance.Data;
    (param_1->DataInterfaceParamInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DataInterfaceParamInfo).ArrayNum = (param_1->DataInterfaceParamInfo).ArrayNum;
    (this->DataInterfaceParamInfo).ArrayMax = (param_1->DataInterfaceParamInfo).ArrayMax;
    (param_1->DataInterfaceParamInfo).ArrayNum = 0;
    (param_1->DataInterfaceParamInfo).ArrayMax = 0;
  }
  pTVar1 = &param_1->LooseMetadataNames;
  pTVar2 = &this->LooseMetadataNames;
  if (pTVar2 != pTVar1) {
    DestructItems<FString,int>
              ((FString *)(pTVar2->AllocatorInstance).Data,(this->LooseMetadataNames).ArrayNum);
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LooseMetadataNames).ArrayNum = (param_1->LooseMetadataNames).ArrayNum;
    (this->LooseMetadataNames).ArrayMax = (param_1->LooseMetadataNames).ArrayMax;
    (param_1->LooseMetadataNames).ArrayNum = 0;
    (param_1->LooseMetadataNames).ArrayMax = 0;
  }
  pTVar3 = &param_1->ExternalConstants;
  pTVar4 = &this->ExternalConstants;
  this->bExternalConstantsInterpolated = param_1->bExternalConstantsInterpolated;
  if (pTVar4 != pTVar3) {
    DestructItems<FNiagaraShaderScriptExternalConstant,int>
              ((FNiagaraShaderScriptExternalConstant *)(pTVar4->AllocatorInstance).Data,
               (this->ExternalConstants).ArrayNum);
    pFVar8 = (pTVar4->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ExternalConstants).ArrayNum = (param_1->ExternalConstants).ArrayNum;
    (this->ExternalConstants).ArrayMax = (param_1->ExternalConstants).ArrayMax;
    (param_1->ExternalConstants).ArrayNum = 0;
    (param_1->ExternalConstants).ArrayMax = 0;
  }
  pTVar5 = &param_1->StructIncludeInfos;
  pTVar6 = &this->StructIncludeInfos;
  if (pTVar6 != pTVar5) {
    pFVar8 = (pTVar6->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->StructIncludeInfos).ArrayNum = (param_1->StructIncludeInfos).ArrayNum;
    (this->StructIncludeInfos).ArrayMax = (param_1->StructIncludeInfos).ArrayMax;
    (param_1->StructIncludeInfos).ArrayNum = 0;
    (param_1->StructIncludeInfos).ArrayMax = 0;
  }
  pTVar7 = &param_1->ShaderParametersMetadata;
  if (&this->ShaderParametersMetadata != pTVar7) {
    (this->ShaderParametersMetadata).Object = pTVar7->Object;
    pTVar7->Object = (FShaderParametersMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ShaderParametersMetadata).SharedReferenceCount,
               &(param_1->ShaderParametersMetadata).SharedReferenceCount);
  }
  return this;
}

// operator= @ 14938b2b0

FNiagaraShaderScriptParametersMetadata * __thiscall
FNiagaraShaderScriptParametersMetadata::operator=
          (FNiagaraShaderScriptParametersMetadata *this,
          FNiagaraShaderScriptParametersMetadata *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FNiagaraShaderScriptExternalConstant,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FNiagaraDataInterfaceStructIncludeInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FNiagaraDataInterfaceGPUParamInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  FNiagaraShaderScriptExternalConstant *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FShaderParametersMetadata *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  
  if (this != param_1) {
    DestructItems<FNiagaraDataInterfaceGPUParamInfo,int>
              ((FNiagaraDataInterfaceGPUParamInfo *)
               (this->DataInterfaceParamInfo).AllocatorInstance.Data,
               (this->DataInterfaceParamInfo).ArrayNum);
    iVar5 = (param_1->DataInterfaceParamInfo).ArrayNum;
    piVar1 = &(this->DataInterfaceParamInfo).ArrayMax;
    pFVar6 = (FNiagaraDataInterfaceGPUParamInfo *)
             (param_1->DataInterfaceParamInfo).AllocatorInstance.Data;
    (this->DataInterfaceParamInfo).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar5,*piVar1,(ForAnyElementType *)this,iVar5,piVar1);
      ConstructItems<FNiagaraDataInterfaceGPUParamInfo,FNiagaraDataInterfaceGPUParamInfo,int>
                ((this->DataInterfaceParamInfo).AllocatorInstance.Data,pFVar6,iVar5);
    }
  }
  pTVar2 = &this->LooseMetadataNames;
  if (pTVar2 != &param_1->LooseMetadataNames) {
    DestructItems<FString,int>
              ((FString *)(pTVar2->AllocatorInstance).Data,(this->LooseMetadataNames).ArrayNum);
    iVar5 = (param_1->LooseMetadataNames).ArrayNum;
    piVar1 = &(this->LooseMetadataNames).ArrayMax;
    pFVar7 = (param_1->LooseMetadataNames).AllocatorInstance.Data;
    (this->LooseMetadataNames).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar7,iVar5);
    }
  }
  pTVar3 = &this->ExternalConstants;
  this->bExternalConstantsInterpolated = param_1->bExternalConstantsInterpolated;
  if (pTVar3 != &param_1->ExternalConstants) {
    DestructItems<FNiagaraShaderScriptExternalConstant,int>
              ((FNiagaraShaderScriptExternalConstant *)(pTVar3->AllocatorInstance).Data,
               (this->ExternalConstants).ArrayNum);
    iVar5 = (param_1->ExternalConstants).ArrayNum;
    piVar1 = &(this->ExternalConstants).ArrayMax;
    pFVar8 = (FNiagaraShaderScriptExternalConstant *)
             (param_1->ExternalConstants).AllocatorInstance.Data;
    (this->ExternalConstants).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FNiagaraShaderScriptExternalConstant,FNiagaraShaderScriptExternalConstant,int>
                ((pTVar3->AllocatorInstance).Data,pFVar8,iVar5);
    }
  }
  pTVar4 = &this->StructIncludeInfos;
  if (pTVar4 != &param_1->StructIncludeInfos) {
    iVar5 = (param_1->StructIncludeInfos).ArrayNum;
    piVar1 = &(this->StructIncludeInfos).ArrayMax;
    pFVar7 = (param_1->StructIncludeInfos).AllocatorInstance.Data;
    (this->StructIncludeInfos).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar1,&pTVar4->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 4);
      }
    }
  }
  pTVar9 = (param_1->ShaderParametersMetadata).SharedReferenceCount.ReferenceController;
  pFVar10 = (param_1->ShaderParametersMetadata).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController;
  (this->ShaderParametersMetadata).Object = pFVar10;
  (this->ShaderParametersMetadata).SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return this;
}

