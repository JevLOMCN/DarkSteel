// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e10a080

UScriptStruct * __cdecl FOptimusNodeGraphAction_RenameGraph::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RenameGraph.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RenameGraph.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RenameGraph,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_RenameGraph");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RenameGraph.OuterSingleton;
}

// Do @ 14e10a0c0

bool __thiscall
FOptimusNodeGraphAction_RenameGraph::Do
          (FOptimusNodeGraphAction_RenameGraph *this,IOptimusPathResolver *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  FString *pFVar5;
  FString local_18;
  
  lVar3 = (**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if ((lVar3 != 0) &&
     (plVar4 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1,&this->GraphOwnerPath),
     plVar4 != (longlong *)0x0)) {
    pcVar1 = *(code **)(*plVar4 + 0x58);
    pFVar5 = ::FName::ToString(&this->NewGraphName,&local_18);
    cVar2 = (*pcVar1)(plVar4,lVar3,pFVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (cVar2 != '\0') {
      pFVar5 = (FString *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28,&local_18);
      ::FString::operator=(&this->GraphPath,pFVar5);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// Undo @ 14e10a1a0

bool __thiscall
FOptimusNodeGraphAction_RenameGraph::Undo
          (FOptimusNodeGraphAction_RenameGraph *this,IOptimusPathResolver *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  FString *pFVar5;
  FString local_18;
  
  lVar3 = (**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if ((lVar3 != 0) &&
     (plVar4 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1,&this->GraphOwnerPath),
     plVar4 != (longlong *)0x0)) {
    pcVar1 = *(code **)(*plVar4 + 0x58);
    pFVar5 = ::FName::ToString(&this->OldGraphName,&local_18);
    cVar2 = (*pcVar1)(plVar4,lVar3,pFVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (cVar2 != '\0') {
      pFVar5 = (FString *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28,&local_18);
      ::FString::operator=(&this->GraphPath,pFVar5);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// FOptimusNodeGraphAction_RenameGraph @ 14e155290

FOptimusNodeGraphAction_RenameGraph * __thiscall
FOptimusNodeGraphAction_RenameGraph::FOptimusNodeGraphAction_RenameGraph
          (FOptimusNodeGraphAction_RenameGraph *this,UOptimusNodeGraph *param_1,FName param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  FName FVar5;
  bool bVar6;
  FOptimusNodeGraphAction_RenameGraph *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  FString *pFVar10;
  size_t sVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  FName FVar14;
  int iVar15;
  FName local_res18;
  FScriptContainerElement *local_78;
  undefined4 uStack_6c;
  void *local_68 [2];
  void *local_58 [2];
  TStringView<wchar_t> local_48;
  FString local_38;
  
  pFVar10 = &this->GraphOwnerPath;
  this->_padding_ = 0;
  pFVar1 = &this->GraphPath;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_RenameGraph__6B_;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphOwnerPath).Data.ArrayNum = 0;
  (this->GraphOwnerPath).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphPath).Data.ArrayNum = 0;
  (this->GraphPath).Data.ArrayMax = 0;
  (this->NewGraphName).ComparisonIndex = 0;
  (this->NewGraphName).Number = 0;
  (this->OldGraphName).ComparisonIndex = 0;
  (this->OldGraphName).Number = 0;
  local_res18 = param_2;
  if (param_1 == (UOptimusNodeGraph *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563408575>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0xbf,"InGraph");
    if (!bVar6) {
      return this;
    }
    pcVar3 = (code *)swi(3);
    pFVar7 = (FOptimusNodeGraphAction_RenameGraph *)(*pcVar3)();
    return pFVar7;
  }
  if ((FName)param_1->_padding_ == param_2) {
    return this;
  }
  puVar8 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x20))(&param_1->_padding_,local_68);
  if (pFVar1 != (FString *)puVar8) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar8;
    *puVar8 = 0;
    (this->GraphPath).Data.ArrayNum = *(int *)(puVar8 + 1);
    (this->GraphPath).Data.ArrayMax = *(int *)((longlong)puVar8 + 0xc);
    puVar8[1] = 0;
  }
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_);
  puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,local_58);
  if (pFVar10 != (FString *)puVar8) {
    pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar8;
    *puVar8 = 0;
    (this->GraphOwnerPath).Data.ArrayNum = *(int *)(puVar8 + 1);
    (this->GraphOwnerPath).Data.ArrayMax = *(int *)((longlong)puVar8 + 0xc);
    puVar8[1] = 0;
  }
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  pFVar10 = ::FName::ToString(&local_res18,&local_38);
  iVar15 = 0;
  if ((pFVar10->Data).ArrayNum == 0) {
    local_78 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_78 = (pFVar10->Data).AllocatorInstance.Data;
    if (local_78 == (FScriptContainerElement *)0x0) goto LAB_14e15541b;
  }
  sVar11 = wcslen((wchar_t *)local_78);
  iVar15 = (int)sVar11;
LAB_14e15541b:
  pUVar13 = (UObject *)param_1->_padding_;
  pUVar12 = UOptimusNodeGraph::StaticClass();
  local_48._12_4_ = uStack_6c;
  local_48.Size = iVar15;
  local_48.DataPtr = (wchar_t *)local_78;
  pUVar13 = StaticFindObject(pUVar12,pUVar13,&local_48,None);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar5 = local_res18;
  if (pUVar13 != (UObject *)0x0) {
    FVar14 = (FName)UOptimusNodeGraph::StaticClass();
    local_res18 = MakeUniqueObjectName
                            ((UObject *)&stack0x00000008,(UClass *)param_1->_padding_,FVar14,
                             FVar5.ComparisonIndex.Value.Value);
    local_res18 = *(FName *)local_res18;
  }
  this->NewGraphName = local_res18;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->OldGraphName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->OldGraphName).Number = uVar4;
  FOptimusAction::SetTitlef<>
            ((FOptimusAction *)this,(TCheckedFormatStringPrivate<wchar_t>)0x152e07860);
  return this;
}

