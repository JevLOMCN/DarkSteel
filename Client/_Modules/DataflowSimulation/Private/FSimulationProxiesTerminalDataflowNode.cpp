// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 11

// StaticStruct @ 1462ec340

UScriptStruct * __cdecl FSimulationProxiesTerminalDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode,
                         (UObject *)pUVar1,L"SimulationProxiesTerminalDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton;
}

// GetType @ 1462ec380

FName __thiscall
FSimulationProxiesTerminalDataflowNode::GetType(FSimulationProxiesTerminalDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSimulationProxiesTerminalDataflowNode");
  return in_RDX;
}

// IsA @ 1462ec3b0

bool __thiscall
FSimulationProxiesTerminalDataflowNode::IsA
          (FSimulationProxiesTerminalDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  bool bVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_20);
  ::FName::FName(&local_res20,"FSimulationProxiesTerminalDataflowNode");
  pFVar4 = ::FName::ToString(&local_res20,&local_30);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar6 = iVar2 == 0;
      goto LAB_1462ec421;
    }
  }
  else {
    bVar6 = iVar1 + iVar2 == 1;
LAB_1462ec421:
    if (!bVar6) {
      local_res18 = local_res10;
      pFVar3 = ::FName::ToString(&local_res18,&local_40);
      ::FName::FName(&local_58,"FDataflowExecutionNode");
      pFVar4 = ::FName::ToString(&local_58,&local_50);
      iVar2 = (pFVar3->Data).ArrayNum;
      iVar1 = (pFVar4->Data).ArrayNum;
      if (iVar2 == iVar1) {
        if (1 < iVar2) {
          iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
          bVar6 = iVar2 == 0;
          goto LAB_1462ec495;
        }
LAB_1462ec4b4:
        bVar6 = true;
      }
      else {
        bVar6 = iVar1 + iVar2 == 1;
LAB_1462ec495:
        if (bVar6) goto LAB_1462ec4b4;
        bVar6 = FDataflowSimulationNode::IsA((FDataflowSimulationNode *)this,local_res18);
        if (bVar6) goto LAB_1462ec4b4;
        bVar6 = false;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      bVar5 = false;
      if (!bVar6) goto LAB_1462ec4da;
    }
  }
  bVar5 = true;
LAB_1462ec4da:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462ec510

FStructOnScope * __thiscall
FSimulationProxiesTerminalDataflowNode::NewStructOnScope
          (FSimulationProxiesTerminalDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowSimulation();
      Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode,
                           (UObject *)pUVar2,L"SimulationProxiesTerminalDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462ec590

void __thiscall
FSimulationProxiesTerminalDataflowNode::SerializeInternal
          (FSimulationProxiesTerminalDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode,
                         (UObject *)pUVar1,L"SimulationProxiesTerminalDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462ec60d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462ec620

FName __thiscall
FSimulationProxiesTerminalDataflowNode::GetDisplayName(FSimulationProxiesTerminalDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SimulationProxiesTerminal");
  return in_RDX;
}

// GetCategory @ 1462ec650

FName __thiscall
FSimulationProxiesTerminalDataflowNode::GetCategory(FSimulationProxiesTerminalDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Terminal|Proxy");
  return in_RDX;
}

// GetTags @ 1462ec680

FString * __thiscall
FSimulationProxiesTerminalDataflowNode::GetTags
          (FSimulationProxiesTerminalDataflowNode *this,FString *__return_storage_ptr__)

{
  StaticTags(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462ec6a0

UScriptStruct * __thiscall
FSimulationProxiesTerminalDataflowNode::TypedScriptStruct
          (FSimulationProxiesTerminalDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimulationProxiesTerminalDataflowNode,
                         (UObject *)pUVar1,L"SimulationProxiesTerminalDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSimulationProxiesTerminalDataflowNode.OuterSingleton;
}

// EvaluateSimulation @ 1462ec6e0

void __thiscall
FSimulationProxiesTerminalDataflowNode::EvaluateSimulation
          (FSimulationProxiesTerminalDataflowNode *this,
          TSimulationContext<UE::Dataflow::FContextSingle> *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *_Src;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pTVar1 = FDataflowNode::GetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
                     ((FDataflowNode *)this,(FContext *)param_1,&this->SimulationProxies);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = pTVar1->ArrayNum;
  lVar2 = (longlong)local_10;
  _Src = (pTVar1->AllocatorInstance).Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar2 << 3);
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// StaticTags @ 1462fe180

FString * __cdecl
FSimulationProxiesTerminalDataflowNode::StaticTags(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = UDataflow::SimulationTag.Data.ArrayNum;
  _Src = UDataflow::SimulationTag.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar3 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = UDataflow::SimulationTag.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

