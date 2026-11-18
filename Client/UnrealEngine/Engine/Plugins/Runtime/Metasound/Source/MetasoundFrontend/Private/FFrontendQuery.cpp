// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 22

// AddStep<Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource> @ 14ae4a890

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::
AddStep<Metasound::Frontend::SearchEngineQuerySteps::FInterfaceRegistryTransactionSource>
          (FFrontendQuery *this)

{
  FFrontendQueryStep FVar1;
  IStepExecuter IVar2;
  FInterfaceRegistry *this_00;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar3;
  IStepExecuter *pIVar4;
  FFrontendQuery *pFVar5;
  IStepExecuter IVar6;
  IStepExecuter IVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res10;
  
  IVar7 = (IStepExecuter)0x0;
  local_res10.Ptr = (FFrontendQueryStep *)((ulonglong)local_res10.Ptr & 0xffffffff00000000);
  IVar2 = (IStepExecuter)::operator_new(0x10);
  IVar6 = IVar7;
  if (IVar2 != (IStepExecuter)0x0) {
    *(undefined ***)IVar2 =
         &___7FInterfaceRegistryTransactionSource_SearchEngineQuerySteps_Frontend_Metasound__6B_;
    this_00 = Frontend::FInterfaceRegistry::Get();
    Frontend::FInterfaceRegistry::CreateTransactionStream(this_00);
    IVar6 = IVar2;
  }
  TVar3.Ptr = ::operator_new(8);
  if (TVar3.Ptr == (FFrontendQueryStep *)0x0) {
    TVar3.Ptr = (FFrontendQueryStep *)0x0;
    IVar2 = IVar7;
  }
  else {
    pIVar4 = ::operator_new(0x10);
    if (pIVar4 == (IStepExecuter *)0x0) {
      ((TVar3.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res10.Ptr = (FFrontendQueryStep *)IVar6;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
    else {
      pIVar4[1] = IVar6;
      *pIVar4 = (IStepExecuter)&___7FStreamStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar3.Ptr)->StepExecuter).Ptr = pIVar4;
      local_res10.Ptr = (FFrontendQueryStep *)IVar7;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
  }
  if ((IVar2 != (IStepExecuter)0x0) && ((IStepExecuter)local_res10.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res10.Ptr)->StepExecuter;
    IVar2 = (IStepExecuter)local_res10.Ptr;
    local_res10.Ptr = TVar3.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar2,1);
    TVar3.Ptr = local_res10.Ptr;
  }
  local_res10.Ptr = TVar3.Ptr;
  pFVar5 = AddStep(this,&local_res10);
  TVar3.Ptr = local_res10.Ptr;
  if (local_res10.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar4 = ((local_res10.Ptr)->StepExecuter).Ptr;
    if (pIVar4 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    ::operator_delete(TVar3.Ptr,8);
  }
  if (IVar6 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar6)(IVar6,1);
  }
  return pFVar5;
}

// AddStep<Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys> @ 14ae4a9c0

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::
AddStep<Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys>
          (FFrontendQuery *this)

{
  FFrontendQueryStep FVar1;
  IStepExecuter IVar2;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar3;
  IStepExecuter *pIVar4;
  FFrontendQuery *pFVar5;
  IStepExecuter IVar6;
  IStepExecuter IVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res10;
  
  IVar7 = (IStepExecuter)0x0;
  local_res10.Ptr = (FFrontendQueryStep *)((ulonglong)local_res10.Ptr & 0xffffffff00000000);
  IVar2 = (IStepExecuter)::operator_new(8);
  IVar6 = IVar7;
  if (IVar2 != (IStepExecuter)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7FMapInterfaceRegistryTransactionsToInterfaceRegistryKeys_SearchEngineQuerySteps_Frontend_Metasound__6B_
    ;
    IVar6 = IVar2;
  }
  TVar3.Ptr = ::operator_new(8);
  if (TVar3.Ptr == (FFrontendQueryStep *)0x0) {
    TVar3.Ptr = (FFrontendQueryStep *)0x0;
    IVar2 = IVar7;
  }
  else {
    pIVar4 = ::operator_new(0x10);
    if (pIVar4 == (IStepExecuter *)0x0) {
      ((TVar3.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res10.Ptr = (FFrontendQueryStep *)IVar6;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
    else {
      pIVar4[1] = IVar6;
      *pIVar4 = (IStepExecuter)&___7FMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar3.Ptr)->StepExecuter).Ptr = pIVar4;
      local_res10.Ptr = (FFrontendQueryStep *)IVar7;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
  }
  if ((IVar2 != (IStepExecuter)0x0) && ((IStepExecuter)local_res10.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res10.Ptr)->StepExecuter;
    IVar2 = (IStepExecuter)local_res10.Ptr;
    local_res10.Ptr = TVar3.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar2,1);
    TVar3.Ptr = local_res10.Ptr;
  }
  local_res10.Ptr = TVar3.Ptr;
  pFVar5 = AddStep(this,&local_res10);
  TVar3.Ptr = local_res10.Ptr;
  if (local_res10.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar4 = ((local_res10.Ptr)->StepExecuter).Ptr;
    if (pIVar4 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    ::operator_delete(TVar3.Ptr,8);
  }
  if (IVar6 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar6)(IVar6,1);
  }
  return pFVar5;
}

// AddStep<Metasound::FMapToNull> @ 14ae4aae0

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddStep<Metasound::FMapToNull>(FFrontendQuery *this)

{
  FFrontendQueryStep FVar1;
  IStepExecuter IVar2;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar3;
  IStepExecuter *pIVar4;
  FFrontendQuery *pFVar5;
  IStepExecuter IVar6;
  IStepExecuter IVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res10;
  
  IVar7 = (IStepExecuter)0x0;
  local_res10.Ptr = (FFrontendQueryStep *)((ulonglong)local_res10.Ptr & 0xffffffff00000000);
  IVar2 = (IStepExecuter)::operator_new(8);
  IVar6 = IVar7;
  if (IVar2 != (IStepExecuter)0x0) {
    *(undefined ***)IVar2 = &___7FMapToNull_Metasound__6B_;
    IVar6 = IVar2;
  }
  TVar3.Ptr = ::operator_new(8);
  if (TVar3.Ptr == (FFrontendQueryStep *)0x0) {
    TVar3.Ptr = (FFrontendQueryStep *)0x0;
    IVar2 = IVar7;
  }
  else {
    pIVar4 = ::operator_new(0x10);
    if (pIVar4 == (IStepExecuter *)0x0) {
      ((TVar3.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res10.Ptr = (FFrontendQueryStep *)IVar6;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
    else {
      pIVar4[1] = IVar6;
      *pIVar4 = (IStepExecuter)&___7FMapStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar3.Ptr)->StepExecuter).Ptr = pIVar4;
      local_res10.Ptr = (FFrontendQueryStep *)IVar7;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
  }
  if ((IVar2 != (IStepExecuter)0x0) && ((IStepExecuter)local_res10.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res10.Ptr)->StepExecuter;
    IVar2 = (IStepExecuter)local_res10.Ptr;
    local_res10.Ptr = TVar3.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar2,1);
    TVar3.Ptr = local_res10.Ptr;
  }
  local_res10.Ptr = TVar3.Ptr;
  pFVar5 = AddStep(this,&local_res10);
  TVar3.Ptr = local_res10.Ptr;
  if (local_res10.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar4 = ((local_res10.Ptr)->StepExecuter).Ptr;
    if (pIVar4 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    ::operator_delete(TVar3.Ptr,8);
  }
  if (IVar6 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar6)(IVar6,1);
  }
  return pFVar5;
}

// AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus> @ 14ae4ac00

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::
AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus>
          (FFrontendQuery *this)

{
  FFrontendQueryStep FVar1;
  IStepExecuter IVar2;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar3;
  IStepExecuter *pIVar4;
  FFrontendQuery *pFVar5;
  IStepExecuter IVar6;
  IStepExecuter IVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res10;
  
  IVar7 = (IStepExecuter)0x0;
  local_res10.Ptr = (FFrontendQueryStep *)((ulonglong)local_res10.Ptr & 0xffffffff00000000);
  IVar2 = (IStepExecuter)::operator_new(8);
  IVar6 = IVar7;
  if (IVar2 != (IStepExecuter)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7FReduceInterfaceRegistryTransactionsToCurrentStatus_SearchEngineQuerySteps_Frontend_Metasound__6B_
    ;
    IVar6 = IVar2;
  }
  TVar3.Ptr = ::operator_new(8);
  if (TVar3.Ptr == (FFrontendQueryStep *)0x0) {
    TVar3.Ptr = (FFrontendQueryStep *)0x0;
    IVar2 = IVar7;
  }
  else {
    pIVar4 = ::operator_new(0x10);
    if (pIVar4 == (IStepExecuter *)0x0) {
      ((TVar3.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res10.Ptr = (FFrontendQueryStep *)IVar6;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
    else {
      pIVar4[1] = IVar6;
      *pIVar4 = (IStepExecuter)&___7FReduceStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar3.Ptr)->StepExecuter).Ptr = pIVar4;
      local_res10.Ptr = (FFrontendQueryStep *)IVar7;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
  }
  if ((IVar2 != (IStepExecuter)0x0) && ((IStepExecuter)local_res10.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res10.Ptr)->StepExecuter;
    IVar2 = (IStepExecuter)local_res10.Ptr;
    local_res10.Ptr = TVar3.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar2,1);
    TVar3.Ptr = local_res10.Ptr;
  }
  local_res10.Ptr = TVar3.Ptr;
  pFVar5 = AddStep(this,&local_res10);
  TVar3.Ptr = local_res10.Ptr;
  if (local_res10.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar4 = ((local_res10.Ptr)->StepExecuter).Ptr;
    if (pIVar4 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    ::operator_delete(TVar3.Ptr,8);
  }
  if (IVar6 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar6)(IVar6,1);
  }
  return pFVar5;
}

// AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfacesToHighestVersion> @ 14ae4ad20

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::
AddStep<Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfacesToHighestVersion>
          (FFrontendQuery *this)

{
  FFrontendQueryStep FVar1;
  IStepExecuter IVar2;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar3;
  IStepExecuter *pIVar4;
  FFrontendQuery *pFVar5;
  IStepExecuter IVar6;
  IStepExecuter IVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res10;
  
  IVar7 = (IStepExecuter)0x0;
  local_res10.Ptr = (FFrontendQueryStep *)((ulonglong)local_res10.Ptr & 0xffffffff00000000);
  IVar2 = (IStepExecuter)::operator_new(8);
  IVar6 = IVar7;
  if (IVar2 != (IStepExecuter)0x0) {
    *(undefined ***)IVar2 =
         &___7FReduceInterfacesToHighestVersion_SearchEngineQuerySteps_Frontend_Metasound__6B_;
    IVar6 = IVar2;
  }
  TVar3.Ptr = ::operator_new(8);
  if (TVar3.Ptr == (FFrontendQueryStep *)0x0) {
    TVar3.Ptr = (FFrontendQueryStep *)0x0;
    IVar2 = IVar7;
  }
  else {
    pIVar4 = ::operator_new(0x10);
    if (pIVar4 == (IStepExecuter *)0x0) {
      ((TVar3.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res10.Ptr = (FFrontendQueryStep *)IVar6;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
    else {
      pIVar4[1] = IVar6;
      *pIVar4 = (IStepExecuter)&___7FReduceStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar3.Ptr)->StepExecuter).Ptr = pIVar4;
      local_res10.Ptr = (FFrontendQueryStep *)IVar7;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
  }
  if ((IVar2 != (IStepExecuter)0x0) && ((IStepExecuter)local_res10.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res10.Ptr)->StepExecuter;
    IVar2 = (IStepExecuter)local_res10.Ptr;
    local_res10.Ptr = TVar3.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar2,1);
    TVar3.Ptr = local_res10.Ptr;
  }
  local_res10.Ptr = TVar3.Ptr;
  pFVar5 = AddStep(this,&local_res10);
  TVar3.Ptr = local_res10.Ptr;
  if (local_res10.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar4 = ((local_res10.Ptr)->StepExecuter).Ptr;
    if (pIVar4 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    ::operator_delete(TVar3.Ptr,8);
  }
  if (IVar6 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar6)(IVar6,1);
  }
  return pFVar5;
}

// AddStep<Metasound::Frontend::SearchEngineQuerySteps::FTransformInterfaceRegistryTransactionToInterface> @ 14ae4ae40

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::
AddStep<Metasound::Frontend::SearchEngineQuerySteps::FTransformInterfaceRegistryTransactionToInterface>
          (FFrontendQuery *this)

{
  FFrontendQueryStep FVar1;
  IStepExecuter IVar2;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar3;
  IStepExecuter *pIVar4;
  FFrontendQuery *pFVar5;
  IStepExecuter IVar6;
  IStepExecuter IVar7;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res10;
  
  IVar7 = (IStepExecuter)0x0;
  local_res10.Ptr = (FFrontendQueryStep *)((ulonglong)local_res10.Ptr & 0xffffffff00000000);
  IVar2 = (IStepExecuter)::operator_new(8);
  IVar6 = IVar7;
  if (IVar2 != (IStepExecuter)0x0) {
    *(undefined ***)IVar2 =
         &
         ___7FTransformInterfaceRegistryTransactionToInterface_SearchEngineQuerySteps_Frontend_Metasound__6B_
    ;
    IVar6 = IVar2;
  }
  TVar3.Ptr = ::operator_new(8);
  if (TVar3.Ptr == (FFrontendQueryStep *)0x0) {
    TVar3.Ptr = (FFrontendQueryStep *)0x0;
    IVar2 = IVar7;
  }
  else {
    pIVar4 = ::operator_new(0x10);
    if (pIVar4 == (IStepExecuter *)0x0) {
      ((TVar3.Ptr)->StepExecuter).Ptr = (IStepExecuter *)0x0;
      local_res10.Ptr = (FFrontendQueryStep *)IVar6;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
    else {
      pIVar4[1] = IVar6;
      *pIVar4 = (IStepExecuter)&___7FTransformStepExecuter_FrontendQueryPrivate_Metasound__6B_;
      ((TVar3.Ptr)->StepExecuter).Ptr = pIVar4;
      local_res10.Ptr = (FFrontendQueryStep *)IVar7;
      IVar2 = (IStepExecuter)0x1;
      IVar6 = IVar7;
    }
  }
  if ((IVar2 != (IStepExecuter)0x0) && ((IStepExecuter)local_res10.Ptr != (IStepExecuter)0x0)) {
    FVar1.StepExecuter.Ptr = (local_res10.Ptr)->StepExecuter;
    IVar2 = (IStepExecuter)local_res10.Ptr;
    local_res10.Ptr = TVar3.Ptr;
    (**(code **)FVar1.StepExecuter.Ptr)(IVar2,1);
    TVar3.Ptr = local_res10.Ptr;
  }
  local_res10.Ptr = TVar3.Ptr;
  pFVar5 = AddStep(this,&local_res10);
  TVar3.Ptr = local_res10.Ptr;
  if (local_res10.Ptr != (FFrontendQueryStep *)0x0) {
    pIVar4 = ((local_res10.Ptr)->StepExecuter).Ptr;
    if (pIVar4 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    ::operator_delete(TVar3.Ptr,8);
  }
  if (IVar6 != (IStepExecuter)0x0) {
    (*(code *)**(IStepExecuter **)IVar6)(IVar6,1);
  }
  return pFVar5;
}

// FFrontendQuery @ 14ae57fc0

FFrontendQuery * __thiscall Metasound::FFrontendQuery::FFrontendQuery(FFrontendQuery *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FFrontendQuery *pFVar4;
  
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->Result).Object =
         (TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *)0x10;
    (this->Result).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TSortedMap_UFFrontendQueryKey_Metasound__V__TArray_UFFrontendQueryEntry_Metasound__V__TSizedInlineAllocator__00_0CA_V__TSizedDefaultAllocator__0CA_______V__TSizedDefaultAllocator__0CA___U__TLess_AEBUFFrontendQueryKey_Metasound_______00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    (this->Result).Object =
         (TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *)(pTVar3 + 1);
    (this->Result).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFrontendQuery *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->Steps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Steps).ArrayNum = 0;
  (this->Steps).ArrayMax = 0;
  this->FinalEntryProducingStepIndex = -1;
  return this;
}

// AddFilterLambdaStep @ 14ae60ec0

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddFilterLambdaStep
          (FFrontendQuery *this,
          TFunction<bool___cdecl(Metasound::FFrontendQueryEntry_const_&)> *param_1)

{
  IStepExecuter *pIVar1;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar2;
  FFrontendQueryStep *this_00;
  FFrontendQuery *pFVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res18 [2];
  
  this_00 = ::operator_new(8);
  local_res18[0].Ptr = (FFrontendQueryStep *)0x0;
  if (this_00 != (FFrontendQueryStep *)0x0) {
    local_res18[0].Ptr = Metasound::FFrontendQueryStep::FFrontendQueryStep(this_00,param_1);
  }
  pFVar3 = AddStep(this,local_res18);
  TVar2.Ptr = local_res18[0].Ptr;
  if (local_res18[0].Ptr != (FFrontendQueryStep *)0x0) {
    pIVar1 = ((local_res18[0].Ptr)->StepExecuter).Ptr;
    if (pIVar1 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    ::operator_delete(TVar2.Ptr,8);
  }
  return pFVar3;
}

// AddLimitLambdaStep @ 14ae60f90

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddLimitLambdaStep
          (FFrontendQuery *this,TFunction<int___cdecl(void)> *param_1)

{
  IStepExecuter *pIVar1;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar2;
  FFrontendQueryStep *this_00;
  FFrontendQuery *pFVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res18 [2];
  
  this_00 = ::operator_new(8);
  local_res18[0].Ptr = (FFrontendQueryStep *)0x0;
  if (this_00 != (FFrontendQueryStep *)0x0) {
    local_res18[0].Ptr = Metasound::FFrontendQueryStep::FFrontendQueryStep(this_00,param_1);
  }
  pFVar3 = AddStep(this,local_res18);
  TVar2.Ptr = local_res18[0].Ptr;
  if (local_res18[0].Ptr != (FFrontendQueryStep *)0x0) {
    pIVar1 = ((local_res18[0].Ptr)->StepExecuter).Ptr;
    if (pIVar1 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    ::operator_delete(TVar2.Ptr,8);
  }
  return pFVar3;
}

// AddMapLambdaStep @ 14ae61010

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddMapLambdaStep
          (FFrontendQuery *this,
          TFunction<Metasound::FFrontendQueryKey___cdecl(Metasound::FFrontendQueryEntry_const_&)>
          *param_1)

{
  IStepExecuter *pIVar1;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar2;
  FFrontendQueryStep *this_00;
  FFrontendQuery *pFVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res18 [2];
  
  this_00 = ::operator_new(8);
  local_res18[0].Ptr = (FFrontendQueryStep *)0x0;
  if (this_00 != (FFrontendQueryStep *)0x0) {
    local_res18[0].Ptr = Metasound::FFrontendQueryStep::FFrontendQueryStep(this_00,param_1);
  }
  pFVar3 = AddStep(this,local_res18);
  TVar2.Ptr = local_res18[0].Ptr;
  if (local_res18[0].Ptr != (FFrontendQueryStep *)0x0) {
    pIVar1 = ((local_res18[0].Ptr)->StepExecuter).Ptr;
    if (pIVar1 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    ::operator_delete(TVar2.Ptr,8);
  }
  return pFVar3;
}

// AddReduceLambdaStep @ 14ae611d0

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddReduceLambdaStep
          (FFrontendQuery *this,
          TFunction<void___cdecl(Metasound::FFrontendQueryKey_const_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&)>
          *param_1)

{
  IStepExecuter *pIVar1;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar2;
  FFrontendQueryStep *this_00;
  FFrontendQuery *pFVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res18 [2];
  
  this_00 = ::operator_new(8);
  local_res18[0].Ptr = (FFrontendQueryStep *)0x0;
  if (this_00 != (FFrontendQueryStep *)0x0) {
    local_res18[0].Ptr = Metasound::FFrontendQueryStep::FFrontendQueryStep(this_00,param_1);
  }
  pFVar3 = AddStep(this,local_res18);
  TVar2.Ptr = local_res18[0].Ptr;
  if (local_res18[0].Ptr != (FFrontendQueryStep *)0x0) {
    pIVar1 = ((local_res18[0].Ptr)->StepExecuter).Ptr;
    if (pIVar1 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    ::operator_delete(TVar2.Ptr,8);
  }
  return pFVar3;
}

// AddScoreLambdaStep @ 14ae613a0

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddScoreLambdaStep
          (FFrontendQuery *this,
          TFunction<float___cdecl(Metasound::FFrontendQueryEntry_const_&)> *param_1)

{
  IStepExecuter *pIVar1;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar2;
  FFrontendQueryStep *this_00;
  FFrontendQuery *pFVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res18 [2];
  
  this_00 = ::operator_new(8);
  local_res18[0].Ptr = (FFrontendQueryStep *)0x0;
  if (this_00 != (FFrontendQueryStep *)0x0) {
    local_res18[0].Ptr = Metasound::FFrontendQueryStep::FFrontendQueryStep(this_00,param_1);
  }
  pFVar3 = AddStep(this,local_res18);
  TVar2.Ptr = local_res18[0].Ptr;
  if (local_res18[0].Ptr != (FFrontendQueryStep *)0x0) {
    pIVar1 = ((local_res18[0].Ptr)->StepExecuter).Ptr;
    if (pIVar1 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    ::operator_delete(TVar2.Ptr,8);
  }
  return pFVar3;
}

// AddSortLambdaStep @ 14ae61420

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddSortLambdaStep
          (FFrontendQuery *this,
          TFunction<bool___cdecl(Metasound::FFrontendQueryEntry_const_&,Metasound::FFrontendQueryEntry_const_&)>
          *param_1)

{
  IStepExecuter *pIVar1;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar2;
  FFrontendQueryStep *this_00;
  FFrontendQuery *pFVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res18 [2];
  
  this_00 = ::operator_new(8);
  local_res18[0].Ptr = (FFrontendQueryStep *)0x0;
  if (this_00 != (FFrontendQueryStep *)0x0) {
    local_res18[0].Ptr = Metasound::FFrontendQueryStep::FFrontendQueryStep(this_00,param_1);
  }
  pFVar3 = AddStep(this,local_res18);
  TVar2.Ptr = local_res18[0].Ptr;
  if (local_res18[0].Ptr != (FFrontendQueryStep *)0x0) {
    pIVar1 = ((local_res18[0].Ptr)->StepExecuter).Ptr;
    if (pIVar1 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    ::operator_delete(TVar2.Ptr,8);
  }
  return pFVar3;
}

// AddStep @ 14ae614a0

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddStep
          (FFrontendQuery *this,
          TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
          *param_1)

{
  int *piVar1;
  FFrontendQueryStep *pFVar2;
  IStepExecuter *pIVar3;
  code *pcVar4;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  FFrontendQuery *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> local_48;
  void *pvStack_40;
  undefined8 local_38;
  undefined2 local_30;
  
  pFVar2 = param_1->Ptr;
  if (pFVar2 == (FFrontendQueryStep *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2968347027496240358>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
                       ,0x4e6,"InStep.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FFrontendQuery *)(*pcVar4)();
      return pFVar11;
    }
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_48.Ptr = (FFrontendQueryStep *)0x0;
    pvStack_40 = (void *)0x0;
    if (&local_48 != param_1) {
      param_1->Ptr = (FFrontendQueryStep *)0x0;
      local_48.Ptr = pFVar2;
    }
    pIVar3 = ((local_48.Ptr)->StepExecuter).Ptr;
    if (pIVar3 == (IStepExecuter *)0x0) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)((longlong)*pIVar3 + 0x20))();
    }
    local_30 = CONCAT11(uVar7,local_30._0_1_);
    pIVar3 = ((local_48.Ptr)->StepExecuter).Ptr;
    if ((pIVar3 == (IStepExecuter *)0x0) ||
       (cVar8 = (**(code **)((longlong)*pIVar3 + 0x28))(), cVar8 != '\0')) {
      this->FinalEntryProducingStepIndex = (this->Steps).ArrayNum;
    }
    iVar10 = (this->Steps).ArrayNum;
    pFVar13 = (this->Steps).AllocatorInstance.Data;
    pFVar14 = pFVar13 + (longlong)iVar10 * 0x20;
    while( true ) {
      if ((this->Steps).ArrayNum != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Metasound::FFrontendQuery::FStepInfo_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar14) goto LAB_14ae61645;
      if (((longlong *)**(longlong **)pFVar13 != (longlong *)0x0) &&
         (cVar8 = (**(code **)(*(longlong *)**(longlong **)pFVar13 + 0x18))(), cVar8 != '\0'))
      break;
      pFVar13 = pFVar13 + 0x20;
    }
    pIVar3 = ((local_48.Ptr)->StepExecuter).Ptr;
    if ((pIVar3 == (IStepExecuter *)0x0) ||
       (cVar8 = (**(code **)((longlong)*pIVar3 + 0x18))(), cVar8 == '\0')) {
LAB_14ae61645:
      pIVar3 = ((local_48.Ptr)->StepExecuter).Ptr;
      if (pIVar3 != (IStepExecuter *)0x0) {
        cVar8 = (**(code **)((longlong)*pIVar3 + 0x18))();
        uVar7 = local_30._0_1_;
        if (cVar8 != '\0') {
          uVar7 = 1;
        }
        local_30 = CONCAT11(local_30._1_1_,uVar7);
      }
    }
    else {
      iVar10 = (this->Steps).ArrayNum;
      uVar12 = iVar10 - 1;
      uVar9 = 0;
      if ((int)uVar12 < iVar10) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FFrontendQuery *)(*pcVar4)();
        return pFVar11;
      }
      (this->Steps).AllocatorInstance.Data[(longlong)(this->Steps).ArrayNum * 0x20 + -8] =
           (FScriptContainerElement)0x1;
    }
    pFVar13 = (this->Steps).AllocatorInstance.Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar13 + (longlong)(this->Steps).ArrayMax * 0x20))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FFrontendQuery *)(*pcVar4)();
      return pFVar11;
    }
    iVar10 = (this->Steps).ArrayNum;
    piVar1 = &(this->Steps).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(this->Steps).AllocatorInstance,piVar1);
    }
    (this->Steps).ArrayNum = iVar10 + 1;
    pFVar13 = (this->Steps).AllocatorInstance.Data + (longlong)iVar10 * 0x20;
    *(FFrontendQueryStep **)pFVar13 = local_48.Ptr;
    local_48.Ptr = (FFrontendQueryStep *)0x0;
    *(undefined8 *)(pFVar13 + 8) = 0;
    *(void **)(pFVar13 + 8) = pvStack_40;
    pvStack_40 = (void *)0x0;
    *(undefined4 *)(pFVar13 + 0x10) = (undefined4)local_38;
    *(undefined4 *)(pFVar13 + 0x14) = local_38._4_4_;
    local_38 = 0;
    pFVar13[0x18] = local_30._0_1_;
    pFVar13[0x19] = local_30._1_1_;
    DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
              ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                *)0x0,0);
    if (pvStack_40 != (void *)0x0) {
      FMemory::Free(pvStack_40);
    }
    TVar5.Ptr = local_48.Ptr;
    if (local_48.Ptr != (FFrontendQueryStep *)0x0) {
      pIVar3 = ((local_48.Ptr)->StepExecuter).Ptr;
      if (pIVar3 != (IStepExecuter *)0x0) {
        (**(code **)*pIVar3)(pIVar3,1);
      }
      ::operator_delete(TVar5.Ptr,8);
    }
  }
  return this;
}

// AddStreamLambdaStep @ 14ae617b0

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddStreamLambdaStep
          (FFrontendQuery *this,
          TUniqueFunction<void___cdecl(TArray<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,TSizedDefaultAllocator<32>_>_&)>
          *param_1)

{
  IStepExecuter *pIVar1;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar2;
  FFrontendQueryStep *this_00;
  FFrontendQuery *pFVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res18 [2];
  
  this_00 = ::operator_new(8);
  local_res18[0].Ptr = (FFrontendQueryStep *)0x0;
  if (this_00 != (FFrontendQueryStep *)0x0) {
    local_res18[0].Ptr = Metasound::FFrontendQueryStep::FFrontendQueryStep(this_00,param_1);
  }
  pFVar3 = AddStep(this,local_res18);
  TVar2.Ptr = local_res18[0].Ptr;
  if (local_res18[0].Ptr != (FFrontendQueryStep *)0x0) {
    pIVar1 = ((local_res18[0].Ptr)->StepExecuter).Ptr;
    if (pIVar1 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    ::operator_delete(TVar2.Ptr,8);
  }
  return pFVar3;
}

// AddTransformLambdaStep @ 14ae61960

FFrontendQuery * __thiscall
Metasound::FFrontendQuery::AddTransformLambdaStep
          (FFrontendQuery *this,
          TFunction<void___cdecl(TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>_&)>
          *param_1)

{
  IStepExecuter *pIVar1;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_> TVar2;
  FFrontendQueryStep *this_00;
  FFrontendQuery *pFVar3;
  TUniquePtr<Metasound::FFrontendQueryStep,TDefaultDelete<Metasound::FFrontendQueryStep>_>
  local_res18 [2];
  
  this_00 = ::operator_new(8);
  local_res18[0].Ptr = (FFrontendQueryStep *)0x0;
  if (this_00 != (FFrontendQueryStep *)0x0) {
    local_res18[0].Ptr = Metasound::FFrontendQueryStep::FFrontendQueryStep(this_00,param_1);
  }
  pFVar3 = AddStep(this,local_res18);
  TVar2.Ptr = local_res18[0].Ptr;
  if (local_res18[0].Ptr != (FFrontendQueryStep *)0x0) {
    pIVar1 = ((local_res18[0].Ptr)->StepExecuter).Ptr;
    if (pIVar1 != (IStepExecuter *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    ::operator_delete(TVar2.Ptr,8);
  }
  return pFVar3;
}

// AppendPartitions @ 14ae63570

void __thiscall
Metasound::FFrontendQuery::AppendPartitions
          (FFrontendQuery *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_3,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  FFrontendQueryKey *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  ForElementType<Metasound::FFrontendQueryEntry> FVar11;
  longlong lVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_res18;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_res20;
  undefined1 local_a4 [28];
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  local_a4._12_4_ = 0;
  local_a4._16_4_ = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar5 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar12 = (longlong)(int)local_a4._12_4_;
      local_80 = local_80 + 0x20;
      local_a4._12_4_ = local_a4._12_4_ + 1;
      iStack_84 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_a4._12_4_)
      goto LAB_14ae6361d;
      uVar16 = puVar18[lVar12 + 1];
    }
    local_a4._16_4_ = -uVar16 & uVar16;
    uVar4 = (ulonglong)(uint)local_a4._16_4_ * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_84 = local_80 + -1 + (int)lVar12;
    if (iVar5 < iStack_84) {
      iStack_84 = iVar5;
    }
  }
LAB_14ae6361d:
  uVar16 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(local_a4._16_4_,local_a4._12_4_);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_res18 = param_2;
  local_res20 = param_3;
  local_a4._4_8_ = param_1;
  local_a4._20_8_ = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar16 != uVar6) {
    puVar17 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ae63720;
      uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar16) {
      uVar16 = uVar6;
    }
  }
LAB_14ae63720:
  while( true ) {
    pTVar8 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar16) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    break;
    pFVar3 = (FFrontendQueryKey *)
             (*(longlong *)&pTVar8->Elements + (longlong)TStack_68.CurrentBitIndex * 0x28);
    FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
             TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
             ::Find(local_res18,pFVar3);
    if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
      ::Emplace<Metasound::FFrontendQueryKey_const_&>
                (local_res20,(FFrontendQueryKey *)local_a4,(bool *)pFVar3);
      FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find(param_4,pFVar3);
      if (FVar11 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_4,pFVar3);
      }
      if (FVar11 != FVar10) {
        FVar13 = FVar11;
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar11 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar13 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar11 + 0xb0);
        }
        DestructItems<Metasound::FFrontendQueryEntry,int>
                  ((FFrontendQueryEntry *)FVar13,*(int *)((longlong)FVar11 + 0xb8));
        piVar2 = (int *)((longlong)FVar11 + 0xbc);
        iVar5 = *(int *)((longlong)FVar10 + 0xb8);
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
        }
        *(int *)((longlong)FVar11 + 0xb8) = iVar5;
        if ((iVar5 == 0) && (*piVar2 == 0)) {
          *piVar2 = 1;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                    (0xb0,8,iVar5,*piVar2,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar11,
                     iVar5,piVar2);
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar11 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar11 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar11 + 0xb0);
          }
          ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                    ((void *)FVar11,(FFrontendQueryEntry *)FVar10,iVar5);
        }
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetSelection @ 14ae787b0

TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
* __thiscall Metasound::FFrontendQuery::GetSelection(FFrontendQuery *this)

{
  return (this->Result).Object;
}

// MergeInternal @ 14ae7e360

void __thiscall
Metasound::FFrontendQuery::MergeInternal
          (FFrontendQuery *this,FFrontendQueryStep *param_1,FIncremental *param_2,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_3)

{
  IStepExecuter *pIVar1;
  
  pIVar1 = (param_1->StepExecuter).Ptr;
  if (pIVar1 != (IStepExecuter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae7e374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,param_2,param_3);
    return;
  }
  return;
}

// Update @ 14ae90440

TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
* __thiscall
Metasound::FFrontendQuery::Update
          (FFrontendQuery *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1)

{
  UpdateInternal(this,param_1);
  return (this->Result).Object;
}

// Update @ 14ae90460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
* __thiscall Metasound::FFrontendQuery::Update(FFrontendQuery *this)

{
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *pTVar1;
  int iVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  UpdateInternal(this,(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
                       *)local_68);
  pTVar1 = (this->Result).Object;
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return pTVar1;
}

// UpdateInternal @ 14ae90660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FFrontendQuery::UpdateInternal
          (FFrontendQuery *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *pTVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  uint uVar8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_188 [32];
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  local_158;
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  local_108;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  local_f8;
  TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *local_a8;
  undefined8 local_a0;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar10 = 0;
  local_a0._0_4_ = 0;
  local_158.Elements._0_8_ = 0;
  iVar1 = (this->Steps).ArrayNum;
  local_158.Elements._8_8_ = 0;
  local_158.Elements._32_8_ = 0;
  local_158.Elements._40_4_ = 0;
  local_158.Elements._44_4_ = 0x80;
  local_158.Elements._48_4_ = 0xffffffff;
  local_158.Elements._52_4_ = 0;
  local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_158.HashSize = 0;
  local_108.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Pairs.ArrayNum = 0;
  local_108.Pairs.ArrayMax = 0;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  local_a8 = (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
              *)0x0;
  local_a0 = 0;
  if (0 < iVar1) {
    uVar13 = uVar10;
    uVar14 = uVar10;
    do {
      uVar12 = (uint)uVar10;
      uVar8 = 0;
      if ((int)uVar12 < (this->Steps).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (this->Steps).AllocatorInstance.Data + uVar14;
      plVar3 = (longlong *)**(longlong **)pFVar11;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_158,&local_108);
      }
      if ((pFVar11[0x19] != (FScriptContainerElement)0x0) &&
         (plVar3 = (longlong *)**(longlong **)pFVar11, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_f8,&local_a8);
      }
      if (((uVar12 == this->FinalEntryProducingStepIndex) &&
          (local_158.Elements._8_4_ == local_158.Elements._52_4_)) &&
         (local_f8.Elements._8_4_ == local_f8.Elements._52_4_)) break;
      if (uVar13 == (longlong)(iVar1 + -1)) {
        plVar3 = (longlong *)**(longlong **)pFVar11;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3,&local_158,(this->Result).Object);
        }
        pTVar4 = (this->Result).Object;
        piVar6 = &(pTVar4->Pairs).ArrayMax;
        iVar2 = (pTVar4->Pairs).ArrayNum;
        if (*piVar6 != iVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,iVar2,(ForAnyElementType *)pTVar4,iVar2,piVar6);
        }
        pTVar9 = TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
                 ::Union(&local_158,&local_98,&local_f8);
        if (param_1 != pTVar9) {
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          ::
          Move<TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>_>
                    (param_1,pTVar9);
        }
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
      }
      else if (pFVar11[0x18] != (FScriptContainerElement)0x0) {
        plVar3 = (longlong *)**(longlong **)pFVar11;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))(plVar3,&local_158,pFVar11 + 8);
        }
        AppendPartitions(this,&local_f8,
                         (TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                          *)(pFVar11 + 8),&local_158,&local_108);
        iVar2 = *(int *)(pFVar11 + 0x10);
        if (*(int *)(pFVar11 + 0x14) != iVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,iVar2,(ForAnyElementType *)(pFVar11 + 8),iVar2,(int *)(pFVar11 + 0x14));
        }
      }
      uVar10 = (ulonglong)(uVar12 + 1);
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 0x20;
    } while ((int)(uVar12 + 1) < (this->Steps).ArrayNum);
  }
  DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
            (local_a8,(int)local_a0);
  if (local_a8 !=
      (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    FMemory::Free(local_a8);
  }
  local_f8.HashSize = 0;
  if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
            ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
              *)local_108.Pairs.AllocatorInstance.Data,local_108.Pairs.ArrayNum);
  if ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
       *)local_108.Pairs.AllocatorInstance.Data !=
      (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    FMemory::Free(local_108.Pairs.AllocatorInstance.Data);
  }
  local_158.HashSize = 0;
  if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_158.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_158.Elements);
  return;
}

