// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FShaderCompiledShaderInitializerType @ 145dee890

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

FShaderCompiledShaderInitializerType * __thiscall
FShaderCompiledShaderInitializerType::FShaderCompiledShaderInitializerType
          (FShaderCompiledShaderInitializerType *this,FShaderType *param_1,FParameters *param_2,
          int param_3,FShaderCompilerOutput *param_4,FSHAHash *param_5,FShaderPipelineType *param_6,
          FVertexFactoryType *param_7)

{
  TArray<FGenericShaderStat,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FGenericShaderStat *pFVar4;
  undefined8 uVar5;
  uint uVar6;
  FCompressedBuffer local_28;
  
  this->Type = param_1;
  this->Parameters = param_2;
  local_28.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
  local_28.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
  local_28.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
  local_28.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
  local_28.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
  local_28.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
  local_28.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
  local_28.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
  local_28.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (this->Target).field0_0x0 = (param_4->Target).field0_0x0;
  local_28.CompressedData.Segments.ArrayNum = 0;
  local_28.CompressedData.Segments.ArrayMax = 1;
  FShaderCode::FinalizeShaderCode(&param_4->ShaderCode,&local_28);
  FShaderCodeResource::GetCodeView(&(param_4->ShaderCode).ShaderCodeResource,&this->Code);
  this->ParameterMap = &param_4->ParameterMap;
  this->OutputHash = &param_4->OutputHash;
  uVar5 = *(undefined8 *)(param_5->Hash + 8);
  *(undefined8 *)(this->MaterialShaderMapHash).Hash = *(undefined8 *)param_5->Hash;
  *(undefined8 *)((this->MaterialShaderMapHash).Hash + 8) = uVar5;
  *(undefined4 *)((this->MaterialShaderMapHash).Hash + 0x10) = *(undefined4 *)(param_5->Hash + 0x10)
  ;
  this->ShaderPipeline = param_6;
  this->VertexFactoryType = param_7;
  this->NumInstructions = param_4->NumInstructions;
  this->NumTextureSamplers = param_4->NumTextureSamplers;
  uVar6 = FShaderCode::GetShaderCodeSize(&param_4->ShaderCode);
  this->PermutationId = param_3;
  pTVar1 = &this->ShaderStatistics;
  this->CodeSize = uVar6;
  piVar2 = &(this->ShaderStatistics).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_4->ShaderStatistics).ArrayNum;
  pFVar4 = (FGenericShaderStat *)(param_4->ShaderStatistics).AllocatorInstance.Data;
  (this->ShaderStatistics).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FGenericShaderStat,FGenericShaderStat,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

