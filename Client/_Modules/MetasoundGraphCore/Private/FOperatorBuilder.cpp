// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 19

// FOperatorBuilder @ 14ad3ba50

FOperatorBuilder * __thiscall
Metasound::FOperatorBuilder::FOperatorBuilder
          (FOperatorBuilder *this,FOperatorBuilderSettings *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&___7FOperatorBuilder_Metasound__6B_;
  bVar1 = param_1->bValidateNoCyclesInGraph;
  bVar2 = param_1->bValidateNoDuplicateInputs;
  bVar3 = param_1->bValidateVerticesExist;
  bVar4 = param_1->bValidateEdgeDataTypesMatch;
  bVar5 = param_1->bValidateOperatorOutputsAreBound;
  bVar6 = param_1->bFailOnAnyError;
  bVar7 = param_1->bPopulateInternalDataReferences;
  (this->BuilderSettings).PruningMode = param_1->PruningMode;
  (this->BuilderSettings).bValidateNoCyclesInGraph = bVar1;
  (this->BuilderSettings).bValidateNoDuplicateInputs = bVar2;
  (this->BuilderSettings).bValidateVerticesExist = bVar3;
  (this->BuilderSettings).bValidateEdgeDataTypesMatch = bVar4;
  (this->BuilderSettings).bValidateOperatorOutputsAreBound = bVar5;
  (this->BuilderSettings).bFailOnAnyError = bVar6;
  (this->BuilderSettings).bPopulateInternalDataReferences = bVar7;
  bVar1 = param_1->bProfileOperators;
  (this->BuilderSettings).bEnableOperatorRebind = param_1->bEnableOperatorRebind;
  (this->BuilderSettings).bProfileOperators = bVar1;
  return this;
}

// ~FOperatorBuilder @ 14ad3dfa0

void __thiscall Metasound::FOperatorBuilder::~FOperatorBuilder(FOperatorBuilder *this)

{
  this->_padding_ = (longlong)&___7FOperatorBuilder_Metasound__6B_;
  return;
}

// BuildDynamicGraphOperator @ 14ad48c60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FOperatorBuilder::BuildDynamicGraphOperator
          (FOperatorBuilder *this,FBuildDynamicGraphOperatorParams *param_1,FBuildResults *param_2)

{
  FDynamicOperatorUpdateCallbacks *pFVar1;
  FOperatorSettings *pFVar2;
  bool bVar3;
  bool bVar4;
  FDynamicOperator *pFVar5;
  FGraphOperatorData *pFVar6;
  FDynamicGraphOperatorData *this_00;
  FBuildResults *in_R9;
  bool bVar7;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  local_38;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::BuildDynamicGraphOperator");
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId109,"Metasound::FOperatorBuilder::BuildDynamicGraphOperator"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x6d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId109);
  }
  pFVar1 = *(FDynamicOperatorUpdateCallbacks **)&(param_2->InternalDataReferences).field_0x40;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pFVar5 = ::operator_new(0x1e0);
  if (pFVar5 == (FDynamicOperator *)0x0) {
    pFVar5 = (FDynamicOperator *)0x0;
  }
  else {
    local_38.Object =
         *(TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
           **)&(param_2->InternalDataReferences).field_0x30;
    local_38.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(param_2->InternalDataReferences).field_0x38;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5 = DynamicGraph::FDynamicOperator::FDynamicOperator(pFVar5,pFVar2,&local_38,pFVar1);
  }
  pFVar6 = (FGraphOperatorData *)
           (**(code **)(*(longlong *)&pFVar5->field_0x8 + 8))(&pFVar5->field_0x8);
  bVar4 = BuildGraphOperatorData(this,(FBuildGraphOperatorParams *)param_2,pFVar6,&local_48,in_R9);
  if (bVar4) {
    this_00 = (FDynamicGraphOperatorData *)
              (**(code **)(*(longlong *)&pFVar5->field_0x8 + 8))(&pFVar5->field_0x8);
    DynamicGraph::FDynamicGraphOperatorData::InitTables(this_00);
    param_1->_padding_ = (longlong)pFVar5;
  }
  else {
    param_1->_padding_ = 0;
    if (pFVar5 != (FDynamicOperator *)0x0) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// BuildGraphOperator @ 14ad48e00

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FOperatorBuilder::BuildGraphOperator
          (FOperatorBuilder *this,FBuildGraphOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  IGraph *pIVar6;
  FGraphOperatorData *pFVar7;
  FDynamicGraphOperatorData *this_00;
  FBuildResults *in_R9;
  bool bVar8;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> local_48;
  
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (!bVerboseTraceEvents)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::BuildGraphOperator");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId95,"Metasound::FOperatorBuilder::BuildGraphOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x5f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId95);
  }
  if ((this->BuilderSettings).bEnableOperatorRebind == false) {
    BuildStaticGraphOperator(this,param_1,param_2);
  }
  else {
    bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
    if (bVar2) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"Metasound::FOperatorBuilder::BuildRebindableGraphOperator");
    }
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&::__CpuProfilerEventSpecId127,
                 "Metasound::FOperatorBuilder::BuildRebindableGraphOperator",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,0x7f);
      FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
    }
    pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pIVar6 = ::operator_new(0x1c0);
    if (pIVar6 == (IGraph *)0x0) {
      pIVar6 = (IGraph *)0x0;
    }
    else {
      *pIVar6 = (IGraph)&FRebindableGraphOperator::
                         _vftable__for__Metasound__TExecutableOperator<Metasound::FRebindableGraphOperator>__
      ;
      pIVar6[1] = (IGraph)&FRebindableGraphOperator::
                           _vftable__for__Metasound__DynamicGraph__IDynamicGraphInPlaceBuildable__;
      DynamicGraph::FDynamicGraphOperatorData::FDynamicGraphOperatorData
                ((FDynamicGraphOperatorData *)(pIVar6 + 2),pFVar1);
    }
    pFVar7 = (FGraphOperatorData *)(**(code **)((longlong)pIVar6[1] + 8))(pIVar6 + 1);
    bVar5 = BuildGraphOperatorData(this,(FBuildGraphOperatorParams *)param_2,pFVar7,&local_48,in_R9)
    ;
    if (bVar5) {
      this_00 = (FDynamicGraphOperatorData *)(**(code **)((longlong)pIVar6[1] + 8))(pIVar6 + 1);
      DynamicGraph::FDynamicGraphOperatorData::InitTables(this_00);
      param_1->Graph = pIVar6;
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      param_1->Graph = (IGraph *)0x0;
      if (pIVar6 != (IGraph *)0x0) {
        (**(code **)*pIVar6)(pIVar6,1);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (bVar2) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// BuildGraphOperatorData @ 14ad49070

bool __thiscall
Metasound::FOperatorBuilder::BuildGraphOperatorData
          (FOperatorBuilder *this,FBuildGraphOperatorParams *param_1,FGraphOperatorData *param_2,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FBuildResults *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  IGraph *pIVar4;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *this_00;
  FMetasoundEnvironment *this_01;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FNameEntryId FVar14;
  FBuildStatus FVar15;
  longlong *plVar16;
  ulonglong uVar17;
  FInvalidConnectionDataTypeError *this_02;
  FInvalidConnectionDataTypeError *pFVar18;
  undefined8 *puVar19;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar20;
  TArray<FGuid,TSizedDefaultAllocator<32>_> **ppTVar21;
  TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
  *pTVar22;
  FVertexInterface *pFVar23;
  FVertexInterfaceData *pFVar24;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FDataEdge *pFVar25;
  ForAnyElementType FVar26;
  FName FVar27;
  uint uVar28;
  FDataEdge *pFVar29;
  FName *pFVar30;
  longlong lVar31;
  FDirectedGraphAlgoAdapter *pFVar32;
  bool bVar33;
  uint uVar34;
  FNameEntryId FVar35;
  uint uVar36;
  undefined1 local_186 [2];
  uint local_184;
  ForAnyElementType local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined1 local_16f [7];
  FName local_168;
  FName local_160;
  FName FStack_158;
  FInvalidConnectionDataTypeError *local_150;
  FName local_148;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  local_140;
  undefined8 local_130;
  undefined8 *local_128;
  FScriptContainerElement *local_120;
  FName local_118;
  FName local_110;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_108;
  undefined1 local_f8 [8];
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  ForAnyElementType local_c8;
  FBuildResults *local_c0;
  FGraphOperatorData *local_b8;
  ForAnyElementType local_b0;
  FVertexInterfaceData local_a8;
  undefined1 local_58 [24];
  
  iVar7 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::BuildGraphOperator");
  }
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId168,"Metasound::FOperatorBuilder::BuildGraphOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0xa8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId168);
  }
  uVar28 = 0;
  local_130 = (FName *)((ulonglong)local_130._4_4_ << 0x20);
  if ((this->BuilderSettings).bValidateVerticesExist != false) {
    bVar8 = FGraphLinter::ValidateVerticesExist(param_1->Graph,&param_4->Errors);
    uVar28 = 0;
    if (!bVar8) {
      uVar28 = 2;
    }
    local_130 = (FName *)CONCAT44(local_130._4_4_,uVar28);
  }
  if ((this->BuilderSettings).bValidateEdgeDataTypesMatch != false) {
    bVar8 = true;
    plVar16 = (longlong *)(**(code **)((longlong)*param_1->Graph + 0x58))();
    pFVar25 = (FDataEdge *)*plVar16;
    uVar17 = (ulonglong)(int)plVar16[1];
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,(int)plVar16[1]);
    pFVar30 = (FName *)&(pFVar25->From).Vertex.field_0x10;
    pFVar29 = pFVar25 + uVar17;
    while( true ) {
      if ((int)plVar16[1] != (int)uVar17) {
        local_186[0] = 0;
        `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_186);
      }
      if (pFVar25 == pFVar29) break;
      bVar9 = IsCastable(*pFVar30,pFVar30[5]);
      if (!bVar9) {
        this_02 = ::operator_new(0x60);
        pFVar18 = (FInvalidConnectionDataTypeError *)0x0;
        if (this_02 != (FInvalidConnectionDataTypeError *)0x0) {
          pFVar18 = FInvalidConnectionDataTypeError::FInvalidConnectionDataTypeError
                              (this_02,pFVar25);
        }
        pFVar3 = (param_4->Errors).AllocatorInstance.Data;
        local_150 = pFVar18;
        if (((pFVar3 <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 <
             pFVar3 + (longlong)(param_4->Errors).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar12 = (param_4->Errors).ArrayNum;
        piVar1 = &(param_4->Errors).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)param_4,piVar1);
        }
        bVar8 = false;
        (param_4->Errors).ArrayNum = iVar12 + 1;
        *(FInvalidConnectionDataTypeError **)
         ((param_4->Errors).AllocatorInstance.Data + (longlong)iVar12 * 8) = local_150;
        local_150 = (FInvalidConnectionDataTypeError *)0x0;
      }
      uVar17 = (ulonglong)local_128 & 0xffffffff;
      pFVar25 = pFVar25 + 1;
      pFVar30 = pFVar30 + 0xd;
    }
    uVar28 = (uint)local_130;
    if (!bVar8) {
      uVar28 = 2;
    }
  }
  if ((((this->BuilderSettings).bValidateNoDuplicateInputs != false) &&
      (bVar8 = FGraphLinter::ValidateNoDuplicateInputs(param_1->Graph,&param_4->Errors), !bVar8)) &&
     (uVar28 < 3)) {
    uVar28 = 2;
  }
  if (((this->BuilderSettings).bFailOnAnyError == false) < uVar28) {
    bVar8 = false;
    goto LAB_14ad49a7d;
  }
  pIVar4 = param_1->Graph;
  puVar19 = ::operator_new(0x260);
  if (puVar19 == (undefined8 *)0x0) {
    local_128 = (undefined8 *)0x0;
    pFVar32 = (FDirectedGraphAlgoAdapter *)&DAT_00000010;
  }
  else {
    puVar19[1] = 0;
    *puVar19 = UE::Core::Private::PimplPtr::DeleterFunc<Metasound::FDirectedGraphAlgoAdapter>;
    local_128 = puVar19;
    FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter
              ((FDirectedGraphAlgoAdapter *)(puVar19 + 2),pIVar4);
    pFVar32 = (FDirectedGraphAlgoAdapter *)(puVar19 + 2);
    if (pFVar32 == (FDirectedGraphAlgoAdapter *)0x0) {
      local_184 = 0xd6;
      AddBuildError<Metasound::FInternalError,char_const_(&)[122],int>
                (&param_4->Errors,
                 (char (*) [122])
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,(int *)&local_184);
      bVar8 = false;
      goto LAB_14ad49a7d;
    }
  }
  local_140.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Pairs.ArrayNum = 0;
  local_140.Pairs.ArrayMax = 0;
  this_00 = &param_1->Environment->Variables;
  FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
  pTVar20 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(this_00,local_148);
  if (pTVar20 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pFVar30 = (FName *)param_1->Environment;
LAB_14ad49690:
    FMetasoundEnvironment::operator=
              ((FMetasoundEnvironment *)&local_140,(FMetasoundEnvironment *)pFVar30);
    local_160.ComparisonIndex.Value = 0;
    local_160.Number = 0;
    FStack_158.ComparisonIndex.Value = 0;
    FStack_158.Number = 0;
    puVar19 = (undefined8 *)(**(code **)((longlong)*param_1->Graph + 0x10))();
    FVar14.Value = FStack_158.ComparisonIndex.Value;
    if (FStack_158.ComparisonIndex.Value == FStack_158.Number) {
      FVar14.Value = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,(ForAnyElementType *)&local_160,(int *)&FStack_158.Number);
    }
    FStack_158.ComparisonIndex.Value = FVar14.Value + 1;
    uVar6 = puVar19[1];
    puVar2 = (undefined8 *)((longlong)local_160 + (longlong)(int)FVar14.Value * 0x10);
    *puVar2 = *puVar19;
    puVar2[1] = uVar6;
    FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
    puVar19 = ::operator_new(0x20);
    if (puVar19 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)0x0;
    }
    else {
      *puVar19 = &
                 ___7__TMetasoundEnvironmentVariable_V__TArray_UFGuid__V__TSizedDefaultAllocator__0CA______Metasound__6B_
      ;
      *(FName *)(puVar19 + 1) = local_168;
      ((ForAnyElementType *)(puVar19 + 2))->Data = (FScriptContainerElement *)0x0;
      local_110 = local_160;
      local_184 = FStack_158.ComparisonIndex.Value;
      *(uint *)(puVar19 + 3) = FStack_158.ComparisonIndex.Value;
      if (FStack_158.ComparisonIndex.Value == 0) {
        *(int *)((longlong)puVar19 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,FStack_158.ComparisonIndex.Value,0,(ForAnyElementType *)(puVar19 + 2),
                   FStack_158.ComparisonIndex.Value,(int *)((longlong)puVar19 + 0x1c));
        memcpy((void *)puVar19[2],(void *)local_110,(longlong)(int)local_184 << 4);
      }
    }
    pTVar22 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::AllocateMemoryForEmplace<FName_const_&>(&local_140,&local_168);
    *(uint *)&pTVar22->field_0x0 = local_168.ComparisonIndex.Value;
    *(uint *)&pTVar22->field_0x4 = local_168.Number;
    *(undefined8 **)&pTVar22->field_0x8 = puVar19;
    if (local_160 != (FName)0x0) {
      FMemory::Free((void *)local_160);
    }
  }
  else {
    pTVar20 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(this_00,local_148);
    if ((pTVar20 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    ppTVar21 = (TArray<FGuid,TSizedDefaultAllocator<32>_> **)
               (**(code **)((longlong)*pTVar20->Ptr + 0x10))();
    pFVar30 = (FName *)param_1->Environment;
    local_130 = pFVar30;
    if (ppTVar21 !=
        &TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::TypePtr)
    goto LAB_14ad49690;
    local_184 = pFVar30[1].ComparisonIndex.Value;
    uVar17 = (ulonglong)(int)local_184;
    FVar27 = *pFVar30;
    local_168 = (FName)(uVar17 * 0x10 + (longlong)FVar27);
    while( true ) {
      local_148 = FVar27;
      if (local_130[1].ComparisonIndex.Value != (uint)uVar17) {
        `TCheckedPointerIterator<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_170);
      }
      if (FVar27 == local_168) break;
      FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
      if (*(longlong *)FVar27 == local_f0._4_8_) {
        local_180.Data = (FScriptContainerElement *)0x0;
        local_178 = 0;
        this_01 = param_1->Environment;
        FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
        FMetasoundEnvironment::GetValue<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                  (this_01,&local_108,&local_110);
        iVar12 = local_108.ArrayNum;
        pFVar30 = (FName *)(local_108.AllocatorInstance.Data + (longlong)iVar12 * 0x10);
        FVar26.Data = local_108.AllocatorInstance.Data;
        while( true ) {
          if (local_108.ArrayNum != iVar12) {
            `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_16f);
          }
          if ((FName *)FVar26.Data == pFVar30) break;
          local_160 = *(FName *)FVar26.Data;
          FStack_158 = *(FName *)((longlong)FVar26.Data + 8);
          FVar14.Value = (((FName *)FVar26.Data)->ComparisonIndex).Value;
          uVar34 = ((FName *)FVar26.Data)->Number;
          FVar35.Value = (((FName *)((longlong)FVar26.Data + 8))->ComparisonIndex).Value;
          uVar36 = ((FName *)((longlong)FVar26.Data + 8))->Number;
          iVar13 = (int)local_178;
          if ((int)local_178 == local_178._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&local_180,(int *)((longlong)&local_178 + 4));
            FVar14.Value = local_160.ComparisonIndex.Value;
            uVar34 = local_160.Number;
            FVar35.Value = FStack_158.ComparisonIndex.Value;
            uVar36 = FStack_158.Number;
          }
          local_178 = CONCAT44(local_178._4_4_,iVar13 + 1);
          FVar26.Data = FVar26.Data + 0x10;
          pFVar3 = local_180.Data + (longlong)iVar13 * 0x10;
          *(uint *)pFVar3 = FVar14.Value;
          *(uint *)(pFVar3 + 4) = uVar34;
          *(uint *)(pFVar3 + 8) = FVar35.Value;
          *(uint *)(pFVar3 + 0xc) = uVar36;
        }
        if ((FName *)local_108.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        puVar19 = (undefined8 *)(**(code **)((longlong)*param_1->Graph + 0x10))();
        iVar12 = (int)local_178;
        if ((int)local_178 == local_178._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_180,(int *)((longlong)&local_178 + 4));
        }
        local_178 = CONCAT44(local_178._4_4_,iVar12 + 1);
        uVar6 = puVar19[1];
        *(undefined8 *)(local_180.Data + (longlong)iVar12 * 0x10) = *puVar19;
        *(undefined8 *)(local_180.Data + (longlong)iVar12 * 0x10 + 8) = uVar6;
        FLazyName::Resolve(&CoreInterface::Environment::GraphHierarchy);
        puVar19 = ::operator_new(0x20);
        if (puVar19 == (undefined8 *)0x0) {
          puVar19 = (undefined8 *)0x0;
        }
        else {
          *puVar19 = &
                     ___7__TMetasoundEnvironmentVariable_V__TArray_UFGuid__V__TSizedDefaultAllocator__0CA______Metasound__6B_
          ;
          *(FName *)(puVar19 + 1) = local_118;
          ((ForAnyElementType *)(puVar19 + 2))->Data = (FScriptContainerElement *)0x0;
          lVar31 = (longlong)(int)local_178;
          local_120 = local_180.Data;
          *(int *)(puVar19 + 3) = (int)local_178;
          if ((int)local_178 == 0) {
            *(int *)((longlong)puVar19 + 0x1c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,(int)local_178,0,(ForAnyElementType *)(puVar19 + 2),(int)local_178,
                       (int *)((longlong)puVar19 + 0x1c));
            memcpy((void *)puVar19[2],local_120,lVar31 << 4);
          }
        }
        pTVar22 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                  ::AllocateMemoryForEmplace<FName_const_&>(&local_140,&local_118);
        *(uint *)&pTVar22->field_0x0 = local_118.ComparisonIndex.Value;
        *(uint *)&pTVar22->field_0x4 = local_118.Number;
        *(undefined8 **)&pTVar22->field_0x8 = puVar19;
        if (local_180.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data);
        }
      }
      else {
        puVar19 = (undefined8 *)
                  (**(code **)(**(longlong **)((longlong)FVar27 + 8) + 0x18))
                            (*(longlong **)((longlong)FVar27 + 8),local_58);
        pFVar30 = (FName *)(**(code **)(*(longlong *)*puVar19 + 8))();
        pTVar22 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                  ::AllocateMemoryForEmplace<FName_const_&>(&local_140,pFVar30);
        uVar34 = pFVar30->Number;
        *(uint *)&pTVar22->field_0x0 = (pFVar30->ComparisonIndex).Value;
        *(uint *)&pTVar22->field_0x4 = uVar34;
        *(undefined8 *)&pTVar22->field_0x8 = *puVar19;
        *puVar19 = 0;
      }
      FVar27 = (FName)((longlong)local_148 + 0x10);
      uVar17 = (ulonglong)local_184;
    }
  }
  uVar34 = 2;
  local_e0._0_8_ = param_1->Graph;
  local_e0._16_8_ = param_1->OperatorSettings;
  local_c8.Data = (FScriptContainerElement *)&local_140;
  local_c0 = (FBuildResults *)param_1->GraphRenderCost;
  local_b0.Data = (FScriptContainerElement *)param_4;
  local_e0._8_8_ = pFVar32;
  local_b8 = param_2;
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (bVerboseTraceEvents == false)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::DepthFirstTopologicalSort");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId307,"Metasound::FOperatorBuilder::DepthFirstTopologicalSort"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x133);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId307);
  }
  bVar11 = DirectedGraphAlgo::DepthFirstTopologicalSort(pFVar32,param_3);
  if (bVar11) {
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    uVar34 = 0;
  }
  else {
    bVar11 = FGraphLinter::ValidateNoCyclesInGraph(pFVar32,&param_4->Errors);
    if (bVar11) {
      local_120 = (FScriptContainerElement *)CONCAT44(local_120._4_4_,0x4f);
      AddBuildError<Metasound::FInternalError,char_const_(&)[122],int>
                (&param_4->Errors,
                 (char (*) [122])
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,(int *)&local_120);
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  if (uVar34 < uVar28) {
    uVar34 = uVar28;
  }
  if (((this->BuilderSettings).bFailOnAnyError == false) < uVar34) {
LAB_14ad49a55:
    bVar8 = false;
  }
  else {
    pFVar23 = (FVertexInterface *)(**(code **)((longlong)*param_1->Graph + 0x20))();
    pFVar24 = FVertexInterfaceData::FVertexInterfaceData(&local_a8,pFVar23);
    FVertexInterfaceData::operator=(&param_2->VertexData,pFVar24);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)
               local_a8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
               local_a8.OutputVertexInterfaceData.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)
        local_a8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_a8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
              ((FOutputBinding *)local_a8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data,
               local_a8.OutputVertexInterfaceData.Bindings.ArrayNum);
    if ((FOutputBinding *)local_a8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
        (FOutputBinding *)0x0) {
      FMemory::Free(local_a8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)
               local_a8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
               local_a8.InputVertexInterfaceData.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)
        local_a8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_a8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)local_a8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data,
               local_a8.InputVertexInterfaceData.Bindings.ArrayNum);
    if ((FInputBinding *)local_a8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
        (FInputBinding *)0x0) {
      FMemory::Free(local_a8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data);
    }
    InitializeOperatorInfo(this,param_1->Graph,param_3,param_2);
    FVar15 = GatherExternalInputDataReferences
                       (this,(FBuildContext *)local_f8,(FInputVertexInterfaceData *)local_e0);
    if ((int)uVar34 <= (int)*(uint *)CONCAT44(extraout_var,FVar15.Value)) {
      uVar34 = *(uint *)CONCAT44(extraout_var,FVar15.Value);
    }
    if ((int)(uint)((this->BuilderSettings).bFailOnAnyError == false) < (int)uVar34)
    goto LAB_14ad49a55;
    FVar15 = CreateOperators(this,(FBuildContext *)(local_f8 + 4),
                             (TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *)
                             local_e0,(FInputVertexInterfaceData *)param_3);
    uVar28 = *(uint *)CONCAT44(extraout_var_00,FVar15.Value);
    if ((int)*(uint *)CONCAT44(extraout_var_00,FVar15.Value) < (int)uVar34) {
      uVar28 = uVar34;
    }
    if ((int)(uint)((this->BuilderSettings).bFailOnAnyError == false) < (int)uVar28)
    goto LAB_14ad49a55;
    if ((this->BuilderSettings).bPopulateInternalDataReferences != false) {
      GatherInternalGraphDataReferences
                (this,(FBuildContext *)local_e0,param_3,
                 (TMap<FGuid,Metasound::FDataReferenceCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>_>
                  *)(local_b0.Data + 0x10));
    }
    FVar15 = GatherGraphDataReferences
                       (this,(FBuildContext *)local_f0,(FVertexInterfaceData *)local_e0);
    if ((int)uVar28 <= (int)*(uint *)CONCAT44(extraout_var_01,FVar15.Value)) {
      uVar28 = *(uint *)CONCAT44(extraout_var_01,FVar15.Value);
    }
    if ((int)(uint)((this->BuilderSettings).bFailOnAnyError == false) < (int)uVar28)
    goto LAB_14ad49a55;
    bVar8 = true;
  }
  DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
            ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
              *)local_140.Pairs.AllocatorInstance.Data,local_140.Pairs.ArrayNum);
  if ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
       *)local_140.Pairs.AllocatorInstance.Data !=
      (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
       *)0x0) {
    FMemory::Free(local_140.Pairs.AllocatorInstance.Data);
  }
  (*(code *)*local_128)(local_128);
LAB_14ad49a7d:
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar8;
}

// BuildRebindableGraphOperator @ 14ad49ab0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FOperatorBuilder::BuildRebindableGraphOperator
          (FOperatorBuilder *this,FBuildGraphOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  bool bVar2;
  bool bVar3;
  IGraph *pIVar4;
  FGraphOperatorData *pFVar5;
  FDynamicGraphOperatorData *this_00;
  FBuildResults *in_R9;
  bool bVar6;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::BuildRebindableGraphOperator");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,
               "Metasound::FOperatorBuilder::BuildRebindableGraphOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pIVar4 = ::operator_new(0x1c0);
  if (pIVar4 == (IGraph *)0x0) {
    pIVar4 = (IGraph *)0x0;
  }
  else {
    *pIVar4 = (IGraph)&FRebindableGraphOperator::
                       _vftable__for__Metasound__TExecutableOperator<Metasound::FRebindableGraphOperator>__
    ;
    pIVar4[1] = (IGraph)&FRebindableGraphOperator::
                         _vftable__for__Metasound__DynamicGraph__IDynamicGraphInPlaceBuildable__;
    DynamicGraph::FDynamicGraphOperatorData::FDynamicGraphOperatorData
              ((FDynamicGraphOperatorData *)(pIVar4 + 2),pFVar1);
  }
  pFVar5 = (FGraphOperatorData *)(**(code **)((longlong)pIVar4[1] + 8))(pIVar4 + 1);
  bVar3 = BuildGraphOperatorData(this,(FBuildGraphOperatorParams *)param_2,pFVar5,&local_38,in_R9);
  if (bVar3) {
    this_00 = (FDynamicGraphOperatorData *)(**(code **)((longlong)pIVar4[1] + 8))(pIVar4 + 1);
    DynamicGraph::FDynamicGraphOperatorData::InitTables(this_00);
    param_1->Graph = pIVar4;
  }
  else {
    param_1->Graph = (IGraph *)0x0;
    if (pIVar4 != (IGraph *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// BuildStaticGraphOperator @ 14ad49c30

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FOperatorBuilder::BuildStaticGraphOperator
          (FOperatorBuilder *this,FBuildGraphOperatorParams *param_1,FBuildResults *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FGraphOperatorData *pFVar8;
  FGraphOperator *pFVar9;
  FBuildResults *in_R9;
  FGraphOperatorData *local_res18 [2];
  
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (!bVerboseTraceEvents)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::BuildStaticGraphOperator");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId144,"Metasound::FOperatorBuilder::BuildStaticGraphOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x90);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId144);
  }
  puVar1 = *(undefined8 **)&(param_2->Errors).ArrayNum;
  pFVar8 = ::operator_new(0xa0);
  if (pFVar8 == (FGraphOperatorData *)0x0) {
    pFVar8 = (FGraphOperatorData *)0x0;
  }
  else {
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    (pFVar8->OperatorSettings).SampleRate = (int)uVar3;
    (pFVar8->OperatorSettings).TargetBlockRate = (float)(int)((ulonglong)uVar3 >> 0x20);
    (pFVar8->OperatorSettings).ActualBlockRate = (float)(int)uVar4;
    (pFVar8->OperatorSettings).NumFramesPerBlock = (int)((ulonglong)uVar4 >> 0x20);
    (pFVar8->VertexData).InputVertexInterfaceData.bIsVertexInterfaceFrozen = false;
    (pFVar8->VertexData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar8->VertexData).InputVertexInterfaceData.Bindings.ArrayNum = 0;
    (pFVar8->VertexData).InputVertexInterfaceData.Bindings.ArrayMax = 0;
    (pFVar8->VertexData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar8->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
    (pFVar8->VertexData).InputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
    (pFVar8->VertexData).OutputVertexInterfaceData.bIsVertexInterfaceFrozen = false;
    (pFVar8->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar8->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum = 0;
    (pFVar8->VertexData).OutputVertexInterfaceData.Bindings.ArrayMax = 0;
    (pFVar8->VertexData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar8->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
    (pFVar8->VertexData).OutputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
    (pFVar8->OperatorMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->OperatorMap).Pairs.ArrayNum = 0;
    (pFVar8->OperatorMap).Pairs.ArrayMax = 0;
    (pFVar8->InputVertexMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->InputVertexMap).Pairs.ArrayNum = 0;
    (pFVar8->InputVertexMap).Pairs.ArrayMax = 0;
    (pFVar8->OutputVertexMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->OutputVertexMap).Pairs.ArrayNum = 0;
    (pFVar8->OutputVertexMap).Pairs.ArrayMax = 0;
    pFVar8[1].OperatorSettings.SampleRate = 0;
    pFVar8[1].OperatorSettings.TargetBlockRate = 0.0;
    pFVar8[1].OperatorSettings.ActualBlockRate = 0.0;
    pFVar8[1].OperatorSettings.NumFramesPerBlock = 0;
  }
  bVar7 = BuildGraphOperatorData
                    (this,(FBuildGraphOperatorParams *)param_2,pFVar8,
                     (TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
                     in_R9);
  if (bVar7) {
    pFVar9 = ::operator_new(0x98);
    if (pFVar9 != (FGraphOperator *)0x0) {
      local_res18[0] = pFVar8;
      pFVar9 = FGraphOperator::FGraphOperator(pFVar9,(FStaticGraphOperatorData *)local_res18);
      param_1->Graph = (IGraph *)pFVar9;
      goto LAB_14ad49e0a;
    }
  }
  param_1->Graph = (IGraph *)0x0;
  if (pFVar8 != (FGraphOperatorData *)0x0) {
    if (*(void **)&pFVar8[1].OperatorSettings != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar8[1].OperatorSettings);
    }
    pFVar2 = (pFVar8->OutputVertexMap).Pairs.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar8->InputVertexMap).Pairs.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,int>
              ((TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>
                *)(pFVar8->OperatorMap).Pairs.AllocatorInstance.Data,
               (pFVar8->OperatorMap).Pairs.ArrayNum);
    pFVar2 = (pFVar8->OperatorMap).Pairs.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FVertexInterfaceData::~FVertexInterfaceData(&pFVar8->VertexData);
    ::operator_delete(pFVar8,0xa0);
  }
LAB_14ad49e0a:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperators @ 14ad4c6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBuildStatus __thiscall
Metasound::FOperatorBuilder::CreateOperators
          (FOperatorBuilder *this,FBuildContext *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FInputVertexInterfaceData *param_3)

{
  INode *pIVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IOperator *pIVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FName *pFVar14;
  int iVar15;
  FOutputVertexInterfaceData *pFVar16;
  FDebugInfo *pFVar17;
  FName FVar18;
  FName FVar19;
  undefined8 *puVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  EStatus EVar24;
  int iVar25;
  FBuildStatus FVar26;
  int iVar27;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar28;
  TEventRef<unsigned_int> TVar29;
  FNodeClassName *pFVar30;
  FName *pFVar31;
  FString *pFVar32;
  void *pvVar33;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *pTVar34;
  FProfilingOperator *this_00;
  FProfilingOperator *pFVar35;
  undefined8 *puVar36;
  undefined4 extraout_var;
  FVertexInterface *this_01;
  FOutputDataVertex *pFVar37;
  FMissingOutputDataReferenceError *this_02;
  FMissingOutputDataReferenceError *pFVar38;
  FWriteBuffer *pFVar39;
  FBuildContext *pFVar40;
  IOperator *pIVar41;
  FScriptContainerElement *pFVar42;
  ulonglong uVar43;
  ulong64 uVar44;
  longlong lVar45;
  ForAnyElementType FVar46;
  FScriptContainerElement *pFVar47;
  FOperatorInfo *pFVar48;
  FName *pFVar49;
  int iVar50;
  bool bVar51;
  bool bVar52;
  undefined1 auStackY_588 [32];
  undefined1 local_52c;
  undefined1 local_52b;
  undefined1 local_52a [2];
  FOperatorInfo *local_528;
  FProfilingOperator *local_520;
  FOutputVertexInterfaceData *local_510;
  FMissingOutputDataReferenceError *local_508;
  FOperatorBuilder *local_500;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *local_4f8;
  FString *local_4f0;
  ForAnyElementType local_4e8;
  int local_4e0;
  int local_4dc;
  FString local_4d8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  FName local_4a8;
  INode *local_4a0;
  FDebugInfo *local_498;
  uint local_490;
  FBuildContext *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
  *local_468;
  undefined8 *local_460;
  FDebugInfo *local_458;
  FInputVertexInterfaceData *local_450;
  FName local_448;
  FName FStack_440;
  FName local_438;
  longlong *local_430;
  TReferenceControllerBase<1> *local_428;
  INode local_420;
  undefined8 *local_418;
  IOperator *local_410;
  FOperatorInfo *local_408;
  FString local_400;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3f0;
  FMissingOutputDataReferenceError *local_3e0;
  FName local_3d8;
  FName FStack_3d0;
  FName local_3c8;
  undefined8 *local_3c0;
  undefined1 local_3b8 [40];
  FOutputVertexInterfaceData *local_390;
  FScriptContainerElement *local_388;
  FVertexInterfaceData *local_380;
  undefined8 local_378;
  FOperatorBuilder *local_370;
  FScriptContainerElement *local_368;
  FName local_360;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FString local_2f0;
  undefined4 *local_2e0;
  longlong local_2d8;
  FStringFormatArg local_2c8;
  FStringFormatArg local_2a8;
  FStringFormatArg local_288;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  iVar15 = GCycleStatsShouldEmitNamedEvents;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_588;
  iVar50 = 0;
  local_450 = param_3;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_500 = this;
  local_4f8 = param_2;
  local_488 = param_1;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::CreateOperators");
  }
  bVar51 = -1 < CpuChannel->Enabled;
  if (bVar51) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId550,"Metasound::FOperatorBuilder::CreateOperators",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x226);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId550);
  }
  local_458 = (FDebugInfo *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9a98);
  if (((this->BuilderSettings).bProfileOperators != false) ||
     (bVar9 = false, Profiling::ProfileAllEnabled != 0)) {
    bVar9 = true;
  }
  local_468 = (TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
               *)(*(longlong *)&param_2[2].ArrayNum + 0x60);
  local_490 = *(uint *)&(local_450->Bindings).AllocatorInstance.Data;
  uVar43 = (ulonglong)(int)local_490;
  puVar36 = *(undefined8 **)local_450;
  local_3c0 = puVar36 + uVar43;
  do {
    puVar20 = local_3c0;
    local_460 = puVar36;
    if (*(int *)&(local_450->Bindings).AllocatorInstance.Data != (int)uVar43) {
      local_52c = 0;
      `TCheckedPointerIterator<Metasound::INode_const_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_52c);
    }
    pFVar40 = local_488;
    if (puVar36 == puVar20) {
      *(int *)&local_488->Graph = iVar50;
      if (bVar51) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (0 < iVar15) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      goto LAB_14ad4d8c2;
    }
    local_510 = (FOutputVertexInterfaceData *)*puVar36;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_4a8.ComparisonIndex.Value = 0;
    local_4a8.Number = 0;
    local_4a0 = (INode *)0x0;
    local_498 = local_458;
    if (local_458 != (FDebugInfo *)0x0) {
      local_4a0 = local_458->ActiveNode;
      ThreadLocalDebug::FDebugInfo::SetActiveNode(local_458,(INode *)local_510);
      pFVar17 = local_498;
      if (local_498 != (FDebugInfo *)0x0) {
        pIVar1 = local_498->ActiveNode;
        local_448 = (local_498->AssetMetaData).ClassName;
        FStack_440 = (local_498->AssetMetaData).AssetName;
        if (pIVar1 == (INode *)0x0) {
          local_3d8 = local_448;
          FVar18 = local_3d8;
          FStack_3d0 = FStack_440;
          FVar19 = FStack_3d0;
          local_3d8.ComparisonIndex = local_448.ComparisonIndex.Value;
          local_3d8.Number = local_448.Number;
          FStack_3d0.ComparisonIndex = FStack_440.ComparisonIndex.Value;
          FStack_3d0.Number = FStack_440.Number;
          local_3c8 = FStack_440;
          local_438 = FStack_440;
          local_448.ComparisonIndex.Value = local_3d8.ComparisonIndex.Value;
          local_448.Number = local_3d8.Number;
          FStack_440.ComparisonIndex.Value = FStack_3d0.ComparisonIndex.Value;
          FStack_440.Number = FStack_3d0.Number;
          local_3d8 = FVar18;
          FStack_3d0 = FVar19;
        }
        else {
          pFVar30 = (FNodeClassName *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
          pFVar32 = FNodeClassName::ToString(pFVar30,&local_348);
          pTVar28 = &::FName::ToString(&(pFVar17->AssetMetaData).AssetName,&local_358)->Data;
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_3f0,pTVar28,2 - (uint)(pTVar28->ArrayNum != 0));
          ::FString::AppendChar((FString *)&local_3f0,L'/');
          ::FString::ConcatFF(&local_400,(FString *)&local_3f0,pFVar32);
          iVar25 = local_400.Data.ArrayNum + -1;
          if (local_400.Data.ArrayNum == 0) {
            iVar25 = 0;
          }
          pFVar31 = ::FName::FName(&local_2f8,iVar25,
                                   (wchar_t *)local_400.Data.AllocatorInstance.Data,FNAME_Add);
          local_438 = *pFVar31;
          if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_400.Data.AllocatorInstance.Data);
          }
          if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f0.AllocatorInstance.Data);
          }
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          local_3d8 = local_448;
          FStack_3d0 = FStack_440;
        }
        local_4b8 = CONCAT44(local_448.Number,local_448.ComparisonIndex.Value);
        uStack_4b0 = CONCAT44(FStack_440.Number,FStack_440.ComparisonIndex.Value);
        local_4a8 = local_438;
        local_448 = local_3d8;
        FStack_440 = FStack_3d0;
      }
    }
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_480 = 0;
      TVar29 = (TEventRef<unsigned_int>)&local_480;
    }
    else {
      TVar29 = FStringTrace::GetNameRef(&local_360);
    }
    uVar2 = *(undefined8 *)TVar29;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_478 = 0;
      TVar29 = (TEventRef<unsigned_int>)&local_478;
    }
    else {
      TVar29 = FStringTrace::GetNameRef(&local_308);
    }
    uVar3 = *(undefined8 *)TVar29;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_470 = 0;
      TVar29 = (TEventRef<unsigned_int>)&local_470;
    }
    else {
      TVar29 = FStringTrace::GetNameRef(&local_300);
    }
    uVar4 = *(undefined8 *)TVar29;
    bVar6 = false;
    bVar10 = false;
    if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_2e0);
      bVar6 = true;
      bVar10 = true;
      *local_2e0 = (int)uVar2;
      local_2e0[1] = (int)uVar3;
      local_2e0[2] = (int)uVar4;
      *(undefined8 *)(local_2d8 + 0x28) = *(undefined8 *)(local_2d8 + 0x20);
    }
    pFVar16 = local_510;
    local_528 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                ::Find(local_468,(ulong64)local_510);
    if ((local_528 == (FOperatorInfo *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x141,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      EVar24 = (*pcVar7)();
      return (FBuildStatus)EVar24;
    }
    local_268.Base = local_248;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    local_268.CurPos = local_248;
    local_268.End = (wchar_t *)local_48;
    pFVar30 = (FNodeClassName *)(**(code **)((longlong)*(INode *)pFVar16 + 0x18))(pFVar16);
    if (((pFVar30->Namespace == FNodeClassName::InvalidNodeClassName.Namespace) &&
        (pFVar30->Name == FNodeClassName::InvalidNodeClassName.Name)) &&
       (pFVar30->Variant == FNodeClassName::InvalidNodeClassName.Variant)) {
      pFVar31 = (FName *)(**(code **)((longlong)*(INode *)pFVar16 + 8))(pFVar16);
      bVar11 = true;
      pFVar32 = ::FName::ToString(pFVar31,&local_338);
    }
    else {
      bVar12 = true;
      pFVar32 = FNodeClassName::ToString(pFVar30,&local_328);
    }
    local_4e8.Data = (FScriptContainerElement *)0x0;
    local_4e0 = (pFVar32->Data).ArrayNum;
    lVar45 = (longlong)local_4e0;
    pFVar47 = (pFVar32->Data).AllocatorInstance.Data;
    if (local_4e0 == 0) {
      local_4dc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_4e0,0,&local_4e8,local_4e0,&local_4dc);
      memcpy(local_4e8.Data,pFVar47,lVar45 * 2);
    }
    if ((bVar11) &&
       (bVar11 = false, local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    if ((bVar12) &&
       (bVar12 = false, local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    if (local_268.End < local_268.CurPos + 0x3c) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,0x3c);
    }
    local_268.CurPos =
         FGenericPlatformString::Convert<char,wchar_t>
                   (local_268.CurPos,0x3c,
                    "Metasound::FOperatorBuilder::CreateOperators::CreateAndBind ",0x3c);
    FVar46.Data = local_4e8.Data;
    iVar25 = local_4e0 + -1;
    if (local_4e0 == 0) {
      iVar25 = 0;
    }
    uVar44 = (ulong64)iVar25;
    if (local_268.End < local_268.CurPos + uVar44) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,uVar44);
    }
    if (iVar25 != 0) {
      pvVar33 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar46.Data,uVar44 * 2);
      local_268.CurPos = (wchar_t *)(uVar44 * 2 + (longlong)pvVar33);
    }
    if ((GCycleStatsShouldEmitNamedEvents < 1) || (bVerboseTraceEvents == false)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    bVar23 = false;
    *local_268.CurPos = L'\0';
    if (bVar21) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,local_268.Base);
    }
    bVar52 = bVerboseTraceEvents;
    if (local_268.End < local_268.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    *local_268.CurPos = L'\0';
    if ((bVar52 != false) && (-1 < CpuChannel->Enabled)) {
      bVar23 = true;
      FCpuProfilerTrace::OutputBeginDynamicEvent
                (local_268.Base,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,0x240);
    }
    pFVar16 = local_510;
    pFVar48 = local_528;
    local_390 = local_510;
    local_388 = local_4f8[1].AllocatorInstance.Data;
    local_380 = &local_528->VertexData;
    local_378._0_4_ = local_4f8[1].ArrayNum;
    local_378._4_4_ = local_4f8[1].ArrayMax;
    local_370 = local_500;
    local_368 = local_4f8[2].AllocatorInstance.Data;
    (**(code **)((longlong)*(INode *)local_510 + 0x48))(local_510,&local_430);
    if (bVar9) {
      lVar45 = (**(code **)((longlong)*(INode *)pFVar16 + 0x18))(pFVar16);
      if (Profiling::ProfilingNodeFilter.ArrayNum == 0) {
LAB_14ad4ceab:
        bVar52 = true;
      }
      else {
        bVar13 = true;
        pFVar32 = ::FName::ToString((FName *)(lVar45 + 8),&local_318);
        pFVar47 = Profiling::ProfilingNodeFilter.AllocatorInstance.Data +
                  (longlong)Profiling::ProfilingNodeFilter.ArrayNum * 0x10;
        local_4f0 = pFVar32;
        for (FVar46 = Profiling::ProfilingNodeFilter.AllocatorInstance; FVar46.Data != pFVar47;
            FVar46.Data = FVar46.Data + 0x10) {
          iVar25 = *(int *)(FVar46.Data + 8);
          iVar27 = (pFVar32->Data).ArrayNum;
          if (iVar25 == iVar27) {
            if (iVar25 < 2) goto LAB_14ad4ceab;
            iVar25 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)FVar46.Data,
                                (wchar_t *)(pFVar32->Data).AllocatorInstance.Data);
            bVar52 = iVar25 == 0;
            pFVar32 = local_4f0;
          }
          else {
            bVar52 = iVar25 + iVar27 == 1;
          }
          if (bVar52) goto LAB_14ad4ceab;
        }
        bVar52 = false;
      }
      if ((bVar13) &&
         (bVar13 = false, local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      pFVar48 = local_528;
      if (!bVar52) goto LAB_14ad4d00a;
      if ((GCycleStatsShouldEmitNamedEvents < 1) || (bVerboseTraceEvents == false)) {
        bVar52 = false;
      }
      else {
        bVar52 = true;
        FGenericPlatformMisc::BeginNamedEvent
                  (&FColor::Green,"Metasound::FOperatorBuilder::CreateOperators::CreateOperator");
      }
      if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId583,
                   "Metasound::FOperatorBuilder::CreateOperators::CreateOperator",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                   ,0x247);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId583);
      }
      pTVar34 = (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *)
                (**(code **)(*local_430 + 8))(local_430,&local_418,&local_390);
      this_00 = ::operator_new(0x80);
      pFVar35 = (FProfilingOperator *)0x0;
      if (this_00 != (FProfilingOperator *)0x0) {
        pFVar35 = FProfilingOperator::FProfilingOperator(this_00,pTVar34,(INode *)local_510);
      }
      local_520 = pFVar35;
      if (local_418 != (undefined8 *)0x0) {
        (**(code **)*local_418)(local_418,1);
      }
      if ((pFVar35 == (FProfilingOperator *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("ProfilingOperatorPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                              ,0x24a,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        EVar24 = (*pcVar7)();
        return (FBuildStatus)EVar24;
      }
      (pFVar35->AssetMetaData).ClassName.ComparisonIndex.Value = (uint)local_4b8;
      (pFVar35->AssetMetaData).ClassName.Number = local_4b8._4_4_;
      (pFVar35->AssetMetaData).AssetName.ComparisonIndex.Value = (uint)uStack_4b0;
      (pFVar35->AssetMetaData).AssetName.Number = uStack_4b0._4_4_;
      (pFVar35->AssetMetaData).AssetPath = local_4a8;
      pTVar34 = &local_528->Operator;
      pIVar41 = pTVar34->Ptr;
      pTVar34->Ptr = (IOperator *)local_520;
    }
    else {
LAB_14ad4d00a:
      if ((GCycleStatsShouldEmitNamedEvents < 1) || (bVerboseTraceEvents == false)) {
        bVar52 = false;
      }
      else {
        bVar52 = true;
        FGenericPlatformMisc::BeginNamedEvent
                  (&FColor::Green,"Metasound::FOperatorBuilder::CreateOperators::CreateOperator");
      }
      if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId595,
                   "Metasound::FOperatorBuilder::CreateOperators::CreateOperator",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                   ,0x253);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId595);
      }
      puVar36 = (undefined8 *)(**(code **)(*local_430 + 8))(local_430,&local_410,&local_390);
      pTVar34 = &pFVar48->Operator;
      pIVar41 = local_410;
      if (pTVar34 !=
          (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *)puVar36) {
        pIVar5 = pTVar34->Ptr;
        pTVar34->Ptr = (IOperator *)*puVar36;
        *puVar36 = 0;
        if (pIVar5 != (IOperator *)0x0) {
          (**(code **)*pIVar5)(pIVar5,1);
          pIVar41 = local_410;
        }
      }
    }
    if (pIVar41 != (IOperator *)0x0) {
      (**(code **)*pIVar41)(pIVar41,1);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar52) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    pFVar40 = local_488;
    if (pTVar34->Ptr == (IOperator *)0x0) {
      *(undefined4 *)&local_488->Graph = 2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_428)
      ;
      if (bVar23) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar21) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (local_4e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
      if (bVar6) {
        lVar45 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar45 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar39 = *(FWriteBuffer **)(lVar45 + 0x20);
        if ((int)pFVar39 - *(int *)&pFVar39->Cursor < 1) {
          pFVar39 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar39->Cursor = '\n';
        pFVar39->Cursor = pFVar39->Cursor + 1;
        pFVar39->Committed = pFVar39->Cursor;
      }
      pFVar17 = local_498;
      if (local_498 != (FDebugInfo *)0x0) {
        local_498->ActiveNode = local_4a0;
        if (local_4a0 == (INode *)0x0) {
          ::FString::operator=(&local_498->NodeClassNameAndVersion,L"[No Active Debug Node Set]");
        }
        else {
          pFVar30 = (FNodeClassName *)(**(code **)((longlong)*local_4a0 + 0x18))();
          pFVar32 = FNodeClassName::ToString(pFVar30,&local_2f0);
          FStringFormatArg::FStringFormatArg(&local_2c8,pFVar32);
          FStringFormatArg::FStringFormatArg(&local_2a8,pFVar30[1].Namespace.ComparisonIndex.Value);
          FStringFormatArg::FStringFormatArg(&local_288,pFVar30[1].Namespace.Number);
          local_4c8.ArrayNum = 3;
          local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_4c8.AllocatorInstance,3,&local_4c8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_4c8.AllocatorInstance.Data,&local_2c8,3);
          ::FString::FormatImpl(&local_4d8,L"{0} v{1}.{2}",&local_4c8);
          pFVar32 = &pFVar17->NodeClassNameAndVersion;
          if (pFVar32 != &local_4d8) {
            pFVar47 = (pFVar32->Data).AllocatorInstance.Data;
            if (pFVar47 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar47);
            }
            (pFVar32->Data).AllocatorInstance.Data = local_4d8.Data.AllocatorInstance.Data;
            (pFVar17->NodeClassNameAndVersion).Data.ArrayNum = local_4d8.Data.ArrayNum;
            (pFVar17->NodeClassNameAndVersion).Data.ArrayMax = local_4d8.Data.ArrayMax;
            local_4d8.Data.ArrayNum = 0;
            local_4d8.Data.ArrayMax = 0;
            local_4d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_4c8.AllocatorInstance.Data,local_4c8.ArrayNum);
          if ((FStringFormatArg *)local_4c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_4c8.AllocatorInstance.Data);
          }
          if (local_288.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_2a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_2c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.StringValue.Data.AllocatorInstance.Data);
          }
        }
      }
      if (bVar51) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (0 < iVar15) {
        FGenericPlatformMisc::EndNamedEvent();
      }
LAB_14ad4d8c2:
      return (FBuildStatus)(EStatus)pFVar40;
    }
    if ((GCycleStatsShouldEmitNamedEvents < 1) || (bVerboseTraceEvents == false)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"Metasound::FOperatorBuilder::CreateOperators::BindInputsAndOutputs"
                );
    }
    if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
      bVar52 = false;
    }
    else {
      bVar52 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId606,
                 "Metasound::FOperatorBuilder::CreateOperators::BindInputsAndOutputs",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,0x25e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId606);
    }
    if ((local_500->BuilderSettings).bEnableOperatorRebind != false) {
      (**(code **)((longlong)*pTVar34->Ptr + 0x20))(pTVar34->Ptr,&local_528->VertexData);
    }
    pIVar41 = (local_528->Operator).Ptr;
    (**(code **)((longlong)*pIVar41 + 0x28))
              (pIVar41,&(local_528->VertexData).OutputVertexInterfaceData);
    if (bVar52) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_500->BuilderSettings).bValidateOperatorOutputsAreBound != false) {
      bVar6 = 0 < GCycleStatsShouldEmitNamedEvents;
      if (bVar6) {
        FGenericPlatformMisc::BeginNamedEvent
                  (&FColor::Green,
                   "Metasound::FOperatorBuilder::CreateOperators::ValidateOperatorOutputsAreBound");
      }
      bVar52 = -1 < CpuChannel->Enabled;
      if (bVar52) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId619,
                   "Metasound::FOperatorBuilder::CreateOperators::ValidateOperatorOutputsAreBound",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                   ,0x26b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId619);
      }
      FVar26 = ValidateOperatorOutputsAreBound(local_500,&local_420,local_510);
      if (iVar50 <= *(int *)CONCAT44(extraout_var,FVar26.Value)) {
        iVar50 = *(int *)CONCAT44(extraout_var,FVar26.Value);
      }
      if (bVar52) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_428);
    if (bVar23) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar21) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (local_4e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    if ((GCycleStatsShouldEmitNamedEvents < 1) || (bVerboseTraceEvents == false)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"Metasound::FOperatorBuilder::CreateOperators::RouteOutputs");
    }
    if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId628,
                 "Metasound::FOperatorBuilder::CreateOperators::RouteOutputs",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,0x274);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId628);
    }
    pFVar48 = local_528;
    iVar25 = (local_528->OutputConnections).Pairs.ArrayNum;
    pFVar49 = (FName *)(local_528->OutputConnections).Pairs.AllocatorInstance.Data;
    pFVar31 = pFVar49 + (longlong)iVar25 * 3;
    pFVar14 = pFVar49;
    while( true ) {
      local_520 = (FProfilingOperator *)(pFVar14 + 2);
      if ((pFVar48->OutputConnections).Pairs.ArrayNum != iVar25) {
        local_52b = 0;
        `TCheckedPointerIterator<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_52b);
      }
      pFVar16 = local_510;
      if (pFVar49 == pFVar31) break;
      pFVar47 = (pFVar48->VertexData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
      pFVar42 = pFVar47 + (longlong)
                          (pFVar48->VertexData).OutputVertexInterfaceData.Bindings.ArrayNum * 0x40;
      if (pFVar47 != pFVar42) {
LAB_14ad4d395:
        if (*(FName *)(pFVar47 + 8) != *pFVar49) goto code_r0x00014ad4d39f;
        local_3e0 = (FMissingOutputDataReferenceError *)0x0;
        if (pFVar47[0x38] != (FScriptContainerElement)0x0) {
          local_3e0 = (FMissingOutputDataReferenceError *)(pFVar47 + 0x20);
        }
        if (local_3e0 != (FMissingOutputDataReferenceError *)0x0) {
          iVar27 = (int)local_520->_padding_;
          uVar43 = (ulonglong)iVar27;
          pFVar32 = *(FString **)&local_520[-1].InsightsPostExecuteEventSpecId;
          local_4f0 = pFVar32 + uVar43;
          local_528 = (FOperatorInfo *)CONCAT44(local_528._4_4_,iVar27);
          while( true ) {
            if ((int)local_520->_padding_ != (int)uVar43) {
              local_52a[0] = 0;
              `TCheckedPointerIterator<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_52a);
            }
            if (pFVar32 == local_4f0) break;
            local_408 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                        ::Find(local_468,(ulong64)(pFVar32->Data).AllocatorInstance.Data);
            if ((local_408 == (FOperatorInfo *)0x0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Value != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                                    ,0x141,L""), bVar23)) {
              pcVar7 = (code *)swi(3);
              EVar24 = (*pcVar7)();
              return (FBuildStatus)EVar24;
            }
            FInputVertexInterfaceData::SetVertex
                      (&(local_408->VertexData).InputVertexInterfaceData,
                       (FName *)&(pFVar32->Data).ArrayNum,(FAnyDataReference *)local_3e0);
            pFVar32 = pFVar32 + 1;
            uVar43 = (ulonglong)local_528 & 0xffffffff;
          }
          goto LAB_14ad4d5b9;
        }
      }
LAB_14ad4d3a8:
      this_01 = (FVertexInterface *)(**(code **)((longlong)*(INode *)local_510 + 0x20))(local_510);
      pFVar37 = FVertexInterface::GetOutputVertex(this_01,pFVar49);
      local_3b8._0_8_ = pFVar16;
      local_3b8._16_8_ = *(undefined8 *)&pFVar37->field_0x8;
      local_3b8._24_8_ = *(undefined8 *)&pFVar37->field_0x10;
      local_3b8._32_4_ = *(undefined4 *)&pFVar37->field_0x18;
      local_3b8._8_8_ = &___7FOutputDataVertex_Metasound__6B_;
      pFVar47 = local_4f8[3].AllocatorInstance.Data;
      this_02 = ::operator_new(0x60);
      pFVar38 = (FMissingOutputDataReferenceError *)0x0;
      if (this_02 != (FMissingOutputDataReferenceError *)0x0) {
        pFVar38 = FMissingOutputDataReferenceError::FMissingOutputDataReferenceError
                            (this_02,(FOutputDataSource *)local_3b8);
      }
      local_508 = pFVar38;
      if (((*(FScriptContainerElement **)&pFVar47->field_0x0 <=
            (FScriptContainerElement *)&local_508) &&
          ((FScriptContainerElement *)&local_508 <
           *(FScriptContainerElement **)&pFVar47->field_0x0 + (longlong)*(int *)(pFVar47 + 0xc) * 8)
          ) && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
        pcVar7 = (code *)swi(3);
        EVar24 = (*pcVar7)();
        return (FBuildStatus)EVar24;
      }
      iVar27 = *(int *)&pFVar47[8].field_0x0;
      if (iVar27 == *(int *)(pFVar47 + 0xc)) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar47,(int *)(pFVar47 + 0xc));
      }
      *(int *)&pFVar47[8].field_0x0 = iVar27 + 1;
      *(FMissingOutputDataReferenceError **)
       (*(FScriptContainerElement **)&pFVar47->field_0x0 + (longlong)iVar27 * 8) = local_508;
      if (iVar50 < 2) {
        iVar50 = 1;
      }
      local_508 = (FMissingOutputDataReferenceError *)0x0;
LAB_14ad4d5b9:
      pFVar49 = pFVar49 + 3;
      pFVar14 = &(local_520->AssetMetaData).ClassName;
    }
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      lVar45 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar45 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar39 = *(FWriteBuffer **)(lVar45 + 0x20);
      if ((int)pFVar39 - *(int *)&pFVar39->Cursor < 1) {
        pFVar39 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar39->Cursor = '\n';
      pFVar39->Cursor = pFVar39->Cursor + 1;
      pFVar39->Committed = pFVar39->Cursor;
    }
    if (local_498 != (FDebugInfo *)0x0) {
      ThreadLocalDebug::FDebugInfo::SetActiveNode(local_498,local_4a0);
    }
    puVar36 = local_460 + 1;
    uVar43 = (ulonglong)local_490;
  } while( true );
code_r0x00014ad4d39f:
  pFVar47 = pFVar47 + 0x40;
  if (pFVar47 == pFVar42) goto LAB_14ad4d3a8;
  goto LAB_14ad4d395;
}

// DepthFirstTopologicalSort @ 14ad4e5b0

FBuildStatus __thiscall
Metasound::FOperatorBuilder::DepthFirstTopologicalSort
          (FOperatorBuilder *this,FBuildContext *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *in_R9;
  int local_res18 [4];
  
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (!bVerboseTraceEvents)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::DepthFirstTopologicalSort");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId307,"Metasound::FOperatorBuilder::DepthFirstTopologicalSort"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x133);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId307);
  }
  bVar4 = DirectedGraphAlgo::DepthFirstTopologicalSort
                    (*(FDirectedGraphAlgoAdapter **)&param_2->ArrayNum,in_R9);
  if (bVar4) {
    *(undefined4 *)&param_1->Graph = 0;
  }
  else {
    pTVar1 = (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
              *)param_2[3].AllocatorInstance.Data;
    bVar4 = FGraphLinter::ValidateNoCyclesInGraph
                      (*(FDirectedGraphAlgoAdapter **)&param_2->ArrayNum,pTVar1);
    if (bVar4) {
      local_res18[0] = 0x4f;
      AddBuildError<Metasound::FInternalError,char_const_(&)[122],int>
                (pTVar1,(char (*) [122])
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,local_res18);
    }
    *(undefined4 *)&param_1->Graph = 2;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (FBuildStatus)(EStatus)param_1;
}

// GatherExternalInputDataReferences @ 14ad53640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FBuildStatus __thiscall
Metasound::FOperatorBuilder::GatherExternalInputDataReferences
          (FOperatorBuilder *this,FBuildContext *param_1,FInputVertexInterfaceData *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FName *pFVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  FName FVar6;
  code *pcVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  EStatus EVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  FOperatorInfo *pFVar15;
  FName *pFVar16;
  FInputDataVertex *pFVar17;
  FInvalidConnectionDataTypeError *this_00;
  FInvalidConnectionDataTypeError *pFVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  FScriptContainerElement *pFVar20;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar21;
  FScriptContainerElement *pFVar22;
  FInputDataVertex *pFVar23;
  int iVar24;
  FInputVertexInterfaceData *in_R9;
  uint uVar25;
  FAnyDataReference *pFVar26;
  uint uVar27;
  undefined1 auStack_1e8 [32];
  FInvalidConnectionDataTypeError **local_1c8;
  FScriptContainerElement *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  char local_198;
  char local_197;
  undefined1 local_196 [2];
  uint local_194;
  FInvalidConnectionDataTypeError *local_190;
  FOperatorInfo *local_188;
  FInputVertexInterfaceData *local_180;
  FInputVertexInterfaceData *local_178;
  FBuildContext *local_170;
  longlong *local_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  longlong *local_130;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  FString local_f8 [2];
  undefined4 local_cc;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_c8;
  undefined1 local_b0 [16];
  longlong local_a0;
  longlong local_98;
  int local_90;
  INode *local_88;
  undefined **local_80;
  FName local_78;
  longlong local_70;
  undefined4 local_68;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_180 = in_R9;
  local_178 = param_2;
  local_170 = param_1;
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (!bVerboseTraceEvents)) {
    local_197 = '\0';
  }
  else {
    local_197 = '\x01';
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::GatherExternalInputDataReferences");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    local_198 = '\0';
  }
  else {
    local_198 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId460,
               "Metasound::FOperatorBuilder::GatherExternalInputDataReferences",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x1cc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId460);
  }
  *(undefined4 *)&param_1->Graph = 0;
  plVar13 = (longlong *)(**(code **)(**(longlong **)param_2 + 0x60))();
  iVar12 = (int)plVar13[5];
  iStack_160 = 0;
  local_148 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar13 + 2);
  uStack_15c = 1;
  iStack_14c = 0;
  if (iVar12 != 0) {
    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = pTVar1;
    }
    uVar25 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    while (uVar25 == 0) {
      lVar14 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      iStack_14c = iVar12;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iStack_160) goto LAB_14ad537ae;
      uVar25 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uStack_15c = -uVar25 & uVar25;
    uVar3 = (ulonglong)uStack_15c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_138 = (int)lVar14;
    iStack_14c = local_148 + -1 + local_138;
    if (iVar12 < iStack_14c) {
      iStack_14c = iVar12;
    }
  }
LAB_14ad537ae:
  uVar25 = *(uint *)(plVar13 + 5);
  uStack_144 = local_cc;
  iStack_140 = (int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34);
  uVar27 = uVar25 & 0xffffffe0;
  uStack_150 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_15c,iStack_160);
  TStack_120.CurrentBitIndex = iStack_14c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  iVar24 = (int)uVar25 >> 5;
  TStack_120._28_4_ = local_cc;
  TStack_120.BaseBitIndex = local_148;
  uStack_100 = CONCAT44(uStack_13c,iStack_140);
  local_194 = uVar25;
  local_168 = plVar13;
  local_158 = pTVar1;
  local_130 = plVar13;
  local_128 = plVar13;
  TStack_120.Array = pTVar1;
  if ((((int)uVar25 < 0) || (iVar12 < (int)uVar25)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return (FBuildStatus)EVar11;
  }
  uVar5 = *(uint *)(plVar13 + 5);
  uVar8 = local_194;
  if (uVar25 != uVar5) {
    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = pTVar1;
    }
    uVar25 = -1 << ((byte)uVar25 & 0x1f) &
             *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar24 * 4);
    while (uVar25 == 0) {
      lVar14 = (longlong)iVar24;
      uVar27 = uVar27 + 0x20;
      iVar24 = iVar24 + 1;
      local_194 = uVar5;
      uVar8 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar24) goto LAB_14ad538d1;
      uVar25 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_134 = (int)lVar14;
    local_194 = local_134 + -1 + uVar27;
    uVar8 = local_194;
    if ((int)uVar5 < (int)local_194) {
      local_194 = uVar5;
      uVar8 = uVar5;
    }
  }
LAB_14ad538d1:
  do {
    plVar13 = local_128;
    if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
      local_196[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_196);
    }
    cVar9 = local_197;
    if (((TStack_120.CurrentBitIndex == uVar8) && (TStack_120.Array == pTVar1)) &&
       (plVar13 == local_130)) {
      if (local_198 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (cVar9 != '\0') {
        FGenericPlatformMisc::EndNamedEvent();
      }
      return (FBuildStatus)(EStatus)local_170;
    }
    lVar14 = (longlong)TStack_120.CurrentBitIndex * 0x58 + *plVar13;
    pFVar15 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
              ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                      *)(*(longlong *)(local_178 + 1) + 0x60),*(ulong64 *)(lVar14 + 0x10));
    local_188 = pFVar15;
    if ((pFVar15 == (FOperatorInfo *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x141,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar11 = (*pcVar7)();
      return (FBuildStatus)EVar11;
    }
    pFVar20 = (local_180->Bindings).AllocatorInstance.Data;
    pFVar22 = pFVar20 + (longlong)(local_180->Bindings).ArrayNum * 0x58;
    if (pFVar20 != pFVar22) {
      do {
        if (*(longlong *)(pFVar20 + 8) == *(longlong *)(lVar14 + 0x20)) {
          pFVar2 = (FName *)(lVar14 + 0x20);
          pFVar26 = (FAnyDataReference *)0x0;
          if (pFVar20[0x50] != (FScriptContainerElement)0x0) {
            pFVar26 = (FAnyDataReference *)(pFVar20 + 0x38);
          }
          if (pFVar26 != (FAnyDataReference *)0x0) {
            FVar6 = *(FName *)(lVar14 + 0x28);
            pFVar16 = (FName *)(**(code **)(pFVar26->_padding_ + 8))(pFVar26);
            bVar10 = IsCastable(*pFVar16,FVar6);
            if (bVar10) {
              FInputVertexInterfaceData::SetVertex
                        (&(local_188->VertexData).InputVertexInterfaceData,pFVar2,pFVar26);
              goto LAB_14ad53c3b;
            }
            pFVar17 = FInputVertexInterfaceData::GetVertex(local_180,pFVar2);
            pFVar18 = (FInvalidConnectionDataTypeError *)0x0;
            local_b0._0_8_ = (INode *)0x0;
            local_a0 = pFVar17->_padding_;
            local_98 = pFVar17->_padding_;
            local_90 = local_148;
            local_b0._8_8_ = &___7FOutputDataVertex_Metasound__6B_;
            local_88 = *(INode **)(lVar14 + 0x10);
            local_78 = *pFVar2;
            local_70 = *(longlong *)(lVar14 + 0x28);
            local_68 = *(undefined4 *)(lVar14 + 0x30);
            local_80 = &___7FInputDataVertex_Metasound__6B_;
            TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            ::
            TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                      (&local_60,
                       (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                        *)(lVar14 + 0x38));
            pFVar20 = local_178[1].Bindings.AllocatorInstance.Data;
            this_00 = ::operator_new(0x60);
            if (this_00 != (FInvalidConnectionDataTypeError *)0x0) {
              pFVar18 = FInvalidConnectionDataTypeError::FInvalidConnectionDataTypeError
                                  (this_00,(FDataEdge *)local_b0);
            }
            pFVar22 = *(FScriptContainerElement **)&pFVar20->field_0x0;
            local_190 = pFVar18;
            if ((pFVar22 <= (FScriptContainerElement *)&local_190) &&
               ((FScriptContainerElement *)&local_190 <
                pFVar22 + (longlong)*(int *)(pFVar20 + 0xc) * 8)) {
              local_1b0 = (longlong)*(int *)&pFVar20[8].field_0x0;
              local_1a8 = 8;
              local_1c8 = &local_190;
              local_1c0 = pFVar22;
              local_1b8 = (longlong)*(int *)(pFVar20 + 0xc);
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar10) {
                pcVar7 = (code *)swi(3);
                EVar11 = (*pcVar7)();
                return (FBuildStatus)EVar11;
              }
            }
            iVar12 = *(int *)&pFVar20[8].field_0x0;
            if (iVar12 == *(int *)(pFVar20 + 0xc)) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
            }
            bVar4 = local_60.TypeIndex;
            *(int *)&pFVar20[8].field_0x0 = iVar12 + 1;
            *(FInvalidConnectionDataTypeError **)
             (*(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)iVar12 * 8) = local_190;
            local_190 = (FInvalidConnectionDataTypeError *)0x0;
            if ((0xc < local_60.TypeIndex) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              EVar11 = (*pcVar7)();
              return (FBuildStatus)EVar11;
            }
            pTVar21 = &local_60;
            goto LAB_14ad53c35;
          }
          break;
        }
        pFVar20 = pFVar20 + 0x58;
      } while (pFVar20 != pFVar22);
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_c8,
               (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(lVar14 + 0x38));
    pFVar17 = (FInputDataVertex *)
              (pFVar15->VertexData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
    pFVar23 = (FInputDataVertex *)
              ((longlong)pFVar17 +
              (longlong)(pFVar15->VertexData).InputVertexInterfaceData.Bindings.ArrayNum * 0x58);
    if (pFVar17 != pFVar23) {
      do {
        if ((FName)pFVar17->_padding_ == *(FName *)(lVar14 + 0x20)) {
          FInputDataVertex::SetDefaultLiteral(pFVar17,(FLiteral *)&local_c8);
          goto LAB_14ad53c02;
        }
        pFVar17 = (FInputDataVertex *)&pFVar17[1].Literal;
      } while (pFVar17 != pFVar23);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)(lVar14 + 0x20),local_f8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_f8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8[0].Data.AllocatorInstance.Data);
      }
    }
LAB_14ad53c02:
    bVar4 = local_c8.TypeIndex;
    if ((0xc < local_c8.TypeIndex) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar11 = (*pcVar7)();
      return (FBuildStatus)EVar11;
    }
    pTVar21 = &local_c8;
LAB_14ad53c35:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar4])(pTVar21);
LAB_14ad53c3b:
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  } while( true );
}

// GatherGraphDataReferences @ 14ad53cb0

FBuildStatus __thiscall
Metasound::FOperatorBuilder::GatherGraphDataReferences
          (FOperatorBuilder *this,FBuildContext *param_1,FVertexInterfaceData *param_2)

{
  undefined1 *puVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  EDataReferenceAccessType EVar4;
  uint uVar5;
  INode *pIVar6;
  INode IVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  EStatus EVar15;
  int iVar16;
  FOutputDataSource *pFVar17;
  INode *pIVar18;
  TTuple<FName,unsigned___int64> *pTVar19;
  FMissingInputDataReferenceError *this_00;
  FMissingInputDataReferenceError *pFVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  FMissingOutputDataReferenceError *this_01;
  FMissingOutputDataReferenceError *pFVar24;
  undefined4 uVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  FAnyDataReference *pFVar29;
  undefined1 *puVar30;
  TBitArray<FDefaultBitArrayAllocator> *pTVar31;
  FInputVertexInterfaceData *in_R9;
  uint uVar32;
  uint *puVar33;
  uint uVar34;
  uint uVar35;
  undefined1 local_185;
  undefined1 local_184 [4];
  uint local_180;
  FInputDataDestination *local_178;
  FMissingInputDataReferenceError *local_170;
  FMissingOutputDataReferenceError *local_168;
  FOutputDataSource *local_160;
  FAnyDataReference local_158;
  FOutputDataSource *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  longlong *local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  FOutputDataSource *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_3c;
  
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (!bVerboseTraceEvents)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::GatherGraphDataReferences");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId659,"Metasound::FOperatorBuilder::GatherGraphDataReferences"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x293);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId659);
  }
  plVar21 = *(longlong **)&param_2->InputVertexInterfaceData;
  *(undefined4 *)&param_1->Graph = 0;
  pFVar17 = (FOutputDataSource *)(**(code **)(*plVar21 + 0x60))();
  iVar16 = *(int *)&pFVar17[1].Node;
  iStack_138 = 0;
  local_120 = 0;
  puVar1 = &(pFVar17->Vertex).field_0x8;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar16 != 0) {
    puVar33 = *(uint **)&(pFVar17->Vertex).field_0x18;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)puVar1;
    }
    uVar34 = *puVar33;
    while (uVar34 == 0) {
      lVar26 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      iStack_124 = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14ad53e0f;
      uVar34 = puVar33[lVar26 + 1];
    }
    uStack_134 = -uVar34 & uVar34;
    uVar3 = (ulonglong)uStack_134 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_110 = (int)lVar26;
    iStack_124 = local_110 + -1 + local_120;
    if (iVar16 < iStack_124) {
      iStack_124 = iVar16;
    }
  }
LAB_14ad53e0f:
  uVar34 = *(uint *)&pFVar17[1].Node;
  uStack_11c = local_3c;
  iStack_118 = *(int *)&pFVar17->Vertex - *(int *)&pFVar17[1].Vertex.field_0x4;
  uVar35 = uVar34 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_134,iStack_138);
  TStack_c0.CurrentBitIndex = iStack_124;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar28 = (int)uVar34 >> 5;
  TStack_c0._28_4_ = local_3c;
  TStack_c0.BaseBitIndex = local_120;
  uStack_a0 = CONCAT44(uStack_114,iStack_118);
  local_180 = uVar34;
  local_160 = pFVar17;
  local_140 = pFVar17;
  local_130 = puVar1;
  local_c8 = pFVar17;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar34 < 0) || (iVar16 < (int)uVar34)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    EVar15 = (*pcVar9)();
    return (FBuildStatus)EVar15;
  }
  uVar32 = *(uint *)&pFVar17[1].Node;
  uVar5 = local_180;
  if (uVar34 != uVar32) {
    puVar30 = *(undefined1 **)&(pFVar17->Vertex).field_0x18;
    if (puVar30 == (undefined1 *)0x0) {
      puVar30 = puVar1;
    }
    uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar28 * 4);
    while (uVar34 == 0) {
      lVar26 = (longlong)iVar28;
      uVar35 = uVar35 + 0x20;
      iVar28 = iVar28 + 1;
      local_180 = uVar32;
      uVar5 = uVar32;
      if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
      goto LAB_14ad53f30;
      uVar34 = *(uint *)(puVar30 + lVar26 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_10c = (int)lVar26;
    local_180 = local_10c + -1 + uVar35;
    uVar5 = local_180;
    if ((int)uVar32 < (int)local_180) {
      local_180 = uVar32;
      uVar5 = uVar32;
    }
  }
LAB_14ad53f30:
  do {
    pFVar17 = local_c8;
    if (*(int *)&local_c8->Vertex - *(int *)&local_c8[1].Vertex.field_0x4 != (int)uStack_a0) {
      local_185 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_185);
    }
    iVar16 = TStack_c0.CurrentBitIndex;
    if (((TStack_c0.CurrentBitIndex == uVar5) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pFVar17 == local_160)) {
      plVar21 = (longlong *)
                (**(code **)(**(longlong **)&param_2->InputVertexInterfaceData + 0x68))();
      iVar16 = (int)plVar21[5];
      iStack_f0 = 0;
      local_d8 = 0;
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar21 + 2);
      uStack_ec = 1;
      iStack_dc = 0;
      if (iVar16 == 0) goto LAB_14ad5426f;
      pTVar31 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar31 = pTVar2;
      }
      uVar34 = *(uint *)(pTVar31->AllocatorInstance).InlineData;
      break;
    }
    iVar28 = 0;
    lVar26 = *(longlong *)&param_2->OutputVertexInterfaceData;
    pIVar6 = pFVar17->Node;
    IVar7 = pIVar6[(longlong)TStack_c0.CurrentBitIndex * 0xb + 2];
    local_178 = (FInputDataDestination *)(pIVar6 + (longlong)TStack_c0.CurrentBitIndex * 0xb + 2);
    uVar34 = *(uint *)(lVar26 + 0x68);
    bVar13 = false;
    uVar35 = uVar34;
    if (0 < (int)uVar34) {
      do {
        uVar32 = uVar35 >> 1;
        if ((ulonglong)
            *(INode *)((longlong)(int)(uVar32 + iVar28) * 0x78 + *(longlong *)(lVar26 + 0x60)) <
            (ulonglong)IVar7) {
          iVar28 = (uVar35 & 1) + uVar32 + iVar28;
        }
        uVar35 = uVar32;
      } while (uVar32 != 0);
    }
    if (((iVar28 < (int)uVar34) &&
        ((ulonglong)*(INode *)((longlong)iVar28 * 0x78 + *(longlong *)(lVar26 + 0x60)) <=
         (ulonglong)IVar7)) && (iVar28 != -1)) {
      if ((iVar28 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        EVar15 = (*pcVar9)();
        return (FBuildStatus)EVar15;
      }
      lVar26 = *(longlong *)(lVar26 + 0x60) + 8 + (longlong)iVar28 * 0x78;
      if (lVar26 == 0) goto LAB_14ad540dc;
      (**(code **)(**(longlong **)(lVar26 + 8) + 0x20))(*(longlong **)(lVar26 + 8),lVar26 + 0x10);
      lVar27 = *(longlong *)(lVar26 + 0x18);
      lVar26 = (longlong)*(int *)(lVar26 + 0x20) * 0x58 + lVar27;
      if (lVar27 != lVar26) {
        do {
          if (*(INode *)(lVar27 + 8) == pIVar6[(longlong)iVar16 * 0xb + 4]) {
            pFVar29 = (FAnyDataReference *)0x0;
            if (*(char *)(lVar27 + 0x50) != '\0') {
              pFVar29 = (FAnyDataReference *)(lVar27 + 0x38);
            }
            if ((pFVar29 != (FAnyDataReference *)0x0) &&
               (pIVar18 = (INode *)(**(code **)(pFVar29->_padding_ + 8))(pFVar29),
               *pIVar18 == pIVar6[(longlong)iVar16 * 0xb + 5])) {
              bVar13 = true;
              FInputVertexInterfaceData::SetVertex
                        (in_R9,(FName *)(pIVar6 + (longlong)iVar16 * 0xb + 4),pFVar29);
            }
            break;
          }
          lVar27 = lVar27 + 0x58;
        } while (lVar27 != lVar26);
      }
      pTVar19 = TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::
                AllocateMemoryForEmplace<FName_const_&>
                          ((TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>
                            *)(*(longlong *)&param_2->OutputVertexInterfaceData + 0x70),
                           (FName *)(pIVar6 + (longlong)iVar16 * 0xb + 4));
      *(INode *)pTVar19 = pIVar6[(longlong)iVar16 * 0xb + 4];
      *(INode *)&pTVar19->field_0x8 = IVar7;
      if (!bVar13) goto LAB_14ad540dc;
    }
    else {
LAB_14ad540dc:
      pFVar8 = (param_2->OutputVertexInterfaceData).Bindings.AllocatorInstance.Data;
      this_00 = ::operator_new(0x60);
      pFVar20 = (FMissingInputDataReferenceError *)0x0;
      if (this_00 != (FMissingInputDataReferenceError *)0x0) {
        pFVar20 = FMissingInputDataReferenceError::FMissingInputDataReferenceError
                            (this_00,local_178);
      }
      local_170 = pFVar20;
      if (((*(FScriptContainerElement **)&pFVar8->field_0x0 <= (FScriptContainerElement *)&local_170
           ) && ((FScriptContainerElement *)&local_170 <
                 *(FScriptContainerElement **)&pFVar8->field_0x0 +
                 (longlong)*(int *)(pFVar8 + 0xc) * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        EVar15 = (*pcVar9)();
        return (FBuildStatus)EVar15;
      }
      iVar16 = *(int *)&pFVar8[8].field_0x0;
      if (iVar16 == *(int *)(pFVar8 + 0xc)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 0xc));
      }
      *(int *)&pFVar8[8].field_0x0 = iVar16 + 1;
      *(FMissingInputDataReferenceError **)
       (*(FScriptContainerElement **)&pFVar8->field_0x0 + (longlong)iVar16 * 8) = local_170;
      local_170 = (FMissingInputDataReferenceError *)0x0;
      uVar25 = 1;
      if (1 < *(int *)&param_1->Graph) {
        uVar25 = *(undefined4 *)&param_1->Graph;
      }
      *(undefined4 *)&param_1->Graph = uVar25;
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
joined_r0x00014ad54225:
  if (uVar34 != 0) goto LAB_14ad54248;
  lVar26 = (longlong)iStack_f0;
  local_d8 = local_d8 + 0x20;
  iStack_f0 = iStack_f0 + 1;
  iStack_dc = iVar16;
  if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14ad5426f;
  uVar34 = *(uint *)((pTVar31->AllocatorInstance).InlineData + lVar26 * 4 + 4);
  goto joined_r0x00014ad54225;
LAB_14ad54248:
  uStack_ec = -uVar34 & uVar34;
  uVar3 = (ulonglong)uStack_ec * 2 + 1;
  lVar26 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
  }
  local_108 = (int)lVar26;
  iStack_dc = local_d8 + -1 + local_108;
  if (iVar16 < iStack_dc) {
    iStack_dc = iVar16;
  }
LAB_14ad5426f:
  uVar34 = *(uint *)(plVar21 + 5);
  iStack_d4 = iStack_124;
  iStack_d0 = (int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34);
  uVar32 = uVar34 & 0xffffffe0;
  uStack_e0 = 0xffffffff;
  uVar35 = -1 << ((byte)uVar34 & 0x1f);
  TStack_90._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_90.CurrentBitIndex = iStack_dc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar28 = (int)uVar34 >> 5;
  local_178 = (FInputDataDestination *)CONCAT44(local_178._4_4_,uVar35);
  TStack_90._28_4_ = iStack_124;
  TStack_90.BaseBitIndex = local_d8;
  uStack_70 = CONCAT44(uStack_cc,iStack_d0);
  local_180 = uVar34;
  local_100 = plVar21;
  local_f8 = plVar21;
  local_e8 = pTVar2;
  local_98 = plVar21;
  TStack_90.Array = pTVar2;
  if (((int)uVar34 < 0) || (iVar16 < (int)uVar34)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      EVar15 = (*pcVar9)();
      return (FBuildStatus)EVar15;
    }
    uVar35 = (uint)local_178;
  }
  uVar5 = *(uint *)(plVar21 + 5);
  uVar12 = local_180;
  if (uVar34 != uVar5) {
    pTVar31 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar31 = pTVar2;
    }
    uVar35 = uVar35 & *(uint *)((pTVar31->AllocatorInstance).InlineData + (longlong)iVar28 * 4);
    while (uVar35 == 0) {
      lVar26 = (longlong)iVar28;
      uVar32 = uVar32 + 0x20;
      iVar28 = iVar28 + 1;
      local_180 = uVar5;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28) goto LAB_14ad54390;
      uVar35 = *(uint *)((pTVar31->AllocatorInstance).InlineData + lVar26 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_104 = (int)lVar26;
    local_180 = (uVar32 - 1) + local_104;
    uVar12 = local_180;
    if ((int)uVar5 < (int)local_180) {
      local_180 = uVar5;
      uVar12 = uVar5;
    }
  }
LAB_14ad54390:
  do {
    plVar23 = local_98;
    if ((int)local_98[1] - *(int *)((longlong)local_98 + 0x34) != (int)uStack_70) {
      local_184[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_184);
    }
    if (((TStack_90.CurrentBitIndex == uVar12) && (TStack_90.Array == pTVar2)) &&
       (plVar23 == plVar21)) {
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      return (FBuildStatus)(EStatus)param_1;
    }
    bVar13 = false;
    iVar28 = 0;
    lVar27 = (longlong)TStack_90.CurrentBitIndex * 0x40 + *plVar23;
    uVar3 = *(ulonglong *)(lVar27 + 0x10);
    local_160 = (FOutputDataSource *)(lVar27 + 0x10);
    lVar26 = *(longlong *)&param_2->OutputVertexInterfaceData;
    uVar34 = *(uint *)(lVar26 + 0x68);
    uVar35 = uVar34;
    iVar16 = 0;
    if (0 < (int)uVar34) {
      do {
        uVar32 = uVar35 >> 1;
        iVar28 = iVar16;
        if (*(ulonglong *)((longlong)(int)(uVar32 + iVar16) * 0x78 + *(longlong *)(lVar26 + 0x60)) <
            uVar3) {
          iVar28 = uVar32 + iVar16 + (uVar35 & 1);
        }
        uVar35 = uVar32;
        iVar16 = iVar28;
      } while (uVar32 != 0);
    }
    if (((iVar28 < (int)uVar34) &&
        (*(ulonglong *)((longlong)iVar28 * 0x78 + *(longlong *)(lVar26 + 0x60)) <= uVar3)) &&
       (iVar28 != -1)) {
      if ((iVar28 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        EVar15 = (*pcVar9)();
        return (FBuildStatus)EVar15;
      }
      lVar26 = *(longlong *)(lVar26 + 0x60) + 8 + (longlong)iVar28 * 0x78;
      if (lVar26 == 0) goto LAB_14ad545d0;
      lVar22 = *(longlong *)(lVar26 + 0x40);
      lVar26 = (longlong)*(int *)(lVar26 + 0x48) * 0x40 + lVar22;
      if (lVar22 != lVar26) {
        do {
          if (*(longlong *)(lVar22 + 8) == *(longlong *)(lVar27 + 0x20)) {
            plVar21 = (longlong *)0x0;
            if (*(char *)(lVar22 + 0x38) != '\0') {
              plVar21 = (longlong *)(lVar22 + 0x20);
            }
            if ((plVar21 != (longlong *)0x0) &&
               (plVar23 = (longlong *)(**(code **)(*plVar21 + 8))(plVar21),
               *plVar23 == *(longlong *)(lVar27 + 0x28))) {
              EVar4 = *(EDataReferenceAccessType *)(plVar21 + 1);
              local_158._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
              bVar13 = true;
              local_158.AccessType = EVar4;
              (**(code **)(*(longlong *)plVar21[2] + 0x18))
                        ((longlong *)plVar21[2],&local_158.DataRefPtr);
              if ((local_158.DataRefPtr.Ptr == (IDataReference *)0x0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("DataRefPtr.IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                                      ,0x30e,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                EVar15 = (*pcVar9)();
                return (FBuildStatus)EVar15;
              }
              if ((EVar4 == None) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("EDataReferenceAccessType::None != InAccessType",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                                      ,0x30f,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                EVar15 = (*pcVar9)();
                return (FBuildStatus)EVar15;
              }
              local_158._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
              VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FOutputBinding>
                        (in_R9[1].bIsVertexInterfaceFrozen,
                         (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_>
                          *)&in_R9[1].Bindings,(FName *)(lVar27 + 0x20),&local_158);
              if (local_158.DataRefPtr.Ptr != (IDataReference *)0x0) {
                (**(code **)*local_158.DataRefPtr.Ptr)(local_158.DataRefPtr.Ptr,1);
              }
            }
            break;
          }
          lVar22 = lVar22 + 0x40;
        } while (lVar22 != lVar26);
      }
      pTVar19 = TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::
                AllocateMemoryForEmplace<FName_const_&>
                          ((TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>
                            *)(*(longlong *)&param_2->OutputVertexInterfaceData + 0x80),
                           (FName *)(lVar27 + 0x20));
      *(undefined8 *)pTVar19 = *(undefined8 *)(lVar27 + 0x20);
      *(ulonglong *)&pTVar19->field_0x8 = uVar3;
      if (!bVar13) goto LAB_14ad545d0;
    }
    else {
LAB_14ad545d0:
      pFVar8 = (param_2->OutputVertexInterfaceData).Bindings.AllocatorInstance.Data;
      this_01 = ::operator_new(0x60);
      pFVar24 = (FMissingOutputDataReferenceError *)0x0;
      if (this_01 != (FMissingOutputDataReferenceError *)0x0) {
        pFVar24 = FMissingOutputDataReferenceError::FMissingOutputDataReferenceError
                            (this_01,local_160);
      }
      local_168 = pFVar24;
      if (((*(FScriptContainerElement **)&pFVar8->field_0x0 <= (FScriptContainerElement *)&local_168
           ) && ((FScriptContainerElement *)&local_168 <
                 *(FScriptContainerElement **)&pFVar8->field_0x0 +
                 (longlong)*(int *)(pFVar8 + 0xc) * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        EVar15 = (*pcVar9)();
        return (FBuildStatus)EVar15;
      }
      iVar16 = *(int *)&pFVar8[8].field_0x0;
      if (iVar16 == *(int *)(pFVar8 + 0xc)) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 0xc));
      }
      *(int *)&pFVar8[8].field_0x0 = iVar16 + 1;
      *(FMissingOutputDataReferenceError **)
       (*(FScriptContainerElement **)&pFVar8->field_0x0 + (longlong)iVar16 * 8) = local_168;
      local_168 = (FMissingOutputDataReferenceError *)0x0;
      uVar25 = 1;
      if (1 < *(int *)&param_1->Graph) {
        uVar25 = *(undefined4 *)&param_1->Graph;
      }
      *(undefined4 *)&param_1->Graph = uVar25;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    plVar21 = local_100;
  } while( true );
}

// GatherInternalGraphDataReferences @ 14ad54710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FOperatorBuilder::GatherInternalGraphDataReferences
          (FOperatorBuilder *this,FBuildContext *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FGuid,Metasound::FDataReferenceCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>_>
          *param_3)

{
  char cVar1;
  uint uVar2;
  FAnyDataReference *pFVar3;
  FGraphOperatorData *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 auStackY_148 [32];
  undefined1 local_116;
  undefined1 local_115 [5];
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *local_110;
  uint local_108;
  FScriptContainerElement *local_100;
  undefined **local_f8;
  char local_f0;
  undefined8 *local_e8;
  undefined1 local_e0 [8];
  FAnyDataReference *local_d8;
  TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
  *local_d0;
  FScriptContainerElement *local_c8;
  FBuildContext *local_c0;
  undefined8 *local_b8;
  undefined ***local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_110 = param_2;
  local_d0 = (TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
              *)param_3;
  local_c0 = param_1;
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (!bVerboseTraceEvents)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::GatherInternalGraphDataReferences");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId508,
               "Metasound::FOperatorBuilder::GatherInternalGraphDataReferences",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x1fc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId508);
  }
  local_108 = param_2->ArrayNum;
  uVar9 = (ulonglong)(int)local_108;
  pFVar11 = (param_2->AllocatorInstance).Data;
  local_c8 = pFVar11 + uVar9 * 8;
  do {
    pFVar17 = local_c8;
    iVar12 = 0;
    local_100 = pFVar11;
    if (param_2->ArrayNum != (int)uVar9) {
      local_116 = 0;
      `TCheckedPointerIterator<Metasound::INode_const_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_116);
    }
    if (pFVar11 == pFVar17) {
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      return;
    }
    pFVar3 = *(FAnyDataReference **)pFVar11;
    local_d8 = pFVar3;
    if ((pFVar3 == (FAnyDataReference *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodePtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                           ,0x201,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = param_1->GraphOperatorData;
    iVar15 = 0;
    uVar2 = (pFVar4->OperatorMap).Pairs.ArrayNum;
    pFVar17 = (pFVar4->OperatorMap).Pairs.AllocatorInstance.Data;
    uVar13 = uVar2;
    if (0 < (int)uVar2) {
      do {
        uVar14 = uVar13 >> 1;
        iVar15 = iVar12;
        if (*(FAnyDataReference **)(pFVar17 + (longlong)(int)(uVar14 + iVar12) * 0x78) < pFVar3) {
          iVar15 = (uVar13 & 1) + uVar14 + iVar12;
        }
        uVar13 = uVar14;
        iVar12 = iVar15;
      } while (uVar14 != 0);
    }
    if (((iVar15 < (int)uVar2) &&
        (param_2 = local_110, *(FAnyDataReference **)(pFVar17 + (longlong)iVar15 * 0x78) <= pFVar3))
       && (iVar15 != -1)) {
      if ((iVar15 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (pFVar4->OperatorMap).Pairs.AllocatorInstance.Data + (longlong)iVar15 * 0x78 + 8;
      param_2 = local_110;
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        lVar18 = *(longlong *)(pFVar17 + 0x40);
        iVar12 = *(int *)(pFVar17 + 0x48);
        local_98._0_8_ = (FScriptContainerElement *)0x0;
        local_78 = (void *)0x0;
        local_70 = 0;
        puVar10 = (undefined8 *)(lVar18 + 0x30);
        local_64 = 0;
        local_58 = (ForElementType<FSetElementId>)0x0;
        local_50 = 0;
        lVar16 = (longlong)iVar12 * 0x40 + lVar18;
        local_98._8_8_ = 0;
        local_6c = 0x80;
        local_68 = 0xffffffff;
        while( true ) {
          if (*(int *)(pFVar17 + 0x48) != iVar12) {
            local_115[0] = 0;
            `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_115);
          }
          if (lVar18 == lVar16) break;
          if (*(char *)(puVar10 + 1) != '\0') {
            cVar1 = *(char *)(puVar10 + -1);
            local_f8 = &___7FAnyDataReference_Metasound__6B_;
            local_f0 = cVar1;
            (**(code **)(*(longlong *)*puVar10 + 0x18))((longlong *)*puVar10,&local_e8);
            if ((local_e8 == (undefined8 *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("DataRefPtr.IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                                   ,0x30e,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((cVar1 == '\0') &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("EDataReferenceAccessType::None != InAccessType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                                   ,0x30f,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_b8 = puVar10 + -5;
            local_f8 = &___7FAnyDataReference_Metasound__6B_;
            local_b0 = &local_f8;
            TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&>_>
                      ((TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
                        *)local_98,
                       (TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&> *)
                       local_e0,(bool *)&local_b8);
            if (local_e8 != (undefined8 *)0x0) {
              (**(code **)*local_e8)(local_e8,1);
            }
          }
          lVar18 = lVar18 + 0x40;
          puVar10 = puVar10 + 8;
        }
        local_a8 = (**(code **)(local_d8->_padding_ + 0x10))();
        local_a0 = local_98;
        TSet<TTuple<FGuid,Metasound::FDataReferenceCollection>,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FGuid_const_&,Metasound::FDataReferenceCollection_&&>_>
                  (local_d0,(TPairInitializer<FGuid_const_&,Metasound::FDataReferenceCollection_&&>
                             *)(local_e0 + 4),(bool *)&local_a8);
        pFVar11 = local_100;
        local_50 = 0;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FAnyDataReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_98,0,local_98._8_4_);
        iVar12 = SUB84(local_98._8_8_,4);
        local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
        if (iVar12 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
        }
        local_68 = 0xffffffff;
        local_64 = 0;
        local_70 = 0;
        if (0x80 < local_6c) {
          local_6c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
        }
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
        param_2 = local_110;
        if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_98._0_8_);
          param_2 = local_110;
        }
      }
    }
    uVar9 = (ulonglong)local_108;
    pFVar11 = pFVar11 + 8;
    param_1 = local_c0;
  } while( true );
}

// GetDynamicGraphOperatorData @ 14ad55a40

FDynamicGraphOperatorData * __thiscall
Metasound::FOperatorBuilder::GetDynamicGraphOperatorData
          (FOperatorBuilder *this,IDynamicGraphInPlaceBuildable *param_1)

{
  FDynamicGraphOperatorData *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ad55a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FDynamicGraphOperatorData *)(**(code **)((longlong)*param_1 + 8))(param_1);
  return pFVar1;
}

// GetMaxErrorLevel @ 14ad56010

EStatus __thiscall Metasound::FOperatorBuilder::GetMaxErrorLevel(FOperatorBuilder *this)

{
  return (EStatus)((this->BuilderSettings).bFailOnAnyError == false);
}

// InitializeOperatorInfo @ 14ad59120

void __thiscall
Metasound::FOperatorBuilder::InitializeOperatorInfo
          (FOperatorBuilder *this,IGraph *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FGraphOperatorData *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  FVertexInterface *pFVar13;
  TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo> *pTVar14;
  longlong *plVar15;
  FOperatorInfo *pFVar16;
  TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
  *pTVar17;
  TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
  *pTVar18;
  uint uVar19;
  int iVar20;
  FName *pFVar21;
  ulong64 *puVar22;
  FScriptContainerElement *pFVar23;
  ulong64 *puVar24;
  undefined1 local_d6;
  undefined1 local_d5 [5];
  longlong *local_d0;
  TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
  *local_c8;
  ulong64 *local_c0;
  FName local_b8;
  FName FStack_b0;
  FOperatorInfo local_a8;
  
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (!bVerboseTraceEvents)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::InitializeOperatorInfo");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId425,"Metasound::FOperatorBuilder::InitializeOperatorInfo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x1a9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId425);
  }
  local_c8 = &param_3->OperatorMap;
  iVar12 = (param_3->OperatorMap).Pairs.ArrayNum;
  uVar19 = param_2->ArrayNum + iVar12;
  if (-1 < (int)uVar19) {
    piVar1 = &(param_3->OperatorMap).Pairs.ArrayMax;
    if (*piVar1 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,uVar19,(ForAnyElementType *)local_c8,iVar12,piVar1);
    }
    if ((GCycleStatsShouldEmitNamedEvents < 1) || (bVerboseTraceEvents == false)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"Metasound::FOperatorBuilder::InitializeOperatorInfo::Nodes");
    }
    if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId435,
                 "Metasound::FOperatorBuilder::InitializeOperatorInfo::Nodes",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,0x1b3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId435);
    }
    pTVar10 = local_c8;
    pFVar23 = (param_2->AllocatorInstance).Data;
    iVar20 = 0;
    iVar12 = param_2->ArrayNum;
    pFVar2 = pFVar23 + (longlong)iVar12 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar12) {
        local_d6 = 0;
        `TCheckedPointerIterator<Metasound::INode_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d6);
      }
      if (pFVar23 == pFVar2) break;
      local_d0 = *(longlong **)pFVar23;
      local_a8.Operator.Ptr = (IOperator *)0x0;
      local_a8.Ordinal = iVar20;
      pFVar13 = (FVertexInterface *)(**(code **)(*local_d0 + 0x20))();
      FVertexInterfaceData::FVertexInterfaceData(&local_a8.VertexData,pFVar13);
      local_a8.OutputConnections.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.OutputConnections.Pairs.ArrayNum = 0;
      local_a8.OutputConnections.Pairs.ArrayMax = 0;
      pTVar14 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                ::AllocateMemoryForEmplace<unsigned___int64_const_&>(pTVar10,(ulong64 *)&local_d0);
      *(longlong **)pTVar14 = local_d0;
      DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo::FOperatorInfo
                ((FOperatorInfo *)&pTVar14->field_0x8,&local_a8);
      DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
                  *)local_a8.OutputConnections.Pairs.AllocatorInstance.Data,
                 local_a8.OutputConnections.Pairs.ArrayNum);
      if ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
           *)local_a8.OutputConnections.Pairs.AllocatorInstance.Data !=
          (TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
           *)0x0) {
        FMemory::Free(local_a8.OutputConnections.Pairs.AllocatorInstance.Data);
      }
      FVertexInterfaceData::~FVertexInterfaceData(&local_a8.VertexData);
      if (local_a8.Operator.Ptr != (IOperator *)0x0) {
        (**(code **)*local_a8.Operator.Ptr)(local_a8.Operator.Ptr,1);
      }
      iVar20 = iVar20 + 1;
      pFVar23 = pFVar23 + 8;
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((GCycleStatsShouldEmitNamedEvents < 1) || (bVerboseTraceEvents == false)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,
                 "Metasound::FOperatorBuilder::InitializeOperatorInfo::OutputDestinations");
    }
    if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId446,
                 "Metasound::FOperatorBuilder::InitializeOperatorInfo::OutputDestinations",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,0x1be);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId446);
    }
    plVar15 = (longlong *)(**(code **)((longlong)*param_1 + 0x58))();
    pTVar10 = local_c8;
    puVar24 = (ulong64 *)*plVar15;
    lVar9 = plVar15[1];
    pFVar21 = (FName *)(puVar24 + 2);
    puVar22 = puVar24 + (longlong)(int)lVar9 * 0xd;
    while( true ) {
      local_c0 = puVar24;
      if ((int)plVar15[1] != (int)lVar9) {
        local_d5[0] = 0;
        `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d5);
      }
      if (puVar24 == puVar22) break;
      pFVar16 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                ::Find(pTVar10,*puVar24);
      if (pFVar16 == (FOperatorInfo *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x141,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar17 = TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                ::Find(&pFVar16->OutputConnections,*pFVar21);
      if (pTVar17 ==
          (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
           *)0x0) {
        pTVar18 = TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                  ::AllocateMemoryForEmplace<FName_const_&>(&pFVar16->OutputConnections,pFVar21);
        uVar19 = pFVar21->Number;
        *(uint *)&pTVar18->field_0x0 = (pFVar21->ComparisonIndex).Value;
        *(uint *)&pTVar18->field_0x4 = uVar19;
        pTVar17 = (TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>
                   *)&pTVar18->field_0x8;
        *(undefined8 *)pTVar17 = 0;
        *(undefined8 *)&pTVar18->field_0x10 = 0;
      }
      local_b8 = pFVar21[3];
      FStack_b0 = pFVar21[5];
      pFVar3 = (FName *)(pTVar17->AllocatorInstance).Data;
      if ((pFVar3 <= &local_b8) && (&local_b8 < pFVar3 + (longlong)pTVar17->ArrayMax * 2)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar12 = pTVar17->ArrayNum;
      if (iVar12 == pTVar17->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
      }
      pTVar17->ArrayNum = iVar12 + 1;
      puVar24 = local_c0 + 0xd;
      pFVar21 = pFVar21 + 0xd;
      pFVar3 = (FName *)((pTVar17->AllocatorInstance).Data + (longlong)iVar12 * 0x10);
      *pFVar3 = local_b8;
      pFVar3[1] = FStack_b0;
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
}

// InitializeVertexInterfaceData @ 14ad59600

void __thiscall
Metasound::FOperatorBuilder::InitializeVertexInterfaceData
          (FOperatorBuilder *this,IGraph *param_1,FGraphOperatorData *param_2)

{
  FVertexInterface *pFVar1;
  FVertexInterfaceData *pFVar2;
  FVertexInterfaceData local_58;
  
  pFVar1 = (FVertexInterface *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  pFVar2 = FVertexInterfaceData::FVertexInterfaceData(&local_58,pFVar1);
  FVertexInterfaceData::operator=(&param_2->VertexData,pFVar2);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)
             local_58.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
             local_58.OutputVertexInterfaceData.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_58.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data
      != (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_58.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
            ((FOutputBinding *)local_58.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data,
             local_58.OutputVertexInterfaceData.Bindings.ArrayNum);
  if ((FOutputBinding *)local_58.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
      (FOutputBinding *)0x0) {
    FMemory::Free(local_58.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)
             local_58.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
             local_58.InputVertexInterfaceData.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_58.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data
      != (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_58.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_58.InputVertexInterfaceData.Bindings.AllocatorInstance.Data,
             local_58.InputVertexInterfaceData.Bindings.ArrayNum);
  if ((FInputBinding *)local_58.InputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
      (FInputBinding *)0x0) {
    FMemory::Free(local_58.InputVertexInterfaceData.Bindings.AllocatorInstance.Data);
  }
  return;
}

// KahnsTopologicalSort @ 14ad5ade0

FBuildStatus __thiscall
Metasound::FOperatorBuilder::KahnsTopologicalSort
          (FOperatorBuilder *this,FBuildContext *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *in_R9;
  int local_res18 [4];
  
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (!bVerboseTraceEvents)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::KahnsTopologicalSort");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId325,"Metasound::FOperatorBuilder::KahnsTopologicalSort",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x145);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId325);
  }
  bVar4 = DirectedGraphAlgo::KahnTopologicalSort
                    (*(FDirectedGraphAlgoAdapter **)&param_2->ArrayNum,in_R9);
  if (bVar4) {
    *(undefined4 *)&param_1->Graph = 0;
  }
  else {
    pTVar1 = (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
              *)param_2[3].AllocatorInstance.Data;
    bVar4 = FGraphLinter::ValidateNoCyclesInGraph
                      (*(FDirectedGraphAlgoAdapter **)&param_2->ArrayNum,pTVar1);
    if (bVar4) {
      local_res18[0] = 0x4f;
      AddBuildError<Metasound::FInternalError,char_const_(&)[122],int>
                (pTVar1,(char (*) [122])
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
                 ,local_res18);
    }
    *(undefined4 *)&param_1->Graph = 2;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (FBuildStatus)(EStatus)param_1;
}

// PruneNodes @ 14ad5c5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBuildStatus __thiscall
Metasound::FOperatorBuilder::PruneNodes
          (FOperatorBuilder *this,FBuildContext *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  EOperatorBuilderNodePruning EVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  ForAnyElementType _Src;
  EStatus EVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ForAnyElementType *in_R9;
  FBuildContext *pFVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStackY_128 [32];
  undefined1 local_d6 [6];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  INode *local_b8;
  FBuildContext *local_b0;
  INode *local_a8 [2];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  iVar7 = GCycleStatsShouldEmitNamedEvents;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_b0 = param_1;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Metasound::FOperatorBuilder::PruneNodes");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId343,"Metasound::FOperatorBuilder::PruneNodes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x157);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId343);
  }
  EVar3 = (this->BuilderSettings).PruningMode;
  uVar14 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  if (EVar3 == None) {
LAB_14ad5cab3:
    *(undefined4 *)&local_b0->Graph = 0;
    pFVar13 = local_b0;
  }
  else {
    if (EVar3 == PruneNodesWithoutOutputDependency) {
      DirectedGraphAlgo::FindReachableNodesFromOutput
                (*(FDirectedGraphAlgoAdapter **)&param_2->ArrayNum,
                 (TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                  *)local_98);
    }
    else if (EVar3 == PruneNodesWithoutInputDependency) {
      DirectedGraphAlgo::FindReachableNodesFromInput
                (*(FDirectedGraphAlgoAdapter **)&param_2->ArrayNum,
                 (TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                  *)local_98);
    }
    else {
      if (EVar3 != PruneNodesWithoutExternalDependency) goto LAB_14ad5cab3;
      DirectedGraphAlgo::FindReachableNodes
                (*(FDirectedGraphAlgoAdapter **)&param_2->ArrayNum,
                 (TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                  *)local_98);
    }
    pFVar13 = local_b0;
    uVar12 = local_98._8_4_ - local_64;
    uVar9 = *(uint *)&in_R9[1].Data;
    if (uVar9 == uVar12) {
      local_50 = 0;
      *(undefined4 *)&local_b0->Graph = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      bVar16 = local_98._12_4_ == 0;
    }
    else {
      if (uVar12 != 0) {
        local_d0.Data = (FScriptContainerElement *)0x0;
        local_c8 = 0;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        local_c8._0_4_ = uVar14;
        if (0 < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar12,&local_d0,0,(int *)((longlong)&local_c8 + 4));
        }
        pFVar11 = in_R9->Data;
        iVar4 = *(int *)&in_R9[1].Data;
        pFVar1 = pFVar11 + (longlong)iVar4 * 8;
        uVar9 = (uint)local_c8;
LAB_14ad5c8b0:
        do {
          if (*(int *)&in_R9[1].Data != iVar4) {
            local_d6[0] = 0;
            `TCheckedPointerIterator<Metasound::INode_const_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_d6);
            uVar9 = (uint)local_c8;
          }
          _Src.Data = local_d0.Data;
          if (pFVar11 == pFVar1) {
            if (in_R9 != &local_d0) {
              iVar4 = *(int *)((longlong)&in_R9[1].Data + 4);
              piVar2 = (int *)((longlong)&in_R9[1].Data + 4);
              *(uint *)&in_R9[1].Data = uVar9;
              if ((uVar9 == 0) && (iVar4 == 0)) {
                *piVar2 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,uVar9,iVar4,in_R9,uVar9,piVar2);
                if (uVar9 != 0) {
                  memcpy(in_R9->Data,_Src.Data,(longlong)(int)uVar9 << 3);
                }
              }
            }
            pFVar13 = local_b0;
            *(uint *)&local_b0->Graph = uVar14;
            if (local_d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data);
            }
            local_50 = 0;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_58);
            }
            bVar16 = local_98._12_4_ == 0;
            goto LAB_14ad5c750;
          }
          local_b8 = *(INode **)pFVar11;
          uVar12 = ((uint)((ulonglong)local_b8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_b8 >> 4))
                   * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          if (local_98._8_4_ != local_64) {
            FVar10 = (ForElementType<FSetElementId>)local_60;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FVar10 = local_58;
            }
            for (iVar5 = *(int *)((longlong)FVar10 +
                                 (ulonglong)(local_50 - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
                iVar5 != -1; iVar5 = *(int *)(local_98._0_8_ + (longlong)iVar5 * 0x10 + 8)) {
              if (*(INode **)(local_98._0_8_ + (longlong)iVar5 * 0x10) == local_b8) {
                uVar12 = uVar9;
                if ((local_d0.Data <= (FScriptContainerElement *)&local_b8) &&
                   ((FScriptContainerElement *)&local_b8 <
                    local_d0.Data + (longlong)(int)local_c8._4_4_ * 8)) {
                  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar16) {
                    pcVar6 = (code *)swi(3);
                    EVar8 = (*pcVar6)();
                    return (FBuildStatus)EVar8;
                  }
                  uVar12 = (uint)local_c8;
                }
                if (uVar12 == local_c8._4_4_) {
                  uVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_d0,(int *)((longlong)&local_c8 + 4));
                }
                uVar9 = uVar12 + 1;
                local_c8 = CONCAT44(local_c8._4_4_,uVar9);
                pFVar11 = pFVar11 + 8;
                *(INode **)(local_d0.Data + (longlong)(int)uVar12 * 8) = local_b8;
                goto LAB_14ad5c8b0;
              }
            }
          }
          AddBuildError<Metasound::FNodePrunedError,Metasound::INode_const_*_&>
                    ((TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
                      *)param_2[3].AllocatorInstance.Data,&local_b8);
          if (uVar14 < 2) {
            uVar14 = 1;
          }
          pFVar11 = pFVar11 + 8;
          uVar9 = (uint)local_c8;
        } while( true );
      }
      pFVar11 = in_R9->Data;
      pFVar1 = pFVar11 + (longlong)(int)uVar9 * 8;
      while( true ) {
        if (*(uint *)&in_R9[1].Data != uVar9) {
          `TCheckedPointerIterator<Metasound::INode_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_c0);
        }
        if (pFVar11 == pFVar1) break;
        local_a8[0] = *(INode **)pFVar11;
        AddBuildError<Metasound::FNodePrunedError,Metasound::INode_const_*_&>
                  ((TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
                    *)param_2[3].AllocatorInstance.Data,local_a8);
        pFVar11 = pFVar11 + 8;
      }
      iVar4 = *(int *)((longlong)&in_R9[1].Data + 4);
      *(undefined4 *)&in_R9[1].Data = 0;
      if (iVar4 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,in_R9,0,(int *)((longlong)&in_R9[1].Data + 4));
      }
      pFVar13 = local_b0;
      local_50 = 0;
      *(undefined4 *)&local_b0->Graph = 1;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      bVar16 = local_98._12_4_ == 0;
    }
LAB_14ad5c750:
    local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
    if (!bVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (FBuildStatus)(EStatus)pFVar13;
}

// ValidateOperatorOutputsAreBound @ 14ad6a0f0

/* WARNING: Enum "Type": Some values do not have unique names */

FBuildStatus __thiscall
Metasound::FOperatorBuilder::ValidateOperatorOutputsAreBound
          (FOperatorBuilder *this,INode *param_1,FOutputVertexInterfaceData *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FNodeClassName *this_00;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong in_R9;
  undefined1 local_66 [6];
  longlong local_60;
  FString local_58;
  FString local_48;
  
  if ((GCycleStatsShouldEmitNamedEvents < 1) || (!bVerboseTraceEvents)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FOperatorBuilder::ValidateOperatorOutputsAreBound");
  }
  if ((bVerboseTraceEvents == false) || (CpuChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId525,
               "Metasound::FOperatorBuilder::ValidateOperatorOutputsAreBound",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,0x20d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId525);
  }
  iVar1 = *(int *)(in_R9 + 0x10);
  lVar7 = *(longlong *)(in_R9 + 8);
  lVar6 = (longlong)iVar1 * 0x40 + lVar7;
  *(undefined4 *)param_1 = 0;
  bVar3 = false;
  local_60 = lVar6;
  while( true ) {
    if (*(int *)(in_R9 + 0x10) != iVar1) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_66);
    }
    if (lVar7 == lVar6) break;
    if (*(char *)(lVar7 + 0x38) == '\0') {
      bVar3 = true;
      this_00 = (FNodeClassName *)(**(code **)(*(longlong *)param_2 + 0x18))(param_2);
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)(lVar7 + 8),&local_48);
        FNodeClassName::ToString(this_00,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        lVar6 = local_60;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          lVar6 = local_60;
        }
      }
    }
    lVar7 = lVar7 + 0x40;
  }
  if (bVar3) {
    uVar5 = 1;
    if (1 < *(int *)param_1) {
      uVar5 = *(undefined4 *)param_1;
    }
    *(undefined4 *)param_1 = uVar5;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (FBuildStatus)(EStatus)param_1;
}

