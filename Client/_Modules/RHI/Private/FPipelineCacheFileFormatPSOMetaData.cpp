// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FPipelineCacheFileFormatPSOMetaData @ 145c45a80

FPipelineCacheFileFormatPSOMetaData * __thiscall
FPipelineCacheFileFormatPSOMetaData::FPipelineCacheFileFormatPSOMetaData
          (FPipelineCacheFileFormatPSOMetaData *this,FPipelineCacheFileFormatPSOMetaData *param_1)

{
  long64 lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  this->FileOffset = param_1->FileOffset;
  this->FileSize = param_1->FileSize;
  uVar2 = (param_1->FileGuid).B;
  uVar3 = (param_1->FileGuid).C;
  uVar4 = (param_1->FileGuid).D;
  (this->FileGuid).A = (param_1->FileGuid).A;
  (this->FileGuid).B = uVar2;
  (this->FileGuid).C = uVar3;
  (this->FileGuid).D = uVar4;
  lVar1 = (param_1->Stats).LastFrameUsed;
  (this->Stats).FirstFrameUsed = (param_1->Stats).FirstFrameUsed;
  (this->Stats).LastFrameUsed = lVar1;
  lVar1 = (param_1->Stats).TotalBindCount;
  (this->Stats).CreateCount = (param_1->Stats).CreateCount;
  (this->Stats).TotalBindCount = lVar1;
  uVar5 = *(undefined4 *)&(param_1->Stats).field_0x24;
  (this->Stats).PSOHash = (param_1->Stats).PSOHash;
  *(undefined4 *)&(this->Stats).field_0x24 = uVar5;
  *(undefined8 *)&(this->Shaders).Elements = 0;
  *(undefined8 *)&(this->Shaders).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Shaders).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Shaders).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Shaders).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Shaders).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Shaders).Elements.field_0x34 = 0;
  (this->Shaders).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Shaders).HashSize = 0;
  TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::operator=
            (&this->Shaders,&param_1->Shaders);
  this->UsageMask = param_1->UsageMask;
  this->LastUsedUnixTime = param_1->LastUsedUnixTime;
  this->EngineFlags = param_1->EngineFlags;
  return this;
}

// AddShaders @ 145c4dc90

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSOMetaData::AddShaders
          (FPipelineCacheFileFormatPSOMetaData *this,FPipelineCacheFileFormatPSO *param_1)

{
  DescriptorType DVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SerializedRayTracingPipelineStateCount> FVar6;
  FThreadSafeStaticStat<FStat_STAT_SerializedGraphicsPipelineStateCount> FVar7;
  FThreadSafeStaticStat<FStat_STAT_SerializedComputePipelineStateCount> FVar8;
  FSHAHash *pFVar9;
  FPipelineFileCacheRayTracingDesc *pFVar10;
  undefined1 local_48 [12];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [12];
  FName local_20;
  FName local_18 [2];
  
  DVar1 = param_1->Type;
  if (DVar1 == Compute) {
    FVar8 = StatPtr_STAT_SerializedComputePipelineStateCount;
    if (StatPtr_STAT_SerializedComputePipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_SerializedComputePipelineStateCount>)0x0) {
      pFVar5 = ::FName::FName(local_18,"STAT_SerializedComputePipelineStateCount");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_SerializedComputePipelineStateCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_SerializedComputePipelineStateCount,*pFVar5,
                         L"Serialized Compute Pipeline State Count","STATGROUP_PipelineStateCache",
                         "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar2 = *(FName *)FVar8;
    local_48._0_4_ = FVar2.ComparisonIndex.Value;
    local_48._4_4_ = FVar2.Number;
    FThreadStats::AddMessage<__int64>(FVar2,Add,1,false);
    pFVar10 = (FPipelineFileCacheRayTracingDesc *)&param_1->ComputeDesc;
    pFVar9 = (FSHAHash *)local_48;
  }
  else if (DVar1 == Graphics) {
    FVar7 = StatPtr_STAT_SerializedGraphicsPipelineStateCount;
    if (StatPtr_STAT_SerializedGraphicsPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_SerializedGraphicsPipelineStateCount>)0x0) {
      pFVar5 = ::FName::FName(&local_20,"STAT_SerializedGraphicsPipelineStateCount");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_SerializedGraphicsPipelineStateCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_SerializedGraphicsPipelineStateCount,*pFVar5,
                         L"Serialized Graphics Pipeline State Count","STATGROUP_PipelineStateCache",
                         "STATCAT_Advanced",L"ShaderPipelineCache",true,false,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar2 = *(FName *)FVar7;
    local_48._0_4_ = FVar2.ComparisonIndex.Value;
    local_48._4_4_ = FVar2.Number;
    FThreadStats::AddMessage<__int64>(FVar2,Add,1,false);
    if (((*(longlong *)(param_1->GraphicsDesc).VertexShader.Hash != 0) ||
        (*(longlong *)((param_1->GraphicsDesc).VertexShader.Hash + 8) != 0)) ||
       (*(int *)((param_1->GraphicsDesc).VertexShader.Hash + 0x10) != 0)) {
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                (&this->Shaders,(FSHAHash *)local_3c,(bool *)&param_1->GraphicsDesc);
    }
    pFVar9 = &(param_1->GraphicsDesc).FragmentShader;
    if (((*(longlong *)pFVar9->Hash != 0) ||
        (*(longlong *)((param_1->GraphicsDesc).FragmentShader.Hash + 8) != 0)) ||
       (*(int *)((param_1->GraphicsDesc).FragmentShader.Hash + 0x10) != 0)) {
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                (&this->Shaders,(FSHAHash *)(local_3c + 4),(bool *)pFVar9);
    }
    pFVar9 = &(param_1->GraphicsDesc).GeometryShader;
    if (((*(longlong *)pFVar9->Hash != 0) ||
        (*(longlong *)((param_1->GraphicsDesc).GeometryShader.Hash + 8) != 0)) ||
       (*(int *)((param_1->GraphicsDesc).GeometryShader.Hash + 0x10) != 0)) {
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                (&this->Shaders,(FSHAHash *)local_34,(bool *)pFVar9);
    }
    pFVar9 = &(param_1->GraphicsDesc).MeshShader;
    if (((*(longlong *)pFVar9->Hash != 0) ||
        (*(longlong *)((param_1->GraphicsDesc).MeshShader.Hash + 8) != 0)) ||
       (*(int *)((param_1->GraphicsDesc).MeshShader.Hash + 0x10) != 0)) {
      TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
                (&this->Shaders,(FSHAHash *)(local_34 + 4),(bool *)pFVar9);
    }
    pFVar10 = (FPipelineFileCacheRayTracingDesc *)&(param_1->GraphicsDesc).AmplificationShader;
    if (((*(longlong *)((FSHAHash *)pFVar10)->Hash == 0) &&
        (*(longlong *)((param_1->GraphicsDesc).AmplificationShader.Hash + 8) == 0)) &&
       (*(int *)((param_1->GraphicsDesc).AmplificationShader.Hash + 0x10) == 0)) {
      return;
    }
    pFVar9 = (FSHAHash *)local_2c;
  }
  else {
    if (DVar1 != RayTracing) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0x168,L"");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar6 = StatPtr_STAT_SerializedRayTracingPipelineStateCount;
    if (StatPtr_STAT_SerializedRayTracingPipelineStateCount ==
        (FThreadSafeStaticStat<FStat_STAT_SerializedRayTracingPipelineStateCount>)0x0) {
      pFVar5 = ::FName::FName((FName *)(local_2c + 4),"STAT_SerializedRayTracingPipelineStateCount")
      ;
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_SerializedRayTracingPipelineStateCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_SerializedRayTracingPipelineStateCount,*pFVar5,
                         L"Serialized RayTracing Pipeline State Count",
                         "STATGROUP_PipelineStateCache","STATCAT_Advanced",L"ShaderPipelineCache",
                         true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar6;
    local_48._0_4_ = FVar2.ComparisonIndex.Value;
    local_48._4_4_ = FVar2.Number;
    FThreadStats::AddMessage<__int64>(FVar2,Add,1,false);
    pFVar10 = &param_1->RayTracingDesc;
    pFVar9 = (FSHAHash *)(local_48 + 8);
  }
  TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::Emplace<FSHAHash_const_&>
            (&this->Shaders,pFVar9,(bool *)pFVar10);
  return;
}

