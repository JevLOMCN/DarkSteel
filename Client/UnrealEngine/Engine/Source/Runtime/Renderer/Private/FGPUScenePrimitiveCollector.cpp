// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// Add @ 1448fccc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGPUScenePrimitiveCollector::Add
          (FGPUScenePrimitiveCollector *this,FMeshBatchDynamicPrimitiveData *param_1,
          FPrimitiveUniformShaderParameters *param_2,uint param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  FGPUSceneWriteDelegate *pFVar4;
  FUploadData *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  EGPUSceneGPUWritePass EVar9;
  undefined1 uVar10;
  ushort uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> FVar16;
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> FVar17;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar18;
  FMeshBatchDynamicPrimitiveData *this_00;
  uint local_28 [4];
  
  if (this->GPUSceneDynamicContext == (FGPUSceneDynamicContext *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("GPUSceneDynamicContext != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                        ,0xcb,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (this->bCommitted != false) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bCommitted",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                        ,0xcc,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVar16 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)this->UploadData;
  if (FVar16 == (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
    FVar16 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)
             FGPUSceneDynamicContext::AllocateDynamicPrimitiveData(this->GPUSceneDynamicContext);
    this->UploadData = (FUploadData *)FVar16;
  }
  uVar3 = *(int *)((longlong)FVar16 + 0x348);
  uVar13 = uVar3;
  if (uVar3 == *(int *)((longlong)FVar16 + 0x34c)) {
    uVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>_>
                       (0x868,(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)FVar16,
                        (int *)((longlong)FVar16 + 0x34c));
  }
  *(uint *)((longlong)FVar16 + 0x348) = uVar13 + 1;
  FVar17 = *(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)
            ((longlong)FVar16 + 0x340);
  if (*(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)((longlong)FVar16 + 0x340) ==
      (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
    FVar17 = FVar16;
  }
  this_00 = (FMeshBatchDynamicPrimitiveData *)((longlong)(int)uVar13 * 0x68 + (longlong)FVar17);
  DefaultConstructItems<FGPUScenePrimitiveCollector::FPrimitiveData,int>(this_00,1);
  if (param_1 != (FMeshBatchDynamicPrimitiveData *)0x0) {
    uVar13 = (param_1->InstanceSceneData).ArrayNum;
    pFVar4 = (param_1->DataWriterGPU).GPUSceneWriteDelegate;
    if ((uVar13 != param_3) && ((pFVar4 == (FGPUSceneWriteDelegate *)0x0 || (uVar13 != 0)))) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("uint32(InstanceSceneData.Num()) == NumInstances || (bGPUWrite && InstanceSceneData.Num() == 0)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshBatch.h"
                          ,0xd1,
                          L"DynamicPrimitiveData provided should have %u instances in InstanceSceneData. Found %d"
                         );
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if ((((param_1->PayloadDataFlags & 8) != 0) &&
        (uVar13 = (param_1->InstanceDynamicData).ArrayNum, uVar13 != param_3)) &&
       ((pFVar4 == (FGPUSceneWriteDelegate *)0x0 || (uVar13 != 0)))) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("uint32(InstanceDynamicData.Num()) == NumInstances || (bGPUWrite && InstanceDynamicData.Num() == 0)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshBatch.h"
                          ,0xd6,
                          L"DynamicPrimitiveData provided should have %u elements in InstanceDynamicData. Found %d"
                         );
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if ((param_1->PayloadDataFlags & 4) != 0) {
      if (param_1->NumInstanceCustomDataFloats == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumInstanceCustomDataFloats > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshBatch.h"
                            ,0xdb,
                            L"DynamicPrimitiveData provided has the custom data flag set, but NumInstanceCustomDataFloats == 0"
                           );
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar15 = (param_1->InstanceCustomData).ArrayNum;
      if ((iVar15 != param_3 * param_1->NumInstanceCustomDataFloats) &&
         ((pFVar4 == (FGPUSceneWriteDelegate *)0x0 || (iVar15 != 0)))) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("uint32(InstanceCustomData.Num()) == NumInstances * NumInstanceCustomDataFloats || (bGPUWrite && InstanceCustomData.Num() == 0)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshBatch.h"
                            ,0xde,
                            L"DynamicPrimitiveData provided should have %u elements in InstanceCustomData. Found %d"
                           );
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    iVar15 = (param_1->InstanceSceneData).ArrayNum;
    uVar8 = *(undefined4 *)&(param_1->InstanceSceneData).field_0xc;
    (this_00->InstanceSceneData).DataPtr = (param_1->InstanceSceneData).DataPtr;
    (this_00->InstanceSceneData).ArrayNum = iVar15;
    *(undefined4 *)&(this_00->InstanceSceneData).field_0xc = uVar8;
    iVar15 = (param_1->InstanceDynamicData).ArrayNum;
    uVar8 = *(undefined4 *)&(param_1->InstanceDynamicData).field_0xc;
    (this_00->InstanceDynamicData).DataPtr = (param_1->InstanceDynamicData).DataPtr;
    (this_00->InstanceDynamicData).ArrayNum = iVar15;
    *(undefined4 *)&(this_00->InstanceDynamicData).field_0xc = uVar8;
    iVar15 = (param_1->InstanceLocalBounds).ArrayNum;
    uVar8 = *(undefined4 *)&(param_1->InstanceLocalBounds).field_0xc;
    (this_00->InstanceLocalBounds).DataPtr = (param_1->InstanceLocalBounds).DataPtr;
    (this_00->InstanceLocalBounds).ArrayNum = iVar15;
    *(undefined4 *)&(this_00->InstanceLocalBounds).field_0xc = uVar8;
    iVar15 = (param_1->InstanceCustomData).ArrayNum;
    uVar8 = *(undefined4 *)&(param_1->InstanceCustomData).field_0xc;
    (this_00->InstanceCustomData).DataPtr = (param_1->InstanceCustomData).DataPtr;
    (this_00->InstanceCustomData).ArrayNum = iVar15;
    *(undefined4 *)&(this_00->InstanceCustomData).field_0xc = uVar8;
    EVar9 = param_1->DataWriterGPUPass;
    uVar10 = param_1->field_0x49;
    uVar11 = param_1->PayloadDataFlags;
    uVar13 = param_1->NumInstanceCustomDataFloats;
    (this_00->DataWriterGPU).GPUSceneWriteDelegate = (param_1->DataWriterGPU).GPUSceneWriteDelegate;
    this_00->DataWriterGPUPass = EVar9;
    this_00->field_0x49 = uVar10;
    this_00->PayloadDataFlags = uVar11;
    this_00->NumInstanceCustomDataFloats = uVar13;
  }
  uVar13 = FMeshBatchDynamicPrimitiveData::GetPayloadFloat4Stride(this_00);
  this_00[1].InstanceSceneData.DataPtr = (FInstanceSceneData *)param_2;
  this_00[1].InstanceSceneData.ArrayNum = param_3;
  *(uint *)&this_00[1].InstanceSceneData.field_0xc = this->UploadData->TotalInstanceCount;
  if ((int)uVar13 < 1) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = this->UploadData->InstancePayloadDataFloat4Count;
  }
  *(uint *)&this_00[1].InstanceDynamicData.DataPtr = uVar14;
  puVar2 = &this->UploadData->TotalInstanceCount;
  *puVar2 = *puVar2 + param_3;
  puVar2 = &this->UploadData->InstancePayloadDataFloat4Count;
  *puVar2 = *puVar2 + uVar13 * param_3;
  if ((this_00->DataWriterGPU).GPUSceneWriteDelegate != (FGPUSceneWriteDelegate *)0x0) {
    pFVar5 = this->UploadData;
    pTVar18 = &pFVar5->GPUWritePrimitives;
    pFVar6 = (pTVar18->AllocatorInstance).Data;
    local_28[0] = uVar3;
    if ((pFVar6 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 <
        pFVar6 + (longlong)(pFVar5->GPUWritePrimitives).ArrayMax * 4)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar15 = (pFVar5->GPUWritePrimitives).ArrayNum;
    piVar1 = &(pFVar5->GPUWritePrimitives).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar18->AllocatorInstance,piVar1);
    }
    (pFVar5->GPUWritePrimitives).ArrayNum = iVar15 + 1;
    *(uint *)((pTVar18->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_28[0];
  }
  *param_4 = uVar3;
  *param_5 = *(uint *)&this_00[1].InstanceSceneData.field_0xc;
  return;
}

// AllocateUploadData @ 144900230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUploadData * __thiscall
FGPUScenePrimitiveCollector::AllocateUploadData(FGPUScenePrimitiveCollector *this)

{
  FUploadData *pFVar1;
  
  pFVar1 = FGPUSceneDynamicContext::AllocateDynamicPrimitiveData(this->GPUSceneDynamicContext);
  return pFVar1;
}

// CheckPrimitiveProcessed @ 144901720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGPUScenePrimitiveCollector::CheckPrimitiveProcessed
          (FGPUScenePrimitiveCollector *this,uint param_1,FGPUScene *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> FVar6;
  
  if (((this->UploadData == (FUploadData *)0x0) || (this->bCommitted == false)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UploadData != nullptr && bCommitted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x105,
                         L"Dynamic Primitive index %u has not been fully processed. The collector hasn\'t collected anything or hasn\'t been uploaded."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->UploadData != (FUploadData *)0x0) {
    if (((uint)(this->UploadData->PrimitiveData).ArrayNum <= param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrimitiveIndex < uint32(UploadData->PrimitiveData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                           ,0x109,
                           L"Dynamic Primitive index %u has not been fully processed. The specified index is out of range [0,%d)."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar6 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)this->UploadData;
    uVar3 = 0;
    if ((int)param_1 < *(int *)((longlong)FVar6 + 0x348)) {
      uVar3 = ~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)((longlong)FVar6 + 0x340) !=
        (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
      FVar6 = *(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)
               ((longlong)FVar6 + 0x340);
    }
    if (*(longlong *)((longlong)(int)param_1 * 0x68 + 0x40 + (longlong)FVar6) == 0) {
      return;
    }
    if (*(char *)((longlong)(int)param_1 * 0x68 + 0x48 + (longlong)FVar6) == -1) {
      return;
    }
  }
  if (((this->bCommitted == false) && (this->UploadData != (FUploadData *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCommitted || UploadData == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                         ,0x6e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->PrimitiveIdRange).LowerBound.Type.Value == '\x02') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2->LastDeferredGPUWritePass == None) {
    pFVar4 = param_2->DeferredGPUWritePassDelegates[0].AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)param_2->DeferredGPUWritePassDelegates[0].ArrayNum * 0x20;
    while( true ) {
      if (pFVar4 == pFVar5) {
        return;
      }
      if (*(int *)(pFVar4 + 0xc) == (this->PrimitiveIdRange).LowerBound.Value + param_1) break;
      pFVar4 = pFVar4 + 0x20;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GPUScene.HasPendingGPUWrite(PrimitiveId)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                       ,0x115,
                       L"Dynamic Primitive index %u has not been fully processed. The GPU scene still has a pending deferred write for the primitive, it has not been fully processed yet."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Commit @ 144902180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUScenePrimitiveCollector::Commit(FGPUScenePrimitiveCollector *this)

{
  code *pcVar1;
  TRangeBound<int> TVar2;
  bool bVar3;
  TRange<int> *pTVar4;
  TRange<int> local_18;
  
  if (this->bCommitted != false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_610239441725816548>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                       ,0x11c,"!bCommitted");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->UploadData != (FUploadData *)0x0) {
    pTVar4 = FGPUScene::CommitPrimitiveCollector
                       (this->GPUSceneDynamicContext->GPUScene,&local_18,this);
    TVar2 = pTVar4->UpperBound;
    (this->PrimitiveIdRange).LowerBound = pTVar4->LowerBound;
    (this->PrimitiveIdRange).UpperBound = TVar2;
  }
  this->bCommitted = true;
  return;
}

// GetPrimitiveShaderParameters @ 14491d5d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveUniformShaderParameters * __thiscall
FGPUScenePrimitiveCollector::GetPrimitiveShaderParameters
          (FGPUScenePrimitiveCollector *this,int param_1)

{
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> FVar1;
  
  FVar1 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)this->UploadData;
  if (((FVar1 != (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) && (param_1 < 0))
     && ((int)(param_1 & 0x7fffffffU) < *(int *)((longlong)FVar1 + 0x348))) {
    if (*(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)((longlong)FVar1 + 0x340) !=
        (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
      FVar1 = *(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)
               ((longlong)FVar1 + 0x340);
    }
    return *(FPrimitiveUniformShaderParameters **)
            ((ulonglong)(param_1 & 0x7fffffffU) * 0x68 + 0x50 + (longlong)FVar1);
  }
  return (FPrimitiveUniformShaderParameters *)0x0;
}

