// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// AnyThreadTask @ 144ef7d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FMeshDrawCommandInitResourcesTask::AnyThreadTask(FMeshDrawCommandInitResourcesTask *this)

{
  uint uVar1;
  FMeshDrawCommandPassSetupTaskContext *pFVar2;
  FIteratorState FVar3;
  FMinimalBoundShaderStateInput *this_00;
  undefined4 extraout_var;
  TRobinHoodHashSet<FGraphicsMinimalPipelineStateInitializer,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  *this_01;
  bool bVar4;
  uint local_res8 [2];
  FBoundShaderStateInput local_48;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FMeshDrawCommandInitResourcesTask::AnyThreadTask(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1205,"MeshDrawCommandInitResourcesTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
               ,0x4b5);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FMeshDrawCommandInitResourcesTask::AnyThreadTask(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1205);
  }
  pFVar2 = this->Context;
  if (pFVar2->NeedsShaderInitialisation != false) {
    this_01 = &pFVar2->MinimalPipelineStatePassSet;
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
    ::FData::Next((FData *)this_01,(FIteratorState)(uint)local_res8);
    uVar1 = *(uint *)&(pFVar2->MinimalPipelineStatePassSet).field_0x8;
    while (local_res8[0] != uVar1) {
      this_00 = (FMinimalBoundShaderStateInput *)
                Experimental::RobinHoodHashTable_Private::
                TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
                ::FData::Get((FData *)this_01,local_res8[0]);
      FMinimalBoundShaderStateInput::AsBoundShaderState(this_00,&local_48);
      FVar3 = Experimental::RobinHoodHashTable_Private::
              TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              ::FData::Next((FData *)this_01,(uint)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar3.Index);
    }
  }
  if (!bVar4) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

