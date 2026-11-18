// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticStruct @ 1493768e0

UScriptStruct * __cdecl FNiagaraVMExecutableData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableData,(UObject *)pUVar1,
                         L"NiagaraVMExecutableData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.OuterSingleton;
}

// FNiagaraVMExecutableData @ 149387700

FNiagaraVMExecutableData * __thiscall
FNiagaraVMExecutableData::FNiagaraVMExecutableData(FNiagaraVMExecutableData *this)

{
  undefined1 *puVar1;
  
  this->bReadsSignificanceIndex = 0;
  this->bNeedsGPUContextInit = 0;
  (this->ByteCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCode).Data.ArrayNum = 0;
  (this->ByteCode).Data.ArrayMax = 0;
  this->NumTempRegisters = 0;
  this->NumUserPtrs = 0;
  (this->CompileTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompileTags).ArrayNum = 0;
  (this->CompileTags).ArrayMax = 0;
  (this->ScriptLiterals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptLiterals).ArrayNum = 0;
  (this->ScriptLiterals).ArrayMax = 0;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  (this->DataUsage).bReadsAttributeData = false;
  (this->UObjectInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UObjectInfos).ArrayNum = 0;
  (this->UObjectInfos).ArrayMax = 0;
  (this->DataInterfaceInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaceInfo).ArrayNum = 0;
  (this->DataInterfaceInfo).ArrayMax = 0;
  (this->CalledVMExternalFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CalledVMExternalFunctions).ArrayNum = 0;
  (this->CalledVMExternalFunctions).ArrayMax = 0;
  (this->CalledVMExternalFunctionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CalledVMExternalFunctionBindings).ArrayNum = 0;
  (this->CalledVMExternalFunctionBindings).ArrayMax = 0;
  (this->ReadDataSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadDataSets).ArrayNum = 0;
  (this->ReadDataSets).ArrayMax = 0;
  (this->WriteDataSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WriteDataSets).ArrayNum = 0;
  (this->WriteDataSets).ArrayMax = 0;
  (this->StatScopes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatScopes).ArrayNum = 0;
  (this->StatScopes).ArrayMax = 0;
  (this->ShaderScriptParametersMetadata).DataInterfaceParamInfo.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ShaderScriptParametersMetadata).DataInterfaceParamInfo.ArrayNum = 0;
  (this->ShaderScriptParametersMetadata).DataInterfaceParamInfo.ArrayMax = 0;
  (this->ShaderScriptParametersMetadata).LooseMetadataNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ShaderScriptParametersMetadata).LooseMetadataNames.ArrayNum = 0;
  (this->ShaderScriptParametersMetadata).LooseMetadataNames.ArrayMax = 0;
  (this->ShaderScriptParametersMetadata).bExternalConstantsInterpolated = false;
  (this->ShaderScriptParametersMetadata).ExternalConstants.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ShaderScriptParametersMetadata).ExternalConstants.ArrayNum = 0;
  (this->ShaderScriptParametersMetadata).ExternalConstants.ArrayMax = 0;
  (this->ShaderScriptParametersMetadata).StructIncludeInfos.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ShaderScriptParametersMetadata).StructIncludeInfos.ArrayNum = 0;
  (this->ShaderScriptParametersMetadata).StructIncludeInfos.ArrayMax = 0;
  (this->ShaderScriptParametersMetadata).ShaderParametersMetadata.Object =
       (FShaderParametersMetadata *)0x0;
  (this->ShaderScriptParametersMetadata).ShaderParametersMetadata.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->LastCompileStatus = NCS_Unknown;
  (this->SimulationStageMetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationStageMetaData).ArrayNum = 0;
  (this->SimulationStageMetaData).ArrayMax = 0;
  (this->ExperimentalContextData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExperimentalContextData).ArrayNum = 0;
  (this->ExperimentalContextData).ArrayMax = 0;
  (this->ByteCode).UncompressedSize = -1;
  return this;
}

// ~FNiagaraVMExecutableData @ 14938a600

void __thiscall FNiagaraVMExecutableData::~FNiagaraVMExecutableData(FNiagaraVMExecutableData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ExperimentalContextData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSimulationStageMetaData,int>
            ((FSimulationStageMetaData *)(this->SimulationStageMetaData).AllocatorInstance.Data,
             (this->SimulationStageMetaData).ArrayNum);
  pFVar1 = (this->SimulationStageMetaData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraShaderScriptParametersMetadata::~FNiagaraShaderScriptParametersMetadata
            (&this->ShaderScriptParametersMetadata);
  pFVar1 = (this->StatScopes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraDataSetProperties,int>
            ((FNiagaraDataSetProperties *)(this->WriteDataSets).AllocatorInstance.Data,
             (this->WriteDataSets).ArrayNum);
  pFVar1 = (this->WriteDataSets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReadDataSets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
              *)(this->CalledVMExternalFunctionBindings).AllocatorInstance.Data,
             (this->CalledVMExternalFunctionBindings).ArrayNum);
  pFVar1 = (this->CalledVMExternalFunctionBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FVMExternalFunctionBindingInfo,int>
            ((FVMExternalFunctionBindingInfo *)
             (this->CalledVMExternalFunctions).AllocatorInstance.Data,
             (this->CalledVMExternalFunctions).ArrayNum);
  pFVar1 = (this->CalledVMExternalFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraScriptDataInterfaceCompileInfo,int>
            ((FNiagaraScriptDataInterfaceCompileInfo *)
             (this->DataInterfaceInfo).AllocatorInstance.Data,(this->DataInterfaceInfo).ArrayNum);
  pFVar1 = (this->DataInterfaceInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraScriptUObjectCompileInfo,int>
            ((FNiagaraScriptUObjectCompileInfo *)(this->UObjectInfos).AllocatorInstance.Data,
             (this->UObjectInfos).ArrayNum);
  pFVar1 = (this->UObjectInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScriptLiterals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraCompilerTag,int>
            ((FNiagaraCompilerTag *)(this->CompileTags).AllocatorInstance.Data,
             (this->CompileTags).ArrayNum);
  pFVar1 = (this->CompileTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ByteCode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14938b900

FNiagaraVMExecutableData * __thiscall
FNiagaraVMExecutableData::operator=
          (FNiagaraVMExecutableData *this,FNiagaraVMExecutableData *param_1)

{
  TArray<FNiagaraCompilerTag,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FNiagaraCompilerTag,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FNiagaraScriptUObjectCompileInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FNiagaraScriptUObjectCompileInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FNiagaraScriptDataInterfaceCompileInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FNiagaraScriptDataInterfaceCompileInfo,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FVMExternalFunctionBindingInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FVMExternalFunctionBindingInfo,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  TArray<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar14;
  TArray<FNiagaraDataSetID,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<FNiagaraDataSetID,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FNiagaraDataSetProperties,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<FNiagaraDataSetProperties,TSizedDefaultAllocator<32>_> *pTVar18;
  TArray<FNiagaraStatScope,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<FNiagaraStatScope,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<FSimulationStageMetaData,TSizedDefaultAllocator<32>_> *pTVar21;
  TArray<FSimulationStageMetaData,TSizedDefaultAllocator<32>_> *pTVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  
  if (this != param_1) {
    pFVar23 = (this->ByteCode).Data.AllocatorInstance.Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (this->ByteCode).Data.AllocatorInstance.Data = (param_1->ByteCode).Data.AllocatorInstance.Data;
    (param_1->ByteCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ByteCode).Data.ArrayNum = (param_1->ByteCode).Data.ArrayNum;
    (this->ByteCode).Data.ArrayMax = (param_1->ByteCode).Data.ArrayMax;
    (param_1->ByteCode).Data.ArrayNum = 0;
    (param_1->ByteCode).Data.ArrayMax = 0;
  }
  pTVar1 = &param_1->CompileTags;
  (this->ByteCode).UncompressedSize = (param_1->ByteCode).UncompressedSize;
  pTVar2 = &this->CompileTags;
  this->NumTempRegisters = param_1->NumTempRegisters;
  this->NumUserPtrs = param_1->NumUserPtrs;
  if (pTVar2 != pTVar1) {
    DestructItems<FNiagaraCompilerTag,int>
              ((FNiagaraCompilerTag *)(pTVar2->AllocatorInstance).Data,(this->CompileTags).ArrayNum)
    ;
    pFVar23 = (pTVar2->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CompileTags).ArrayNum = (param_1->CompileTags).ArrayNum;
    (this->CompileTags).ArrayMax = (param_1->CompileTags).ArrayMax;
    (param_1->CompileTags).ArrayNum = 0;
    (param_1->CompileTags).ArrayMax = 0;
  }
  pTVar3 = &param_1->ScriptLiterals;
  pTVar4 = &this->ScriptLiterals;
  if (pTVar4 != pTVar3) {
    pFVar23 = (pTVar4->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ScriptLiterals).ArrayNum = (param_1->ScriptLiterals).ArrayNum;
    (this->ScriptLiterals).ArrayMax = (param_1->ScriptLiterals).ArrayMax;
    (param_1->ScriptLiterals).ArrayNum = 0;
    (param_1->ScriptLiterals).ArrayMax = 0;
  }
  pTVar5 = &param_1->Attributes;
  pTVar6 = &this->Attributes;
  if (pTVar6 != pTVar5) {
    pFVar23 = (pTVar6->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Attributes).ArrayNum = (param_1->Attributes).ArrayNum;
    (this->Attributes).ArrayMax = (param_1->Attributes).ArrayMax;
    (param_1->Attributes).ArrayNum = 0;
    (param_1->Attributes).ArrayMax = 0;
  }
  pTVar7 = &param_1->UObjectInfos;
  pTVar8 = &this->UObjectInfos;
  (this->DataUsage).bReadsAttributeData = (param_1->DataUsage).bReadsAttributeData;
  if (pTVar8 != pTVar7) {
    DestructItems<FNiagaraScriptUObjectCompileInfo,int>
              ((FNiagaraScriptUObjectCompileInfo *)(pTVar8->AllocatorInstance).Data,
               (this->UObjectInfos).ArrayNum);
    pFVar23 = (pTVar8->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UObjectInfos).ArrayNum = (param_1->UObjectInfos).ArrayNum;
    (this->UObjectInfos).ArrayMax = (param_1->UObjectInfos).ArrayMax;
    (param_1->UObjectInfos).ArrayNum = 0;
    (param_1->UObjectInfos).ArrayMax = 0;
  }
  pTVar9 = &param_1->DataInterfaceInfo;
  pTVar10 = &this->DataInterfaceInfo;
  if (pTVar10 != pTVar9) {
    DestructItems<FNiagaraScriptDataInterfaceCompileInfo,int>
              ((FNiagaraScriptDataInterfaceCompileInfo *)(pTVar10->AllocatorInstance).Data,
               (this->DataInterfaceInfo).ArrayNum);
    pFVar23 = (pTVar10->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DataInterfaceInfo).ArrayNum = (param_1->DataInterfaceInfo).ArrayNum;
    (this->DataInterfaceInfo).ArrayMax = (param_1->DataInterfaceInfo).ArrayMax;
    (param_1->DataInterfaceInfo).ArrayNum = 0;
    (param_1->DataInterfaceInfo).ArrayMax = 0;
  }
  pTVar11 = &param_1->CalledVMExternalFunctions;
  pTVar12 = &this->CalledVMExternalFunctions;
  if (pTVar12 != pTVar11) {
    DestructItems<FVMExternalFunctionBindingInfo,int>
              ((FVMExternalFunctionBindingInfo *)(pTVar12->AllocatorInstance).Data,
               (this->CalledVMExternalFunctions).ArrayNum);
    pFVar23 = (pTVar12->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CalledVMExternalFunctions).ArrayNum = (param_1->CalledVMExternalFunctions).ArrayNum;
    (this->CalledVMExternalFunctions).ArrayMax = (param_1->CalledVMExternalFunctions).ArrayMax;
    (param_1->CalledVMExternalFunctions).ArrayNum = 0;
    (param_1->CalledVMExternalFunctions).ArrayMax = 0;
  }
  pTVar13 = &param_1->CalledVMExternalFunctionBindings;
  pTVar14 = &this->CalledVMExternalFunctionBindings;
  if (pTVar14 != pTVar13) {
    DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
              ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *)(pTVar14->AllocatorInstance).Data,
               (this->CalledVMExternalFunctionBindings).ArrayNum);
    pFVar23 = (pTVar14->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CalledVMExternalFunctionBindings).ArrayNum =
         (param_1->CalledVMExternalFunctionBindings).ArrayNum;
    (this->CalledVMExternalFunctionBindings).ArrayMax =
         (param_1->CalledVMExternalFunctionBindings).ArrayMax;
    (param_1->CalledVMExternalFunctionBindings).ArrayNum = 0;
    (param_1->CalledVMExternalFunctionBindings).ArrayMax = 0;
  }
  pTVar15 = &param_1->ReadDataSets;
  pTVar16 = &this->ReadDataSets;
  if (pTVar16 != pTVar15) {
    pFVar23 = (pTVar16->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar16->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ReadDataSets).ArrayNum = (param_1->ReadDataSets).ArrayNum;
    (this->ReadDataSets).ArrayMax = (param_1->ReadDataSets).ArrayMax;
    (param_1->ReadDataSets).ArrayNum = 0;
    (param_1->ReadDataSets).ArrayMax = 0;
  }
  pTVar17 = &param_1->WriteDataSets;
  pTVar18 = &this->WriteDataSets;
  if (pTVar18 != pTVar17) {
    DestructItems<FNiagaraDataSetProperties,int>
              ((FNiagaraDataSetProperties *)(pTVar18->AllocatorInstance).Data,
               (this->WriteDataSets).ArrayNum);
    pFVar23 = (pTVar18->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar18->AllocatorInstance).Data = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WriteDataSets).ArrayNum = (param_1->WriteDataSets).ArrayNum;
    (this->WriteDataSets).ArrayMax = (param_1->WriteDataSets).ArrayMax;
    (param_1->WriteDataSets).ArrayNum = 0;
    (param_1->WriteDataSets).ArrayMax = 0;
  }
  pTVar19 = &param_1->StatScopes;
  pTVar20 = &this->StatScopes;
  if (pTVar20 != pTVar19) {
    pFVar23 = (pTVar20->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar20->AllocatorInstance).Data = (pTVar19->AllocatorInstance).Data;
    (pTVar19->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->StatScopes).ArrayNum = (param_1->StatScopes).ArrayNum;
    (this->StatScopes).ArrayMax = (param_1->StatScopes).ArrayMax;
    (param_1->StatScopes).ArrayNum = 0;
    (param_1->StatScopes).ArrayMax = 0;
  }
  FNiagaraShaderScriptParametersMetadata::operator=
            (&this->ShaderScriptParametersMetadata,&param_1->ShaderScriptParametersMetadata);
  pTVar21 = &param_1->SimulationStageMetaData;
  pTVar22 = &this->SimulationStageMetaData;
  this->LastCompileStatus = param_1->LastCompileStatus;
  if (pTVar22 != pTVar21) {
    DestructItems<FSimulationStageMetaData,int>
              ((FSimulationStageMetaData *)(pTVar22->AllocatorInstance).Data,
               (this->SimulationStageMetaData).ArrayNum);
    pFVar23 = (pTVar22->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar22->AllocatorInstance).Data = (pTVar21->AllocatorInstance).Data;
    (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SimulationStageMetaData).ArrayNum = (param_1->SimulationStageMetaData).ArrayNum;
    (this->SimulationStageMetaData).ArrayMax = (param_1->SimulationStageMetaData).ArrayMax;
    (param_1->SimulationStageMetaData).ArrayNum = 0;
    (param_1->SimulationStageMetaData).ArrayMax = 0;
  }
  pTVar3 = &param_1->ExperimentalContextData;
  pTVar4 = &this->ExperimentalContextData;
  if (pTVar4 != pTVar3) {
    pFVar23 = (pTVar4->AllocatorInstance).Data;
    if (pFVar23 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar23);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ExperimentalContextData).ArrayNum = (param_1->ExperimentalContextData).ArrayNum;
    (this->ExperimentalContextData).ArrayMax = (param_1->ExperimentalContextData).ArrayMax;
    (param_1->ExperimentalContextData).ArrayNum = 0;
    (param_1->ExperimentalContextData).ArrayMax = 0;
  }
  uVar24 = (ZPULL(*(undefined4 *)&this->field_0x148,0,1) ^ param_1->bReadsSignificanceIndex) & 1 ^
           *(undefined4 *)&this->field_0x148;
  *(uint *)&this->field_0x148 = uVar24;
  *(uint *)&this->field_0x148 = (uVar24 ^ *(uint *)&param_1->field_0x148) & 2 ^ uVar24;
  return this;
}

// operator= @ 14938bcd0

FNiagaraVMExecutableData * __thiscall
FNiagaraVMExecutableData::operator=
          (FNiagaraVMExecutableData *this,FNiagaraVMExecutableData *param_1)

{
  TArray<FNiagaraCompilerTag,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FNiagaraScriptUObjectCompileInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FNiagaraScriptDataInterfaceCompileInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FVMExternalFunctionBindingInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  TArray<FNiagaraDataSetID,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FNiagaraDataSetProperties,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FNiagaraStatScope,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FSimulationStageMetaData,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  FNiagaraCompilerTag *pFVar13;
  FScriptContainerElement *pFVar14;
  FNiagaraScriptUObjectCompileInfo *pFVar15;
  FNiagaraScriptDataInterfaceCompileInfo *pFVar16;
  FVMExternalFunctionBindingInfo *pFVar17;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar18;
  FNiagaraDataSetProperties *pFVar19;
  FSimulationStageMetaData *pFVar20;
  uint uVar21;
  
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)this,
             (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)param_1);
  (this->ByteCode).UncompressedSize = (param_1->ByteCode).UncompressedSize;
  pTVar1 = &this->CompileTags;
  this->NumTempRegisters = param_1->NumTempRegisters;
  this->NumUserPtrs = param_1->NumUserPtrs;
  if (pTVar1 != &param_1->CompileTags) {
    DestructItems<FNiagaraCompilerTag,int>
              ((FNiagaraCompilerTag *)(pTVar1->AllocatorInstance).Data,(this->CompileTags).ArrayNum)
    ;
    iVar12 = (param_1->CompileTags).ArrayNum;
    piVar2 = &(this->CompileTags).ArrayMax;
    pFVar13 = (FNiagaraCompilerTag *)(param_1->CompileTags).AllocatorInstance.Data;
    (this->CompileTags).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar12,*piVar2,&pTVar1->AllocatorInstance,iVar12,piVar2);
      ConstructItems<FNiagaraCompilerTag,FNiagaraCompilerTag,int>
                ((pTVar1->AllocatorInstance).Data,pFVar13,iVar12);
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&this->ScriptLiterals,&param_1->ScriptLiterals);
  pTVar3 = &this->Attributes;
  if (pTVar3 != &param_1->Attributes) {
    iVar12 = (param_1->Attributes).ArrayNum;
    piVar2 = &(this->Attributes).ArrayMax;
    pFVar14 = (param_1->Attributes).AllocatorInstance.Data;
    (this->Attributes).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar12,*piVar2,&pTVar3->AllocatorInstance,iVar12,piVar2);
      if (iVar12 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar14,(longlong)iVar12 * 0xc);
      }
    }
  }
  pTVar4 = &this->UObjectInfos;
  (this->DataUsage).bReadsAttributeData = (param_1->DataUsage).bReadsAttributeData;
  if (pTVar4 != &param_1->UObjectInfos) {
    DestructItems<FNiagaraScriptUObjectCompileInfo,int>
              ((FNiagaraScriptUObjectCompileInfo *)(pTVar4->AllocatorInstance).Data,
               (this->UObjectInfos).ArrayNum);
    iVar12 = (param_1->UObjectInfos).ArrayNum;
    piVar2 = &(this->UObjectInfos).ArrayMax;
    pFVar15 = (FNiagaraScriptUObjectCompileInfo *)(param_1->UObjectInfos).AllocatorInstance.Data;
    (this->UObjectInfos).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar12,*piVar2,&pTVar4->AllocatorInstance,iVar12,piVar2);
      ConstructItems<FNiagaraScriptUObjectCompileInfo,FNiagaraScriptUObjectCompileInfo,int>
                ((pTVar4->AllocatorInstance).Data,pFVar15,iVar12);
    }
  }
  pTVar5 = &this->DataInterfaceInfo;
  if (pTVar5 != &param_1->DataInterfaceInfo) {
    DestructItems<FNiagaraScriptDataInterfaceCompileInfo,int>
              ((FNiagaraScriptDataInterfaceCompileInfo *)(pTVar5->AllocatorInstance).Data,
               (this->DataInterfaceInfo).ArrayNum);
    iVar12 = (param_1->DataInterfaceInfo).ArrayNum;
    piVar2 = &(this->DataInterfaceInfo).ArrayMax;
    pFVar16 = (FNiagaraScriptDataInterfaceCompileInfo *)
              (param_1->DataInterfaceInfo).AllocatorInstance.Data;
    (this->DataInterfaceInfo).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar12,*piVar2,&pTVar5->AllocatorInstance,iVar12,piVar2);
      ConstructItems<FNiagaraScriptDataInterfaceCompileInfo,FNiagaraScriptDataInterfaceCompileInfo,int>
                ((pTVar5->AllocatorInstance).Data,pFVar16,iVar12);
    }
  }
  pTVar6 = &this->CalledVMExternalFunctions;
  if (pTVar6 != &param_1->CalledVMExternalFunctions) {
    DestructItems<FVMExternalFunctionBindingInfo,int>
              ((FVMExternalFunctionBindingInfo *)(pTVar6->AllocatorInstance).Data,
               (this->CalledVMExternalFunctions).ArrayNum);
    iVar12 = (param_1->CalledVMExternalFunctions).ArrayNum;
    piVar2 = &(this->CalledVMExternalFunctions).ArrayMax;
    pFVar17 = (FVMExternalFunctionBindingInfo *)
              (param_1->CalledVMExternalFunctions).AllocatorInstance.Data;
    (this->CalledVMExternalFunctions).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar12,*piVar2,&pTVar6->AllocatorInstance,iVar12,piVar2);
      ConstructItems<FVMExternalFunctionBindingInfo,FVMExternalFunctionBindingInfo,int>
                ((pTVar6->AllocatorInstance).Data,pFVar17,iVar12);
    }
  }
  pTVar7 = &this->CalledVMExternalFunctionBindings;
  if (pTVar7 != &param_1->CalledVMExternalFunctionBindings) {
    DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
              ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *)(pTVar7->AllocatorInstance).Data,(this->CalledVMExternalFunctionBindings).ArrayNum
              );
    iVar12 = (param_1->CalledVMExternalFunctionBindings).ArrayNum;
    piVar2 = &(this->CalledVMExternalFunctionBindings).ArrayMax;
    pTVar18 = (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               *)(param_1->CalledVMExternalFunctionBindings).AllocatorInstance.Data;
    (this->CalledVMExternalFunctionBindings).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar12,*piVar2,&pTVar7->AllocatorInstance,iVar12,piVar2);
      ConstructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
                ((pTVar7->AllocatorInstance).Data,pTVar18,iVar12);
    }
  }
  pTVar8 = &this->ReadDataSets;
  if (pTVar8 != &param_1->ReadDataSets) {
    iVar12 = (param_1->ReadDataSets).ArrayNum;
    piVar2 = &(this->ReadDataSets).ArrayMax;
    pFVar14 = (param_1->ReadDataSets).AllocatorInstance.Data;
    (this->ReadDataSets).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar12,*piVar2,&pTVar8->AllocatorInstance,iVar12,piVar2);
      if (iVar12 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar14,(longlong)iVar12 * 0xc);
      }
    }
  }
  pTVar9 = &this->WriteDataSets;
  if (pTVar9 != &param_1->WriteDataSets) {
    DestructItems<FNiagaraDataSetProperties,int>
              ((FNiagaraDataSetProperties *)(pTVar9->AllocatorInstance).Data,
               (this->WriteDataSets).ArrayNum);
    iVar12 = (param_1->WriteDataSets).ArrayNum;
    piVar2 = &(this->WriteDataSets).ArrayMax;
    pFVar19 = (FNiagaraDataSetProperties *)(param_1->WriteDataSets).AllocatorInstance.Data;
    (this->WriteDataSets).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar12,*piVar2,&pTVar9->AllocatorInstance,iVar12,piVar2);
      ConstructItems<FNiagaraDataSetProperties,FNiagaraDataSetProperties,int>
                ((pTVar9->AllocatorInstance).Data,pFVar19,iVar12);
    }
  }
  pTVar10 = &this->StatScopes;
  if (pTVar10 != &param_1->StatScopes) {
    iVar12 = (param_1->StatScopes).ArrayNum;
    piVar2 = &(this->StatScopes).ArrayMax;
    pFVar14 = (param_1->StatScopes).AllocatorInstance.Data;
    (this->StatScopes).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar12,*piVar2,&pTVar10->AllocatorInstance,iVar12,piVar2);
      if (iVar12 != 0) {
        memcpy((pTVar10->AllocatorInstance).Data,pFVar14,(longlong)iVar12 << 4);
      }
    }
  }
  FNiagaraShaderScriptParametersMetadata::operator=
            (&this->ShaderScriptParametersMetadata,&param_1->ShaderScriptParametersMetadata);
  pTVar11 = &this->SimulationStageMetaData;
  this->LastCompileStatus = param_1->LastCompileStatus;
  if (pTVar11 != &param_1->SimulationStageMetaData) {
    DestructItems<FSimulationStageMetaData,int>
              ((FSimulationStageMetaData *)(pTVar11->AllocatorInstance).Data,
               (this->SimulationStageMetaData).ArrayNum);
    iVar12 = (param_1->SimulationStageMetaData).ArrayNum;
    piVar2 = &(this->SimulationStageMetaData).ArrayMax;
    pFVar20 = (FSimulationStageMetaData *)(param_1->SimulationStageMetaData).AllocatorInstance.Data;
    (this->SimulationStageMetaData).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,iVar12,*piVar2,&pTVar11->AllocatorInstance,iVar12,piVar2);
      ConstructItems<FSimulationStageMetaData,FSimulationStageMetaData,int>
                ((pTVar11->AllocatorInstance).Data,pFVar20,iVar12);
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExperimentalContextData,&param_1->ExperimentalContextData);
  uVar21 = (ZPULL(*(undefined4 *)&this->field_0x148,0,1) ^ param_1->bReadsSignificanceIndex) & 1 ^
           *(undefined4 *)&this->field_0x148;
  *(uint *)&this->field_0x148 = uVar21;
  *(uint *)&this->field_0x148 = (uVar21 ^ *(uint *)&param_1->field_0x148) & 2 ^ uVar21;
  return this;
}

// HasByteCode @ 1493a83c0

bool __thiscall FNiagaraVMExecutableData::HasByteCode(FNiagaraVMExecutableData *this)

{
  return (this->ExperimentalContextData).ArrayNum != 0;
}

// IsValid @ 1493aa700

bool __thiscall FNiagaraVMExecutableData::IsValid(FNiagaraVMExecutableData *this)

{
  return this->LastCompileStatus != NCS_Unknown;
}

// Reset @ 1493b51b0

void __thiscall FNiagaraVMExecutableData::Reset(FNiagaraVMExecutableData *this)

{
  FNiagaraVMExecutableData *pFVar1;
  FNiagaraVMExecutableData local_158;
  
  pFVar1 = FNiagaraVMExecutableData(&local_158);
  operator=(this,pFVar1);
  ~FNiagaraVMExecutableData(&local_158);
  return;
}

// SerializeData @ 1493b61c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraVMExecutableData::SerializeData
          (FNiagaraVMExecutableData *this,FArchive *param_1,bool param_2)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar4;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableData,(UObject *)pUVar3,
                         L"NiagaraVMExecutableData");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.OuterSingleton;
  pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FNiagaraVMExecutableData.OuterSingleton)->
                      _padding_ + 0x2e0);
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
  FVar4 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1c0 = 0;
  local_1c8 = 0;
  (*pcVar1)(pUVar2,*(undefined8 *)FVar4,this,pUVar2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  return;
}

