// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e10b370

UScriptStruct * __cdecl FOptimusNodeGraphAction_AddRemoveNodePair::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_AddRemoveNodePair");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddRemoveNodePair.OuterSingleton;
}

// FOptimusNodeGraphAction_AddRemoveNodePair @ 14e1544b0

FOptimusNodeGraphAction_AddRemoveNodePair * __thiscall
FOptimusNodeGraphAction_AddRemoveNodePair::FOptimusNodeGraphAction_AddRemoveNodePair
          (FOptimusNodeGraphAction_AddRemoveNodePair *this,FString *param_1,FString *param_2)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
  (this->SecondNodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SecondNodePath).Data.ArrayNum = 0;
  (this->SecondNodePath).Data.ArrayMax = 0;
  (this->FirstNodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FirstNodePath).Data.ArrayNum = 0;
  (this->FirstNodePath).Data.ArrayMax = 0;
  ::FString::operator=(&this->FirstNodePath,param_1);
  ::FString::operator=(&this->SecondNodePath,param_2);
  return this;
}

// AddNodePair @ 14e176160

bool __thiscall
FOptimusNodeGraphAction_AddRemoveNodePair::AddNodePair
          (FOptimusNodeGraphAction_AddRemoveNodePair *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusNode *pUVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  UOptimusNodeGraph *this_00;
  
  pUVar3 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->FirstNodePath);
  pUVar4 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->SecondNodePath);
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

// RemoveNodePair @ 14e213f70

bool __thiscall
FOptimusNodeGraphAction_AddRemoveNodePair::RemoveNodePair
          (FOptimusNodeGraphAction_AddRemoveNodePair *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusNode *pUVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  UOptimusNodeGraph *this_00;
  
  pUVar3 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->FirstNodePath);
  pUVar4 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->SecondNodePath);
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

