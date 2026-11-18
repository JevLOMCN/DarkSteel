// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e109bc0

UScriptStruct * __cdecl FOptimusNodeGraphAction_RemoveGraph::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_RemoveGraph");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveGraph.OuterSingleton;
}

// Do @ 14e109cc0

bool __thiscall
FOptimusNodeGraphAction_RemoveGraph::Do
          (FOptimusNodeGraphAction_RemoveGraph *this,IOptimusPathResolver *param_1)

{
  undefined1 uVar1;
  UObject *pUVar2;
  longlong *plVar3;
  FBinaryObjectWriter local_b8;
  
  pUVar2 = (UObject *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if ((pUVar2 != (UObject *)0x0) &&
     (plVar3 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1,&this->GraphOwnerPath),
     plVar3 != (longlong *)0x0)) {
    Optimus::FBinaryObjectWriter::FBinaryObjectWriter(&local_b8,pUVar2,&this->GraphData);
    FArchive::~FArchive((FArchive *)&local_b8);
    uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,pUVar2,1);
    return (bool)uVar1;
  }
  return false;
}

// Undo @ 14e109e40

bool __thiscall
FOptimusNodeGraphAction_RemoveGraph::Undo
          (FOptimusNodeGraphAction_RemoveGraph *this,IOptimusPathResolver *param_1)

{
  char cVar1;
  longlong *plVar2;
  UObject *pUVar3;
  undefined1 local_res8 [4];
  undefined1 local_resc;
  FBinaryObjectReader local_a8;
  
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1,&this->GraphOwnerPath);
  if (plVar2 != (longlong *)0x0) {
    local_resc = 0;
    pUVar3 = (UObject *)
             (**(code **)(*plVar2 + 0x38))(plVar2,this->GraphType,this->GraphName,local_res8);
    if (pUVar3 != (UObject *)0x0) {
      Optimus::FBinaryObjectReader::FBinaryObjectReader(&local_a8,pUVar3,&this->GraphData);
      FArchive::~FArchive((FArchive *)&local_a8);
      cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,pUVar3,this->GraphIndex);
      if (cVar1 != '\0') {
        return true;
      }
      Optimus::RemoveObject(pUVar3);
    }
  }
  return false;
}

// FOptimusNodeGraphAction_RemoveGraph @ 14e154c50

FOptimusNodeGraphAction_RemoveGraph * __thiscall
FOptimusNodeGraphAction_RemoveGraph::FOptimusNodeGraphAction_RemoveGraph
          (FOptimusNodeGraphAction_RemoveGraph *this,UOptimusNodeGraph *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  FOptimusNodeGraphAction_RemoveGraph *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  void *local_38 [2];
  void *local_28 [2];
  
  pFVar1 = &this->GraphPath;
  this->_padding_ = 0;
  pFVar2 = &this->GraphOwnerPath;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_RemoveGraph__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphPath).Data.ArrayNum = 0;
  (this->GraphPath).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphOwnerPath).Data.ArrayNum = 0;
  (this->GraphOwnerPath).Data.ArrayMax = 0;
  (this->GraphName).ComparisonIndex = 0;
  (this->GraphName).Number = 0;
  (this->GraphData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphData).ArrayNum = 0;
  (this->GraphData).ArrayMax = 0;
  if (param_1 == (UOptimusNodeGraph *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563408499>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x73,"InGraph");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FOptimusNodeGraphAction_RemoveGraph *)(*pcVar4)();
      return pFVar7;
    }
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x20))(&param_1->_padding_,local_38);
    if (pFVar1 != (FString *)puVar8) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar8;
      *puVar8 = 0;
      (this->GraphPath).Data.ArrayNum = *(int *)(puVar8 + 1);
      (this->GraphPath).Data.ArrayMax = *(int *)((longlong)puVar8 + 0xc);
      puVar8[1] = 0;
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_);
    puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,local_28);
    if (pFVar2 != (FString *)puVar8) {
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar8;
      *puVar8 = 0;
      (this->GraphOwnerPath).Data.ArrayNum = *(int *)(puVar8 + 1);
      (this->GraphOwnerPath).Data.ArrayMax = *(int *)((longlong)puVar8 + 0xc);
      puVar8[1] = 0;
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    this->GraphType = param_1->GraphType;
    uVar5 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->GraphName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->GraphName).Number = uVar5;
    plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_);
    plVar10 = (longlong *)(**(code **)(*plVar9 + 0x28))(plVar9);
    plVar9 = (longlong *)*plVar10;
    for (plVar12 = plVar9; plVar12 != plVar9 + (int)plVar10[1]; plVar12 = plVar12 + 1) {
      if ((UOptimusNodeGraph *)*plVar12 == param_1) {
        iVar11 = (int)((longlong)plVar12 - (longlong)plVar9 >> 3);
        goto LAB_14e154de4;
      }
    }
    iVar11 = -1;
LAB_14e154de4:
    this->GraphIndex = iVar11;
    FOptimusAction::SetTitlef<>
              ((FOptimusAction *)this,(TCheckedFormatStringPrivate<wchar_t>)0x152e07840);
  }
  return this;
}

