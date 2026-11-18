// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FShaderCompileJob @ 14850db00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderCompileJob * __thiscall
FShaderCompileJob::FShaderCompileJob
          (FShaderCompileJob *this,uint param_1,uint param_2,EShaderCompileJobPriority param_3,
          FShaderCompileJobKey *param_4)

{
  FVertexFactoryType *pFVar1;
  FShaderCompilerInput *pFVar2;
  FShaderCompilerOutput *pFVar3;
  undefined4 uVar4;
  
  FShaderCommonCompileJob::FShaderCommonCompileJob
            ((FShaderCommonCompileJob *)this,Single,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FShaderCompileJob__6B_;
  pFVar1 = param_4->VFType;
  (this->Key).ShaderType = param_4->ShaderType;
  (this->Key).VFType = pFVar1;
  uVar4 = *(undefined4 *)&param_4->field_0x14;
  (this->Key).PermutationId = param_4->PermutationId;
  *(undefined4 *)&(this->Key).field_0x14 = uVar4;
  (this->ShaderParameters).Object = (FParameters *)0x0;
  (this->ShaderParameters).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Input).Target = (FShaderTarget_u_0)0x9bc;
  (this->Input).ShaderFormat.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).ShaderFormat.Number = 0;
  *(undefined8 *)&(this->Input).CompressionFormat.Number = 0;
  *(undefined8 *)&(this->Input).ShaderPlatformName.Number = 0;
  (this->Input).PreferredShaderCodeFormat.Number = 0;
  (this->Input).VirtualSourceFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).VirtualSourceFilePath.Data.ArrayNum = 0;
  (this->Input).VirtualSourceFilePath.Data.ArrayMax = 0;
  (this->Input).EntryPointName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).EntryPointName.Data.ArrayNum = 0;
  (this->Input).EntryPointName.Data.ArrayMax = 0;
  (this->Input).ShaderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).ShaderName.Data.ArrayNum = 0;
  (this->Input).ShaderName.Data.ArrayMax = 0;
  (this->Input).SupportedHardwareMask = 0;
  (this->Input).DebugInfoFlags = Default;
  (this->Input).RequiredSymbols.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).RequiredSymbols.ArrayNum = 0;
  (this->Input).RequiredSymbols.ArrayMax = 0;
  (this->Input).UsedOutputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).UsedOutputs.ArrayNum = 0;
  (this->Input).UsedOutputs.ArrayMax = 0;
  (this->Input).DumpDebugInfoRootPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).DumpDebugInfoRootPath.Data.ArrayNum = 0;
  (this->Input).DumpDebugInfoRootPath.Data.ArrayMax = 0;
  (this->Input).DumpDebugInfoPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).DumpDebugInfoPath.Data.ArrayNum = 0;
  (this->Input).DumpDebugInfoPath.Data.ArrayMax = 0;
  (this->Input).DebugGroupName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).DebugGroupName.Data.ArrayNum = 0;
  (this->Input).DebugGroupName.Data.ArrayMax = 0;
  (this->Input).DebugExtension.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).DebugExtension.Data.ArrayNum = 0;
  (this->Input).DebugExtension.Data.ArrayMax = 0;
  (this->Input).DebugDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).DebugDescription.Data.ArrayNum = 0;
  (this->Input).DebugDescription.Data.ArrayMax = 0;
  (this->Input).Hash.Hash[0] = '\0';
  (this->Input).Hash.Hash[1] = '\0';
  (this->Input).Hash.Hash[2] = '\0';
  (this->Input).Hash.Hash[3] = '\0';
  (this->Input).Hash.Hash[4] = '\0';
  (this->Input).Hash.Hash[5] = '\0';
  (this->Input).Hash.Hash[6] = '\0';
  (this->Input).Hash.Hash[7] = '\0';
  pFVar2 = &this->Input;
  (pFVar2->Hash).Hash[8] = '\0';
  (pFVar2->Hash).Hash[9] = '\0';
  (pFVar2->Hash).Hash[10] = '\0';
  (pFVar2->Hash).Hash[0xb] = '\0';
  (pFVar2->Hash).Hash[0xc] = '\0';
  (pFVar2->Hash).Hash[0xd] = '\0';
  (pFVar2->Hash).Hash[0xe] = '\0';
  (pFVar2->Hash).Hash[0xf] = '\0';
  pFVar2 = &this->Input;
  (pFVar2->Hash).Hash[0x10] = '\0';
  (pFVar2->Hash).Hash[0x11] = '\0';
  (pFVar2->Hash).Hash[0x12] = '\0';
  (pFVar2->Hash).Hash[0x13] = '\0';
  (pFVar2->Hash).Hash[0x14] = '\0';
  (pFVar2->Hash).Hash[0x15] = '\0';
  (pFVar2->Hash).Hash[0x16] = '\0';
  (pFVar2->Hash).Hash[0x17] = '\0';
  pFVar2 = &this->Input;
  (pFVar2->Hash).Hash[0x18] = '\0';
  (pFVar2->Hash).Hash[0x19] = '\0';
  (pFVar2->Hash).Hash[0x1a] = '\0';
  (pFVar2->Hash).Hash[0x1b] = '\0';
  (pFVar2->Hash).Hash[0x1c] = '\0';
  (pFVar2->Hash).Hash[0x1d] = '\0';
  (pFVar2->Hash).Hash[0x1e] = '\0';
  (pFVar2->Hash).Hash[0x1f] = '\0';
  FShaderCompilerEnvironment::FShaderCompilerEnvironment(&(this->Input).Environment);
  (this->Input).SharedEnvironment.Reference = (FSharedShaderCompilerEnvironment *)0x0;
  (this->Input).RootParametersStructure = (FShaderParametersMetadata *)0x0;
  (this->Input).ExtraSettings.bExtractShaderSource = false;
  (this->Input).ExtraSettings.OfflineCompilerPath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Input).ExtraSettings.OfflineCompilerPath.Data.ArrayNum = 0;
  (this->Input).ExtraSettings.OfflineCompilerPath.Data.ArrayMax = 0;
  (this->Input).ExtraSettings.OfflineCompiler = Mali;
  (this->Input).ExtraSettings.GPUTarget.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Input).ExtraSettings.GPUTarget.Data.ArrayNum = 0;
  (this->Input).ExtraSettings.GPUTarget.Data.ArrayMax = 0;
  (this->Input).ExtraSettings.bDumpAll = false;
  (this->Input).ExtraSettings.bSaveCompilerStatsFiles = false;
  (this->Input).ExtraSettings.bMobileMultiView = false;
  (this->Input).bCompilingForShaderPipeline = false;
  (this->Input).bIncludeUsedOutputs = false;
  (this->Input).bBindlessEnabled = false;
  FShaderPreprocessOutput::FShaderPreprocessOutput(&this->PreprocessOutput);
  (this->SecondaryPreprocessOutput).Ptr = (FShaderPreprocessOutput *)0x0;
  *(undefined8 *)&(this->Output).ParameterMap.ParameterMap = 0;
  *(undefined8 *)&(this->Output).ParameterMap.ParameterMap.field_0x8 = 0;
  *(undefined8 *)&(this->Output).ParameterMap.ParameterMap.field_0x20 = 0;
  *(undefined4 *)&(this->Output).ParameterMap.ParameterMap.field_0x28 = 0;
  *(undefined4 *)&(this->Output).ParameterMap.ParameterMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->Output).ParameterMap.ParameterMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Output).ParameterMap.ParameterMap.field_0x34 = 0;
  *(undefined8 *)&(this->Output).ParameterMap.ParameterMap.field_0x40 = 0;
  *(undefined4 *)&(this->Output).ParameterMap.ParameterMap.field_0x48 = 0;
  (this->Output).Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Output).Errors.ArrayNum = 0;
  (this->Output).Errors.ArrayMax = 0;
  (this->Output).Target.field0_0x0.Packed = 0;
  (this->Output).ShaderCode.OptionalDataSize = 0;
  (this->Output).ShaderCode.ShaderCodeWithOptionalData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Output).ShaderCode.ShaderCodeWithOptionalData.ArrayNum = 0;
  (this->Output).ShaderCode.ShaderCodeWithOptionalData.ArrayMax = 0;
  (this->Output).ShaderCode.SymbolData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Output).ShaderCode.SymbolData.ArrayNum = 0;
  (this->Output).ShaderCode.SymbolData.ArrayMax = 0;
  (this->Output).ShaderCode.ShaderCodeResource.Header.Owner.Owner = (FBufferOwner *)0x0;
  (this->Output).ShaderCode.ShaderCodeResource.Code.Owner.Owner = (FBufferOwner *)0x0;
  *(ForElementType<FSharedBuffer> *)
   ((longlong)
    &(this->Output).ShaderCode.ShaderCodeResource.Symbols.CompressedData.Segments.AllocatorInstance
   + 8) = (ForElementType<FSharedBuffer>)0x0;
  (this->Output).ShaderCode.ShaderCodeResource.Symbols.CompressedData.Segments.ArrayNum = 0;
  *(undefined8 *)
   &(this->Output).ShaderCode.ShaderCodeResource.Symbols.CompressedData.Segments.ArrayMax = 1;
  (this->Output).ShaderCode.CompressionFormat.ComparisonIndex = 0;
  (this->Output).ShaderCode.CompressionFormat.Number = 0;
  (this->Output).ShaderCode.OodleCompressor = NotSet;
  (this->Output).ShaderCode.OodleLevel = None;
  (this->Output).ShaderCode.ShaderCodeSize = 0;
  (this->Output).OutputHash.Hash[0] = '\0';
  (this->Output).OutputHash.Hash[1] = '\0';
  (this->Output).OutputHash.Hash[2] = '\0';
  (this->Output).OutputHash.Hash[3] = '\0';
  (this->Output).OutputHash.Hash[4] = '\0';
  (this->Output).OutputHash.Hash[5] = '\0';
  (this->Output).OutputHash.Hash[6] = '\0';
  (this->Output).OutputHash.Hash[7] = '\0';
  pFVar3 = &this->Output;
  (pFVar3->OutputHash).Hash[8] = '\0';
  (pFVar3->OutputHash).Hash[9] = '\0';
  (pFVar3->OutputHash).Hash[10] = '\0';
  (pFVar3->OutputHash).Hash[0xb] = '\0';
  (pFVar3->OutputHash).Hash[0xc] = '\0';
  (pFVar3->OutputHash).Hash[0xd] = '\0';
  (pFVar3->OutputHash).Hash[0xe] = '\0';
  (pFVar3->OutputHash).Hash[0xf] = '\0';
  pFVar3 = &this->Output;
  (pFVar3->OutputHash).Hash[0x10] = '\0';
  (pFVar3->OutputHash).Hash[0x11] = '\0';
  (pFVar3->OutputHash).Hash[0x12] = '\0';
  (pFVar3->OutputHash).Hash[0x13] = '\0';
  (this->Output).ValidateInputHash.Hash[0] = '\0';
  (this->Output).ValidateInputHash.Hash[1] = '\0';
  (this->Output).ValidateInputHash.Hash[2] = '\0';
  (this->Output).ValidateInputHash.Hash[3] = '\0';
  (this->Output).ValidateInputHash.Hash[4] = '\0';
  (this->Output).ValidateInputHash.Hash[5] = '\0';
  (this->Output).ValidateInputHash.Hash[6] = '\0';
  (this->Output).ValidateInputHash.Hash[7] = '\0';
  pFVar3 = &this->Output;
  (pFVar3->ValidateInputHash).Hash[8] = '\0';
  (pFVar3->ValidateInputHash).Hash[9] = '\0';
  (pFVar3->ValidateInputHash).Hash[10] = '\0';
  (pFVar3->ValidateInputHash).Hash[0xb] = '\0';
  (pFVar3->ValidateInputHash).Hash[0xc] = '\0';
  (pFVar3->ValidateInputHash).Hash[0xd] = '\0';
  (pFVar3->ValidateInputHash).Hash[0xe] = '\0';
  (pFVar3->ValidateInputHash).Hash[0xf] = '\0';
  pFVar3 = &this->Output;
  (pFVar3->ValidateInputHash).Hash[0x10] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x11] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x12] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x13] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x14] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x15] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x16] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x17] = '\0';
  pFVar3 = &this->Output;
  (pFVar3->ValidateInputHash).Hash[0x18] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x19] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x1a] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x1b] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x1c] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x1d] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x1e] = '\0';
  (pFVar3->ValidateInputHash).Hash[0x1f] = '\0';
  (this->Output).bSucceeded = false;
  (this->Output).bSupportsQueryingUsedAttributes = false;
  (this->Output).bSerializingForCache = false;
  (this->Output).NumInstructions = 0;
  (this->Output).NumTextureSamplers = 0;
  (this->Output).CompileTime = 0.0;
  (this->Output).PreprocessTime = 0.0;
  (this->Output).UsedAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Output).UsedAttributes.ArrayNum = 0;
  (this->Output).UsedAttributes.ArrayMax = 0;
  (this->Output).ParametersStrideToValidate.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Output).ParametersStrideToValidate.ArrayNum = 0;
  (this->Output).ParametersStrideToValidate.ArrayMax = 0;
  (this->Output).ParametersSRVTypeToValidate.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Output).ParametersSRVTypeToValidate.ArrayNum = 0;
  (this->Output).ParametersSRVTypeToValidate.ArrayMax = 0;
  (this->Output).ParametersUAVTypeToValidate.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Output).ParametersUAVTypeToValidate.ArrayNum = 0;
  (this->Output).ParametersUAVTypeToValidate.ArrayMax = 0;
  (this->Output).ParametersUBSizeToValidate.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Output).ParametersUBSizeToValidate.ArrayNum = 0;
  (this->Output).ParametersUBSizeToValidate.ArrayMax = 0;
  (this->Output).ShaderDiagnosticDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Output).ShaderDiagnosticDatas.ArrayNum = 0;
  (this->Output).ShaderDiagnosticDatas.ArrayMax = 0;
  (this->Output).ModifiedShaderSource.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Output).ModifiedShaderSource.Data.ArrayNum = 0;
  (this->Output).ModifiedShaderSource.Data.ArrayMax = 0;
  (this->Output).ModifiedEntryPointName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Output).ModifiedEntryPointName.Data.ArrayNum = 0;
  (this->Output).ModifiedEntryPointName.Data.ArrayMax = 0;
  (this->Output).PlatformDebugData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Output).PlatformDebugData.ArrayNum = 0;
  (this->Output).PlatformDebugData.ArrayMax = 0;
  (this->Output).ShaderStatistics.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Output).ShaderStatistics.ArrayNum = 0;
  (this->Output).ShaderStatistics.ArrayMax = 0;
  (this->SecondaryOutput).Ptr = (FShaderCompilerOutput *)0x0;
  *(undefined8 *)&this->SharingPipelines = 0;
  *(undefined8 *)&(this->SharingPipelines).field_0x8 = 0;
  *(undefined8 *)&(this->SharingPipelines).field_0x20 = 0;
  *(undefined4 *)&(this->SharingPipelines).field_0x28 = 0;
  *(undefined4 *)&(this->SharingPipelines).field_0x2c = 0x80;
  *(undefined4 *)&(this->SharingPipelines).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SharingPipelines).field_0x34 = 0;
  *(undefined8 *)&(this->SharingPipelines).field_0x40 = 0;
  *(undefined4 *)&(this->SharingPipelines).field_0x48 = 0;
  return this;
}

