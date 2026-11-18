// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 2

// FMetasoundGeneratorData @ 14b2a6bc0

FMetasoundGeneratorData * __thiscall
Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData::FMetasoundGeneratorData
          (FMetasoundGeneratorData *this,FMetasoundGeneratorData *param_1)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar3 = (param_1->OperatorSettings).TargetBlockRate;
  fVar4 = (param_1->OperatorSettings).ActualBlockRate;
  iVar5 = (param_1->OperatorSettings).NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = (param_1->OperatorSettings).SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar3;
  (this->OperatorSettings).ActualBlockRate = fVar4;
  (this->OperatorSettings).NumFramesPerBlock = iVar5;
  (this->GraphOperator).Ptr = (param_1->GraphOperator).Ptr;
  (param_1->GraphOperator).Ptr = (IOperator *)0x0;
  bVar1 = (param_1->VertexInterfaceData).InputVertexInterfaceData.bIsVertexInterfaceFrozen;
  (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInterfaceData).InputVertexInterfaceData.bIsVertexInterfaceFrozen = bVar1;
  (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (param_1->VertexInterfaceData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  (param_1->VertexInterfaceData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum =
       (param_1->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum;
  (this->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayMax =
       (param_1->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayMax;
  (param_1->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum = 0;
  (param_1->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayMax = 0;
  (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (param_1->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data;
  (param_1->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayNum =
       (param_1->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayNum;
  (this->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayMax =
       (param_1->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayMax;
  (param_1->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  (param_1->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  bVar1 = (param_1->VertexInterfaceData).OutputVertexInterfaceData.bIsVertexInterfaceFrozen;
  (this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInterfaceData).OutputVertexInterfaceData.bIsVertexInterfaceFrozen = bVar1;
  (this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (param_1->VertexInterfaceData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  (param_1->VertexInterfaceData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayNum =
       (param_1->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayNum;
  (this->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayMax =
       (param_1->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayMax;
  (param_1->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayNum = 0;
  (param_1->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayMax = 0;
  (this->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (param_1->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data
  ;
  (param_1->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.ArrayNum =
       (param_1->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.ArrayNum;
  (this->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.ArrayMax =
       (param_1->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.ArrayMax;
  (param_1->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  (param_1->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  (this->ParameterSetters).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterSetters).Pairs.AllocatorInstance.Data =
       (param_1->ParameterSetters).Pairs.AllocatorInstance.Data;
  (param_1->ParameterSetters).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterSetters).Pairs.ArrayNum = (param_1->ParameterSetters).Pairs.ArrayNum;
  (this->ParameterSetters).Pairs.ArrayMax = (param_1->ParameterSetters).Pairs.ArrayMax;
  (param_1->ParameterSetters).Pairs.ArrayNum = 0;
  (param_1->ParameterSetters).Pairs.ArrayMax = 0;
  *(undefined8 *)&(this->ParameterPackSetters).field_0x0 = 0;
  *(undefined8 *)&(this->ParameterPackSetters).field_0x8 = 0;
  *(undefined8 *)&(this->ParameterPackSetters).field_0x20 = 0;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x28 = 0;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x34 = 0;
  *(undefined8 *)&(this->ParameterPackSetters).field_0x40 = 0;
  *(undefined4 *)&(this->ParameterPackSetters).field_0x48 = 0;
  TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
              *)&this->ParameterPackSetters,
             (TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
              *)&param_1->ParameterPackSetters);
  (this->GraphAnalyzer).Ptr = (param_1->GraphAnalyzer).Ptr;
  (param_1->GraphAnalyzer).Ptr = (FGraphAnalyzer *)0x0;
  (this->OutputBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBuffers).AllocatorInstance.Data = (param_1->OutputBuffers).AllocatorInstance.Data;
  (param_1->OutputBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBuffers).ArrayNum = (param_1->OutputBuffers).ArrayNum;
  (this->OutputBuffers).ArrayMax = (param_1->OutputBuffers).ArrayMax;
  (param_1->OutputBuffers).ArrayNum = 0;
  (param_1->OutputBuffers).ArrayMax = 0;
  *(undefined ***)&this->TriggerOnPlayRef =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerOnPlayRef).field_0x8 =
       *(undefined8 *)&(param_1->TriggerOnPlayRef).field_0x8;
  lVar2 = *(longlong *)&(param_1->TriggerOnPlayRef).field_0x10;
  *(longlong *)&(this->TriggerOnPlayRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->TriggerOnPlayRef =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerOnFinishRef =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerOnFinishRef).field_0x8 =
       *(undefined8 *)&(param_1->TriggerOnFinishRef).field_0x8;
  lVar2 = *(longlong *)&(param_1->TriggerOnFinishRef).field_0x10;
  *(longlong *)&(this->TriggerOnFinishRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->TriggerOnFinishRef =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  return this;
}

// ~FMetasoundGeneratorData @ 14b2a8420

void __thiscall
Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData
          (FMetasoundGeneratorData *this)

{
  FScriptContainerElement *pFVar1;
  FGraphAnalyzer *pFVar2;
  void *pvVar3;
  IReceiver *pIVar4;
  IOperator *pIVar5;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnFinishRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnPlayRef).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->OutputBuffers).AllocatorInstance.Data,(this->OutputBuffers).ArrayNum);
  pFVar1 = (this->OutputBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->GraphAnalyzer).Ptr;
  if (pFVar2 != (FGraphAnalyzer *)0x0) {
    *(undefined4 *)&(pFVar2->InternalDataReferences).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar2->InternalDataReferences).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar2->InternalDataReferences);
    DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
              ((TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                *)(pFVar2->Analyzers).AllocatorInstance.Data,(pFVar2->Analyzers).ArrayNum);
    pFVar1 = (pFVar2->Analyzers).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pIVar4 = (pFVar2->ActiveAnalyzerReceiver).Ptr;
    if (pIVar4 != (IReceiver *)0x0) {
      (**(code **)pIVar4->_padding_)(pIVar4,1);
    }
    ::operator_delete(pFVar2,0x80);
  }
  *(undefined4 *)&(this->ParameterPackSetters).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ParameterPackSetters).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParameterPackSetters);
  DestructItems<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,int>
            ((TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)
             (this->ParameterSetters).Pairs.AllocatorInstance.Data,
             (this->ParameterSetters).Pairs.ArrayNum);
  pFVar1 = (this->ParameterSetters).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVertexInterfaceData::~FVertexInterfaceData(&this->VertexInterfaceData);
  pIVar5 = (this->GraphOperator).Ptr;
  if (pIVar5 != (IOperator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b2a8540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar5)(pIVar5,1);
    return;
  }
  return;
}

