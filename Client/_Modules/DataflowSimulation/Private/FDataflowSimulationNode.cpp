// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 5

// StaticStruct @ 1462ea5a0

UScriptStruct * __cdecl FDataflowSimulationNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationNode,(UObject *)pUVar1,
                         L"DataflowSimulationNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSimulationNode.OuterSingleton;
}

// IsA @ 1462ea5e0

bool __thiscall FDataflowSimulationNode::IsA(FDataflowSimulationNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FDataflowSimulationNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462ea648;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462ea648:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462ea666;
      }
    }
  }
  bVar5 = true;
LAB_1462ea666:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// Evaluate @ 1462ea6a0

void __thiscall
FDataflowSimulationNode::Evaluate
          (FDataflowSimulationNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  char cVar2;
  FName local_res10;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x18);
  ::FName::FName(&local_res10,"TSimulationContext");
  cVar2 = (*pcVar1)(param_1,local_res10);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)this + 0x150))(this,param_1,param_2);
  }
  return;
}

// EvaluateSimulation @ 1462ea710

void __thiscall
FDataflowSimulationNode::EvaluateSimulation
          (FDataflowSimulationNode *this,TSimulationContext<UE::Dataflow::FContextSingle> *param_1,
          FDataflowOutput *param_2)

{
  return;
}

// ~FDataflowSimulationNode @ 1462f2dd0

void __thiscall FDataflowSimulationNode::~FDataflowSimulationNode(FDataflowSimulationNode *this)

{
  *(undefined ***)this = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

