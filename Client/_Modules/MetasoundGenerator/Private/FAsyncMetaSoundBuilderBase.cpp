// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 3

// FAsyncMetaSoundBuilderBase @ 14b2a6240

FAsyncMetaSoundBuilderBase * __thiscall
Metasound::FAsyncMetaSoundBuilderBase::FAsyncMetaSoundBuilderBase
          (FAsyncMetaSoundBuilderBase *this,FMetasoundGenerator *param_1,bool param_2)

{
  this->Generator = param_1;
  this->_padding_ = (longlong)&___7FAsyncMetaSoundBuilderBase_Metasound__6B_;
  this->bTriggerGenerator = param_2;
  return this;
}

// ~FAsyncMetaSoundBuilderBase @ 14b2a7d50

void __thiscall
Metasound::FAsyncMetaSoundBuilderBase::~FAsyncMetaSoundBuilderBase(FAsyncMetaSoundBuilderBase *this)

{
  return;
}

// SetGraphOnGenerator @ 14b2b80e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FAsyncMetaSoundBuilderBase::SetGraphOnGenerator
          (FAsyncMetaSoundBuilderBase *this,FOperatorAndInputs *param_1,FBuildResults *param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  TUniquePtr<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData>_>
  *pTVar2;
  bool bVar3;
  undefined8 *puVar4;
  FMetasoundGenerator *pFVar5;
  FGeneratorInitParams *pFVar6;
  TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
  TVar7;
  FMetasoundGeneratorData *pFVar8;
  FMetasoundGeneratorData *this_00;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [24];
  undefined8 local_170;
  FMetasoundGeneratorData local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar6 = (FGeneratorInitParams *)(**(code **)(this->_padding_ + 8))();
  if ((param_1->Operator).Ptr == (IOperator *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      FTopLevelAssetPath::ToString(&pFVar6->AssetPath,(FString *)local_188);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._0_8_);
      }
    }
    pFVar5 = this->Generator;
    pFVar1 = &pFVar5->PendingGraphMutex;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar8 = (pFVar5->PendingGraphData).Ptr;
      if (pFVar8 != (FMetasoundGeneratorData *)0x0) {
        (pFVar5->PendingGraphData).Ptr = (FMetasoundGeneratorData *)0x0;
        MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(pFVar8);
        ::operator_delete(pFVar8,0x120);
      }
      pFVar5->bPendingGraphTrigger = '\0';
      pFVar5->bIsNewGraphPending = '\x01';
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  this_00 = (FMetasoundGeneratorData *)0x0;
  pFVar8 = this_00;
  if ((pFVar6->BuilderSettings).bPopulateInternalDataReferences != false) {
    TVar7 = GeneratorBuilder::BuildGraphAnalyzer
                      ((TMap<FGuid,Metasound::FDataReferenceCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>_>
                        *)local_188,(FMetasoundEnvironment *)&param_2->InternalDataReferences,
                       (FOperatorSettings *)&pFVar6->Environment);
    if ((FGraphAnalyzer *)(local_188 + 0x10) != TVar7.Ptr) {
      pFVar8 = *(FMetasoundGeneratorData **)&(TVar7.Ptr)->OperatorSettings;
      ((TVar7.Ptr)->OperatorSettings).SampleRate = 0;
      ((TVar7.Ptr)->OperatorSettings).TargetBlockRate = 0.0;
    }
    if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
      *(undefined4 *)(local_188._0_8_ + 0x78) = 0;
      if (*(void **)(local_188._0_8_ + 0x70) != (void *)0x0) {
        FMemory::Free(*(void **)(local_188._0_8_ + 0x70));
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_188._0_8_ + 0x30));
      DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
                (*(TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                   **)(local_188._0_8_ + 0x20),*(int *)(local_188._0_8_ + 0x28));
      if (*(void **)(local_188._0_8_ + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)(local_188._0_8_ + 0x20));
      }
      puVar4 = *(undefined8 **)(local_188._0_8_ + 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      ::operator_delete((void *)local_188._0_8_,0x80);
    }
  }
  local_188._0_8_ = pFVar8;
  GeneratorBuilder::BuildGeneratorData
            (&local_168,&this->Generator->OperatorSettings,pFVar6,param_1,
             (FGraphAnalyzer *)local_188);
  pFVar5 = this->Generator;
  bVar3 = this->bTriggerGenerator;
  pFVar1 = &pFVar5->PendingGraphMutex;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  pFVar8 = ::operator_new(0x120);
  if (pFVar8 != (FMetasoundGeneratorData *)0x0) {
    this_00 = MetasoundGeneratorPrivate::FMetasoundGeneratorData::FMetasoundGeneratorData
                        (pFVar8,&local_168);
  }
  pTVar2 = &pFVar5->PendingGraphData;
  if (pTVar2 == (TUniquePtr<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData,TDefaultDelete<Metasound::MetasoundGeneratorPrivate::FMetasoundGeneratorData>_>
                 *)&local_170) {
    if (this_00 == (FMetasoundGeneratorData *)0x0) goto LAB_14b2b8261;
    MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(this_00);
  }
  else {
    pFVar8 = pTVar2->Ptr;
    pTVar2->Ptr = this_00;
    if (pFVar8 == (FMetasoundGeneratorData *)0x0) goto LAB_14b2b8261;
    MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(pFVar8);
    this_00 = pFVar8;
  }
  ::operator_delete(this_00,0x120);
LAB_14b2b8261:
  pFVar5->field_0x250 = (bVar3 << 3 ^ pFVar5->field_0x250) & 8U ^ pFVar5->field_0x250 | 0x10;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  MetasoundGeneratorPrivate::FMetasoundGeneratorData::~FMetasoundGeneratorData(&local_168);
  return;
}

