// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e10c3c0

UScriptStruct * __cdecl FOptimusNodeGraphAction_AddRemoveLink::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_AddRemoveLink");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_AddRemoveLink.OuterSingleton;
}

// FOptimusNodeGraphAction_AddRemoveLink @ 14e154110

FOptimusNodeGraphAction_AddRemoveLink * __thiscall
FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
          (FOptimusNodeGraphAction_AddRemoveLink *this,FString *param_1,FString *param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FOptimusNodeGraphAction_AddRemoveLink *pFVar3;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveLink__6B_;
  (this->NodeInputPinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeInputPinPath).Data.ArrayNum = 0;
  (this->NodeInputPinPath).Data.ArrayMax = 0;
  (this->NodeOutputPinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeOutputPinPath).Data.ArrayNum = 0;
  (this->NodeOutputPinPath).Data.ArrayMax = 0;
  this->bCanFail = false;
  if ((param_1->Data).ArrayNum < 2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563409025>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x281,"!InNodeOutputPinPath.IsEmpty()");
    if (bVar2) {
code_r0x00014e1541bf:
      pcVar1 = (code *)swi(3);
      pFVar3 = (FOptimusNodeGraphAction_AddRemoveLink *)(*pcVar1)();
      return pFVar3;
    }
  }
  else if ((param_2->Data).ArrayNum < 2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563409025>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x281,"!InNodeInputPinPath.IsEmpty()");
    if (bVar2) goto code_r0x00014e1541bf;
  }
  else {
    ::FString::operator=(&this->NodeOutputPinPath,param_1);
    ::FString::operator=(&this->NodeInputPinPath,param_2);
    this->bCanFail = param_3;
  }
  return this;
}

// FOptimusNodeGraphAction_AddRemoveLink @ 14e154200

FOptimusNodeGraphAction_AddRemoveLink * __thiscall
FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
          (FOptimusNodeGraphAction_AddRemoveLink *this,UOptimusNodePin *param_1,
          UOptimusNodePin *param_2,bool param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UOptimusNode *pUVar5;
  UOptimusNode *pUVar6;
  UOptimusNodeGraph *pUVar7;
  UOptimusNodeGraph *pUVar8;
  FOptimusNodeGraphAction_AddRemoveLink *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  FString local_48;
  FString local_38;
  
  pFVar11 = &this->NodeOutputPinPath;
  this->_padding_ = 0;
  pFVar1 = &this->NodeInputPinPath;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_AddRemoveLink__6B_;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeOutputPinPath).Data.ArrayNum = 0;
  (this->NodeOutputPinPath).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeInputPinPath).Data.ArrayNum = 0;
  (this->NodeInputPinPath).Data.ArrayMax = 0;
  this->bCanFail = false;
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563409005>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x26d,"InNodeOutputPin != nullptr");
    if (bVar4) {
code_r0x00014e1543dd:
      pcVar3 = (code *)swi(3);
      pFVar9 = (FOptimusNodeGraphAction_AddRemoveLink *)(*pcVar3)();
      return pFVar9;
    }
  }
  else if (param_2 == (UOptimusNodePin *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563409005>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x26d,"InNodeInputPin != nullptr");
    if (bVar4) goto code_r0x00014e1543dd;
  }
  else if (param_1->Direction == Output) {
    if (param_2->Direction == Input) {
      pUVar5 = UOptimusNodePin::GetOwningNode(param_1);
      pUVar6 = UOptimusNodePin::GetOwningNode(param_2);
      if (pUVar5 == pUVar6) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5689001813563409008>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                           ,0x270,
                           "InNodeOutputPin->GetOwningNode() != InNodeInputPin->GetOwningNode()");
        if (bVar4) goto code_r0x00014e1543dd;
      }
      else {
        pUVar5 = UOptimusNodePin::GetOwningNode(param_1);
        pUVar7 = UOptimusNode::GetOwningGraph(pUVar5);
        pUVar5 = UOptimusNodePin::GetOwningNode(param_2);
        pUVar8 = UOptimusNode::GetOwningGraph(pUVar5);
        if (pUVar7 == pUVar8) {
          pFVar10 = UOptimusNodePin::GetPinPath(param_1,&local_48);
          if (pFVar11 != pFVar10) {
            pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            (pFVar11->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (this->NodeOutputPinPath).Data.ArrayNum = (pFVar10->Data).ArrayNum;
            (this->NodeOutputPinPath).Data.ArrayMax = (pFVar10->Data).ArrayMax;
            (pFVar10->Data).ArrayNum = 0;
            (pFVar10->Data).ArrayMax = 0;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          pFVar11 = UOptimusNodePin::GetPinPath(param_2,&local_38);
          if (pFVar1 != pFVar11) {
            pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            (pFVar1->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (this->NodeInputPinPath).Data.ArrayNum = (pFVar11->Data).ArrayNum;
            (this->NodeInputPinPath).Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          this->bCanFail = param_3;
        }
        else {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5689001813563409009>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                             ,0x271,
                             "InNodeOutputPin->GetOwningNode()->GetOwningGraph() == InNodeInputPin->GetOwningNode()->GetOwningGraph()"
                            );
          if (bVar4) goto code_r0x00014e1543dd;
        }
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5689001813563409007>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                         ,0x26f,"InNodeInputPin->GetDirection() == EOptimusNodePinDirection::Input")
      ;
      if (bVar4) goto code_r0x00014e1543dd;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563409006>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x26e,"InNodeOutputPin->GetDirection() == EOptimusNodePinDirection::Output")
    ;
    if (bVar4) goto code_r0x00014e1543dd;
  }
  return this;
}

// AddLink @ 14e174e60

bool __thiscall
FOptimusNodeGraphAction_AddRemoveLink::AddLink
          (FOptimusNodeGraphAction_AddRemoveLink *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusNodePin *this_00;
  UOptimusNodePin *pUVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  UOptimusNodeGraph *this_01;
  
  this_00 = (UOptimusNodePin *)
            (**(code **)((longlong)*param_1 + 0x28))(param_1,&this->NodeOutputPinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
LAB_14e174e8a:
    return this->bCanFail;
  }
  pUVar3 = (UOptimusNodePin *)
           (**(code **)((longlong)*param_1 + 0x28))(param_1,&this->NodeInputPinPath);
  if (pUVar3 == (UOptimusNodePin *)0x0) goto LAB_14e174e8a;
  pUVar4 = UOptimusNodePin::GetOwningNode(this_00);
  this_01 = (UOptimusNodeGraph *)pUVar4->_padding_;
  if (this_01 != (UOptimusNodeGraph *)0x0) {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14e174ee9;
  }
  this_01 = (UOptimusNodeGraph *)0x0;
LAB_14e174ee9:
  bVar2 = UOptimusNodeGraph::AddLinkDirect(this_01,this_00,pUVar3);
  return bVar2;
}

// RemoveLink @ 14e2136a0

bool __thiscall
FOptimusNodeGraphAction_AddRemoveLink::RemoveLink
          (FOptimusNodeGraphAction_AddRemoveLink *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UOptimusNodePin *this_00;
  longlong lVar7;
  UOptimusNode *pUVar8;
  UClass *pUVar9;
  uint uVar10;
  longlong lVar11;
  UOptimusNodeGraph *this_01;
  
  this_00 = (UOptimusNodePin *)
            (**(code **)((longlong)*param_1 + 0x28))(param_1,&this->NodeOutputPinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return this->bCanFail;
  }
  lVar7 = (**(code **)((longlong)*param_1 + 0x28))(param_1,&this->NodeInputPinPath);
  if (lVar7 == 0) {
    return this->bCanFail;
  }
  pUVar8 = UOptimusNodePin::GetOwningNode(this_00);
  this_01 = (UOptimusNodeGraph *)pUVar8->_padding_;
  if (this_01 != (UOptimusNodeGraph *)0x0) {
    pUVar9 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar9->_padding_)) goto LAB_14e213737;
  }
  this_01 = (UOptimusNodeGraph *)0x0;
LAB_14e213737:
  if ((this_00->Direction != Output) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNodeOutputPin->GetDirection() == EOptimusNodePinDirection::Output",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                         ,0x971,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((*(char *)(lVar7 + 0x29) != '\x01') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNodeInputPin->GetDirection() == EOptimusNodePinDirection::Input",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                         ,0x972,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((this_00->Direction == Output) && (*(char *)(lVar7 + 0x29) == '\x01')) &&
     (uVar10 = 0, 0 < (this_01->Links).ArrayNum)) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this_01->Links).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      lVar2 = *(longlong *)((this_01->Links).AllocatorInstance.Data + lVar11);
      if ((*(UOptimusNodePin **)(lVar2 + 0x28) == this_00) && (*(longlong *)(lVar2 + 0x30) == lVar7)
         ) {
        UOptimusNodeGraph::RemoveLinkByIndex(this_01,uVar10);
        return true;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this_01->Links).ArrayNum);
  }
  return false;
}

