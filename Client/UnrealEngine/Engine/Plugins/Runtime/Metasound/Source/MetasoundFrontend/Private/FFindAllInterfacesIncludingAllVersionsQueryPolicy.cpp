// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// BuildResult @ 14ae65190

TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Frontend::FFindAllInterfacesIncludingAllVersionsQueryPolicy::BuildResult
          (TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  SearchEngineQuerySteps::BuildArrayOfInterfacesFromPartition(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateQuery @ 14ae6b8d0

FFrontendQuery * __cdecl
Metasound::Frontend::FFindAllInterfacesIncludingAllVersionsQueryPolicy::CreateQuery
          (FFrontendQuery *__return_storage_ptr__)

{
  FFrontendQuery *pFVar1;
  
  FFrontendQuery::FFrontendQuery(__return_storage_ptr__);
  pFVar1 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource>
                     (__return_storage_ptr__);
  pFVar1 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys>
                     (pFVar1);
  pFVar1 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus>
                     (pFVar1);
  pFVar1 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FTransformInterfaceRegistryTransactionToInterface>
                     (pFVar1);
  FFrontendQuery::AddStep<Metasound::FMapToNull>(pFVar1);
  return __return_storage_ptr__;
}

