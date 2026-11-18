// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 2

// StartupModule @ 14e24e730

void __thiscall FHairStrandsSolverModule::StartupModule(FHairStrandsSolverModule *this)

{
  TUniquePtr<UE::Groom::FGroomCacheAdapter,TDefaultDelete<UE::Groom::FGroomCacheAdapter>_> *pTVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  FGroomCacheAdapter *pFVar3;
  undefined8 *puVar4;
  FGroomCacheAdapter *pFVar5;
  longlong lVar6;
  FName local_res8;
  undefined8 local_28;
  FString local_20;
  
  _Src.Data = UDataflow::SimulationTag.Data.AllocatorInstance.Data;
  lVar6 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  pFVar5 = (FGroomCacheAdapter *)0x0;
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = UDataflow::SimulationTag.Data.ArrayNum;
  if (UDataflow::SimulationTag.Data.ArrayNum == 0) {
    local_20.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,UDataflow::SimulationTag.Data.ArrayNum,0,(ForAnyElementType *)&local_20,
               UDataflow::SimulationTag.Data.ArrayNum,&local_20.Data.ArrayMax);
    memcpy(local_20.Data.AllocatorInstance.Data,_Src.Data,lVar6 * 2);
  }
  ::FName::FName(&local_res8,"FAddSolverDeformerDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_HairStrandsSolver();
    Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddSolverDeformerDataflowNode,(UObject *)pUVar2,
                         L"AddSolverDeformerDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FAddSolverDeformerDataflowNode.OuterSingleton,
             local_res8,"AddSolverDeformer","Physics|Solver",&local_20,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FAddSolverDeformerDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  pFVar3 = ::operator_new(0xa0);
  if (pFVar3 != (FGroomCacheAdapter *)0x0) {
    memset(pFVar3,0,0xa0);
    *(undefined8 *)&pFVar3->GroomCaches = 0;
    *(undefined8 *)&(pFVar3->GroomCaches).field_0x8 = 0;
    *(undefined8 *)&(pFVar3->GroomCaches).field_0x20 = 0;
    pFVar3->_padding_ = (longlong)&___7FGroomCacheAdapter_Groom_UE__6B_;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 0x7f7fffff;
    *(undefined4 *)&pFVar3->_padding_ = 0xff7fffff;
    *(undefined4 *)&(pFVar3->GroomCaches).field_0x28 = 0;
    *(undefined4 *)&(pFVar3->GroomCaches).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar3->GroomCaches).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->GroomCaches).field_0x34 = 0;
    *(undefined8 *)&(pFVar3->GroomCaches).field_0x40 = 0;
    *(undefined4 *)&(pFVar3->GroomCaches).field_0x48 = 0;
    pFVar3->bIsLoading = false;
    (pFVar3->ReadbackTasks).AllocatorInstance.SecondaryData =
         (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    (pFVar3->ReadbackTasks).ArrayNum = 0;
    (pFVar3->ReadbackTasks).ArrayMax = 4;
    pFVar5 = pFVar3;
  }
  pTVar1 = &this->GroomCacheAdapter;
  if (pTVar1 == (TUniquePtr<UE::Groom::FGroomCacheAdapter,TDefaultDelete<UE::Groom::FGroomCacheAdapter>_>
                 *)&local_28) {
    if (pFVar5 == (FGroomCacheAdapter *)0x0) goto LAB_14e24e8da;
    puVar4 = (undefined8 *)pFVar5->_padding_;
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar3 == (FGroomCacheAdapter *)0x0) goto LAB_14e24e8da;
    puVar4 = (undefined8 *)pFVar3->_padding_;
    pFVar5 = pFVar3;
  }
  (*(code *)*puVar4)(pFVar5,1);
LAB_14e24e8da:
  Chaos::RegisterAdapter((FComponentCacheAdapter *)pTVar1->Ptr);
  return;
}

// ShutdownModule @ 14e24e900

void __thiscall FHairStrandsSolverModule::ShutdownModule(FHairStrandsSolverModule *this)

{
  FGroomCacheAdapter *pFVar1;
  
  Chaos::UnregisterAdapter((FComponentCacheAdapter *)(this->GroomCacheAdapter).Ptr);
  pFVar1 = (this->GroomCacheAdapter).Ptr;
  (this->GroomCacheAdapter).Ptr = (FGroomCacheAdapter *)0x0;
  if (pFVar1 != (FGroomCacheAdapter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e24e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

