// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e1095d0

UScriptStruct * __cdecl FOptimusNodeGraphAction_AddGraph::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddGraph.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddGraph.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddGraph,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_AddGraph");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddGraph.OuterSingleton;
}

// Do @ 14e1096a0

bool __thiscall
FOptimusNodeGraphAction_AddGraph::Do
          (FOptimusNodeGraphAction_AddGraph *this,IOptimusPathResolver *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  UObject *pUVar6;
  undefined8 uVar7;
  FString *pFVar8;
  longlong *plVar9;
  undefined1 local_res8 [4];
  undefined1 local_resc;
  UObject *local_res10;
  void *local_28 [2];
  
  plVar5 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1,&this->GraphOwnerPath);
  if (plVar5 == (longlong *)0x0) {
    return false;
  }
  local_resc = 0;
  pUVar6 = (UObject *)
           (**(code **)(*plVar5 + 0x38))(plVar5,this->GraphType,this->GraphName,local_res8);
  if (pUVar6 == (UObject *)0x0) {
    return false;
  }
  if (*(void **)&this->ConfigureGraphFunc != (void *)0x0) {
    local_res10 = pUVar6;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ConfigureGraphFunc);
    plVar1 = *(longlong **)&(this->ConfigureGraphFunc).field_0x28;
    pcVar2 = *(code **)&this->ConfigureGraphFunc;
    plVar9 = (longlong *)&(this->ConfigureGraphFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar9 = plVar1;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar4 = (*pcVar2)(uVar7,&local_res10);
    if (cVar4 == '\0') goto LAB_14e109746;
  }
  cVar4 = (**(code **)(*plVar5 + 0x40))(plVar5,pUVar6,this->GraphIndex);
  if (cVar4 != '\0') {
    if (this->GraphName == (FName)0x0) {
      uVar3 = *(undefined4 *)&pUVar6->field_0x1c;
      (this->GraphName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar6->field_0x18;
      (this->GraphName).Number = uVar3;
    }
    pFVar8 = (FString *)(**(code **)(*(longlong *)(pUVar6 + 1) + 0x20))(pUVar6 + 1,local_28);
    ::FString::operator=(&this->GraphPath,pFVar8);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    return true;
  }
LAB_14e109746:
  Optimus::RemoveObject(pUVar6);
  return false;
}

// Undo @ 14e1097b0

bool __thiscall
FOptimusNodeGraphAction_AddGraph::Undo
          (FOptimusNodeGraphAction_AddGraph *this,IOptimusPathResolver *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = (**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if (lVar2 == 0) {
    return false;
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00014e1097f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,1,*(code **)(*plVar3 + 0x48));
  return (bool)uVar1;
}

// FOptimusNodeGraphAction_AddGraph @ 14e153a20

FOptimusNodeGraphAction_AddGraph * __thiscall
FOptimusNodeGraphAction_AddGraph::FOptimusNodeGraphAction_AddGraph
          (FOptimusNodeGraphAction_AddGraph *this,FString *param_1,EOptimusNodeGraphType param_2,
          FName param_3,int param_4,TFunction<bool___cdecl(UOptimusNodeGraph_*)> *param_5)

{
  longlong *plVar1;
  FString local_38;
  
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddGraph__6B_;
  (this->GraphName).ComparisonIndex = 0;
  (this->GraphName).Number = 0;
  *(undefined8 *)&this->ConfigureGraphFunc = 0;
  *(undefined8 *)&(this->ConfigureGraphFunc).field_0x28 = 0;
  (this->GraphOwnerPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphOwnerPath).Data.ArrayNum = 0;
  (this->GraphOwnerPath).Data.ArrayMax = 0;
  (this->GraphPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphPath).Data.ArrayNum = 0;
  (this->GraphPath).Data.ArrayMax = 0;
  ::FString::operator=(&this->GraphOwnerPath,param_1);
  this->GraphIndex = param_4;
  this->GraphType = param_2;
  this->GraphName = param_3;
  TFunction<bool___cdecl(UOptimusNodeGraph_*)>::operator=(&this->ConfigureGraphFunc,param_5);
  ::FString::PrintfImpl(&local_38,L"Add graph");
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
  if (*(longlong *)param_5 != 0) {
    plVar1 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return this;
}

// ~FOptimusNodeGraphAction_AddGraph @ 14e161600

void __thiscall
FOptimusNodeGraphAction_AddGraph::~FOptimusNodeGraphAction_AddGraph
          (FOptimusNodeGraphAction_AddGraph *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->GraphPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->ConfigureGraphFunc != 0) {
    plVar2 = *(longlong **)&(this->ConfigureGraphFunc).field_0x28;
    plVar3 = (longlong *)&(this->ConfigureGraphFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar1 = (this->GraphOwnerPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// GetGraph @ 14e1c5680

UOptimusNodeGraph * __thiscall
FOptimusNodeGraphAction_AddGraph::GetGraph
          (FOptimusNodeGraphAction_AddGraph *this,IOptimusPathResolver *param_1)

{
  UOptimusNodeGraph *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e1c568d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UOptimusNodeGraph *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  return pUVar1;
}

