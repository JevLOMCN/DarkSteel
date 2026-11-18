// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FGatherInstancesTaskData @ 1452ff8c0

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
RayTracing::FGatherInstancesTaskData::~FGatherInstancesTaskData(FGatherInstancesTaskData *this)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FRayTracingShaderBindingData *pFVar5;
  FTaskBase *pFVar6;
  FTaskEvent FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  
  pFVar5 = (this->VisibleShaderBindings).AllocatorInstance.Data;
  if (pFVar5 != (FRayTracingShaderBindingData *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
  }
  pFVar6 = (this->VisibleRayTracingShaderBindingsFinalizeTask).Pimpl.Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar6 = (this->AddUsedStreamingHandlesTask).Pimpl.Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  FVar7 = this->GatherDynamicRayTracingInstancesPrerequisites;
  if (FVar7 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar7 + 0x30);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)FVar7)(FVar7,1);
    }
  }
  pFVar6 = (this->GatherDynamicRayTracingInstancesTask).Pimpl.Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  if ((this->FinalizeGatherRelevantPrimitivesPipe).TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!HasWork()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                        ,0x2a,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FinalizeGatherRelevantPrimitivesPipe).EmptyEventRef.SharedReferenceCount.
             ReferenceController);
  if ((this->AddInstancesPipe).TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!HasWork()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                        ,0x2a,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AddInstancesPipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
  pFVar8 = (this->ViewSceneOptions).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar8 = (this->Views).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  DestructItems<RayTracing::FGatherInstancesViewTaskData,int>
            ((FGatherInstancesViewTaskData *)(this->ViewTaskDatas).AllocatorInstance.Data,
             (this->ViewTaskDatas).ArrayNum);
  pFVar8 = (this->ViewTaskDatas).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

