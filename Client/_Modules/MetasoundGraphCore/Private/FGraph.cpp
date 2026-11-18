// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 40

// FGraph @ 14ad396a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FGraph * __thiscall
Metasound::FGraph::FGraph
          (FGraph *this,FTopLevelAssetPath *param_1,FGuid *param_2,
          TSharedPtr<Metasound::IOperatorData_const_,1> *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FName FVar4;
  FNodeClassMetadata *pFVar5;
  
  this->_padding_ = (longlong)&___7FGraph_Metasound__6B_;
  FVar4 = param_1->AssetName;
  (this->AssetPath).PackageName = param_1->PackageName;
  (this->AssetPath).AssetName = FVar4;
  FVar4 = param_1->PackageName;
  if (FVar4 == (FName)0x0) {
    FVar4 = param_1->AssetName;
  }
  this->InstanceName = FVar4;
  uVar1 = param_2->B;
  uVar2 = param_2->C;
  uVar3 = param_2->D;
  (this->InstanceID).A = param_2->A;
  (this->InstanceID).B = uVar1;
  (this->InstanceID).C = uVar2;
  (this->InstanceID).D = uVar3;
  pFVar5 = FNodeClassMetadata::GetEmpty();
  FNodeClassMetadata::FNodeClassMetadata(&this->Metadata,pFVar5);
  (this->OperatorData).Object = param_3->Object;
  (this->OperatorData).SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  (param_3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_3->Object = (IOperatorData *)0x0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->Nodes).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).Pairs.ArrayNum = 0;
  (this->Nodes).Pairs.ArrayMax = 0;
  *(undefined8 *)&this->InputDestinations = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x8 = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x20 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x28 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputDestinations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputDestinations).field_0x34 = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x40 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x48 = 0;
  *(undefined8 *)&this->OutputSources = 0;
  *(undefined8 *)&(this->OutputSources).field_0x8 = 0;
  *(undefined8 *)&(this->OutputSources).field_0x20 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x28 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputSources).field_0x34 = 0;
  *(undefined8 *)&(this->OutputSources).field_0x40 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x48 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// FGraph @ 14ad397d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FGraph * __thiscall Metasound::FGraph::FGraph(FGraph *this,FGraph *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *pTVar3;
  TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
  *pTVar4;
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>_>
  *this_00;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FDataEdge *pFVar7;
  TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *pTVar8;
  FName FVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  this->_padding_ = (longlong)&___7FGraph_Metasound__6B_;
  FVar9 = (param_1->AssetPath).AssetName;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar9;
  this->InstanceName = param_1->InstanceName;
  uVar10 = (param_1->InstanceID).B;
  uVar11 = (param_1->InstanceID).C;
  uVar12 = (param_1->InstanceID).D;
  (this->InstanceID).A = (param_1->InstanceID).A;
  (this->InstanceID).B = uVar10;
  (this->InstanceID).C = uVar11;
  (this->InstanceID).D = uVar12;
  FNodeClassMetadata::FNodeClassMetadata(&this->Metadata,&param_1->Metadata);
  (this->OperatorData).Object = (param_1->OperatorData).Object;
  pTVar6 = (param_1->OperatorData).SharedReferenceCount.ReferenceController;
  (this->OperatorData).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->Edges;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Edges).ArrayMax;
  iVar5 = (param_1->Edges).ArrayNum;
  pFVar7 = (FDataEdge *)(param_1->Edges).AllocatorInstance.Data;
  (this->Edges).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    ConstructItems<Metasound::FDataEdge,Metasound::FDataEdge,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
  }
  pTVar4 = &this->Nodes;
  (pTVar4->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Nodes).Pairs.ArrayMax;
  iVar5 = (param_1->Nodes).Pairs.ArrayNum;
  pTVar8 = (TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *)
           (param_1->Nodes).Pairs.AllocatorInstance.Data;
  (this->Nodes).Pairs.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar5,0,(ForAnyElementType *)pTVar4,iVar5,piVar1);
    ConstructItems<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,int>
              ((pTVar4->Pairs).AllocatorInstance.Data,pTVar8,iVar5);
  }
  this_00 = &this->InputDestinations;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x8 = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x20 = 0;
  puVar2 = &(this->InputDestinations).field_0x48;
  *(undefined4 *)&(this->InputDestinations).field_0x28 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputDestinations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputDestinations).field_0x34 = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x40 = 0;
  *(undefined4 *)puVar2 = 0;
  if (this_00 != &param_1->InputDestinations) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->InputDestinations).field_0x38,(int *)puVar2,
               (ForElementType<FSetElementId> *)&(param_1->InputDestinations).field_0x38,
               *(int *)&(param_1->InputDestinations).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->InputDestinations);
  }
  *(undefined8 *)&(this->OutputSources).field_0x0 = 0;
  *(undefined8 *)&(this->OutputSources).field_0x8 = 0;
  *(undefined8 *)&(this->OutputSources).field_0x20 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x28 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputSources).field_0x34 = 0;
  *(undefined8 *)&(this->OutputSources).field_0x40 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x48 = 0;
  TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
               *)&this->OutputSources,
              (TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
               *)&param_1->OutputSources);
  return this;
}

// FGraph @ 14ad399b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FGraph * __thiscall
Metasound::FGraph::FGraph
          (FGraph *this,FName *param_1,FGuid *param_2,
          TSharedPtr<Metasound::IOperatorData_const_,1> *param_3)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FNodeClassMetadata *pFVar5;
  FTopLevelAssetPath *this_00;
  
  this->_padding_ = (longlong)&___7FGraph_Metasound__6B_;
  this_00 = &this->AssetPath;
  FVar1 = *param_1;
  (this_00->PackageName).ComparisonIndex = 0;
  (this_00->PackageName).Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(this_00,(FName)0x0,FVar1);
  this->InstanceName = *param_1;
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  (this->InstanceID).A = param_2->A;
  (this->InstanceID).B = uVar2;
  (this->InstanceID).C = uVar3;
  (this->InstanceID).D = uVar4;
  pFVar5 = FNodeClassMetadata::GetEmpty();
  FNodeClassMetadata::FNodeClassMetadata(&this->Metadata,pFVar5);
  (this->OperatorData).Object = param_3->Object;
  (this->OperatorData).SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  (param_3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_3->Object = (IOperatorData *)0x0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->Nodes).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).Pairs.ArrayNum = 0;
  (this->Nodes).Pairs.ArrayMax = 0;
  *(undefined8 *)&this->InputDestinations = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x8 = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x20 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x28 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputDestinations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputDestinations).field_0x34 = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x40 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x48 = 0;
  *(undefined8 *)&this->OutputSources = 0;
  *(undefined8 *)&(this->OutputSources).field_0x8 = 0;
  *(undefined8 *)&(this->OutputSources).field_0x20 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x28 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputSources).field_0x34 = 0;
  *(undefined8 *)&(this->OutputSources).field_0x40 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x48 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// FGraph @ 14ad39b00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FGraph * __thiscall
Metasound::FGraph::FGraph
          (FGraph *this,FString *param_1,FGuid *param_2,
          TSharedPtr<Metasound::IOperatorData_const_,1> *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FName *pFVar5;
  FString *pFVar6;
  FName FVar7;
  FNodeClassMetadata *pFVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FName local_res10;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  this->_padding_ = (longlong)&___7FGraph_Metasound__6B_;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(&local_res10,pwVar9);
  local_res8 = *pFVar5;
  (this->AssetPath).PackageName.ComparisonIndex = 0;
  (this->AssetPath).PackageName.Number = 0;
  (this->AssetPath).AssetName.ComparisonIndex = 0;
  (this->AssetPath).AssetName.Number = 0;
  pFVar6 = ::FName::ToString(&local_res8,&local_28);
  local_38.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  FTopLevelAssetPath::TrySetPath(&this->AssetPath,&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar7 = (this->AssetPath).PackageName;
  if (FVar7 == (FName)0x0) {
    FVar7 = (this->AssetPath).AssetName;
  }
  this->InstanceName = FVar7;
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  (this->InstanceID).A = param_2->A;
  (this->InstanceID).B = uVar2;
  (this->InstanceID).C = uVar3;
  (this->InstanceID).D = uVar4;
  pFVar8 = FNodeClassMetadata::GetEmpty();
  FNodeClassMetadata::FNodeClassMetadata(&this->Metadata,pFVar8);
  (this->OperatorData).Object = param_3->Object;
  (this->OperatorData).SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  (param_3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_3->Object = (IOperatorData *)0x0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->Nodes).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).Pairs.ArrayNum = 0;
  (this->Nodes).Pairs.ArrayMax = 0;
  *(undefined8 *)&this->InputDestinations = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x8 = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x20 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x28 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputDestinations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputDestinations).field_0x34 = 0;
  *(undefined8 *)&(this->InputDestinations).field_0x40 = 0;
  *(undefined4 *)&(this->InputDestinations).field_0x48 = 0;
  *(undefined8 *)&this->OutputSources = 0;
  *(undefined8 *)&(this->OutputSources).field_0x8 = 0;
  *(undefined8 *)&(this->OutputSources).field_0x20 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x28 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputSources).field_0x34 = 0;
  *(undefined8 *)&(this->OutputSources).field_0x40 = 0;
  *(undefined4 *)&(this->OutputSources).field_0x48 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FGraph @ 14ad3db30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall Metasound::FGraph::~FGraph(FGraph *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->OutputSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OutputSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputSources);
  *(undefined4 *)&(this->InputDestinations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InputDestinations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputDestinations);
  DestructItems<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,int>
            ((TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *)
             (this->Nodes).Pairs.AllocatorInstance.Data,(this->Nodes).Pairs.ArrayNum);
  pFVar2 = (this->Nodes).Pairs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Metasound::FDataEdge,int>
            ((FDataEdge *)(this->Edges).AllocatorInstance.Data,(this->Edges).ArrayNum);
  pFVar2 = (this->Edges).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OperatorData).SharedReferenceCount.ReferenceController);
  FNodeClassMetadata::~FNodeClassMetadata(&this->Metadata);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  return;
}

// operator() @ 14ad411a0

void __thiscall
`Metasound::FGraph::FindUnconnectedNodes'::__l2::<lambda_1>::operator()(void *this,INode *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  INode *local_res10;
  
  pFVar4 = *(ForAnyElementType **)this;
  iVar10 = 0;
  uVar3 = *(uint *)&pFVar4[1].Data;
  pFVar5 = pFVar4->Data;
  uVar11 = uVar3;
  if (0 < (int)uVar3) {
    do {
      iVar9 = (uVar11 >> 1) + iVar10;
      if (*(INode **)(pFVar5 + (longlong)iVar9 * 8) < param_1) {
        iVar10 = iVar9 + (uVar11 & 1);
      }
      uVar7 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar7 != 0);
  }
  local_res10 = param_1;
  if (iVar10 < (int)uVar3) {
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar2 = (longlong)iVar10 * 8;
    if (*(INode **)(pFVar4->Data + lVar2) != local_res10) {
      pFVar4 = *(ForAnyElementType **)this;
      if (((pFVar4->Data <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      memmove(pFVar4->Data + lVar2 + 8,pFVar4->Data + lVar2,(longlong)(iVar9 - iVar10) << 3);
      *(INode **)(pFVar4->Data + lVar2) = local_res10;
    }
  }
  else {
    if (((pFVar5 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar5 + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar10 + 1;
    *(INode **)(pFVar4->Data + (longlong)iVar10 * 8) = local_res10;
  }
  return;
}

// AddDataEdge @ 14ad44060

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall Metasound::FGraph::AddDataEdge(FGraph *this,FDataEdge *param_1)

{
  int *piVar1;
  TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  FDataEdge *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->Edges;
  pFVar3 = (FDataEdge *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Edges).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Edges).ArrayNum;
  piVar1 = &(this->Edges).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Edges).ArrayNum = iVar6 + 1;
  FDataEdge::FDataEdge
            ((FDataEdge *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x68),param_1);
  return;
}

// AddDataEdge @ 14ad44120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
Metasound::FGraph::AddDataEdge
          (FGraph *this,INode *param_1,FName *param_2,INode *param_3,FName *param_4)

{
  int *piVar1;
  TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FVertexInterface *this_00;
  FVertexInterface *this_01;
  FOutputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 auStack_148 [32];
  INode **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  INode *local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  INode *local_d0;
  undefined **local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a8;
  INode *local_90;
  undefined **local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_148;
  this_00 = (FVertexInterface *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  this_01 = (FVertexInterface *)(**(code **)((longlong)*param_3 + 0x20))(param_3);
  lVar10 = (this_00->OutputInterface)._padding_;
  lVar12 = (longlong)(int)(this_00->OutputInterface)._padding_ * 0x20 + lVar10;
  if (lVar10 == lVar12) {
    return false;
  }
  while (*(FName *)(lVar10 + 8) != *param_2) {
    lVar10 = lVar10 + 0x20;
    if (lVar10 == lVar12) {
      return false;
    }
  }
  lVar10 = (this_01->InputInterface)._padding_;
  lVar12 = (longlong)(int)(this_01->InputInterface)._padding_ * 0x38 + lVar10;
  if (lVar10 == lVar12) {
    return false;
  }
  while (*(FName *)(lVar10 + 8) != *param_4) {
    lVar10 = lVar10 + 0x38;
    if (lVar10 == lVar12) {
      return false;
    }
  }
  pFVar8 = FVertexInterface::GetOutputVertex(this_00,param_2);
  pFVar9 = FVertexInterface::GetInputVertex(this_01,param_4);
  FVar3.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x10;
  FVar3.Number = *(uint *)&pFVar8->field_0x14;
  bVar5 = IsCastable(FVar3,(FName)pFVar9->_padding_);
  if (!bVar5) {
    return false;
  }
  local_80 = pFVar9->_padding_;
  local_78 = pFVar9->_padding_;
  local_70 = (undefined4)pFVar9->_padding_;
  local_88 = &___7FInputDataVertex_Metasound__6B_;
  local_90 = param_3;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_68,&(pFVar9->Literal).Value);
  local_e8 = *(undefined8 *)&pFVar8->field_0x8;
  local_e0 = *(undefined8 *)&pFVar8->field_0x10;
  local_d8 = *(undefined4 *)&pFVar8->field_0x18;
  local_d0 = local_90;
  local_c0 = local_80;
  local_b8 = local_78;
  local_b0 = local_70;
  local_f0 = &___7FOutputDataVertex_Metasound__6B_;
  local_c8 = &___7FInputDataVertex_Metasound__6B_;
  local_f8 = param_1;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_a8,&local_68);
  if ((0xc < local_68.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_68.TypeIndex])(&local_68);
  pTVar2 = &this->Edges;
  pFVar11 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_f8) &&
     (lVar10 = (longlong)(this->Edges).ArrayMax,
     (FScriptContainerElement *)&local_f8 < pFVar11 + lVar10 * 0x68)) {
    local_110 = (longlong)(this->Edges).ArrayNum;
    local_108 = 0x68;
    local_128 = &local_f8;
    local_120 = pFVar11;
    local_118 = lVar10;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = (this->Edges).ArrayNum;
  piVar1 = &(this->Edges).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Edges).ArrayNum = iVar7 + 1;
  pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x68;
  *(INode **)pFVar11 = local_f8;
  *(undefined ***)(pFVar11 + 8) = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)(pFVar11 + 0x10) = local_e8;
  *(undefined8 *)(pFVar11 + 0x18) = local_e0;
  *(undefined4 *)(pFVar11 + 0x20) = local_d8;
  *(undefined ***)(pFVar11 + 8) = &___7FOutputDataVertex_Metasound__6B_;
  *(INode **)(pFVar11 + 0x28) = local_d0;
  *(undefined ***)(pFVar11 + 0x30) = &___7FDataVertex_Metasound__6B_;
  *(longlong *)(pFVar11 + 0x38) = local_c0;
  *(longlong *)(pFVar11 + 0x40) = local_b8;
  *(undefined4 *)(pFVar11 + 0x48) = local_b0;
  *(undefined ***)(pFVar11 + 0x30) = &___7FInputDataVertex_Metasound__6B_;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              *)(pFVar11 + 0x50),&local_a8);
  if ((0xc < local_a8.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a8.TypeIndex])(&local_a8);
  return true;
}

// AddInputDataDestination @ 14ad44d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::FGraph::AddInputDataDestination(FGraph *this,FInputDataDestination *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_98 [32];
  TPairInitializer<TTuple<Metasound::INode_const_*,FName>_&&,Metasound::FInputDataDestination_const_&>
  local_78;
  longlong local_68;
  FInputDataDestination **local_60;
  FInputDataDestination *local_58;
  FInputDataVertex local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_50._padding_ = (param_1->Vertex)._padding_;
  local_50._padding_ = (param_1->Vertex)._padding_;
  local_50._padding_._0_4_ = (undefined4)(param_1->Vertex)._padding_;
  local_50._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  ::
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
            (&local_50.Literal.Value,&(param_1->Vertex).Literal.Value);
  TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&(this->Metadata).DefaultInterface
             ,&local_50);
  if (0xc < local_50.Literal.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_50.Literal.Value.TypeIndex])(&local_50.Literal);
  local_78.Value = (FInputDataDestination *)param_1->Node;
  local_68 = (param_1->Vertex)._padding_;
  local_60 = &local_78.Value;
  local_58 = param_1;
  TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<Metasound::INode_const_*,FName>_&&,Metasound::FInputDataDestination_const_&>_>
            ((TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
              *)&this->InputDestinations,&local_78,(bool *)&local_60);
  return;
}

// AddInputDataDestination @ 14ad44eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
Metasound::FGraph::AddInputDataDestination(FGraph *this,INode *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FVertexInterface *this_00;
  FInputDataVertex *pFVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  TPairInitializer<TTuple<Metasound::INode_const_*,FName>_&&,Metasound::FInputDataDestination_const_&>
  local_c8;
  longlong local_b8;
  FInputDataDestination **local_b0;
  FInputDataDestination **local_a8;
  FInputDataDestination *local_a0;
  undefined **local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  FInputDataVertex local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  lVar6 = *plVar4;
  lVar7 = (longlong)(int)plVar4[1] * 0x38 + lVar6;
  if (lVar6 != lVar7) {
    do {
      if (*(FName *)(lVar6 + 8) == *param_2) {
        this_00 = (FVertexInterface *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
        pFVar5 = FVertexInterface::GetInputVertex(this_00,param_2);
        local_90 = pFVar5->_padding_;
        local_88 = pFVar5->_padding_;
        local_80 = (undefined4)pFVar5->_padding_;
        local_98 = &___7FInputDataVertex_Metasound__6B_;
        local_a0 = (FInputDataDestination *)param_1;
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar5->Literal).Value);
        local_60._padding_ = local_90;
        local_60._padding_ = local_88;
        local_60._padding_._0_4_ = local_80;
        local_60._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_60.Literal.Value,&local_78);
        TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
                  ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)
                   &(this->Metadata).DefaultInterface,&local_60);
        if ((0xc < local_60.Literal.Value.TypeIndex) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_60.Literal.Value.TypeIndex])(&local_60.Literal);
        local_c8.Value = local_a0;
        local_b8 = local_90;
        local_b0 = &local_c8.Value;
        local_a8 = &local_a0;
        TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TTuple<Metasound::INode_const_*,FName>_&&,Metasound::FInputDataDestination_const_&>_>
                  ((TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
                    *)&this->InputDestinations,&local_c8,(bool *)&local_b0);
        if ((0xc < local_78.TypeIndex) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_78.TypeIndex])(&local_78);
        return true;
      }
      lVar6 = lVar6 + 0x38;
    } while (lVar6 != lVar7);
  }
  return false;
}

// AddInputNode @ 14ad45110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::FGraph::AddInputNode
          (FGraph *this,FGuid *param_1,FName *param_2,TSharedPtr<Metasound::INode_const_,1> *param_3
          )

{
  TSharedPtr<Metasound::INode_const_,1> local_18;
  
  if (param_3->Object != (INode *)0x0) {
    AddInputDataDestination(this,param_3->Object,param_2);
    local_18.Object = param_3->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    (param_3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_3->Object = (INode *)0x0;
    AddNode(this,param_1,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// AddInputNode @ 14ad45190

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::FGraph::AddInputNode
          (FGraph *this,FGuid *param_1,FName *param_2,
          TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> param_3)

{
  INode IVar1;
  INode local_res20;
  
  if (*param_3.Ptr != (INode)0x0) {
    AddInputDataDestination(this,(INode *)*param_3.Ptr,param_2);
    local_res20 = *param_3.Ptr;
    *param_3.Ptr = (INode)0x0;
    AddNode(this,param_1,&local_res20);
  }
  IVar1 = *param_3.Ptr;
  if (IVar1 != (INode)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  return;
}

// AddNode @ 14ad45430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::FGraph::AddNode
          (FGraph *this,FGuid *param_1,TSharedPtr<Metasound::INode_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  INode *pIVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *pTVar6;
  undefined8 local_res8;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar6 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::AllocateMemoryForEmplace<FGuid_const_&>(&this->Nodes,param_1);
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  *(uint *)&pTVar6->field_0x0 = param_1->A;
  *(uint *)&pTVar6->field_0x4 = uVar3;
  *(uint *)&pTVar6->field_0x8 = uVar4;
  *(uint *)&pTVar6->field_0xc = uVar5;
  *(undefined8 *)&pTVar6->field_0x10 = local_res8;
  *(INode **)&pTVar6->field_0x18 = pIVar2;
  *(TReferenceControllerBase<1> **)&pTVar6->field_0x20 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddNode @ 14ad454b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::FGraph::AddNode
          (FGraph *this,FGuid *param_1,
          TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> param_2)

{
  INode IVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *pTVar6;
  
  IVar1 = *param_2.Ptr;
  *param_2.Ptr = (INode)0x0;
  puVar5 = ::operator_new(0x18);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *puVar5 = &
              ___7__TReferenceControllerWithDeleter_VINode_Metasound__U__DefaultDeleter_VINode_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(INode *)(puVar5 + 2) = IVar1;
  }
  pTVar6 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::AllocateMemoryForEmplace<FGuid_const_&>(&this->Nodes,param_1);
  uVar2 = param_1->B;
  uVar3 = param_1->C;
  uVar4 = param_1->D;
  *(uint *)&pTVar6->field_0x0 = param_1->A;
  *(uint *)&pTVar6->field_0x4 = uVar2;
  *(uint *)&pTVar6->field_0x8 = uVar3;
  *(uint *)&pTVar6->field_0xc = uVar4;
  *(INode *)&pTVar6->field_0x10 = IVar1;
  *(INode *)&pTVar6->field_0x18 = IVar1;
  *(undefined8 **)&pTVar6->field_0x20 = puVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  IVar1 = *param_2.Ptr;
  if (IVar1 != (INode)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  return;
}

// AddOutputDataSource @ 14ad45f50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall Metasound::FGraph::AddOutputDataSource(FGraph *this,FOutputDataSource *param_1)

{
  int *piVar1;
  FOutputVertexInterface *pFVar2;
  undefined ***pppuVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  INode *local_48;
  undefined8 local_40;
  INode **local_38;
  FOutputDataSource *local_30;
  undefined **local_28;
  undefined **local_20;
  undefined **local_18;
  undefined4 local_10;
  
  local_18 = *(undefined ***)&(param_1->Vertex).field_0x10;
  pFVar2 = &(this->Metadata).DefaultInterface.OutputInterface;
  local_20 = *(undefined ***)&(param_1->Vertex).field_0x8;
  local_10 = *(undefined4 *)&(param_1->Vertex).field_0x18;
  pppuVar3 = (undefined ***)pFVar2->_padding_;
  local_28 = &___7FOutputDataVertex_Metasound__6B_;
  pppuVar7 = pppuVar3;
  do {
    if (pppuVar7 ==
        pppuVar3 + (longlong)(int)(this->Metadata).DefaultInterface.OutputInterface._padding_ * 4) {
      if (((pppuVar3 <= &local_28) &&
          (&local_28 <
           pppuVar3 +
           (longlong)
           *(int *)((longlong)&(this->Metadata).DefaultInterface.OutputInterface._padding_ + 4) * 4)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)(this->Metadata).DefaultInterface.OutputInterface._padding_;
      piVar1 = (int *)((longlong)&(this->Metadata).DefaultInterface.OutputInterface._padding_ + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)pFVar2,piVar1);
      }
      *(int *)&(this->Metadata).DefaultInterface.OutputInterface._padding_ = iVar6 + 1;
      puVar8 = (undefined8 *)(pFVar2->_padding_ + (longlong)iVar6 * 0x20);
      *puVar8 = &___7FDataVertex_Metasound__6B_;
      puVar8[1] = local_20;
      puVar8[2] = local_18;
      *(undefined4 *)(puVar8 + 3) = local_10;
      *puVar8 = &___7FOutputDataVertex_Metasound__6B_;
LAB_14ad46083:
      local_48 = param_1->Node;
      local_40 = *(undefined8 *)&(param_1->Vertex).field_0x8;
      local_38 = &local_48;
      local_30 = param_1;
      TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TTuple<Metasound::INode_const_*,FName>_&&,Metasound::FOutputDataSource_const_&>_>
                ((TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
                  *)&this->OutputSources,
                 (TPairInitializer<TTuple<Metasound::INode_const_*,FName>_&&,Metasound::FOutputDataSource_const_&>
                  *)&stack0x00000008,(bool *)&local_38);
      return;
    }
    if (pppuVar7[1] == local_20) {
      pppuVar7[1] = local_20;
      pppuVar7[2] = local_18;
      *(undefined4 *)(pppuVar7 + 3) = local_10;
      goto LAB_14ad46083;
    }
    pppuVar7 = pppuVar7 + 4;
  } while( true );
}

// AddOutputDataSource @ 14ad46100

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall Metasound::FGraph::AddOutputDataSource(FGraph *this,INode *param_1,FName *param_2)

{
  int *piVar1;
  FOutputVertexInterface *pFVar2;
  undefined ***pppuVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  FVertexInterface *this_00;
  FOutputDataVertex *pFVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  longlong lVar12;
  INode *local_78;
  undefined **local_70;
  INode **local_68;
  INode **local_60;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined4 local_40;
  INode *local_38;
  undefined **local_30;
  undefined **local_28;
  undefined **local_20;
  undefined4 local_18;
  
  lVar8 = (**(code **)((longlong)*param_1 + 0x20))(param_1);
  lVar12 = *(longlong *)(lVar8 + 0x20);
  lVar8 = (longlong)*(int *)(lVar8 + 0x28) * 0x20 + lVar12;
  if (lVar12 != lVar8) {
    do {
      if (*(FName *)(lVar12 + 8) == *param_2) {
        this_00 = (FVertexInterface *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
        pFVar9 = FVertexInterface::GetOutputVertex(this_00,param_2);
        pFVar2 = &(this->Metadata).DefaultInterface.OutputInterface;
        local_58 = &___7FOutputDataVertex_Metasound__6B_;
        local_50 = *(undefined ***)&pFVar9->field_0x8;
        local_48 = *(undefined ***)&pFVar9->field_0x10;
        local_40 = *(undefined4 *)&pFVar9->field_0x18;
        pppuVar3 = (undefined ***)pFVar2->_padding_;
        local_30 = &___7FOutputDataVertex_Metasound__6B_;
        pppuVar10 = pppuVar3;
        goto joined_r0x00014ad461d5;
      }
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != lVar8);
  }
  return false;
joined_r0x00014ad461d5:
  local_38 = param_1;
  local_28 = local_50;
  local_20 = local_48;
  local_18 = local_40;
  if (pppuVar10 ==
      pppuVar3 + (longlong)(int)(this->Metadata).DefaultInterface.OutputInterface._padding_ * 4) {
    if (((pppuVar3 <= &local_58) &&
        (&local_58 <
         pppuVar3 +
         (longlong)
         *(int *)((longlong)&(this->Metadata).DefaultInterface.OutputInterface._padding_ + 4) * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (int)(this->Metadata).DefaultInterface.OutputInterface._padding_;
    piVar1 = (int *)((longlong)&(this->Metadata).DefaultInterface.OutputInterface._padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)pFVar2,piVar1);
    }
    *(int *)&(this->Metadata).DefaultInterface.OutputInterface._padding_ = iVar7 + 1;
    puVar11 = (undefined8 *)(pFVar2->_padding_ + (longlong)iVar7 * 0x20);
    *puVar11 = &___7FDataVertex_Metasound__6B_;
    puVar11[1] = local_50;
    puVar11[2] = local_48;
    *(undefined4 *)(puVar11 + 3) = local_40;
    *puVar11 = &___7FOutputDataVertex_Metasound__6B_;
LAB_14ad462a6:
    local_78 = local_38;
    local_70 = local_28;
    local_68 = &local_78;
    local_60 = &local_38;
    TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TTuple<Metasound::INode_const_*,FName>_&&,Metasound::FOutputDataSource_const_&>_>
              ((TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
                *)&this->OutputSources,
               (TPairInitializer<TTuple<Metasound::INode_const_*,FName>_&&,Metasound::FOutputDataSource_const_&>
                *)&stack0x00000010,(bool *)&local_68);
    return true;
  }
  if (pppuVar10[1] == local_50) {
    pppuVar10[1] = local_50;
    pppuVar10[2] = local_48;
    *(undefined4 *)(pppuVar10 + 3) = local_40;
    goto LAB_14ad462a6;
  }
  pppuVar10 = pppuVar10 + 4;
  goto joined_r0x00014ad461d5;
}

// AddOutputNode @ 14ad463a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::FGraph::AddOutputNode
          (FGraph *this,FGuid *param_1,FName *param_2,TSharedPtr<Metasound::INode_const_,1> *param_3
          )

{
  TSharedPtr<Metasound::INode_const_,1> local_18;
  
  if (param_3->Object != (INode *)0x0) {
    AddOutputDataSource(this,param_3->Object,param_2);
    local_18.Object = param_3->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddNode(this,param_1,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// AddOutputNode @ 14ad46420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
Metasound::FGraph::AddOutputNode
          (FGraph *this,FGuid *param_1,FName *param_2,
          TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> param_3)

{
  INode IVar1;
  INode local_res20;
  
  if (*param_3.Ptr != (INode)0x0) {
    AddOutputDataSource(this,(INode *)*param_3.Ptr,param_2);
    local_res20 = *param_3.Ptr;
    *param_3.Ptr = (INode)0x0;
    AddNode(this,param_1,&local_res20);
  }
  IVar1 = *param_3.Ptr;
  if (IVar1 != (INode)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  return;
}

// FindMutableNode @ 14ad51540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

INode * __thiscall Metasound::FGraph::FindMutableNode(FGraph *this,FGuid *param_1)

{
  FDeprecationNodeStorageAdapter *pFVar1;
  
  pFVar1 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->Nodes,param_1);
  if (pFVar1 != (FDeprecationNodeStorageAdapter *)0x0) {
    return pFVar1->MutableNode;
  }
  return (INode *)0x0;
}

// FindNode @ 14ad51570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

INode * __thiscall Metasound::FGraph::FindNode(FGraph *this,FGuid *param_1)

{
  FDeprecationNodeStorageAdapter *pFVar1;
  
  pFVar1 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->Nodes,param_1);
  if (pFVar1 != (FDeprecationNodeStorageAdapter *)0x0) {
    return (pFVar1->Storage).Object;
  }
  return (INode *)0x0;
}

// FindUnconnectedNodes @ 14ad52180

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

int __thiscall
Metasound::FGraph::FindUnconnectedNodes
          (FGraph *this,
          TArray<TTuple<FGuid,Metasound::INode_const_*>,TSizedDefaultAllocator<32>_> *param_1)

{
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>_>
  *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  code *pcVar5;
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>_>
  *pTVar6;
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>_>
  *pTVar7;
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_168 [8];
  void **local_160;
  ulonglong local_158;
  void *local_150;
  undefined8 local_148;
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>_>
  *local_140;
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
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>_>
  *local_100;
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>_>
  *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_160 = &local_150;
  local_150 = (void *)0x0;
  local_148 = 0;
  iVar10 = (this->Edges).ArrayNum;
  pFVar13 = (this->Edges).AllocatorInstance.Data;
  pFVar15 = pFVar13 + (longlong)iVar10 * 0x68;
  while( true ) {
    if ((this->Edges).ArrayNum != iVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar13 == pFVar15) break;
    `Metasound::FGraph::FindUnconnectedNodes'::__l2::<lambda_1>::operator()
              (&local_160,*(INode **)pFVar13);
    `Metasound::FGraph::FindUnconnectedNodes'::__l2::<lambda_1>::operator()
              (&local_160,*(INode **)(pFVar13 + 0x28));
    pFVar13 = pFVar13 + 0x68;
  }
  local_140 = &this->InputDestinations;
  iVar16 = 0;
  iStack_138 = 0;
  local_158 = 1;
  puVar3 = &(this->InputDestinations).field_0x10;
  iVar10 = *(int *)&(this->InputDestinations).field_0x28;
  local_120 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->InputDestinations).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uStack_134 = *puVar18;
    local_120 = 0;
    while (uStack_134 == 0) {
      lVar11 = (longlong)iStack_138;
      local_120 = local_120 + 0x20;
      iStack_138 = iStack_138 + 1;
      uStack_134 = 1;
      iStack_124 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14ad522af;
      uStack_134 = puVar18[lVar11 + 1];
    }
    uStack_134 = -uStack_134 & uStack_134;
    uVar2 = (ulonglong)uStack_134 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_110 = (int)lVar11;
    iStack_124 = local_120 + -1 + local_110;
    if (iVar10 < iStack_124) {
      iStack_124 = iVar10;
    }
  }
LAB_14ad522af:
  uStack_11c = local_4c;
  iStack_118 = *(int *)&(this->InputDestinations).field_0x8 -
               *(int *)&(this->InputDestinations).field_0x34;
  uVar14 = *(uint *)&(this->InputDestinations).field_0x28;
  uVar19 = uVar14 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uStack_134,iStack_138);
  uStack_128 = 0xffffffff;
  TStack_c0.CurrentBitIndex = iStack_124;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_120;
  uStack_a0 = CONCAT44(uStack_114,iStack_118);
  local_130 = puVar3;
  local_100 = local_140;
  local_c8 = local_140;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  pTVar6 = local_100;
  uVar4 = *(uint *)&(this->InputDestinations).field_0x28;
  if (uVar14 != uVar4) {
    puVar17 = *(undefined1 **)&(this->InputDestinations).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ad523e0;
      uVar14 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_10c = (int)lVar11;
    uVar14 = local_10c + -1 + uVar19;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14ad523e0:
  while( true ) {
    pTVar7 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c0.CurrentBitIndex == uVar14) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar7 == pTVar6))
    break;
    `Metasound::FGraph::FindUnconnectedNodes'::__l2::<lambda_1>::operator()
              (&local_160,
               *(INode **)((longlong)TStack_c0.CurrentBitIndex * 0x58 + 0x10 + *(longlong *)pTVar7))
    ;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  local_d8 = 0;
  puVar3 = &(this->OutputSources).field_0x10;
  iVar10 = *(int *)&(this->OutputSources).field_0x28;
  pTVar1 = &this->OutputSources;
  iStack_dc = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->OutputSources).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar3;
    }
    uVar14 = *puVar18;
    local_d8 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar16;
      local_d8 = local_d8 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_dc = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ad524d0;
      uVar14 = puVar18[lVar11 + 1];
    }
    local_158 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = local_158 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_108 = (int)lVar11;
    iStack_dc = local_d8 + -1 + local_108;
    if (iVar10 < iStack_dc) {
      iStack_dc = iVar10;
    }
  }
LAB_14ad524d0:
  uVar14 = *(uint *)&(this->OutputSources).field_0x28;
  uStack_ec = (undefined4)local_158;
  iStack_d4 = iStack_124;
  iStack_d0 = *(int *)&(this->OutputSources).field_0x8 - *(int *)&(this->OutputSources).field_0x34;
  uStack_e0 = 0xffffffff;
  uVar19 = uVar14 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uStack_ec,iVar16);
  TStack_90.CurrentBitIndex = iStack_dc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_90._28_4_ = iStack_124;
  TStack_90.BaseBitIndex = local_d8;
  uStack_70 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = pTVar1;
  iStack_f0 = iVar16;
  local_e8 = puVar3;
  local_98 = pTVar1;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  uVar4 = *(uint *)&(this->OutputSources).field_0x28;
  if (uVar14 != uVar4) {
    puVar17 = *(undefined1 **)&(this->OutputSources).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ad525d0;
      uVar14 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14ad525d0:
  while( true ) {
    pTVar8 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (((TStack_90.CurrentBitIndex == uVar14) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar8 == pTVar1))
    break;
    `Metasound::FGraph::FindUnconnectedNodes'::__l2::<lambda_1>::operator()
              (&local_160,
               *(INode **)((longlong)TStack_90.CurrentBitIndex * 0x40 + 0x10 + *(longlong *)pTVar8))
    ;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  Algo::
  TransformIf<TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,TArray<TTuple<FGuid,Metasound::INode_const_*>,TSizedDefaultAllocator<32>_>_&,_Metasound::FGraph::FindUnconnectedNodes_::__l2::<lambda_2>,_Metasound::FGraph::FindUnconnectedNodes_::__l2::<lambda_3>_>
            (&this->Nodes,param_1,
             (TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *)&local_150,
             (<lambda_3>)0x0);
  iVar10 = param_1->ArrayNum;
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  return iVar10;
}

// GetAssetPath @ 14ad54ee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FTopLevelAssetPath * __thiscall Metasound::FGraph::GetAssetPath(FGraph *this)

{
  return &this->AssetPath;
}

// GetDataEdges @ 14ad54f50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FGraph::GetDataEdges(FGraph *this)

{
  return &this->Edges;
}

// GetDefaultOperatorFactory @ 14ad55910

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::FGraph::GetDefaultOperatorFactory
          (FGraph *this,TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::IOperatorFactory,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IOperatorFactory *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFactory_FGraph_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FFactory_FGraph_Metasound__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Metasound::IOperatorFactory,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IOperatorFactory *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetInputDataDestinations @ 14ad55e80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>_>
* __thiscall Metasound::FGraph::GetInputDataDestinations(FGraph *this)

{
  return &this->InputDestinations;
}

// GetInstanceID @ 14ad55fb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FGuid * __thiscall Metasound::FGraph::GetInstanceID(FGraph *this)

{
  return &this->InstanceID;
}

// GetInstanceName @ 14ad55fe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FName * __thiscall Metasound::FGraph::GetInstanceName(FGraph *this)

{
  return &this->InstanceName;
}

// GetMetadata @ 14ad56030

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall Metasound::FGraph::GetMetadata(FGraph *this)

{
  return &this->Metadata;
}

// GetOperatorData @ 14ad56440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedPtr<Metasound::IOperatorData_const_,1> * __thiscall
Metasound::FGraph::GetOperatorData
          (FGraph *this,TSharedPtr<Metasound::IOperatorData_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OperatorData).Object;
  pTVar1 = (this->OperatorData).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOutputDataSources @ 14ad56560

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TMap<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>_>
* __thiscall Metasound::FGraph::GetOutputDataSources(FGraph *this)

{
  return &this->OutputSources;
}

// GetVertexInterface @ 14ad57420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FVertexInterface * __thiscall Metasound::FGraph::GetVertexInterface(FGraph *this)

{
  return &(this->Metadata).DefaultInterface;
}

// IsVertexInterfaceSupported @ 14ad5a9f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
Metasound::FGraph::IsVertexInterfaceSupported(FGraph *this,FVertexInterface *param_1)

{
  bool bVar1;
  
  bVar1 = Metasound::operator==(param_1,&(this->Metadata).DefaultInterface);
  return bVar1;
}

// RemoveDataEdge @ 14ad60140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall
Metasound::FGraph::RemoveDataEdge
          (FGraph *this,INode *param_1,FName *param_2,INode *param_3,FName *param_4)

{
  TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  this_00 = &this->Edges;
  bVar3 = false;
  iVar1 = (this->Edges).ArrayNum;
  uVar8 = 0;
  if (0 < iVar1) {
    lVar10 = 0;
    iVar9 = iVar1;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar9) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar7 = (this_00->AllocatorInstance).Data + lVar10;
      if ((((*(INode **)(pFVar7 + 0x28) == param_3) && (*(FName *)(pFVar7 + 0x38) == *param_4)) &&
          (*(INode **)pFVar7 == param_1)) && (*(FName *)(pFVar7 + 0x10) == *param_2)) {
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar8 < (this->Edges).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar8);
      }
      else {
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x68;
      }
      iVar9 = (this->Edges).ArrayNum;
    } while ((int)uVar8 < iVar9);
    if (bVar3) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,&this_00->AllocatorInstance,iVar9,&(this->Edges).ArrayMax);
    }
  }
  return 0 < iVar1 - (this->Edges).ArrayNum;
}

// RemoveDataEdgesWithNode @ 14ad602e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall Metasound::FGraph::RemoveDataEdgesWithNode(FGraph *this,INode *param_1)

{
  TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  this_00 = &this->Edges;
  bVar3 = false;
  iVar8 = (this->Edges).ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < iVar8) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = (this_00->AllocatorInstance).Data;
      if ((*(INode **)(pFVar1 + lVar7 + 0x28) == param_1) ||
         (*(INode **)(pFVar1 + lVar7) == param_1)) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar6 < (this->Edges).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar6);
      }
      else {
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x68;
      }
      iVar8 = (this->Edges).ArrayNum;
    } while ((int)uVar6 < iVar8);
    if (bVar3) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,&this_00->AllocatorInstance,iVar8,&(this->Edges).ArrayMax);
    }
  }
  return;
}

// RemoveInputDataDestination @ 14ad60520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall Metasound::FGraph::RemoveInputDataDestination(FGraph *this,FName *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  FName *pFVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  TIterator local_a8;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
  *local_48;
  char local_40;
  char cStack_3f;
  
  iVar3 = (int)(this->Metadata).DefaultInterface.InputInterface._padding_;
  lVar4 = (longlong)iVar3;
  uVar6 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    lVar1 = (this->Metadata).DefaultInterface.InputInterface._padding_;
    bVar13 = *(FName *)(lVar1 + 8) != *param_1;
    uVar8 = uVar6;
    uVar12 = uVar6;
    do {
      iVar10 = (int)uVar8;
      uVar6 = uVar6 + 1;
      uVar8 = (ulonglong)(iVar10 + 1);
      if ((longlong)uVar6 < lVar4) {
        pFVar5 = (FName *)(uVar6 * 0x38 + 8 + lVar1);
        do {
          if (bVar13 != (*pFVar5 != *param_1)) break;
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 1;
          pFVar5 = pFVar5 + 7;
        } while ((longlong)uVar6 < lVar4);
      }
      iVar7 = (int)uVar8 - iVar10;
      if (bVar13 == false) {
        DestructItems<Metasound::FInputDataVertex,int>
                  ((FInputDataVertex *)((longlong)iVar10 * 0x38 + lVar1),iVar7);
      }
      else {
        iVar11 = (int)uVar12;
        if (iVar11 != iVar10) {
          memmove((void *)((longlong)iVar11 * 0x38 + lVar1),
                  (void *)((longlong)iVar10 * 0x38 + lVar1),(longlong)iVar7 * 0x38);
        }
        uVar12 = (ulonglong)(uint)(iVar11 + iVar7);
      }
      bVar13 = (bool)(bVar13 ^ 1);
    } while ((longlong)uVar6 < lVar4);
    iVar10 = iVar3 - (int)uVar12;
    *(int *)&(this->Metadata).DefaultInterface.InputInterface._padding_ = (int)uVar12;
  }
  TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_a8,
             (TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
              *)&this->InputDestinations);
  bVar13 = false;
  local_40 = '\0';
  cStack_3f = '\0';
  local_78 = (longlong *)local_a8._padding_;
  TStack_70._padding_ = local_a8._padding_;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8._padding_;
  TStack_70.UnvisitedBitMask = (undefined4)local_a8._padding_;
  TStack_70.CurrentBitIndex = local_a8._padding_._4_4_;
  uVar2 = TStack_70._16_8_;
  TStack_70.CurrentBitIndex = (int)((ulonglong)local_a8._padding_ >> 0x20);
  TStack_70._24_8_ = local_a8._padding_;
  pTStack_50 = local_a8.Set;
  iVar3 = TStack_70.CurrentBitIndex;
  TStack_70._16_8_ = uVar2;
  local_48 = (TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
              *)&this->InputDestinations;
  do {
    if (*(FName *)((longlong)iVar3 * 0x58 + 0x20 + *local_78) == *param_1) {
      TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_50,iVar3);
      local_40 = '\x01';
      bVar13 = true;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    iVar3 = TStack_70.CurrentBitIndex;
  } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  if ((iVar10 < 1) || (!bVar13)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((local_40 != '\0') && (cStack_3f != '\0')) {
    uVar9 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
    if (uVar9 < 4) {
      iVar3 = 1;
    }
    else {
      uVar6 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((0 < (int)uVar9) && (local_48->HashSize < iVar3)) || (iVar3 < local_48->HashSize)) {
      local_48->HashSize = iVar3;
      TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination,0>,FDefaultSetAllocator>
      ::Rehash(local_48);
    }
  }
  return bVar13;
}

// RemoveNode @ 14ad60b70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall Metasound::FGraph::RemoveNode(FGraph *this,FGuid *param_1,bool param_2)

{
  TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *this_01;
  FKeyForward local_res18;
  longlong local_40;
  FSharedReferencer<1> aFStack_38 [2];
  
  this_00 = &this->Nodes;
  if (!param_2) {
    iVar8 = Algo::
            BinarySearchBy<TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                      (&this_00->Pairs,param_1,local_res18,(TLess<FGuid_const_&>)local_res18);
    if (iVar8 == -1) {
      return false;
    }
    TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>
    ::RemoveAt(&this_00->Pairs,iVar8,Default);
    return true;
  }
  local_40 = 0;
  aFStack_38[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uVar7 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (&this_00->Pairs,param_1,local_res18,(TLess<FGuid_const_&>)local_res18);
  if (uVar7 == 0xffffffff) {
    bVar4 = false;
  }
  else {
    uVar9 = 0;
    if ((int)uVar7 < (this->Nodes).Pairs.ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pFVar1 = (this_00->Pairs).AllocatorInstance.Data;
    pFVar10 = pFVar1 + (longlong)(int)uVar7 * 0x28 + 0x18;
    if ((FScriptContainerElement *)&local_40 != pFVar10) {
      local_40 = *(longlong *)pFVar10;
      *(undefined8 *)pFVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (aFStack_38,(FSharedReferencer<1> *)(pFVar1 + (longlong)(int)uVar7 * 0x28 + 0x20));
    }
    TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>
    ::RemoveAt(&this_00->Pairs,uVar7,Default);
    lVar3 = local_40;
    this_01 = &this->Edges;
    bVar4 = false;
    uVar7 = 0;
    iVar8 = (this->Edges).ArrayNum;
    if (0 < iVar8) {
      lVar11 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar7 < iVar8) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        pFVar1 = (this_01->AllocatorInstance).Data;
        if ((*(longlong *)(pFVar1 + lVar11 + 0x28) == lVar3) ||
           (*(longlong *)(pFVar1 + lVar11) == lVar3)) {
          bVar4 = true;
          uVar9 = 0;
          if ((int)uVar7 < (this->Edges).ArrayNum) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_01,uVar7);
        }
        else {
          uVar7 = uVar7 + 1;
          lVar11 = lVar11 + 0x68;
        }
        iVar8 = (this->Edges).ArrayNum;
      } while ((int)uVar7 < iVar8);
      if (bVar4) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,&this_01->AllocatorInstance,iVar8,&(this->Edges).ArrayMax);
      }
    }
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_38[0].ReferenceController);
  return bVar4;
}

// RemoveOutputDataSource @ 14ad61cf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall Metasound::FGraph::RemoveOutputDataSource(FGraph *this,FName *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  FName *pFVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  TIterator local_a8;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
  *local_48;
  char local_40;
  char cStack_3f;
  
  iVar3 = (int)(this->Metadata).DefaultInterface.OutputInterface._padding_;
  lVar4 = (longlong)iVar3;
  uVar6 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    lVar1 = (this->Metadata).DefaultInterface.OutputInterface._padding_;
    bVar13 = *(FName *)(lVar1 + 8) != *param_1;
    uVar8 = uVar6;
    uVar12 = uVar6;
    do {
      iVar10 = (int)uVar8;
      uVar6 = uVar6 + 1;
      uVar8 = (ulonglong)(iVar10 + 1);
      if ((longlong)uVar6 < lVar4) {
        pFVar5 = (FName *)(uVar6 * 0x20 + 8 + lVar1);
        do {
          if (bVar13 != (*pFVar5 != *param_1)) break;
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 1;
          pFVar5 = pFVar5 + 4;
        } while ((longlong)uVar6 < lVar4);
      }
      iVar7 = (int)uVar8 - iVar10;
      if (bVar13 != false) {
        iVar11 = (int)uVar12;
        if (iVar11 != iVar10) {
          memmove((void *)((longlong)iVar11 * 0x20 + lVar1),
                  (void *)((longlong)iVar10 * 0x20 + lVar1),(longlong)iVar7 << 5);
        }
        uVar12 = (ulonglong)(uint)(iVar11 + iVar7);
      }
      bVar13 = (bool)(bVar13 ^ 1);
    } while ((longlong)uVar6 < lVar4);
    iVar10 = iVar3 - (int)uVar12;
    *(int *)&(this->Metadata).DefaultInterface.OutputInterface._padding_ = (int)uVar12;
  }
  TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_a8,
             (TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
              *)&this->OutputSources);
  bVar13 = false;
  local_40 = '\0';
  cStack_3f = '\0';
  local_78 = (longlong *)local_a8._padding_;
  TStack_70._padding_ = local_a8._padding_;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8._padding_;
  TStack_70.UnvisitedBitMask = (undefined4)local_a8._padding_;
  TStack_70.CurrentBitIndex = local_a8._padding_._4_4_;
  uVar2 = TStack_70._16_8_;
  TStack_70.CurrentBitIndex = (int)((ulonglong)local_a8._padding_ >> 0x20);
  TStack_70._24_8_ = local_a8._padding_;
  pTStack_50 = local_a8.Set;
  iVar3 = TStack_70.CurrentBitIndex;
  TStack_70._16_8_ = uVar2;
  local_48 = (TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
              *)&this->OutputSources;
  do {
    if (*(FName *)((longlong)iVar3 * 0x40 + 0x20 + *local_78) == *param_1) {
      TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_50,iVar3);
      local_40 = '\x01';
      bVar13 = true;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    iVar3 = TStack_70.CurrentBitIndex;
  } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  if ((iVar10 < 1) || (!bVar13)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((local_40 != '\0') && (cStack_3f != '\0')) {
    uVar9 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
    if (uVar9 < 4) {
      iVar3 = 1;
    }
    else {
      uVar6 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((0 < (int)uVar9) && (local_48->HashSize < iVar3)) || (iVar3 < local_48->HashSize)) {
      local_48->HashSize = iVar3;
      TSet<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource,0>,FDefaultSetAllocator>
      ::Rehash(local_48);
    }
  }
  return bVar13;
}

// SetDefaultInput @ 14ad633c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall Metasound::FGraph::SetDefaultInput(FGraph *this,FName *param_1,FLiteral *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  INode *pIVar4;
  code *pcVar5;
  FLiteral *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FGuid *pFVar10;
  FDeprecationNodeStorageAdapter *pFVar11;
  FInputDataVertex *this_00;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  FInputDataVertex *pFVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  FLiteral *local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this_00 = (FInputDataVertex *)(this->Metadata).DefaultInterface.InputInterface._padding_;
  pFVar19 = this_00 + (int)(this->Metadata).DefaultInterface.InputInterface._padding_;
  if (this_00 == pFVar19) {
    return;
  }
  while ((FName)this_00->_padding_ != *param_1) {
    this_00 = this_00 + 1;
    if (this_00 == pFVar19) {
      return;
    }
  }
  local_res18 = param_2;
  FInputDataVertex::SetDefaultLiteral(this_00,param_2);
  iVar16 = 0;
  puVar1 = &(this->InputDestinations).field_0x10;
  iVar3 = *(int *)&(this->InputDestinations).field_0x28;
  uVar8 = 1;
  iVar18 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->InputDestinations).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ad634de;
      uVar15 = puVar20[lVar12 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar9 = iVar18 + -1 + local_res20;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14ad634de:
  uVar15 = *(uint *)&(this->InputDestinations).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar16);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar18;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->InputDestinations).field_0x8 -
                       *(int *)&(this->InputDestinations).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->InputDestinations).field_0x28;
  if (uVar15 != uVar8) {
    puVar17 = *(undefined1 **)&(this->InputDestinations).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ad635e1;
      uVar15 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_14ad635e1:
  while( true ) {
    if (*(int *)&(this->InputDestinations).field_0x8 - *(int *)&(this->InputDestinations).field_0x34
        != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pFVar6 = local_res18;
    if ((TStack_70.CurrentBitIndex == uVar15) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    plVar13 = (longlong *)
              (*(longlong *)&this->InputDestinations + (longlong)TStack_70.CurrentBitIndex * 0x58);
    if (*(FName *)(plVar13 + 1) == *param_1) break;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  FInputDataVertex::SetDefaultLiteral((FInputDataVertex *)(plVar13 + 3),local_res18);
  if ((longlong *)*plVar13 == (longlong *)0x0) {
    return;
  }
  pFVar10 = (FGuid *)(**(code **)(*(longlong *)*plVar13 + 0x10))();
  pFVar11 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
            ::Find(&this->Nodes,pFVar10);
  if (pFVar11 == (FDeprecationNodeStorageAdapter *)0x0) {
    return;
  }
  pIVar4 = pFVar11->MutableNode;
  if (pIVar4 == (INode *)0x0) {
    return;
  }
  (**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,param_1,pFVar6);
  return;
}

// SetNodeDefaultInput @ 14ad63ab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FGraph::SetNodeDefaultInput(FGraph *this,FGuid *param_1,FName *param_2,FLiteral *param_3)

{
  INode *pIVar1;
  FDeprecationNodeStorageAdapter *pFVar2;
  FName *this_00;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->Nodes,param_1);
  if ((pFVar2 == (FDeprecationNodeStorageAdapter *)0x0) ||
     (pIVar1 = pFVar2->MutableNode, pIVar1 == (INode *)0x0)) {
    if (1 < (byte)LogMetaSound._0_1_) {
      this_00 = (FName *)(**(code **)(this->_padding_ + 8))(this);
      ::FName::ToString(this_00,&local_18);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      FGuid::AppendString(param_1,&local_38,Digits);
      ::FName::ToString(param_2,&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_2,param_3);
  }
  return;
}

// SetVertexInterface @ 14ad64c50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __thiscall Metasound::FGraph::SetVertexInterface(FGraph *this,FVertexInterface *param_1)

{
  bool bVar1;
  
  bVar1 = Metasound::operator==(param_1,&(this->Metadata).DefaultInterface);
  return bVar1;
}

