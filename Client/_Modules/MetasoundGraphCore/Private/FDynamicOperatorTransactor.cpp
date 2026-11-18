// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 39

// FDynamicOperatorTransactor @ 14ad39270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDynamicOperatorTransactor * __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorTransactor
          (FDynamicOperatorTransactor *this,FGraph *param_1)

{
  FDynamicGraphIncrementalSorter *this_00;
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined2 local_10;
  
  uVar9 = DevSettings._8_2_;
  uVar1 = DevSettings._0_8_;
  (this->OperatorBuilder)._padding_ = (longlong)&___7FOperatorBuilder_Metasound__6B_;
  uVar10 = DevSettings._0_8_;
  DevSettings.PruningMode = (EOperatorBuilderNodePruning)uVar1;
  DevSettings.bValidateNoCyclesInGraph = SUB81(uVar1,1);
  bVar2 = DevSettings.bValidateNoCyclesInGraph;
  DevSettings.bValidateNoDuplicateInputs = SUB81(uVar1,2);
  bVar3 = DevSettings.bValidateNoDuplicateInputs;
  DevSettings.bValidateVerticesExist = SUB81(uVar1,3);
  bVar4 = DevSettings.bValidateVerticesExist;
  DevSettings.bValidateEdgeDataTypesMatch = SUB81(uVar1,4);
  bVar5 = DevSettings.bValidateEdgeDataTypesMatch;
  DevSettings.bValidateOperatorOutputsAreBound = SUB81(uVar1,5);
  bVar6 = DevSettings.bValidateOperatorOutputsAreBound;
  DevSettings.bFailOnAnyError = SUB81(uVar1,6);
  bVar7 = DevSettings.bFailOnAnyError;
  DevSettings.bPopulateInternalDataReferences = SUB81(uVar1,7);
  bVar8 = DevSettings.bPopulateInternalDataReferences;
  (this->OperatorBuilder).BuilderSettings.PruningMode = DevSettings.PruningMode;
  DevSettings._0_8_ = uVar10;
  (this->OperatorBuilder).BuilderSettings.bValidateNoCyclesInGraph = bVar2;
  (this->OperatorBuilder).BuilderSettings.bValidateNoDuplicateInputs = bVar3;
  (this->OperatorBuilder).BuilderSettings.bValidateVerticesExist = bVar4;
  (this->OperatorBuilder).BuilderSettings.bValidateEdgeDataTypesMatch = bVar5;
  (this->OperatorBuilder).BuilderSettings.bValidateOperatorOutputsAreBound = bVar6;
  (this->OperatorBuilder).BuilderSettings.bFailOnAnyError = bVar7;
  (this->OperatorBuilder).BuilderSettings.bPopulateInternalDataReferences = bVar8;
  local_10._1_1_ = SUB21(uVar9,1);
  (this->OperatorBuilder).BuilderSettings.bEnableOperatorRebind = true;
  (this->OperatorBuilder).BuilderSettings.bProfileOperators = local_10._1_1_;
  FGraph::FGraph(&this->Graph,param_1);
  this_00 = &this->GraphSorter;
  this_00->MaxOrdinal = 0;
  this_00->MinOrdinal = 0;
  *(undefined8 *)&(this->GraphSorter).OperatorMap = 0;
  *(undefined8 *)&(this->GraphSorter).OperatorMap.field_0x8 = 0;
  *(undefined8 *)&(this->GraphSorter).OperatorMap.field_0x20 = 0;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x28 = 0;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x34 = 0;
  *(undefined8 *)&(this->GraphSorter).OperatorMap.field_0x40 = 0;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x48 = 0;
  FDynamicGraphIncrementalSorter::Init(this_00,param_1);
  (this->OperatorInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OperatorInfos).ArrayNum = 0;
  (this->OperatorInfos).ArrayMax = 0;
  (this->LiteralNodeMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LiteralNodeMap).Pairs.ArrayNum = 0;
  (this->LiteralNodeMap).Pairs.ArrayMax = 0;
  return this;
}

// FDynamicOperatorTransactor @ 14ad39330

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FDynamicOperatorTransactor * __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorTransactor
          (FDynamicOperatorTransactor *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  FNodeClassMetadata *pFVar9;
  undefined8 uStack_20;
  
  uVar8 = DevSettings._8_2_;
  bVar1 = DevSettings.bValidateNoCyclesInGraph;
  bVar2 = DevSettings.bValidateNoDuplicateInputs;
  bVar3 = DevSettings.bValidateVerticesExist;
  bVar4 = DevSettings.bValidateEdgeDataTypesMatch;
  bVar5 = DevSettings.bValidateOperatorOutputsAreBound;
  bVar6 = DevSettings.bFailOnAnyError;
  bVar7 = DevSettings.bPopulateInternalDataReferences;
  (this->OperatorBuilder).BuilderSettings.PruningMode = DevSettings.PruningMode;
  (this->OperatorBuilder).BuilderSettings.bValidateNoCyclesInGraph = bVar1;
  (this->OperatorBuilder).BuilderSettings.bValidateNoDuplicateInputs = bVar2;
  (this->OperatorBuilder).BuilderSettings.bValidateVerticesExist = bVar3;
  (this->OperatorBuilder).BuilderSettings.bValidateEdgeDataTypesMatch = bVar4;
  (this->OperatorBuilder).BuilderSettings.bValidateOperatorOutputsAreBound = bVar5;
  (this->OperatorBuilder).BuilderSettings.bFailOnAnyError = bVar6;
  (this->OperatorBuilder).BuilderSettings.bPopulateInternalDataReferences = bVar7;
  (this->OperatorBuilder)._padding_ = (longlong)&___7FOperatorBuilder_Metasound__6B_;
  uStack_20 = CONCAT71((uint7)SUB21(uVar8,1),1);
  (this->OperatorBuilder).BuilderSettings.bEnableOperatorRebind = (bool)(undefined1)uStack_20;
  (this->OperatorBuilder).BuilderSettings.bProfileOperators = (bool)uStack_20._1_1_;
  (this->Graph)._padding_ = (longlong)&___7FGraph_Metasound__6B_;
  (this->Graph).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Graph).AssetPath.PackageName.Number = 0;
  (this->Graph).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Graph).AssetPath.AssetName.Number = 0;
  (this->Graph).InstanceName.ComparisonIndex = 0;
  (this->Graph).InstanceName.Number = 0;
  (this->Graph).InstanceID.A = 0;
  (this->Graph).InstanceID.B = 0;
  (this->Graph).InstanceID.C = 0;
  (this->Graph).InstanceID.D = 0;
  pFVar9 = FNodeClassMetadata::GetEmpty();
  FNodeClassMetadata::FNodeClassMetadata(&(this->Graph).Metadata,pFVar9);
  (this->Graph).OperatorData.Object = (IOperatorData *)0x0;
  (this->Graph).OperatorData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Graph).Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Graph).Edges.ArrayNum = 0;
  (this->Graph).Edges.ArrayMax = 0;
  (this->Graph).Nodes.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Graph).Nodes.Pairs.ArrayNum = 0;
  (this->Graph).Nodes.Pairs.ArrayMax = 0;
  *(undefined8 *)&(this->Graph).InputDestinations = 0;
  *(undefined8 *)&(this->Graph).InputDestinations.field_0x8 = 0;
  *(undefined8 *)&(this->Graph).InputDestinations.field_0x20 = 0;
  *(undefined4 *)&(this->Graph).InputDestinations.field_0x28 = 0;
  *(undefined4 *)&(this->Graph).InputDestinations.field_0x2c = 0x80;
  *(undefined4 *)&(this->Graph).InputDestinations.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Graph).InputDestinations.field_0x34 = 0;
  *(undefined8 *)&(this->Graph).InputDestinations.field_0x40 = 0;
  *(undefined4 *)&(this->Graph).InputDestinations.field_0x48 = 0;
  *(undefined8 *)&(this->Graph).OutputSources = 0;
  *(undefined8 *)&(this->Graph).OutputSources.field_0x8 = 0;
  *(undefined8 *)&(this->Graph).OutputSources.field_0x20 = 0;
  *(undefined4 *)&(this->Graph).OutputSources.field_0x28 = 0;
  *(undefined4 *)&(this->Graph).OutputSources.field_0x2c = 0x80;
  *(undefined4 *)&(this->Graph).OutputSources.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Graph).OutputSources.field_0x34 = 0;
  *(undefined8 *)&(this->Graph).OutputSources.field_0x40 = 0;
  *(undefined4 *)&(this->Graph).OutputSources.field_0x48 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (this->GraphSorter).MaxOrdinal = 0;
  (this->GraphSorter).MinOrdinal = 0;
  *(undefined8 *)&(this->GraphSorter).OperatorMap = 0;
  *(undefined8 *)&(this->GraphSorter).OperatorMap.field_0x8 = 0;
  *(undefined8 *)&(this->GraphSorter).OperatorMap.field_0x20 = 0;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x28 = 0;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x34 = 0;
  *(undefined8 *)&(this->GraphSorter).OperatorMap.field_0x40 = 0;
  *(undefined4 *)&(this->GraphSorter).OperatorMap.field_0x48 = 0;
  (this->OperatorInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OperatorInfos).ArrayNum = 0;
  (this->OperatorInfos).ArrayMax = 0;
  (this->LiteralNodeMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LiteralNodeMap).Pairs.ArrayNum = 0;
  (this->LiteralNodeMap).Pairs.ArrayMax = 0;
  return this;
}

// operator() @ 14ad3f9f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __thiscall
`Metasound::DynamicGraph::FDynamicOperatorTransactor::AddInputDataDestination'::__l2::<lambda_1>::
operator()(void *this,FDynamicOperatorInfo *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  FString local_58;
  FAnyDataReference local_48;
  undefined1 local_30 [8];
  EDataReferenceAccessType local_28;
  IDataReference *local_20;
  char local_18;
  
  (*(code *)**(undefined8 **)this)(local_30);
  if (local_18 == '\0') {
    puVar3 = (undefined8 *)0x0;
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(*(FName **)((longlong)this + 0x28),(FString *)&local_48);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      FGuid::AppendString(*(FGuid **)((longlong)this + 0x30),&local_58,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((undefined **)local_48._padding_ != (undefined **)0x0) {
        FMemory::Free((void *)local_48._padding_);
      }
    }
    bVar4 = local_18 == '\0';
  }
  else {
    puVar1 = *(undefined8 **)((longlong)this + 0x28);
    puVar2 = *(undefined8 **)((longlong)this + 0x20);
    puVar3 = ::operator_new(0x30);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      Metasound::FAnyDataReference::FAnyDataReference(&local_48,local_28,local_20);
      local_48._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
      puVar3[1] = *puVar2;
      *puVar3 = &___7FAddInput_DynamicGraph_Metasound__6B_;
      puVar3[2] = *puVar1;
      Metasound::FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(puVar3 + 3),local_48.AccessType,local_48.DataRefPtr.Ptr);
      puVar3[3] = &___7FAnyDataReference_Metasound__6B_;
      if (local_48.DataRefPtr.Ptr != (IDataReference *)0x0) {
        (**(code **)*local_48.DataRefPtr.Ptr)(local_48.DataRefPtr.Ptr,1);
        bVar4 = local_18 == '\0';
        goto LAB_14ad3fb6b;
      }
    }
    bVar4 = local_18 == '\0';
  }
LAB_14ad3fb6b:
  *(undefined8 **)&param_1->OperatorSettings = puVar3;
  if ((!bVar4) && (local_20 != (IDataReference *)0x0)) {
    (**(code **)*local_20)(local_20,1);
  }
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )(IDynamicOperatorTransform *)param_1;
}

// operator() @ 14ad3fe30

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __thiscall
`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueAddEdgeOperatorTransform'::__l2::
<lambda_1>::operator()(void *this,FDynamicOperatorInfo *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  IDynamicOperatorTransform *pIVar3;
  IDynamicOperatorTransform *pIVar4;
  IDynamicOperatorTransform *pIVar5;
  IDynamicOperatorTransform IVar6;
  IDynamicOperatorTransform IVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  int iVar10;
  bool bVar11;
  IDynamicOperatorTransform *pIVar12;
  TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
  TVar13;
  IDynamicOperatorTransform *pIVar14;
  IDynamicOperatorTransform *pIVar15;
  TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
  local_48;
  IDynamicOperatorTransform *local_40;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  puVar2 = *(undefined8 **)this;
  pIVar15 = (IDynamicOperatorTransform *)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if (0 < *(int *)(puVar2 + 1)) {
    pIVar12 = ::operator_new(0x18);
    local_48.Ptr = pIVar15;
    if (pIVar12 != (IDynamicOperatorTransform *)0x0) {
      iVar1 = *(int *)(puVar2 + 1);
      _Src = (void *)*puVar2;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = CONCAT44(local_20._4_4_,iVar1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
        memcpy(local_28.Data,_Src,(longlong)iVar1 << 4);
      }
      *pIVar12 = (IDynamicOperatorTransform)
                 &___7FSwapOperatorOrdinalsAndSort_DynamicGraph_Metasound__6B_;
      pIVar12[1] = (IDynamicOperatorTransform)local_28.Data;
      local_28.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pIVar12 + 2) = (undefined4)local_20;
      *(undefined4 *)&pIVar12[2].field_0x4 = local_20._4_4_;
      local_20 = 0;
      local_48.Ptr = pIVar12;
    }
    if (((local_38.Data <= &local_48) &&
        ((FScriptContainerElement *)&local_48 < local_38.Data + (longlong)iStack_2c * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      TVar13.Ptr = (IDynamicOperatorTransform *)(*pcVar8)();
      return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
              )TVar13.Ptr;
    }
    if (local_30 == iStack_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_38,&iStack_2c);
    }
    *(IDynamicOperatorTransform **)(local_38.Data + (longlong)local_30 * 8) = local_48.Ptr;
    local_48.Ptr = (IDynamicOperatorTransform *)0x0;
    local_30 = local_30 + 1;
  }
  pIVar12 = *(IDynamicOperatorTransform **)((longlong)this + 0x20);
  pIVar3 = *(IDynamicOperatorTransform **)((longlong)this + 0x18);
  pIVar4 = *(IDynamicOperatorTransform **)((longlong)this + 0x10);
  pIVar5 = *(IDynamicOperatorTransform **)((longlong)this + 8);
  pIVar14 = ::operator_new(0x28);
  local_40 = pIVar15;
  if (pIVar14 != (IDynamicOperatorTransform *)0x0) {
    IVar6 = *pIVar5;
    IVar7 = *pIVar3;
    *pIVar14 = (IDynamicOperatorTransform)&___7FConnectOperators_DynamicGraph_Metasound__6B_;
    pIVar14[1] = IVar6;
    pIVar14[2] = IVar7;
    pIVar14[3] = *pIVar4;
    pIVar14[4] = *pIVar12;
    local_40 = pIVar14;
  }
  if (((local_38.Data <= &local_40) &&
      ((FScriptContainerElement *)&local_40 < local_38.Data + (longlong)iStack_2c * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    TVar13.Ptr = (IDynamicOperatorTransform *)(*pcVar8)();
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )TVar13.Ptr;
  }
  if (local_30 == iStack_2c) {
    local_30 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_38,&iStack_2c);
  }
  *(IDynamicOperatorTransform **)(local_38.Data + (longlong)local_30 * 8) = local_40;
  local_30 = local_30 + 1;
  pIVar12 = ::operator_new(0x18);
  iVar10 = iStack_2c;
  iVar1 = local_30;
  FVar9.Data = local_38.Data;
  if (pIVar12 != (IDynamicOperatorTransform *)0x0) {
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    iStack_2c = 0;
    *pIVar12 = (IDynamicOperatorTransform)&___7FAtomicTransform_DynamicGraph_Metasound__6B_;
    pIVar12[1] = (IDynamicOperatorTransform)FVar9.Data;
    *(int *)(pIVar12 + 2) = iVar1;
    *(int *)&pIVar12[2].field_0x4 = iVar10;
    DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
              ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
                *)0x0,0);
    pIVar15 = pIVar12;
  }
  *(IDynamicOperatorTransform **)&param_1->OperatorSettings = pIVar15;
  DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
            ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
              *)local_38.Data,local_30);
  if ((IDynamicOperatorTransform)local_38.Data != (IDynamicOperatorTransform)0x0) {
    FMemory::Free(local_38.Data);
  }
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )(IDynamicOperatorTransform *)param_1;
}

// operator() @ 14ad40120

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __thiscall
`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::
<lambda_1>::operator()(void *this,FDynamicOperatorInfo *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  EAudioFadeType *pEVar3;
  ulong64 *puVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FBeginAudioFadeTransform *pFVar10;
  TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
  TVar11;
  FBeginAudioFadeTransform *pFVar12;
  TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
  local_58;
  FBeginAudioFadeTransform *local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  TArrayView<FName_const_,int> local_38;
  TArrayView<FName_const_,int> local_28;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  pFVar12 = (FBeginAudioFadeTransform *)0x0;
  puVar2 = *(undefined8 **)((longlong)this + 0x10);
  pEVar3 = *(EAudioFadeType **)((longlong)this + 8);
  puVar4 = *(ulong64 **)this;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar10 = ::operator_new(0x38);
  local_58.Ptr = (IDynamicOperatorTransform *)pFVar12;
  if (pFVar10 != (FBeginAudioFadeTransform *)0x0) {
    local_38.DataPtr = (FName *)*puVar1;
    local_38._8_8_ = puVar1[1];
    local_28.DataPtr = (FName *)*puVar2;
    local_28._8_8_ = puVar2[1];
    local_58.Ptr = (IDynamicOperatorTransform *)
                   Metasound::DynamicGraph::FBeginAudioFadeTransform::FBeginAudioFadeTransform
                             (pFVar10,*puVar4,*pEVar3,&local_28,&local_38);
  }
  if (((local_48.Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (IDynamicOperatorTransform *)(*pcVar5)();
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )TVar11.Ptr;
  }
  iVar9 = (int)local_40;
  if ((int)local_40 == local_40._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_48,(int *)((longlong)&local_40 + 4));
  }
  *(IDynamicOperatorTransform **)(local_48.Data + (longlong)iVar9 * 8) = local_58.Ptr;
  local_58.Ptr = (IDynamicOperatorTransform *)0x0;
  local_40._0_4_ = iVar9 + 1;
  pFVar10 = ::operator_new(8);
  local_50 = pFVar12;
  if (pFVar10 != (FBeginAudioFadeTransform *)0x0) {
    pFVar10->_padding_ = (longlong)&___7FExecuteFence_DynamicGraph_Metasound__6B_;
    local_50 = pFVar10;
  }
  if (((local_48.Data <= (FScriptContainerElement *)&local_50) &&
      ((FScriptContainerElement *)&local_50 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    TVar11.Ptr = (IDynamicOperatorTransform *)(*pcVar5)();
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )TVar11.Ptr;
  }
  if ((int)local_40 == local_40._4_4_) {
    local_40._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_48,(int *)((longlong)&local_40 + 4));
  }
  *(FBeginAudioFadeTransform **)(local_48.Data + (longlong)(int)local_40 * 8) = local_50;
  local_40._0_4_ = (int)local_40 + 1;
  pFVar10 = ::operator_new(0x18);
  iVar7 = local_40._4_4_;
  iVar9 = (int)local_40;
  FVar6.Data = local_48.Data;
  if (pFVar10 != (FBeginAudioFadeTransform *)0x0) {
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    pFVar10->_padding_ = (longlong)&___7FAtomicTransform_DynamicGraph_Metasound__6B_;
    pFVar10->OperatorIDToFade = (ulong64)FVar6.Data;
    *(int *)&pFVar10->InitFadeState = iVar9;
    *(int *)&pFVar10->field_0x14 = iVar7;
    DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
              ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
                *)0x0,0);
    pFVar12 = pFVar10;
  }
  *(FBeginAudioFadeTransform **)&param_1->OperatorSettings = pFVar12;
  DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
            ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
              *)local_48.Data,(int)local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )(IDynamicOperatorTransform *)param_1;
}

// operator() @ 14ad40390

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __thiscall
`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueFadeAndAddEdgeOperatorTransform'::__l2
::<lambda_1>::operator()(void *this,FDynamicOperatorInfo *param_1)

{
  ForAnyElementType *pFVar1;
  undefined8 *puVar2;
  void *_Src;
  IDynamicOperatorTransform *pIVar3;
  IDynamicOperatorTransform *pIVar4;
  IDynamicOperatorTransform *pIVar5;
  IDynamicOperatorTransform IVar6;
  IDynamicOperatorTransform IVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  ForAnyElementType FVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  IDynamicOperatorTransform *pIVar16;
  TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
  TVar17;
  IDynamicOperatorTransform *pIVar18;
  undefined8 *puVar19;
  IDynamicOperatorTransform *pIVar20;
  ForAnyElementType local_a8;
  int local_a0;
  int iStack_9c;
  TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
  local_98;
  IDynamicOperatorTransform *local_90;
  undefined8 *local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  IDynamicOperatorTransform *local_70;
  void *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  void *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  puVar2 = *(undefined8 **)this;
  pIVar20 = (IDynamicOperatorTransform *)0x0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  iStack_9c = 0;
  if (0 < *(int *)(puVar2 + 1)) {
    pIVar16 = ::operator_new(0x18);
    local_98.Ptr = pIVar20;
    if (pIVar16 != (IDynamicOperatorTransform *)0x0) {
      iVar15 = *(int *)(puVar2 + 1);
      _Src = (void *)*puVar2;
      local_80.Data = (FScriptContainerElement *)0x0;
      local_78 = CONCAT44(local_78._4_4_,iVar15);
      if (iVar15 == 0) {
        local_78 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar15,0,&local_80,iVar15,(int *)((longlong)&local_78 + 4));
        memcpy(local_80.Data,_Src,(longlong)iVar15 << 4);
      }
      *pIVar16 = (IDynamicOperatorTransform)
                 &___7FSwapOperatorOrdinalsAndSort_DynamicGraph_Metasound__6B_;
      pIVar16[1] = (IDynamicOperatorTransform)local_80.Data;
      local_80.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(pIVar16 + 2) = (undefined4)local_78;
      *(undefined4 *)&pIVar16[2].field_0x4 = local_78._4_4_;
      local_78 = 0;
      local_98.Ptr = pIVar16;
    }
    if (((local_a8.Data <= &local_98) &&
        ((FScriptContainerElement *)&local_98 < local_a8.Data + (longlong)iStack_9c * 8)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar11 = (code *)swi(3);
      TVar17.Ptr = (IDynamicOperatorTransform *)(*pcVar11)();
      return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
              )TVar17.Ptr;
    }
    if (local_a0 == iStack_9c) {
      local_a0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_a8,&iStack_9c);
    }
    *(IDynamicOperatorTransform **)(local_a8.Data + (longlong)local_a0 * 8) = local_98.Ptr;
    local_98.Ptr = (IDynamicOperatorTransform *)0x0;
    local_a0 = local_a0 + 1;
  }
  pIVar16 = *(IDynamicOperatorTransform **)((longlong)this + 0x20);
  pIVar3 = *(IDynamicOperatorTransform **)((longlong)this + 0x18);
  pIVar4 = *(IDynamicOperatorTransform **)((longlong)this + 0x10);
  pIVar5 = *(IDynamicOperatorTransform **)((longlong)this + 8);
  pIVar18 = ::operator_new(0x28);
  local_90 = pIVar20;
  if (pIVar18 != (IDynamicOperatorTransform *)0x0) {
    IVar6 = *pIVar5;
    IVar7 = *pIVar3;
    *pIVar18 = (IDynamicOperatorTransform)&___7FConnectOperators_DynamicGraph_Metasound__6B_;
    pIVar18[1] = IVar6;
    pIVar18[2] = IVar7;
    pIVar18[3] = *pIVar4;
    pIVar18[4] = *pIVar16;
    local_90 = pIVar18;
  }
  if (((local_a8.Data <= &local_90) &&
      ((FScriptContainerElement *)&local_90 < local_a8.Data + (longlong)iStack_9c * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar11 = (code *)swi(3);
    TVar17.Ptr = (IDynamicOperatorTransform *)(*pcVar11)();
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )TVar17.Ptr;
  }
  iVar15 = local_a0;
  if (local_a0 == iStack_9c) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_a8,&iStack_9c);
  }
  _local_a0 = CONCAT44(iStack_9c,iVar15 + 1);
  *(IDynamicOperatorTransform **)(local_a8.Data + (longlong)iVar15 * 8) = local_90;
  puVar2 = *(undefined8 **)((longlong)this + 0x30);
  puVar8 = *(undefined4 **)((longlong)this + 0x28);
  puVar9 = *(undefined8 **)((longlong)this + 0x18);
  local_90 = (IDynamicOperatorTransform *)0x0;
  puVar19 = ::operator_new(0x38);
  if (puVar19 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    local_68 = (void *)*puVar2;
    uStack_60 = puVar2[1];
    uVar10 = *puVar9;
    pFVar1 = (ForAnyElementType *)(puVar19 + 3);
    local_58 = *puVar8;
    uStack_54 = puVar8[1];
    iVar15 = puVar8[2];
    uStack_4c = puVar8[3];
    *puVar19 = &___7FBeginAudioFadeTransform_DynamicGraph_Metasound__6B_;
    puVar19[1] = uVar10;
    *(undefined1 *)(puVar19 + 2) = 2;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar19 + 4) = iVar15;
    iStack_50 = iVar15;
    local_48 = local_68;
    uStack_40 = uStack_60;
    local_38 = local_58;
    uStack_34 = uStack_54;
    iStack_30 = iVar15;
    uStack_2c = uStack_4c;
    if (iVar15 == 0) {
      *(int *)((longlong)(puVar19 + 4) + 4) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar15,0,pFVar1,iVar15,(int *)((longlong)(puVar19 + 4) + 4));
      memcpy(pFVar1->Data,(void *)CONCAT44(uStack_54,local_58),(longlong)iVar15 << 3);
    }
    iVar15 = (int)uStack_60;
    pFVar1 = (ForAnyElementType *)(puVar19 + 5);
    pFVar1->Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar19 + 6) = (int)uStack_60;
    if ((int)uStack_60 == 0) {
      *(int *)((longlong)(puVar19 + 6) + 4) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,(int)uStack_60,0,pFVar1,(int)uStack_60,(int *)((longlong)(puVar19 + 6) + 4));
      memcpy(pFVar1->Data,local_68,(longlong)iVar15 << 3);
    }
  }
  local_88 = puVar19;
  if (((local_a8.Data <= &local_88) &&
      ((FScriptContainerElement *)&local_88 < local_a8.Data + (longlong)iStack_9c * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar11 = (code *)swi(3);
    TVar17.Ptr = (IDynamicOperatorTransform *)(*pcVar11)();
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )TVar17.Ptr;
  }
  iVar15 = local_a0;
  if (local_a0 == iStack_9c) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_a8,&iStack_9c);
  }
  *(undefined8 **)(local_a8.Data + (longlong)iVar15 * 8) = local_88;
  local_88 = (undefined8 *)0x0;
  local_a0 = iVar15 + 1;
  pIVar16 = ::operator_new(8);
  local_70 = pIVar20;
  if (pIVar16 != (IDynamicOperatorTransform *)0x0) {
    *pIVar16 = (IDynamicOperatorTransform)&___7FExecuteFence_DynamicGraph_Metasound__6B_;
    local_70 = pIVar16;
  }
  if (((local_a8.Data <= &local_70) &&
      ((FScriptContainerElement *)&local_70 < local_a8.Data + (longlong)iStack_9c * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar11 = (code *)swi(3);
    TVar17.Ptr = (IDynamicOperatorTransform *)(*pcVar11)();
    return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
            )TVar17.Ptr;
  }
  if (local_a0 == iStack_9c) {
    local_a0 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_a8,&iStack_9c);
  }
  *(IDynamicOperatorTransform **)(local_a8.Data + (longlong)local_a0 * 8) = local_70;
  local_a0 = local_a0 + 1;
  pIVar16 = ::operator_new(0x18);
  iVar13 = iStack_9c;
  iVar15 = local_a0;
  FVar12.Data = local_a8.Data;
  if (pIVar16 != (IDynamicOperatorTransform *)0x0) {
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    iStack_9c = 0;
    *pIVar16 = (IDynamicOperatorTransform)&___7FAtomicTransform_DynamicGraph_Metasound__6B_;
    pIVar16[1] = (IDynamicOperatorTransform)FVar12.Data;
    *(int *)(pIVar16 + 2) = iVar15;
    *(int *)&pIVar16[2].field_0x4 = iVar13;
    DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
              ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
                *)0x0,0);
    pIVar20 = pIVar16;
  }
  *(IDynamicOperatorTransform **)&param_1->OperatorSettings = pIVar20;
  DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
            ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
              *)local_a8.Data,local_a0);
  if ((IDynamicOperatorTransform)local_a8.Data != (IDynamicOperatorTransform)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )(IDynamicOperatorTransform *)param_1;
}

// operator() @ 14ad408f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __thiscall
`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveEdgeOperatorTransform'::__l2::
<lambda_1>::operator()(void *this,FDynamicOperatorInfo *param_1)

{
  FName *pFVar1;
  ulong64 *puVar2;
  FName *pFVar3;
  ulong64 *puVar4;
  longlong *plVar5;
  FRemoveOperatorConnection *pFVar6;
  FNodeClassName *this_00;
  bool bVar7;
  FString local_78;
  FString local_68;
  FAnyDataReference local_58;
  undefined1 local_40 [8];
  EDataReferenceAccessType local_38;
  IDataReference *local_30;
  char local_28;
  
  (*(code *)**(undefined8 **)this)(local_40);
  if (local_28 == '\0') {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(*(FName **)((longlong)this + 0x38),(FString *)&local_58);
      plVar5 = *(longlong **)((longlong)this + 0x40);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      this_00 = (FNodeClassName *)(**(code **)(*plVar5 + 0x18))(plVar5);
      Metasound::FNodeClassName::ToString(this_00,&local_68);
      ::FString::PrintfImpl(&local_78,L"%s_v%d.%d");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((undefined **)local_58._padding_ != (undefined **)0x0) {
        FMemory::Free((void *)local_58._padding_);
      }
    }
    pFVar6 = (FRemoveOperatorConnection *)0x0;
    bVar7 = local_28 == '\0';
  }
  else {
    pFVar1 = *(FName **)((longlong)this + 0x38);
    puVar2 = *(ulong64 **)((longlong)this + 0x30);
    pFVar3 = *(FName **)((longlong)this + 0x28);
    puVar4 = *(ulong64 **)((longlong)this + 0x20);
    pFVar6 = ::operator_new(0x58);
    if (pFVar6 == (FRemoveOperatorConnection *)0x0) {
      bVar7 = local_28 == '\0';
      pFVar6 = (FRemoveOperatorConnection *)0x0;
    }
    else {
      Metasound::FAnyDataReference::FAnyDataReference(&local_58,local_38,local_30);
      local_58._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
      pFVar6 = Metasound::DynamicGraph::FRemoveOperatorConnection::FRemoveOperatorConnection
                         (pFVar6,*puVar4,pFVar3,*puVar2,pFVar1,&local_58);
      bVar7 = local_28 == '\0';
    }
  }
  *(FRemoveOperatorConnection **)&param_1->OperatorSettings = pFVar6;
  if ((!bVar7) && (local_30 != (IDataReference *)0x0)) {
    (**(code **)*local_30)(local_30,1);
  }
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )(IDynamicOperatorTransform *)param_1;
}

// operator() @ 14ad40af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __thiscall
`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveEdgeOperatorTransform_Deprecated'
::__l2::<lambda_1>::operator()(void *this,FDynamicOperatorInfo *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  INode IVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  FNodeClassName *pFVar13;
  INode *pIVar14;
  undefined8 *puVar15;
  FMetasoundEnvironment *in_R8;
  undefined8 local_res18;
  INode local_res20;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  Metasound::DynamicGraph::FDynamicOperatorTransactor::CreateInsertOperatorTransform
            (*(FDynamicOperatorTransactor **)this,&local_res20,
             (int)*(undefined8 *)((longlong)this + 8),
             (FOperatorSettings *)(ulonglong)**(uint **)((longlong)this + 0x10),in_R8,
             (FGraphRenderCost *)(in_R8 + 1));
  puVar15 = *(undefined8 **)((longlong)this + 0x18);
  puVar12 = *(undefined8 **)((longlong)this + 0x38);
  puVar1 = *(undefined8 **)((longlong)this + 0x30);
  puVar2 = *(undefined8 **)((longlong)this + 0x28);
  puVar3 = *(undefined8 **)((longlong)this + 0x20);
  puVar11 = ::operator_new(0x50);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *puVar1;
    FLazyName::Resolve(&Metasound::DynamicGraph::DynamicOperatorTransactorPrivate::
                        LiteralNodeOutputVertexName);
    uVar5 = *puVar15;
    puVar11[2] = *puVar2;
    puVar11[3] = uVar4;
    *puVar11 = &___7FSwapOperatorConnection_DynamicGraph_Metasound__6B_;
    puVar11[1] = &___7FConnectOperators_DynamicGraph_Metasound__6B_;
    puVar11[4] = local_res18;
    puVar11[5] = *puVar12;
    puVar11[6] = uVar5;
    puVar11[7] = uVar4;
    puVar11[8] = *puVar3;
    puVar11[9] = *puVar12;
  }
  IVar7 = local_res20;
  puVar15 = (undefined8 *)0x0;
  if ((local_res20 == (INode)0x0) || (puVar11 == (undefined8 *)0x0)) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(*(FName **)((longlong)this + 0x38),&local_48);
      plVar6 = *(longlong **)((longlong)this + 0x48);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      pFVar13 = (FNodeClassName *)(**(code **)(*plVar6 + 0x18))(plVar6);
      Metasound::FNodeClassName::ToString(pFVar13,&local_68);
      ::FString::PrintfImpl(&local_78,L"%s_v%d.%d");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pIVar14 = (INode *)::FName::ToString(*(FName **)((longlong)this + 0x20),&local_58);
      if (*(int *)(pIVar14 + 1) == 0) {
        local_res20 = (INode)0x15060d16c;
      }
      else {
        local_res20 = *pIVar14;
      }
      plVar6 = *(longlong **)((longlong)this + 0x40);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      pFVar13 = (FNodeClassName *)(**(code **)(*plVar6 + 0x18))(plVar6);
      Metasound::FNodeClassName::ToString(pFVar13,&local_68);
      ::FString::PrintfImpl(&local_88,L"%s_v%d.%d");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    (param_1->OperatorSettings).SampleRate = 0;
    (param_1->OperatorSettings).TargetBlockRate = 0.0;
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
    if (IVar7 != (INode)0x0) {
      (*(code *)**(undefined8 **)IVar7)(IVar7,1);
    }
  }
  else {
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&local_88,&local_88.Data.ArrayMax);
    iVar10 = iVar9 + 1;
    *(INode *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar9 * 8) = local_res20;
    if (iVar10 == local_88.Data.ArrayMax) {
      local_88.Data.ArrayNum = iVar10;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&local_88,&local_88.Data.ArrayMax);
    }
    local_88.Data.ArrayNum = iVar10 + 1;
    *(undefined8 **)(local_88.Data.AllocatorInstance.Data + (longlong)iVar10 * 8) = puVar11;
    puVar12 = ::operator_new(0x18);
    iVar9 = local_88.Data.ArrayMax;
    iVar10 = local_88.Data.ArrayNum;
    FVar8.Data = local_88.Data.AllocatorInstance.Data;
    if (puVar12 != (undefined8 *)0x0) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      *puVar12 = &___7FAtomicTransform_DynamicGraph_Metasound__6B_;
      puVar12[1] = FVar8.Data;
      *(int *)(puVar12 + 2) = iVar10;
      *(int *)((longlong)puVar12 + 0x14) = iVar9;
      DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
                ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
                  *)0x0,0);
      puVar15 = puVar12;
    }
    *(undefined8 **)&param_1->OperatorSettings = puVar15;
    DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
              ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
                *)local_88.Data.AllocatorInstance.Data,local_88.Data.ArrayNum);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )(IDynamicOperatorTransform *)param_1;
}

// operator() @ 14ad40eb0

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __thiscall
`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveOperatorTransform'::__l2::
<lambda_1>::operator()(void *this,FDynamicOperatorInfo *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  puVar2 = *(undefined8 **)this;
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    (param_1->OperatorSettings).SampleRate = 0;
    (param_1->OperatorSettings).TargetBlockRate = 0.0;
  }
  else {
    local_20 = *(int *)(puVar1 + 1);
    lVar5 = (longlong)local_20;
    _Src = (void *)*puVar1;
    local_28.Data = (FScriptContainerElement *)0x0;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,_Src,lVar5 << 3);
    }
    uVar3 = *puVar2;
    *puVar4 = &___7FRemoveOperator_DynamicGraph_Metasound__6B_;
    puVar4[1] = uVar3;
    puVar4[2] = local_28.Data;
    *(int *)(puVar4 + 3) = local_20;
    *(int *)((longlong)puVar4 + 0x1c) = local_1c;
    *(undefined8 **)&param_1->OperatorSettings = puVar4;
  }
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )(IDynamicOperatorTransform *)param_1;
}

// operator() @ 14ad413d0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __thiscall
`Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue'::__l2::<lambda_1>::operator()
          (void *this,FDynamicOperatorInfo *param_1)

{
  undefined8 *puVar1;
  FString local_98;
  FAnyDataReference local_88;
  undefined1 local_70 [8];
  EDataReferenceAccessType local_68;
  IDataReference *local_60;
  char local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  FAnyDataReference local_38;
  
  (*(code *)**(undefined8 **)this)(local_70);
  if (local_58 == '\0') {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(*(FName **)((longlong)this + 0x28),(FString *)&local_88);
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      FGuid::AppendString(*(FGuid **)((longlong)this + 0x30),&local_98,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if ((undefined **)local_88._padding_ != (undefined **)0x0) {
        FMemory::Free((void *)local_88._padding_);
      }
    }
    (param_1->OperatorSettings).SampleRate = 0;
    (param_1->OperatorSettings).TargetBlockRate = 0.0;
  }
  else {
    Metasound::FAnyDataReference::FAnyDataReference(&local_88,local_68,local_60);
    local_88._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
    local_48 = **(undefined8 **)((longlong)this + 0x20);
    local_50 = &___7FSetOperatorInput_DynamicGraph_Metasound__6B_;
    local_40 = **(undefined8 **)((longlong)this + 0x28);
    Metasound::FAnyDataReference::FAnyDataReference
              (&local_38,local_88.AccessType,local_88.DataRefPtr.Ptr);
    local_38._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
    if (local_88.DataRefPtr.Ptr != (IDataReference *)0x0) {
      (**(code **)*local_88.DataRefPtr.Ptr)(local_88.DataRefPtr.Ptr,1);
    }
    puVar1 = ::operator_new(0x30);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *puVar1 = &___7FSetOperatorInput_DynamicGraph_Metasound__6B_;
      puVar1[1] = local_48;
      puVar1[2] = local_40;
      Metasound::FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(puVar1 + 3),local_38.AccessType,local_38.DataRefPtr.Ptr);
      puVar1[3] = &___7FAnyDataReference_Metasound__6B_;
    }
    *(undefined8 **)&param_1->OperatorSettings = puVar1;
    if (local_38.DataRefPtr.Ptr != (IDataReference *)0x0) {
      (**(code **)*local_38.DataRefPtr.Ptr)(local_38.DataRefPtr.Ptr,1);
    }
  }
  if ((local_58 != '\0') && (local_60 != (IDataReference *)0x0)) {
    (**(code **)*local_60)(local_60,1);
  }
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )(IDynamicOperatorTransform *)param_1;
}

// AddDataEdge @ 14ad43e00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::AddDataEdge
          (FDynamicOperatorTransactor *this,FGuid *param_1,FName *param_2,FGuid *param_3,
          FName *param_4)

{
  INode *pIVar1;
  bool bVar2;
  FDeprecationNodeStorageAdapter *pFVar3;
  INode *pIVar4;
  bool bVar5;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::AddDataEdge");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId705,"Metasound::FDynamicOperatorTransactor::AddDataEdge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x2c1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId705);
  }
  pFVar3 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_1);
  if (pFVar3 == (FDeprecationNodeStorageAdapter *)0x0) {
    pIVar4 = (INode *)0x0;
  }
  else {
    pIVar4 = (pFVar3->Storage).Object;
  }
  pFVar3 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_3);
  if (((pFVar3 == (FDeprecationNodeStorageAdapter *)0x0) ||
      (pIVar1 = (pFVar3->Storage).Object, pIVar1 == (INode *)0x0)) || (pIVar4 == (INode *)0x0)) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_4,&local_38);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      FGuid::AppendString(param_3,&local_58,Digits);
      ::FName::ToString(param_2,&local_48);
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FGuid::AppendString(param_1,&local_68,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    AddDataEdgeInternal(this,pIVar4,param_2,param_3,pIVar1,param_4);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// AddDataEdgeInternal @ 14ad44430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::AddDataEdgeInternal
          (FDynamicOperatorTransactor *this,INode *param_1,FName *param_2,FGuid *param_3,
          INode *param_4,FName *param_5)

{
  INode *pIVar1;
  FName *pFVar2;
  FName *pFVar3;
  bool bVar4;
  longlong *plVar5;
  FName *pFVar6;
  FNodeClassName *this_00;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined1 local_c8 [16];
  FName local_b8;
  TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> local_b0;
  FString local_a0;
  TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> local_90;
  FString local_80;
  TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *local_70;
  INode **local_68;
  FName *local_60;
  FName **local_58;
  FName *local_50;
  FString *local_48;
  FString *local_40;
  
  pIVar1 = param_4;
  plVar5 = (longlong *)(**(code **)((longlong)*param_4 + 0x20))(param_4);
  pFVar2 = param_5;
  lVar7 = *plVar5;
  lVar8 = (longlong)(int)plVar5[1] * 0x38 + lVar7;
  if (lVar7 != lVar8) {
    local_b8 = *param_5;
    do {
      if (*(FName *)(lVar7 + 8) == local_b8) {
        local_c8._0_8_ = *(undefined8 *)param_3;
        local_c8._8_4_ = param_3->C;
        local_c8._12_4_ = param_3->D;
        param_5 = (FName *)0x0;
        bVar4 = TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
                ::RemoveAndCopyValue
                          (&this->LiteralNodeMap,(FLiteralNodeID *)local_c8,
                           (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *)
                           &param_5);
        pFVar3 = param_5;
        param_4 = (INode *)CONCAT71(param_4._1_7_,bVar4);
        if (bVar4) {
          FLazyName::Resolve(&DynamicOperatorTransactorPrivate::LiteralNodeOutputVertexName);
          FGraph::RemoveDataEdge(&this->Graph,(INode *)pFVar3,(FName *)&param_5,pIVar1,pFVar2);
          FDynamicGraphIncrementalSorter::RemoveDataEdge
                    (&this->GraphSorter,(ulong64)pFVar3,(ulong64)pIVar1);
        }
        FGraph::AddDataEdge(&this->Graph,param_1,param_2,pIVar1,pFVar2);
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        FDynamicGraphIncrementalSorter::AddDataEdge
                  (&this->GraphSorter,(ulong64)param_1,(ulong64)pIVar1,&local_b0);
        if ((char)param_4 != '\0') {
          FDynamicGraphIncrementalSorter::RemoveOperator(&this->GraphSorter,(ulong64)pFVar3);
        }
        pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
        param_5 = (FName *)pIVar1;
        local_50 = pFVar2;
        local_70 = &local_b0;
        local_68 = &param_4;
        local_58 = &param_5;
        param_4 = param_1;
        local_60 = param_2;
        if (*(FName *)(lVar7 + 0x10) == *pFVar6) {
          local_48 = &local_a0;
          local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar2;
          local_40 = &local_80;
          local_a0.Data.ArrayNum = 1;
          local_d0 = &local_70;
          local_d8 = (undefined1  [8])
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueFadeAndAddEdgeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
                     ::Call;
          local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_80.Data.ArrayNum = 0;
          EnqueueTransformOnOperatorQueues
                    (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                           *)local_d8);
          local_d8 = (undefined1  [8])&local_90;
          local_90.AllocatorInstance.Data = (FScriptContainerElement *)pIVar1;
          local_c8._8_8_ = local_d8;
          local_c8._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueEndFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
               ::Call;
        }
        else {
          local_c8._8_8_ = &local_70;
          local_c8._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueAddEdgeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
               ::Call;
        }
        EnqueueTransformOnOperatorQueues
                  (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                         *)local_c8);
        if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.AllocatorInstance.Data);
        }
        if (pFVar3 == (FName *)0x0) {
          return;
        }
        (**(code **)*pFVar3)(pFVar3,1);
        return;
      }
      lVar7 = lVar7 + 0x38;
    } while (lVar7 != lVar8);
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(param_5,&local_80);
    (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    this_00 = (FNodeClassName *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    FNodeClassName::ToString(this_00,(FString *)local_c8);
    ::FString::PrintfImpl((FString *)&local_90,L"%s_v%d.%d");
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    local_d8 = (undefined1  [8])0x0;
    local_d0._0_4_ = 0;
    local_d0._4_4_ = 0;
    FGuid::AppendString(param_3,(FString *)local_d8,Digits);
    ::FString::PrintfImpl(&local_a0,L"%s:%s");
    if (local_d8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_d8);
    }
    if ((INode *)local_90.AllocatorInstance.Data != (INode *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if ((FName *)local_a0.Data.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AddInputDataDestination @ 14ad44a80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::AddInputDataDestination
          (FDynamicOperatorTransactor *this,FGuid *param_1,FName *param_2,FLiteral *param_3,
          _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
          *param_4)

{
  INode *pIVar1;
  bool bVar2;
  FDeprecationNodeStorageAdapter *pFVar3;
  longlong *plVar4;
  FVertexInterface *this_00;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  INode *local_a8;
  undefined1 local_a0 [8];
  _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
  ***local_98;
  FString local_90;
  FString local_80;
  _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
  **local_70;
  FInputDataVertex *local_68;
  FLiteral *local_60;
  undefined1 *local_58;
  INode **local_50;
  FName *local_48;
  FGuid *local_40;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::AddInputDataDestination");
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId920,
               "Metasound::FDynamicOperatorTransactor::AddInputDataDestination",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x398);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId920);
  }
  pFVar3 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_1);
  if ((pFVar3 == (FDeprecationNodeStorageAdapter *)0x0) ||
     (pIVar1 = (pFVar3->Storage).Object, pIVar1 == (INode *)0x0)) {
    if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad44d31;
    ::FName::ToString(param_2,&local_80);
    local_a0 = (undefined1  [8])0x0;
    local_98 = (_func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
                ***)0x0;
    FGuid::AppendString(param_1,(FString *)local_a0,Digits);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_a0;
  }
  else {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    lVar5 = *plVar4;
    lVar6 = (longlong)(int)plVar4[1] * 0x38 + lVar5;
    if (lVar5 != lVar6) {
      do {
        if (*(FName *)(lVar5 + 8) == *param_2) {
          this_00 = (FVertexInterface *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
          local_68 = FVertexInterface::GetInputVertex(this_00,param_2);
          local_res8[0] = 2;
          if ((int)local_68->_padding_ == 1) {
            local_res8[0] = 4;
          }
          local_a8 = pIVar1;
          FGraph::AddInputDataDestination(&this->Graph,pIVar1,param_2);
          local_70 = &param_4;
          local_58 = local_res8;
          local_50 = &local_a8;
          local_98 = &local_70;
          local_a0 = (undefined1  [8])
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::AddInputDataDestination'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
                     ::Call;
          local_60 = param_3;
          local_48 = param_2;
          local_40 = param_1;
          EnqueueTransformOnOperatorQueues
                    (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                           *)local_a0);
          goto LAB_14ad44d31;
        }
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != lVar6);
    }
    if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad44d31;
    ::FName::ToString(param_2,&local_80);
    ::FName::ToString(param_2,&local_90);
    local_a0 = (undefined1  [8])0x0;
    local_98 = (_func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
                ***)0x0;
    FGuid::AppendString(param_1,(FString *)local_a0,Digits);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_a0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_a0);
    }
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
LAB_14ad44d31:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// AddNode @ 14ad452b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::AddNode
          (FDynamicOperatorTransactor *this,FGuid *param_1,
          TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> param_2)

{
  INode IVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  INode local_res18;
  code *local_48;
  FDynamicOperatorTransactor **local_40;
  FDynamicOperatorTransactor *local_38;
  INode local_30;
  INode *local_28;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::AddNode");
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId648,"Metasound::FDynamicOperatorTransactor::AddNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x288);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId648);
  }
  IVar1 = *param_2.Ptr;
  if (IVar1 == (INode)0x0) {
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar2) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    IVar1 = *param_2.Ptr;
    if (IVar1 != (INode)0x0) {
      (*(code *)**(undefined8 **)IVar1)(IVar1,1);
    }
    bVar2 = false;
  }
  else {
    *param_2.Ptr = (INode)0x0;
    local_res18 = IVar1;
    FGraph::AddNode(&this->Graph,param_1,&local_res18);
    iVar3 = FDynamicGraphIncrementalSorter::InsertOperator(&this->GraphSorter,(ulong64)IVar1,Last);
    local_res18._0_4_ = iVar3;
    local_28 = &local_res18;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueInsertOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
               ::Call;
    local_38 = this;
    local_30 = IVar1;
    EnqueueTransformOnOperatorQueues
              (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                     *)&local_48);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar2) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    IVar1 = *param_2.Ptr;
    if (IVar1 != (INode)0x0) {
      (*(code *)**(undefined8 **)IVar1)(IVar1,1);
    }
    bVar2 = true;
  }
  return bVar2;
}

// AddOutputDataSource @ 14ad45d80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::AddOutputDataSource
          (FDynamicOperatorTransactor *this,FGuid *param_1,FName *param_2)

{
  INode *pIVar1;
  bool bVar2;
  FDeprecationNodeStorageAdapter *pFVar3;
  bool bVar4;
  INode *local_res8;
  undefined1 local_48 [8];
  INode ***local_40;
  INode **local_38;
  FName *local_30;
  FString local_28;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::AddOutputDataSource");
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId980,
               "Metasound::FDynamicOperatorTransactor::AddOutputDataSource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x3d4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId980);
  }
  pFVar3 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_1);
  if ((pFVar3 == (FDeprecationNodeStorageAdapter *)0x0) ||
     (pIVar1 = (pFVar3->Storage).Object, pIVar1 == (INode *)0x0)) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_2,&local_28);
      local_48 = (undefined1  [8])0x0;
      local_40 = (INode ***)0x0;
      FGuid::AppendString(param_1,(FString *)local_48,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_48);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FGraph::AddOutputDataSource(&this->Graph,pIVar1,param_2);
    local_38 = &local_res8;
    local_40 = &local_38;
    local_48 = (undefined1  [8])
               UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::AddOutputDataSource'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
               ::Call;
    local_res8 = pIVar1;
    local_30 = param_2;
    EnqueueTransformOnOperatorQueues
              (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                     *)local_48);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// CreateInsertOperatorTransform @ 14ad4bf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
 __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::CreateInsertOperatorTransform
          (FDynamicOperatorTransactor *this,INode *param_1,int param_2,FOperatorSettings *param_3,
          FMetasoundEnvironment *param_4,FGraphRenderCost *param_5)

{
  undefined4 uVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FVertexInterface *pFVar4;
  undefined8 *puVar5;
  FText *this_00;
  FString *pFVar6;
  FName *this_01;
  longlong lVar7;
  FNodeClassName *this_02;
  TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
  TVar8;
  int iVar9;
  TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
  *pTVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
  *pTVar13;
  FInputBinding *pFVar14;
  undefined4 in_register_00000084;
  longlong *plVar15;
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  ForAnyElementType FVar18;
  undefined1 auStack_238 [32];
  FScriptContainerElement *local_218;
  undefined1 local_208;
  undefined1 local_207;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  FInputBinding *local_1f0;
  FVertexInterfaceData local_1e8;
  TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
  *local_198;
  int local_190;
  int local_18c;
  int local_188;
  FString local_180;
  IDynamicOperatorTransform *local_170;
  FOperatorInfo local_168;
  longlong *local_f8;
  FMetasoundEnvironment *local_f0;
  FVertexInterfaceData *local_e8;
  FGraphRenderCost *local_e0;
  FDynamicOperatorTransactor *local_d8;
  FString local_c8;
  FString local_b8;
  TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
  *local_a8;
  undefined8 local_a0;
  TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  plVar15 = (longlong *)CONCAT44(in_register_00000084,param_2);
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_190 = (int)param_3;
  local_170 = (IDynamicOperatorTransform *)param_1;
  pFVar4 = (FVertexInterface *)(**(code **)(*plVar15 + 0x20))(plVar15);
  FVertexInterfaceData::FVertexInterfaceData(&local_1e8,pFVar4);
  local_f0 = param_4;
  local_e8 = &local_1e8;
  local_e0 = param_5;
  local_a8 = (TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
              *)0x0;
  local_a0 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_f8 = plVar15;
  local_d8 = this;
  puVar5 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,&local_180);
  (**(code **)(*(longlong *)*puVar5 + 8))((longlong *)*puVar5,&local_1f0,&local_f8,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_180.Data.ArrayMax,local_180.Data.ArrayNum));
  iVar9 = (int)local_a0;
  pTVar13 = local_a8 + (int)local_a0;
  pTVar10 = local_a8;
  local_198 = pTVar13;
  while( true ) {
    if ((int)local_a0 != iVar9) {
      `TCheckedPointerIterator<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_208);
    }
    TVar8.Ptr = local_170;
    if (pTVar10 == pTVar13) break;
    if ((pTVar10->Ptr != (IOperatorBuildError *)0x0) && (2 < (byte)LogMetaSound._0_1_)) {
      this_00 = (FText *)(**(code **)((longlong)*pTVar10->Ptr + 0x10))();
      pFVar6 = FText::ToString(this_00);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      this_01 = (FName *)(**(code **)((longlong)*pTVar10->Ptr + 8))();
      ::FName::ToString(this_01,&local_b8);
      lVar7 = (**(code **)(*plVar15 + 0x18))(plVar15);
      uVar1 = *(undefined4 *)(lVar7 + 0x1c);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      this_02 = (FNodeClassName *)(**(code **)(*plVar15 + 0x18))(plVar15);
      FNodeClassName::ToString(this_02,&local_c8);
      local_218 = (FScriptContainerElement *)CONCAT44(local_218._4_4_,uVar1);
      ::FString::PrintfImpl(&local_180,L"%s_v%d.%d");
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_218 = (FScriptContainerElement *)pwVar11;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      pTVar13 = local_198;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        pTVar13 = local_198;
      }
    }
    pTVar10 = pTVar10 + 1;
  }
  if (local_1f0 == (FInputBinding *)0x0) {
    local_50 = 0;
    *local_170 = (IDynamicOperatorTransform)0x0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
    DestructItems<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,int>
              (local_a8,(int)local_a0);
    if (local_a8 !=
        (TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
         *)0x0) {
      FMemory::Free(local_a8);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)
               local_1e8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
               local_1e8.OutputVertexInterfaceData.SubInterfaces.ArrayNum);
    if ((FInputBinding *)local_1e8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data !=
        (FInputBinding *)0x0) {
      FMemory::Free(local_1e8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
              ((FOutputBinding *)local_1e8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data
               ,local_1e8.OutputVertexInterfaceData.Bindings.ArrayNum);
    if ((FInputBinding *)local_1e8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
        (FInputBinding *)0x0) {
      FMemory::Free(local_1e8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)
               local_1e8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
               local_1e8.InputVertexInterfaceData.SubInterfaces.ArrayNum);
    if ((FInputBinding *)local_1e8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data !=
        (FInputBinding *)0x0) {
      FMemory::Free(local_1e8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)local_1e8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data,
               local_1e8.InputVertexInterfaceData.Bindings.ArrayNum);
    if ((FInputBinding *)local_1e8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
        (FInputBinding *)0x0) {
      FMemory::Free(local_1e8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)((local_1f0->Vertex)._padding_ + 0x20))(local_1f0,&local_1e8);
    (**(code **)((local_1f0->Vertex)._padding_ + 0x28))();
    FVar17.Data = local_1e8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data;
    FVar16.Data = local_1e8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
    FVar18.Data = local_1e8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data;
    FVar2.Data = local_1e8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
    pFVar14 = local_1f0;
    iVar9 = local_1e8.OutputVertexInterfaceData.Bindings.ArrayNum;
    local_207 = local_1e8.InputVertexInterfaceData.bIsVertexInterfaceFrozen;
    local_1fc = local_1e8.InputVertexInterfaceData.Bindings.ArrayNum;
    local_18c = local_1e8.InputVertexInterfaceData.Bindings.ArrayMax;
    local_200 = local_1e8.InputVertexInterfaceData.SubInterfaces.ArrayNum;
    local_188 = local_1e8.InputVertexInterfaceData.SubInterfaces.ArrayMax;
    local_208 = local_1e8.OutputVertexInterfaceData.bIsVertexInterfaceFrozen;
    local_1f8 = local_1e8.OutputVertexInterfaceData.Bindings.ArrayMax;
    local_204 = local_1e8.OutputVertexInterfaceData.SubInterfaces.ArrayNum;
    iVar3 = local_1e8.OutputVertexInterfaceData.SubInterfaces.ArrayMax;
    local_1e8.OutputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
    local_1e8.OutputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
    local_1f0 = (FInputBinding *)0x0;
    local_1e8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_1e8.InputVertexInterfaceData.Bindings.ArrayNum = 0;
    local_1e8.InputVertexInterfaceData.Bindings.ArrayMax = 0;
    local_1e8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_1e8.InputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
    local_1e8.InputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
    local_1e8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_1e8.OutputVertexInterfaceData.Bindings.ArrayNum = 0;
    local_1e8.OutputVertexInterfaceData.Bindings.ArrayMax = 0;
    local_1e8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_198 = (TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
                 *)CONCAT44(local_198._4_4_,iVar3);
    local_168.OutputConnections.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.OutputConnections.Pairs.ArrayNum = 0;
    local_168.OutputConnections.Pairs.ArrayMax = 0;
    local_180.Data.AllocatorInstance.Data = ::operator_new(0x80);
    FVar12.Data = FVar2.Data;
    if ((IDynamicOperatorTransform)local_180.Data.AllocatorInstance.Data !=
        (IDynamicOperatorTransform)0x0) {
      FVar12.Data = (FScriptContainerElement *)0x0;
      local_168.Ordinal = local_190;
      local_168.VertexData.InputVertexInterfaceData.bIsVertexInterfaceFrozen = (bool)local_207;
      local_168.VertexData.InputVertexInterfaceData.Bindings.ArrayMax = local_18c;
      local_168.VertexData.InputVertexInterfaceData.SubInterfaces.ArrayMax = local_188;
      local_168.VertexData.OutputVertexInterfaceData.bIsVertexInterfaceFrozen = (bool)local_208;
      local_168.VertexData.OutputVertexInterfaceData.Bindings.ArrayMax = local_1f8;
      local_168.VertexData.InputVertexInterfaceData.Bindings.ArrayNum = local_1fc;
      local_168.VertexData.OutputVertexInterfaceData.SubInterfaces.ArrayMax = (int)local_198;
      local_168.VertexData.InputVertexInterfaceData.SubInterfaces.ArrayNum = local_200;
      *(undefined ***)local_180.Data.AllocatorInstance.Data =
           &___7FInsertOperator_DynamicGraph_Metasound__6B_;
      local_168.VertexData.OutputVertexInterfaceData.SubInterfaces.ArrayNum = local_204;
      local_168.Operator.Ptr = (IOperator *)pFVar14;
      local_168.VertexData.InputVertexInterfaceData.Bindings.AllocatorInstance.Data = FVar2.Data;
      local_168.VertexData.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
           FVar18.Data;
      local_168.VertexData.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data = FVar16.Data;
      local_168.VertexData.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
           FVar17.Data;
      local_1fc = 0;
      local_200 = 0;
      local_168.VertexData.OutputVertexInterfaceData.Bindings.ArrayNum = iVar9;
      local_1f8 = 0;
      local_204 = 0;
      local_168.OutputConnections.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.OutputConnections.Pairs.ArrayNum = 0;
      local_168.OutputConnections.Pairs.ArrayMax = 0;
      *(longlong **)((longlong)local_180.Data.AllocatorInstance.Data + 8) = plVar15;
      DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo::FOperatorInfo
                ((FOperatorInfo *)((longlong)local_180.Data.AllocatorInstance.Data + 0x10),
                 &local_168);
      FVar2.Data = local_168.OutputConnections.Pairs.AllocatorInstance.Data;
      DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
                  *)local_168.OutputConnections.Pairs.AllocatorInstance.Data,
                 local_168.OutputConnections.Pairs.ArrayNum);
      if ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
           *)FVar2.Data !=
          (TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
           *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      FVar2.Data = local_168.VertexData.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.
                   Data;
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)
                 local_168.VertexData.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data
                 ,local_168.VertexData.OutputVertexInterfaceData.SubInterfaces.ArrayNum);
      if ((FInputBinding *)FVar2.Data != (FInputBinding *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      FVar2.Data = local_168.VertexData.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
      DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
                ((FOutputBinding *)
                 local_168.VertexData.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data,
                 local_168.VertexData.OutputVertexInterfaceData.Bindings.ArrayNum);
      if ((FInputBinding *)FVar2.Data != (FInputBinding *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      FVar2.Data = local_168.VertexData.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.
                   Data;
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)
                 local_168.VertexData.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
                 local_168.VertexData.InputVertexInterfaceData.SubInterfaces.ArrayNum);
      if ((FInputBinding *)FVar2.Data != (FInputBinding *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      FVar2.Data = local_168.VertexData.InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
      DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
                ((FInputBinding *)
                 local_168.VertexData.InputVertexInterfaceData.Bindings.AllocatorInstance.Data,
                 local_168.VertexData.InputVertexInterfaceData.Bindings.ArrayNum);
      if ((FInputBinding *)FVar2.Data != (FInputBinding *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      pFVar14 = (FInputBinding *)FVar12.Data;
      FVar16.Data = FVar12.Data;
      FVar17.Data = FVar12.Data;
      FVar18.Data = FVar12.Data;
      iVar9 = local_1f8;
      if ((FInputBinding *)local_168.Operator.Ptr != (FInputBinding *)0x0) {
        (**(code **)*local_168.Operator.Ptr)();
        iVar9 = local_1f8;
      }
    }
    TVar8.Ptr = local_170;
    *local_170 = (IDynamicOperatorTransform)local_180.Data.AllocatorInstance.Data;
    DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
              ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
                *)0x0,0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)FVar17.Data,local_204);
    if ((FInputBinding *)FVar17.Data != (FInputBinding *)0x0) {
      FMemory::Free(FVar17.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
              ((FOutputBinding *)FVar16.Data,iVar9);
    if ((FInputBinding *)FVar16.Data != (FInputBinding *)0x0) {
      FMemory::Free(FVar16.Data);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)FVar18.Data,local_200);
    if ((FInputBinding *)FVar18.Data != (FInputBinding *)0x0) {
      FMemory::Free(FVar18.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)FVar12.Data,local_1fc);
    if ((FInputBinding *)FVar12.Data != (FInputBinding *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    if (pFVar14 != (FInputBinding *)0x0) {
      (**(code **)(pFVar14->Vertex)._padding_)(pFVar14,1);
    }
    if (local_1f0 != (FInputBinding *)0x0) {
      (**(code **)(local_1f0->Vertex)._padding_)(local_1f0,1);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
    DestructItems<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,int>
              (local_a8,(int)local_a0);
    if (local_a8 !=
        (TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
         *)0x0) {
      FMemory::Free(local_a8);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)
               local_1e8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
               local_1e8.OutputVertexInterfaceData.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)
        local_1e8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
              ((FOutputBinding *)local_1e8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data
               ,local_1e8.OutputVertexInterfaceData.Bindings.ArrayNum);
    if ((FOutputBinding *)local_1e8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
        (FOutputBinding *)0x0) {
      FMemory::Free(local_1e8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)
               local_1e8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
               local_1e8.InputVertexInterfaceData.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)
        local_1e8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)local_1e8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data,
               local_1e8.InputVertexInterfaceData.Bindings.ArrayNum);
    if ((FInputBinding *)local_1e8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
        (FInputBinding *)0x0) {
      FMemory::Free(local_1e8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data);
    }
  }
  return (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
          )TVar8.Ptr;
}

// CreateTransformQueue @ 14ad4d900

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
* __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::CreateTransformQueue
          (FDynamicOperatorTransactor *this,
          TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
          *__return_storage_ptr__,FOperatorSettings *param_1,FMetasoundEnvironment *param_2)

{
  TSharedPtr<Metasound::FGraphRenderCost,1> local_18;
  
  local_18.Object = (FGraphRenderCost *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  CreateTransformQueue(this,__return_storage_ptr__,param_1,param_2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateTransformQueue @ 14ad4d940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
* __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::CreateTransformQueue
          (FDynamicOperatorTransactor *this,
          TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
          *__return_storage_ptr__,FOperatorSettings *param_1,FMetasoundEnvironment *param_2,
          TSharedPtr<Metasound::FGraphRenderCost,1> *param_3)

{
  int *piVar1;
  TArray<Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *this_00;
  code *pcVar5;
  undefined4 uVar6;
  FOperatorSettings *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  *pTVar11;
  TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
  TVar12;
  FSetOperatorOrdinalsAndSort *this_01;
  IDynamicOperatorTransform IVar13;
  atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
  aVar14;
  FScriptContainerElement *pFVar15;
  IDynamicOperatorTransform IVar16;
  ForAnyElementType FVar17;
  ForElementType<FSetElementId> FVar18;
  uint *puVar19;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_188;
  undefined8 local_180;
  undefined1 local_178 [8];
  IDynamicOperatorTransform local_170;
  TArray<TTuple<FGuid,Metasound::INode_const_*>,TSizedDefaultAllocator<32>_> local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  FMetasoundEnvironment local_148;
  FGraphRenderCost *local_138;
  TReferenceControllerBase<1> *local_130;
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *local_128;
  TReferenceControllerBase<1> *local_120;
  FOperatorSettings *local_118;
  FGraphRenderCost *local_110;
  INode local_108;
  TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  *local_100;
  TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
  local_f8;
  TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_118 = param_1;
  local_110 = (FGraphRenderCost *)param_2;
  local_100 = __return_storage_ptr__;
  MakeShared<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
            (__return_storage_ptr__);
  local_158._0_4_ = param_1->SampleRate;
  local_158._4_4_ = param_1->TargetBlockRate;
  uStack_150._0_4_ = param_1->ActualBlockRate;
  uStack_150._4_4_ = param_1->NumFramesPerBlock;
  local_148.Variables.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->OperatorInfos;
  local_148.Variables.Pairs.ArrayNum = 0;
  local_148.Variables.Pairs.ArrayMax = 0;
  FMetasoundEnvironment::operator=(&local_148,param_2);
  local_138 = param_3->Object;
  local_130 = (param_3->SharedReferenceCount).ReferenceController;
  if (local_130 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_130->SharedReferenceCount = (atomic<int>)((int)local_130->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_128 = __return_storage_ptr__->Object;
  local_120 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_120 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_120->WeakReferenceCount = (atomic<int>)((int)local_120->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar15 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar15 <= (FScriptContainerElement *)&local_158) &&
      ((FScriptContainerElement *)&local_158 <
       pFVar15 + (longlong)(this->OperatorInfos).ArrayMax * 0x40)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
               *)(*pcVar5)();
    return pTVar11;
  }
  iVar9 = (this->OperatorInfos).ArrayNum;
  piVar1 = &(this->OperatorInfos).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->OperatorInfos).ArrayNum = iVar9 + 1;
  pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x40;
  *(undefined8 *)pFVar15 = local_158;
  *(undefined8 *)(pFVar15 + 8) = uStack_150;
  *(undefined8 *)(pFVar15 + 0x10) = 0;
  *(undefined8 *)(pFVar15 + 0x18) = 0;
  FMetasoundEnvironment::operator=((FMetasoundEnvironment *)(pFVar15 + 0x10),&local_148);
  *(FGraphRenderCost **)(pFVar15 + 0x20) = local_138;
  *(TReferenceControllerBase<1> **)(pFVar15 + 0x28) = local_130;
  local_130 = (TReferenceControllerBase<1> *)0x0;
  local_138 = (FGraphRenderCost *)0x0;
  *(TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
    **)(pFVar15 + 0x30) = local_128;
  *(TReferenceControllerBase<1> **)(pFVar15 + 0x38) = local_120;
  local_120 = (TReferenceControllerBase<1> *)0x0;
  local_128 = (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
               *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
            ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
              *)local_148.Variables.Pairs.AllocatorInstance.Data,local_148.Variables.Pairs.ArrayNum)
  ;
  if ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
       *)local_148.Variables.Pairs.AllocatorInstance.Data !=
      (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
       *)0x0) {
    FMemory::Free(local_148.Variables.Pairs.AllocatorInstance.Data);
  }
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  FDynamicGraphIncrementalSorter::GenerateOrdinals
            (&this->GraphSorter,
             (TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
              *)&local_a8);
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  iVar9 = FGraph::FindUnconnectedNodes(&this->Graph,&local_168);
  pFVar7 = local_118;
  if (0 < iVar9) {
    iVar9 = local_168.ArrayNum;
    pFVar15 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
    FVar17.Data = local_168.AllocatorInstance.Data;
    while( true ) {
      if (local_168.ArrayNum != iVar9) {
        local_178[0] = 0;
        `TCheckedPointerIterator<TTuple<FGuid,Metasound::INode_const_*>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_178);
      }
      __return_storage_ptr__ = local_100;
      if (FVar17.Data == pFVar15) break;
      uVar4 = *(ulonglong *)(FVar17.Data + 0x10);
      if (local_a8.Elements._8_4_ == local_a8.Elements._52_4_) {
LAB_14ad4dced:
        FVar17.Data = FVar17.Data + 0x18;
      }
      else {
        FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
        if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar18 = local_a8.Hash.SecondaryData;
        }
        iVar10 = *(int *)((longlong)FVar18 +
                         ((uVar4 >> 0x20) * 0x17 + uVar4 & (ulonglong)(local_a8.HashSize - 1)) * 4);
        if (iVar10 == -1) goto LAB_14ad4dced;
        do {
          lVar3 = local_a8.Elements._0_8_ + (longlong)iVar10 * 0x18;
          if (*(ulonglong *)(local_a8.Elements._0_8_ + (longlong)iVar10 * 0x18) == uVar4) {
            puVar19 = (uint *)(lVar3 + 8);
            if (lVar3 == 0) {
              puVar19 = (uint *)0x0;
            }
            if (puVar19 != (uint *)0x0) {
              TVar12 = CreateInsertOperatorTransform
                                 (this,&local_108,(int)uVar4,
                                  (FOperatorSettings *)(ulonglong)*puVar19,
                                  (FMetasoundEnvironment *)pFVar7,local_110);
              if (((local_188.Data <= TVar12.Ptr) &&
                  (TVar12.Ptr <
                   (IDynamicOperatorTransform *)(local_188.Data + (longlong)local_180._4_4_ * 8)))
                 && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                           *)(*pcVar5)();
                return pTVar11;
              }
              iVar10 = (int)local_180;
              if ((int)local_180 == local_180._4_4_) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_188,(int *)((longlong)&local_180 + 4));
              }
              local_180 = CONCAT44(local_180._4_4_,iVar10 + 1);
              *(IDynamicOperatorTransform *)(local_188.Data + (longlong)iVar10 * 8) = *TVar12.Ptr;
              *TVar12.Ptr = (IDynamicOperatorTransform)0x0;
              if (local_108 != (INode)0x0) {
                (*(code *)**(undefined8 **)local_108)(local_108,1);
              }
            }
            goto LAB_14ad4dced;
          }
          iVar10 = *(int *)(lVar3 + 0x10);
        } while (iVar10 != -1);
        FVar17.Data = FVar17.Data + 0x18;
      }
    }
  }
  IVar16 = (IDynamicOperatorTransform)0x0;
  this_01 = ::operator_new(0x58);
  local_170 = IVar16;
  if (this_01 != (FSetOperatorOrdinalsAndSort *)0x0) {
    local_f8.Elements._0_8_ = 0;
    local_f8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_f8.Elements._48_8_ = _UNK_150631d98;
    local_f8.Elements._8_8_ = 0;
    local_f8.Elements._32_8_ = 0;
    local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_f8.HashSize = 0;
    TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
    ::operator=(&local_f8,&local_a8);
    local_170 = (IDynamicOperatorTransform)
                FSetOperatorOrdinalsAndSort::FSetOperatorOrdinalsAndSort
                          (this_01,(TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                                    *)&local_f8);
  }
  if (((local_188.Data <= &local_170) &&
      (&local_170 < (IDynamicOperatorTransform *)(local_188.Data + (longlong)local_180._4_4_ * 8)))
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
               *)(*pcVar5)();
    return pTVar11;
  }
  iVar9 = (int)local_180;
  if ((int)local_180 == local_180._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_188,(int *)((longlong)&local_180 + 4));
  }
  *(IDynamicOperatorTransform *)(local_188.Data + (longlong)iVar9 * 8) = local_170;
  this_00 = __return_storage_ptr__->Object;
  local_170 = (IDynamicOperatorTransform)0x0;
  local_180._0_4_ = iVar9 + 1;
  IVar13 = (IDynamicOperatorTransform)::operator_new(0x18);
  uVar6 = local_180._4_4_;
  iVar9 = (int)local_180;
  FVar17.Data = local_188.Data;
  if (IVar13 != (IDynamicOperatorTransform)0x0) {
    local_188.Data = (FScriptContainerElement *)0x0;
    local_180._0_4_ = 0;
    local_180._4_4_ = 0;
    *(undefined ***)IVar13 = &___7FAtomicTransform_DynamicGraph_Metasound__6B_;
    *(FScriptContainerElement **)((longlong)IVar13 + 8) = FVar17.Data;
    *(int *)((longlong)IVar13 + 0x10) = iVar9;
    *(undefined4 *)((longlong)IVar13 + 0x14) = uVar6;
    DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
              ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
                *)0x0,0);
    IVar16 = IVar13;
  }
  aVar14 = (atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
            )TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
             ::AllocNode(this_00);
  *(IDynamicOperatorTransform *)((longlong)aVar14 + 8) = IVar16;
  this_00->Head->Next = aVar14;
  this_00->Head = (FNode *)aVar14;
  LOCK();
  this_00->NumElems = (atomic<int>)((int)this_00->NumElems + 1);
  UNLOCK();
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
            ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
              *)local_188.Data,(int)local_180);
  if ((IDynamicOperatorTransform *)local_188.Data != (IDynamicOperatorTransform *)0x0) {
    FMemory::Free(local_188.Data);
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  return __return_storage_ptr__;
}

// EnqueueAddEdgeOperatorTransform @ 14ad4f030

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueAddEdgeOperatorTransform
          (FDynamicOperatorTransactor *this,INode *param_1,FName *param_2,INode *param_3,
          FName *param_4,
          TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *param_5)

{
  INode *local_res10;
  INode *local_res18 [2];
  code *local_48;
  TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> **local_40;
  TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *local_38;
  INode **local_30;
  FName *local_28;
  INode **local_20;
  FName *local_18;
  
  local_38 = param_5;
  local_30 = &local_res10;
  local_20 = local_res18;
  local_18 = param_4;
  local_40 = &local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueAddEdgeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res10 = param_1;
  local_res18[0] = param_3;
  local_28 = param_2;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_48);
  return;
}

// EnqueueBeginFadeOperatorTransform @ 14ad4f0a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform
          (FDynamicOperatorTransactor *this,INode *param_1,EAudioFadeType param_2,
          TArrayView<FName_const_,int> *param_3,TArrayView<FName_const_,int> *param_4)

{
  INode *local_res10;
  EAudioFadeType local_res18 [16];
  code *local_38;
  undefined8 **local_30;
  INode **local_28;
  EAudioFadeType *local_20;
  TArrayView<FName_const_,int> *local_18;
  TArrayView<FName_const_,int> *local_10;
  
  local_28 = &local_res10;
  local_20 = local_res18;
  local_10 = param_4;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_18 = param_3;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_38);
  return;
}

// EnqueueEndFadeOperatorTransform @ 14ad4f100

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueEndFadeOperatorTransform
          (FDynamicOperatorTransactor *this,INode *param_1)

{
  INode *local_res10;
  INode **local_res18 [2];
  code *local_18;
  undefined8 **local_10;
  
  local_res18[0] = &local_res10;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueEndFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res10 = param_1;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_18);
  return;
}

// EnqueueFadeAndAddEdgeOperatorTransform @ 14ad4f140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueFadeAndAddEdgeOperatorTransform
          (FDynamicOperatorTransactor *this,INode *param_1,FName *param_2,INode *param_3,
          FName *param_4,
          TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *param_5)

{
  INode *local_res10;
  INode *local_res18;
  FName *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  code *local_58;
  TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> **local_50;
  TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *local_48;
  INode **local_40;
  FName *local_38;
  INode **local_30;
  FName *local_28;
  FName **local_20;
  undefined8 *local_18;
  
  local_68 = 0;
  local_60 = 0;
  local_48 = param_5;
  local_40 = &local_res10;
  local_30 = &local_res18;
  local_20 = &local_78;
  local_18 = &local_68;
  local_50 = &local_48;
  local_78 = param_4;
  local_28 = param_4;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueFadeAndAddEdgeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_70 = 1;
  local_res10 = param_1;
  local_res18 = param_3;
  local_38 = param_2;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_58);
  param_5 = (TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *)&param_4;
  local_50 = &param_5;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueEndFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  param_4 = (FName *)param_3;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_58);
  return;
}

// EnqueueFadeAndRemoveEdgeOperatorTransform @ 14ad4f210

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueFadeAndRemoveEdgeOperatorTransform
          (FDynamicOperatorTransactor *this,INode *param_1,FName *param_2,INode *param_3,
          FName *param_4,FLiteral *param_5,
          _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
          *param_6)

{
  FName *pFVar1;
  INode *local_res20;
  FName *local_68;
  ulonglong uStack_60;
  code *local_58;
  INode **ppIStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  INode **local_38;
  FName **local_30;
  FName **local_28;
  undefined8 *local_20;
  
  pFVar1 = param_4;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  local_38 = &local_res20;
  local_30 = &param_4;
  ppIStack_50 = (INode **)CONCAT44(ppIStack_50._4_4_,1);
  local_28 = &local_68;
  local_20 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_48 = 0;
  uStack_40 = uStack_60;
  local_68 = param_4;
  uStack_60 = (ulonglong)ppIStack_50;
  param_4 = (FName *)CONCAT71(param_4._1_7_,1);
  local_res20 = param_3;
  ppIStack_50 = (INode **)&local_38;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_58);
  EnqueueRemoveEdgeOperatorTransform(this,param_1,param_2,param_3,pFVar1,param_5,param_6);
  local_res20 = (INode *)&param_4;
  ppIStack_50 = &local_res20;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueEndFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  param_4 = (FName *)param_3;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_58);
  return;
}

// EnqueueFadeAndRemoveEdgeOperatorTransform_Deprecated @ 14ad4f320

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::
EnqueueFadeAndRemoveEdgeOperatorTransform_Deprecated
          (FDynamicOperatorTransactor *this,INode *param_1,FName *param_2,INode *param_3,
          FName *param_4,INode *param_5,int param_6)

{
  FName *pFVar1;
  INode *local_res20;
  FName *local_68;
  ulonglong uStack_60;
  code *local_58;
  INode **ppIStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  INode **local_38;
  FName **local_30;
  FName **local_28;
  undefined8 *local_20;
  
  pFVar1 = param_4;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  local_38 = &local_res20;
  local_30 = &param_4;
  ppIStack_50 = (INode **)CONCAT44(ppIStack_50._4_4_,1);
  local_28 = &local_68;
  local_20 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_48 = 0;
  uStack_40 = uStack_60;
  local_68 = param_4;
  uStack_60 = (ulonglong)ppIStack_50;
  param_4 = (FName *)CONCAT71(param_4._1_7_,1);
  local_res20 = param_3;
  ppIStack_50 = (INode **)&local_38;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_58);
  EnqueueRemoveEdgeOperatorTransform_Deprecated(this,param_1,param_2,param_3,pFVar1,param_5,param_6)
  ;
  local_res20 = (INode *)&param_4;
  ppIStack_50 = &local_res20;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueEndFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  param_4 = (FName *)param_3;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_58);
  return;
}

// EnqueueInsertOperatorTransform @ 14ad4f430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueInsertOperatorTransform
          (FDynamicOperatorTransactor *this,INode *param_1,int param_2)

{
  int local_res18 [4];
  code *local_38;
  FDynamicOperatorTransactor **local_30;
  FDynamicOperatorTransactor *local_28;
  INode *local_20;
  int *local_18;
  
  local_18 = local_res18;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueInsertOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res18[0] = param_2;
  local_28 = this;
  local_20 = param_1;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_38);
  return;
}

// EnqueueRemoveEdgeOperatorTransform @ 14ad4f480

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveEdgeOperatorTransform
          (FDynamicOperatorTransactor *this,INode *param_1,FName *param_2,INode *param_3,
          FName *param_4,FLiteral *param_5,
          _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
          *param_6)

{
  FVertexInterface *this_00;
  undefined1 local_res10 [8];
  INode *local_res18;
  INode *local_res20;
  code *local_78;
  _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
  ***local_70;
  _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
  **local_68;
  FInputDataVertex *local_60;
  FLiteral *local_58;
  undefined1 *local_50;
  INode **local_48;
  FName *local_40;
  INode **local_38;
  FName *local_30;
  INode *local_28;
  
  local_res18 = param_1;
  local_res20 = param_3;
  this_00 = (FVertexInterface *)(**(code **)((longlong)*param_3 + 0x20))(param_3);
  local_60 = FVertexInterface::GetInputVertex(this_00,param_4);
  local_res10[0] = 2;
  if ((int)local_60->_padding_ == 1) {
    local_res10[0] = 4;
  }
  local_58 = param_5;
  local_68 = &param_6;
  local_50 = local_res10;
  local_48 = &local_res18;
  local_38 = &local_res20;
  local_70 = &local_68;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveEdgeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_30 = param_4;
  local_40 = param_2;
  local_28 = param_3;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_78);
  return;
}

// EnqueueRemoveEdgeOperatorTransform_Deprecated @ 14ad4f570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveEdgeOperatorTransform_Deprecated
          (FDynamicOperatorTransactor *this,INode *param_1,FName *param_2,INode *param_3,
          FName *param_4,INode *param_5,int param_6)

{
  INode *local_res8;
  INode *local_res10 [3];
  code *local_68;
  FDynamicOperatorTransactor **local_60;
  FDynamicOperatorTransactor *local_58;
  INode *local_50;
  int *local_48;
  INode **local_40;
  FName *local_38;
  INode **local_30;
  INode **local_28;
  FName *local_20;
  INode *local_18;
  INode *local_10;
  
  local_50 = param_5;
  local_48 = &param_6;
  local_40 = &local_res8;
  local_30 = &param_5;
  local_28 = local_res10;
  local_20 = param_4;
  local_60 = &local_58;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveEdgeOperatorTransform_Deprecated'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res8 = param_1;
  local_res10[0] = param_3;
  local_58 = this;
  local_38 = param_2;
  local_18 = param_1;
  local_10 = param_3;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_68);
  return;
}

// EnqueueRemoveOperatorTransform @ 14ad4f600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveOperatorTransform
          (FDynamicOperatorTransactor *this,INode *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  INode *local_res10 [3];
  INode **local_28;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_28 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res10[0] = param_1;
  local_20 = param_2;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_18);
  return;
}

// EnqueueTransformOnOperatorQueues @ 14ad4f640

/* WARNING: Removing unreachable block (ram,0x00014ad4f885) */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueTransformOnOperatorQueues
          (FDynamicOperatorTransactor *this,
          TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
          *param_1)

{
  int *piVar1;
  TArray<Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
  aVar9;
  int iVar10;
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *this_00;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  TTypeCompatibleBytes<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>_>
  local_res8;
  
  pTVar2 = &this->OperatorInfos;
  uVar13 = 0;
  do {
    if (((int)uVar13 < 0) || ((this->OperatorInfos).ArrayNum <= (int)uVar13)) {
      return;
    }
    uVar12 = ~uVar13 >> 0x1f;
    if (((int)uVar13 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    this_00 = (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
               *)0x0;
    lVar14 = (longlong)(int)uVar13 * 0x40;
    pTVar15 = *(TReferenceControllerBase<1> **)(pFVar11 + lVar14 + 0x38);
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar15->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          iVar10 = (this->OperatorInfos).ArrayNum;
          pTVar15 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ad4f709;
        }
        LOCK();
        aVar7 = pTVar15->SharedReferenceCount;
        bVar6 = aVar5 == aVar7;
        if (bVar6) {
          pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar7 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar7;
      } while (!bVar6);
      this_00 = *(TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
                  **)(pFVar11 + lVar14 + 0x30);
    }
    iVar10 = (this->OperatorInfos).ArrayNum;
    if (this_00 ==
        (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
         *)0x0) {
LAB_14ad4f709:
      uVar8 = 0;
      if ((int)uVar13 < iVar10) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (pTVar2->AllocatorInstance).Data + lVar14;
      plVar3 = *(longlong **)(pFVar11 + 0x38);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar11 + 0x28));
      DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
                (*(TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
                   **)(pFVar11 + 0x10),*(int *)(pFVar11 + 0x18));
      if (*(void **)(pFVar11 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar11 + 0x10));
      }
      iVar10 = (this->OperatorInfos).ArrayNum + ~uVar13;
      if (iVar10 != 0) {
        memmove(pFVar11,pFVar11 + 0x40,(longlong)iVar10 << 6);
      }
      piVar1 = &(this->OperatorInfos).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,&pTVar2->AllocatorInstance,(this->OperatorInfos).ArrayNum,
                 &(this->OperatorInfos).ArrayMax);
      uVar13 = uVar13 - 1;
    }
    else {
      uVar8 = 0;
      if ((int)uVar13 < iVar10) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)param_1)
                (&local_res8,*(undefined8 *)&param_1->field_0x8,
                 (pTVar2->AllocatorInstance).Data + lVar14);
      if (local_res8.Pad != (uchar  [8])0x0) {
        aVar9 = (atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                 )TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
                  ::AllocNode(this_00);
        *&((TTypeCompatibleBytes<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>_>
            *)((longlong)aVar9 + 8))->Pad = local_res8.Pad;
        local_res8.Pad[0] = '\0';
        local_res8.Pad[1] = '\0';
        local_res8.Pad[2] = '\0';
        local_res8.Pad[3] = '\0';
        local_res8.Pad[4] = '\0';
        local_res8.Pad[5] = '\0';
        local_res8.Pad[6] = '\0';
        local_res8.Pad[7] = '\0';
        this_00->Head->Next = aVar9;
        this_00->Head = (FNode *)aVar9;
        LOCK();
        this_00->NumElems = (atomic<int>)((int)this_00->NumElems + 1);
        UNLOCK();
      }
    }
    uVar13 = uVar13 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  } while( true );
}

// FadeAndRemoveNodeInternal @ 14ad4ffe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::FadeAndRemoveNodeInternal
          (FDynamicOperatorTransactor *this,INode *param_1,TArrayView<FName_const_,int> *param_2,
          bool param_3)

{
  undefined1 local_res10 [8];
  INode *local_res18;
  code *local_58;
  undefined8 **ppuStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  FName *local_38;
  undefined8 uStack_30;
  INode **local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_38 = param_2->DataPtr;
  uStack_30 = *(undefined8 *)&param_2->ArrayNum;
  ppuStack_50 = (undefined8 **)((ulonglong)ppuStack_50 & 0xffffffff00000000);
  local_28 = &local_res18;
  local_20 = local_res10;
  local_18 = &local_48;
  local_48 = 0;
  uStack_40 = (ulonglong)ppuStack_50;
  local_10 = &local_38;
  ppuStack_50 = &local_28;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res10[0] = 1;
  local_res18 = param_1;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_58);
  RemoveNodeInternal(this,param_1,param_3);
  return;
}

// GetGraph @ 14ad55e60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FGraph * __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::GetGraph(FDynamicOperatorTransactor *this)

{
  return &this->Graph;
}

// RemoveDataEdge @ 14ad5f200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveDataEdge
          (FDynamicOperatorTransactor *this,FGuid *param_1,FName *param_2,FGuid *param_3,
          FName *param_4,FLiteral *param_5,
          _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
          *param_6)

{
  FDynamicOperatorTransactor *pFVar1;
  code *pcVar2;
  FDynamicOperatorTransactor *this_00;
  bool bVar3;
  bool bVar4;
  FDeprecationNodeStorageAdapter *pFVar5;
  longlong *plVar6;
  FString *pFVar7;
  FName *pFVar8;
  FVertexInterface *this_01;
  FInputDataVertex *pFVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  INode *pIVar13;
  bool bVar14;
  undefined1 local_198 [8];
  FDynamicOperatorTransactor *local_190;
  FDynamicOperatorTransactor *local_188;
  FName *local_180;
  FDynamicOperatorTransactor ***local_178;
  FDynamicOperatorTransactor **local_170;
  FString local_168;
  FString local_158;
  FGuid *local_148;
  FDynamicOperatorTransactor ***local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FDynamicOperatorTransactor **local_f8;
  undefined1 *local_f0;
  FName **local_e8;
  undefined8 *local_e0;
  FString local_d8;
  FString local_c8;
  FName *local_b8 [2];
  undefined8 local_a8;
  ulonglong uStack_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_170 = (FDynamicOperatorTransactor **)param_6;
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  local_190 = this;
  local_188 = (FDynamicOperatorTransactor *)param_1;
  local_180 = param_2;
  local_148 = param_3;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::RemoveDataEdge");
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId797,"Metasound::FDynamicOperatorTransactor::RemoveDataEdge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x31d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId797);
  }
  pFVar5 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_1);
  if (pFVar5 == (FDeprecationNodeStorageAdapter *)0x0) {
    pIVar13 = (INode *)0x0;
  }
  else {
    pIVar13 = (pFVar5->Storage).Object;
  }
  pFVar5 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,local_148);
  if (((pFVar5 == (FDeprecationNodeStorageAdapter *)0x0) ||
      (pFVar1 = (FDynamicOperatorTransactor *)(pFVar5->Storage).Object,
      pFVar1 == (FDynamicOperatorTransactor *)0x0)) || (pIVar13 == (INode *)0x0)) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_4,&local_58);
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      FGuid::AppendString(local_148,&local_158,Digits);
      ::FName::ToString(local_180,&local_68);
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.Data.ArrayNum = 0;
      local_168.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)local_188,&local_168,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((FName *)local_168.Data.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    uVar12 = (ulonglong)(param_5->Value).TypeIndex;
    if ((0xc < uVar12) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar12])(param_5);
  }
  else {
    plVar6 = (longlong *)(**(code **)((pFVar1->OperatorBuilder)._padding_ + 0x20))(pFVar1);
    lVar10 = *plVar6;
    lVar11 = (longlong)(int)plVar6[1] * 0x38 + lVar10;
    if (lVar10 != lVar11) {
      do {
        if (*(FName *)(lVar10 + 8) == *param_4) {
          bVar3 = FGraph::RemoveDataEdge(&this->Graph,pIVar13,local_180,(INode *)pFVar1,param_4);
          if (bVar3) {
            FDynamicGraphIncrementalSorter::RemoveDataEdge
                      (&this->GraphSorter,(ulong64)pIVar13,(ulong64)pFVar1);
            FGraph::SetNodeDefaultInput(&this->Graph,local_148,param_4,param_5);
            pFVar8 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
            this_01 = (FVertexInterface *)
                      (**(code **)((pFVar1->OperatorBuilder)._padding_ + 0x20))(pFVar1);
            pFVar9 = FVertexInterface::GetInputVertex(this_01,param_4);
            this_00 = local_190;
            if ((FName)pFVar9->_padding_ == *pFVar8) {
              local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
              local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_158.Data._8_8_ = local_158.Data._8_8_ & 0xffffffff00000000;
              local_f8 = &local_188;
              local_f0 = local_198;
              local_e8 = local_b8;
              local_e0 = &local_a8;
              local_140 = &local_f8;
              local_168.Data.ArrayNum = 1;
              local_148 = (FGuid *)UE::Core::Private::Function::
                                   TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
                                   ::Call;
              local_a8 = 0;
              uStack_a0._0_4_ = local_158.Data.ArrayNum;
              uStack_a0._4_4_ = local_158.Data.ArrayMax;
              local_b8[0] = param_4;
              local_b8[1] = (FName *)local_168.Data._8_8_;
              local_198[0] = 1;
              local_188 = pFVar1;
              EnqueueTransformOnOperatorQueues
                        (local_190,
                         (TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                          *)&local_148);
              EnqueueRemoveEdgeOperatorTransform
                        (this_00,pIVar13,local_180,(INode *)pFVar1,param_4,param_5,
                         (_func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
                          *)local_170);
              local_170 = &local_190;
              local_178 = &local_170;
              local_180 = (FName *)UE::Core::Private::Function::
                                   TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueEndFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
                                   ::Call;
              local_190 = pFVar1;
              EnqueueTransformOnOperatorQueues
                        (this_00,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                                  *)&local_180);
            }
            else {
              EnqueueRemoveEdgeOperatorTransform
                        (local_190,pIVar13,local_180,(INode *)pFVar1,param_4,param_5,
                         (_func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
                          *)local_170);
            }
            if (bVar14) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (bVar4) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            FLiteral::~FLiteral(param_5);
            return;
          }
          if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad5f6de;
          ::FName::ToString(param_4,&local_c8);
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = 0;
          local_128.Data.ArrayMax = 0;
          FGuid::AppendString(local_148,&local_128,Digits);
          ::FName::ToString(local_180,&local_d8);
          local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.Data.ArrayNum = 0;
          local_138.Data.ArrayMax = 0;
          FGuid::AppendString((FGuid *)local_188,&local_138,Digits);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          goto LAB_14ad5f6d4;
        }
        lVar10 = lVar10 + 0x38;
      } while (lVar10 != lVar11);
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      pFVar7 = ::FName::ToString(param_4,&local_78);
      if ((pFVar7->Data).ArrayNum == 0) {
        local_190 = (FDynamicOperatorTransactor *)0x15060d16c;
      }
      else {
        local_190 = (FDynamicOperatorTransactor *)(pFVar7->Data).AllocatorInstance.Data;
      }
      ::FName::ToString(param_4,&local_88);
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      FGuid::AppendString(local_148,&local_108,Digits);
      ::FName::ToString(local_180,&local_98);
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)local_188,&local_118,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        local_c8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      }
LAB_14ad5f6d4:
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
LAB_14ad5f6de:
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    FLiteral::~FLiteral(param_5);
  }
  return;
}

// RemoveDataEdge @ 14ad5f870

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveDataEdge
          (FDynamicOperatorTransactor *this,FGuid *param_1,FName *param_2,FGuid *param_3,
          FName *param_4,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> param_5)

{
  FDynamicGraphIncrementalSorter *this_00;
  INode *pIVar1;
  INode IVar2;
  bool bVar3;
  code *pcVar4;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar5;
  bool bVar6;
  int iVar7;
  FDeprecationNodeStorageAdapter *pFVar8;
  longlong *plVar9;
  FName *pFVar10;
  FVertexInterface *this_01;
  FInputDataVertex *pFVar11;
  longlong lVar12;
  longlong lVar13;
  INode *pIVar14;
  bool bVar15;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  INode local_1a8;
  TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> local_1a0;
  FName local_190;
  INode *local_188;
  INode *local_180;
  INode **local_178;
  code *local_170;
  INode ***local_168;
  code *local_160;
  INode ***local_158;
  INode **local_150;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *local_148;
  FName **local_140;
  undefined8 *local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FName *local_d8 [2];
  undefined8 local_c8;
  ulonglong uStack_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FLiteralNodeID local_68;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::RemoveDataEdge");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId723,"Metasound::FDynamicOperatorTransactor::RemoveDataEdge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x2d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId723);
  }
  pFVar8 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_1);
  if (pFVar8 == (FDeprecationNodeStorageAdapter *)0x0) {
    pIVar14 = (INode *)0x0;
  }
  else {
    pIVar14 = (pFVar8->Storage).Object;
  }
  pFVar8 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_3);
  TVar5 = param_5;
  if (pFVar8 == (FDeprecationNodeStorageAdapter *)0x0) {
LAB_14ad5ffdc:
    if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad600ee;
    ::FName::ToString(param_4,&local_78);
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    FGuid::AppendString(param_3,&local_228,Digits);
    ::FName::ToString(param_2,&local_88);
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.Data.ArrayNum = 0;
    local_238.Data.ArrayMax = 0;
    FGuid::AppendString(param_1,&local_238,Digits);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if ((FName *)local_238.Data.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  else {
    pIVar1 = (pFVar8->Storage).Object;
    param_5.Ptr = (INode *)*param_5.Ptr;
    if ((pIVar1 == (INode *)0x0) || (pIVar14 == (INode *)0x0)) goto LAB_14ad5ffdc;
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    lVar12 = *plVar9;
    lVar13 = (longlong)(int)plVar9[1] * 0x38 + lVar12;
    if (lVar12 != lVar13) {
      do {
        if (*(FName *)(lVar12 + 8) == *param_4) {
          if (*TVar5.Ptr == (INode)0x0) {
            if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad600ee;
            ::FName::ToString(param_4,&local_120);
            local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_208.Data.ArrayNum = 0;
            local_208.Data.ArrayMax = 0;
            FGuid::AppendString(param_3,&local_208,Digits);
            ::FName::ToString(param_2,&local_130);
            local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_218.Data.ArrayNum = 0;
            local_218.Data.ArrayMax = 0;
            FGuid::AppendString(param_1,&local_218,Digits);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            local_78.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
              local_78.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
            }
          }
          else {
            bVar6 = FGraph::RemoveDataEdge(&this->Graph,pIVar14,param_2,pIVar1,param_4);
            if (bVar6) {
              this_00 = &this->GraphSorter;
              FDynamicGraphIncrementalSorter::RemoveDataEdge
                        (this_00,(ulong64)pIVar14,(ulong64)pIVar1);
              FLazyName::Resolve(&DynamicOperatorTransactorPrivate::LiteralNodeOutputVertexName);
              bVar6 = FGraph::AddDataEdge(&this->Graph,(INode *)*TVar5.Ptr,&local_190,pIVar1,param_4
                                         );
              if (bVar6) {
                local_1a8 = *TVar5.Ptr;
                local_68.ToVertex = *param_4;
                local_68.ToNode.A = param_3->A;
                local_68.ToNode.B = param_3->B;
                local_68.ToNode.C = param_3->C;
                local_68.ToNode.D = param_3->D;
                TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
                ::
                Emplace<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
                          (&this->LiteralNodeMap,&local_68,
                           (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *)
                           TVar5.Ptr);
                iVar7 = FDynamicGraphIncrementalSorter::InsertOperator
                                  (this_00,(ulong64)param_5.Ptr,First);
                local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1a0.ArrayNum = 0;
                local_1a0.ArrayMax = 0;
                FDynamicGraphIncrementalSorter::AddDataEdge
                          (this_00,(ulong64)param_5.Ptr,(ulong64)pIVar1,&local_1a0);
                if ((local_1a0.ArrayNum != 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("OrdinalSwaps.Num() == 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
                                       ,0x30b,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar10 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
                this_01 = (FVertexInterface *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
                pFVar11 = FVertexInterface::GetInputVertex(this_01,param_4);
                if ((FName)pFVar11->_padding_ == *pFVar10) {
                  local_148 = &param_5;
                  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
                  local_140 = local_d8;
                  local_238.Data.ArrayNum = 1;
                  local_138 = &local_c8;
                  local_168 = &local_150;
                  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_228.Data._8_8_ = local_228.Data._8_8_ & 0xffffffff00000000;
                  local_170 = UE::Core::Private::Function::
                              TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
                              ::Call;
                  local_c8 = 0;
                  uStack_c0._0_4_ = local_228.Data.ArrayNum;
                  uStack_c0._4_4_ = local_228.Data.ArrayMax;
                  local_d8[0] = param_4;
                  local_d8[1] = (FName *)local_238.Data._8_8_;
                  param_5.Ptr._0_1_ = 1;
                  local_188 = pIVar1;
                  local_150 = &local_188;
                  EnqueueTransformOnOperatorQueues
                            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                                   *)&local_170);
                  EnqueueRemoveEdgeOperatorTransform_Deprecated
                            (this,pIVar14,param_2,pIVar1,param_4,(INode *)local_1a8,iVar7);
                  local_178 = &local_180;
                  local_158 = &local_178;
                  local_160 = UE::Core::Private::Function::
                              TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueEndFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
                              ::Call;
                  local_180 = pIVar1;
                  EnqueueTransformOnOperatorQueues
                            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                                   *)&local_160);
                  local_78.Data.AllocatorInstance.Data = local_1a0.AllocatorInstance.Data;
                }
                else {
                  EnqueueRemoveEdgeOperatorTransform_Deprecated
                            (this,pIVar14,param_2,pIVar1,param_4,(INode *)local_1a8,iVar7);
                  local_78.Data.AllocatorInstance.Data = local_1a0.AllocatorInstance.Data;
                }
              }
              else {
                if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad600ee;
                ::FName::ToString(param_4,&local_f0);
                local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1d8.Data.ArrayNum = 0;
                local_1d8.Data.ArrayMax = 0;
                FGuid::AppendString(param_3,&local_1d8,Digits);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
                local_78.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
                if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                  local_78.Data.AllocatorInstance.Data = local_f0.Data.AllocatorInstance.Data;
                }
              }
            }
            else {
              if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad600ee;
              ::FName::ToString(param_4,&local_100);
              local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1e8.Data.ArrayNum = 0;
              local_1e8.Data.ArrayMax = 0;
              FGuid::AppendString(param_3,&local_1e8,Digits);
              ::FName::ToString(param_2,&local_110);
              local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1f8.Data.ArrayNum = 0;
              local_1f8.Data.ArrayMax = 0;
              FGuid::AppendString(param_1,&local_1f8,Digits);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
              }
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
              }
              local_78.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
              if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                local_78.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
              }
            }
          }
          goto LAB_14ad600e4;
        }
        lVar12 = lVar12 + 0x38;
      } while (lVar12 != lVar13);
    }
    if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad600ee;
    ::FName::ToString(param_4,&local_98);
    ::FName::ToString(param_4,&local_a8);
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Data.ArrayNum = 0;
    local_1b8.Data.ArrayMax = 0;
    FGuid::AppendString(param_3,&local_1b8,Digits);
    ::FName::ToString(param_2,&local_b8);
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    FGuid::AppendString(param_1,&local_1c8,Digits);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      local_78.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    }
  }
LAB_14ad600e4:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_14ad600ee:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  IVar2 = *TVar5.Ptr;
  if (IVar2 != (INode)0x0) {
    (*(code *)**(undefined8 **)IVar2)(IVar2,1);
  }
  return;
}

// RemoveInputDataDestination @ 14ad60430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveInputDataDestination
          (FDynamicOperatorTransactor *this,FName *param_1)

{
  bool bVar1;
  bool bVar2;
  FName *local_res8;
  code *local_18;
  FName **local_10;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::RemoveInputDataDestination");
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId960,
               "Metasound::FDynamicOperatorTransactor::RemoveInputDataDestination",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x3c0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId960);
  }
  FGraph::RemoveInputDataDestination(&this->Graph,param_1);
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveInputDataDestination'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res8 = param_1;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_18);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// RemoveNode @ 14ad607a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveNode
          (FDynamicOperatorTransactor *this,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  INode *pIVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FDeprecationNodeStorageAdapter *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  FString local_b8;
  INode *local_a8;
  INode *local_a0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  code *local_88;
  INode ***local_80;
  INode **local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  FScriptContainerElement **local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  
  iVar3 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::RemoveNode");
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId669,"Metasound::FDynamicOperatorTransactor::RemoveNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x29d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId669);
  }
  pFVar8 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_1);
  if ((pFVar8 == (FDeprecationNodeStorageAdapter *)0x0) ||
     (local_a8 = (pFVar8->Storage).Object, local_a8 == (INode *)0x0)) {
    if (1 < (byte)LogMetaSound._0_1_) {
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      FGuid::AppendString(param_1,&local_b8,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8 = 0;
    lVar9 = (**(code **)((longlong)*local_a8 + 0x20))(local_a8);
    lVar12 = *(longlong *)(lVar9 + 0x20);
    iVar1 = *(int *)(lVar9 + 0x28);
    lVar11 = (longlong)iVar1 * 0x20 + lVar12;
    pFVar10 = (FScriptContainerElement *)(lVar12 + 8);
    while( true ) {
      if (*(int *)(lVar9 + 0x28) != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Metasound::FOutputDataVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      pIVar4 = local_a8;
      if (lVar12 == lVar11) break;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                        ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FAudioBuffer>::TypeName);
        _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      if (*(FName *)(pFVar10 + 8) ==
          `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
          ::__l2::TypeName) {
        if (((local_d0.Data <= pFVar10) && (pFVar10 < local_d0.Data + (longlong)local_c8._4_4_ * 8))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        iVar7 = (int)local_c8;
        if ((int)local_c8 == local_c8._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_d0,(int *)((longlong)&local_c8 + 4));
        }
        local_c8 = CONCAT44(local_c8._4_4_,iVar7 + 1);
        *(undefined8 *)(local_d0.Data + (longlong)iVar7 * 8) = *(undefined8 *)pFVar10;
      }
      lVar12 = lVar12 + 0x20;
      pFVar10 = pFVar10 + 0x20;
    }
    iVar1 = (int)local_c8;
    if ((int)local_c8 != 0) {
      local_98 = local_d0.Data;
      if (((int)local_c8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      local_78 = &local_a0;
      iStack_90 = iVar1;
      uStack_40 = CONCAT44(uStack_8c,iVar1);
      local_70 = local_d8;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68 = &local_58;
      local_60 = &local_48;
      local_80 = &local_78;
      local_b8.Data._8_8_ = local_b8.Data._8_8_ & 0xffffffff00000000;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueBeginFadeOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
                 ::Call;
      local_48 = local_98;
      local_58 = 0;
      uStack_50._0_4_ = local_b8.Data.ArrayNum;
      uStack_50._4_4_ = local_b8.Data.ArrayMax;
      local_d8[0] = 1;
      local_a0 = pIVar4;
      EnqueueTransformOnOperatorQueues
                (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                       *)&local_88);
    }
    RemoveNodeInternal(this,pIVar4,true);
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    bVar5 = true;
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar5;
}

// RemoveNodeInternal @ 14ad60de0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveNodeInternal
          (FDynamicOperatorTransactor *this,INode *param_1,bool param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  FGuid *pFVar5;
  ulong64 *puVar6;
  ulong64 *puVar7;
  ulong64 local_res8;
  INode *local_res10;
  undefined1 local_res18 [16];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_68;
  INode **local_58;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_50;
  code *local_48;
  undefined8 **local_40;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  if (param_2) {
    plVar4 = (longlong *)(**(code **)((this->Graph)._padding_ + 0x58))(&this->Graph);
    lVar2 = plVar4[1];
    puVar6 = (ulong64 *)*plVar4;
    puVar7 = puVar6 + (longlong)(int)lVar2 * 0xd;
    while( true ) {
      if ((int)plVar4[1] != (int)lVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar6 == puVar7) break;
      if ((((INode *)*puVar6 == param_1) || ((INode *)puVar6[5] == param_1)) &&
         (FDynamicGraphIncrementalSorter::RemoveDataEdge(&this->GraphSorter,*puVar6,puVar6[5]),
         (INode *)puVar6[5] == param_1)) {
        local_res8 = *puVar6;
        TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64>
                  (&local_68,&local_res8);
      }
      puVar6 = puVar6 + 0xd;
    }
  }
  FDynamicGraphIncrementalSorter::RemoveOperator(&this->GraphSorter,(ulong64)param_1);
  local_58 = &local_res10;
  local_50 = &local_68;
  local_40 = &local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::EnqueueRemoveOperatorTransform'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res10 = param_1;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_48);
  pFVar5 = (FGuid *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  bVar3 = FGraph::RemoveNode(&this->Graph,pFVar5,param_2);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRemovedNodeFromGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
                         ,0x45a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// RemoveOutputDataSource @ 14ad61c00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveOutputDataSource
          (FDynamicOperatorTransactor *this,FName *param_1)

{
  bool bVar1;
  bool bVar2;
  FName *local_res8;
  code *local_18;
  FName **local_10;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::RemoveOutputDataSource");
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1002,
               "Metasound::FDynamicOperatorTransactor::RemoveOutputDataSource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x3ea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1002);
  }
  FGraph::RemoveOutputDataSource(&this->Graph,param_1);
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::RemoveOutputDataSource'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
             ::Call;
  local_res8 = param_1;
  EnqueueTransformOnOperatorQueues
            (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                   *)&local_18);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// SetValue @ 14ad64580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue
          (FDynamicOperatorTransactor *this,FGuid *param_1,FName *param_2,FLiteral *param_3,
          _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
          *param_4)

{
  INode *pIVar1;
  bool bVar2;
  FDeprecationNodeStorageAdapter *pFVar3;
  FVertexInterface *this_00;
  bool bVar4;
  undefined1 local_res8 [8];
  INode *local_88;
  undefined1 local_80 [8];
  _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
  ***local_78;
  FString local_70;
  _func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
  **local_60;
  FInputDataVertex *local_58;
  FLiteral *local_50;
  undefined1 *local_48;
  INode **local_40;
  FName *local_38;
  FGuid *local_30;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::SetValue");
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId876,"Metasound::FDynamicOperatorTransactor::SetValue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x36c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId876);
  }
  pFVar3 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_1);
  if ((pFVar3 == (FDeprecationNodeStorageAdapter *)0x0) ||
     (pIVar1 = (pFVar3->Storage).Object, pIVar1 == (INode *)0x0)) {
    if (1 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_2,&local_70);
      local_80 = (undefined1  [8])0x0;
      local_78 = (_func___cdecl_TOptional<Metasound::FAnyDataReference>_FOperatorSettings_ptr_FName_FLiteral_ptr_EDataReferenceAccessType
                  ***)0x0;
      FGuid::AppendString(param_1,(FString *)local_80,Digits);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_80 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_80);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FGraph::SetNodeDefaultInput(&this->Graph,param_1,param_2,param_3);
    local_88 = pIVar1;
    this_00 = (FVertexInterface *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
    local_58 = FVertexInterface::GetInputVertex(this_00,param_2);
    local_48 = local_res8;
    local_res8[0] = 2;
    if ((int)local_58->_padding_ == 1) {
      local_res8[0] = 4;
    }
    local_40 = &local_88;
    local_60 = &param_4;
    local_78 = &local_60;
    local_80 = (undefined1  [8])
               UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
               ::Call;
    local_50 = param_3;
    local_38 = param_2;
    local_30 = param_1;
    EnqueueTransformOnOperatorQueues
              (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                     *)local_80);
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// SetValue @ 14ad647b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue
          (FDynamicOperatorTransactor *this,FGuid *param_1,FName *param_2,
          TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> param_3)

{
  INode *pIVar1;
  INode IVar2;
  bool bVar3;
  FDeprecationNodeStorageAdapter *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  bool bVar6;
  int local_res8 [2];
  INode local_res20;
  undefined1 local_78 [8];
  FDynamicOperatorTransactor **local_70;
  FLiteralNodeID local_68;
  FDynamicOperatorTransactor *local_50;
  INode *local_48;
  int *local_40;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperatorTransactor::SetValue");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId841,"Metasound::FDynamicOperatorTransactor::SetValue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperatorTransactor.cpp"
               ,0x349);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId841);
  }
  pFVar4 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&(this->Graph).Nodes,param_1);
  if (pFVar4 == (FDeprecationNodeStorageAdapter *)0x0) {
    local_res20 = *param_3.Ptr;
LAB_14ad64965:
    if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad649e6;
    ::FName::ToString(param_2,(FString *)&local_68);
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    local_70 = (FDynamicOperatorTransactor **)0x0;
    FGuid::AppendString(param_1,(FString *)local_78,Digits);
    pFVar5 = &::LOG_Static;
  }
  else {
    pIVar1 = (pFVar4->Storage).Object;
    local_res20 = *param_3.Ptr;
    if (pIVar1 == (INode *)0x0) goto LAB_14ad64965;
    if (local_res20 != (INode)0x0) {
      local_res8[0] =
           FDynamicGraphIncrementalSorter::InsertOperator
                     (&this->GraphSorter,(ulong64)local_res20,First);
      local_48 = &local_res20;
      local_40 = local_res8;
      local_70 = &local_50;
      local_78 = (undefined1  [8])
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::DynamicGraph::FDynamicOperatorTransactor::SetValue'::__l2::<lambda_1>,TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&>
                 ::Call;
      local_50 = this;
      EnqueueTransformOnOperatorQueues
                (this,(TFunctionRef<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>___cdecl(Metasound::DynamicGraph::FDynamicOperatorTransactor::FDynamicOperatorInfo_const_&)>
                       *)local_78);
      FLazyName::Resolve(&DynamicOperatorTransactorPrivate::LiteralNodeOutputVertexName);
      AddDataEdgeInternal(this,(INode *)local_res20,(FName *)local_78,param_1,pIVar1,param_2);
      local_68.ToNode._0_8_ = *(undefined8 *)param_1;
      local_68.ToNode.C = param_1->C;
      local_68.ToNode.D = param_1->D;
      local_68.ToVertex = *param_2;
      TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
      ::
      Emplace<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
                (&this->LiteralNodeMap,&local_68,
                 (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> *)param_3.Ptr);
      goto LAB_14ad649e6;
    }
    if ((byte)LogMetaSound._0_1_ < 2) goto LAB_14ad649e6;
    ::FName::ToString(param_2,(FString *)&local_68);
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    local_70 = (FDynamicOperatorTransactor **)0x0;
    FGuid::AppendString(param_1,(FString *)local_78,Digits);
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&LogMetaSound);
  if ((FName)local_78 != (FName)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((void *)local_68.ToNode._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68.ToNode._0_8_);
  }
LAB_14ad649e6:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  IVar2 = *param_3.Ptr;
  if (IVar2 != (INode)0x0) {
    (*(code *)**(undefined8 **)IVar2)(IVar2,1);
  }
  return;
}

