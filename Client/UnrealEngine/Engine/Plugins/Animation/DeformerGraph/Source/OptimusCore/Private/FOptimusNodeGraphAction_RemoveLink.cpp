// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e10d1d0

UScriptStruct * __cdecl FOptimusNodeGraphAction_RemoveLink::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveLink.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveLink.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveLink,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_RemoveLink");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveLink.OuterSingleton;
}

// Do @ 14e10d2c0

bool __thiscall
FOptimusNodeGraphAction_RemoveLink::Do
          (FOptimusNodeGraphAction_RemoveLink *this,IOptimusPathResolver *param_1)

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
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->field_0x18);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return (bool)this->field_0x38;
  }
  lVar7 = (**(code **)((longlong)*param_1 + 0x28))(param_1,&this->field_0x28);
  if (lVar7 == 0) {
    return (bool)this->field_0x38;
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

// Undo @ 14e10d310

bool __thiscall
FOptimusNodeGraphAction_RemoveLink::Undo
          (FOptimusNodeGraphAction_RemoveLink *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusNodePin *this_00;
  UOptimusNodePin *pUVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  UOptimusNodeGraph *this_01;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->field_0x18);
  if (this_00 == (UOptimusNodePin *)0x0) {
LAB_14e174e8a:
    return (bool)this->field_0x38;
  }
  pUVar3 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->field_0x28);
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

// FOptimusNodeGraphAction_RemoveLink @ 14e154e20

FOptimusNodeGraphAction_RemoveLink * __thiscall
FOptimusNodeGraphAction_RemoveLink::FOptimusNodeGraphAction_RemoveLink
          (FOptimusNodeGraphAction_RemoveLink *this,UOptimusNodePin *param_1,
          UOptimusNodePin *param_2)

{
  undefined1 *puVar1;
  FString local_18;
  
  FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
            ((FOptimusNodeGraphAction_AddRemoveLink *)this,param_1,param_2,false);
  *(undefined ***)this = &___7FOptimusNodeGraphAction_RemoveLink__6B_;
  ::FString::PrintfImpl(&local_18,L"Remove Link");
  puVar1 = &this->field_0x8;
  if ((FString *)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x10 = local_18.Data.ArrayNum;
    *(int *)&this->field_0x14 = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// FOptimusNodeGraphAction_RemoveLink @ 14e154ec0

FOptimusNodeGraphAction_RemoveLink * __thiscall
FOptimusNodeGraphAction_RemoveLink::FOptimusNodeGraphAction_RemoveLink
          (FOptimusNodeGraphAction_RemoveLink *this,UOptimusNodeLink *param_1)

{
  undefined1 *puVar1;
  FString local_18;
  
  FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
            ((FOptimusNodeGraphAction_AddRemoveLink *)this,
             (param_1->NodeOutputPin).field0_0x0.DebugPtr,
             (param_1->NodeInputPin).field0_0x0.DebugPtr,false);
  *(undefined ***)this = &___7FOptimusNodeGraphAction_RemoveLink__6B_;
  ::FString::PrintfImpl(&local_18,L"Remove Link");
  puVar1 = &this->field_0x8;
  if ((FString *)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x10 = local_18.Data.ArrayNum;
    *(int *)&this->field_0x14 = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

