// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// BuildResult @ 14ae65170

TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy::BuildResult
          (TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  SearchEngineQuerySteps::BuildArrayOfVersionsFromPartition(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateQuery @ 14ae6b6b0

FFrontendQuery * __cdecl
Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy::CreateQuery
          (FFrontendQuery *__return_storage_ptr__)

{
  FFrontendQueryStep FVar1;
  bool bVar2;
  IStepExecuter IVar3;
  FFrontendQuery *pFVar4;
  IStepExecuter IVar5;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar6;
  IStepExecuter *pIVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res8;
  
  bVar2 = false;
  local_res8.Ptr = (FFrontendQueryStep *)((ulonglong)local_res8.Ptr & 0xffffffff00000000);
  FFrontendQuery::FFrontendQuery(__return_storage_ptr__);
  pFVar4 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource>
                     (__return_storage_ptr__);
  pFVar4 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys>
                     (pFVar4);
  pFVar4 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus>
                     (pFVar4);
  pFVar4 = FFrontendQuery::
           AddStep<Metasound::Frontend::SearchEngineQuerySteps::FTransformInterfaceRegistryTransactionToInterface>
                     (pFVar4);
  IVar5 = (IStepExecuter)::operator_new(8);
  if (IVar5 == (IStepExecuter)0x0) {
    IVar5 = (IStepExecuter)0x0;
  }
  else {
    *(undefined ***)IVar5 =
         &___7FMapUClassToDefaultInterface_SearchEngineQuerySteps_Frontend_Metasound__6B_;
  }
  TVar6.Ptr = ::operator_new(8);
  if (&(TVar6.Ptr)->StepExecuter ==
      (TUniquePtr<Metasound::FFrontendQueryStep::IStepExecuter,TDefaultDelete<Metasound::FFrontendQueryStep::IStepExecuter>_>
       *)0x0) {
    TVar6.Ptr = (FFrontendQueryStep *)0x0;
  }
  else {
    pIVar7 = ::operator_new(0x10);
    if (pIVar7 == (IStepExecuter *)0x0) {
      ((TVar6.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      bVar2 = true;
      local_res8.Ptr = (FFrontendQueryStep *)IVar5;
      IVar5 = (IStepExecuter)0x0;
    }
    else {
      pIVar7[1] = IVar5;
      *pIVar7 = (IStepExecuter)&___7FMultiMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar6.Ptr)->StepExecuter).Ptr = pIVar7;
      bVar2 = true;
      local_res8.Ptr = (FFrontendQueryStep *)(IStepExecuter)0x0;
      IVar5 = (IStepExecuter)0x0;
    }
  }
  if ((bVar2) && ((IStepExecuter)local_res8.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res8.Ptr)->StepExecuter;
    IVar3 = (IStepExecuter)local_res8.Ptr;
    local_res8.Ptr = TVar6.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar3,1);
    TVar6.Ptr = local_res8.Ptr;
  }
  local_res8.Ptr = TVar6.Ptr;
  bVar2 = false;
  pFVar4 = FFrontendQuery::AddStep(pFVar4,&local_res8);
  TVar6.Ptr = local_res8.Ptr;
  if (&(local_res8.Ptr)->StepExecuter !=
      (TUniquePtr<Metasound::FFrontendQueryStep::IStepExecuter,TDefaultDelete<Metasound::FFrontendQueryStep::IStepExecuter>_>
       *)0x0) {
    pIVar7 = ((local_res8.Ptr)->StepExecuter).Ptr;
    if (pIVar7 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar7)(pIVar7,1);
    }
    ::operator_delete(TVar6.Ptr,8);
  }
  if (IVar5 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar5)(IVar5,1);
  }
  IVar5 = (IStepExecuter)::operator_new(8);
  if (IVar5 == (IStepExecuter)0x0) {
    IVar5 = (IStepExecuter)0x0;
  }
  else {
    *(undefined ***)IVar5 =
         &___7FTransformInterfaceToInterfaceVersion_SearchEngineQuerySteps_Frontend_Metasound__6B_;
  }
  TVar6.Ptr = ::operator_new(8);
  if (TVar6.Ptr == (FFrontendQueryStep *)0x0) {
    TVar6.Ptr = (FFrontendQueryStep *)0x0;
  }
  else {
    bVar2 = true;
    pIVar7 = ::operator_new(0x10);
    if (pIVar7 == (IStepExecuter *)0x0) {
      ((TVar6.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res8.Ptr = (FFrontendQueryStep *)IVar5;
      IVar5 = (IStepExecuter)0x0;
    }
    else {
      pIVar7[1] = IVar5;
      *pIVar7 = (IStepExecuter)&___7FTransformStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar6.Ptr)->StepExecuter).Ptr = pIVar7;
      local_res8.Ptr = (FFrontendQueryStep *)(IStepExecuter)0x0;
      IVar5 = (IStepExecuter)0x0;
    }
  }
  if ((bVar2) && ((IStepExecuter)local_res8.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res8.Ptr)->StepExecuter;
    IVar3 = (IStepExecuter)local_res8.Ptr;
    local_res8.Ptr = TVar6.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar3,1);
    TVar6.Ptr = local_res8.Ptr;
  }
  local_res8.Ptr = TVar6.Ptr;
  FFrontendQuery::AddStep(pFVar4,&local_res8);
  TVar6.Ptr = local_res8.Ptr;
  if (local_res8.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar7 = ((local_res8.Ptr)->StepExecuter).Ptr;
    if (pIVar7 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar7)(pIVar7,1);
    }
    ::operator_delete(TVar6.Ptr,8);
  }
  if (IVar5 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar5)(IVar5,1);
  }
  return __return_storage_ptr__;
}

