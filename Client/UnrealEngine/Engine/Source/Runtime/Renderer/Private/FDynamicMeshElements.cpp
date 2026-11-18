// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FDynamicMeshElements @ 145520880

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVisibilityTaskData::FDynamicMeshElements::~FDynamicMeshElements(FDynamicMeshElements *this)

{
  FPipe *pFVar1;
  FDynamicPrimitive *pFVar2;
  FQueuedCommandList *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<FViewCommands> FVar7;
  
  DestructItems<UE::Tasks::FPipe,int>
            ((this->DynamicPrimitiveTaskPipes).AllocatorInstance.Data,
             (this->DynamicPrimitiveTaskPipes).ArrayNum);
  pFVar1 = (this->DynamicPrimitiveTaskPipes).AllocatorInstance.Data;
  if (pFVar1 != (FPipe *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  pFVar2 = (this->DynamicPrimitives).AllocatorInstance.Data;
  if (pFVar2 != (FDynamicPrimitive *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  FVar7 = (this->ViewCommandsPerView).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FViewCommands>)0x0) {
    FVar7 = (ForElementType<FViewCommands>)&this->ViewCommandsPerView;
  }
  DestructItems<FViewCommands,int>((FViewCommands *)FVar7,(this->ViewCommandsPerView).ArrayNum);
  FVar7 = (this->ViewCommandsPerView).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FViewCommands>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  if ((this->ContextContainer).CommandLists.ArrayNum != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CommandLists.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                       ,0x1086,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->ContextContainer).CommandLists.AllocatorInstance.Data;
  if (pFVar3 != (FQueuedCommandList *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar3);
  }
  pFVar4 = (this->ContextContainer).Contexts.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

