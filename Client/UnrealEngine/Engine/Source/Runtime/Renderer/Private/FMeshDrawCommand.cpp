// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 17

// FMeshDrawCommand @ 14472de90

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

FMeshDrawCommand * __thiscall FMeshDrawCommand::FMeshDrawCommand(FMeshDrawCommand *this)

{
  (this->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  (this->ShaderBindings).ShaderLayouts.ArrayNum = 0;
  (this->ShaderBindings).ShaderLayouts.ArrayMax = 2;
  (this->ShaderBindings).Data.InlineStorage[0] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[1] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[2] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[3] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[4] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[5] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[6] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[7] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[8] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[9] = (uchar *)0x0;
  (this->ShaderBindings).ShaderFrequencyBits = 0;
  (this->ShaderBindings).Size = 0;
  (this->VertexStreams).AllocatorInstance.SecondaryData = (ForElementType<FVertexInputStream>)0x0;
  (this->VertexStreams).ArrayNum = 0;
  (this->VertexStreams).ArrayMax = 7;
  (this->CachedPipelineId).field0_0x0.PackedId = 0;
  (this->DebugData).VertexShader.ShaderContent = (FShader *)0x0;
  (this->DebugData).VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->DebugData).PixelShader.ShaderContent = (FShader *)0x0;
  (this->DebugData).PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->DebugData).MaterialRenderProxyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DebugData).MaterialRenderProxyName.Data.ArrayNum = 0;
  (this->DebugData).MaterialRenderProxyName.Data.ArrayMax = 0;
  (this->DebugData).ResourceName.ComparisonIndex = 0;
  (this->DebugData).ResourceName.Number = 0;
  (this->StatsData).CategoryName.ComparisonIndex = 0;
  (this->StatsData).CategoryName.Number = 0;
  return this;
}

// ~FMeshDrawCommand @ 14472f010

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

void __thiscall FMeshDrawCommand::~FMeshDrawCommand(FMeshDrawCommand *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FVertexInputStream> FVar2;
  
  pFVar1 = (this->DebugData).MaterialRenderProxyName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->VertexStreams).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FVertexInputStream>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FMeshDrawShaderBindings::~FMeshDrawShaderBindings(&this->ShaderBindings);
  return;
}

// FMeshDrawCommand @ 144e739a0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

FMeshDrawCommand * __thiscall
FMeshDrawCommand::FMeshDrawCommand(FMeshDrawCommand *this,FMeshDrawCommand *param_1)

{
  ForElementType<FMeshDrawShaderBindingsLayout> FVar1;
  ForElementType<FVertexInputStream> FVar2;
  FMaterialRenderProxy *pFVar3;
  uchar *puVar4;
  undefined8 uVar5;
  FShaderMapBase *pFVar6;
  
  (this->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  (this->ShaderBindings).ShaderLayouts.ArrayNum = 0;
  (this->ShaderBindings).ShaderLayouts.ArrayMax = 2;
  (this->ShaderBindings).Data.InlineStorage[0] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[1] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[2] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[3] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[4] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[5] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[6] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[7] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[8] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[9] = (uchar *)0x0;
  (this->ShaderBindings).ShaderFrequencyBits = 0;
  (this->ShaderBindings).Size = 0;
  (this->ShaderBindings).Size = (param_1->ShaderBindings).Size;
  (this->ShaderBindings).ShaderFrequencyBits = (param_1->ShaderBindings).ShaderFrequencyBits;
  if (this != param_1) {
    if ((param_1->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData ==
        (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      memmove(this,param_1,0x10);
    }
    FVar1 = (this->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData =
         (param_1->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData;
    (param_1->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData =
         (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
    (this->ShaderBindings).ShaderLayouts.ArrayNum = (param_1->ShaderBindings).ShaderLayouts.ArrayNum
    ;
    (this->ShaderBindings).ShaderLayouts.ArrayMax = (param_1->ShaderBindings).ShaderLayouts.ArrayMax
    ;
    (param_1->ShaderBindings).ShaderLayouts.ArrayNum = 0;
    (param_1->ShaderBindings).ShaderLayouts.ArrayMax = 2;
  }
  if ((param_1->ShaderBindings).Size < 0x51) {
    puVar4 = (param_1->ShaderBindings).Data.InlineStorage[1];
    (this->ShaderBindings).Data.InlineStorage[0] = (param_1->ShaderBindings).Data.InlineStorage[0];
    (this->ShaderBindings).Data.InlineStorage[1] = puVar4;
    puVar4 = (param_1->ShaderBindings).Data.InlineStorage[3];
    (this->ShaderBindings).Data.InlineStorage[2] = (param_1->ShaderBindings).Data.InlineStorage[2];
    (this->ShaderBindings).Data.InlineStorage[3] = puVar4;
    puVar4 = (param_1->ShaderBindings).Data.InlineStorage[5];
    (this->ShaderBindings).Data.InlineStorage[4] = (param_1->ShaderBindings).Data.InlineStorage[4];
    (this->ShaderBindings).Data.InlineStorage[5] = puVar4;
    puVar4 = (param_1->ShaderBindings).Data.InlineStorage[7];
    (this->ShaderBindings).Data.InlineStorage[6] = (param_1->ShaderBindings).Data.InlineStorage[6];
    (this->ShaderBindings).Data.InlineStorage[7] = puVar4;
    puVar4 = (param_1->ShaderBindings).Data.InlineStorage[9];
    (this->ShaderBindings).Data.InlineStorage[8] = (param_1->ShaderBindings).Data.InlineStorage[8];
    (this->ShaderBindings).Data.InlineStorage[9] = puVar4;
  }
  else {
    (this->ShaderBindings).Data.InlineStorage[0] = (param_1->ShaderBindings).Data.InlineStorage[0];
    (param_1->ShaderBindings).Data.InlineStorage[0] = (uchar *)0x0;
  }
  (param_1->ShaderBindings).Size = 0;
  (this->VertexStreams).AllocatorInstance.SecondaryData = (ForElementType<FVertexInputStream>)0x0;
  if ((param_1->VertexStreams).AllocatorInstance.SecondaryData ==
      (ForElementType<FVertexInputStream>)0x0) {
    memmove(&this->VertexStreams,&param_1->VertexStreams,0x54);
  }
  FVar2 = (this->VertexStreams).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FVertexInputStream>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->VertexStreams).AllocatorInstance.SecondaryData =
       (param_1->VertexStreams).AllocatorInstance.SecondaryData;
  (param_1->VertexStreams).AllocatorInstance.SecondaryData = (ForElementType<FVertexInputStream>)0x0
  ;
  (this->VertexStreams).ArrayNum = (param_1->VertexStreams).ArrayNum;
  (this->VertexStreams).ArrayMax = (param_1->VertexStreams).ArrayMax;
  (param_1->VertexStreams).ArrayNum = 0;
  (param_1->VertexStreams).ArrayMax = 7;
  this->IndexBuffer = param_1->IndexBuffer;
  this->CachedPipelineId = param_1->CachedPipelineId;
  this->FirstIndex = param_1->FirstIndex;
  this->NumPrimitives = param_1->NumPrimitives;
  this->NumInstances = param_1->NumInstances;
  (this->field7_0x100).VertexParams = (param_1->field7_0x100).VertexParams;
  uVar5 = *(undefined8 *)((longlong)&param_1->field7_0x100 + 8);
  (this->field7_0x100).VertexParams = (param_1->field7_0x100).VertexParams;
  *(undefined8 *)((longlong)&this->field7_0x100 + 8) = uVar5;
  this->PrimitiveIdStreamIndex = param_1->PrimitiveIdStreamIndex;
  this->StencilRef = param_1->StencilRef;
  *(uint *)&this->field_0x114 =
       (*(uint *)&param_1->field_0x114 ^ *(uint *)&this->field_0x114) & 0xfffffff8 ^
       *(uint *)&param_1->field_0x114;
  pFVar6 = (param_1->DebugData).VertexShader.ShaderMap;
  (this->DebugData).VertexShader.ShaderContent = (param_1->DebugData).VertexShader.ShaderContent;
  (this->DebugData).VertexShader.ShaderMap = pFVar6;
  pFVar6 = (param_1->DebugData).PixelShader.ShaderMap;
  (this->DebugData).PixelShader.ShaderContent = (param_1->DebugData).PixelShader.ShaderContent;
  (this->DebugData).PixelShader.ShaderMap = pFVar6;
  (this->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets =
       (param_1->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets;
  pFVar3 = (param_1->DebugData).MaterialRenderProxyIfNotUsingStateBuckets;
  (this->DebugData).MaterialRenderProxyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DebugData).MaterialRenderProxyIfNotUsingStateBuckets = pFVar3;
  (this->DebugData).MaterialRenderProxyName.Data.AllocatorInstance.Data =
       (param_1->DebugData).MaterialRenderProxyName.Data.AllocatorInstance.Data;
  (param_1->DebugData).MaterialRenderProxyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DebugData).MaterialRenderProxyName.Data.ArrayNum =
       (param_1->DebugData).MaterialRenderProxyName.Data.ArrayNum;
  (this->DebugData).MaterialRenderProxyName.Data.ArrayMax =
       (param_1->DebugData).MaterialRenderProxyName.Data.ArrayMax;
  (param_1->DebugData).MaterialRenderProxyName.Data.ArrayNum = 0;
  (param_1->DebugData).MaterialRenderProxyName.Data.ArrayMax = 0;
  (this->DebugData).Material = (param_1->DebugData).Material;
  (this->DebugData).VertexFactory = (param_1->DebugData).VertexFactory;
  (this->DebugData).VertexFactoryType = (param_1->DebugData).VertexFactoryType;
  (this->DebugData).ResourceName = (param_1->DebugData).ResourceName;
  (this->DebugData).PSOCollectorIndex = (param_1->DebugData).PSOCollectorIndex;
  (this->DebugData).LODIndex = (param_1->DebugData).LODIndex;
  (this->DebugData).SegmentIndex = (param_1->DebugData).SegmentIndex;
  (this->StatsData).CategoryName = (param_1->StatsData).CategoryName;
  (this->StatsData).NumVertices = (param_1->StatsData).NumVertices;
  return this;
}

// operator= @ 144e74c90

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

FMeshDrawCommand * __thiscall
FMeshDrawCommand::operator=(FMeshDrawCommand *this,FMeshDrawCommand *param_1)

{
  int *piVar1;
  FString *pFVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  undefined8 uVar6;
  FShaderMapBase *pFVar7;
  ForElementType<FVertexInputStream> _Dst;
  ForElementType<FVertexInputStream> _Src_00;
  
  FMeshDrawShaderBindings::CopyFrom(&this->ShaderBindings,&param_1->ShaderBindings);
  if (this != param_1) {
    _Src_00 = (param_1->VertexStreams).AllocatorInstance.SecondaryData;
    piVar1 = &(this->VertexStreams).ArrayMax;
    iVar4 = (param_1->VertexStreams).ArrayNum;
    if (_Src_00 == (ForElementType<FVertexInputStream>)0x0) {
      _Src_00 = (ForElementType<FVertexInputStream>)&param_1->VertexStreams;
    }
    (this->VertexStreams).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 7;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
                (0xc,4,iVar4,*piVar1,&(this->VertexStreams).AllocatorInstance,iVar4,piVar1);
      _Dst = (this->VertexStreams).AllocatorInstance.SecondaryData;
      if (iVar4 != 0) {
        if (_Dst == (ForElementType<FVertexInputStream>)0x0) {
          _Dst = (ForElementType<FVertexInputStream>)&this->VertexStreams;
        }
        memcpy((void *)_Dst,(void *)_Src_00,(longlong)iVar4 * 0xc);
      }
    }
  }
  pFVar2 = &(this->DebugData).MaterialRenderProxyName;
  this->IndexBuffer = param_1->IndexBuffer;
  this->CachedPipelineId = param_1->CachedPipelineId;
  this->FirstIndex = param_1->FirstIndex;
  this->NumPrimitives = param_1->NumPrimitives;
  this->NumInstances = param_1->NumInstances;
  (this->field7_0x100).VertexParams = (param_1->field7_0x100).VertexParams;
  uVar6 = *(undefined8 *)((longlong)&param_1->field7_0x100 + 8);
  (this->field7_0x100).VertexParams = (param_1->field7_0x100).VertexParams;
  *(undefined8 *)((longlong)&this->field7_0x100 + 8) = uVar6;
  this->PrimitiveIdStreamIndex = param_1->PrimitiveIdStreamIndex;
  this->StencilRef = param_1->StencilRef;
  pFVar3 = &(param_1->DebugData).MaterialRenderProxyName;
  *(uint *)&this->field_0x114 =
       (*(uint *)&param_1->field_0x114 ^ *(uint *)&this->field_0x114) & 0xfffffff8 ^
       *(uint *)&param_1->field_0x114;
  pFVar7 = (param_1->DebugData).VertexShader.ShaderMap;
  (this->DebugData).VertexShader.ShaderContent = (param_1->DebugData).VertexShader.ShaderContent;
  (this->DebugData).VertexShader.ShaderMap = pFVar7;
  pFVar7 = (param_1->DebugData).PixelShader.ShaderMap;
  (this->DebugData).PixelShader.ShaderContent = (param_1->DebugData).PixelShader.ShaderContent;
  (this->DebugData).PixelShader.ShaderMap = pFVar7;
  (this->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets =
       (param_1->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets;
  (this->DebugData).MaterialRenderProxyIfNotUsingStateBuckets =
       (param_1->DebugData).MaterialRenderProxyIfNotUsingStateBuckets;
  if (pFVar2 != pFVar3) {
    iVar4 = (param_1->DebugData).MaterialRenderProxyName.Data.ArrayNum;
    piVar1 = &(this->DebugData).MaterialRenderProxyName.Data.ArrayMax;
    _Src = (pFVar3->Data).AllocatorInstance.Data;
    iVar5 = *piVar1;
    (this->DebugData).MaterialRenderProxyName.Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,iVar5,(ForAnyElementType *)pFVar2,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pFVar2->Data).AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
      }
    }
  }
  (this->DebugData).Material = (param_1->DebugData).Material;
  (this->DebugData).VertexFactory = (param_1->DebugData).VertexFactory;
  (this->DebugData).VertexFactoryType = (param_1->DebugData).VertexFactoryType;
  (this->DebugData).ResourceName = (param_1->DebugData).ResourceName;
  (this->DebugData).PSOCollectorIndex = (param_1->DebugData).PSOCollectorIndex;
  (this->DebugData).LODIndex = (param_1->DebugData).LODIndex;
  (this->DebugData).SegmentIndex = (param_1->DebugData).SegmentIndex;
  (this->StatsData).CategoryName = (param_1->StatsData).CategoryName;
  (this->StatsData).NumVertices = (param_1->StatsData).NumVertices;
  return this;
}

// FMeshDrawCommand @ 144eee9b0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

FMeshDrawCommand * __thiscall
FMeshDrawCommand::FMeshDrawCommand(FMeshDrawCommand *this,FMeshDrawCommand *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FShaderMapBase *pFVar4;
  ForElementType<FVertexInputStream> _Dst;
  ForElementType<FVertexInputStream> _Src;
  
  (this->ShaderBindings).ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  (this->ShaderBindings).ShaderLayouts.ArrayNum = 0;
  (this->ShaderBindings).ShaderLayouts.ArrayMax = 2;
  (this->ShaderBindings).Data.InlineStorage[0] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[1] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[2] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[3] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[4] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[5] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[6] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[7] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[8] = (uchar *)0x0;
  (this->ShaderBindings).Data.InlineStorage[9] = (uchar *)0x0;
  (this->ShaderBindings).ShaderFrequencyBits = 0;
  (this->ShaderBindings).Size = 0;
  FMeshDrawShaderBindings::CopyFrom(&this->ShaderBindings,&param_1->ShaderBindings);
  (this->VertexStreams).AllocatorInstance.SecondaryData = (ForElementType<FVertexInputStream>)0x0;
  _Src = (param_1->VertexStreams).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->VertexStreams).ArrayNum;
  (this->VertexStreams).ArrayNum = iVar2;
  if (_Src == (ForElementType<FVertexInputStream>)0x0) {
    _Src = (ForElementType<FVertexInputStream>)&param_1->VertexStreams;
  }
  piVar1 = &(this->VertexStreams).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 7;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInputStream>_>
              (0xc,4,iVar2,0,&(this->VertexStreams).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->VertexStreams).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<FVertexInputStream>)0x0) {
      _Dst = (ForElementType<FVertexInputStream>)&this->VertexStreams;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0xc);
  }
  this->IndexBuffer = param_1->IndexBuffer;
  this->CachedPipelineId = param_1->CachedPipelineId;
  this->FirstIndex = param_1->FirstIndex;
  this->NumPrimitives = param_1->NumPrimitives;
  this->NumInstances = param_1->NumInstances;
  (this->field7_0x100).VertexParams = (param_1->field7_0x100).VertexParams;
  uVar3 = *(undefined8 *)((longlong)&param_1->field7_0x100 + 8);
  (this->field7_0x100).VertexParams = (param_1->field7_0x100).VertexParams;
  *(undefined8 *)((longlong)&this->field7_0x100 + 8) = uVar3;
  this->PrimitiveIdStreamIndex = param_1->PrimitiveIdStreamIndex;
  this->StencilRef = param_1->StencilRef;
  *(uint *)&this->field_0x114 =
       (*(uint *)&param_1->field_0x114 ^ *(uint *)&this->field_0x114) & 0xfffffff8 ^
       *(uint *)&param_1->field_0x114;
  pFVar4 = (param_1->DebugData).VertexShader.ShaderMap;
  (this->DebugData).VertexShader.ShaderContent = (param_1->DebugData).VertexShader.ShaderContent;
  (this->DebugData).VertexShader.ShaderMap = pFVar4;
  pFVar4 = (param_1->DebugData).PixelShader.ShaderMap;
  (this->DebugData).PixelShader.ShaderContent = (param_1->DebugData).PixelShader.ShaderContent;
  (this->DebugData).PixelShader.ShaderMap = pFVar4;
  (this->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets =
       (param_1->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets;
  (this->DebugData).MaterialRenderProxyIfNotUsingStateBuckets =
       (param_1->DebugData).MaterialRenderProxyIfNotUsingStateBuckets;
  ::FString::FString(&(this->DebugData).MaterialRenderProxyName,
                     &(param_1->DebugData).MaterialRenderProxyName);
  (this->DebugData).Material = (param_1->DebugData).Material;
  (this->DebugData).VertexFactory = (param_1->DebugData).VertexFactory;
  (this->DebugData).VertexFactoryType = (param_1->DebugData).VertexFactoryType;
  (this->DebugData).ResourceName = (param_1->DebugData).ResourceName;
  (this->DebugData).PSOCollectorIndex = (param_1->DebugData).PSOCollectorIndex;
  (this->DebugData).LODIndex = (param_1->DebugData).LODIndex;
  (this->DebugData).SegmentIndex = (param_1->DebugData).SegmentIndex;
  (this->StatsData).CategoryName = (param_1->StatsData).CategoryName;
  (this->StatsData).NumVertices = (param_1->StatsData).NumVertices;
  return this;
}

// GetDynamicInstancingHash @ 144f12080

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

uint __thiscall FMeshDrawCommand::GetDynamicInstancingHash(FMeshDrawCommand *this)

{
  ulonglong *puVar1;
  ForElementType<FVertexInputStream> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  ForElementType<FVertexInputStream> FVar8;
  longlong lVar9;
  undefined4 local_38;
  uint local_34;
  uint uStack_30;
  FGraphicsMinimalPipelineStateId_u_0 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_2c = (this->CachedPipelineId).field0_0x0;
  local_10 = (int)CONCAT11(this->PrimitiveIdStreamIndex,this->StencilRef);
  local_34 = 0;
  uStack_30 = 0;
  local_28 = FMeshDrawShaderBindings::GetDynamicInstancingHash(&this->ShaderBindings);
  uVar6 = 0;
  if (0 < (this->VertexStreams).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->VertexStreams).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      FVar2 = (this->VertexStreams).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FVertexInputStream>)&this->VertexStreams;
      if (FVar2 != (ForElementType<FVertexInputStream>)0x0) {
        FVar8 = FVar2;
      }
      uVar6 = uVar6 + 1;
      uStack_30 = uStack_30 ^
                  (uStack_30 >> 2) +
                  (*(uint *)((longlong)FVar8 + lVar9) >> 4 & 0x7ffffff |
                  *(uint *)((longlong)FVar8 + lVar9) << 0x1c) + uStack_30 * 0x40 + -0x61c88647;
      puVar1 = (ulonglong *)((longlong)FVar8 + 4 + lVar9);
      lVar9 = lVar9 + 0xc;
      local_34 = local_34 ^ (local_34 >> 2) + (int)(*puVar1 >> 4) + local_34 * 0x40 + -0x61c88647;
    } while ((int)uVar6 < (this->VertexStreams).ArrayNum);
  }
  local_20 = this->NumPrimitives;
  local_38 = (undefined4)((ulonglong)this->IndexBuffer >> 4);
  local_24 = this->FirstIndex;
  local_1c = this->NumInstances;
  if (local_20 == 0) {
    local_18 = (uint)((ulonglong)(this->field7_0x100).IndirectArgs.Buffer >> 4);
    local_14 = (this->field7_0x100).IndirectArgs.Offset;
  }
  else {
    local_18 = (this->field7_0x100).VertexParams.BaseVertexIndex;
    local_14 = (this->field7_0x100).VertexParams.NumVertices;
  }
  uVar7 = CityHash64((char *)&local_38,0x2c);
  return (uint)uVar7;
}

// GetPipelineStateSortingKey @ 144f13070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

ulong64 __thiscall
FMeshDrawCommand::GetPipelineStateSortingKey
          (FMeshDrawCommand *this,FRHICommandList *param_1,
          FGraphicsPipelineRenderTargetsInfo *param_2)

{
  FGraphicsMinimalPipelineStateInitializer *this_00;
  FGraphicsPipelineState *pFVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  undefined1 auStack_1a8 [32];
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  local_188;
  FGraphicsPipelineStateInitializer local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar3 = (ulonglong)(this->CachedPipelineId).field0_0x0.PackedId;
  if (GRHIGlobals.SupportsPipelineStateSortKey) {
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
    ::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              (&local_188);
    this_00 = FGraphicsMinimalPipelineStateId::GetPipelineState
                        (&this->CachedPipelineId,
                         (TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
                          *)&local_188);
    FGraphicsMinimalPipelineStateInitializer::AsGraphicsPipelineStateInitializer(this_00,&local_108)
    ;
    local_108.RenderTargetsEnabled = param_2->RenderTargetsEnabled;
    local_108.RenderTargetFlags.Elements[0] = (param_2->RenderTargetFlags).Elements[0];
    local_108.RenderTargetFlags.Elements[1] = (param_2->RenderTargetFlags).Elements[1];
    local_108.RenderTargetFormats.Elements = *&(param_2->RenderTargetFormats).Elements;
    local_108.RenderTargetFlags.Elements[2] = (param_2->RenderTargetFlags).Elements[2];
    local_108.RenderTargetFlags.Elements[3] = (param_2->RenderTargetFlags).Elements[3];
    local_108.NumSamples = param_2->NumSamples;
    local_108.DepthStencilTargetFormat = param_2->DepthStencilTargetFormat;
    local_108.DepthStencilTargetFlag = param_2->DepthStencilTargetFlag;
    local_108.DepthTargetLoadAction = param_2->DepthTargetLoadAction;
    local_108.DepthTargetStoreAction = param_2->DepthTargetStoreAction;
    local_108.StencilTargetLoadAction = param_2->StencilTargetLoadAction;
    local_108.StencilTargetStoreAction = param_2->StencilTargetStoreAction;
    local_108.DepthStencilAccess.Value = (param_2->DepthStencilAccess).Value;
    local_108.MultiViewCount = param_2->MultiViewCount;
    local_108.RenderTargetFlags.Elements[4] = (param_2->RenderTargetFlags).Elements[4];
    local_108.RenderTargetFlags.Elements[5] = (param_2->RenderTargetFlags).Elements[5];
    local_108.bHasFragmentDensityAttachment = param_2->bHasFragmentDensityAttachment;
    local_108.RenderTargetFlags.Elements[6] = (param_2->RenderTargetFlags).Elements[6];
    local_108.RenderTargetFlags.Elements[7] = (param_2->RenderTargetFlags).Elements[7];
    pFVar1 = PipelineStateCache::GetAndOrCreateGraphicsPipelineState(param_1,&local_108,DoNothing);
    if (pFVar1 != (FGraphicsPipelineState *)0x0) {
      uVar2 = PipelineStateCache::RetrieveGraphicsPipelineStateSortKey(pFVar1);
      if (uVar2 != 0) {
        uVar3 = uVar2;
      }
    }
    if (local_188.HashData.AllocatorInstance.SecondaryData !=
        (ForElementType<Experimental::FHashType>)0x0) {
      FMemory::Free((void *)local_188.HashData.AllocatorInstance.SecondaryData);
    }
    if (local_188.IndexData.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_188.IndexData.AllocatorInstance.SecondaryData);
    }
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
    ::FData::Empty(&local_188.KeyValueData);
    if (local_188.KeyValueData.FreeList.FreeList.AllocatorInstance.SecondaryData !=
        (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
         )0x0) {
      FMemory::Free((void *)local_188.KeyValueData.FreeList.FreeList.AllocatorInstance.SecondaryData
                   );
    }
    if (local_188.KeyValueData.Hashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.KeyValueData.Hashes.AllocatorInstance.Data);
    }
    DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>,int>
              ((TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>
                *)local_188.KeyValueData.KeyVals.AllocatorInstance.Data,
               local_188.KeyValueData.KeyVals.ArrayNum);
    if (local_188.KeyValueData.KeyVals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.KeyValueData.KeyVals.AllocatorInstance.Data);
    }
  }
  return uVar3;
}

// GetPipelineStateSortingKey @ 144f13210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

ulong64 __thiscall
FMeshDrawCommand::GetPipelineStateSortingKey
          (FMeshDrawCommand *this,FGraphicsPipelineRenderTargetsInfo *param_1)

{
  FGraphicsMinimalPipelineStateInitializer *this_00;
  FGraphicsPipelineState *pFVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  undefined1 auStack_198 [32];
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  local_178;
  FGraphicsPipelineStateInitializer local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  uVar3 = (ulonglong)(this->CachedPipelineId).field0_0x0.PackedId;
  if (GRHIGlobals.SupportsPipelineStateSortKey) {
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
    ::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              (&local_178);
    this_00 = FGraphicsMinimalPipelineStateId::GetPipelineState
                        (&this->CachedPipelineId,
                         (TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
                          *)&local_178);
    FGraphicsMinimalPipelineStateInitializer::AsGraphicsPipelineStateInitializer(this_00,&local_f8);
    local_f8.RenderTargetsEnabled = param_1->RenderTargetsEnabled;
    local_f8.RenderTargetFlags.Elements[0] = (param_1->RenderTargetFlags).Elements[0];
    local_f8.RenderTargetFlags.Elements[1] = (param_1->RenderTargetFlags).Elements[1];
    local_f8.RenderTargetFormats.Elements = *&(param_1->RenderTargetFormats).Elements;
    local_f8.RenderTargetFlags.Elements[2] = (param_1->RenderTargetFlags).Elements[2];
    local_f8.RenderTargetFlags.Elements[3] = (param_1->RenderTargetFlags).Elements[3];
    local_f8.NumSamples = param_1->NumSamples;
    local_f8.DepthStencilTargetFormat = param_1->DepthStencilTargetFormat;
    local_f8.DepthStencilTargetFlag = param_1->DepthStencilTargetFlag;
    local_f8.DepthTargetLoadAction = param_1->DepthTargetLoadAction;
    local_f8.DepthTargetStoreAction = param_1->DepthTargetStoreAction;
    local_f8.StencilTargetLoadAction = param_1->StencilTargetLoadAction;
    local_f8.StencilTargetStoreAction = param_1->StencilTargetStoreAction;
    local_f8.DepthStencilAccess.Value = (param_1->DepthStencilAccess).Value;
    local_f8.MultiViewCount = param_1->MultiViewCount;
    local_f8.RenderTargetFlags.Elements[4] = (param_1->RenderTargetFlags).Elements[4];
    local_f8.RenderTargetFlags.Elements[5] = (param_1->RenderTargetFlags).Elements[5];
    local_f8.bHasFragmentDensityAttachment = param_1->bHasFragmentDensityAttachment;
    local_f8.RenderTargetFlags.Elements[6] = (param_1->RenderTargetFlags).Elements[6];
    local_f8.RenderTargetFlags.Elements[7] = (param_1->RenderTargetFlags).Elements[7];
    pFVar1 = PipelineStateCache::FindGraphicsPipelineState(&local_f8,false);
    if (pFVar1 != (FGraphicsPipelineState *)0x0) {
      uVar2 = PipelineStateCache::RetrieveGraphicsPipelineStateSortKey(pFVar1);
      if (uVar2 != 0) {
        uVar3 = uVar2;
      }
    }
    if (local_178.HashData.AllocatorInstance.SecondaryData !=
        (ForElementType<Experimental::FHashType>)0x0) {
      FMemory::Free((void *)local_178.HashData.AllocatorInstance.SecondaryData);
    }
    if (local_178.IndexData.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_178.IndexData.AllocatorInstance.SecondaryData);
    }
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
    ::FData::Empty(&local_178.KeyValueData);
    if (local_178.KeyValueData.FreeList.FreeList.AllocatorInstance.SecondaryData !=
        (ForElementType<Experimental::RobinHoodHashTable_Private::TFreeList<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FSpan>
         )0x0) {
      FMemory::Free((void *)local_178.KeyValueData.FreeList.FreeList.AllocatorInstance.SecondaryData
                   );
    }
    if (local_178.KeyValueData.Hashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.KeyValueData.Hashes.AllocatorInstance.Data);
    }
    DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>,int>
              ((TKeyValue<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType>
                *)local_178.KeyValueData.KeyVals.AllocatorInstance.Data,
               local_178.KeyValueData.KeyVals.ArrayNum);
    if (local_178.KeyValueData.KeyVals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.KeyValueData.KeyVals.AllocatorInstance.Data);
    }
  }
  return uVar3;
}

// GetStatsData @ 144f17990

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

void __thiscall
FMeshDrawCommand::GetStatsData(FMeshDrawCommand *this,FVisibleMeshDrawCommandStatsData *param_1)

{
  int iVar1;
  int iVar2;
  
  (param_1->StatsData).CategoryName = (this->StatsData).CategoryName;
  (param_1->StatsData).NumVertices = (this->StatsData).NumVertices;
  param_1->PrimitiveCount = this->NumPrimitives;
  param_1->LODIndex = (int)(this->DebugData).LODIndex;
  param_1->SegmentIndex = (this->DebugData).SegmentIndex;
  param_1->ResourceName = (this->DebugData).ResourceName;
  iVar1 = (this->DebugData).MaterialRenderProxyName.Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AssignRange
            (&param_1->MaterialName,
             (wchar_t *)(this->DebugData).MaterialRenderProxyName.Data.AllocatorInstance.Data,iVar2)
  ;
  return;
}

// SetDebugData @ 144f27d50

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

void __thiscall
FMeshDrawCommand::SetDebugData
          (FMeshDrawCommand *this,FPrimitiveSceneProxy *param_1,FMaterial *param_2,
          FMaterialRenderProxy *param_3,FMeshProcessorShaders *param_4,FVertexFactory *param_5,
          FMeshBatch *param_6,int param_7)

{
  int iVar1;
  FScriptContainerElement *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FShaderMapBase *pFVar5;
  bool bVar6;
  bool bVar7;
  FString *pFVar8;
  FVertexFactoryType *pFVar9;
  FName FVar10;
  int iVar11;
  FString local_38;
  FString local_28;
  
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  (this->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets = param_1;
  (this->DebugData).MaterialRenderProxyIfNotUsingStateBuckets = param_3;
  (this->DebugData).Material = param_2;
  if (param_3 == (FMaterialRenderProxy *)0x0) {
    pFVar8 = ::FString::FString(&local_28,L"");
    bVar7 = false;
    bVar6 = true;
  }
  else {
    iVar1 = (param_3->MaterialName).Data.ArrayNum;
    _Src = (param_3->MaterialName).Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
    pFVar8 = &local_38;
    bVar7 = true;
    bVar6 = false;
  }
  iVar1 = (pFVar8->Data).ArrayNum;
  iVar11 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            (&(this->DebugData).MaterialRenderProxyName,
             (wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar11);
  if (bVar6) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar7) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_4->VertexShader).ShaderMap;
  (this->DebugData).VertexShader.ShaderContent = (param_4->VertexShader).ShaderContent;
  (this->DebugData).VertexShader.ShaderMap = pFVar5;
  uVar2 = *(undefined4 *)((longlong)&(param_4->PixelShader).ShaderContent + 4);
  uVar3 = *(undefined4 *)&(param_4->PixelShader).ShaderMap;
  uVar4 = *(undefined4 *)((longlong)&(param_4->PixelShader).ShaderMap + 4);
  *(undefined4 *)&(this->DebugData).PixelShader.ShaderContent =
       *(undefined4 *)&(param_4->PixelShader).ShaderContent;
  *(undefined4 *)((longlong)&(this->DebugData).PixelShader.ShaderContent + 4) = uVar2;
  *(undefined4 *)&(this->DebugData).PixelShader.ShaderMap = uVar3;
  *(undefined4 *)((longlong)&(this->DebugData).PixelShader.ShaderMap + 4) = uVar4;
  (this->DebugData).LODIndex = param_6->LODIndex;
  (this->DebugData).SegmentIndex = param_6->SegmentIndex;
  if (param_1 != (FPrimitiveSceneProxy *)0x0) {
    FVar10 = param_1->ResourceName;
  }
  (this->DebugData).ResourceName = FVar10;
  (this->DebugData).VertexFactory = param_5;
  pFVar9 = (FVertexFactoryType *)(**(code **)(param_5->_padding_ + 0x30))();
  (this->DebugData).VertexFactoryType = pFVar9;
  (this->DebugData).PSOCollectorIndex = param_7;
  return;
}

// SetDrawParametersAndFinalize @ 144f27f00

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

void __thiscall
FMeshDrawCommand::SetDrawParametersAndFinalize
          (FMeshDrawCommand *this,FMeshBatch *param_1,int param_2,
          FGraphicsMinimalPipelineStateId param_3,FMeshProcessorShaders *param_4)

{
  int iVar1;
  int iVar2;
  ForElementType<FMeshBatchElement> FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FRHIBuffer *pFVar8;
  FRHIBuffer *pFVar9;
  longlong lVar10;
  
  pFVar9 = (FRHIBuffer *)0x0;
  uVar7 = 0;
  if (param_2 < (param_1->Elements).ArrayNum) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar3 = (param_1->Elements).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    param_1 = (FMeshBatch *)FVar3;
  }
  lVar10 = (longlong)param_2 * 0x98 + (longlong)param_1;
  lVar4 = *(longlong *)(lVar10 + 0x18);
  if ((lVar4 != 0) &&
     (((*(int *)(lVar4 + 0x18) == -1 || (*(longlong *)(lVar4 + 0x20) == 0)) &&
      (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("!BatchElement.IndexBuffer || (BatchElement.IndexBuffer && BatchElement.IndexBuffer->IsInitialized() && BatchElement.IndexBuffer->IndexBufferRHI)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                          ,0x38f,L""), bVar6)))) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = pFVar9;
  if (*(longlong *)(lVar10 + 0x18) != 0) {
    pFVar8 = *(FRHIBuffer **)(*(longlong *)(lVar10 + 0x18) + 0x20);
  }
  this->IndexBuffer = pFVar8;
  this->FirstIndex = *(uint *)(lVar10 + 0x58);
  this->NumPrimitives = *(uint *)(lVar10 + 0x5c);
  this->NumInstances = *(uint *)(lVar10 + 0x60);
  lVar4 = *(longlong *)(lVar10 + 0x20);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != -1)) {
    if ((*(longlong *)(lVar4 + 0x20) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!BatchElement.DynamicIndexBuffer.IndexBuffer || (BatchElement.DynamicIndexBuffer.IndexBuffer && BatchElement.DynamicIndexBuffer.IndexBuffer->IsInitialized() && BatchElement.DynamicIndexBuffer.IndexBuffer->IndexBufferRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                           ,0x398,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(longlong *)(lVar10 + 0x20) != 0) {
      pFVar9 = *(FRHIBuffer **)(*(longlong *)(lVar10 + 0x20) + 0x20);
    }
    this->IndexBuffer = pFVar9;
    this->FirstIndex = *(uint *)(lVar10 + 0x28) & 0xffffff;
    *(uint *)&this->field_0x114 =
         ((uint)*(byte *)(lVar10 + 0x2b) ^ *(uint *)&this->field_0x114) & 0xfffffff8 ^
         (uint)*(byte *)(lVar10 + 0x2b);
  }
  if (this->NumPrimitives == 0) {
    if ((*(longlong *)(lVar10 + 0x48) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BatchElement.IndirectArgsBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                           ,0x3a6,
                           L"It is only valid to set BatchElement.NumPrimitives == 0 when a IndirectArgsBuffer is used"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (this->field7_0x100).VertexParams = *(<unnamed_type_VertexParams> *)(lVar10 + 0x48);
    (this->field7_0x100).IndirectArgs.Offset = *(uint *)(lVar10 + 0x50);
  }
  else {
    (this->field7_0x100).VertexParams.BaseVertexIndex = *(uint *)(lVar10 + 100);
    (this->field7_0x100).VertexParams.NumVertices =
         (*(int *)(lVar10 + 0x6c) - *(int *)(lVar10 + 0x68)) + 1;
    if ((*(longlong *)(lVar10 + 0x48) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!BatchElement.IndirectArgsBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                           ,0x3a2,
                           L"FMeshBatchElement::NumPrimitives must be set to 0 when a IndirectArgsBuffer is used"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar1 = *(int *)(lVar10 + 0x6c);
  iVar2 = *(int *)(lVar10 + 0x68);
  this->CachedPipelineId = param_3;
  (this->StatsData).NumVertices = (iVar1 - iVar2) + 1;
  return;
}

// SetStatsData @ 144f2a960

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

void __thiscall FMeshDrawCommand::SetStatsData(FMeshDrawCommand *this,FPrimitiveSceneProxy *param_1)

{
  if (param_1 != (FPrimitiveSceneProxy *)0x0) {
    (this->StatsData).CategoryName = param_1->MeshDrawCommandStatsCategory;
    return;
  }
  (this->StatsData).CategoryName.ComparisonIndex = 0;
  (this->StatsData).CategoryName.Number = 0;
  return;
}

// SubmitDraw @ 144f2ecd0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

bool __cdecl
FMeshDrawCommand::SubmitDraw
          (FMeshDrawCommand *param_1,
          TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
          *param_2,FMeshDrawCommandSceneArgs *param_3,uint param_4,FRHICommandList *param_5,
          FMeshDrawCommandStateCache *param_6)

{
  bool bVar1;
  bool bVar2;
  FRHIBreadcrumbAllocator *pFVar3;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,FString,FName,unsigned_int>_>
  *pTVar4;
  uint local_68 [2];
  FRHIBreadcrumbScope local_60;
  undefined1 local_50;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  bVar1 = false;
  local_50 = 0;
  if (GShowMaterialDrawEvents != 0) {
    local_68[0] = param_4 * param_1->NumInstances;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x5b4;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_38 = 0;
      uStack_34 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_3c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_MaterialDrawEve;
      ::Desc._padding_ = (longlong)u__s__s___u_insta;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FMeshDrawCommand::SubmitDraw'::__l7::<lambda_1>::
             operator()<FString_&,FName_&,unsigned_int>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar3 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_5);
    pTVar4 = FMemStackBase::Alloc(&pFVar3->Inner,0x160,8);
    pTVar4 = UE::RHI::Breadcrumbs::Private::
             TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,FString,FName,unsigned_int>_>
             ::
             TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,FString,FName,unsigned_int>_><FString_&,FName_&,unsigned_int_&>
                       (pTVar4,pFVar3,&::Desc,&(param_1->DebugData).MaterialRenderProxyName,
                        &(param_1->DebugData).ResourceName,local_68);
    FRHIBreadcrumbScope::FRHIBreadcrumbScope
              (&local_60,(FRHIComputeCommandList *)param_5,(FRHIBreadcrumbNode *)pTVar4);
    bVar1 = true;
    local_50 = 1;
  }
  bVar2 = SubmitDrawBegin(param_1,param_2,param_3,param_4,param_5,param_6,true);
  if (bVar2) {
    SubmitDrawEnd(param_1,param_3,param_4,param_5);
  }
  if (bVar1) {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_60);
  }
  return bVar2;
}

// SubmitDrawBegin @ 144f2ef00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __cdecl
FMeshDrawCommand::SubmitDrawBegin
          (FMeshDrawCommand *param_1,
          TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
          *param_2,FMeshDrawCommandSceneArgs *param_3,uint param_4,FRHICommandList *param_5,
          FMeshDrawCommandStateCache *param_6,bool param_7)

{
  byte bVar1;
  uint uVar2;
  FMaterial *pFVar3;
  FShaderMapResource *pFVar4;
  ForElementType<FVertexInputStream> FVar5;
  FRHIBuffer *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  EPSOPrecacheResult EVar11;
  uint uVar12;
  FGraphicsMinimalPipelineStateInitializer *this;
  atomic<FRHIShader_*> aVar13;
  FBoundShaderStateInput *pFVar14;
  FRHIUniformBuffer **ppFVar15;
  IRHICommandContext *pIVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  FVertexInputStream *this_00;
  ulonglong uVar23;
  schar sVar24;
  undefined1 auStackY_208 [32];
  void *local_1b8 [2];
  FString local_1a8;
  FBoundShaderStateInput local_198;
  FBoundShaderStateInput local_160;
  FGraphicsPipelineStateInitializer local_128;
  ulonglong local_48;
  ForElementType<FVertexInputStream> FVar22;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this = FGraphicsMinimalPipelineStateId::GetPipelineState(&param_1->CachedPipelineId,param_2);
  EVar11 = Unknown;
  if ((param_1->CachedPipelineId).field0_0x0.PackedId != param_6->PipelineId) {
    FGraphicsMinimalPipelineStateInitializer::AsGraphicsPipelineStateInitializer(this,&local_128);
    FRHICommandList::ApplyCachedRenderTargets(param_5,&local_128);
    bVar8 = PipelineStateCache::IsPSOPrecachingEnabled();
    if (bVar8) {
      EVar11 = this->PSOPrecacheState;
      bVar9 = PSOCollectorStats::IsPrecachingValidationEnabled();
      bVar8 = false;
      if ((bVar9) && (bVar8 = false, EVar11 == Unknown)) {
        bVar8 = true;
      }
      if ((((param_7) && (GSkipDrawOnPSOPrecaching != 0)) && (EVar11 < Complete)) || (bVar8)) {
        EVar11 = PipelineStateCache::CheckPipelineStateInCache(&local_128);
        this->PSOPrecacheState = EVar11;
      }
    }
    if ((this->BoundShaderState).bAllShaderAreLoaded == false) {
      if (4 < (byte)LogRenderer._0_1_) {
        ::FName::ToString(&(param_1->StatsData).CategoryName,&local_1a8);
        pFVar3 = (param_1->DebugData).Material;
        (**(code **)(pFVar3->_padding_ + 0x390))(pFVar3,local_1b8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
        if (local_1b8[0] != (void *)0x0) {
          FMemory::Free(local_1b8[0]);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
      if (((this->BoundShaderState).CachedVertexShader == (FRHIVertexShader *)0x0) ||
         ((this->BoundShaderState).bAllShaderAreLoaded == false)) {
        pFVar4 = (this->BoundShaderState).PixelShaderResource.Reference;
        if (pFVar4 == (FShaderMapResource *)0x0) {
          aVar13 = (atomic<FRHIShader_*>)0x0;
        }
        else {
          iVar19 = (this->BoundShaderState).PixelShaderIndex;
          aVar13 = (pFVar4->RHIShaders).Ptr[iVar19];
          if (aVar13 == (atomic<FRHIShader_*>)0x0) {
            aVar13 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash(pFVar4,iVar19,true);
          }
        }
        pFVar4 = (this->BoundShaderState).GeometryShaderResource.Reference;
        (this->BoundShaderState).CachedPixelShader = (FRHIPixelShader *)aVar13;
        if (pFVar4 == (FShaderMapResource *)0x0) {
          aVar13 = (atomic<FRHIShader_*>)0x0;
        }
        else {
          iVar19 = (this->BoundShaderState).GeometryShaderIndex;
          aVar13 = (pFVar4->RHIShaders).Ptr[iVar19];
          if (aVar13 == (atomic<FRHIShader_*>)0x0) {
            aVar13 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash(pFVar4,iVar19,true);
          }
        }
        pFVar4 = (this->BoundShaderState).MeshShaderResource.Reference;
        (this->BoundShaderState).CachedGeometryShader = (FRHIGeometryShader *)aVar13;
        if (pFVar4 == (FShaderMapResource *)0x0) {
          aVar13 = (atomic<FRHIShader_*>)0x0;
        }
        else {
          iVar19 = (this->BoundShaderState).MeshShaderIndex;
          aVar13 = (pFVar4->RHIShaders).Ptr[iVar19];
          if (aVar13 == (atomic<FRHIShader_*>)0x0) {
            aVar13 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash(pFVar4,iVar19,true);
          }
        }
        pFVar4 = (this->BoundShaderState).VertexShaderResource.Reference;
        (this->BoundShaderState).CachedMeshShader = (FRHIMeshShader *)aVar13;
        if (pFVar4 == (FShaderMapResource *)0x0) {
          aVar13 = (atomic<FRHIShader_*>)0x0;
        }
        else {
          iVar19 = (this->BoundShaderState).VertexShaderIndex;
          aVar13 = (pFVar4->RHIShaders).Ptr[iVar19];
          if (aVar13 == (atomic<FRHIShader_*>)0x0) {
            aVar13 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash(pFVar4,iVar19,true);
          }
        }
        (this->BoundShaderState).CachedVertexShader = (FRHIVertexShader *)aVar13;
        (this->BoundShaderState).bAllShaderAreLoaded = true;
      }
      pFVar14 = FMinimalBoundShaderStateInput::AsBoundShaderState
                          (&this->BoundShaderState,&local_198);
      local_128.BoundShaderState.VertexDeclarationRHI = pFVar14->VertexDeclarationRHI;
      local_128.BoundShaderState.VertexShaderRHI = pFVar14->VertexShaderRHI;
      local_128.BoundShaderState.PixelShaderRHI = pFVar14->PixelShaderRHI;
      local_128.BoundShaderState.MeshShaderRHI = pFVar14->MeshShaderRHI;
      local_128.BoundShaderState.AmplificationShaderRHI = pFVar14->AmplificationShaderRHI;
      local_128.BoundShaderState.GeometryShaderRHI = pFVar14->GeometryShaderRHI;
      local_128.BoundShaderState.WorkGraphMeshShaderRHI = pFVar14->WorkGraphMeshShaderRHI;
    }
    PSOCollectorStats::CheckFullPipelineStateInCache
              (&local_128,EVar11,(param_1->DebugData).Material,
               (param_1->DebugData).VertexFactoryType,
               (param_1->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets,
               (param_1->DebugData).PSOCollectorIndex);
    if (((param_7) && (GSkipDrawOnPSOPrecaching != 0)) && (EVar11 == Active)) {
      return false;
    }
    bVar1 = param_1->StencilRef;
    SetGraphicsPipelineStateCheckApply(param_5,&local_128,(uint)bVar1,true);
    iVar19 = 0;
    param_6->PipelineId = (uint)(param_1->CachedPipelineId).field0_0x0;
    param_6->VertexStreams[0].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[1].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[2].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[3].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[4].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[5].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[6].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[7].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[8].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[9].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[10].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[0xb].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[0xc].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[0xd].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[0xe].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[0xf].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    param_6->VertexStreams[0x10].field3_0x4.VertexBuffer = (FRHIBuffer *)0x0;
    if (-1 < param_6->ShaderBindings[0].MaxUniformBufferUsed) {
      ppFVar15 = param_6->ShaderBindings[0].UniformBuffers;
      iVar18 = iVar19;
      do {
        *ppFVar15 = (FRHIUniformBuffer *)0x0;
        ppFVar15 = ppFVar15 + 1;
        iVar18 = iVar18 + 1;
      } while (iVar18 <= param_6->ShaderBindings[0].MaxUniformBufferUsed);
    }
    param_6->ShaderBindings[0].MaxUniformBufferUsed = -1;
    if (-1 < param_6->ShaderBindings[1].MaxUniformBufferUsed) {
      ppFVar15 = param_6->ShaderBindings[1].UniformBuffers;
      iVar18 = iVar19;
      do {
        *ppFVar15 = (FRHIUniformBuffer *)0x0;
        ppFVar15 = ppFVar15 + 1;
        iVar18 = iVar18 + 1;
      } while (iVar18 <= param_6->ShaderBindings[1].MaxUniformBufferUsed);
    }
    param_6->ShaderBindings[1].MaxUniformBufferUsed = -1;
    if (-1 < param_6->ShaderBindings[2].MaxUniformBufferUsed) {
      ppFVar15 = param_6->ShaderBindings[2].UniformBuffers;
      iVar18 = iVar19;
      do {
        *ppFVar15 = (FRHIUniformBuffer *)0x0;
        ppFVar15 = ppFVar15 + 1;
        iVar18 = iVar18 + 1;
      } while (iVar18 <= param_6->ShaderBindings[2].MaxUniformBufferUsed);
    }
    param_6->ShaderBindings[2].MaxUniformBufferUsed = -1;
    if (-1 < param_6->ShaderBindings[3].MaxUniformBufferUsed) {
      ppFVar15 = param_6->ShaderBindings[3].UniformBuffers;
      iVar18 = iVar19;
      do {
        *ppFVar15 = (FRHIUniformBuffer *)0x0;
        ppFVar15 = ppFVar15 + 1;
        iVar18 = iVar18 + 1;
      } while (iVar18 <= param_6->ShaderBindings[3].MaxUniformBufferUsed);
    }
    param_6->ShaderBindings[3].MaxUniformBufferUsed = -1;
    if (-1 < param_6->ShaderBindings[4].MaxUniformBufferUsed) {
      ppFVar15 = param_6->ShaderBindings[4].UniformBuffers;
      iVar18 = iVar19;
      do {
        *ppFVar15 = (FRHIUniformBuffer *)0x0;
        ppFVar15 = ppFVar15 + 1;
        iVar18 = iVar18 + 1;
      } while (iVar18 <= param_6->ShaderBindings[4].MaxUniformBufferUsed);
    }
    param_6->ShaderBindings[4].MaxUniformBufferUsed = -1;
    if (-1 < param_6->ShaderBindings[5].MaxUniformBufferUsed) {
      ppFVar15 = param_6->ShaderBindings[5].UniformBuffers;
      do {
        *ppFVar15 = (FRHIUniformBuffer *)0x0;
        ppFVar15 = ppFVar15 + 1;
        iVar19 = iVar19 + 1;
      } while (iVar19 <= param_6->ShaderBindings[5].MaxUniformBufferUsed);
    }
    param_6->ShaderBindings[5].MaxUniformBufferUsed = -1;
    param_6->StencilRef = (uint)bVar1;
  }
  uVar21 = 0;
  bVar1 = param_1->StencilRef;
  if ((uint)bVar1 != param_6->StencilRef) {
    if ((GRHICommandList.bLatchedBypass == false) || ((param_5->field_0x29b & 0x20) == 0)) {
      puVar17 = FMemStackBase::Alloc((FMemStackBase *)param_5,0x18,8);
      *(int *)&param_5->field_0x60 = *(int *)&param_5->field_0x60 + 1;
      **(undefined8 **)&param_5->field_0x30 = puVar17;
      *(undefined8 **)&param_5->field_0x30 = puVar17 + 1;
      puVar17[1] = 0;
      *puVar17 = &___7FRHICommandSetStencilRef__6B_;
      *(uint *)(puVar17 + 2) = (uint)bVar1;
    }
    else {
      pIVar16 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_5);
      (**(code **)(pIVar16->_padding_ + 0x1d0))(pIVar16,(uint)bVar1);
    }
    param_6->StencilRef = (uint)bVar1;
  }
  sVar24 = -1;
  if (param_3->BatchedPrimitiveSlot == 0xff) {
    sVar24 = param_1->PrimitiveIdStreamIndex;
  }
  uVar23 = uVar21;
  if (0 < (param_1->VertexStreams).ArrayNum) {
    do {
      uVar20 = (uint)uVar21;
      uVar12 = 0;
      if ((int)uVar20 < (param_1->VertexStreams).ArrayNum) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      FVar5 = (param_1->VertexStreams).AllocatorInstance.SecondaryData;
      FVar22 = (ForElementType<FVertexInputStream>)&param_1->VertexStreams;
      if (FVar5 != (ForElementType<FVertexInputStream>)0x0) {
        FVar22 = FVar5;
      }
      this_00 = (FVertexInputStream *)((longlong)FVar22 + uVar23);
      if ((sVar24 == -1) || (uVar12 = this_00->StreamIndex, uVar12 != (int)sVar24)) {
        uVar12 = ((undefined4 *)this_00)->StreamIndex;
        if ((((((undefined4 *)(param_6->VertexStreams + uVar12))->StreamIndex ^ this_00->StreamIndex
              ) & 0xf) != 0) ||
           ((((*(undefined4 *)this_00 ^ *(undefined4 *)(param_6->VertexStreams + uVar12)) &
             0x7ffffff0) != 0 ||
            (param_6->VertexStreams[uVar12].field3_0x4.VertexBuffer !=
             (this_00->field3_0x4).VertexBuffer)))) {
          FVertexInputStream::SetOnRHICommandList(this_00,param_5);
          goto LAB_144f2f5c4;
        }
      }
      else {
        uVar2 = param_3->PrimitiveIdOffset;
        pFVar6 = param_3->PrimitiveIdsBuffer;
        if ((GRHICommandList.bLatchedBypass == false) || ((param_5->field_0x29b & 0x20) == 0)) {
          puVar17 = FMemStackBase::Alloc((FMemStackBase *)param_5,0x28,8);
          *(int *)&param_5->field_0x60 = *(int *)&param_5->field_0x60 + 1;
          **(undefined8 **)&param_5->field_0x30 = puVar17;
          *(undefined8 **)&param_5->field_0x30 = puVar17 + 1;
          puVar17[1] = 0;
          puVar17[3] = pFVar6;
          *(uint *)(puVar17 + 4) = uVar2;
          *puVar17 = &___7FRHICommandSetStreamSource__6B_;
          *(uint *)(puVar17 + 2) = uVar12;
        }
        else {
          pIVar16 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_5);
          (**(code **)(pIVar16->_padding_ + 0x198))(pIVar16,uVar12,pFVar6,uVar2);
        }
LAB_144f2f5c4:
        uVar12 = this_00->StreamIndex;
        *(undefined8 *)(param_6->VertexStreams + uVar12) = *(undefined8 *)this_00;
        *(undefined4 *)((longlong)&param_6->VertexStreams[uVar12].field3_0x4 + 4) =
             *(undefined4 *)((longlong)&this_00->field3_0x4 + 4);
      }
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar23 = uVar23 + 0xc;
    } while ((int)(uVar20 + 1) < (param_1->VertexStreams).ArrayNum);
  }
  pFVar14 = FMinimalBoundShaderStateInput::AsBoundShaderState(&this->BoundShaderState,&local_160);
  FMeshDrawShaderBindings::SetOnCommandList
            (&param_1->ShaderBindings,param_5,pFVar14,param_6->ShaderBindings);
  return true;
}

// SubmitDrawEnd @ 144f2f670

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FMeshDrawCommand::SubmitDrawEnd
          (FMeshDrawCommand *param_1,FMeshDrawCommandSceneArgs *param_2,uint param_3,
          FRHICommandList *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  IRHICommandContext *pIVar4;
  undefined8 *puVar5;
  FRHIBuffer *pFVar6;
  uint uVar7;
  
  if ((param_2->IndirectArgsBuffer == (FRHIBuffer *)0x0) || (param_1->PrimitiveIdStreamIndex < '\0')
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (param_2->BatchedPrimitiveSlot != 0xff) {
    FRHIComputeCommandList::SetUniformBufferDynamicOffset
              ((FRHIComputeCommandList *)param_4,param_2->BatchedPrimitiveSlot,
               param_2->PrimitiveIdOffset);
  }
  if ((param_2->RootConstants).bIsSet != false) {
    if ((GRHICommandList.bLatchedBypass == false) || ((param_4->field_0x29b & 0x20) == 0)) {
      puVar5 = FMemStackBase::Alloc((FMemStackBase *)param_4,0x20,8);
      *(int *)&param_4->field_0x60 = *(int *)&param_4->field_0x60 + 1;
      **(undefined8 **)&param_4->field_0x30 = puVar5;
      *(undefined8 **)&param_4->field_0x30 = puVar5 + 1;
      uVar1 = *(undefined8 *)&(param_2->RootConstants).TypedValue.field0_0x0;
      uVar2 = *(undefined8 *)((longlong)&(param_2->RootConstants).TypedValue.field0_0x0 + 8);
      puVar5[1] = 0;
      *puVar5 = &___7FRHICommandSetShaderRootConstants__6B_;
      puVar5[2] = uVar1;
      puVar5[3] = uVar2;
    }
    else {
      pIVar4 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_4);
      (**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,&param_2->RootConstants);
    }
  }
  pFVar6 = param_1->IndexBuffer;
  uVar7 = param_1->NumPrimitives;
  if (pFVar6 != (FRHIBuffer *)0x0) {
    if (uVar7 == 0) {
      if (!bVar3) {
        uVar7 = (param_1->field7_0x100).IndirectArgs.Offset;
        goto LAB_144f2f7b3;
      }
    }
    else if (!bVar3) {
      FRHICommandList::DrawIndexedPrimitive
                (param_4,pFVar6,(param_1->field7_0x100).VertexParams.BaseVertexIndex,0,
                 (param_1->field7_0x100).VertexParams.NumVertices,param_1->FirstIndex,uVar7,
                 param_3 * param_1->NumInstances);
      return;
    }
    uVar7 = param_2->IndirectArgsByteOffset;
    if (bVar3) {
      FRHICommandList::DrawIndexedPrimitiveIndirect
                (param_4,pFVar6,param_2->IndirectArgsBuffer,uVar7);
      return;
    }
LAB_144f2f7b3:
    FRHICommandList::DrawIndexedPrimitiveIndirect
              (param_4,pFVar6,(param_1->field7_0x100).IndirectArgs.Buffer,uVar7);
    return;
  }
  if (uVar7 == 0) {
    if (bVar3) goto LAB_144f2f7f4;
    uVar7 = (param_1->field7_0x100).IndirectArgs.Offset;
  }
  else {
    if (!bVar3) {
      FRHICommandList::DrawPrimitive
                (param_4,(param_1->field7_0x100).VertexParams.BaseVertexIndex + param_1->FirstIndex,
                 uVar7,param_3 * param_1->NumInstances);
      return;
    }
LAB_144f2f7f4:
    uVar7 = param_2->IndirectArgsByteOffset;
    if (bVar3) {
      pFVar6 = param_2->IndirectArgsBuffer;
      goto LAB_144f2f811;
    }
  }
  pFVar6 = (param_1->field7_0x100).IndirectArgs.Buffer;
LAB_144f2f811:
  FRHICommandList::DrawPrimitiveIndirect(param_4,pFVar6,uVar7);
  return;
}

// SubmitDrawIndirectBegin @ 144f2f840

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

bool __cdecl
FMeshDrawCommand::SubmitDrawIndirectBegin
          (FMeshDrawCommand *param_1,
          TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
          *param_2,FMeshDrawCommandSceneArgs *param_3,uint param_4,FRHICommandList *param_5,
          FMeshDrawCommandStateCache *param_6,bool param_7)

{
  bool bVar1;
  
  bVar1 = SubmitDrawBegin(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

// SubmitDrawIndirectEnd @ 144f2f860

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

void __cdecl
FMeshDrawCommand::SubmitDrawIndirectEnd
          (FMeshDrawCommand *param_1,FMeshDrawCommandSceneArgs *param_2,uint param_3,
          FRHICommandList *param_4)

{
  uint uVar1;
  FRHIBuffer *pFVar2;
  uint uVar3;
  
  pFVar2 = (FRHIBuffer *)0x0;
  uVar1 = 0;
  if (param_1->NumPrimitives == 0) {
    pFVar2 = (param_1->field7_0x100).IndirectArgs.Buffer;
    uVar1 = (param_1->field7_0x100).IndirectArgs.Offset;
  }
  if (param_2->IndirectArgsBuffer != (FRHIBuffer *)0x0) {
    uVar1 = param_2->IndirectArgsByteOffset;
    pFVar2 = param_2->IndirectArgsBuffer;
  }
  if (param_2->BatchedPrimitiveSlot != 0xff) {
    FRHIComputeCommandList::SetUniformBufferDynamicOffset
              ((FRHIComputeCommandList *)param_4,param_2->BatchedPrimitiveSlot,
               param_2->PrimitiveIdOffset);
  }
  if (pFVar2 == (FRHIBuffer *)0x0) {
    uVar1 = param_1->NumPrimitives;
    if (uVar1 != 0) {
      uVar3 = param_3 * param_1->NumInstances;
      if (param_1->IndexBuffer == (FRHIBuffer *)0x0) {
        FRHICommandList::DrawPrimitive
                  (param_4,(param_1->field7_0x100).VertexParams.BaseVertexIndex +
                           param_1->FirstIndex,uVar1,uVar3);
      }
      else {
        FRHICommandList::DrawIndexedPrimitive
                  (param_4,param_1->IndexBuffer,(param_1->field7_0x100).VertexParams.BaseVertexIndex
                   ,0,(param_1->field7_0x100).VertexParams.NumVertices,param_1->FirstIndex,uVar1,
                   uVar3);
      }
    }
  }
  else if (param_1->IndexBuffer == (FRHIBuffer *)0x0) {
    FRHICommandList::DrawPrimitiveIndirect(param_4,pFVar2,uVar1);
  }
  else {
    FRHICommandList::DrawIndexedPrimitiveIndirect(param_4,param_1->IndexBuffer,pFVar2,uVar1);
  }
  return;
}

