// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FCachedPassMeshDrawListContext @ 144eee680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FCachedPassMeshDrawListContext * __thiscall
FCachedPassMeshDrawListContext::FCachedPassMeshDrawListContext
          (FCachedPassMeshDrawListContext *this,FScene *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  
  this->Scene = param_1;
  this->_padding_ = (longlong)&___7FCachedPassMeshDrawListContext__6B_;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.ShaderLayouts.AllocatorInstance.
  SecondaryData = (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.ShaderLayouts.ArrayNum = 0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.ShaderLayouts.ArrayMax = 2;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[0] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[1] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[2] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[3] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[4] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[5] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[6] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[7] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[8] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Data.InlineStorage[9] = (uchar *)0x0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.ShaderFrequencyBits = 0;
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Size = 0;
  (this->MeshDrawCommandForStateBucketing).VertexStreams.AllocatorInstance.SecondaryData =
       (ForElementType<FVertexInputStream>)0x0;
  (this->MeshDrawCommandForStateBucketing).VertexStreams.ArrayNum = 0;
  (this->MeshDrawCommandForStateBucketing).VertexStreams.ArrayMax = 7;
  (this->MeshDrawCommandForStateBucketing).CachedPipelineId.field0_0x0.PackedId = 0;
  (this->MeshDrawCommandForStateBucketing).DebugData.VertexShader.ShaderContent = (FShader *)0x0;
  (this->MeshDrawCommandForStateBucketing).DebugData.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->MeshDrawCommandForStateBucketing).DebugData.PixelShader.ShaderContent = (FShader *)0x0;
  (this->MeshDrawCommandForStateBucketing).DebugData.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->MeshDrawCommandForStateBucketing).DebugData.MaterialRenderProxyName.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (this->MeshDrawCommandForStateBucketing).DebugData.MaterialRenderProxyName.Data.ArrayNum = 0;
  (this->MeshDrawCommandForStateBucketing).DebugData.MaterialRenderProxyName.Data.ArrayMax = 0;
  (this->MeshDrawCommandForStateBucketing).DebugData.ResourceName.ComparisonIndex = 0;
  (this->MeshDrawCommandForStateBucketing).DebugData.ResourceName.Number = 0;
  (this->MeshDrawCommandForStateBucketing).StatsData.CategoryName.ComparisonIndex = 0;
  (this->MeshDrawCommandForStateBucketing).StatsData.CategoryName.Number = 0;
  puVar1 = &(this->CommandInfo).field_0x18;
  *puVar1 = *puVar1 & 0xa7;
  puVar1 = &(this->CommandInfo).field_0x1c;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffdb;
  puVar1 = &(this->CommandInfo).field_0x18;
  *puVar1 = *puVar1 | 0x27;
  puVar1 = &(this->CommandInfo).field_0x1c;
  *(uint *)puVar1 = *(uint *)puVar1 | 0x1b;
  (this->CommandInfo).Flags = Default;
  (this->CommandInfo).SortKey.field0_0x0.PackedData = 0;
  (this->CommandInfo).CullingPayload.field0_0x0.PackedData = 0;
  (this->CommandInfo).CullingPayload.DynamicMeshBoundsIndex = -1;
  (this->CommandInfo).CommandIndex = -1;
  (this->CommandInfo).StateBucketId = -1;
  this->CurrMeshPass = Num;
  bVar2 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  this->bUseGPUScene = bVar2;
  this->bAnyLooseParameterBuffers = false;
  return this;
}

// ~FCachedPassMeshDrawListContext @ 144ef00f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FCachedPassMeshDrawListContext::~FCachedPassMeshDrawListContext
          (FCachedPassMeshDrawListContext *this)

{
  FData *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FVertexInputStream> FVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  
  pFVar2 = (this->MeshDrawCommandForStateBucketing).DebugData.MaterialRenderProxyName.Data.
           AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->MeshDrawCommandForStateBucketing).VertexStreams.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FVertexInputStream>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar1 = &(this->MeshDrawCommandForStateBucketing).ShaderBindings.Data;
  if (0x50 < (this->MeshDrawCommandForStateBucketing).ShaderBindings.Size) {
    operator_delete__(pFVar1->InlineStorage[0]);
  }
  (this->MeshDrawCommandForStateBucketing).ShaderBindings.Size = 0;
  pFVar1->InlineStorage[0] = (uchar *)0x0;
  FVar4 = (this->MeshDrawCommandForStateBucketing).ShaderBindings.ShaderLayouts.AllocatorInstance.
          SecondaryData;
  if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  this->_padding_ = (longlong)&___7FMeshPassDrawListContext__6B_;
  return;
}

// AddCommand @ 144ef69d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FMeshDrawCommand * __thiscall
FCachedPassMeshDrawListContext::AddCommand
          (FCachedPassMeshDrawListContext *this,FMeshDrawCommand *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FMeshDrawCommand *pFVar3;
  undefined1 local_res18 [16];
  
  if (WaterInfoTexturePass < this->CurrMeshPass) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrMeshPass < EMeshPass::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x78b,
                       L"BeginMeshPass() must be called before adding commands to this context");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMeshDrawCommand *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (((this->CommandInfo).CommandIndex != -1) || ((this->CommandInfo).StateBucketId != -1)) {
    `FCachedPassMeshDrawListContext::AddCommand'::__l2::<lambda_1>::operator()(local_res18);
  }
  if (param_2 == 1) {
    return param_1;
  }
  FMeshDrawCommand::operator=(&this->MeshDrawCommandForStateBucketing,param_1);
  return &this->MeshDrawCommandForStateBucketing;
}

// BeginMeshPass @ 144ef9b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FCachedPassMeshDrawListContext::BeginMeshPass(FCachedPassMeshDrawListContext *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrMeshPass != Num) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrMeshPass == EMeshPass::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x79b,L"BeginMeshPass() was called without a matching EndMeshPass()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (WaterInfoTexturePass < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshPass < EMeshPass::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x79c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->CurrMeshPass = param_1;
  return;
}

// EndMeshPass @ 144f04c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall FCachedPassMeshDrawListContext::EndMeshPass(FCachedPassMeshDrawListContext *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrMeshPass < Num) {
    this->CurrMeshPass = Num;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrMeshPass < EMeshPass::Num",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                     ,0x7a2,L"EndMeshPass() was called without matching BeginMeshPass()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->CurrMeshPass = Num;
  return;
}

// FinalizeCommandCommon @ 144f0c6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FCachedPassMeshDrawListContext::FinalizeCommandCommon
          (FCachedPassMeshDrawListContext *this,FMeshBatch *param_1,int param_2,
          ERasterizerFillMode param_3,ERasterizerCullMode param_4,FMeshDrawCommandSortKey param_5,
          EFVisibleMeshDrawCommandFlags param_6,FGraphicsMinimalPipelineStateInitializer *param_7,
          FMeshProcessorShaders *param_8,FMeshDrawCommand *param_9)

{
  int *piVar1;
  int iVar2;
  Type TVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  ForElementType<FMeshBatchElement> FVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FHashElementId FVar11;
  uint uVar12;
  undefined4 extraout_var;
  FMeshDrawCommandCullingPayload FVar13;
  uint uVar14;
  ForElementType<FMeshBatchElement> FVar15;
  float fVar16;
  float fVar17;
  uint local_res8 [2];
  undefined1 local_res10 [16];
  ERasterizerFillMode local_res20;
  bool local_88 [4];
  atomic<int> local_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  uint local_58;
  
  local_res20 = param_3;
  uVar10 = ::GetTypeHash(param_7);
  AcquireSRWLockShared((PSRWLOCK)&FGraphicsMinimalPipelineStateId::PersistentIdTableLock);
  FVar11 = Experimental::RobinHoodHashTable_Private::
           TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
           ::FindIdByHash((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
                           *)&FGraphicsMinimalPipelineStateId::PersistentIdTable,
                          (FHashType)(uint)local_res10,
                          (FGraphicsMinimalPipelineStateInitializer *)
                          (ulonglong)(uVar10 & 0x7fffffff));
  uVar12 = *(uint *)CONCAT44(extraout_var,FVar11.Index);
  uVar14 = uVar12;
  if (uVar12 == 0xffffffff) {
    ReleaseSRWLockShared((PSRWLOCK)&FGraphicsMinimalPipelineStateId::PersistentIdTableLock);
    AcquireSRWLockExclusive((PSRWLOCK)&FGraphicsMinimalPipelineStateId::PersistentIdTableLock);
    local_88[0] = false;
    local_88[1] = false;
    local_88[2] = false;
    local_88[3] = false;
    LOCK();
    UNLOCK();
    local_84 = FGraphicsMinimalPipelineStateId::DebugSaltAllocationIndex;
    FGraphicsMinimalPipelineStateId::DebugSaltAllocationIndex =
         (atomic<int>)((int)FGraphicsMinimalPipelineStateId::DebugSaltAllocationIndex + 1);
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
    ::
    FindOrUpdateIdByHashInternal<0,FGraphicsMinimalPipelineStateInitializer_const_&,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState>
              ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,TDefaultMapHashableKeyFuncs<FGraphicsMinimalPipelineStateInitializer,FGraphicsMinimalPipelineStateId::FRefCountedGraphicsMinimalPipelineState,0>,TSizedDefaultAllocator<32>_>
                *)&FGraphicsMinimalPipelineStateId::PersistentIdTable,(FHashType)(uint)local_res8,
               (FGraphicsMinimalPipelineStateInitializer *)(ulonglong)(uVar10 & 0x7fffffff),
               (FRefCountedGraphicsMinimalPipelineState *)param_7,local_88);
    uVar14 = local_res8[0];
  }
  uVar10 = 0;
  if ((int)uVar14 < (int)FGraphicsMinimalPipelineStateId::PersistentIdTable._8_4_) {
    uVar10 = ~uVar14 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar8 = FGraphicsMinimalPipelineStateId::PersistentIdTable._0_8_;
  LOCK();
  piVar1 = (int *)((longlong)(int)uVar14 * 0xa8 + 0xa0 +
                  FGraphicsMinimalPipelineStateId::PersistentIdTable._0_8_);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    if (FGraphicsMinimalPipelineStateId::NeedsShaderInitialisation == false) {
      FGraphicsMinimalPipelineStateId::NeedsShaderInitialisation = true;
    }
    LOCK();
    FGraphicsMinimalPipelineStateId::ReffedItemCount =
         (atomic<int>)((int)FGraphicsMinimalPipelineStateId::ReffedItemCount + 1);
    UNLOCK();
  }
  uVar5 = *(undefined4 *)((longlong)(int)uVar14 * 0xa8 + 0xa4 + uVar8);
  if (uVar12 == 0xffffffff) {
    ReleaseSRWLockExclusive((PSRWLOCK)&FGraphicsMinimalPipelineStateId::PersistentIdTableLock);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&FGraphicsMinimalPipelineStateId::PersistentIdTableLock);
  }
  if (0x3ffffffe < uVar14) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableId.GetIndex() < (((uint32) 0xffffffff) >> 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x1dc,L"Persistent FGraphicsMinimalPipelineStateId table overflow!");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_80 = uVar14 & 0x3fffffff | 0x80000000;
  uStack_7c = uVar5;
  FMeshDrawCommand::SetDrawParametersAndFinalize
            (param_9,param_1,param_2,
             (FGraphicsMinimalPipelineStateId)
             (CONCAT44(uVar5,uVar14) & 0xffffffff3fffffff | 0x80000000),param_8);
  local_58 = local_58 & 0xffffffc0;
  TVar3 = this->CurrMeshPass;
  local_78 = 0;
  uStack_70 = 0xffffffffffffffff;
  local_68 = 0;
  (this->CommandInfo).SortKey.field0_0x0.PackedData = 0;
  (this->CommandInfo).CommandIndex = -1;
  (this->CommandInfo).StateBucketId = -1;
  uStack_64 = 0xffffffff;
  uStack_60 = CONCAT31(uStack_60._1_3_,TVar3 & 0x7f | (Type)uStack_60 & 0x80);
  (this->CommandInfo).CullingPayload.field0_0x0 = (FMeshDrawCommandCullingPayload_u_0)0x0;
  (this->CommandInfo).CullingPayload.DynamicMeshBoundsIndex = -1;
  *(ulonglong *)&(this->CommandInfo).field_0x18 =
       CONCAT44(uStack_5c,uStack_60) & 0xffffffdbffffffff | 0x1b00000000;
  *(uint *)&(this->CommandInfo).field_0x20 = local_58;
  (this->CommandInfo).SortKey.field0_0x0.BasePass = (<unnamed_type_BasePass>)param_5.field0_0x0;
  uVar12 = 0;
  if (param_2 < (param_1->Elements).ArrayNum) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  if (uVar12 == 0) {
    uStack_5c = uStack_5c & 0xffffffdb | 0x1b;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVar6 = (param_1->Elements).AllocatorInstance.SecondaryData;
  FVar15 = (ForElementType<FMeshBatchElement>)param_1;
  if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar15 = FVar6;
  }
  fVar16 = *(float *)((longlong)param_2 * 0x98 + 0x78 + (longlong)FVar15);
  if (__real_40fff800 <= fVar16) {
    fVar16 = __real_40fff800;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar17 = *(float *)((longlong)param_2 * 0x98 + 0x74 + (longlong)FVar15);
  if (__real_40fff800 <= fVar17) {
    fVar17 = __real_40fff800;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  FVar13.DynamicMeshBoundsIndex = param_1->DynamicMeshBoundsIndex;
  FVar13.field0_0x0.PackedData =
       ((uint)(longlong)(fVar17 * __real_44800000) & 0x1fff |
       ((uint)(longlong)(fVar16 * __real_44800000) & 0x1fff) << 0xd) << 4 |
       (int)param_1->LODIndex & 0xfU;
  (this->CommandInfo).CullingPayload = FVar13;
  uVar4 = (this->CommandInfo).field_0x20;
  *(ERasterizerCullMode *)&(this->CommandInfo).field_0x1c =
       (param_4 * 8 ^ local_res20) & 0xffffffc7 ^
       (local_res20 ^ *(ERasterizerFillMode *)&(this->CommandInfo).field_0x1c) & 0xffffffc0 ^
       param_4 * 8;
  (this->CommandInfo).field_0x20 =
       ((this->CommandInfo).Flags ^ param_6) &
       (FetchInstanceCountFromScene|PreserveInstanceOrder|ForceInstanceCulling|NumBits|
       MaterialUsesWorldPositionOffset) ^ uVar4;
  if (this->bUseGPUScene != false) {
    (param_9->DebugData).PrimitiveSceneProxyIfNotUsingStateBuckets = (FPrimitiveSceneProxy *)0x0;
  }
  return;
}

// GetCommandInfoAndReset @ 144f10640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FCachedMeshDrawCommandInfo * __thiscall
FCachedPassMeshDrawListContext::GetCommandInfoAndReset
          (FCachedPassMeshDrawListContext *this,FCachedMeshDrawCommandInfo *__return_storage_ptr__)

{
  undefined4 uVar1;
  FMeshDrawCommandSortKey_u_0 FVar2;
  FMeshDrawCommandCullingPayload FVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)&(this->CommandInfo).field_0x20;
  FVar2 = (this->CommandInfo).SortKey.field0_0x0;
  iVar5 = (this->CommandInfo).CommandIndex;
  iVar6 = (this->CommandInfo).StateBucketId;
  FVar3 = (this->CommandInfo).CullingPayload;
  uVar4 = *(undefined8 *)&(this->CommandInfo).field_0x18;
  (this->CommandInfo).CommandIndex = -1;
  (this->CommandInfo).StateBucketId = -1;
  (__return_storage_ptr__->SortKey).field0_0x0 = FVar2;
  __return_storage_ptr__->CommandIndex = iVar5;
  __return_storage_ptr__->StateBucketId = iVar6;
  __return_storage_ptr__->CullingPayload = FVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = uVar1;
  return __return_storage_ptr__;
}

// ReserveMemoryForCommands @ 144f238a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FCachedPassMeshDrawListContext::ReserveMemoryForCommands
          (FCachedPassMeshDrawListContext *this,int param_1)

{
  return;
}

// operator() @ 1504c9e50

bool __thiscall
`FCachedPassMeshDrawListContext::AddCommand'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6575436050745788300>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6575436050745788300>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

