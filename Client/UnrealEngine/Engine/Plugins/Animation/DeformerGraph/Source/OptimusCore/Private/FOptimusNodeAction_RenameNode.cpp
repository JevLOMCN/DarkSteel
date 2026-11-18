// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e10c560

UScriptStruct * __cdecl FOptimusNodeAction_RenameNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeAction_RenameNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeAction_RenameNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode,(UObject *)pUVar1,
                         L"OptimusNodeAction_RenameNode");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeAction_RenameNode.OuterSingleton;
}

// Do @ 14e10c5a0

bool __thiscall
FOptimusNodeAction_RenameNode::Do(FOptimusNodeAction_RenameNode *this,IOptimusPathResolver *param_1)

{
  ITextData *pIVar1;
  bool bVar2;
  UOptimusNode *this_00;
  undefined1 local_res8 [8];
  FText local_18;
  
  this_00 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  if (this_00 == (UOptimusNode *)0x0) {
    return false;
  }
  local_18.TextData.Reference = (this->NewName).TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = (this->NewName).Flags;
  bVar2 = FText::EqualTo(&this_00->DisplayName,&local_18,Default);
  if (!bVar2) {
    pIVar1 = (this_00->DisplayName).TextData.Reference;
    if (pIVar1 != local_18.TextData.Reference) {
      (this_00->DisplayName).TextData.Reference = local_18.TextData.Reference;
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 8))
                  (local_18.TextData.Reference,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this_00->DisplayName).Flags = local_18.Flags;
    UOptimusNode::Notify(this_00,NodeDisplayNameChanged);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// Undo @ 14e10c680

bool __thiscall
FOptimusNodeAction_RenameNode::Undo
          (FOptimusNodeAction_RenameNode *this,IOptimusPathResolver *param_1)

{
  ITextData *pIVar1;
  bool bVar2;
  UOptimusNode *this_00;
  undefined1 local_res8 [8];
  FText local_18;
  
  this_00 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  if (this_00 == (UOptimusNode *)0x0) {
    return false;
  }
  local_18.TextData.Reference = (this->OldName).TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = (this->OldName).Flags;
  bVar2 = FText::EqualTo(&this_00->DisplayName,&local_18,Default);
  if (!bVar2) {
    pIVar1 = (this_00->DisplayName).TextData.Reference;
    if (pIVar1 != local_18.TextData.Reference) {
      (this_00->DisplayName).TextData.Reference = local_18.TextData.Reference;
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 8))
                  (local_18.TextData.Reference,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this_00->DisplayName).Flags = local_18.Flags;
    UOptimusNode::Notify(this_00,NodeDisplayNameChanged);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// FOptimusNodeAction_RenameNode @ 14e153210

FOptimusNodeAction_RenameNode * __thiscall
FOptimusNodeAction_RenameNode::FOptimusNodeAction_RenameNode
          (FOptimusNodeAction_RenameNode *this,UOptimusNode *param_1,FText *param_2)

{
  longlong *plVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  FString *pFVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  pFVar2 = &this->NodePath;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_RenameNode__6B_;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  FText::FText(&this->NewName);
  FText::FText(&this->OldName);
  pFVar6 = UOptimusNode::GetNodePath(param_1,&local_38);
  if (pFVar2 != pFVar6) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodePath).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->NodePath).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar4 = (param_2->TextData).Reference;
  pIVar5 = (this->NewName).TextData.Reference;
  if (pIVar5 != pIVar4) {
    (this->NewName).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (this->NewName).Flags = param_2->Flags;
  pFVar7 = (FText *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1,&local_38);
  FText::operator=(&this->OldName,pFVar7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    (**(code **)(*(longlong *)local_38.Data.AllocatorInstance.Data + 0x10))();
  }
  pFVar7 = (FText *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1,&local_38);
  FText::ToString(pFVar7);
  ::FString::PrintfImpl(&local_48,L"Rename %s");
  if ((FString *)plVar1 != &local_48) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_48.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_48.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    (**(code **)(*(longlong *)local_38.Data.AllocatorInstance.Data + 0x10))();
  }
  pIVar4 = (param_2->TextData).Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  return this;
}

