// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 3

// StaticStruct @ 1462ea8c0

UScriptStruct * __cdecl FDataflowExecutionNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowExecutionNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowExecutionNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowExecutionNode,(UObject *)pUVar1,
                         L"DataflowExecutionNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowExecutionNode.OuterSingleton;
}

// IsA @ 1462ea900

bool __thiscall FDataflowExecutionNode::IsA(FDataflowExecutionNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowExecutionNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462ea968;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462ea968:
    if (!bVar5) {
      bVar5 = FDataflowSimulationNode::IsA((FDataflowSimulationNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462ea986;
      }
    }
  }
  bVar5 = true;
LAB_1462ea986:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// ~FDataflowExecutionNode @ 1462f2cf0

void __thiscall FDataflowExecutionNode::~FDataflowExecutionNode(FDataflowExecutionNode *this)

{
  *(undefined ***)this = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

