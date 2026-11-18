// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e10a590

UScriptStruct * __cdecl FOptimusNodeGraphAction_AddNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddNode,(UObject *)pUVar1
                         ,L"OptimusNodeGraphAction_AddNode");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddNode.OuterSingleton;
}

// Do @ 14e10a650

bool __thiscall
FOptimusNodeGraphAction_AddNode::Do
          (FOptimusNodeGraphAction_AddNode *this,IOptimusPathResolver *param_1)

{
  undefined8 *puVar1;
  UOptimusNodeGraph *this_00;
  UClass *pUVar2;
  UOptimusNode *this_01;
  FString *pFVar3;
  undefined8 *puVar4;
  FString local_48;
  TFunction<bool___cdecl(UOptimusNode_*)> local_38;
  
  this_00 = (UOptimusNodeGraph *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar2 = Optimus::FindObjectInPackageOrGlobal<UClass>(&this->NodeClassPath);
    if (pUVar2 != (UClass *)0x0) {
      local_38._0_8_ = *(undefined8 *)&this->ConfigureNodeFunc;
      local_38._40_8_ = 0;
      if (local_38._0_8_ != 0) {
        puVar1 = *(undefined8 **)&(this->ConfigureNodeFunc).field_0x28;
        puVar4 = (undefined8 *)&(this->ConfigureNodeFunc).field_0x10;
        if (puVar1 != (undefined8 *)0x0) {
          puVar4 = puVar1;
        }
        (**(code **)*puVar4)(puVar4,&local_38.field_0x10);
      }
      this_01 = UOptimusNodeGraph::CreateNodeDirect(this_00,pUVar2,this->NodeName,&local_38);
      if (this_01 != (UOptimusNode *)0x0) {
        pFVar3 = UOptimusNode::GetNodePath(this_01,&local_48);
        ::FString::operator=(&this->NodePath,pFVar3);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        return true;
      }
    }
  }
  return false;
}

// Undo @ 14e10a780

bool __thiscall
FOptimusNodeGraphAction_AddNode::Undo
          (FOptimusNodeGraphAction_AddNode *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  UOptimusNodeGraph *this_00;
  undefined4 uVar2;
  bool bVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  if ((pUVar4 != (UOptimusNode *)0x0) &&
     (this_00 = (UOptimusNodeGraph *)pUVar4->_padding_, this_00 != (UOptimusNodeGraph *)0x0)) {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      uVar2 = *(undefined4 *)((longlong)&pUVar4->_padding_ + 4);
      (this->NodeName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar4->_padding_;
      (this->NodeName).Number = uVar2;
      bVar3 = UOptimusNodeGraph::RemoveNodeDirect(this_00,pUVar4,true);
      return bVar3;
    }
  }
  return false;
}

// FOptimusNodeGraphAction_AddNode @ 14e153d30

FOptimusNodeGraphAction_AddNode * __thiscall
FOptimusNodeGraphAction_AddNode::FOptimusNodeGraphAction_AddNode
          (FOptimusNodeGraphAction_AddNode *this,FString *param_1,UClass *param_2,FName param_3,
          TFunction<bool___cdecl(UOptimusNode_*)> *param_4)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FOptimusNodeGraphAction_AddNode *pFVar5;
  FString *pFVar6;
  longlong *plVar7;
  FString local_48;
  
  *(undefined8 *)&this->field_0x8 = 0;
  pFVar1 = &this->NodeClassPath;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FOptimusNodeGraphAction_AddNode__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeClassPath).Data.ArrayNum = 0;
  (this->NodeClassPath).Data.ArrayMax = 0;
  *(undefined8 *)&this->ConfigureNodeFunc = 0;
  *(undefined8 *)&(this->ConfigureNodeFunc).field_0x28 = 0;
  (this->GraphPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphPath).Data.ArrayNum = 0;
  (this->GraphPath).Data.ArrayMax = 0;
  (this->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  (this->NodeName).ComparisonIndex = 0;
  (this->NodeName).Number = 0;
  if (param_2 == (UClass *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563408655>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x10f,"InNodeClass != nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FOptimusNodeGraphAction_AddNode *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    ::FString::operator=(&this->GraphPath,param_1);
    pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_48,(UObject *)0x0)
    ;
    if (pFVar1 != pFVar6) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->NodeClassPath).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (this->NodeClassPath).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    this->NodeName = param_3;
    TFunction<bool___cdecl(UOptimusNode_*)>::operator=(&this->ConfigureNodeFunc,param_4);
    FOptimusAction::SetTitlef<>
              ((FOptimusAction *)this,(TCheckedFormatStringPrivate<wchar_t>)0x152e07898);
  }
  if (*(longlong *)param_4 != 0) {
    plVar7 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return this;
}

// ~FOptimusNodeGraphAction_AddNode @ 14e161670

void __thiscall
FOptimusNodeGraphAction_AddNode::~FOptimusNodeGraphAction_AddNode
          (FOptimusNodeGraphAction_AddNode *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->NodePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->ConfigureNodeFunc != 0) {
    plVar2 = *(longlong **)&(this->ConfigureNodeFunc).field_0x28;
    plVar3 = (longlong *)&(this->ConfigureNodeFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar1 = (this->NodeClassPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FOptimusAction__6B_;
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// GetNode @ 14e1cabe0

UOptimusNode * __thiscall
FOptimusNodeGraphAction_AddNode::GetNode
          (FOptimusNodeGraphAction_AddNode *this,IOptimusPathResolver *param_1)

{
  UOptimusNode *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e1cabed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  return pUVar1;
}

