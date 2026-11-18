// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 4

// FGeneratorInitParams @ 14b2a6470

FGeneratorInitParams * __thiscall
Metasound::FGeneratorInitParams::FGeneratorInitParams
          (FGeneratorInitParams *this,FGeneratorInitParams *param_1)

{
  FGraphRenderCost *pFVar1;
  FName FVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  fVar3 = (param_1->OperatorSettings).TargetBlockRate;
  fVar4 = (param_1->OperatorSettings).ActualBlockRate;
  iVar5 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar3;
  (this->OperatorSettings).ActualBlockRate = fVar4;
  (this->OperatorSettings).NumFramesPerBlock = iVar5;
  bVar6 = (param_1->BuilderSettings).bValidateNoCyclesInGraph;
  bVar7 = (param_1->BuilderSettings).bValidateNoDuplicateInputs;
  bVar8 = (param_1->BuilderSettings).bValidateVerticesExist;
  bVar9 = (param_1->BuilderSettings).bValidateEdgeDataTypesMatch;
  bVar10 = (param_1->BuilderSettings).bValidateOperatorOutputsAreBound;
  bVar11 = (param_1->BuilderSettings).bFailOnAnyError;
  bVar12 = (param_1->BuilderSettings).bPopulateInternalDataReferences;
  (this->BuilderSettings).PruningMode = (param_1->BuilderSettings).PruningMode;
  (this->BuilderSettings).bValidateNoCyclesInGraph = bVar6;
  (this->BuilderSettings).bValidateNoDuplicateInputs = bVar7;
  (this->BuilderSettings).bValidateVerticesExist = bVar8;
  (this->BuilderSettings).bValidateEdgeDataTypesMatch = bVar9;
  (this->BuilderSettings).bValidateOperatorOutputsAreBound = bVar10;
  (this->BuilderSettings).bFailOnAnyError = bVar11;
  (this->BuilderSettings).bPopulateInternalDataReferences = bVar12;
  bVar6 = (param_1->BuilderSettings).bProfileOperators;
  (this->BuilderSettings).bEnableOperatorRebind = (param_1->BuilderSettings).bEnableOperatorRebind;
  (this->BuilderSettings).bProfileOperators = bVar6;
  (this->Graph).Object = (param_1->Graph).Object;
  (this->Graph).SharedReferenceCount.ReferenceController =
       (param_1->Graph).SharedReferenceCount.ReferenceController;
  (param_1->Graph).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Graph).Object = (IGraph *)0x0;
  FMetasoundEnvironment::FMetasoundEnvironment(&this->Environment,&param_1->Environment);
  (this->AudioOutputNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputNames).AllocatorInstance.Data =
       (param_1->AudioOutputNames).AllocatorInstance.Data;
  (param_1->AudioOutputNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputNames).ArrayNum = (param_1->AudioOutputNames).ArrayNum;
  (this->AudioOutputNames).ArrayMax = (param_1->AudioOutputNames).ArrayMax;
  (param_1->AudioOutputNames).ArrayNum = 0;
  (param_1->AudioOutputNames).ArrayMax = 0;
  (this->DefaultParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultParameters).AllocatorInstance.Data =
       (param_1->DefaultParameters).AllocatorInstance.Data;
  (param_1->DefaultParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultParameters).ArrayNum = (param_1->DefaultParameters).ArrayNum;
  (this->DefaultParameters).ArrayMax = (param_1->DefaultParameters).ArrayMax;
  (param_1->DefaultParameters).ArrayNum = 0;
  (param_1->DefaultParameters).ArrayMax = 0;
  this->bBuildSynchronous = param_1->bBuildSynchronous;
  (this->DataChannel).Object = (param_1->DataChannel).Object;
  (this->DataChannel).SharedReferenceCount.ReferenceController =
       (param_1->DataChannel).SharedReferenceCount.ReferenceController;
  pFVar1 = (param_1->GraphRenderCost).Object;
  (param_1->DataChannel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->DataChannel).Object =
       (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)0x0;
  (this->GraphRenderCost).Object = pFVar1;
  (this->GraphRenderCost).SharedReferenceCount.ReferenceController =
       (param_1->GraphRenderCost).SharedReferenceCount.ReferenceController;
  (param_1->GraphRenderCost).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->GraphRenderCost).Object = (FGraphRenderCost *)0x0;
  this->ClassName = param_1->ClassName;
  FVar2 = (param_1->AssetPath).AssetName;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar2;
  return this;
}

// FGeneratorInitParams @ 14b2a6580

FGeneratorInitParams * __thiscall
Metasound::FGeneratorInitParams::FGeneratorInitParams
          (FGeneratorInitParams *this,FGeneratorInitParams *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *_Src;
  FAudioParameter *pFVar6;
  FName FVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  fVar8 = (param_1->OperatorSettings).TargetBlockRate;
  fVar9 = (param_1->OperatorSettings).ActualBlockRate;
  iVar4 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar8;
  (this->OperatorSettings).ActualBlockRate = fVar9;
  (this->OperatorSettings).NumFramesPerBlock = iVar4;
  bVar10 = (param_1->BuilderSettings).bValidateNoCyclesInGraph;
  bVar11 = (param_1->BuilderSettings).bValidateNoDuplicateInputs;
  bVar12 = (param_1->BuilderSettings).bValidateVerticesExist;
  bVar13 = (param_1->BuilderSettings).bValidateEdgeDataTypesMatch;
  bVar14 = (param_1->BuilderSettings).bValidateOperatorOutputsAreBound;
  bVar15 = (param_1->BuilderSettings).bFailOnAnyError;
  bVar16 = (param_1->BuilderSettings).bPopulateInternalDataReferences;
  (this->BuilderSettings).PruningMode = (param_1->BuilderSettings).PruningMode;
  (this->BuilderSettings).bValidateNoCyclesInGraph = bVar10;
  (this->BuilderSettings).bValidateNoDuplicateInputs = bVar11;
  (this->BuilderSettings).bValidateVerticesExist = bVar12;
  (this->BuilderSettings).bValidateEdgeDataTypesMatch = bVar13;
  (this->BuilderSettings).bValidateOperatorOutputsAreBound = bVar14;
  (this->BuilderSettings).bFailOnAnyError = bVar15;
  (this->BuilderSettings).bPopulateInternalDataReferences = bVar16;
  bVar10 = (param_1->BuilderSettings).bProfileOperators;
  (this->BuilderSettings).bEnableOperatorRebind = (param_1->BuilderSettings).bEnableOperatorRebind;
  (this->BuilderSettings).bProfileOperators = bVar10;
  (this->Graph).Object = (param_1->Graph).Object;
  pTVar5 = (param_1->Graph).SharedReferenceCount.ReferenceController;
  (this->Graph).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMetasoundEnvironment::FMetasoundEnvironment(&this->Environment,&param_1->Environment);
  pTVar1 = &this->AudioOutputNames;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AudioOutputNames).ArrayMax;
  iVar4 = (param_1->AudioOutputNames).ArrayNum;
  _Src = (param_1->AudioOutputNames).AllocatorInstance.Data;
  (this->AudioOutputNames).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
  }
  pTVar3 = &this->DefaultParameters;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DefaultParameters).ArrayMax;
  iVar4 = (param_1->DefaultParameters).ArrayNum;
  pFVar6 = (FAudioParameter *)(param_1->DefaultParameters).AllocatorInstance.Data;
  (this->DefaultParameters).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FAudioParameter,FAudioParameter,int>
              ((pTVar3->AllocatorInstance).Data,pFVar6,iVar4);
  }
  this->bBuildSynchronous = param_1->bBuildSynchronous;
  (this->DataChannel).Object = (param_1->DataChannel).Object;
  pTVar5 = (param_1->DataChannel).SharedReferenceCount.ReferenceController;
  (this->DataChannel).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->GraphRenderCost).Object = (param_1->GraphRenderCost).Object;
  pTVar5 = (param_1->GraphRenderCost).SharedReferenceCount.ReferenceController;
  (this->GraphRenderCost).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ClassName = param_1->ClassName;
  FVar7 = (param_1->AssetPath).AssetName;
  (this->AssetPath).PackageName = (param_1->AssetPath).PackageName;
  (this->AssetPath).AssetName = FVar7;
  return this;
}

// ~FGeneratorInitParams @ 14b2a7e60

void __thiscall Metasound::FGeneratorInitParams::~FGeneratorInitParams(FGeneratorInitParams *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GraphRenderCost).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataChannel).SharedReferenceCount.ReferenceController);
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->DefaultParameters).AllocatorInstance.Data,
             (this->DefaultParameters).ArrayNum);
  pFVar1 = (this->DefaultParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioOutputNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
            ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
              *)(this->Environment).Variables.Pairs.AllocatorInstance.Data,
             (this->Environment).Variables.Pairs.ArrayNum);
  pFVar1 = (this->Environment).Variables.Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Graph).SharedReferenceCount.ReferenceController);
  return;
}

// Reset @ 14b2b73f0

void __cdecl Metasound::FGeneratorInitParams::Reset(FGeneratorInitParams *param_1)

{
  FMetasoundEnvironment local_38;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_38.Variables.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Variables.Pairs.ArrayNum = 0;
  local_38.Variables.Pairs.ArrayMax = 0;
  FMetasoundEnvironment::operator=(&param_1->Environment,&local_38);
  DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
            ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
              *)local_38.Variables.Pairs.AllocatorInstance.Data,local_38.Variables.Pairs.ArrayNum);
  if ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
       *)local_38.Variables.Pairs.AllocatorInstance.Data !=
      (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
       *)0x0) {
    FMemory::Free(local_38.Variables.Pairs.AllocatorInstance.Data);
  }
  (param_1->AssetPath).AssetName.ComparisonIndex = 0;
  (param_1->AssetPath).AssetName.Number = 0;
  (param_1->AssetPath).PackageName.ComparisonIndex = 0;
  (param_1->AssetPath).PackageName.Number = 0;
  TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
            (&param_1->AudioOutputNames,(FName *)0x0,0,(param_1->AudioOutputNames).ArrayMax);
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(param_1->DefaultParameters).AllocatorInstance.Data,
             (param_1->DefaultParameters).ArrayNum);
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::CopyToEmpty<FAudioParameter,int>
            (&param_1->DefaultParameters,(FAudioParameter *)0x0,0,
             (param_1->DefaultParameters).ArrayMax);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&param_1->DataChannel !=
      (TSharedPtr<TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory>,1> *)
      &local_28) {
    (param_1->DataChannel).Object =
         (TSpscQueue<Metasound::FMetaSoundParameterTransmitter::FParameter,FMemory> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->DataChannel).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&param_1->GraphRenderCost != (TSharedPtr<Metasound::FGraphRenderCost,1> *)&local_18) {
    (param_1->GraphRenderCost).Object = (FGraphRenderCost *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->GraphRenderCost).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

