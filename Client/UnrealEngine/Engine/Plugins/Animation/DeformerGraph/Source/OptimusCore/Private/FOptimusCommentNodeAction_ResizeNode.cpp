// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e10cc40

UScriptStruct * __cdecl FOptimusCommentNodeAction_ResizeNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusCommentNodeAction_ResizeNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusCommentNodeAction_ResizeNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusCommentNodeAction_ResizeNode,
                         (UObject *)pUVar1,L"OptimusCommentNodeAction_ResizeNode");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusCommentNodeAction_ResizeNode.OuterSingleton;
}

// Do @ 14e10cc80

bool __thiscall
FOptimusCommentNodeAction_ResizeNode::Do
          (FOptimusCommentNodeAction_ResizeNode *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusNode_Comment *this_00;
  UClass *pUVar3;
  
  this_00 = (UOptimusNode_Comment *)
            (**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  if (this_00 != (UOptimusNode_Comment *)0x0) {
    pUVar3 = UOptimusNode_Comment::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      bVar2 = UOptimusNode_Comment::SetSizeDirect(this_00,(TVector2<float> *)&this->NewSize);
      return bVar2;
    }
  }
  return false;
}

// Undo @ 14e10cd00

bool __thiscall
FOptimusCommentNodeAction_ResizeNode::Undo
          (FOptimusCommentNodeAction_ResizeNode *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusNode_Comment *this_00;
  UClass *pUVar3;
  
  this_00 = (UOptimusNode_Comment *)
            (**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  if (this_00 != (UOptimusNode_Comment *)0x0) {
    pUVar3 = UOptimusNode_Comment::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      bVar2 = UOptimusNode_Comment::SetSizeDirect(this_00,(TVector2<float> *)&this->OldSize);
      return bVar2;
    }
  }
  return false;
}

// FOptimusCommentNodeAction_ResizeNode @ 14e1508d0

FOptimusCommentNodeAction_ResizeNode * __thiscall
FOptimusCommentNodeAction_ResizeNode::FOptimusCommentNodeAction_ResizeNode
          (FOptimusCommentNodeAction_ResizeNode *this,UOptimusNode_Comment *param_1,
          FDeprecateVector2DParameter *param_2)

{
  longlong *plVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  pFVar2 = &this->NodePath;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusCommentNodeAction_ResizeNode__6B_;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  pFVar4 = UOptimusNode::GetNodePath((UOptimusNode *)param_1,&local_28);
  if (pFVar2 != pFVar4) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodePath).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->NodePath).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->OldSize = param_1->Size;
  *(undefined4 *)&this->NewSize = *(undefined4 *)param_2;
  *(undefined4 *)&(this->NewSize).field_0x4 = *(undefined4 *)&param_2->field_0x4;
  ::FString::PrintfImpl(&local_38,L"Resize Comment Node");
  if ((FString *)plVar1 != &local_38) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_38.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_38.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

