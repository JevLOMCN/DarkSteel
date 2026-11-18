// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e10c170

UScriptStruct * __cdecl FOptimusNodeGraphAction_RemoveNodePair::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_RemoveNodePair");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveNodePair.OuterSingleton;
}

// Do @ 14e10c1b0

bool __thiscall
FOptimusNodeGraphAction_RemoveNodePair::Do
          (FOptimusNodeGraphAction_RemoveNodePair *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusNode *pUVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  UOptimusNodeGraph *this_00;
  
  pUVar3 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->field_0x18);
  pUVar4 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->field_0x28);
  this_00 = (UOptimusNodeGraph *)pUVar3->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14e213fd4;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e213fd4:
  bVar2 = UOptimusNodeGraph::RemoveNodePairDirect(this_00,pUVar3,pUVar4);
  return bVar2;
}

// Undo @ 14e10c1c0

bool __thiscall
FOptimusNodeGraphAction_RemoveNodePair::Undo
          (FOptimusNodeGraphAction_RemoveNodePair *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusNode *pUVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  UOptimusNodeGraph *this_00;
  
  pUVar3 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->field_0x18);
  pUVar4 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->field_0x28);
  this_00 = (UOptimusNodeGraph *)pUVar3->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14e1761c4;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e1761c4:
  bVar2 = UOptimusNodeGraph::AddNodePairDirect(this_00,pUVar3,pUVar4);
  return bVar2;
}

// FOptimusNodeGraphAction_RemoveNodePair @ 14e155160

FOptimusNodeGraphAction_RemoveNodePair * __thiscall
FOptimusNodeGraphAction_RemoveNodePair::FOptimusNodeGraphAction_RemoveNodePair
          (FOptimusNodeGraphAction_RemoveNodePair *this,UOptimusNodePair *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = UOptimusNode::GetNodePath((param_1->Second).field0_0x0.DebugPtr,&local_18);
  pFVar3 = UOptimusNode::GetNodePath((param_1->First).field0_0x0.DebugPtr,&local_28);
  puVar1 = &this->field_0x8;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  ::FString::operator=((FString *)&this->field_0x18,pFVar3);
  ::FString::operator=((FString *)&this->field_0x28,pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &___7FOptimusNodeGraphAction_RemoveNodePair__6B_;
  ::FString::PrintfImpl(&local_38,L"Remove Node Pair");
  if ((FString *)puVar1 != &local_38) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_38.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x10 = local_38.Data.ArrayNum;
    *(int *)&this->field_0x14 = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

