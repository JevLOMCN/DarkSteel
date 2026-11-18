// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// BuildResult @ 14ae651b0

TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Frontend::FFindAllInterfacesQueryPolicy::BuildResult
          (TArray<FMetasoundFrontendInterface,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  SearchEngineQuerySteps::BuildArrayOfInterfacesFromPartition(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateQuery @ 14ae6b920

FFrontendQuery * __cdecl
Metasound::Frontend::FFindAllInterfacesQueryPolicy::CreateQuery
          (FFrontendQuery *__return_storage_ptr__)

{
  FFrontendQueryStep FVar1;
  FFrontendQuery *pFVar2;
  IStepExecuter IVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar4;
  IStepExecuter *pIVar5;
  IStepExecuter IVar6;
  IStepExecuter IVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res8;
  
  IVar7 = (IStepExecuter)0x0;
  local_res8.Ptr = (FFrontendQueryStep *)((ulonglong)local_res8.Ptr & 0xffffffff00000000);
  FFrontendQuery::FFrontendQuery(__return_storage_ptr__);
  pFVar2 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource>
                     (__return_storage_ptr__);
  pFVar2 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys>
                     (pFVar2);
  pFVar2 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus>
                     (pFVar2);
  pFVar2 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FTransformInterfaceRegistryTransactionToInterface>
                     (pFVar2);
  IVar3 = (IStepExecuter)::operator_new(8);
  IVar6 = IVar7;
  if (IVar3 != (IStepExecuter)0x0) {
    *(undefined ***)IVar3 =
         &
         ___7FMapInterfaceToInterfaceNameAndMajorVersion_SearchEngineQuerySteps_Frontend_Metasound__6B_
    ;
    IVar6 = IVar3;
  }
  TVar4.Ptr = ::operator_new(8);
  if (TVar4.Ptr == (FFrontendQueryStep *)0x0) {
    TVar4.Ptr = (FFrontendQueryStep *)0x0;
    IVar3 = IVar7;
  }
  else {
    pIVar5 = ::operator_new(0x10);
    if (pIVar5 == (IStepExecuter *)0x0) {
      ((TVar4.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res8.Ptr = (FFrontendQueryStep *)IVar6;
      IVar3 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
    else {
      pIVar5[1] = IVar6;
      *pIVar5 = (IStepExecuter)&___7FMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar4.Ptr)->StepExecuter).Ptr = pIVar5;
      local_res8.Ptr = (FFrontendQueryStep *)IVar7;
      IVar3 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
  }
  if ((IVar3 != (IStepExecuter)0x0) && ((IStepExecuter)local_res8.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res8.Ptr)->StepExecuter;
    IVar3 = (IStepExecuter)local_res8.Ptr;
    local_res8.Ptr = TVar4.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar3,1);
    TVar4.Ptr = local_res8.Ptr;
  }
  local_res8.Ptr = TVar4.Ptr;
  pFVar2 = FFrontendQuery::AddStep(pFVar2,&local_res8);
  TVar4.Ptr = local_res8.Ptr;
  if (local_res8.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar5 = ((local_res8.Ptr)->StepExecuter).Ptr;
    if (pIVar5 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
    ::operator_delete(TVar4.Ptr,8);
  }
  if (IVar6 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar6)(IVar6,1);
  }
  pFVar2 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfacesToHighestVersion>
                     (pFVar2);
  FFrontendQuery::AddStep<Metasound::FMapToNull>(pFVar2);
  return __return_storage_ptr__;
}

